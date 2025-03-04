#include "global.h"
#include "main.h"
#include "palette.h"
#include "scanline_effect.h"
#include "task.h"
#include "title_screen.h"
#include "libgcnmultiboot.h"
#include "malloc.h"
#include "gpu_regs.h"
#include "link.h"
#include "multiboot_pokemon_colosseum.h"
#include "load_save.h"
#include "save.h"
#include "new_game.h"
#include "m4a.h"
#include "random.h"
#include "decompress.h"
#include "constants/songs.h"
#include "intro_credits_graphics.h"
#include "trig.h"
#include "intro.h"
#include "graphics.h"
#include "sound.h"
#include "util.h"
#include "title_screen.h"
#include "expansion_intro.h"
#include "constants/rgb.h"
#include "constants/battle_anim.h"

u8 (*const ewram0arr)[32] = (u8 (*)[32])gHeap;

/*
    The intro is grouped into the following scenes
    Scene 0. Copyright screen
    Scene 1. GF Logo, pan up over plants, Flygon silhouette goes by
    Scene 2. Player biking on path, joined by Pokémon
    Scene 3. A fight between Groudon/Kyogre ends with Rayquaza

    After this it progresses to the title screen
*/

// Scene 1 main tasks
static void Task_Scene1_FadeIn(u8);
static void Task_Scene1_WaterDrops(u8);
static void Task_Scene1_PanUp(u8);
static void Task_Scene1_End(u8);

// Scene 1 supplemental functions
static void IntroResetGpuRegs(void);
static u8 CreateGameFreakLogoSprites(s16, s16, s16);
static void Task_BlendLogoIn(u8);
static void Task_BlendLogoOut(u8);
static void Task_CreateSparkles(u8);
static u8 CreateWaterDrop(s16, s16, u16, u16, u16, u8);
static void SpriteCB_WaterDrop(struct Sprite *sprite);
static void SpriteCB_WaterDrop_Slide(struct Sprite *);
static void SpriteCB_WaterDrop_ReachLeafEnd(struct Sprite *);
static void SpriteCB_WaterDrop_DangleFromLeaf(struct Sprite *);
static void SpriteCB_WaterDrop_Fall(struct Sprite *);
static void SpriteCB_WaterDrop_Ripple(struct Sprite *);
static void SpriteCB_Sparkle(struct Sprite *sprite);
static void SpriteCB_LogoLetter(struct Sprite *sprite);
static void SpriteCB_GameFreakLogo(struct Sprite *sprite);
static void SpriteCB_FlygonSilhouette(struct Sprite *sprite);

// Scene 2 main tasks
static void Task_Scene2_Load(u8);
static void Task_Scene2_CreateSprites(u8);
static void Task_Scene2_BikeRide(u8);
static void Task_Scene2_End(u8);

// Scene 2 supplemental functions
static void SpriteCB_Torchic(struct Sprite *sprite);
static void SpriteCB_Manectric(struct Sprite *sprite);
static void SpriteCB_Volbeat(struct Sprite *sprite);
static void SpriteCB_Flygon(struct Sprite *);
static void SpriteCB_PlayerOnBicycle(struct Sprite *);

// Scene 3 main tasks
static void Task_IntroLoadPart3Graphics(u8);
static void Task_IntroSpinAndZoomPokeball(u8);
static void Task_IntroWaitToSetupPart3DoubleFight(u8);
static void Task_IntroLoadPart3Streaks(u8);
static void task_intro_14(u8);
static void task_intro_15(u8);
static void task_intro_16(u8);
static void task_intro_17(u8);
static void Task_IntroPokemonBattle(u8);
static void task_intro_19(u8);
static void task_intro_20(u8);
static void intro_reset_and_hide_bgs(void);
static u16 sub_813CE88(u16, s16, s16, u16, u8, u8 slot);
static u8 sub_813CFA8(u16, u16, u16, u16);
static void sub_813D084(u8);
static void sub_813D220(struct Sprite *);
static void sub_813D368(struct Sprite *);
static void sub_813D414(struct Sprite *);
static void SpriteCB_WaterDropFall(struct Sprite *);
static u8 CreateWaterDrop(s16, s16, u16, u16, u16, u8);
static void sub_813DB9C(struct Sprite *);
static void sub_813DE70(struct Sprite *);
static void sub_813E10C(struct Sprite *);
static void sub_813E210(struct Sprite *);
static void sub_813E580(u16, u16);
static void sub_813E7C0(u8);
static void sub_813E930(u8);
static void InitIntroTorchicAttackAnim(u8);
static void InitIntroMudkipAttackAnim(u8);


static void MainCB2_EndIntro(void);

extern const struct CompressedSpriteSheet gBattleAnimPicTable[];
extern const struct CompressedSpritePalette gBattleAnimPaletteTable[];
extern const struct SpriteTemplate gAncientPowerRockSpriteTemplate;

enum {
    COPYRIGHT_INITIALIZE,
    COPYRIGHT_EMULATOR_BLEND,
    COPYRIGHT_START_FADE = 140,
    COPYRIGHT_START_INTRO,
};

const u32 gTrainerBackPic_Brendan2[] = INCBIN_U32("graphics/trainers/back_pics/brendan.4bpp");
const u32 gTrainerBackPic_May2[] = INCBIN_U32("graphics/trainers/back_pics/may.4bpp");
const u32 gTrainerBackPic_Wally2[] = INCBIN_U32("graphics/trainers/back_pics/wally.4bpp");


const struct CompressedSpriteSheet gTrainerBackPicTable[] = {
    {gTrainerBackPic_Brendan2, 0x2000, 0},
    {gTrainerBackPic_May2, 0x2000, 1},
    {gTrainerBackPic_Wally2, 0x2000, 2}
};

#define TAG_VOLBEAT   1500
#define TAG_TORCHIC   1501
#define TAG_MANECTRIC 1502
#define TAG_LIGHTNING 1503
#define TAG_BUBBLES   1504
#define TAG_SPARKLE   1505

#define GFXTAG_DROPS_LOGO 2000
#define PALTAG_DROPS      2000
#define PALTAG_LOGO       2001

#define TAG_FLYGON_SILHOUETTE 2002
#define TAG_RAYQUAZA_ORB      2003

#define COLOSSEUM_GAME_CODE 0x65366347 // "Gc6e" in ASCII

// Used by various tasks and sprites
#define tState data[0]
#define sState data[0]

/*
    gIntroFrameCounter is used as a persistent timer throughout the
    intro cinematic. At various points it's used to determine when
    to trigger actions or progress through the cutscene.
    The values for these are defined contiguously below.
*/
#define TIMER_BIG_DROP_START             76
#define TIMER_LOGO_APPEAR               128
#define TIMER_LOGO_LETTERS_COLOR        144
#define TIMER_BIG_DROP_FALLS            251
#define TIMER_LOGO_BLEND_OUT            256
#define TIMER_LOGO_DISAPPEAR            272
#define TIMER_SMALL_DROP_1              368
#define TIMER_SMALL_DROP_2              384
#define TIMER_SPARKLES                  560
#define TIMER_FLYGON_SILHOUETTE_APPEAR  832
#define TIMER_END_PAN_UP                904
#define TIMER_END_SCENE_1              1007
#define TIMER_START_SCENE_2            1026
#define TIMER_MANECTRIC_ENTER          1088
#define TIMER_PLAYER_DRIFT_BACK        1109
#define TIMER_MANECTRIC_RUN_CIRCULAR   1168
#define TIMER_PLAYER_MOVE_FORWARD      1214
#define TIMER_TORCHIC_ENTER            1224
#define TIMER_FLYGON_ENTER             1394
#define TIMER_PLAYER_MOVE_BACKWARD     1398
#define TIMER_PLAYER_HOLD_POSITION     1576
#define TIMER_PLAYER_EXIT              1727
#define TIMER_TORCHIC_SPEED_UP         1735
#define TIMER_TORCHIC_EXIT             1856
#define TIMER_END_SCENE_2              1946
#define TIMER_START_SCENE_3            2068
// timer is reset for scene 3
#define TIMER_POKEBALL_FADE              28
#define TIMER_START_LEGENDARIES          43

static EWRAM_DATA u16 sIntroCharacterGender = 0;
static EWRAM_DATA u16 sFlygonYOffset = 0;

COMMON_DATA u32 gIntroFrameCounter = 0;
COMMON_DATA struct GcmbStruct gMultibootProgramStruct = {0};

extern struct SpriteTemplate gCreatingSpriteTemplate;
extern u16 gUnknown_02039358;
extern u16 gUnknown_0203935A;
extern u16 gSaveFileStatus;
extern u8 gReservedSpritePaletteCount;
extern void *const gUnknown_0840B5A0[];


static const u8 gIntro1BG0_Tilemap[] = INCBIN_U8("graphics/intro/intro1_bg0_map.bin.lz");
static const u8 gIntro1BG1_Tilemap[] = INCBIN_U8("graphics/intro/intro1_bg1_map.bin.lz");
static const u8 gIntro1BG2_Tilemap[] = INCBIN_U8("graphics/intro/intro1_bg2_map.bin.lz");
static const u8 gIntro1BG3_Tilemap[] = INCBIN_U8("graphics/intro/intro1_bg3_map.bin.lz");
static const u8 gIntro1BGLeavesGfx[] = INCBIN_U8("graphics/intro/introgfx.4bpp.lz");
static const u16 gIntro3PokeballPal[] = INCBIN_U16("graphics/intro/intro3_pokeball.gbapal");
static const u32 gIntro3Pokeball_Tilemap[] = INCBIN_U32("graphics/intro/intro3_pokeball_map.bin.lz");
static const u32 gIntro3Pokeball_Gfx[] = INCBIN_U32("graphics/intro/intro3_pokeball.8bpp.lz");
static const u16 gIntro3Streaks_Pal[] = INCBIN_U16("graphics/intro/intro3_streaks.gbapal");
static const u32 gIntro3Streaks_Gfx[] = INCBIN_U32("graphics/intro/intro3_streaks.4bpp.lz");
static const u32 gIntro3Streaks_Tilemap[] = INCBIN_U32("graphics/intro/intro3_streaks_map.bin.lz");
static const u16 gIntro3Misc1Palette[] = INCBIN_U16("graphics/intro/intro3_misc1.gbapal");
static const u16 gIntro3Misc2Palette[] = INCBIN_U16("graphics/intro/intro3_misc2.gbapal");
static const u32 gIntro3MiscTiles[] = INCBIN_U32("graphics/intro/intro3_misc.4bpp.lz");
static const u16 gIntro1EonPalette[] = INCBIN_U16("graphics/intro/intro1_eon.gbapal");
static const u8 gIntro1EonTiles[] = INCBIN_U8("graphics/intro/intro1_eon.4bpp.lz");
const u32 gInterfaceGfx_PokeBall[] = INCBIN_U32("graphics/balls/poke.4bpp.lz");
const u32 gInterfacePal_PokeBall[] = INCBIN_U32("graphics/balls/poke.gbapal.lz");


static const u16 sIntroDrops_Pal[]            = INCBIN_U16("graphics/intro/scene_1/drops.gbapal");
static const u16 sIntroLogo_Pal[]             = INCBIN_U16("graphics/intro/scene_1/logo.gbapal");
static const u32 sIntroDropsLogo_Gfx[]        = INCBIN_U32("graphics/intro/scene_1/drops_logo.4bpp.lz");
static const u16 sIntro1Bg_Pal[]              = INCBIN_U16("graphics/intro/scene_1/bg.gbapal"); // 16 x 16
static const u32 sIntro1Bg0_Tilemap[]         = INCBIN_U32("graphics/intro/scene_1/bg0_map.bin.lz");
static const u32 sIntro1Bg1_Tilemap[]         = INCBIN_U32("graphics/intro/scene_1/bg1_map.bin.lz");
static const u32 sIntro1Bg2_Tilemap[]         = INCBIN_U32("graphics/intro/scene_1/bg2_map.bin.lz");
static const u32 sIntro1Bg3_Tilemap[]         = INCBIN_U32("graphics/intro/scene_1/bg3_map.bin.lz");
static const u32 sIntro1Bg_Gfx[]              = INCBIN_U32("graphics/intro/scene_1/bg.4bpp.lz");
static const u16 sIntroPokeball_Pal[]         = INCBIN_U16("graphics/intro/scene_3/pokeball.gbapal");
static const u32 sIntroPokeball_Tilemap[]     = INCBIN_U32("graphics/intro/scene_3/pokeball_map.bin.lz");
static const u32 sIntroPokeball_Gfx[]         = INCBIN_U32("graphics/intro/scene_3/pokeball.8bpp.lz");
static const u16 sIntroStreaks_Pal[]          = INCBIN_U16("graphics/intro/scene_3/streaks.gbapal"); // Unused
static const u32 sIntroStreaks_Gfx[]          = INCBIN_U32("graphics/intro/scene_3/streaks.4bpp.lz"); // Unused
static const u32 sIntroStreaks_Tilemap[]      = INCBIN_U32("graphics/intro/scene_3/streaks_map.bin.lz"); // Unused
static const u16 sIntroRayquzaOrb_Pal[]       = INCBIN_U16("graphics/intro/scene_3/rayquaza_orb.gbapal");
static const u16 sIntroMisc_Pal[]             = INCBIN_U16("graphics/intro/scene_3/misc.gbapal"); // Unused
static const u32 sIntroMisc_Gfx[]             = INCBIN_U32("graphics/intro/scene_3/misc.4bpp.lz"); // Rayquza orb, and misc unused gfx
static const u16 sIntroFlygonSilhouette_Pal[] = INCBIN_U16("graphics/intro/scene_1/flygon.gbapal");
static const u32 sIntroLati_Gfx[]             = INCBIN_U32("graphics/intro/scene_1/lati.4bpp.lz"); // Unused
static const u8 sUnusedData[] = {
    0x02, 0x03, 0x04, 0x05, 0x01, 0x01, 0x01, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x02, 0x0D,
    0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x02, 0x0D, 0x0E, 0x0F,
    0x10, 0x11, 0x12, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x02, 0x0D, 0x0E, 0x0F, 0x10,
    0x11, 0x12, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x00
};
static const struct CompressedSpriteSheet sSpriteSheet_Sparkle[] =
{
    {gIntroSparkle_Gfx, 0x400, TAG_SPARKLE},
    {},
};
static const struct SpritePalette sSpritePalette_Sparkle[] =
{
    {gIntroLightning_Pal, TAG_SPARKLE}, // Lightning palette re-used
    {},
};
static const struct OamData sOamData_Sparkle =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd sAnim_Sparkle[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(8, 2),
    ANIMCMD_FRAME(12, 2),
    ANIMCMD_FRAME(16, 2),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnims_Sparkle[] =
{
    sAnim_Sparkle,
};
static const struct SpriteTemplate sSpriteTemplate_Sparkle =
{
    .tileTag = TAG_SPARKLE,
    .paletteTag = TAG_SPARKLE,
    .oam = &sOamData_Sparkle,
    .anims = sAnims_Sparkle,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Sparkle,
};
static const u8 sSparkleCoords[][2] =
{
    {124, 40},
    {102, 30},
    { 77, 30},
    { 54, 15},
    {148,  9},
    { 63, 28},
    { 93, 40},
    {148, 32},
    {173, 41},
    { 94, 20},
    {208, 38},
    {},
};
static const struct CompressedSpriteSheet sSpriteSheet_RunningPokemon[] =
{
    {gIntroVolbeat_Gfx, 0x400, TAG_VOLBEAT},
    {gIntroTorchic_Gfx, 0xC00, TAG_TORCHIC},
    {gIntroManectric_Gfx, 0x2000, TAG_MANECTRIC},
    {},
};
static const struct SpritePalette sSpritePalettes_RunningPokemon[] =
{
    {gIntroVolbeat_Pal, TAG_VOLBEAT},
    {gIntroTorchic_Pal, TAG_TORCHIC},
    {gIntroManectric_Pal, TAG_MANECTRIC},
    {},
};
static const struct OamData sOamData_Volbeat =
{
    .y = DISPLAY_HEIGHT,
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
static const union AnimCmd sAnim_Volbeat[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(16, 2),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnims_Volbeat[] =
{
    sAnim_Volbeat,
};
static const struct SpriteTemplate sSpriteTemplate_Volbeat =
{
    .tileTag = TAG_VOLBEAT,
    .paletteTag = TAG_VOLBEAT,
    .oam = &sOamData_Volbeat,
    .anims = sAnims_Volbeat,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Volbeat,
};
static const struct OamData sOamData_Torchic =
{
    .y = DISPLAY_HEIGHT,
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
static const union AnimCmd sAnim_Torchic_Walk[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_FRAME(32, 5),
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_Torchic_Run[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(16, 3),
    ANIMCMD_FRAME(32, 3),
    ANIMCMD_FRAME(16, 3),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_Torchic_Trip[] =
{
    ANIMCMD_FRAME(48, 4),
    ANIMCMD_FRAME(64, 6),
    ANIMCMD_FRAME(80, 0),
    ANIMCMD_END,
};
enum {
    TORCHIC_ANIM_WALK,
    TORCHIC_ANIM_RUN,
    TORCHIC_ANIM_TRIP,
};
static const union AnimCmd *const sAnims_Torchic[] =
{
    [TORCHIC_ANIM_WALK] = sAnim_Torchic_Walk,
    [TORCHIC_ANIM_RUN]  = sAnim_Torchic_Run,
    [TORCHIC_ANIM_TRIP] = sAnim_Torchic_Trip,
};
static const struct SpriteTemplate sSpriteTemplate_Torchic =
{
    .tileTag = TAG_TORCHIC,
    .paletteTag = TAG_TORCHIC,
    .oam = &sOamData_Torchic,
    .anims = sAnims_Torchic,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Torchic,
};
static const struct OamData sOamData_Manectric =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x64),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x64),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd sAnim_Manectric[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(64, 4),
    ANIMCMD_FRAME(128, 4),
    ANIMCMD_FRAME(192, 4),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnims_Manectric[] =
{
    sAnim_Manectric,
};
static const struct SpriteTemplate sSpriteTemplate_Manectric =
{
    .tileTag = TAG_MANECTRIC,
    .paletteTag = TAG_MANECTRIC,
    .oam = &sOamData_Manectric,
    .anims = sAnims_Manectric,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Manectric,
};

static const struct OamData sOamData_WaterDrop =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};
enum {
    DROP_ANIM_UPPER_HALF,
    DROP_ANIM_LOWER_HALF,
    DROP_ANIM_REFLECTION,
    DROP_ANIM_RIPPLE,
};
static const union AnimCmd sAnim_WaterDrop_UpperHalf[] =
{
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_WaterDrop_LowerHalf[] =
{
    ANIMCMD_FRAME(24, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_WaterDrop_Reflection[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_WaterDrop_Ripple[] =
{
    ANIMCMD_FRAME(48, 8),
    ANIMCMD_END,
};
static const union AnimCmd *const sAnims_WaterDrop[] =
{
    [DROP_ANIM_UPPER_HALF] = sAnim_WaterDrop_UpperHalf,
    [DROP_ANIM_LOWER_HALF] = sAnim_WaterDrop_LowerHalf,
    [DROP_ANIM_REFLECTION] = sAnim_WaterDrop_Reflection,
    [DROP_ANIM_RIPPLE]     = sAnim_WaterDrop_Ripple,
};
static const struct SpriteTemplate sSpriteTemplate_WaterDrop =
{
    .tileTag = GFXTAG_DROPS_LOGO,
    .paletteTag = PALTAG_DROPS,
    .oam = &sOamData_WaterDrop,
    .anims = sAnims_WaterDrop,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_WaterDrop,
};
static const union AnimCmd sAnim_PlayerBicycle_Fast[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(64, 4),
    ANIMCMD_FRAME(128, 4),
    ANIMCMD_FRAME(192, 4),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd sAnim_PlayerBicycle_Slow[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(64, 8),
    ANIMCMD_FRAME(128, 8),
    ANIMCMD_FRAME(192, 8),
    ANIMCMD_JUMP(0),
};
// The below two animations appear to be copied from the Credits version
// of the player graphic, where additional frames are present to show
// the player turning around to look at their rival.
// They go unused here, and if they were used they'd overflow beyond
// the player graphics data.
// The above sAnim_PlayerBicycle_Slow, while valid, is likewise unused
static const union AnimCmd sAnim_PlayerBicycle_LookBack[] =
{
    ANIMCMD_FRAME(256, 4),
    ANIMCMD_FRAME(320, 4),
    ANIMCMD_FRAME(384, 4),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_PlayerBicycle_LookForward[] =
{
    ANIMCMD_FRAME(384, 16),
    ANIMCMD_FRAME(320, 16),
    ANIMCMD_FRAME(256, 16),
    ANIMCMD_END,
};
static const union AnimCmd *const sAnims_PlayerBicycle[] =
{
    sAnim_PlayerBicycle_Fast,
    sAnim_PlayerBicycle_Slow,
    sAnim_PlayerBicycle_LookBack,
    sAnim_PlayerBicycle_LookForward,
};
static const struct OamData sOamData_GameFreakLetter =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_DOUBLE,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};
static const struct OamData sOamData_PresentsLetter =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(8x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(8x8),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};
static const struct OamData sOamData_GameFreakLogo =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_DOUBLE,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x64),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x64),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd sAnim_GameFreakLetter_G[] =
{
    ANIMCMD_FRAME(80, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_GameFreakLetter_A[] =
{
    ANIMCMD_FRAME(84, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_GameFreakLetter_M[] =
{
    ANIMCMD_FRAME(88, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_GameFreakLetter_E[] =
{
    ANIMCMD_FRAME(92, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_GameFreakLetter_F[] =
{
    ANIMCMD_FRAME(96, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_GameFreakLetter_R[] =
{
    ANIMCMD_FRAME(100, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_GameFreakLetter_K[] =
{
    ANIMCMD_FRAME(104, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_PresentsLetter_P[] =
{
    ANIMCMD_FRAME(112, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_PresentsLetter_R[] =
{
    ANIMCMD_FRAME(113, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_PresentsLetter_E[] =
{
    ANIMCMD_FRAME(114, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_PresentsLetter_S[] =
{
    ANIMCMD_FRAME(115, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_PresentsLetter_N[] =
{
    ANIMCMD_FRAME(116, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_PresentsLetter_T[] =
{
    ANIMCMD_FRAME(117, 8),
    ANIMCMD_END,
};
static const union AnimCmd sAnim_GameFreakLogo[] =
{
    ANIMCMD_FRAME(128, 8),
    ANIMCMD_END,
};

static const struct OamData gOamData_840B0C8 =
{
    .y = 160,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 0,
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd gSpriteAnim_840B0D0[] =
{
    ANIMCMD_FRAME(14, 8),
    ANIMCMD_END,
};
static const union AnimCmd *const gSpriteAnimTable_840B0D8[] =
{
    gSpriteAnim_840B0D0,
};
static void sub_813E5E0(struct Sprite *sprite);
static const struct SpriteTemplate gSpriteTemplate_840B0DC =
{
    .tileTag = 2003,
    .paletteTag = 2004,
    .oam = &gOamData_840B0C8,
    .anims = gSpriteAnimTable_840B0D8,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813E5E0,
};
static void sub_813E6C0(struct Sprite *sprite);
static const struct SpriteTemplate gSpriteTemplate_840B0F4 =
{
    .tileTag = 2003,
    .paletteTag = 2004,
    .oam = &gOamData_840B0C8,
    .anims = gSpriteAnimTable_840B0D8,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813E6C0,
};
static const struct OamData gOamData_840B10C =
{
    .y = 160,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 1,
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd gSpriteAnim_840B114[] =
{
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(6, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const gSpriteAnimTable_840B120[] =
{
    gSpriteAnim_840B114,
};
static void sub_813E804(struct Sprite *sprite);
static const struct SpriteTemplate gSpriteTemplate_840B124 =
{
    .tileTag = 2003,
    .paletteTag = 2004,
    .oam = &gOamData_840B10C,
    .anims = gSpriteAnimTable_840B120,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813E804,
};
static const struct OamData gOamData_840B13C =
{
    .y = 160,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 1,
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd gSpriteAnim_840B144[] =
{
    ANIMCMD_FRAME(10, 8),
    ANIMCMD_END,
};
static const union AnimCmd *const gSpriteAnimTable_840B14C[] =
{
    gSpriteAnim_840B144,
};
static void sub_813E980(struct Sprite *sprite);
static const struct SpriteTemplate gSpriteTemplate_840B150 =
{
    .tileTag = 2003,
    .paletteTag = 2004,
    .oam = &gOamData_840B13C,
    .anims = gSpriteAnimTable_840B14C,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813E980,
};
static const u8 gUnknown_0840B168[] = {0xE6, 0xEB, 0xE4, 0xEA, 0xE5, 0xE9, 0xE7, 0xE8};
static void sub_813EA60(struct Sprite *sprite);
static const struct SpriteTemplate gSpriteTemplate_840B170 =
{
    .tileTag = 2003,
    .paletteTag = 2004,
    .oam = &gOamData_840B13C,
    .anims = gSpriteAnimTable_840B14C,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813EA60,
};
static const u16 gUnknown_0840B188[] = {0x200, 0x1C0, 0x180, 0x140, 0x100, 0xE0, 0xC0, 0xA0, 0x80, 0x80};
static const struct OamData gOamData_840B19C =
{
    .y = 160,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 1,
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd gSpriteAnim_840B1A4[] =
{
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_END,
};
static const union AnimCmd *const gSpriteAnimTable_840B1AC[] =
{
    gSpriteAnim_840B1A4,
};
static void sub_813EBBC(struct Sprite *sprite);
static const struct SpriteTemplate gSpriteTemplate_840B1B0 =
{
    .tileTag = 2003,
    .paletteTag = 2004,
    .oam = &gOamData_840B19C,
    .anims = gSpriteAnimTable_840B1AC,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813EBBC,
};
static void sub_813EC90(struct Sprite *sprite);

static const struct SpriteFrameImage sPicTable_Bubbles[] = {
    {gBattleAnimSpriteGfx_Bubble, 0x800},
    {gBattleAnimSpriteGfx_Bubble, 0x800},
    {gBattleAnimSpriteGfx_Bubble, 0x800},
    {gBattleAnimSpriteGfx_Bubble, 0x800},
};
static const struct SpriteTemplate gSpriteTemplate_840B1C8 =
{
    .tileTag = 2003,
    .paletteTag = 2004,
    .oam = &gOamData_840B19C,
    .anims = gSpriteAnimTable_840B1AC,
    .images = sPicTable_Bubbles,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813EC90,
};
static const struct OamData gOamData_840B1E0 =
{
    .y = 160,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 3,
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd gSpriteAnim_840B1E8[] =
{
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_END,
};
static const union AnimCmd *const gSpriteAnimTable_840B1F0[] =
{
    gSpriteAnim_840B1E8,
};
static void sub_813EDFC(struct Sprite *sprite);
static const struct SpriteTemplate gSpriteTemplate_840B1F4 =
{
    .tileTag = 2003,
    .paletteTag = 2003,
    .oam = &gOamData_840B1E0,
    .anims = gSpriteAnimTable_840B1F0,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813EDFC,
};
const struct CompressedSpriteSheet gIntro3PokeballGfx_Table[] =
{
    {gInterfaceGfx_PokeBall, 0x100, 2002},
    {NULL},
};
const struct CompressedSpriteSheet gIntro3MiscGfx_Table[] =
{
    {gIntro3MiscTiles, 0xa00, 2003},
    {NULL},
};
const struct CompressedSpritePalette gInterfacePokeballPal_Table[] =
{
    {gInterfacePal_PokeBall, 2002},
    {NULL},
};
const struct SpritePalette gIntro3MiscPal_Table[] =
{
    {gIntro3Misc1Palette, 2003},
    {gIntro3Misc2Palette, 2004},
    {NULL},
};
static const struct OamData gOamData_840B09C =
{
    .y = 160,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 0,
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd gSpriteAnim_840B0A4[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_END,
};
static const union AnimCmd *const gSpriteAnimTable_840B0AC[] =
{
    gSpriteAnim_840B0A4,
};
static void sub_813E4B8(struct Sprite *sprite);
static const struct SpriteTemplate gSpriteTemplate_840B0B0 =
{
    .tileTag = 2003,
    .paletteTag = 2003,
    .oam = &gOamData_840B09C,
    .anims = gSpriteAnimTable_840B0AC,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813E4B8,
};

static void sub_813E4B8(struct Sprite *sprite)
{
    u16 r4;
    u16 r2;
    u16 r1;

    sprite->data[7]++;
    if (sprite->data[7] & 1)
        sprite->invisible = FALSE;
    else
        sprite->invisible = TRUE;
    if (sprite->data[2] >= 64)
    {
        DestroySprite(sprite);
        return;
    }
    sprite->data[2] += 2;
    r4 = Sin((u8)sprite->data[2], 40);
    sprite->x2 = Cos((u8)(sprite->data[0] * 32), r4);
    sprite->y2 = Sin((u8)(sprite->data[0] * 32), r4);
    if (sprite->data[0] == 0)
    {
        sprite->data[3] -= sprite->data[1];
        if ((sprite->data[7] & 1) && sprite->data[1] != 0)
            sprite->data[1]--;
        r2 = gSineTable[(u8)sprite->data[3]];
        r1 = gSineTable[(u8)(sprite->data[3] + 64)];
        SetOamMatrix(16, r1, r2, -r2, r1);
    }
}
static const union AnimCmd gSpriteAnim_840B078[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
static const union AnimCmd *const gSpriteAnimTable_840B080[] =
{
    gSpriteAnim_840B078,
};
static const struct OamData gOamData_840B070 =
{
    .y = 160,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 1,
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};
static void sub_813E30C(struct Sprite *sprite)
{
    u16 r4, r1;

    sprite->data[7]++;
    switch (sprite->data[0])
    {
    case 0:
    default:
        break;
    case 1:
        sprite->oam.affineMode = 1;
        sprite->oam.matrixNum = 1;
        sprite->data[0] = 10;
        sprite->data[4] = 36;
        //fall through
    case 10:
        if (sprite->x <= 144)
        {
            sprite->x += 4;
            sprite->y -= 1;
            sprite->y2 = -Sin((u8)sprite->data[2], 24);
            sprite->data[2] += 4;
        }
        sprite->data[3] -= sprite->data[4];
        if ((sprite->data[7] & 1) && sprite->data[4] != 0)
            sprite->data[4]--;
        r4 = gSineTable[(u8)sprite->data[3]];
        r1 = gSineTable[(u8)(sprite->data[3] + 64)];
        SetOamMatrix(1, r1, r4, -r4, r1);
        break;
    case 2:
        sprite->oam.affineMode = 1;
        sprite->oam.matrixNum = 2;
        sprite->data[0] = 20;
        sprite->data[4] = 36;
        //fall through
    case 20:
        if (sprite->x <= 96)
        {
            sprite->x += 3;
            sprite->y -= 1;
            sprite->y2 = -Sin((u8)sprite->data[2], 24);
            sprite->data[2] += 4;
        }
        sprite->data[3] -= sprite->data[4];
        if ((sprite->data[7] & 1) && sprite->data[4] != 0)
            sprite->data[4]--;
        r4 = gSineTable[(u8)sprite->data[3]];
        r1 = gSineTable[(u8)(sprite->data[3] + 64)];
        SetOamMatrix(2, r1, r4, -r4, r1);
        break;
    }
}
static const struct OamData gOamData_840ADE8 =
{
    .y = 160,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 2,
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd gSpriteAnim_840ADF0[] =
{
    ANIMCMD_FRAME(16, 8),
    ANIMCMD_END,
};
static const union AnimCmd gSpriteAnim_840ADF8[] =
{
    ANIMCMD_FRAME(24, 8),
    ANIMCMD_END,
};
static const union AnimCmd gSpriteAnim_840AE00[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
static const union AnimCmd gSpriteAnim_840AE08[] =
{
    ANIMCMD_FRAME(48, 8),
    ANIMCMD_END,
};

static const union AnimCmd *const gSpriteAnimTable_840AE10[] =
{
    gSpriteAnim_840ADF0,
    gSpriteAnim_840ADF8,
    gSpriteAnim_840AE00,
    gSpriteAnim_840AE08,
};
static void sub_813D208(struct Sprite *sprite)
{
    if (sprite->data[0] != 0)
        sprite->callback = sub_813D220;
}
static const struct SpriteTemplate gSpriteTemplate_840AE20 =
{
    .tileTag = 2000,
    .paletteTag = 2000,
    .oam = &gOamData_840ADE8,
    .anims = gSpriteAnimTable_840AE10,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813D208,
};
static const struct SpriteTemplate gSpriteTemplate_840B084 =
{
    .tileTag = 2002,
    .paletteTag = 2002,
    .oam = &gOamData_840B070,
    .anims = gSpriteAnimTable_840B080,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = sub_813E30C,
};

enum {
    GAMEFREAK_G,
    GAMEFREAK_A,
    GAMEFREAK_M,
    GAMEFREAK_E,
    GAMEFREAK_F,
    GAMEFREAK_R,
    GAMEFREAK_K,
};
enum {
    PRESENTS_P,
    PRESENTS_R,
    PRESENTS_E,
    PRESENTS_S,
    PRESENTS_N,
    PRESENTS_T,
};
static const union AnimCmd *const sAnims_GameFreakLetter[] =
{
    [GAMEFREAK_G] = sAnim_GameFreakLetter_G,
    [GAMEFREAK_A] = sAnim_GameFreakLetter_A,
    [GAMEFREAK_M] = sAnim_GameFreakLetter_M,
    [GAMEFREAK_E] = sAnim_GameFreakLetter_E,
    [GAMEFREAK_F] = sAnim_GameFreakLetter_F,
    [GAMEFREAK_R] = sAnim_GameFreakLetter_R,
    [GAMEFREAK_K] = sAnim_GameFreakLetter_K,
};
static const union AnimCmd *const sAnims_PresentsLetter[] =
{
    [PRESENTS_P] = sAnim_PresentsLetter_P,
    [PRESENTS_R] = sAnim_PresentsLetter_R,
    [PRESENTS_E] = sAnim_PresentsLetter_E,
    [PRESENTS_S] = sAnim_PresentsLetter_S,
    [PRESENTS_N] = sAnim_PresentsLetter_N,
    [PRESENTS_T] = sAnim_PresentsLetter_T,
};
static const union AnimCmd *const sAnims_GameFreakLogo[] =
{
    sAnim_GameFreakLogo,
};
#define NUM_GF_LETTERS 9 // Letters in "Game Freak"
static const s16 sGameFreakLetterData[NUM_GF_LETTERS][2] =
{
    // Letter,   x offset
    {GAMEFREAK_G, -72},
    {GAMEFREAK_A, -56},
    {GAMEFREAK_M, -40},
    {GAMEFREAK_E, -24},
    {GAMEFREAK_F,   8},
    {GAMEFREAK_R,  24},
    {GAMEFREAK_E,  40},
    {GAMEFREAK_A,  56},
    {GAMEFREAK_K,  72},
};
static const s16 sPresentsLetterData[][2] =
{
    // Letter,   x offset
    {PRESENTS_P, -28},
    {PRESENTS_R, -20},
    {PRESENTS_E, -12},
    {PRESENTS_S,  -4},
    {PRESENTS_E,   4},
    {PRESENTS_N,  12},
    {PRESENTS_T,  20},
    {PRESENTS_S,  28},
};
static const union AffineAnimCmd sAffineAnim_GameFreak_Small[] =
{
    AFFINEANIMCMD_FRAME(128, 128, 0, 0),
    AFFINEANIMCMD_END,
};
static const union AffineAnimCmd sAffineAnim_GameFreak_GrowAndShrink[] =
{
    AFFINEANIMCMD_FRAME(128, 128, 0, 0),
    AFFINEANIMCMD_FRAME(16, 16, 0, 16),
    AFFINEANIMCMD_FRAME(-16, -16, 0, 8),
    AFFINEANIMCMD_END,
};
static const union AffineAnimCmd sAffineAnim_GameFreak_GrowBig[] =
{
    AFFINEANIMCMD_FRAME(256, 256, 0, 0),
    AFFINEANIMCMD_FRAME(8, 8, 0, 48),
    AFFINEANIMCMD_END,
};
static const union AffineAnimCmd sAffineAnim_GameFreak_GrowMedium[] =
{
    AFFINEANIMCMD_FRAME(256, 256, 0, 0),
    AFFINEANIMCMD_FRAME(2, 2, 0, 48),
    AFFINEANIMCMD_END,
};
static const union AffineAnimCmd *const sAffineAnims_GameFreak[] =
{
    sAffineAnim_GameFreak_Small,         // Initialize letters while still invisible
    sAffineAnim_GameFreak_GrowAndShrink, // For letters appearing. Logo does this too, but while it's invisible
    sAffineAnim_GameFreak_GrowBig,       // For letters disappearing
    sAffineAnim_GameFreak_GrowMedium,    // For logo disappearing
};
static const u16 sGameFreakLettersMoveSpeed[NUM_GF_LETTERS] =
{
    256, // G
    192, // A
    128, // M
     64, // E
      0, // F
     64, // R
    128, // E
    192, // A
    256  // K
};
static const struct SpriteTemplate sSpriteTemplate_GameFreakLetter =
{
    .tileTag = GFXTAG_DROPS_LOGO,
    .paletteTag = PALTAG_LOGO,
    .oam = &sOamData_GameFreakLetter,
    .anims = sAnims_GameFreakLetter,
    .images = NULL,
    .affineAnims = sAffineAnims_GameFreak,
    .callback = SpriteCB_LogoLetter,
};
// Unused
static const struct SpriteTemplate sSpriteTemplate_PresentsLetter =
{
    .tileTag = GFXTAG_DROPS_LOGO,
    .paletteTag = PALTAG_LOGO,
    .oam = &sOamData_PresentsLetter,
    .anims = sAnims_PresentsLetter,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_LogoLetter,
};
static const struct SpriteTemplate sSpriteTemplate_GameFreakLogo =
{
    .tileTag = GFXTAG_DROPS_LOGO,
    .paletteTag = PALTAG_LOGO,
    .oam = &sOamData_GameFreakLogo,
    .anims = sAnims_GameFreakLogo,
    .images = NULL,
    .affineAnims = sAffineAnims_GameFreak,
    .callback = SpriteCB_GameFreakLogo,
};
static const u8 sGameFreakLetterStartDelays[NUM_GF_LETTERS] =
{
    0,  // G
    23, // A
    23, // M
    49, // E
    62, // F
    36, // R
    36, // E
    10, // A
    10  // K
};
static const struct OamData sOamData_FlygonSilhouette =
{
    .y = DISPLAY_HEIGHT,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};
static const union AnimCmd sAnim_FlygonSilhouette[] =
{
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_JUMP(0),
};
static const union AnimCmd *const sAnims_FlygonSilhouette[] =
{
    sAnim_FlygonSilhouette,
};
static const struct SpriteTemplate sSpriteTemplate_FlygonSilhouette =
{
    .tileTag = TAG_FLYGON_SILHOUETTE,
    .paletteTag = TAG_FLYGON_SILHOUETTE,
    .oam = &sOamData_FlygonSilhouette,
    .anims = sAnims_FlygonSilhouette,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_FlygonSilhouette,
};
static const struct CompressedSpriteSheet sSpriteSheet_WaterDropsAndLogo[] =
{
    {sIntroDropsLogo_Gfx, 0x1400, GFXTAG_DROPS_LOGO},
    {},
};
static const struct CompressedSpriteSheet sSpriteSheet_FlygonSilhouette[] =
{
    {gIntroFlygonSilhouette_Gfx, 0x400, TAG_FLYGON_SILHOUETTE},
    {},
};
static const struct SpritePalette sSpritePalettes_Intro1[] =
{
    {sIntroDrops_Pal, PALTAG_DROPS},
    {sIntroLogo_Pal, PALTAG_LOGO},
    {sIntroFlygonSilhouette_Pal, TAG_FLYGON_SILHOUETTE},
    {},
};

static void VBlankCB_Intro(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ScanlineEffect_InitHBlankDmaTransfer();
}

void MainCB2_Intro(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
    if (gMain.newKeys != 0 && !gPaletteFade.active)
        SetMainCallback2(MainCB2_EndIntro);
    else if (gIntroFrameCounter != -1)
        gIntroFrameCounter++;
}

static void MainCB2_EndIntro(void)
{
    if (!UpdatePaletteFade())
        SetMainCallback2(CB2_InitTitleScreen);
}

static void LoadCopyrightGraphics(u16 tilesetAddress, u16 tilemapAddress, u16 paletteOffset)
{
    LZ77UnCompVram(gIntroCopyright_Gfx, (void *)(VRAM + tilesetAddress));
    LZ77UnCompVram(gIntroCopyright_Tilemap, (void *)(VRAM + tilemapAddress));
    LoadPalette(gIntroCopyright_Pal, paletteOffset, PLTT_SIZE_4BPP);
}

static void SerialCB_CopyrightScreen(void)
{
    GameCubeMultiBoot_HandleSerialInterrupt(&gMultibootProgramStruct);
}

static u8 SetUpCopyrightScreen(void)
{
    switch (gMain.state)
    {
    case COPYRIGHT_INITIALIZE:
        SetVBlankCallback(NULL);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        *(u16 *)PLTT = RGB_WHITE;
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        SetGpuReg(REG_OFFSET_BG0HOFS, 0);
        SetGpuReg(REG_OFFSET_BG0VOFS, 0);
        CpuFill32(0, (void *)VRAM, VRAM_SIZE);
        CpuFill32(0, (void *)OAM, OAM_SIZE);
        CpuFill16(0, (void *)(PLTT + 2), PLTT_SIZE - 2);
        ResetPaletteFade();
        LoadCopyrightGraphics(0, 0x3800, BG_PLTT_ID(0));
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        FreeAllSpritePalettes();
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_WHITEALPHA);
        SetGpuReg(REG_OFFSET_BG0CNT, BGCNT_PRIORITY(0)
                                   | BGCNT_CHARBASE(0)
                                   | BGCNT_SCREENBASE(7)
                                   | BGCNT_16COLOR
                                   | BGCNT_TXT256x256);
        EnableInterrupts(INTR_FLAG_VBLANK);
        SetVBlankCallback(VBlankCB_Intro);
        REG_DISPCNT = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON;
        SetSerialCallback(SerialCB_CopyrightScreen);
        GameCubeMultiBoot_Init(&gMultibootProgramStruct);
    // REG_DISPCNT needs to be overwritten the second time, because otherwise the intro won't show up on VBA 1.7.2 and John GBA Lite emulators.
    // The REG_DISPCNT overwrite is NOT needed in m-GBA, No$GBA, VBA 1.8.0, My Boy and Pizza Boy GBA emulators.
    case COPYRIGHT_EMULATOR_BLEND:
        REG_DISPCNT = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON;
    default:
        UpdatePaletteFade();
        gMain.state++;
        GameCubeMultiBoot_Main(&gMultibootProgramStruct);
        break;
    case COPYRIGHT_START_FADE:
        GameCubeMultiBoot_Main(&gMultibootProgramStruct);
        if (gMultibootProgramStruct.gcmb_field_2 != 1)
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gMain.state++;
        }
        break;
    case COPYRIGHT_START_INTRO:
        if (UpdatePaletteFade())
            break;
#if EXPANSION_INTRO == TRUE
        SetMainCallback2(CB2_ExpansionIntro);
        CreateTask(Task_HandleExpansionIntro, 0);
#else
        CreateTask(Task_Scene1_Load, 0);
        SetMainCallback2(MainCB2_Intro);
#endif
        if (gMultibootProgramStruct.gcmb_field_2 != 0)
        {
            if (gMultibootProgramStruct.gcmb_field_2 == 2)
            {
                // check the multiboot ROM header game code to see if we already did this
                if (*(u32 *)(EWRAM_START + 0xAC) == COLOSSEUM_GAME_CODE)
                {
                    CpuCopy16(&gMultiBootProgram_PokemonColosseum_Start, (void *)EWRAM_START, sizeof(gMultiBootProgram_PokemonColosseum_Start));
                    *(u32 *)(EWRAM_START + 0xAC) = COLOSSEUM_GAME_CODE;
                }
                GameCubeMultiBoot_ExecuteProgram(&gMultibootProgramStruct);
            }
        }
        else
        {
            GameCubeMultiBoot_Quit();
            SetSerialCallback(SerialCB);
        }
        return 0;
    }

    return 1;
}

void CB2_InitCopyrightScreenAfterBootup(void)
{
    if (!SetUpCopyrightScreen())
    {
        SetSaveBlocksPointers(GetSaveBlocksPointersBaseOffset());
        ResetMenuAndMonGlobals();
        Save_ResetSaveCounters();
        LoadGameSave(SAVE_NORMAL);
        if (gSaveFileStatus == SAVE_STATUS_EMPTY || gSaveFileStatus == SAVE_STATUS_CORRUPT)
            Sav2_ClearSetDefault();
        SetPokemonCryStereo(gSaveBlock2Ptr->optionsSound);
        InitHeap(gHeap, HEAP_SIZE);
    }
}

void CB2_InitCopyrightScreenAfterTitleScreen(void)
{
    SetUpCopyrightScreen();
}

#define sBigDropSpriteId data[0]

void Task_Scene1_Load(u8 taskId)
{
    SetVBlankCallback(NULL);
    sIntroCharacterGender = MOD(Random(), GENDER_COUNT);
    IntroResetGpuRegs();
    SetGpuReg(REG_OFFSET_BG3VOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 80);
    SetGpuReg(REG_OFFSET_BG1VOFS, 24);
    SetGpuReg(REG_OFFSET_BG0VOFS, 40);
    LZ77UnCompVram(sIntro1Bg_Gfx, (void *)VRAM);
    LZ77UnCompVram(sIntro1Bg0_Tilemap, (void *)(BG_CHAR_ADDR(2)));
    DmaClear16(3, BG_SCREEN_ADDR(17), BG_SCREEN_SIZE);
    LZ77UnCompVram(sIntro1Bg1_Tilemap, (void *)(BG_SCREEN_ADDR(18)));
    DmaClear16(3, BG_SCREEN_ADDR(19), BG_SCREEN_SIZE);
    LZ77UnCompVram(sIntro1Bg2_Tilemap, (void *)(BG_SCREEN_ADDR(20)));
    DmaClear16(3, BG_SCREEN_ADDR(21), BG_SCREEN_SIZE);
    LZ77UnCompVram(sIntro1Bg3_Tilemap, (void *)(BG_SCREEN_ADDR(22)));
    DmaClear16(3, BG_SCREEN_ADDR(23), BG_SCREEN_SIZE);
    LoadPalette(sIntro1Bg_Pal, BG_PLTT_ID(0), sizeof(sIntro1Bg_Pal));
    SetGpuReg(REG_OFFSET_BG3CNT, BGCNT_PRIORITY(3) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(22) | BGCNT_16COLOR | BGCNT_TXT256x512);
    SetGpuReg(REG_OFFSET_BG2CNT, BGCNT_PRIORITY(2) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(20) | BGCNT_16COLOR | BGCNT_TXT256x512);
    SetGpuReg(REG_OFFSET_BG1CNT, BGCNT_PRIORITY(1) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(18) | BGCNT_16COLOR | BGCNT_TXT256x512);
    SetGpuReg(REG_OFFSET_BG0CNT, BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(16) | BGCNT_16COLOR | BGCNT_TXT256x512);
    LoadCompressedSpriteSheet(sSpriteSheet_WaterDropsAndLogo);
    LoadCompressedSpriteSheet(sSpriteSheet_FlygonSilhouette);
    LoadSpritePalettes(sSpritePalettes_Intro1);
    LoadCompressedSpriteSheet(sSpriteSheet_Sparkle);
    LoadSpritePalettes(sSpritePalette_Sparkle);
    CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(0)], &gPlttBufferUnfaded[OBJ_PLTT_ID(15) + 0], PLTT_SIZEOF(16 - 0));
    CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(0)], &gPlttBufferUnfaded[OBJ_PLTT_ID(14) + 1], PLTT_SIZEOF(16 - 1) + 1); // Copying an extra half color?
    CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(0)], &gPlttBufferUnfaded[OBJ_PLTT_ID(13) + 2], PLTT_SIZEOF(16 - 2));
    CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(0)], &gPlttBufferUnfaded[OBJ_PLTT_ID(12) + 3], PLTT_SIZEOF(16 - 3));
    CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(0)], &gPlttBufferUnfaded[OBJ_PLTT_ID(11) + 4], PLTT_SIZEOF(16 - 4));
    CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(0)], &gPlttBufferUnfaded[OBJ_PLTT_ID(10) + 5], PLTT_SIZEOF(16 - 5));
    CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(0)], &gPlttBufferUnfaded[OBJ_PLTT_ID( 9) + 6], PLTT_SIZEOF(16 - 6));
    CreateGameFreakLogoSprites(DISPLAY_WIDTH / 2, DISPLAY_HEIGHT / 2, 0);
    gTasks[taskId].sBigDropSpriteId = CreateWaterDrop(236, -14, 0x200, 1, 0x78, FALSE);
    gTasks[taskId].func = Task_Scene1_FadeIn;
}

static void Task_Scene1_FadeIn(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(VBlankCB_Intro);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG_ALL_ON | DISPCNT_OBJ_ON);
    gTasks[taskId].func = Task_Scene1_WaterDrops;
    gIntroFrameCounter = 0;
    m4aSongNumStart(MUS_INTRO);
    ResetSerial();
}

// Task data for Task_Scene1_PanUp
#define tBg2PosHi data[1]
#define tBg2PosLo data[2]
#define tBg1PosHi data[3]
#define tBg1PosLo data[4]
#define tBg3PosHi data[5]
#define tBg3PosLo data[6]

static void Task_Scene1_WaterDrops(u8 taskId)
{
    if (gIntroFrameCounter == TIMER_BIG_DROP_START)
        gSprites[gTasks[taskId].sBigDropSpriteId].sState = 1;

    if (gIntroFrameCounter == TIMER_LOGO_APPEAR)
        CreateTask(Task_BlendLogoIn, 0);

    if (gIntroFrameCounter == TIMER_BIG_DROP_FALLS)
        gSprites[gTasks[taskId].sBigDropSpriteId].sState = 2;

    if (gIntroFrameCounter == TIMER_LOGO_BLEND_OUT)
        CreateTask(Task_BlendLogoOut, 0);

    if (gIntroFrameCounter == TIMER_SMALL_DROP_1)
        CreateWaterDrop(48, 0, 0x400, 5, 0x70, TRUE);

    if (gIntroFrameCounter == TIMER_SMALL_DROP_2)
        CreateWaterDrop(200, 60, 0x400, 9, 0x80, TRUE);

    if (gIntroFrameCounter == TIMER_SPARKLES)
        CreateTask(Task_CreateSparkles, 0);

    if (gIntroFrameCounter > TIMER_SPARKLES)
    {
        gTasks[taskId].tBg2PosHi = 80;
        gTasks[taskId].tBg2PosLo = 0;
        gTasks[taskId].tBg1PosHi = 24;
        gTasks[taskId].tBg1PosLo = 0;
        gTasks[taskId].tBg3PosHi = 40;
        gTasks[taskId].tBg3PosLo = 0;
        gTasks[taskId].func = Task_Scene1_PanUp;
    }
}

#define tDelay       data[1]
#define tTimer       data[2]
#define tTimerSteps  data[3]
#define tNumSparkles data[4]

static void Task_CreateSparkles(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (++tTimer & 1)
        tTimerSteps++;

    switch (tState)
    {
    case 0:
        CreateSprite(&sSpriteTemplate_Sparkle, sSparkleCoords[tNumSparkles][0], sSparkleCoords[tNumSparkles][1] + tTimerSteps, 0);
        tState++;
        tDelay = 12;
        tNumSparkles++;
        break;
    case 1:
        if (--tDelay == 0)
            tState = 0;
        break;
    }

    if (tTimerSteps > 60)
        DestroyTask(taskId);
}

#undef tDelay
#undef tTimer
#undef tTimerSteps
#undef tNumSparkles

#define sTimer data[0]
static void SpriteCB_Sparkle(struct Sprite *sprite)
{
    if (++sprite->sTimer == 12)
        DestroySprite(sprite);
}
#undef sTimer

static void Task_Scene1_PanUp(u8 taskId)
{
    if (gIntroFrameCounter < TIMER_END_PAN_UP)
    {
        s32 offset;

        // Slide bg 2 downward
        offset = (gTasks[taskId].tBg2PosHi << 16) + (u16)gTasks[taskId].tBg2PosLo;
        offset -= 0x6000;
        gTasks[taskId].tBg2PosHi = offset >> 16;
        gTasks[taskId].tBg2PosLo = offset;
        SetGpuReg(REG_OFFSET_BG2VOFS, gTasks[taskId].tBg2PosHi);

        // Slide bg 1 downward
        offset = (gTasks[taskId].tBg1PosHi << 16) + (u16)gTasks[taskId].tBg1PosLo;
        offset -= 0x8000;
        gTasks[taskId].tBg1PosHi = offset >> 16;
        gTasks[taskId].tBg1PosLo = offset;
        SetGpuReg(REG_OFFSET_BG1VOFS, gTasks[taskId].tBg1PosHi);

        // Slide bg 3 downward
        offset = (gTasks[taskId].tBg3PosHi << 16) + (u16)gTasks[taskId].tBg3PosLo;
        offset -= 0xC000;
        gTasks[taskId].tBg3PosHi = offset >> 16;
        gTasks[taskId].tBg3PosLo = offset;
        SetGpuReg(REG_OFFSET_BG0VOFS, gTasks[taskId].tBg3PosHi);

        if (gIntroFrameCounter == TIMER_FLYGON_SILHOUETTE_APPEAR)
        {
            // Show Flygon silhouette
            u8 spriteId = CreateSprite(&sSpriteTemplate_FlygonSilhouette, 120, DISPLAY_HEIGHT, 10);
            gSprites[spriteId].invisible = TRUE;
        }
    }
    else
    {
        if (gIntroFrameCounter > TIMER_END_SCENE_1)
        {
            // Fade to white
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_WHITEALPHA);
            gTasks[taskId].func = Task_Scene1_End;
        }
    }
}

static void Task_Scene1_End(u8 taskId)
{
    if (gIntroFrameCounter > TIMER_START_SCENE_2)
        gTasks[taskId].func = Task_Scene2_Load;
}

static void IntroResetGpuRegs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BG3HOFS, 0);
    SetGpuReg(REG_OFFSET_BG3VOFS, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
}

static void Task_BlendLogoIn(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case 0:
    default:
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND
                                   | BLDCNT_TGT2_BG0
                                   | BLDCNT_TGT2_BG1
                                   | BLDCNT_TGT2_BG2
                                   | BLDCNT_TGT2_BG3
                                   | BLDCNT_TGT2_OBJ
                                   | BLDCNT_TGT2_BD);
        SetGpuReg(REG_OFFSET_BLDALPHA, gTitleScreenAlphaBlend[31]);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        gTasks[taskId].data[1] = ARRAY_COUNT(gTitleScreenAlphaBlend);
        gTasks[taskId].tState++;
        break;
    case 1:
        if (gTasks[taskId].data[1] != 0)
        {
            u8 tmp;

            gTasks[taskId].data[1]--;
            tmp = gTasks[taskId].data[1] / 2;
            SetGpuReg(REG_OFFSET_BLDALPHA, gTitleScreenAlphaBlend[tmp]);
        }
        else
        {
            SetGpuReg(REG_OFFSET_BLDALPHA, gTitleScreenAlphaBlend[0]);
            gTasks[taskId].data[1] = ARRAY_COUNT(gTitleScreenAlphaBlend) / 4;
            gTasks[taskId].tState++;
        }
        break;
    case 2:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        DestroyTask(taskId);
        break;
    }
}

static void Task_BlendLogoOut(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case 0:
    default:
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND
                                   | BLDCNT_TGT2_BG0
                                   | BLDCNT_TGT2_BG1
                                   | BLDCNT_TGT2_BG2
                                   | BLDCNT_TGT2_BG3
                                   | BLDCNT_TGT2_OBJ
                                   | BLDCNT_TGT2_BD);
        SetGpuReg(REG_OFFSET_BLDALPHA, gTitleScreenAlphaBlend[0]);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        gTasks[taskId].data[1] = 0;
        gTasks[taskId].tState++;
        break;
    case 1:
        if (gTasks[taskId].data[1] < (int)ARRAY_COUNT(gTitleScreenAlphaBlend) - 2)
        {
            u8 tmp;

            gTasks[taskId].data[1]++;
            tmp = gTasks[taskId].data[1] / 2;
            SetGpuReg(REG_OFFSET_BLDALPHA, gTitleScreenAlphaBlend[tmp]);
        }
        else
        {
            SetGpuReg(REG_OFFSET_BLDALPHA, gTitleScreenAlphaBlend[31]);
            gTasks[taskId].data[1] = ARRAY_COUNT(gTitleScreenAlphaBlend) / 4;
            gTasks[taskId].tState++;
        }
        break;
    case 2:
        if (gTasks[taskId].data[1] != 0)
        {
            gTasks[taskId].data[1]--;
        }
        else
        {
            SetGpuReg(REG_OFFSET_BLDCNT, 0);
            SetGpuReg(REG_OFFSET_BLDALPHA, 0);
            SetGpuReg(REG_OFFSET_BLDY, 0);
            DestroyTask(taskId);
        }
        break;
    }
}

static void Task_Scene2_Load(u8 taskId)
{
    IntroResetGpuRegs();
    SetVBlankCallback(NULL);
    ResetSpriteData();
    FreeAllSpritePalettes();
    gIntroCredits_MovingSceneryVBase = 0;
    gIntroCredits_MovingSceneryVOffset = 0;
    sFlygonYOffset = 0;
    LoadIntroPart2Graphics(1);
    gTasks[taskId].func = Task_Scene2_CreateSprites;
}

#define tBgAnimTaskId   data[0]
#define tPlayerSpriteId data[1]
#define tFlygonSpriteId data[2]
#define tFlygonTimer    data[3]

static void Task_Scene2_CreateSprites(u8 taskId)
{
    u8 spriteId;

    // Load sprite sheets
    if (sIntroCharacterGender == MALE)
        LoadCompressedSpriteSheet(gSpriteSheet_IntroBrendan);
    else
        LoadCompressedSpriteSheet(gSpriteSheet_IntroMay);

    LoadCompressedSpriteSheet(gSpriteSheet_IntroBicycle);
    LoadCompressedSpriteSheet(gSpriteSheet_IntroFlygon);

    // Load sprite palettes
    for (spriteId = 0; spriteId < ARRAY_COUNT(sSpriteSheet_RunningPokemon) - 1; spriteId++)
        LoadCompressedSpriteSheet(&sSpriteSheet_RunningPokemon[spriteId]);

    LoadSpritePalettes(gSpritePalettes_IntroPlayerFlygon);
    LoadSpritePalettes(sSpritePalettes_RunningPokemon);

    // Create Pokémon and player sprites
    CreateSprite(&sSpriteTemplate_Manectric, DISPLAY_WIDTH + 32, 128, 0);
    CreateSprite(&sSpriteTemplate_Torchic, DISPLAY_WIDTH + 48, 110, 1);

    if (sIntroCharacterGender == MALE)
        spriteId = CreateIntroBrendanSprite(DISPLAY_WIDTH + 32, 100);
    else
        spriteId = CreateIntroMaySprite(DISPLAY_WIDTH + 32, 100);

    gSprites[spriteId].callback = SpriteCB_PlayerOnBicycle;
    gSprites[spriteId].anims = sAnims_PlayerBicycle;
    gTasks[taskId].tPlayerSpriteId = spriteId;
    CreateSprite(&sSpriteTemplate_Volbeat, DISPLAY_WIDTH + 32, 80, 4);
    spriteId = CreateIntroFlygonSprite(-64, 60);
    gSprites[spriteId].callback = SpriteCB_Flygon;
    gTasks[taskId].tFlygonSpriteId = spriteId;

    // Fade in and start bike ride
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_WHITEALPHA);
    SetVBlankCallback(VBlankCB_Intro);
    gTasks[taskId].tBgAnimTaskId = CreateBicycleBgAnimationTask(1, 0x4000, 0x400, 0x10);
    SetIntroPart2BgCnt(1);
    gTasks[taskId].func = Task_Scene2_BikeRide;
}

static void Task_Scene2_BikeRide(u8 taskId)
{
    u16 offset;

    if (gIntroFrameCounter == TIMER_TORCHIC_EXIT)
    {
        // Stop the moving scenery/backgrounds, for when the camera fixes on Torchic
        gIntroCredits_MovingSceneryState = INTROCRED_SCENERY_FROZEN;
        DestroyTask(gTasks[taskId].tBgAnimTaskId);
    }

    if (gIntroFrameCounter > TIMER_END_SCENE_2)
    {
        // Fade out to next scene
        BeginNormalPaletteFade(PALETTES_ALL, 8, 0, 16, RGB_WHITEALPHA);
        gTasks[taskId].func = Task_Scene2_End;
    }

    // Check for updates to player/flygon sprites
    // These states are for SpriteCB_PlayerOnBicycle and SpriteCB_Flygon respectively
    if (gIntroFrameCounter == TIMER_PLAYER_DRIFT_BACK)
        gSprites[gTasks[taskId].tPlayerSpriteId].sState = 1;
    if (gIntroFrameCounter == TIMER_PLAYER_MOVE_FORWARD)
        gSprites[gTasks[taskId].tPlayerSpriteId].sState = 0;
    if (gIntroFrameCounter == TIMER_FLYGON_ENTER)
        gSprites[gTasks[taskId].tFlygonSpriteId].sState = 1;
    if (gIntroFrameCounter == TIMER_PLAYER_MOVE_BACKWARD)
        gSprites[gTasks[taskId].tPlayerSpriteId].sState = 2;
    if (gIntroFrameCounter == TIMER_PLAYER_HOLD_POSITION)
        gSprites[gTasks[taskId].tPlayerSpriteId].sState = 3;
    if (gIntroFrameCounter == TIMER_PLAYER_EXIT)
        gSprites[gTasks[taskId].tPlayerSpriteId].sState = 4;

    // Handle flygon's y movement
    offset = Sin(gTasks[taskId].tFlygonTimer >> 2 & 0x7F, 48);
    sFlygonYOffset = offset;
    if (gTasks[taskId].tFlygonTimer < 512)
        gTasks[taskId].tFlygonTimer++;

    // Alternate colors of the trees
    CycleSceneryPalette(0);
}

static void Task_Scene2_End(u8 taskId)
{
    if (gIntroFrameCounter > TIMER_START_SCENE_3)
    {
        DestroyTask(gTasks[taskId].data[0]);
        gTasks[taskId].func = Task_IntroLoadPart3Graphics;
    }
}

#define sStateDelay data[1]
#define sNextState  data[2]
#define sCosYIdx    data[3]
#define sSinXIdx    data[4]
#define sSinYIdx    data[5]
#define sFig8Loops  data[6]

enum {
    VOLBEAT_WAIT_ENTER,
    VOLBEAT_ENTER,
    VOLBEAT_ZIP_BACKWARD,
    VOLBEAT_ZIP_DOWN,
    VOLBEAT_ZIP_FORWARD,
    VOLBEAT_INIT_FIGURE_8,
    VOLBEAT_FIGURE_8,
    VOLBEAT_EXIT,
    VOLBEAT_WAIT_STATE
};

static void SpriteCB_Volbeat(struct Sprite *sprite)
{
    sprite->sCosYIdx += 4;
    switch (sprite->sState)
    {
    case VOLBEAT_WAIT_ENTER:
        if (++sprite->sStateDelay < 180)
            break;
        sprite->sState++;
        // fallthrough
    case VOLBEAT_ENTER:
        sprite->x -= 4;
        if (sprite->x == 60)
        {
            sprite->sState = VOLBEAT_WAIT_STATE;
            sprite->sStateDelay = 20;
            sprite->sNextState = VOLBEAT_ZIP_BACKWARD;
        }
        break;
    case VOLBEAT_ZIP_BACKWARD:
        sprite->x += 8;
        sprite->y -= 2;
        if (sprite->x == 124)
        {
            sprite->sState = VOLBEAT_WAIT_STATE;
            sprite->sStateDelay = 20;
            sprite->sNextState = VOLBEAT_ZIP_DOWN;
        }
        break;
    case VOLBEAT_ZIP_DOWN:
        sprite->y += 4;
        if (sprite->y == 80)
        {
            sprite->sState = VOLBEAT_WAIT_STATE;
            sprite->sStateDelay = 10;
            sprite->sNextState = VOLBEAT_ZIP_FORWARD;
        }
        break;
    case VOLBEAT_ZIP_FORWARD:
        sprite->x -= 8;
        sprite->y -= 2;
        if (sprite->x == 60)
        {
            sprite->sState = VOLBEAT_WAIT_STATE;
            sprite->sStateDelay = 10;
            sprite->sNextState = VOLBEAT_INIT_FIGURE_8;
        }
        break;
    case VOLBEAT_INIT_FIGURE_8:
        sprite->x += 60;
        sprite->sSinXIdx = 0xC0;
        sprite->sSinYIdx = 0x80;
        sprite->sFig8Loops = 3;
        sprite->sState++;
        // fallthrough
    case VOLBEAT_FIGURE_8:
        sprite->x2 = Sin((u8)sprite->sSinXIdx, 0x3C);
        sprite->y2 = Sin((u8)sprite->sSinYIdx, 0x14);
        sprite->sSinXIdx += 2;
        sprite->sSinYIdx += 4;
        if ((sprite->sSinXIdx & 0xFF) == 64)
        {
            sprite->hFlip = FALSE;
            if (--sprite->sFig8Loops == 0)
            {
                sprite->x += sprite->x2;
                sprite->x2 = 0;
                sprite->sState++;
            }
        }
        break;
    case VOLBEAT_EXIT:
        sprite->x -= 2;
        sprite->y2 = Sin((u8)sprite->sSinYIdx, 0x14);
        sprite->sSinYIdx += 4;
        if (sprite->x < -16)
            DestroySprite(sprite);
        break;
    case VOLBEAT_WAIT_STATE:
        // Wait for state progression, fly idly until then
        sprite->y2 = Cos((u8)sprite->sCosYIdx, 2);
        if (!--sprite->sStateDelay)
            sprite->sState = sprite->sNextState;
        break;
    }
}

#undef sStateDelay
#undef sNextState
#undef sCosYIdx
#undef sSinXIdx
#undef sSinYIdx
#undef sFig8Loops

#define sMoveTimer data[1]
#define sDelay     data[2]

static void SpriteCB_Torchic(struct Sprite *sprite)
{
    switch (sprite->sState)
    {
    case 0:
        if (gIntroFrameCounter == TIMER_TORCHIC_ENTER)
        {
            StartSpriteAnim(sprite, TORCHIC_ANIM_RUN);
            sprite->sState++;
        }
        break;
    case 1:
        if (gIntroFrameCounter == TIMER_PLAYER_HOLD_POSITION)
        {
            StartSpriteAnim(sprite, TORCHIC_ANIM_WALK);
            sprite->sState++;
        }
        else
        {
            sprite->sMoveTimer += 64;
            if (sprite->sMoveTimer & 0xFF00)
            {
                sprite->x--;
                sprite->sMoveTimer &= 0xFF;
            }
        }
        break;
    case 2:
        if (gIntroFrameCounter != TIMER_TORCHIC_SPEED_UP)
        {
            sprite->sMoveTimer += 32;
            if (sprite->sMoveTimer & 0xFF00)
            {
                sprite->x++;
                sprite->sMoveTimer &= 0xFF;
            }
        }
        else
        {
            StartSpriteAnim(sprite, TORCHIC_ANIM_RUN);
            sprite->sState++;
            sprite->sDelay = 80;
        }
        break;
    case 3:
        if (--sprite->sDelay)
        {
            sprite->sMoveTimer += 64;
            if (sprite->sMoveTimer & 0xFF00)
            {
                sprite->x--;
                sprite->sMoveTimer &= 0xFF;
            }
        }
        else
        {
            StartSpriteAnim(sprite, TORCHIC_ANIM_TRIP);
            sprite->sState++;
        }
        break;
    case 4:
        if (sprite->animEnded)
            sprite->x += 4;

        if (sprite->x > 336)
        {
            StartSpriteAnim(sprite, TORCHIC_ANIM_RUN);
            sprite->sState++;
        }
        break;
    case 5:
        if (gIntroFrameCounter >= TIMER_TORCHIC_EXIT)
            sprite->x -= 2;
        break;
    }
}

#undef sMoveTimer
#undef sDelay

#define sSinIdx data[1]
#define sCosIdx data[2]

static void SpriteCB_Manectric(struct Sprite *sprite)
{
    switch (sprite->sState)
    {
    case 0:
        if (gIntroFrameCounter == TIMER_MANECTRIC_ENTER)
            sprite->sState++;
        break;
    case 1:
        sprite->x -= 2;
        if (gIntroFrameCounter != TIMER_MANECTRIC_RUN_CIRCULAR)
            break;

        // Initialize circular pattern running
        sprite->y -= 12;
        sprite->sSinIdx = 0x80;
        sprite->sCosIdx = 0;
        sprite->sState++;
        // fallthrough
    case 2:
        if (sprite->x + sprite->x2 <= -32)
        {
            // Manectric is offscreen now, destroy it
            DestroySprite(sprite);
        }
        else
        {
            // Run in circular pattern
            if ((sprite->sSinIdx & 0xFF) < 64)
            {
                sprite->x2 = Sin((u8)sprite->sSinIdx, 16);
            }
            else
            {
                if ((sprite->sSinIdx & 0xFF) == 64)
                    sprite->x -= 48;
                sprite->x2 = Sin((u8)sprite->sSinIdx, 64);
            }
            sprite->sSinIdx++;
            sprite->y2 = Cos((u8)sprite->sCosIdx, 12);
            sprite->sCosIdx++;
        }
        break;
    }
}

#undef sSinIdx
#undef sCosIdx

#define tAlpha        data[0]
#define tZoomDiv      data[1]
#define tZoomDivSpeed data[2]

static void Task_IntroLoadPart3Graphics(u8 taskId)
{
    intro_reset_and_hide_bgs();
    LZ77UnCompVram(gIntro3Pokeball_Gfx, (void *)VRAM);
    LZ77UnCompVram(gIntro3Pokeball_Tilemap, (void *)(VRAM + 0x4000));
    LoadPalette(gIntro3PokeballPal, 0, 0x200);
    gTasks[taskId].data[0] = 0;
    gTasks[taskId].data[1] = 0;
    gTasks[taskId].data[2] = 0;
    gTasks[taskId].data[3] = 0;
    sub_813CE30(0x78, 0x50, 0, 0);
    ResetSpriteData();
    FreeAllSpritePalettes();
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_WHITEALPHA);
    REG_BG2CNT = BGCNT_PRIORITY(3) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(8) | BGCNT_256COLOR | BGCNT_AFF256x256;
    REG_DISPCNT = DISPCNT_MODE_1 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG2_ON | DISPCNT_OBJ_ON;
    gTasks[taskId].func = Task_IntroSpinAndZoomPokeball;
    gIntroFrameCounter = 0;
    m4aSongNumStart(0x1BA);
}

static void Task_IntroSpinAndZoomPokeball(u8 taskId)
{
    gTasks[taskId].data[0] += 0x400;
    if (gTasks[taskId].data[1] <= 0x6BF)
    {
        gTasks[taskId].data[1] += gTasks[taskId].data[2];
        gTasks[taskId].data[2]++;
    }
    else
    {
        gTasks[taskId].func = Task_IntroWaitToSetupPart3DoubleFight;
    }
    sub_813CE30(0x78, 0x50, 0x10000 / gTasks[taskId].data[1], gTasks[taskId].data[0]);
    if (gIntroFrameCounter == 44)
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_WHITEALPHA);
}

static void Task_IntroWaitToSetupPart3DoubleFight(u8 taskId)
{
    if (gIntroFrameCounter > 59)
        gTasks[taskId].func = Task_IntroLoadPart3Streaks;
}

static void Task_IntroLoadPart3Streaks(u8 taskId)
{
    u16 i;

    intro_reset_and_hide_bgs();
    for (i = 0; i < 32; i++)
    {
        ewram0arr[0][i] = 0;
        ewram0arr[1][i] = 17;
        ewram0arr[2][i] = 34;
    }
    DmaCopy16Defvars(3, ewram0arr, (void *)(VRAM + 0x0), 0x60);
    for (i = 0; i < 0x280; i++)
        ((u16 *)(VRAM + 0x3000))[i] = 0xF001;
    for (i = 0; i < 0x80; i++)
        ((u16 *)(VRAM + 0x3800))[i] = 0xF002;
    for (i = 0; i < 0x180; i++)
        ((u16 *)(VRAM + 0x3900))[i] = 0xF000;
    for (i = 0; i < 0x80; i++)
        ((u16 *)(VRAM + 0x3C00))[i] = 0xF002;
    gPlttBufferUnfaded[0xF0] = RGB_WHITE;
    gPlttBufferFaded[0xF0] = RGB_WHITE;
    sub_813D084(1);
    gPlttBufferUnfaded[0xF2] = RGB_BLACK;
    gPlttBufferFaded[0xF2] = RGB_BLACK;
    LZ77UnCompVram(gIntro3Streaks_Gfx, (void *)(VRAM + 0x4000));
    LZ77UnCompVram(gIntro3Streaks_Tilemap, (void *)(VRAM + 0x7000));
    LoadPalette(gIntro3Streaks_Pal, 0, 0x20);
    ResetSpriteData();
    FreeAllSpritePalettes();
    gReservedSpritePaletteCount = 8;
    LoadCompressedSpriteSheetUsingHeap(&gIntro3PokeballGfx_Table[0]);
    LoadCompressedSpriteSheetUsingHeap(&gIntro3MiscGfx_Table[0]);
    LoadCompressedSpritePaletteUsingHeap(&gInterfacePokeballPal_Table[0]);
    LoadSpritePalettes(gIntro3MiscPal_Table);
    gTasks[taskId].func = task_intro_14;
}

static void task_intro_14(u8 taskId)
{
    REG_WIN0H = 0xF0;
    REG_WIN0V = 0xA0;
    REG_WININ = 0x1C;
    REG_WINOUT = 0x1D;
    REG_BG3CNT = BGCNT_PRIORITY(3)
               | BGCNT_CHARBASE(0)
               | BGCNT_SCREENBASE(6)
               | BGCNT_16COLOR
               | BGCNT_TXT256x256;
    REG_BG0CNT = BGCNT_PRIORITY(0)
               | BGCNT_CHARBASE(0)
               | BGCNT_SCREENBASE(7)
               | BGCNT_16COLOR
               | BGCNT_TXT256x256;
    REG_DISPCNT = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON | DISPCNT_WIN0_ON;
    gTasks[taskId].data[15] = CreateTask(task_intro_20, 0);
    gTasks[gTasks[taskId].data[15]].data[0] = 0;
    gTasks[taskId].data[0] = 0;
    gTasks[taskId].func = task_intro_15;
}

static void task_intro_15(u8 taskId)
{
    u16 foo = gTasks[taskId].data[0];

    if (gTasks[taskId].data[0] != 32)
    {
        u32 bar; //needed to match for some reason

        gTasks[taskId].data[0] += 4;
        REG_WIN0V = (gTasks[taskId].data[0] * 256) - (bar = foo - 0x9C);
    }
    else
    {
        REG_WIN0V = 0x2080;
        gTasks[taskId].func = task_intro_16;
    }
}

static void task_intro_16(u8 taskId)
{
    gTasks[taskId].func = task_intro_17;
}

static void task_intro_17(u8 taskId)
{
    sFlygonYOffset = 0;
    gTasks[taskId].func = Task_IntroPokemonBattle;
}

static void Task_IntroPokemonBattle(u8 taskId)
{
    u8 spriteId;

    if (gIntroFrameCounter == 80)
    {
        spriteId = sub_813CE88(SPECIES_SHARPEDO, 0xF0, 0xA0, 5, 1, 1);
        gSprites[spriteId].callback = sub_813DB9C;
        gSprites[spriteId].data[1] = 1;
        gSprites[spriteId].data[2] = 0;
    }
    if (gIntroFrameCounter == 152)
    {
        spriteId = sub_813CE88(SPECIES_DUSKULL, 0, 0xA0, 4, 1, 2);
        gSprites[spriteId].callback = sub_813DB9C;
        gSprites[spriteId].data[1] = 2;
        gSprites[spriteId].data[2] = 1;
    }
    if (gIntroFrameCounter == 219)
    {
        sub_813D084(0);
        spriteId = sub_813CFA8(sIntroCharacterGender, 0x110, 0x60, 6);
        gSprites[spriteId].callback = sub_813DE70;
        gTasks[taskId].data[1] = spriteId;
    }
    if (gIntroFrameCounter == 304)
    {
        gTasks[gTasks[taskId].data[15]].data[0] = 4;
        gSprites[gTasks[taskId].data[1]].data[0] = 2;
    }
    if (gIntroFrameCounter == 384)
    {
        gTasks[gTasks[taskId].data[15]].data[0] = 0;
        gSprites[gTasks[taskId].data[1]].data[0] = 4;
    }
    if (gIntroFrameCounter == 400)
    {
        BeginNormalPaletteFade(0xFF0000, 0, 16, 0, RGB(31, 23, 31));
    }
    if (gIntroFrameCounter == 432)
    {
        gSprites[gTasks[taskId].data[1]].data[0] = 5;
    }
    if (gIntroFrameCounter == 462)
    {
        gSprites[gTasks[taskId].data[1]].data[0] = 6;
        gTasks[gTasks[taskId].data[15]].data[0] = 2;
    }
    if (gIntroFrameCounter == 463)
    {
        sub_813D084(1);
        spriteId = sub_813CE88(SPECIES_SHARPEDO, 0xD0, 8, 5, 1, 1);
        gSprites[spriteId].callback = sub_813E10C;
        gTasks[taskId].data[2] = spriteId;
        sub_813E7C0(spriteId);
    }
    if (gIntroFrameCounter == 539)
    {
        spriteId = sub_813CE88(SPECIES_DUSKULL, 0xF8, 0x10, 4, 1, 2);
        gSprites[spriteId].callback = sub_813E10C;
        gTasks[taskId].data[3] = spriteId;
        sub_813E930(spriteId);
    }
    if (gIntroFrameCounter == 623)
    {
        gSprites[gTasks[taskId].data[2]].data[0] = 2;
        gSprites[gTasks[taskId].data[3]].data[0] = 2;
        gTasks[gTasks[taskId].data[15]].data[0] = 3;
    }
    if (gIntroFrameCounter == 624)
    {
        sub_813D084(0);
        spriteId = sub_813CE88(SPECIES_PIPLUP, 0x20, 0x98, 0, 0, 3);
        gSprites[spriteId].callback = sub_813E210;
        gTasks[taskId].data[4] = spriteId;
        InitIntroMudkipAttackAnim(spriteId);
    }
    if (gIntroFrameCounter == 700)
    {
        spriteId = sub_813CE88(SPECIES_TORCHIC, -8, 0x90, 1, 0, 4);
        gSprites[spriteId].callback = sub_813E210;
        gTasks[taskId].data[5] = spriteId;
        InitIntroTorchicAttackAnim(spriteId);
    }
    if (gIntroFrameCounter == 776)
    {
        sFlygonYOffset = 1;
        gSprites[gTasks[taskId].data[4]].data[0] = 2;
        gSprites[gTasks[taskId].data[5]].data[0] = 2;
        gTasks[gTasks[taskId].data[15]].data[0] = 0;
    }
    if (gIntroFrameCounter == 781)
    {
        sub_813D084(2);
        gSprites[gTasks[taskId].data[2]].data[0] = 3;
        gSprites[gTasks[taskId].data[3]].data[0] = 3;
        gSprites[gTasks[taskId].data[4]].data[0] = 3;
        gSprites[gTasks[taskId].data[5]].data[0] = 3;
        spriteId = CreateSprite(&gSpriteTemplate_840B1F4, 0x78, 0x50, 15);
        gSprites[spriteId].invisible = TRUE;
    }
    if (gIntroFrameCounter == 800)
        PlaySE(SE_INTRO_BLAST);
    if (gIntroFrameCounter == 850)
        BeginNormalPaletteFade(0xFFFFFFFF, 4, 0, 16, RGB_WHITEALPHA);
    if (gIntroFrameCounter == 946)
        gTasks[taskId].func = task_intro_19;
}

static void task_intro_19(u8 taskId)
{
    DestroyTask(taskId);
    SetMainCallback2(MainCB2_EndIntro);
}

static void task_intro_20(u8 taskId)
{
#define BG2_FLAGS (BGCNT_PRIORITY(3) | BGCNT_CHARBASE(1) | BGCNT_SCREENBASE(14) | BGCNT_16COLOR | BGCNT_TXT256x256)
#define DISPCNT_FLAGS (DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON | DISPCNT_BG2_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON | DISPCNT_WIN0_ON)

    gTasks[taskId].data[15]++;
    switch (gTasks[taskId].data[0])
    {
    case 0:
        REG_DISPCNT = DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_BG0_ON | DISPCNT_BG3_ON | DISPCNT_OBJ_ON | DISPCNT_WIN0_ON;
        REG_BG2CNT = 0;
        gTasks[taskId].data[0] = 0xFF;
        break;
    case 2:
        BeginNormalPaletteFade(0x1, 0, 16, 0, RGB_WHITEALPHA);
        REG_BG2CNT = BG2_FLAGS;
        REG_DISPCNT = DISPCNT_FLAGS;
        gTasks[taskId].data[1] = 0;
        gTasks[taskId].data[2] = 0;
        gTasks[taskId].data[0] = 20;
        //fall through
    case 20:
        REG_BG2VOFS = gTasks[taskId].data[1];
        REG_BG2HOFS = gTasks[taskId].data[2];
        gTasks[taskId].data[1] += 6;
        gTasks[taskId].data[2] -= 8;
        break;
    case 3:
        BeginNormalPaletteFade(0x1, 0, 16, 0, RGB_WHITEALPHA);
        REG_BG2CNT = BG2_FLAGS;
        REG_DISPCNT = DISPCNT_FLAGS;
        gTasks[taskId].data[1] = 0;
        gTasks[taskId].data[2] = 0;
        gTasks[taskId].data[0] = 0x1E;
        //fall through
    case 0x1E:
        REG_BG2VOFS = gTasks[taskId].data[1];
        REG_BG2HOFS = gTasks[taskId].data[2];
        gTasks[taskId].data[1] -= 6;
        gTasks[taskId].data[2] += 8;
        break;
    case 4:
        BeginNormalPaletteFade(0x1, 5, 0, 16, RGB(23, 31, 13));
        REG_BG2CNT = BG2_FLAGS;
        REG_DISPCNT = DISPCNT_FLAGS;
        gTasks[taskId].data[1] = 0;
        gTasks[taskId].data[2] = 0;
        gTasks[taskId].data[3] = 8;
        gTasks[taskId].data[0] = 0x28;
        //fall through
    case 0x28:
        REG_BG2VOFS = gTasks[taskId].data[1];
        REG_BG2HOFS = gTasks[taskId].data[2];
        gTasks[taskId].data[1] -= gTasks[taskId].data[3];
        gTasks[taskId].data[2] += gTasks[taskId].data[3];
        if (!(gTasks[taskId].data[15] & 7) && gTasks[taskId].data[3] != 0)
            gTasks[taskId].data[3]--;
        break;
    case 0xFF:  //needed to prevent jump table optimization
        break;
    }

#undef BG2_FLAGS
#undef DISPCNT_FLAGS
}

static void intro_reset_and_hide_bgs(void)
{
    REG_DISPCNT = 0;
    REG_BG3HOFS = 0;
    REG_BG3VOFS = 0;
    REG_BG2HOFS = 0;
    REG_BG2VOFS = 0;
    REG_BG1HOFS = 0;
    REG_BG1VOFS = 0;
    REG_BG0HOFS = 0;
    REG_BG0VOFS = 0;
    REG_BLDCNT = 0;
    REG_BLDALPHA = 0;
    REG_BLDY = 0;
}

void sub_813CE30(u16 scrX, u16 scrY, u16 zoom, u16 alpha)
{
    struct BgAffineSrcData src;
    struct BgAffineDstData dest;

    src.texX = 0x8000;
    src.texY = 0x8000;
    src.scrX = scrX;
    src.scrY = scrY;
    src.sx = zoom;
    src.sy = zoom;
    src.alpha = alpha;
    BgAffineSet(&src, &dest, 1);
    REG_BG2PA = dest.pa;
    REG_BG2PB = dest.pb;
    REG_BG2PC = dest.pc;
    REG_BG2PD = dest.pd;
    REG_BG2X = dest.dx;
    REG_BG2Y = dest.dy;
}
#define eHofGfxPtr                      (gHeap + 0x8000)
static void SpriteCB_HallOfFame_Dummy(struct Sprite* sprite)
{

}
const union AnimCmd sAnim_GeneralFrame02[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END,
};
static const union AnimCmd *const sAnims_TwoFramePlaceHolder[] =
{
    sAnim_GeneralFrame02,
    (const union AnimCmd[]) {
        ANIMCMD_FRAME(0, 30),
        ANIMCMD_FRAME(1, 30),
        ANIMCMD_FRAME(0, 1),
        ANIMCMD_END,
    },
};

const union AnimCmd *const *const gUnknown_081EC2A4[] =
{
    [0]        = sAnims_TwoFramePlaceHolder,
    [1]   = sAnims_TwoFramePlaceHolder,
};

const struct CompressedSpriteSheet gMonFrontPicTable[] =
{
    {gIntroFlygonSilhouette_Gfx, 0x400, TAG_FLYGON_SILHOUETTE},
    {},
};


const union AnimCmd *const gSpriteAnimTable_81E7C64[] =
{
    sAnim_GeneralFrame02,
    (const union AnimCmd[]) {
        ANIMCMD_FRAME(0, 30),
        ANIMCMD_FRAME(1, 30),
        ANIMCMD_FRAME(0, 1),
        ANIMCMD_END,
    },
};

static const struct SpriteFrameImage sSpriteImageTable_840B5BC[] =
{
    {gBattleAnimSpriteGfx_BlueFlames, 0x0400},
    {gBattleAnimSpriteGfx_BlueFlames, 0x0400},
    {gBattleAnimSpriteGfx_BlueFlames, 0x0400},
    {gBattleAnimSpriteGfx_BlueFlames, 0x0400},
    // {eHofGfxPtr + 0x0000, 0x800},
    // {eHofGfxPtr + 0x800, 0x800},
    // {eHofGfxPtr + 0x1000, 0x800},
    // {eHofGfxPtr + 0x1800, 0x800}
};


static const struct OamData sOamData_840B598 =
{
    .y = 0,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 3,
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};
static const struct SpriteTemplate sUnknown_0840B6B8 =
{
    .tileTag = -1,
    .paletteTag = -1,
    .oam = &sOamData_840B598,
    .anims = NULL,
    .images = sSpriteImageTable_840B5BC,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_HallOfFame_Dummy
};

void* const gUnknown_0840B5A0[] =
{
    eHofGfxPtr + 0x0000,
    eHofGfxPtr + 0x2000,
    eHofGfxPtr + 0x4000,
    eHofGfxPtr + 0x6000,
    eHofGfxPtr + 0x8000,
    eHofGfxPtr + 0xC000,
    eHofGfxPtr + 0x10000
};

static const struct SpriteFrameImage sSpriteImageTable_sharpedo[] =
{
    {eHofGfxPtr + 0x2000, 0x800},
    {eHofGfxPtr + 0x2800, 0x800},
    {eHofGfxPtr + 0x3000, 0x800},
    {eHofGfxPtr + 0x3800, 0x800}
};

static const struct SpriteFrameImage sSpriteImageTable_duskull[] =
{
    {eHofGfxPtr + 0x4000, 0x800},
    {eHofGfxPtr + 0x4800, 0x800},
    {eHofGfxPtr + 0x5000, 0x800},
    {eHofGfxPtr + 0x5800, 0x800}
};

static const struct SpriteFrameImage sSpriteImageTable_torchic[] =
{
    {eHofGfxPtr + 0x6000, 0x800},
    {eHofGfxPtr + 0x6800, 0x800},
    {eHofGfxPtr + 0x7000, 0x800},
    {eHofGfxPtr + 0x7800, 0x800}
};

static const struct SpriteFrameImage sSpriteImageTable_piplup[] =
{
    {eHofGfxPtr + 0x8000, 0x800},
    {eHofGfxPtr + 0x8800, 0x800},
    {eHofGfxPtr + 0x9000, 0x800},
    {eHofGfxPtr + 0x9800, 0x800}
};

static const struct SpriteFrameImage sSpriteImageTable_840B65C[] =
{
    {eHofGfxPtr + 0xC000, 0x800},
    {eHofGfxPtr + 0xC800, 0x800},
    {eHofGfxPtr + 0xD000, 0x800},
    {eHofGfxPtr + 0xD800, 0x800}
};

#include "data.h"
static const struct SpriteFrameImage sSpriteImageTable_player[] =
{
    {gTrainerBackPic_Brendan2, 0x800},
    {gTrainerBackPic_Brendan2, 0x800},
    {gTrainerBackPic_Brendan2, 0x800},
    {gTrainerBackPic_Brendan2, 0x800}
};

static const struct SpriteFrameImage* const sUnknown_0840B69C[7] =
{
    sSpriteImageTable_840B5BC,
    sSpriteImageTable_sharpedo,
    sSpriteImageTable_duskull,
    sSpriteImageTable_torchic,
    sSpriteImageTable_piplup,
    sSpriteImageTable_840B65C,
    sSpriteImageTable_player
};
extern const struct CompressedSpriteSheet gMonBackPicTable[];

static void sub_8143648(u16 paletteTag, u8 animID)
{
    gCreatingSpriteTemplate = sUnknown_0840B6B8;
    gCreatingSpriteTemplate.paletteTag = paletteTag;
    gCreatingSpriteTemplate.images = sUnknown_0840B69C[animID];
    gCreatingSpriteTemplate.anims = gSpriteAnimTable_81E7C64;
}

#include "battle.h"
EWRAM_DATA struct SpriteTemplate gCreatingSpriteTemplate = {0};



static u16 sub_813CE88(u16 species, s16 x, s16 y, u16 d, u8 front, u8 slot)
{
    const u32 *lzPaletteData;
    u8 spriteId;

    if (front)
        LoadSpecialPokePic(gUnknown_0840B5A0[slot], species, 0, TRUE);
    else
        LoadSpecialPokePic(gUnknown_0840B5A0[slot], species, 0, FALSE);
    lzPaletteData = GetMonSpritePalFromSpeciesAndPersonality(species, 0, 0xFFFF);
    LoadCompressedPalette(lzPaletteData, OBJ_PLTT_OFFSET + (slot * PLTT_SIZE_4BPP), PLTT_SIZE_4BPP);
    sub_8143648(slot, slot);
    spriteId = CreateSprite(&gCreatingSpriteTemplate, x, y, (d + 1) * 4);
    gSprites[spriteId].oam.paletteNum = slot;
    gSprites[spriteId].oam.priority = 1;
    return spriteId;
}
static const union AnimCmd gUnknown_0840B048[] =
{
    ANIMCMD_FRAME(3, 0),
    ANIMCMD_END,
};
static const union AnimCmd gUnknown_0840B050[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_END,
};
static const union AnimCmd gUnknown_0840B058[] =
{
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_END,
};
static const union AnimCmd *const gUnknown_0840B064[] =
{
    gUnknown_0840B048,
    gUnknown_0840B050,
    gUnknown_0840B058,
};
void sub_8143680(u16 paletteTag, u8 animID)
{
    gCreatingSpriteTemplate = sUnknown_0840B6B8;
    gCreatingSpriteTemplate.paletteTag = paletteTag;
    gCreatingSpriteTemplate.images = sUnknown_0840B69C[animID];
    gCreatingSpriteTemplate.anims = gUnknown_081EC2A4[0];
}

void DecompressPicFromTable_2(const struct CompressedSpriteSheet *src, u8 coords, u8 y_offset, void *d, void *dest, s32 species)
{
    if (species > SPECIES_EGG)
        LZ77UnCompWram(gMonFrontPicTable[0].data, dest);
    else
        LZ77UnCompWram(src->data, dest);
}

const struct MonCoords gTrainerBackPicCoords[] = {
    {8, 4},
    {8, 4},
    {8, 4},
};

extern const u32 gTrainerPalette_Brendan[];
extern const u32 gTrainerPalette_May[];
extern const u32 gTrainerPalette_Wally[];

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] = {
    {gTrainerPalette_Brendan, 0},
    {gTrainerPalette_May, 1},
    {gTrainerPalette_Wally, 2}
};

static u8 sub_813CFA8(u16 a, u16 b, u16 c, u16 d)
{
    u8 spriteId;

    DecompressPicFromTable_2(&gTrainerBackPicTable[a], gTrainerBackPicCoords[a].size, gTrainerBackPicCoords[a].y_offset, (void *)EWRAM_START, gUnknown_0840B5A0[d], a);
    LoadCompressedPalette(gTrainerBackPicPaletteTable[a].data, 0x100 + d * 0x10, 0x20);
    sub_8143680(d, d);
    gCreatingSpriteTemplate.anims = gUnknown_0840B064;
    spriteId = CreateSprite(&gCreatingSpriteTemplate, b, c, 1);
    gSprites[spriteId].oam.paletteNum = d;
    gSprites[spriteId].oam.priority = 1;
    return spriteId;
}

static void sub_813D084(u8 a)
{
    u16 color;

    switch (a)
    {
    default:
    case 0:
        color = RGB(22, 31, 15);
        break;
    case 1:
        color = RGB(31, 14, 12);
        break;
    case 2:
        color = RGB(12, 12, 20);
        break;
    }
    gPlttBufferUnfaded[241] = color;
    gPlttBufferFaded[241] = color;
}

static void sub_813D0CC(struct Sprite *sprite)
{
    u8 r0;

    if (sprite->data[2] >= 192)
    {
        if (sprite->data[3] != 0)
        {
            sprite->data[3]--;
        }
        else
        {
            sprite->invisible = FALSE;
            SetOamMatrix(sprite->data[1], sprite->data[2], 0, 0, sprite->data[2]);
            sprite->data[2] = (sprite->data[2] * 95) / 100;
            r0 = (sprite->data[2] - 192) / 128 + 9;
            if (r0 > 15)
                r0 = 15;
            sprite->oam.paletteNum = r0;
        }
    }
    else
    {
        DestroySprite(sprite);
    }
}

static void sub_813D158(struct Sprite *sprite)
{
    if (gSprites[sprite->data[7]].data[7] != 0)
    {
        sprite->invisible = TRUE;
        sprite->x += sprite->x2;
        sprite->y += sprite->y2;
        StartSpriteAnim(sprite, 3);
        sprite->data[2] = 1024;
        sprite->data[3] = 8 * (sprite->data[1] & 3);
        sprite->callback = sub_813D0CC;
        sprite->oam.shape = 1;
        sprite->oam.size = 3;
        CalcCenterToCornerVec(sprite, 1, 3, 2);
    }
    else
    {
        sprite->x2 = gSprites[sprite->data[7]].x2;
        sprite->y2 = gSprites[sprite->data[7]].y2;
        sprite->x = gSprites[sprite->data[7]].x;
        sprite->y = gSprites[sprite->data[7]].y;
    }
}



static void sub_813D220(struct Sprite *sprite)
{
    if (sprite->x <= 116)
    {
        sprite->y += sprite->y2;
        sprite->y2 = 0;
        sprite->x += 4;
        sprite->x2 = -4;
        sprite->data[4] = 128;
        sprite->callback = sub_813D368;
    }
    else
    {
        u16 data2;
        u16 data3;
        u16 data4;
        s16 sin1;
        s16 sin2;
        s16 sin3;
        s16 sin4;
        s16 var1;
        s16 var2;
        s16 var3;
        s16 var4;
        s16 temp;

        data4 = sprite->data[4];
        sin1 = gSineTable[(u8)data4];
        sin2 = gSineTable[(u8)(data4 + 64)];
        sprite->data[4] += 2;
        sprite->y2 = sin1 / 32;
        sprite->x--;
        if (sprite->x & 1)
            sprite->y++;
        temp = -sin2 / 16;
        data2 = sprite->data[2];
        data3 = sprite->data[3];
        sin3 = gSineTable[(u8)(temp - 16)];
        sin4 = gSineTable[(u8)(temp + 48)];
        var1 = sin4 * data2 / 256;
        var2 = -sin3 * data3 / 256;
        var3 = sin3 * data2 / 256;
        var4 = sin4 * data3 / 256;
        SetOamMatrix(sprite->data[1], data2, 0, 0, data3);
        SetOamMatrix(sprite->data[1] + 1, var1, var3, var2, var4);
        SetOamMatrix(sprite->data[1] + 2, var1, var3, var2 * 2, var4 * 2);
    }
}

static void sub_813D368(struct Sprite *sprite)
{
    SetOamMatrix(sprite->data[1], sprite->data[6] + 64, 0, 0, sprite->data[6] + 64);
    SetOamMatrix(sprite->data[1] + 1, sprite->data[6] + 64, 0, 0, sprite->data[6] + 64);
    SetOamMatrix(sprite->data[1] + 2, sprite->data[6] + 64, 0, 0, sprite->data[6] + 64);
    if (sprite->data[4] != 64)
    {
        u16 data4;

        sprite->data[4] -= 8;
        data4 = sprite->data[4];
        sprite->x2 = gSineTable[(u8)(data4 + 64)] / 64;
        sprite->y2 = gSineTable[(u8)data4] / 64;
    }
    else
    {
        sprite->data[4] = 0;
        sprite->callback = sub_813D414;
    }
}

static void sub_813D414(struct Sprite *sprite)
{
    if (sprite->data[0] != 2)
    {
        s16 r2;

        sprite->data[4] += 8;
        r2 = gSineTable[(u8)sprite->data[4]] / 16 + 64;
        sprite->x2 = gSineTable[(u8)(r2 + 64)] / 64;
        sprite->y2 = gSineTable[(u8)r2] / 64;
    }
    else
    {
        sprite->callback = SpriteCB_WaterDropFall;
    }
}

static void SpriteCB_WaterDropFall(struct Sprite *sprite)
{
    if (sprite->y < sprite->data[5])
    {
        sprite->y += 4;
    }
    else
    {
        sprite->data[7] = 1;
        sprite->invisible = TRUE;
        sprite->x += sprite->x2;
        sprite->y += sprite->y2;
        StartSpriteAnim(sprite, 3);
        sprite->data[2] = 1024;
        sprite->data[3] = 8 * (sprite->data[1] & 3);
        sprite->callback = sub_813D0CC;
        sprite->oam.shape = 1;
        sprite->oam.size = 3;
        CalcCenterToCornerVec(sprite, 1, 3, 2);
    }
}

//Duplicate function
static void SpriteCB_WaterDropFall_2(struct Sprite *sprite)
{
    if (sprite->y < sprite->data[5])
    {
        sprite->y += 4;
    }
    else
    {
        sprite->data[7] = 1;
        sprite->invisible = TRUE;
        sprite->x += sprite->x2;
        sprite->y += sprite->y2;
        StartSpriteAnim(sprite, 3);
        sprite->data[2] = 1024;
        sprite->data[3] = 8 * (sprite->data[1] & 3);
        sprite->callback = sub_813D0CC;
        sprite->oam.shape = 1;
        sprite->oam.size = 3;
        CalcCenterToCornerVec(sprite, 1, 3, 2);
    }
}

static u8 CreateWaterDrop(s16 x, s16 y, u16 c, u16 d, u16 e, u8 fallImmediately)
{
    u8 spriteId;
    u8 oldSpriteId;

    spriteId = CreateSprite(&gSpriteTemplate_840AE20, x, y, 0);
    gSprites[spriteId].data[0] = 0;
    gSprites[spriteId].data[7] = 0;
    gSprites[spriteId].data[1] = d;
    gSprites[spriteId].data[2] = c;
    gSprites[spriteId].data[3] = c;
    gSprites[spriteId].data[5] = e;
    gSprites[spriteId].data[6] = c;
    gSprites[spriteId].oam.affineMode = 3;
    gSprites[spriteId].oam.matrixNum = d;
    CalcCenterToCornerVec(&gSprites[spriteId], 0, 2, 2);
    StartSpriteAnim(&gSprites[spriteId], 2);
    if (!fallImmediately)
        gSprites[spriteId].callback = sub_813D208;
    else
        gSprites[spriteId].callback = SpriteCB_WaterDropFall_2;
    oldSpriteId = spriteId;

    spriteId = CreateSprite(&gSpriteTemplate_840AE20, x, y, 0);
    gSprites[spriteId].data[7] = oldSpriteId;
    gSprites[spriteId].data[1] = d + 1;
    gSprites[spriteId].oam.affineMode = 3;
    gSprites[spriteId].oam.matrixNum = d + 1;
    CalcCenterToCornerVec(&gSprites[spriteId], 0, 2, 2);
    gSprites[spriteId].callback = sub_813D158;

    spriteId = CreateSprite(&gSpriteTemplate_840AE20, x, y, 0);
    gSprites[spriteId].data[7] = oldSpriteId;
    gSprites[spriteId].data[1] = d + 2;
    StartSpriteAnim(&gSprites[spriteId], 1);
    gSprites[spriteId].oam.affineMode = 3;
    gSprites[spriteId].oam.matrixNum = d + 2;
    CalcCenterToCornerVec(&gSprites[spriteId], 0, 2, 2);
    gSprites[spriteId].callback = sub_813D158;

    SetOamMatrix(d, c + 32, 0, 0, c + 32);
    SetOamMatrix(d + 1, c + 32, 0, 0, c + 32);
    SetOamMatrix(d + 2, c + 32, 0, 0, 2 * (c + 32));

    return oldSpriteId;
}

static void sub_813DB9C(struct Sprite *sprite)
{
    switch (sprite->data[0])
    {
    case 0:
    default:
        if (sprite->data[2] != 0)
            sprite->hFlip = TRUE;
        else
            sprite->hFlip = FALSE;
        sprite->data[0] = 1;
        //fall through
    case 1:
        if (sprite->y > 96)
        {
            sprite->y -= 4;
            if (sprite->data[2] != 0)
                sprite->x += 2;
            else
                sprite->x -= 2;
        }
        else
        {
            sprite->data[0]++;
            sprite->data[3] = 8;
        }
        break;
    case 2:
        if (sprite->data[3] != 0)
        {
            sprite->data[3]--;
        }
        else
        {
            sprite->data[0]++;
            sprite->data[3] = 0;  //redundant?
        }
        break;
    case 3:
        sprite->oam.affineMode = 3;
        sprite->oam.matrixNum = sprite->data[1];
        CalcCenterToCornerVec(sprite, 0, 3, 3);
        if (sprite->data[2] != 0)
            SetOamMatrix(sprite->data[1], -256, 0, 0, 256);
        else
            SetOamMatrix(sprite->data[1], 256, 0, 0, 256);
        sprite->data[0]++;
        sprite->data[4] = 0;
        break;
    case 4:
        sprite->data[4]++;
        if (sprite->y + sprite->y2 > -32
         && sprite->x + sprite->x2 > -64)
        {
            u16 r2;

            sprite->y2 = -(sprite->data[4] * sprite->data[4]) / 8;
            if (sprite->data[2] != 0)
                sprite->x2 += sprite->data[4];
            else
                sprite->x2 -= sprite->data[4];
            if (sprite->data[3] < 128)
                sprite->data[3] += 8;
            r2 = 256 - sprite->data[3];
            if (sprite->data[2] != 0)
                SetOamMatrix(sprite->data[1], -r2, 0, 0, r2);
            else
                SetOamMatrix(sprite->data[1], r2, 0, 0, r2);
        }
        else
        {
            DestroySprite(sprite);
        }
    }
}

static void sub_813DD58(struct Sprite *sprite)
{
    switch (sprite->data[0])
    {
    case 0:
    default:
        sprite->invisible = FALSE;
        sprite->oam.affineMode = 1;
        sprite->oam.matrixNum = sprite->data[1];
        sprite->data[3] = 2048;
        sprite->data[0] = 1;
        //fall through
    case 1:
        if (sprite->data[3] > 256)
        {
            sprite->data[3] -= 128;
            if (sprite->data[2] != 0)
                SetOamMatrix(sprite->data[1], -sprite->data[3], 0, 0, sprite->data[3]);
            else
                SetOamMatrix(sprite->data[1], sprite->data[3], 0, 0, sprite->data[3]);
        }
        else
        {
            if (sprite->data[2] != 0)
                SetOamMatrix(sprite->data[1], -256, 0, 0, 256);
            else
                SetOamMatrix(sprite->data[1], 256, 0, 0, 256);
            sprite->data[0]++;
        }
        break;
    case 2:
        break;
    case 3:
        sprite->data[4]++;
        sprite->y2 = sprite->data[4] * sprite->data[4] / 32;
        if (sprite->data[2] != 0)
            sprite->x2 = sprite->data[4] / 4;
        else
            sprite->x2 = -(sprite->data[4] / 4);
        break;
    }
}

static void sub_813DE70(struct Sprite *sprite)
{
    switch (sprite->data[0])
    {
    case 0:
    default:
        if (sprite->x > 40)
        {
            sprite->x -= 4;
        }
        else
        {
            StartSpriteAnim(sprite, 1);
            sprite->data[6] = CreateSprite(&gSpriteTemplate_840B084, 16, 104, 100);
            sprite->data[7] = CreateSprite(&gSpriteTemplate_840B084, 12, 106, 101);
            sprite->data[0] = 1;
        }
        break;
    case 1:
        break;
    case 2:
        StartSpriteAnim(sprite, 2);
        gSprites[sprite->data[6]].data[0] = 1;
        gSprites[sprite->data[7]].data[0] = 2;
        sprite->data[0]++;
        break;
    case 3:
        if (sprite->y > 160)
        {
            sprite->invisible = TRUE;
            sprite->data[0] = 1;
        }
        else
        {
            sprite->y += 2;
            sprite->x--;
        }
        break;
    case 4:
    {
        s16 r4, r5;

        r5 = gSprites[sprite->data[6]].x + gSprites[sprite->data[6]].x2;
        r4 = gSprites[sprite->data[6]].y + gSprites[sprite->data[6]].y2;
        DestroySprite(&gSprites[sprite->data[6]]);
        sprite->data[6] = sub_813CE88(SPECIES_TORCHIC, r5, r4, 2, 1, 3);
        gSprites[sprite->data[6]].callback = sub_813DD58;
        gSprites[sprite->data[6]].invisible = TRUE;
        gSprites[sprite->data[6]].data[1] = 1;
        gSprites[sprite->data[6]].data[2] = 1;
        sub_813E580(r5, r4);

        r5 = gSprites[sprite->data[7]].x + gSprites[sprite->data[7]].x2;
        r4 = gSprites[sprite->data[7]].y + gSprites[sprite->data[7]].y2;
        DestroySprite(&gSprites[sprite->data[7]]);
        sprite->data[7] = sub_813CE88(SPECIES_PIPLUP, r5, r4, 3, 1, 4);
        gSprites[sprite->data[7]].callback = sub_813DD58;
        gSprites[sprite->data[7]].invisible = TRUE;
        gSprites[sprite->data[7]].data[1] = 2;
        gSprites[sprite->data[7]].data[2] = 0;
        sub_813E580(r5, r4);

        BeginNormalPaletteFade(0xFF0000, 0, 16, 16, RGB(31, 23, 31));
        sprite->data[0] = 1;
        break;
    }
    case 5:
        gSprites[sprite->data[6]].data[0] = 3;
        gSprites[sprite->data[7]].data[0] = 3;
        break;
    case 6:
        DestroySprite(&gSprites[sprite->data[6]]);
        DestroySprite(&gSprites[sprite->data[7]]);
        DestroySprite(sprite);
        break;
    }
}

static void sub_813E10C(struct Sprite *sprite)
{
    switch (sprite->data[0])
    {
    case 0:
    default:
        if (sprite->x2 > -56)
        {
            sprite->x2 -= 8;
            sprite->y2 += 6;
        }
        else
        {
            sprite->data[6] = sprite->x;
            sprite->data[7] = sprite->y;
            sprite->x += sprite->x2;
            sprite->y += sprite->y2;
            sprite->x2 = 0;
            sprite->y2 = 0;
            sprite->data[0] = 1;
            sprite->data[1] = 0;
        }
        break;
    case 1:
        if (!(sprite->data[1] & 1))
        {
            if (sprite->data[1] & 2)
            {
                sprite->x2 = -1;
                sprite->y2 = 1;
            }
            else
            {
                sprite->x2 = 0;
                sprite->y2 = 0;
            }
        }
        sprite->data[1]++;
        break;
    case 2:
        sprite->invisible = TRUE;
        sprite->x = sprite->data[6];
        sprite->y = sprite->data[7];
        sprite->x2 = 0;
        sprite->y2 = 0;
        break;
    case 3:
        sprite->invisible = FALSE;
        sprite->data[1]++;
        //fall through
    case 4:
        if (sprite->x2 > -56)
        {
            sprite->x2 -= 4;
            sprite->y2 += 3;
        }
        else
        {
            sprite->x += sprite->x2;
            sprite->y += sprite->y2;
            sprite->x2 = 0;
            sprite->y2 = 0;
            sprite->data[0] = 1;
        }
        break;
    }
}

static void sub_813E210(struct Sprite *sprite)
{
    switch (sprite->data[0])
    {
    case 0:
    default:
        if (sprite->x2 < 56)
        {
            sprite->x2 += 8;
            sprite->y2 -= 6;
        }
        else
        {
            sprite->data[6] = sprite->x;
            sprite->data[7] = sprite->y;
            sprite->x += sprite->x2;
            sprite->y += sprite->y2;
            sprite->x2 = 0;
            sprite->y2 = 0;
            sprite->data[0] = 1;
            sprite->data[1] = 0;
        }
        break;
    case 1:
        if (!(sprite->data[1] & 1))
        {
            if (sprite->data[1] & 2)
            {
                sprite->x2 = 1;
                sprite->y2 = -1;
            }
            else
            {
                sprite->x2 = 0;
                sprite->y2 = 0;
            }
        }
        sprite->data[1]++;
        break;
    case 2:
        sprite->invisible = TRUE;
        sprite->x = sprite->data[6];
        sprite->y = sprite->data[7];
        sprite->x2 = 0;
        sprite->y2 = 0;
        break;
    case 3:
        sprite->invisible = FALSE;
        sprite->data[1]++;
        //fall through
    case 4:
        if (sprite->x2 < 56)
        {
            sprite->x2 += 4;
            sprite->y2 -= 3;
        }
        else
        {
            sprite->x += sprite->x2;
            sprite->y += sprite->y2;
            sprite->x2 = 0;
            sprite->y2 = 0;
            sprite->data[0] = 1;
        }
        break;
    }
}

static void sub_813E580(u16 x, u16 y)
{
    u8 i;
    u8 spriteId;

    for (i = 0; i < 8; i++)
    {
        spriteId = CreateSprite(&gSpriteTemplate_840B0B0, x, y, 0);
        gSprites[spriteId].oam.affineMode = 1;
        gSprites[spriteId].oam.matrixNum = 16;
        gSprites[spriteId].data[0] = i;
        gSprites[spriteId].data[1] = 32;
    }
}

static void sub_813E5E0(struct Sprite *sprite)
{
    if (sFlygonYOffset != 0)
    {
        DestroySprite(sprite);
    }
    else
    {
        sprite->invisible = gSprites[sprite->data[0]].invisible;
        if (sprite->data[7] < 12)
            sprite->data[7]++;
        sprite->data[6] += 4;
        sprite->x = sprite->data[4] + gSineTable[(u8)(sprite->data[3] + 64)] * sprite->data[6] / 256;
        //This useless '+ 0' is needed to make the asm match
        sprite->y = sprite->data[5] + gSineTable[(u8)(sprite->data[3] + 0)] * sprite->data[6] / 256;
        sprite->y2 = gSineTable[(u8)(sprite->data[1] + 0)] * sprite->data[7] / 256;
        sprite->data[1] += 16;
        if (sprite->y > sprite->data[2])
            DestroySprite(sprite);
    }
}

static void sub_813E6C0(struct Sprite *sprite)
{
    u8 spriteId;
    u8 i;
    s16 var1;
    s16 var2;

    if (sFlygonYOffset != 0)
    {
        DestroySprite(sprite);
    }
    else
    {
        sprite->data[7]++;
        sprite->invisible = TRUE;
        if (gSprites[sprite->data[0]].data[0] == 1 && !(sprite->data[7] & 3))
        {
            var1 = sprite->data[1] + gSprites[sprite->data[0]].x;
            var2 = sprite->data[2] + gSprites[sprite->data[0]].y;
            for (i = 0; i < 3; i++)
            {
                u8 r3 = gSprites[sprite->data[0]].subpriority - 1;
                //Make redundant copies of these variables to get the asm to match
                s16 _var1 = var1;
                s16 _var2 = var2;

                spriteId = CreateSprite(&gSpriteTemplate_840B0DC, _var1, _var2, r3);
                if (spriteId != 64)
                {
                    gSprites[spriteId].data[0] = sprite->data[0];
                    gSprites[spriteId].data[1] = (((sprite->data[7] >> 2) & 7) << 5) + i * 85;
                    gSprites[spriteId].data[2] = sprite->data[3];
                    gSprites[spriteId].data[3] = 104;
                    gSprites[spriteId].data[4] = var1;
                    gSprites[spriteId].data[5] = var2;
                    gSprites[spriteId].data[6] = 0;
                }
            }
        }
    }
}

static void sub_813E7C0(u8 a)
{
    u8 spriteId;

    spriteId = CreateSprite(&gSpriteTemplate_840B0F4, 0, 0, 0);
    if (spriteId != 64)
    {
        gSprites[spriteId].data[0] = a;
        gSprites[spriteId].data[1] = -12;
        gSprites[spriteId].data[2] = 0;
        gSprites[spriteId].data[3] = 136;
    }
}

static void sub_813E804(struct Sprite *sprite)
{
    if (sFlygonYOffset != 0)
    {
        DestroySprite(sprite);
    }
    else
    {
        sprite->invisible = gSprites[sprite->data[0]].invisible;
        sprite->data[7]++;
        if (sprite->data[3] < 40)
            sprite->data[3] += 2;
        //This useless '+ 0' is needed to make the asm match
        sprite->x = gSprites[sprite->data[0]].x + gSprites[sprite->data[0]].x2 + gSineTable[(u8)(sprite->data[1] + 64)] * sprite->data[3] / 256;
        sprite->y = gSprites[sprite->data[0]].y + gSprites[sprite->data[0]].y2 + gSineTable[(u8)(sprite->data[1] + 0)] * sprite->data[3] / 512;
        sprite->data[1] += 2;
        sprite->y2 = gSineTable[(u8)(sprite->data[2] + 0)] / 32;
        sprite->data[2] += 8;
        if ((sprite->data[1] & 0xFF) < 128)
            sprite->subpriority = gSprites[sprite->data[0]].subpriority - 1;
        else
            sprite->subpriority = gSprites[sprite->data[0]].subpriority + 1;
    }
}

static void sub_813E930(u8 a)
{
    u8 i;
    u8 spriteId;

    for (i = 0; i < 8; i++)
    {
        spriteId = CreateSprite(&gSpriteTemplate_840B124, gSprites[a].x, gSprites[a].y, 0);
        if (spriteId != 64)
        {
            gSprites[spriteId].data[0] = a;
            gSprites[spriteId].data[1] = i * 32;
        }
    }
}

static void sub_813E980(struct Sprite *sprite)
{
    if (sFlygonYOffset != 0)
    {
        DestroySprite(sprite);
    }
    else
    {
        u8 r0;
        u16 matrixNum;

        sprite->invisible = gSprites[sprite->data[0]].invisible;
        sprite->data[7]++;
        sprite->data[6] += 8;
        sprite->x = sprite->data[4] + gSineTable[(u8)(sprite->data[3] + 64)] * sprite->data[6] / 256;
        sprite->y = sprite->data[5] + gSineTable[(u8)(sprite->data[3] + 0)] * sprite->data[6] / 256;
        r0 = sprite->data[6] / 16;
        if (r0 > 9)
            r0 = 9;
        matrixNum = (r0 + 18) & 31;
        sprite->oam.matrixNum = matrixNum;
        if (sprite->data[6] > 160)
            DestroySprite(sprite);
    }
}

static void sub_813EA60(struct Sprite *sprite)
{
    bool32 r6;
    s16 r1, r2;
    u8 spriteId;

    if (sFlygonYOffset != 0)
    {
        DestroySprite(sprite);
    }
    else
    {
        sprite->data[7]++;
        sprite->invisible = TRUE;
        if (gSprites[sprite->data[0]].data[0] == 1)
        {
            r6 = (sprite->data[7] & 1);
            if (!r6)
            {
                r1 = sprite->data[1] + gSprites[sprite->data[0]].x;
                r2 = sprite->data[2] + gSprites[sprite->data[0]].y;
                spriteId = CreateSprite(&gSpriteTemplate_840B150, r1, r2, gSprites[sprite->data[0]].subpriority + 1);
                if (spriteId != 64)
                {
                    gSprites[spriteId].oam.affineMode = 3;
                    gSprites[spriteId].oam.matrixNum = 18;
                    CalcCenterToCornerVec(&gSprites[spriteId], 0, 1, 3);
                    gSprites[spriteId].data[0] = sprite->data[0];
                    gSprites[spriteId].data[3] = gUnknown_0840B168[(sprite->data[7] >> 1) & 7];
                    gSprites[spriteId].data[4] = r1;
                    gSprites[spriteId].data[5] = r2;
                    gSprites[spriteId].data[6] = r6;
                }
            }
        }
    }
}

static void InitIntroTorchicAttackAnim(u8 a)
{
    u8 spriteId;
    u8 i;

    spriteId = CreateSprite(&gSpriteTemplate_840B170, 0, 0, 0);
    if (spriteId != 64)
    {
        gSprites[spriteId].data[0] = a;
        gSprites[spriteId].data[1] = 0;
        gSprites[spriteId].data[2] = 8;
        gSprites[spriteId].data[3] = 24;
    }
    for (i = 0; i < 10; i++)
    {
        SetOamMatrix(18 + i, gUnknown_0840B188[i], 0, 0, gUnknown_0840B188[i]);
    }
}

static void sub_813EBBC(struct Sprite *sprite)
{
    if (sFlygonYOffset != 0)
    {
        DestroySprite(sprite);
    }
    else
    {
        sprite->invisible = gSprites[sprite->data[0]].invisible;
        sprite->data[7] += 1;
        sprite->data[6] += 8;
        sprite->x = sprite->data[4] + gSineTable[(u8)(sprite->data[3] + 64)] * sprite->data[6] / 256;
        sprite->y = sprite->data[5] + gSineTable[(u8)(sprite->data[3] + 0)] * sprite->data[6] / 256;
        sprite->y2 = gSineTable[(u8)(sprite->data[1] + 0)] / 64;
        sprite->data[1] += 16;
        if (sprite->y < sprite->data[2])
            DestroySprite(sprite);
    }
}

static void sub_813EC90(struct Sprite *sprite)
{
    bool32 r6;
    s16 r1, r2;
    u8 spriteId;
    u16 foo;

    if (sFlygonYOffset != 0)
    {
        DestroySprite(sprite);
    }
    else
    {
        sprite->data[7]++;
        sprite->invisible = TRUE;
        if (gSprites[sprite->data[0]].data[0] == 1)
        {
            r6 = sprite->data[7] & 1;
            if (!r6)
            {
                r1 = sprite->data[1] + gSprites[sprite->data[0]].x;
                r2 = sprite->data[2] + gSprites[sprite->data[0]].y;
                spriteId = CreateSprite(&gSpriteTemplate_840B1B0, r1, r2, gSprites[sprite->data[0]].subpriority + 1);
                if (spriteId != 64)
                {
                    gSprites[spriteId].oam.affineMode = 3;
                    gSprites[spriteId].oam.matrixNum = 17;
                    CalcCenterToCornerVec(&gSprites[spriteId], 0, 1, 3);
                    gSprites[spriteId].data[0] = sprite->data[0];
                    gSprites[spriteId].data[1] = ((sprite->data[7] >> 2) & 7) << 5;
                    gSprites[spriteId].data[2] = sprite->data[3];
                    gSprites[spriteId].data[3] = 232;
                    gSprites[spriteId].data[4] = r1;
                    gSprites[spriteId].data[5] = r2;
                    gSprites[spriteId].data[6] = r6;
                }
            }
            if (sprite->data[6] < 112)
                sprite->data[6] += 4;
        }
        foo = 256 - gSineTable[(u8)sprite->data[6]] / 2;
        SetOamMatrix(17, foo, 0, 0, foo);
    }
}

static void InitIntroMudkipAttackAnim(u8 a)
{
    u8 spriteId;

    spriteId = CreateSprite(&gSpriteTemplate_840B1C8, 0, 0, 0);
    if (spriteId != 64)
    {
        gSprites[spriteId].data[0] = a;
        gSprites[spriteId].data[1] = 0;
        gSprites[spriteId].data[2] = 12;
        gSprites[spriteId].data[3] = 24;
    }
}

static void sub_813EDFC(struct Sprite *sprite)
{
    u16 foo;

    //I'm not sure why a switch statement was used here.
    //if (sprite->data[0] != 1) would have been more appropriate.
    switch (sprite->data[0])
    {
    case 0:
    default:
        sprite->invisible = FALSE;
        sprite->oam.affineMode = 3;
        sprite->oam.matrixNum = 18;
        CalcCenterToCornerVec(sprite, 0, 3, 3);
        sprite->data[1] = 0;
        sprite->data[0] = 1;
        //fall through
    case 1:
        break;
    }
    sprite->data[7]++;
    if (sprite->data[7] & 1)
    {
        sprite->invisible = TRUE;
    }
    else
    {
        sprite->invisible = FALSE;
        if (sprite->data[1] < 64)
            sprite->data[1]++;
    }
    foo = 256 - gSineTable[(u8)sprite->data[1]] / 2;
    SetOamMatrix(18, foo, 0, 0, foo);
}

void PanFadeAndZoomScreen(u16 screenX, u16 screenY, u16 zoom, u16 alpha)
{
    struct BgAffineSrcData src;
    struct BgAffineDstData dest;

    src.texX = 0x8000;
    src.texY = 0x8000;
    src.scrX = screenX;
    src.scrY = screenY;
    src.sx = zoom;
    src.sy = zoom;
    src.alpha = alpha;
    BgAffineSet(&src, &dest, 1);
    SetGpuReg(REG_OFFSET_BG2PA, dest.pa);
    SetGpuReg(REG_OFFSET_BG2PB, dest.pb);
    SetGpuReg(REG_OFFSET_BG2PC, dest.pc);
    SetGpuReg(REG_OFFSET_BG2PD, dest.pd);
    SetGpuReg(REG_OFFSET_BG2X_L, dest.dx);
    SetGpuReg(REG_OFFSET_BG2X_H, dest.dx >> 16);
    SetGpuReg(REG_OFFSET_BG2Y_L, dest.dy);
    SetGpuReg(REG_OFFSET_BG2Y_H, dest.dy >> 16);
}

static void SpriteCB_WaterDrop_Ripple(struct Sprite *sprite)
{
    u8 palNum;

    if (sprite->data[2] >= 192)
    {
        if (sprite->data[3] != 0)
        {
            sprite->data[3]--;
        }
        else
        {
            sprite->invisible = FALSE;
            SetOamMatrix(sprite->data[1], sprite->data[2], 0, 0, sprite->data[2]);
            sprite->data[2] = (sprite->data[2] * 95) / 100;
            palNum = (sprite->data[2] - 192) / 128 + 9;
            if (palNum > 15)
                palNum = 15;
            sprite->oam.paletteNum = palNum;
        }
    }
    else
    {
        DestroySprite(sprite);
    }
}

static void SpriteCB_WaterDrop(struct Sprite *sprite)
{
    // Wait for sState to be modified by Task_Scene1_WaterDrops
    if (sprite->sState != 0)
        sprite->callback = SpriteCB_WaterDrop_Slide;
}

static void SpriteCB_WaterDrop_Slide(struct Sprite *sprite)
{
    if (sprite->x <= 116)
    {
        sprite->y += sprite->y2;
        sprite->y2 = 0;
        sprite->x += 4;
        sprite->x2 = -4;
        sprite->data[4] = 128;
        sprite->callback = SpriteCB_WaterDrop_ReachLeafEnd;
    }
    else
    {
        u16 data2;
        u16 data3;
        u16 data4;
        s16 sin1;
        s16 sin2;
        s16 sin3;
        s16 sin4;
        s16 var1;
        s16 var2;
        s16 var3;
        s16 var4;
        s16 temp;

        data4 = sprite->data[4];
        sin1 = gSineTable[(u8)data4];
        sin2 = gSineTable[(u8)(data4 + 64)];
        sprite->data[4] += 2;
        sprite->y2 = sin1 / 32;
        sprite->x--;
        if (sprite->x & 1)
            sprite->y++;
        temp = -sin2 / 16;
        data2 = sprite->data[2];
        data3 = sprite->data[3];
        sin3 = gSineTable[(u8)(temp - 16)];
        sin4 = gSineTable[(u8)(temp + 48)];
        var1 = sin4 * data2 / 256;
        var2 = -sin3 * data3 / 256;
        var3 = sin3 * data2 / 256;
        var4 = sin4 * data3 / 256;
        SetOamMatrix(sprite->data[1], data2, 0, 0, data3);
        SetOamMatrix(sprite->data[1] + 1, var1, var3, var2, var4);
        SetOamMatrix(sprite->data[1] + 2, var1, var3, var2 * 2, var4 * 2);
    }
}

static void SpriteCB_WaterDrop_ReachLeafEnd(struct Sprite *sprite)
{
    SetOamMatrix(sprite->data[1], sprite->data[6] + 64, 0, 0, sprite->data[6] + 64);
    SetOamMatrix(sprite->data[1] + 1, sprite->data[6] + 64, 0, 0, sprite->data[6] + 64);
    SetOamMatrix(sprite->data[1] + 2, sprite->data[6] + 64, 0, 0, sprite->data[6] + 64);
    if (sprite->data[4] != MAX_SPRITES)
    {
        u16 sinIdx;
        sprite->data[4] -= 8;
        sinIdx = sprite->data[4];
        sprite->x2 = gSineTable[(u8)(sinIdx + 64)] / 64;
        sprite->y2 = gSineTable[(u8)sinIdx] / 64;
    }
    else
    {
        sprite->data[4] = 0;
        sprite->callback = SpriteCB_WaterDrop_DangleFromLeaf;
    }
}

static void SpriteCB_WaterDrop_DangleFromLeaf(struct Sprite *sprite)
{
    if (sprite->data[0] != 2)
    {
        s16 r2;

        sprite->data[4] += 8;
        r2 = gSineTable[(u8)sprite->data[4]] / 16 + 64;
        sprite->x2 = gSineTable[(u8)(r2 + 64)] / 64;
        sprite->y2 = gSineTable[(u8)r2] / 64;
    }
    else
    {
        sprite->callback = SpriteCB_WaterDrop_Fall;
    }
}

static void SpriteCB_WaterDrop_Fall(struct Sprite *sprite)
{
    if (sprite->y < sprite->data[5])
    {
        sprite->y += 4;
    }
    else
    {
        sprite->data[7] = 1;
        sprite->invisible = TRUE;
        sprite->x += sprite->x2;
        sprite->y += sprite->y2;
        StartSpriteAnim(sprite, DROP_ANIM_RIPPLE);
        sprite->data[2] = 1024;
        sprite->data[3] = 8 * (sprite->data[1] & 3);
        sprite->callback = SpriteCB_WaterDrop_Ripple;
        sprite->oam.shape = SPRITE_SHAPE(64x32);
        sprite->oam.size = SPRITE_SIZE(64x32);
        CalcCenterToCornerVec(sprite, SPRITE_SHAPE(64x32), SPRITE_SIZE(64x32), ST_OAM_AFFINE_ERASE);
    }
}

// State is handled by Task_Scene2_BikeRide
static void SpriteCB_PlayerOnBicycle(struct Sprite *sprite)
{
    // Adjust x position
    switch (sprite->sState)
    {
    case 0:
        // Move forwards
        StartSpriteAnimIfDifferent(sprite, 0);
        sprite->x--;
        break;
    case 1:
        // Drift backwards slowly
        StartSpriteAnimIfDifferent(sprite, 0);
        if (gIntroFrameCounter & 7)
            return;
        sprite->x++;
        break;
    case 2:
        // Move backwards
        if (sprite->x <= 120 || gIntroFrameCounter & 7)
            sprite->x++;
        break;
    case 3:
        // Bike in place
        break;
    case 4:
        // Exit to the left
        if (sprite->x > -32)
            sprite->x -= 2;
        break;
    }

    if (gIntroFrameCounter & 7)
        return;

    // Adjust y position
    if (sprite->y2 != 0)
    {
        // Return to neutral after wobble
        sprite->y2 = 0;
    }
    else
    {
        // Random wobble on y axis
        switch (Random() & 3)
        {
        case 0:
            sprite->y2 = -1;
            break;
        case 1:
            sprite->y2 = 1;
            break;
        case 2:
        case 3:
            sprite->y2 = 0;
            break;
        }
    }
}

#define sSinIdx data[1]

// Movement is started by setting state to 1 in Task_Scene2_BikeRide
static void SpriteCB_Flygon(struct Sprite *sprite)
{
    switch (sprite->sState)
    {
    case 0:
        break;
    case 1:
        if (sprite->x2 + sprite->x < DISPLAY_WIDTH + 64)
            sprite->x2 += 8;
        else
            sprite->sState = 2;
        break;
    case 2:
        if (sprite->x2 + sprite->x > 120)
            sprite->x2 -= 1;
        else
            sprite->sState = 3;
        break;
    case 3:
        if (sprite->x2 > 0)
            sprite->x2 -= 2;
        break;
    }
    sprite->y2 = Sin((u8)sprite->sSinIdx, 8) - sFlygonYOffset;
    sprite->sSinIdx += 4;
}

#undef sSinIdx

#define sTimer      data[1]
#define sLetterId   data[2]
#define sColorDelay data[3]
#define sLetterX    data[3] // Re-used

#define COLOR_CHANGES 9 // Number of stages for changing the letter color

// For the letters in "Game Freak"
// Also intended for the letters in "Presents", which is never shown
static void SpriteCB_LogoLetter(struct Sprite *sprite)
{
    switch (sprite->sState)
    {
    case 0:
        if (sprite->sTimer != 0)
        {
            sprite->sTimer--;
        }
        else
        {
            // Start the grow and shrink appearance animation
            sprite->invisible = FALSE;
            StartSpriteAffineAnim(sprite, 1);
            sprite->sState++;
        }
        break;
    case 1:
        if (gIntroFrameCounter == TIMER_LOGO_LETTERS_COLOR)
        {
            // Initialize color fade
            sprite->sState++;
            sprite->sTimer = COLOR_CHANGES;
            sprite->sColorDelay = 2;
        }
        break;
    case 2:
        // Fade letters to blue
        if (sprite->sColorDelay == 0)
        {
            sprite->sColorDelay = 2;
            if (sprite->sTimer != 0)
            {
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer],      &gPlttBufferFaded[OBJ_PLTT_ID(1) + 15], PLTT_SIZEOF(1));
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer + 16], &gPlttBufferFaded[OBJ_PLTT_ID(1) + 4], PLTT_SIZEOF(1));
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer + 32], &gPlttBufferFaded[OBJ_PLTT_ID(1) + 10], PLTT_SIZEOF(1));
                sprite->sTimer--;
            }
            else
            {
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer],      &gPlttBufferFaded[OBJ_PLTT_ID(1) + 15], PLTT_SIZEOF(1));
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer + 16], &gPlttBufferFaded[OBJ_PLTT_ID(1) + 4], PLTT_SIZEOF(1));
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer + 32], &gPlttBufferFaded[OBJ_PLTT_ID(1) + 10], PLTT_SIZEOF(1));
                sprite->sState++;
            }
        }
        else
        {
            sprite->sColorDelay--;
        }
        break;
    case 3:
        // Fade letters back to white
        if (sprite->sColorDelay != 0)
        {
            sprite->sColorDelay--;
        }
        else
        {
            sprite->sColorDelay = 2;
            if (sprite->sTimer <= COLOR_CHANGES)
            {
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer],      &gPlttBufferFaded[OBJ_PLTT_ID(1) + 15], PLTT_SIZEOF(1));
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer + 16], &gPlttBufferFaded[OBJ_PLTT_ID(1) + 4], PLTT_SIZEOF(1));
                CpuCopy16(&gIntroGameFreakTextFade_Pal[sprite->sTimer + 32], &gPlttBufferFaded[OBJ_PLTT_ID(1) + 10], PLTT_SIZEOF(1));
                sprite->sTimer++;
            }
            else
            {
                sprite->sState++;
            }
        }
        break;
    case 4:
        if (gIntroFrameCounter == TIMER_LOGO_DISAPPEAR)
        {
            // Start the grow disappearance animation
            StartSpriteAffineAnim(sprite, 2);
            sprite->oam.objMode = ST_OAM_OBJ_BLEND;
            sprite->sState++;
        }
        break;
    case 5:
        // Spread the letters out as they grow
        sprite->sLetterX += sGameFreakLettersMoveSpeed[sprite->sLetterId];
        sprite->x2 = (sprite->sLetterX & 0xFF00) >> 8;
        if (sprite->sLetterId < 4)
        {
            // Is in first 4 letters, i.e. "Game"
            s16 temp = sprite->x2;
            sprite->x2 = -temp;
        }
        if (sprite->affineAnimEnded)
            DestroySprite(sprite);
        break;
    }
}

static void SpriteCB_GameFreakLogo(struct Sprite *sprite)
{
    switch(sprite->sState)
    {
    case 0:
        if (gIntroFrameCounter == TIMER_LOGO_APPEAR)
        {
            sprite->invisible = FALSE;
            sprite->sState++;
        }
        break;
    case 1:
        if (gIntroFrameCounter == TIMER_LOGO_DISAPPEAR)
        {
            // Start the grow disappearance animation
            StartSpriteAffineAnim(sprite, 3);
            sprite->sState++;
        }
        break;
    case 2:
        if (sprite->affineAnimEnded)
            DestroySprite(sprite);
        break;
    }
}

static u8 CreateGameFreakLogoSprites(s16 x, s16 y, s16 unused)
{
    u16 i;
    u8 spriteId;

    // Create "Game Freak" letters
    for (i = 0; i < NUM_GF_LETTERS; i++)
    {
        spriteId = CreateSprite(&sSpriteTemplate_GameFreakLetter, sGameFreakLetterData[i][1] + x, y - 4, 0);
        gSprites[spriteId].sState = 0;
        gSprites[spriteId].sTimer = sGameFreakLetterStartDelays[i];
        gSprites[spriteId].sLetterId = i;
        gSprites[spriteId].invisible = TRUE;
        gSprites[spriteId].oam.matrixNum = i + 12;
        StartSpriteAnim(&gSprites[spriteId], sGameFreakLetterData[i][0]);
        StartSpriteAffineAnim(&gSprites[spriteId], 0);
    }

    // Create Game Freak logo
    spriteId = CreateSprite(&sSpriteTemplate_GameFreakLogo, 120, y - 6, 0);
    gSprites[spriteId].sState = 0;
    gSprites[spriteId].invisible = TRUE;
    gSprites[spriteId].oam.matrixNum = i + 12;
    StartSpriteAffineAnim(&gSprites[spriteId], 1);

    return spriteId;
}

#undef sTimer
#undef sLetterId
#undef sColorDelay
#undef sLetterX
#undef COLOR_CHANGES

#define sScale   data[1]
#define sRot     data[2]
#define sPos     data[3]
#define sTimer   data[7]

static void SpriteCB_FlygonSilhouette(struct Sprite *sprite)
{
    sprite->sTimer++;

    if (sprite->sState != 0)
    {
        s16 sin;
        s16 cos;

        s16 a, b, c, d;
        // Determines rotation of the sprite
        sin = gSineTable[(u8)sprite->sRot];
        cos = gSineTable[(u8)(sprite->sRot + 64)];
        // Converts rotation and scale into the OAM matrix
        d = Q_8_8_TO_INT( cos * sprite->sScale);
        c = Q_8_8_TO_INT(-sin * sprite->sScale);
        b = Q_8_8_TO_INT( sin * sprite->sScale);
        a = Q_8_8_TO_INT( cos * sprite->sScale);

        SetOamMatrix(1, a, b, c, d);
    }

    switch (sprite->sState)
    {
    case 0:
    default:
        sprite->oam.affineMode = ST_OAM_AFFINE_DOUBLE;
        sprite->oam.matrixNum = 1;
        CalcCenterToCornerVec(sprite, SPRITE_SHAPE(64x32), SPRITE_SIZE(64x32), ST_OAM_AFFINE_DOUBLE);
        sprite->invisible = FALSE;
        sprite->sState = 1;
        sprite->sScale = 128;
        sprite->sRot = 0;
        sprite->sPos = 0;
        break;
    case 1:
        sprite->x2 = -Sin((u8)sprite->sPos, 140);
        sprite->y2 = -Sin((u8)sprite->sPos, 120);
        sprite->sScale += 7;
        sprite->sPos += 3;
        if (sprite->x + sprite->x2 <= -16)
        {
            sprite->oam.priority = 3;
            sprite->sState++;
            sprite->x = 20;
            sprite->y = 40;
            sprite->sScale = 512;
            sprite->sRot = 0;
            sprite->sPos = 16;
        }
        break;
    case 2:
        sprite->x2 = Sin((u8)sprite->sPos, 34);
        sprite->y2 = -Cos((u8)sprite->sPos, 60);
        sprite->sScale += 2;
        if (sprite->sTimer % 5 == 0)
            sprite->sPos++;
        break;
    }
}

#undef sScale
#undef sRot
#undef sPos
#undef sTimer