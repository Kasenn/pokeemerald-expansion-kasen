#include "global.h"
#include "bg.h"
#include "decompress.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "malloc.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "random.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/weather.h"
#include "field_effect.h"

#define SCENE gSpecialVar_0x8004
#define LATIAS_GOING_UP     1
#define LATIAS_GOING_DOWN   2
#define LATIOS_GOING_UP     3
#define LATIOS_GOING_DOWN   4

#define STATE_END 0xFF

enum {
    TAG_LATIS = 1,
    TAG_RIGHT_CLOUD_1,
    TAG_RIGHT_CLOUD_2,
    TAG_LEFT_CLOUD_1,
    TAG_LEFT_CLOUD_2,
    TAG_WATER
};

struct LatiRide
{
    u8 state;
    u16 timer;
};

static EWRAM_DATA struct LatiRide *sLatiRide = NULL;

static void CB2_LoadLatiRide(void);
static void SetBgRegs(bool8);
static void CreateLatiRideSprites(void);
static void Task_LatiRide(u8);
static void VBlankCB_LatiRide(void);
static void CB2_LatiRide(void);
static void SpriteCB_LatiWater(struct Sprite *);
static void SpriteCB_LatiCloud(struct Sprite *);

static const struct BgTemplate sBgTemplates[4] = {
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
};

const u32 gLatiRide_Water_Gfx[]      = INCBIN_U32("graphics/cable_car/latiwater.4bpp.smol");
const u32 gLatiRide_Cloud1_Left_Gfx[]      = INCBIN_U32("graphics/cable_car/cloud1.4bpp.smol");
const u32 gLatiRide_Cloud1_Right_Gfx[]      = INCBIN_U32("graphics/cable_car/cloud2.4bpp.smol");
const u32 gLatiRide_Cloud2_Left_Gfx[]      = INCBIN_U32("graphics/cable_car/cloud3.4bpp.smol");
const u32 gLatiRide_Cloud2_Right_Gfx[]      = INCBIN_U32("graphics/cable_car/cloud4.4bpp.smol");

const u16 gLatiRide_Pal[]      = INCBIN_U16("graphics/cable_car/latiwater.gbapal");



static const struct CompressedSpriteSheet sSpriteSheets[] = {
    { gLatiRide_Water_Gfx,          (64 * 64) / 2, TAG_WATER },
    { gLatiRide_Cloud1_Left_Gfx,    (64 * 64) / 2, TAG_RIGHT_CLOUD_1 },
    { gLatiRide_Cloud1_Right_Gfx,   (64 * 64) / 2, TAG_RIGHT_CLOUD_2 },
    { gLatiRide_Cloud2_Left_Gfx,    (64 * 64) / 2, TAG_LEFT_CLOUD_1 },
    { gLatiRide_Cloud2_Right_Gfx,   (64 * 64) / 2, TAG_LEFT_CLOUD_2 },
    { },
};

static const struct SpritePalette sSpritePalettes[] = {
    { gLatiRide_Pal, TAG_LATIS },
    { }
};

static const struct OamData sOam_LatiRideWater =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_NORMAL,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 3,
    .paletteNum = 1,
};

static const struct OamData sOam_LatiRideClouds =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_NORMAL,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 1,
};

static const struct SpriteTemplate sSpriteTemplates_LatiRide[] =
{
    {
        .tileTag = TAG_WATER,
        .paletteTag = TAG_LATIS,
        .oam = &sOam_LatiRideWater,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCB_LatiWater,
    },
    {
        .tileTag = TAG_RIGHT_CLOUD_1,
        .paletteTag = TAG_LATIS,
        .oam = &sOam_LatiRideClouds,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCB_LatiCloud,
    },
    {
        .tileTag = TAG_RIGHT_CLOUD_2,
        .paletteTag = TAG_LATIS,
        .oam = &sOam_LatiRideClouds,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCB_LatiCloud,
    },
    {
        .tileTag = TAG_LEFT_CLOUD_1,
        .paletteTag = TAG_LATIS,
        .oam = &sOam_LatiRideClouds,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCB_LatiCloud,
    },
    {
        .tileTag = TAG_LEFT_CLOUD_2,
        .paletteTag = TAG_LATIS,
        .oam = &sOam_LatiRideClouds,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCB_LatiCloud,
    },
};

static void Task_LoadLatiRide(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(CB2_LoadLatiRide);
        DestroyTask(taskId);
    }
}

void LatiRide(void)
{
    VarSet(VAR_SHINY_MULTIPLIER, 0);
    LockPlayerFieldControls();
    CreateTask(Task_LoadLatiRide, 1);
    if (SCENE == LATIAS_GOING_DOWN || SCENE == LATIOS_GOING_DOWN)
        BeginTimeOfDayPaletteFade(PALETTES_ALL, 0, 0, 16, &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, RGB_WHITE);
    else
        BeginTimeOfDayPaletteFade(PALETTES_ALL, 0, 0, 16, &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, RGB_BLACK);
}

static void CB2_LoadLatiRide(void)
{
    u16 imebak;
    u8 i = 0;

    switch (gMain.state)
    {
    case 0:
    default:
        SetVBlankCallback(NULL);
        SetBgRegs(FALSE);
        ScanlineEffect_Stop();
        DmaFillLarge16(3, 0, (void *)VRAM, VRAM_SIZE, 0x1000);
        DmaFill32Defvars(3, 0, (void *)OAM, OAM_SIZE);
        if (SCENE == LATIAS_GOING_DOWN || SCENE == LATIOS_GOING_DOWN)
        {
            DmaFill16Defvars(3, 0x7FFF, (void *)PLTT, PLTT_SIZE);
        }
        else
        {
            DmaFill16Defvars(3, 0, (void *)PLTT, PLTT_SIZE);
        }
        sLatiRide = AllocZeroed(sizeof(*sLatiRide));
        gMain.state++;
        break;
    case 1:
        FlagClear(FLAG_PERMA_DAY);
        ResetSpriteData();
        ResetTasks();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetTempTileDataBuffers();
        StartWeather();
        InitMapMusic();
        ResetMapMusic();
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
        gSpriteCoordOffsetX = gSpriteCoordOffsetY = 0;
        gMain.state++;
        break;
    case 2:
        for (i = 0; i < ARRAY_COUNT(sSpriteSheets) - 1; i++)
            LoadCompressedSpriteSheet(&sSpriteSheets[i]);

        LoadSpritePalettes(sSpritePalettes);
        gMain.state++;
        break;
    case 3:
        if (!FreeTempTileDataBuffersIfPossible())
        {
            gMain.state++;
        }
        break;
    case 4:
        CreateLatiRideSprites();
        RunTasks();
        gMain.state++;
        break;
    case 5:
        if (SCENE == LATIAS_GOING_DOWN || SCENE == LATIOS_GOING_DOWN)
            BeginTimeOfDayPaletteFade(PALETTES_ALL, 3, 16, 0, &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, RGB_WHITE);
        else
            BeginTimeOfDayPaletteFade(PALETTES_ALL, 3, 16, 0, &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, RGB_BLACK);
        FadeInNewBGM(MUS_CABLE_CAR, 1);
        SetBgRegs(TRUE);
        gMain.state++;
        break;
    case 6:
        imebak = REG_IME;
        REG_IME = 0;
        REG_IE |= INTR_FLAG_VBLANK;
        REG_IME = imebak;
        SetVBlankCallback(VBlankCB_LatiRide);
        SetMainCallback2(CB2_LatiRide);
        CreateTask(Task_LatiRide, 0);
        break;
    }
}

static void CB2_LatiRide(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
    MapMusicMain();
}

static void CB2_EndLatiRide(void)
{
    HideBg(0);
    HideBg(1);
    HideBg(2);
    HideBg(3);
    SetBgRegs(FALSE);
    gSpriteCoordOffsetX = 0;
    ResetTasks();
    ResetSpriteData();
    ResetPaletteFade();
    UnsetBgTilemapBuffer(0);
    UnsetBgTilemapBuffer(1);
    UnsetBgTilemapBuffer(2);
    UnsetBgTilemapBuffer(3);
    ResetBgsAndClearDma3BusyFlags(0);
    FREE_AND_SET_NULL(sLatiRide);
    DmaFillLarge16(3, 0, (void *)VRAM, VRAM_SIZE, 0x1000);
    DmaFill32Defvars(3, 0, (void *)OAM, OAM_SIZE);
    if (SCENE == LATIAS_GOING_DOWN || SCENE == LATIOS_GOING_DOWN)
    {
        DmaFill16Defvars(3, 0, (void *)PLTT, PLTT_SIZE);
    }
    else
    {
        DmaFill16Defvars(3, 0x7FFF, (void *)PLTT, PLTT_SIZE);
    }
    WarpIntoMap();
    gFieldCallback = NULL;
    VarSet(VAR_HOUR_OVERRIDE, 0);
    VarSet(VAR_MINUTE_OVERRIDE, 0);
    SetMainCallback2(CB2_LoadMap);
    gFieldCallback = FieldCallback_FlyIntoMapSpecial;
}

static void Task_LatiRide(u8 taskId)
{
    sLatiRide->timer++;
    switch (sLatiRide->state)
    {
    case 0:
        // Wait to fade out
        if (!gPaletteFade.active)
        {
            u16 minutes;

            u16 effectiveTimer = sLatiRide->timer;
            if (effectiveTimer > 450)
                effectiveTimer = 450;

            if (SCENE == LATIAS_GOING_DOWN || SCENE == LATIOS_GOING_DOWN)
                minutes = 840 - (effectiveTimer * 720) / 450;
            else
                minutes = (effectiveTimer * 720) / 450;

            s16 hours = minutes / 60;
            s16 minutes2 = minutes % 60;

            VarSet(VAR_HOUR_OVERRIDE, hours);
            VarSet(VAR_MINUTE_OVERRIDE, minutes2);

            UpdateTimeOfDay();
            UpdatePalettesWithTime(PALETTES_ALL);
        }

        if (sLatiRide->timer == 570)
        {
            sLatiRide->state++;
            if (SCENE == LATIAS_GOING_DOWN || SCENE == LATIOS_GOING_DOWN)
                BeginTimeOfDayPaletteFade(PALETTES_ALL, 3, 0, 16, &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, RGB_BLACK);
            else
                BeginTimeOfDayPaletteFade(PALETTES_ALL, 3, 0, 16, &gTimeBlend.startBlend, &gTimeBlend.endBlend, gTimeBlend.weight, RGB_WHITE);
            FadeOutBGM(4);
        }
        break;
    case 1:
        // Wait for fade out
        if (!gPaletteFade.active)
            sLatiRide->state = STATE_END;
        break;
    case STATE_END:
        SetVBlankCallback(NULL);
        DestroyTask(taskId);
        SetMainCallback2(CB2_EndLatiRide);
        break;
    }
}

static void VBlankCB_LatiRide(void)
{
    CopyBgTilemapBufferToVram(0);
    CopyBgTilemapBufferToVram(3);
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

#define sYPos  data[1]

static void SpriteCB_LatiWater(struct Sprite *sprite)
{
    if (sLatiRide->state != STATE_END)
    {
        // Move along with cable car
        if (SCENE == LATIOS_GOING_DOWN || SCENE == LATIAS_GOING_DOWN)
        {
            sprite->y = sprite->sYPos - (u8)(3.067f * S16TOPOSFLOAT(sLatiRide->timer));
        }
        else
        {
            sprite->y = sprite->sYPos + (u8)(3.067f * S16TOPOSFLOAT(sLatiRide->timer));
        }
    }
}

static void SpriteCB_LatiCloud(struct Sprite *sprite)
{
    if (sLatiRide->state != STATE_END)
    {
        // Move along with cable car
        if (SCENE == LATIOS_GOING_DOWN || SCENE == LATIAS_GOING_DOWN)
        {
            sprite->y = sprite->sYPos - (u8)(6.134f * S16TOPOSFLOAT(sLatiRide->timer));
        }
        else
        {
            sprite->y = sprite->sYPos + (u8)(6.134f * S16TOPOSFLOAT(sLatiRide->timer));
        }
    }
}

#define sState data[2]
#define sTimer data[3]

static void SpriteCB_Player(struct Sprite *sprite)
{
    if (sLatiRide->state != STATE_END)
    {
        // Move along with cable car
        if (!(SCENE == LATIOS_GOING_DOWN || SCENE == LATIAS_GOING_DOWN))
        {
            sprite->y = sprite->sYPos - (u8)(0.197f * S16TOPOSFLOAT(sLatiRide->timer));
        }
        else
        {
            sprite->y = sprite->sYPos + (u8)(0.197f * S16TOPOSFLOAT(sLatiRide->timer));
        }
    }
}

#undef sState
#undef sTimer

#define sSameDir    data[1] // Whether or not the hiker is headed the same dir as the Cable Car
#define sDelay      data[2]


static void SetBgRegs(bool8 active)
{
    switch (active)
    {
    case FALSE:
    default:
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN1H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WIN1V, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_BG3CNT, 0);
        SetGpuReg(REG_OFFSET_BG2CNT, 0);
        SetGpuReg(REG_OFFSET_BG1CNT, 0);
        SetGpuReg(REG_OFFSET_BG0CNT, 0);
        SetGpuReg(REG_OFFSET_BG3HOFS, 0);
        SetGpuReg(REG_OFFSET_BG3VOFS, 0);
        SetGpuReg(REG_OFFSET_BG2HOFS, 0);
        SetGpuReg(REG_OFFSET_BG2VOFS, 0);
        SetGpuReg(REG_OFFSET_BG1HOFS, 0);
        SetGpuReg(REG_OFFSET_BG1VOFS, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        break;
    case TRUE:
        SetGpuReg(REG_OFFSET_WININ, 0);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN1H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WIN1V, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL);
        break;
    }
}

static void CreateFirstSetOfClouds()
{
    u8 spriteId;

    spriteId = CreateSprite(&sSpriteTemplates_LatiRide[1], 0, 0, 0x67);
    gSprites[spriteId].x2 = DISPLAY_WIDTH - 64;
    gSprites[spriteId].y2 = 0;
    gSprites[spriteId].sYPos = 43;
    spriteId = CreateSprite(&sSpriteTemplates_LatiRide[2], 0, 0, 0x67);
    gSprites[spriteId].x2 = DISPLAY_WIDTH;
    gSprites[spriteId].y2 = 0;
    gSprites[spriteId].sYPos = 43;

    spriteId = CreateSprite(&sSpriteTemplates_LatiRide[1], 0, 0, 0x67);
    gSprites[spriteId].x2 = -16;
    gSprites[spriteId].y2 = 80;
    gSprites[spriteId].sYPos = 43;
    spriteId = CreateSprite(&sSpriteTemplates_LatiRide[2], 0, 0, 0x67);
    gSprites[spriteId].x2 = 48;
    gSprites[spriteId].y2 = 80;
    gSprites[spriteId].sYPos = 43;
}

static void CreateSecondSetOfClouds()
{
    u8 spriteId;

    spriteId = CreateSprite(&sSpriteTemplates_LatiRide[3], 0, 0, 0x67);
    gSprites[spriteId].x2 = DISPLAY_WIDTH - 128 + 31;
    gSprites[spriteId].y2 = 130;
    gSprites[spriteId].sYPos = 43;
    spriteId = CreateSprite(&sSpriteTemplates_LatiRide[4], 0, 0, 0x67);
    gSprites[spriteId].x2 = DISPLAY_WIDTH - 64 + 31;
    gSprites[spriteId].y2 = 130;
    gSprites[spriteId].sYPos = 43;

    spriteId = CreateSprite(&sSpriteTemplates_LatiRide[3], 0, 0, 0x67);
    gSprites[spriteId].x2 = -32;
    gSprites[spriteId].y2 = -32;
    gSprites[spriteId].sYPos = 43;
    spriteId = CreateSprite(&sSpriteTemplates_LatiRide[4], 0, 0, 0x67);
    gSprites[spriteId].x2 = 32;
    gSprites[spriteId].y2 = -32;
    gSprites[spriteId].sYPos = 43;
}

static void CreateLatiRideSprites(void)
{
    u8 spriteId;
    u8 i, j, k;
    u16 species = 0;
    s16 startingPos = 0;
    s16 latiBody = 0;
    s16 latiHead = 0;
    s16 shinyLatiBody = 0;
    s16 shinyLatiHead = 0;
    s16 dir = 0;
    s16 startingPos2 = 0;
    s16 latiHeadCoords = 0;

    u16 playerGraphicsIds[][2] = {
        [OUTFIT_RUBYSAPPHIRE] = {OBJ_EVENT_GFX_BRENDAN_RS_RIDE, OBJ_EVENT_GFX_MAY_RS_RIDE},
        [OUTFIT_EMERALD] = {OBJ_EVENT_GFX_RIVAL_BRENDAN_SURFING, OBJ_EVENT_GFX_RIVAL_MAY_SURFING},
        [OUTFIT_ORAS] = {OBJ_EVENT_GFX_BRENDAN_ORAS_RIDE, OBJ_EVENT_GFX_MAY_ORAS_RIDE},
        [OUTFIT_CONTEST] = {OBJ_EVENT_GFX_BRENDAN_CONTEST_RIDE, OBJ_EVENT_GFX_MAY_CONTEST_RIDE},
    };

    // Create Cloud Sprites
    CreateFirstSetOfClouds();
    CreateSecondSetOfClouds();

    // Create Water Sprites
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 5; i++)
        {
            spriteId = CreateSprite(&sSpriteTemplates_LatiRide[0], 0, 0, 0x67);
            gSprites[spriteId].x2 = i * 64;
            gSprites[spriteId].y2 = j * 64;
            gSprites[spriteId].sYPos = 43;
        }
    }

    switch (SCENE)
    {
    case LATIAS_GOING_DOWN:
        species = SPECIES_LATIAS;
        startingPos = 39;
        startingPos2 = -48;
        latiBody = OBJ_EVENT_GFX_SPECIAL_LATIAS;
        latiHead = OBJ_EVENT_GFX_SPECIAL_LATIAS_HEAD;
        shinyLatiBody = OBJ_EVENT_GFX_SPECIAL_LATIAS_SHINY;
        shinyLatiHead = OBJ_EVENT_GFX_SPECIAL_LATIAS_SHINY_HEAD;
        latiHeadCoords = 108;
        dir = ANIM_STD_GO_FAST_SOUTH;
        break;
    case LATIOS_GOING_DOWN:
        species = SPECIES_LATIOS;
        startingPos = 39;
        startingPos2 = -48;
        latiBody = OBJ_EVENT_GFX_SPECIAL_LATIOS;
        latiHead = OBJ_EVENT_GFX_SPECIAL_LATIOS_HEAD;
        shinyLatiBody = OBJ_EVENT_GFX_SPECIAL_LATIOS_SHINY;
        shinyLatiHead = OBJ_EVENT_GFX_SPECIAL_LATIOS_SHINY_HEAD;
        latiHeadCoords = 108;
        dir = ANIM_STD_GO_FAST_SOUTH;
        break;
    case LATIAS_GOING_UP:
        species = SPECIES_LATIAS;
        startingPos = 81;
        startingPos2 = 64;
        latiBody = OBJ_EVENT_GFX_SPECIAL_LATIAS;
        latiHead = OBJ_EVENT_GFX_SPECIAL_LATIAS_HEAD;
        shinyLatiBody = OBJ_EVENT_GFX_SPECIAL_LATIAS_SHINY;
        shinyLatiHead = OBJ_EVENT_GFX_SPECIAL_LATIAS_SHINY_HEAD;
        latiHeadCoords = 256;
        dir = ANIM_STD_GO_FAST_NORTH;
        break;
    case LATIOS_GOING_UP:
        species = SPECIES_LATIOS;
        startingPos = 81;
        startingPos2 = 64;
        latiBody = OBJ_EVENT_GFX_SPECIAL_LATIOS;
        latiHead = OBJ_EVENT_GFX_SPECIAL_LATIOS_HEAD;
        shinyLatiBody = OBJ_EVENT_GFX_SPECIAL_LATIOS_SHINY;
        shinyLatiHead = OBJ_EVENT_GFX_SPECIAL_LATIOS_SHINY_HEAD;
        latiHeadCoords = 256;
        dir = ANIM_STD_GO_FAST_NORTH;
        break;
    }

    // Create Lati Sprites
    for (k = 0; k < PARTY_SIZE; k++)
    {
        if (GetMonData(&gPlayerParty[k], MON_DATA_SPECIES_OR_EGG, 0) == species)
        {
            if (GetMonData(&gPlayerParty[k], MON_DATA_IS_SHINY))
            {
                spriteId = CreateObjectGraphicsSprite(shinyLatiBody, SpriteCB_Player, 108, startingPos, 102);
                if (spriteId != MAX_SPRITES)
                {
                    StartSpriteAnim(&gSprites[spriteId], dir);
                    gSprites[spriteId].oam.priority = 2;
                    gSprites[spriteId].x2 = 8;
                    gSprites[spriteId].y2 = startingPos2;
                    gSprites[spriteId].sYPos = 73;
                }
                spriteId = CreateObjectGraphicsSprite(shinyLatiHead, SpriteCB_Player, latiHeadCoords, startingPos, 100);
                if (spriteId != MAX_SPRITES)
                {
                    StartSpriteAnim(&gSprites[spriteId], dir);
                    gSprites[spriteId].oam.priority = 2;
                    gSprites[spriteId].x2 = 8;
                    gSprites[spriteId].y2 = startingPos2;
                    gSprites[spriteId].sYPos = 73;
                }
            }
            else
            {
                spriteId = CreateObjectGraphicsSprite(latiBody, SpriteCB_Player, 108, startingPos, 102);
                if (spriteId != MAX_SPRITES)
                {
                    StartSpriteAnim(&gSprites[spriteId], dir);
                    gSprites[spriteId].oam.priority = 2;
                    gSprites[spriteId].x2 = 8;
                    gSprites[spriteId].y2 = startingPos2;
                    gSprites[spriteId].sYPos = 73;
                }
                spriteId = CreateObjectGraphicsSprite(latiHead, SpriteCB_Player, latiHeadCoords, startingPos, 100);
                if (spriteId != MAX_SPRITES)
                {
                    StartSpriteAnim(&gSprites[spriteId], dir);
                    gSprites[spriteId].oam.priority = 2;
                    gSprites[spriteId].x2 = 8;
                    gSprites[spriteId].y2 = startingPos2;
                    gSprites[spriteId].sYPos = 73;
                }
            }
            break;
        }
    }

    // Create player sprite
    spriteId = CreateObjectGraphicsSprite(playerGraphicsIds[VarGet(VAR_CHOSEN_OUTFIT)][gSaveBlock2Ptr->playerGender], SpriteCB_Player, 108, startingPos, 101);
    if (spriteId != MAX_SPRITES)
    {
        StartSpriteAnim(&gSprites[spriteId], dir);
        gSprites[spriteId].oam.priority = 2;
        gSprites[spriteId].x2 = 8;
        gSprites[spriteId].y2 = startingPos2 - 8;
        gSprites[spriteId].sYPos = 73;
    }
}

