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
#include "field_camera.h"
#include "script_movement.h"

static const u16 sTextColor0[] = {RGB_BLACK};
static const u16 sTextColor1[] = {RGB2GBA(116, 116, 116)};
static const u16 sTextColor2[] = {RGB2GBA(188, 188, 188)};
static const u16 sTextColor3[] = {RGB2GBA(252, 252, 252)};

static const u16 sCutscenePal0[] = INCGFX_U16("graphics/nes/cutscenepal0.pal", ".gbapal");
static const u16 sCutscenePal1[] = INCGFX_U16("graphics/nes/cutscenepal1.pal", ".gbapal");
static const u16 sCutscenePal2[] = INCGFX_U16("graphics/nes/cutscenepal2.pal", ".gbapal");
static const u16 sCutscenePal3[] = INCGFX_U16("graphics/nes/cutscenepal3.pal", ".gbapal");

void LoadTextColor0(void)
{
    LoadPalette(sTextColor0, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(1));
}

void LoadTextColor1(void)
{
    LoadPalette(sTextColor1, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(1));
}

void LoadTextColor2(void)
{
    LoadPalette(sTextColor2, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(1));
}

void LoadTextColor3(void)
{
    LoadPalette(sTextColor3, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(1));
}

void SetSceneDark(void)
{
    LoadPalette(sCutscenePal0, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sCutscenePal0, BG_PLTT_ID(3), PLTT_SIZE_4BPP);
}

void SetScenePal1(void)
{
    LoadPalette(sCutscenePal1, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sCutscenePal1, BG_PLTT_ID(3), PLTT_SIZE_4BPP);
}

void SetScenePal2(void)
{
    LoadPalette(sCutscenePal2, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sCutscenePal2, BG_PLTT_ID(3), PLTT_SIZE_4BPP);
}

void SetScenePal3(void)
{
    LoadPalette(sCutscenePal3, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sCutscenePal3, BG_PLTT_ID(3), PLTT_SIZE_4BPP);
}

void DisableCutsceneSkip(void)
{
    sSkipCutscene = TRUE;
}

const u8 sRooftopFrame1[] = INCGFX_U8("graphics/biigwailord/rooftop2.png", ".4bpp");
const u8 sRooftopFrame2[] = INCGFX_U8("graphics/biigwailord/rooftop1.png", ".4bpp");

const u16 sRooftopPal[] = INCGFX_U16("graphics/biigwailord/rooftop1.png", ".gbapal");

enum {
    TAG_ROOFTOP_FRAME1 = 4612,
    TAG_ROOFTOP_FRAME2,
};

#define PAL_TAG_ROOFTOP 4609

#define sTimer data[1]
#define ROOFTOP_ANIM_START 30
#define ROOFTOP_ANIM_END (ROOFTOP_ANIM_START + 112)

#define sPrevX data[3]
#define sPrevY data[4]

static void MoveRooftopDown(struct Sprite *sprite)
{    
    u8 objectEventId;

    TryGetObjectEventIdByLocalIdAndMap(LOCALID_MEGAMAN, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, &objectEventId);

    struct Sprite *objSprite =  &gSprites[gObjectEvents[objectEventId].spriteId];
    sprite->y = objSprite->y + objSprite->centerToCornerVecY + objSprite->y2 + gSpriteCoordOffsetY + 16;
    // sprite->y2 = ((gSprites[gObjectEvents[objectEventId].spriteId].y2));
    // sprite->centerToCornerVecY = ((gSprites[gObjectEvents[objectEventId].spriteId].centerToCornerVecY));
    //     DebugPrintf2("spriteY = %d, objY = %d", sprite->y, gSprites[gObjectEvents[objectEventId].spriteId].y);

}

static const struct OamData sRooftopSpriteOamData =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
};

#define ROOFTOP_SPRITE_TEMPLATE                     \
    .paletteTag = PAL_TAG_ROOFTOP,                  \
    .oam = &sRooftopSpriteOamData,                  \
    .anims = gDummySpriteAnimTable,                 \
    .images = NULL,                                 \
    .affineAnims = gDummySpriteAffineAnimTable,     \
    .callback = MoveRooftopDown,


static const struct SpriteTemplate sRooftopSpriteTemplate[2] =
{
    {
        .tileTag = TAG_ROOFTOP_FRAME1,
        ROOFTOP_SPRITE_TEMPLATE
    },
    {
        .tileTag = TAG_ROOFTOP_FRAME2,
        ROOFTOP_SPRITE_TEMPLATE
    }
};

static const struct SpriteSheet sRooftopSpriteSheet[2] =
{
    { sRooftopFrame1, 0x800, TAG_ROOFTOP_FRAME1 },
    { sRooftopFrame2, 0x800, TAG_ROOFTOP_FRAME2 },
};

static const struct SpritePalette sRooftopPalette =
{
    .data = sRooftopPal,
    .tag = PAL_TAG_ROOFTOP
};

void CreateRooftopSprites(void)
{
    u8 spriteId, id;
    s16 i;

    LoadSpritePalette(&sRooftopPalette);

    // First sprite: right of object
    spriteId = CreateSprite(&sRooftopSpriteTemplate[0], DISPLAY_WIDTH - 32, -32, 2);
    gSpecialVar_0x800A = spriteId;

    // Second sprite: left of object (-64 pixels)
    spriteId = CreateSprite(&sRooftopSpriteTemplate[1], DISPLAY_WIDTH - 96, -32, 2);
    gSpecialVar_0x800B = spriteId;
            
    for (i = 0; i < 2; i++)
    {
        if (i == 0)
            id = gSpecialVar_0x800A;
        else
            id = gSpecialVar_0x800B;

        struct Sprite *sprite = &gSprites[id];

        sprite->oam.tileNum = LoadSpriteSheet(&sRooftopSpriteSheet[i]);
    }
}

void ClearRooftopSprites(void)
{
    DestroySprite(&gSprites[gSpecialVar_0x800A]);
    DestroySprite(&gSprites[gSpecialVar_0x800B]);
    FreeSpriteTilesByTag(TAG_ROOFTOP_FRAME1);
    FreeSpriteTilesByTag(TAG_ROOFTOP_FRAME2);
    FreeSpritePaletteByTag(PAL_TAG_ROOFTOP);
}