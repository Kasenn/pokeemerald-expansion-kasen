#include "global.h"
#include "pokemon.h"
#include "egg_hatch.h"
#include "pokedex.h"
#include "constants/items.h"
#include "script.h"
#include "decompress.h"
#include "task.h"
#include "palette.h"
#include "main.h"
#include "event_data.h"
#include "sound.h"
#include "constants/songs.h"
#include "text.h"
#include "text_window.h"
#include "string_util.h"
#include "menu.h"
#include "trig.h"
#include "random.h"
#include "malloc.h"
#include "dma3.h"
#include "gpu_regs.h"
#include "bg.h"
#include "m4a.h"
#include "window.h"
#include "graphics.h"
#include "constants/abilities.h"
#include "daycare.h"
#include "overworld.h"
#include "scanline_effect.h"
#include "field_weather.h"
#include "international_string_util.h"
#include "naming_screen.h"
#include "pokemon_storage_system.h"
#include "field_screen_effect.h"
#include "trade.h"
#include "data.h"
#include "battle.h" // to get rid of later
#include "constants/rgb.h"
#include "party_menu.h"

#define GFXTAG_EGG       12345
#define PALTAG_EGG       54321
#define EGG_X (DISPLAY_WIDTH / 2)
#define EGG_Y (DISPLAY_HEIGHT / 2 - 5)
#define NUM_EGGS 5

struct FunctionData
{
    u8 state;
    u8 delayTimer;
    u8 windowId;
    u8 textColor[3];
};

struct EggHatchData
{
    u8 eggSpriteId;
    u8 monSpriteId;
    u8 eggPartyId;
    enum Species species;
    s8 x;
    s8 y;
};

extern const u8 gText_HatchedFromEgg[];
static const u16 sEggPalette[]  = INCGFX_U16("graphics/pokemon/egg/normal.pal", ".gbapal");
static const u8 sEggHatchTiles[] = INCGFX_U8("graphics/pokemon/egg/hatch.png", ".4bpp");

static void Task_EggHatch(u8);
static void CB2_LoadEggHatch(void);
static void CB2_EggHatch(void);
static void SpriteCB_Egg_Shake1(struct Sprite *);
static void SpriteCB_Egg_Shake2(struct Sprite *);
static void SpriteCB_Egg_Shake3(struct Sprite *);
static void SpriteCB_Egg_WaitHatch(struct Sprite *);
static void SpriteCB_Egg_Hatch(struct Sprite *);
static void SpriteCB_Egg_Reveal(struct Sprite *);
static void EggHatchPrintMessage(u8, u8 *, u8, u8, u8);

static struct FunctionData *sFunctionData;
static struct EggHatchData *sEggHatchData[NUM_EGGS];

static u8 *sEggHatchSpritesGfxBuffer;
static u8 *sEggHatchSpritesGfx[PARTY_SIZE];
static struct SpriteFrameImage sEggHatchFrameImages[PARTY_SIZE][MAX_MON_PIC_FRAMES];

static const struct OamData sOamData_Egg =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const union AnimCmd sSpriteAnim_Egg_Normal[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Egg_Cracked1[] =
{
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Egg_Cracked2[] =
{
    ANIMCMD_FRAME(32, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Egg_Cracked3[] =
{
    ANIMCMD_FRAME(48, 5),
    ANIMCMD_END
};

enum {
    EGG_ANIM_NORMAL,
    EGG_ANIM_CRACKED_1,
    EGG_ANIM_CRACKED_2,
    EGG_ANIM_CRACKED_3,
};

static const union AnimCmd *const sSpriteAnimTable_Egg[] =
{
    [EGG_ANIM_NORMAL]    = sSpriteAnim_Egg_Normal,
    [EGG_ANIM_CRACKED_1] = sSpriteAnim_Egg_Cracked1,
    [EGG_ANIM_CRACKED_2] = sSpriteAnim_Egg_Cracked2,
    [EGG_ANIM_CRACKED_3] = sSpriteAnim_Egg_Cracked3,
};

static const struct SpriteSheet sEggHatch_Sheet =
{
    .data = sEggHatchTiles,
    .size = sizeof(sEggHatchTiles),
    .tag = GFXTAG_EGG,
};

static const struct SpritePalette sEgg_SpritePalette =
{
    .data = sEggPalette,
    .tag = PALTAG_EGG
};

static const struct SpriteTemplate sSpriteTemplate_Egg =
{
    .tileTag = GFXTAG_EGG,
    .paletteTag = PALTAG_EGG,
    .oam = &sOamData_Egg,
    .anims = sSpriteAnimTable_Egg,
};

static const struct BgTemplate sBgTemplates_EggHatch[] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 24,
        .screenSize = 3,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },

    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 8,
        .screenSize = 1,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
};

static const struct WindowTemplate sWinTemplates_EggHatch[] =
{
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 0,
        .baseBlock = 64
    },
    DUMMY_WIN_TEMPLATE
};

struct EggHatchCoords
{
    s8 x;
    s8 y;
};

static const struct EggHatchCoords sEggHatchCoords[NUM_EGGS][NUM_EGGS] =
{
    { {0, 0} },
    { {-32, 0}, {32, 0} },
    { {-64, 0}, {0, 0}, {64, 0} },
    { {-32, 0}, {32, 0}, {-64, -32}, {64, -32} },
    { {-32, -32}, {32, -32}, {-64, 0}, {0, 0}, {64, 0} },
};

static void EggHatchSetCoords(void)
{
    u8 viableCount = 0;
    u8 slot = 0;

    for (u32 i = 0; i < NUM_EGGS; i++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][sEggHatchData[i]->eggPartyId], MON_DATA_SPECIES) != SPECIES_NONE)
            viableCount++;
    }

    for (u32 i = 0; i < NUM_EGGS; i++)
    {
        enum Species species = GetMonData(&gParties[B_TRAINER_PLAYER][sEggHatchData[i]->eggPartyId], MON_DATA_SPECIES);
        if (species != SPECIES_NONE && viableCount > 0)
        {
            sEggHatchData[i]->x = sEggHatchCoords[viableCount - 1][slot].x;
            sEggHatchData[i]->y = sEggHatchCoords[viableCount - 1][slot].y;
            slot++;
        }
        else
        {
            sEggHatchData[i]->x = 0;
            sEggHatchData[i]->y = 0;
        }
    }
}

static void AllocateEggHatchMonSpritesGfx(void)
{
    sEggHatchSpritesGfxBuffer = AllocZeroed(MON_PIC_SIZE * MAX_MON_PIC_FRAMES * PARTY_SIZE);

    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        sEggHatchSpritesGfx[i] = sEggHatchSpritesGfxBuffer + (i * MON_PIC_SIZE * MAX_MON_PIC_FRAMES);
        for (u32 j = 0; j < MAX_MON_PIC_FRAMES; j++)
        {
            sEggHatchFrameImages[i][j].data = sEggHatchSpritesGfx[i] + (j * MON_PIC_SIZE);
            sEggHatchFrameImages[i][j].size = MON_PIC_SIZE;
        }
    }
}

static void FreeEggHatchMonSpritesGfx(void)
{
    TRY_FREE_AND_SET_NULL(sEggHatchSpritesGfxBuffer);
}

static void CreateHatchedMon(struct Pokemon *egg, struct Pokemon *temp)
{
    enum Species species;
    u32 personality, pokerus;
    enum PokeBall ball;
    u8 i, friendship, language, gameMet, markings, isModernFatefulEncounter;
    bool32 isShiny;
    enum Move moves[MAX_MON_MOVES];
    u32 ivs[NUM_STATS];

    species = GetMonData(egg, MON_DATA_SPECIES);

    for (i = 0; i < MAX_MON_MOVES; i++)
        moves[i] = GetMonData(egg, MON_DATA_MOVE1 + i);

    personality = GetMonData(egg, MON_DATA_PERSONALITY);

    for (i = 0; i < NUM_STATS; i++)
        ivs[i] = GetMonData(egg, MON_DATA_HP_IV + i);

    // The language is initially read from the Egg but is later overwritten below
    language = GetMonData(egg, MON_DATA_LANGUAGE);
    gameMet = GetMonData(egg, MON_DATA_MET_GAME);
    markings = GetMonData(egg, MON_DATA_MARKINGS);
    pokerus = GetMonData(egg, MON_DATA_POKERUS);
    isModernFatefulEncounter = GetMonData(egg, MON_DATA_MODERN_FATEFUL_ENCOUNTER);
    isShiny = GetMonData(egg, MON_DATA_IS_SHINY);
    ball = GetMonData(egg, MON_DATA_POKEBALL);

    CreateMonWithIVs(temp, species, EGG_HATCH_LEVEL, personality, OTID_STRUCT_PLAYER_ID, USE_RANDOM_IVS);
    SetMonData(temp, MON_DATA_IS_SHINY, &isShiny);

    for (i = 0; i < MAX_MON_MOVES; i++)
        SetMonData(temp, MON_DATA_MOVE1 + i,  &moves[i]);

    for (i = 0; i < NUM_STATS; i++)
        SetMonData(temp, MON_DATA_HP_IV + i,  &ivs[i]);

    language = GAME_LANGUAGE;
    SetMonData(temp, MON_DATA_LANGUAGE, &language);
    SetMonData(temp, MON_DATA_MET_GAME, &gameMet);
    SetMonData(temp, MON_DATA_MARKINGS, &markings);

    friendship = 120;
    SetMonData(temp, MON_DATA_FRIENDSHIP, &friendship);
    SetMonData(temp, MON_DATA_POKERUS, &pokerus);
    SetMonData(temp, MON_DATA_MODERN_FATEFUL_ENCOUNTER, &isModernFatefulEncounter);
    SetMonData(temp, MON_DATA_POKEBALL, &ball);

    *egg = *temp;
}

static void AddHatchedMonToParty(u8 id)
{
    u8 isEgg = 0x46; // ?
    enum NationalDexOrder nationalDexNum;
    u8 name[POKEMON_NAME_LENGTH + 1];
    u16 metLevel;
    metloc_u8_t metLocation;
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][id];
    enum Species species = GetMonData(mon, MON_DATA_SPECIES);
    
    if (species == SPECIES_NONE)
        return;

    CreateHatchedMon(mon, &gParties[B_TRAINER_OPPONENT_A][id]);
    SetMonData(mon, MON_DATA_IS_EGG, &isEgg);

    StringCopy(name, GetSpeciesName(species));
    SetMonData(mon, MON_DATA_NICKNAME, name);

    nationalDexNum = SpeciesToNationalPokedexNum(species);
    GetSetPokedexFlag(nationalDexNum, FLAG_SET_SEEN);
    GetSetPokedexFlag(nationalDexNum, FLAG_SET_CAUGHT);

    GetMonNickname(mon, gStringVar1);

    // A met level of 0 is interpreted on the summary screen as "hatched at"
    metLevel = 0;
    SetMonData(mon, MON_DATA_MET_LEVEL, &metLevel);

    metLocation = GetCurrentRegionMapSectionId();
    SetMonData(mon, MON_DATA_MET_LOCATION, &metLocation);

    MonRestorePP(mon);
    CalculateMonStats(mon);
}

void ScriptHatchMon(void)
{
    AddHatchedMonToParty(gSpecialVar_0x8004);
}

bool8 CheckDaycareMonReceivedMail(void)
{
    return FALSE;
}

static u8 EggHatchCreateMonSprite(u8 state, u8 partyId, u16 *speciesLoc, s8 x, s8 y)
{
    u8 spriteId = 0;
    struct Pokemon *mon = NULL;
    enum Species species = SPECIES_NONE;
    mon = &gParties[B_TRAINER_PLAYER][partyId];
    species = GetMonData(mon, MON_DATA_SPECIES);
    
    switch (state)
    {
    case 0:
        // Load mon sprite gfx
        {
            u32 pid = GetMonData(mon, MON_DATA_PERSONALITY);
            HandleLoadSpecialPokePicIsEgg(TRUE,
                                     sEggHatchSpritesGfx[partyId],
                                     species, pid, FALSE);
            LoadSpritePaletteWithTag(GetMonFrontSpritePal(mon), species);
            *speciesLoc = species;
        }
        break;
    case 1:
        // Create mon sprite
        SetMultiuseSpriteTemplateToPokemon(species, B_POSITION_OPPONENT_LEFT);
        gMultiuseSpriteTemplate.images = sEggHatchFrameImages[partyId];
        spriteId = CreateSprite(&gMultiuseSpriteTemplate, EGG_X + x, EGG_Y + y, 6 - partyId);
        gSprites[spriteId].invisible = TRUE;
        gSprites[spriteId].callback = SpriteCallbackDummy;
        break;
    }
    return spriteId;
}

static const u16 *const sBattleTextboxColor[] =
{
    gBattleTextboxPalette,
    gBattleTextboxPalette2,
    gBattleTextboxPalette3,
    gBattleTextboxPalette4,
    gBattleTextboxPalette5,
    gBattleTextboxPalette6,
    gBattleTextboxPalette7,
    gBattleTextboxPalette8,
};

static void VBlankCB_EggHatch(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

void EggHatch(void)
{
    LockPlayerFieldControls();
    CreateTask(Task_EggHatch, 10);
    FadeScreen(FADE_TO_BLACK, 0);
}

static void Task_EggHatch(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        SetMainCallback2(CB2_LoadEggHatch);
        gFieldCallback = FieldCB_ContinueScriptHandleMusic;
        DestroyTask(taskId);
    }
}

static void CB2_LoadEggHatch(void)
{
    switch (gMain.state)
    {
    case 0:
        SetGpuReg(REG_OFFSET_DISPCNT, 0);

        for (int i = 0; i < NUM_EGGS; i++)
        {
            sEggHatchData[i] = Alloc(sizeof(*sEggHatchData[i]));
            sEggHatchData[i]->eggPartyId = i + 1;
        }
        sFunctionData = Alloc(sizeof(*sFunctionData));

        AllocateEggHatchMonSpritesGfx();
        EggHatchSetCoords();

        SetVBlankCallback(VBlankCB_EggHatch);
        gSpecialVar_0x8005 = GetCurrentMapMusic();
        FlagSet(FLAG_EGGS_HATCHED);
        
        ResetTempTileDataBuffers();
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sBgTemplates_EggHatch, ARRAY_COUNT(sBgTemplates_EggHatch));

        ChangeBgX(1, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        ChangeBgX(0, 0, BG_COORD_SET);
        ChangeBgY(0, 0, BG_COORD_SET);

        SetBgAttribute(1, BG_ATTR_PRIORITY, 2);
        SetBgTilemapBuffer(1, Alloc(0x1000));
        SetBgTilemapBuffer(0, Alloc(0x2000));

        DeactivateAllTextPrinters();
        ResetPaletteFade();
        FreeAllSpritePalettes();
        ResetSpriteData();
        ResetTasks();
        ScanlineEffect_Stop();
        m4aSoundVSyncOn();
        gMain.state++;
        break;
    case 1:
        InitWindows(sWinTemplates_EggHatch);
        sFunctionData->windowId = 0;
        gMain.state++;
        break;
    case 2:
        u16 color = gSaveBlock1Ptr->battleInterfaceColor;

        DecompressAndLoadBgGfxUsingHeap(0, gBattleTextboxTiles, 0, 0, 0);
        CopyToBgTilemapBuffer(0, gBattleTextboxTilemap, 0, 0);
        LoadPalette(sBattleTextboxColor[color], BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        gMain.state++;
        break;
    case 3:
    {
        for (int i = 1; i < 6; i++)
        {
            enum Species species = GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES);
            if (gSpeciesInfo[species].eggId != EGG_ID_NONE)
            {
                u32 *tempSprite = malloc_and_decompress(gEggDatas[gSpeciesInfo[species].eggId].eggHatchGfx, NULL);
                struct SpriteSheet tempSheet;
                tempSheet.data = tempSprite;
                tempSheet.size = 2048;
                tempSheet.tag = GFXTAG_EGG;
                LoadSpriteSheet(&tempSheet);
                Free(tempSprite);

                struct SpritePalette tempPal;
                tempPal.data = gEggDatas[gSpeciesInfo[species].eggId].eggHatchPal;
                tempPal.tag = PALTAG_EGG;
                LoadSpritePalette(&tempPal);
            }
            else
            {
                LoadSpriteSheet(&sEggHatch_Sheet);
                struct SpritePalette tempPal;
                tempPal.data = gSpeciesInfo[species].eggPalette;
                tempPal.tag = PALTAG_EGG + i - 1;
                LoadSpritePalette(&tempPal);
            }
        }
        gMain.state++;
        break;
    }
    case 4:
        CopyBgTilemapBufferToVram(0);
        for (int i = 0; i < NUM_EGGS; i++)
            AddHatchedMonToParty(sEggHatchData[i]->eggPartyId);
        gMain.state++;
        break;
    case 5:
        for (int i = 0; i < NUM_EGGS; i++)
            EggHatchCreateMonSprite(0, sEggHatchData[i]->eggPartyId, &sEggHatchData[i]->species, sEggHatchData[i]->x, sEggHatchData[i]->y);
        gMain.state++;
        break;
    case 6:
        for (int i = 0; i < NUM_EGGS; i++)
        {
            sEggHatchData[i]->monSpriteId = EggHatchCreateMonSprite(1,
                                                                    sEggHatchData[i]->eggPartyId,
                                                                    &sEggHatchData[i]->species,
                                                                    sEggHatchData[i]->x,
                                                                    sEggHatchData[i]->y);

        }
        gMain.state++;
        break;
    case 7:
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        LoadPalette(gTradeGba2_Pal, BG_PLTT_ID(1), 5 * PLTT_SIZE_4BPP);
        LoadBgTiles(1, gTradeGba_Gfx, 0x1420, 0);
        CopyToBgTilemapBuffer(1, gTradePlatform_Tilemap, 0x1000, 0);
        CopyBgTilemapBufferToVram(1);
        gMain.state++;
        break;
    case 8:
        SetMainCallback2(CB2_EggHatch);
        sFunctionData->state = 0;
        break;
    }
    RunTasks();
    RunTextPrinters();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

#define tTimer data[0]

static void Task_EggHatchPlayBGM(u8 taskId)
{
    if (gTasks[taskId].tTimer == 0)
    {
        StopMapMusic();
        PlayRainStoppingSoundEffect();
    }

    if (gTasks[taskId].tTimer == 1)
        PlayBGM(MUS_EVOLUTION_INTRO);

    if (gTasks[taskId].tTimer > 60)
    {
        PlayBGM(MUS_EVOLUTION);
        DestroyTask(taskId);
    }
    gTasks[taskId].tTimer++;
}

#define sEggId      data[3]
#define sMonId      data[4]

static void CB2_EggHatch(void)
{
    enum Species species;

    switch (sFunctionData->state)
    {
    case 0:
        struct SpriteTemplate template = {0};

        template.tileTag = GFXTAG_EGG;
        template.oam = &sOamData_Egg;
        template.anims = sSpriteAnimTable_Egg;

        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        for (int i = 0; i < NUM_EGGS; i++)
        {
            template.paletteTag = PALTAG_EGG + i;
            sEggHatchData[i]->eggSpriteId = CreateSprite(&template, EGG_X + sEggHatchData[i]->x, EGG_Y + sEggHatchData[i]->y, 5);

            if (GetMonData(&gParties[B_TRAINER_PLAYER][sEggHatchData[i]->eggPartyId], MON_DATA_SPECIES) == SPECIES_NONE)
                gSprites[sEggHatchData[i]->eggSpriteId].invisible = TRUE;
        }
        ShowBg(0);
        ShowBg(1);
        sFunctionData->state++;
        CreateTask(Task_EggHatchPlayBGM, 5);
        break;
    case 1:
        if (!gPaletteFade.active)
        {
            FillWindowPixelBuffer(sFunctionData->windowId, PIXEL_FILL(0));
            sFunctionData->delayTimer = 0;
            sFunctionData->state++;
        }
        break;
    case 2:
        if (++sFunctionData->delayTimer > 30)
        {
            // Start hatching animation
            sFunctionData->state++;
            for (int i = 0; i < NUM_EGGS; i++)
            {
                gSprites[sEggHatchData[i]->eggSpriteId].sEggId = sEggHatchData[i]->eggPartyId;
                gSprites[sEggHatchData[i]->eggSpriteId].sMonId = sEggHatchData[i]->monSpriteId;
                gSprites[sEggHatchData[i]->eggSpriteId].callback = SpriteCB_Egg_Shake1;
            }
        }
        break;
    case 3:
        // Wait for hatching animation to finish
        if (gSprites[sEggHatchData[0]->eggSpriteId].callback == SpriteCallbackDummy)
        {
            for (int i = 0; i < NUM_EGGS; i++)
            {
                species = GetMonData(&gParties[B_TRAINER_PLAYER][sEggHatchData[i]->eggPartyId], MON_DATA_SPECIES);
                DoMonFrontSpriteAnimation(&gSprites[sEggHatchData[i]->monSpriteId], species, FALSE, 1);
            }
            sFunctionData->state++;
        }
        break;
    case 4:
        // Wait for Pokémon's front sprite animation
        if (gSprites[sEggHatchData[0]->monSpriteId].callback == SpriteCallbackDummy)
            sFunctionData->state++;
        break;
    case 5:
        // "{mon} hatched from egg" message/fanfare
        StringExpandPlaceholders(gStringVar4, gText_HatchedFromEgg);
        EggHatchPrintMessage(sFunctionData->windowId, gStringVar4, 0, 3, TEXT_SKIP_DRAW);
        PlayFanfare(MUS_EVOLVED);
        sFunctionData->state++;
        PutWindowTilemap(sFunctionData->windowId);
        CopyWindowToVram(sFunctionData->windowId, COPYWIN_FULL);
        break;
    case 6:
        if (IsFanfareTaskInactive())
            sFunctionData->state++;
        break;
    case 7: // Twice?
        if (IsFanfareTaskInactive())
            sFunctionData->state++;
        break;
    case 8:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        sFunctionData->state++;
        break;
    case 9:
        if (!gPaletteFade.active)
        {
            FreeEggHatchMonSpritesGfx();
            RemoveWindow(sFunctionData->windowId);
            UnsetBgTilemapBuffer(0);
            UnsetBgTilemapBuffer(1);
            for (int i = 0; i < NUM_EGGS; i++)
                Free(sEggHatchData[i]);
            Free(sFunctionData);
            SetMainCallback2(CB2_ReturnToField);
        }
        break;
    }

    RunTasks();
    RunTextPrinters();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

#define sTimer      data[0]
#define sSinIdx     data[1]
#define sDelayTimer data[2]

static void SpriteCB_Egg_Shake1(struct Sprite *sprite)
{
    if (++sprite->sTimer > 20)
    {
        sprite->callback = SpriteCB_Egg_Shake2;
        sprite->sTimer = 0;
    }
    else
    {
        // Shake egg
        sprite->sSinIdx = (sprite->sSinIdx + 20) & 0xFF;
        sprite->x2 = Sin(sprite->sSinIdx, 1);
        if (sprite->sTimer == 15)
        {
            // First egg crack
            PlaySE(SE_BALL);
            StartSpriteAnim(sprite, EGG_ANIM_CRACKED_1);
        }
    }
}

static void SpriteCB_Egg_Shake2(struct Sprite *sprite)
{
    if (++sprite->sDelayTimer > 30)
    {
        if (++sprite->sTimer > 20)
        {
            sprite->callback = SpriteCB_Egg_Shake3;
            sprite->sTimer = 0;
            sprite->sDelayTimer = 0;
        }
        else
        {
            // Shake egg
            sprite->sSinIdx = (sprite->sSinIdx + 20) & 0xFF;
            sprite->x2 = Sin(sprite->sSinIdx, 2);
            if (sprite->sTimer == 15)
            {
                // Second egg crack
                PlaySE(SE_BALL);
                StartSpriteAnim(sprite, EGG_ANIM_CRACKED_2);
            }
        }
    }
}

static void SpriteCB_Egg_Shake3(struct Sprite *sprite)
{
    if (++sprite->sDelayTimer > 30)
    {
        if (++sprite->sTimer > 38)
        {
            u16 UNUSED species;
            sprite->callback = SpriteCB_Egg_WaitHatch;
            sprite->sTimer = 0;
            species = GetMonData(&gParties[B_TRAINER_PLAYER][sprite->sEggId], MON_DATA_SPECIES);
            gSprites[sprite->sEggId].x2 = 0;
            gSprites[sprite->sEggId].y2 = 0;
        }
        else
        {
            // Shake egg
            sprite->sSinIdx = (sprite->sSinIdx + 20) & 0xFF;
            sprite->x2 = Sin(sprite->sSinIdx, 2);
            if (sprite->sTimer == 15)
            {
                // Third egg crack
                // This ineffectually sets the animation to the frame it's already using.
                // They likely meant to use the 3rd and final cracked frame of the egg, which goes unused as a result.
                PlaySE(SE_BALL);
            #ifdef BUGFIX
                StartSpriteAnim(sprite, EGG_ANIM_CRACKED_3);
            #else
                StartSpriteAnim(sprite, EGG_ANIM_CRACKED_2);
            #endif
            }
            if (sprite->sTimer == 30)
                PlaySE(SE_BALL);
        }
    }
}

static void SpriteCB_Egg_WaitHatch(struct Sprite *sprite)
{
    if (++sprite->sTimer > 50)
    {
        sprite->callback = SpriteCB_Egg_Hatch;
        sprite->sTimer = 0;
    }
}

static void SpriteCB_Egg_Hatch(struct Sprite *sprite)
{
    // Fade to white to hide transition from egg to Pokémon
    if (sprite->sTimer == 0)
        BeginNormalPaletteFade(PALETTES_ALL, -1, 0, 16, RGB_WHITEALPHA);

    sprite->sTimer++;

    if (!gPaletteFade.active)
    {
        // Screen is hidden by the fade to white, hide egg
        PlaySE(SE_EGG_HATCH);
        sprite->invisible = TRUE;
        sprite->callback = SpriteCB_Egg_Reveal;
        sprite->sTimer = 0;
    }
}

static void SpriteCB_Egg_Reveal(struct Sprite *sprite)
{
    if (sprite->sTimer == 0)
    {
        // Reveal hatched Pokémon
        gSprites[sprite->sMonId].invisible = FALSE;
        if (GetMonData(&gPlayerParty[sprite->sEggId], MON_DATA_SPECIES) == SPECIES_NONE)
            gSprites[sprite->sMonId].invisible = TRUE;
        StartSpriteAffineAnim(&gSprites[sprite->sMonId], BATTLER_AFFINE_EMERGE);
    }

    // Fade back from white for reveal
    if (sprite->sTimer == 8)
        BeginNormalPaletteFade(PALETTES_ALL, -1, 16, 0, RGB_WHITEALPHA);

    if (sprite->sTimer <= 9)
        gSprites[sprite->sMonId].y--;

    if (sprite->sTimer > 40)
        sprite->callback = SpriteCallbackDummy; // Finished

    sprite->sTimer++;
}

#define sVelocX data[1]
#define sVelocY data[2]
#define sAccelY data[3]
#define sDeltaX data[4]
#define sDeltaY data[5]

static void EggHatchPrintMessage(u8 windowId, u8 *string, u8 x, u8 y, u8 speed)
{
    FillWindowPixelBuffer(windowId, PIXEL_FILL(15));
    sFunctionData->textColor[0] = 0;
    sFunctionData->textColor[1] = 6;
    sFunctionData->textColor[2] = 7;
    AddTextPrinterParameterized4(windowId, FONT_NORMAL, x, y, 0, 0, sFunctionData->textColor, speed, string);
}

u8 GetEggCyclesToSubtract(void)
{
    u8 count, i;
    for (count = CalculatePlayerPartyCount(), i = 0; i < count; i++)
    {
        if (!GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SANITY_IS_EGG))
        {
            enum Ability ability = GetMonAbility(&gParties[B_TRAINER_PLAYER][i]);
            if (ability == ABILITY_MAGMA_ARMOR
             || ability == ABILITY_FLAME_BODY
             || ability == ABILITY_STEAM_ENGINE)
                return 2;
        }
    }
    return 1;
}

u16 CountPartyAliveNonEggMons(void)
{
    u16 aliveNonEggMonsCount = CountStorageNonEggMons();
    aliveNonEggMonsCount += CountPartyAliveNonEggMonsExcept(PARTY_SIZE);
    return aliveNonEggMonsCount;
}
