#include "battle_anim_scripts.h"

#define ENVIRONMENT_BACKGROUND(Background)             \
{                                                      \
    .tileset = gBattleEnvironmentTiles_##Background,   \
    .tilemap = gBattleEnvironmentTilemap_##Background, \
}

#define ENVIRONMENT_ENTRY(Background)                      \
{                                                          \
    .tileset = gBattleEnvironmentAnimTiles_##Background,   \
    .tilemap = gBattleEnvironmentAnimTilemap_##Background, \
}

#define ENVIRONMENT_GRAPHICS(Entry, Background, Palette, Anim)  \
    .entry = ENVIRONMENT_ENTRY(Entry),                          \
    .background = ENVIRONMENT_BACKGROUND(Background),           \
    .palette = gBattleEnvironmentPalette_##Palette,             \
    .battleIntroSlide = Anim                                    \


#define GRASS_ENVIRONMENT_DEFAULTS                      \
    .naturePower = MOVE_ENERGY_BALL,                    \
    .secretPowerAnimation = gBattleAnimMove_NeedleArm,  \
    .secretPowerEffect = MOVE_EFFECT_SLEEP,             \
    .camouflageType = TYPE_GRASS,                       \
    .entry = ENVIRONMENT_ENTRY(TallGrass),              \
    .background = ENVIRONMENT_BACKGROUND(TallGrass),    \
    .battleIntroSlide = BattleIntroSlide1               \

#define SECRET_POWER_ENVIRONMENT(Anim, Effect)          \
    .secretPowerAnimation = Anim,                       \
    .secretPowerEffect = Effect                         \

#define DEFAULT_CAMOUFLAGE_BLEND RGB_WHITE

// Cave values. Used for BATTLE_ENVIRONMENT_CAVE as well as BATTLE_ENVIRONMENT_GROUDON and BATTLE_ENVIRONMENT_KYOGRE
#if B_NATURE_POWER_MOVES >= GEN_6
    #define CAVE_NATURE_POWER MOVE_POWER_GEM
#elif B_NATURE_POWER_MOVES >= GEN_4
    #define CAVE_NATURE_POWER MOVE_ROCK_SLIDE
#else
    #define CAVE_NATURE_POWER MOVE_SHADOW_BALL
#endif
#define CAVE_SECRET_POWER_ANIMATION B_SECRET_POWER_ANIMATION >= GEN_4 ? gBattleAnimMove_RockThrow : gBattleAnimMove_Bite
#define CAVE_SECRET_POWER_EFFECT    MOVE_EFFECT_FLINCH
#define CAVE_CAMOUFLAGE_TYPE        TYPE_ROCK
#define CAVE_CAMOUFLAGE_BLEND       RGB(14, 9, 3)
#define CAVE_BATTLE_INTRO_SLIDE     BattleIntroSlide1

// Building values. Used for BATTLE_ENVIRONMENT_BUILDING as well as the environments that come from the vanilla MAP_BATTLE_SCENEs: BATTLE_ENVIRONMENT_PLAIN, BATTLE_ENVIRONMENT_FRONTIER, BATTLE_ENVIRONMENT_GYM, BATTLE_ENVIRONMENT_LEADER, BATTLE_ENVIRONMENT_MAGMA, BATTLE_ENVIRONMENT_AQUA, BATTLE_ENVIRONMENT_SIDNEY, BATTLE_ENVIRONMENT_PHOEBE, BATTLE_ENVIRONMENT_GLACIA, BATTLE_ENVIRONMENT_DRAKE, BATTLE_ENVIRONMENT_CHAMPION
#define BUILDING_NATURE_POWER        B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_TRI_ATTACK : MOVE_SWIFT
#if B_SECRET_POWER_ANIMATION >= GEN_7
    #define BUILDING_SECRET_POWER_ANIMATION gBattleAnimMove_SpitUp
#elif B_SECRET_POWER_ANIMATION >= GEN_4
    #define BUILDING_SECRET_POWER_ANIMATION gBattleAnimMove_BodySlam
#else
    #define BUILDING_SECRET_POWER_ANIMATION gBattleAnimMove_Strength
#endif
#define BUILDING_SECRET_POWER_EFFECT MOVE_EFFECT_PARALYSIS
#define BUILDING_CAMOUFLAGE_TYPE     TYPE_NORMAL
#define BUILDING_CAMOUFLAGE_BLEND    RGB_WHITE
#define BUILDING_BATTLE_INTRO_SLIDE  BattleIntroSlide3

// Plain values. USED for BATTLE_ENVIRONMENT_PLAIN as well as BATTLE_ENVIRONMENT_RAYQUAZA
// (BATTLE_ENVIRONMENT_SKY_PILLAR wasn't introduced until Gen6, so Sky Pillar's roof counts as a Route which uses Plain)
#if B_NATURE_POWER_MOVES >= GEN_6
    #define PLAIN_NATURE_POWER MOVE_TRI_ATTACK
#elif B_NATURE_POWER_MOVES >= GEN_4
    #define PLAIN_NATURE_POWER MOVE_EARTHQUAKE
#else
    #define PLAIN_NATURE_POWER MOVE_SWIFT
#endif
#if B_SECRET_POWER_ANIMATION >= GEN_7
    #define PLAIN_SECRET_POWER_ANIMATION gBattleAnimMove_SpitUp
#elif B_SECRET_POWER_ANIMATION == GEN_6
    #define PLAIN_SECRET_POWER_ANIMATION gBattleAnimMove_BodySlam
#elif B_SECRET_POWER_ANIMATION >= GEN_4
    #define PLAIN_SECRET_POWER_ANIMATION gBattleAnimMove_MudSlap
#else
    #define PLAIN_SECRET_POWER_ANIMATION gBattleAnimMove_Slam
#endif
#define PLAIN_SECRET_POWER_EFFECT (B_SECRET_POWER_EFFECT == GEN_4 || B_SECRET_POWER_EFFECT == GEN_5) ? MOVE_EFFECT_ACC_MINUS_1 : MOVE_EFFECT_PARALYSIS
#define PLAIN_CAMOUFLAGE_TYPE     (B_CAMOUFLAGE_TYPES == GEN_4 || B_CAMOUFLAGE_TYPES == GEN_5) ? TYPE_GROUND : TYPE_NORMAL
#define PLAIN_CAMOUFLAGE_BLEND    RGB_WHITE
#define PLAIN_BATTLE_INTRO_SLIDE  BattleIntroSlide3

const struct BattleEnvironment gBattleEnvironmentInfo[BATTLE_ENVIRONMENT_COUNT] =
{
    [BATTLE_ENVIRONMENT_GRASS] =
    {
        GRASS_ENVIRONMENT_DEFAULTS,
        .name = _("Grass"),
        .camouflageBlend = RGB(12, 24, 2),
        .palette = gBattleEnvironmentPalette_TallGrass,
    },

    [BATTLE_ENVIRONMENT_LONG_GRASS] =
    {
        ENVIRONMENT_GRAPHICS(LongGrass, LongGrass, LongGrass, BattleIntroSlide1),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_NeedleArm, MOVE_EFFECT_SLEEP),
        .name = _("Long Grass"),
        .naturePower = MOVE_ENERGY_BALL,
        .camouflageType = TYPE_GRASS, .camouflageBlend = RGB(0, 15, 2),
    },

    [BATTLE_ENVIRONMENT_SAND] =
    {
        ENVIRONMENT_GRAPHICS(Sand, Sand, Sand, BattleIntroSlide2),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_MudSlap, MOVE_EFFECT_ACC_MINUS_1),
        .name = _("Sand"),
        .naturePower = MOVE_EARTH_POWER,
        .camouflageType = TYPE_GROUND, .camouflageBlend = RGB(30, 24, 11),
    },

    [BATTLE_ENVIRONMENT_UNDERWATER] =
    {
        ENVIRONMENT_GRAPHICS(Underwater, Underwater, Underwater, BattleIntroSlide2),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_WaterPulse, MOVE_EFFECT_ATK_MINUS_1),
        .name = _("Underwater"),
        .naturePower = MOVE_HYDRO_PUMP,
        .camouflageType = TYPE_WATER, .camouflageBlend = RGB(0, 0, 18),
    },

    [BATTLE_ENVIRONMENT_WATER] =
    {
        ENVIRONMENT_GRAPHICS(Water, Water, Water, BattleIntroSlide2),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_WaterPulse, MOVE_EFFECT_ATK_MINUS_1),
        .name = _("Water"),
        .naturePower = MOVE_HYDRO_PUMP,
        .camouflageType = TYPE_WATER, .camouflageBlend = RGB(11, 22, 31),
    },

    [BATTLE_ENVIRONMENT_POND] =
    {
        ENVIRONMENT_GRAPHICS(PondWater, PondWater, PondWater, BattleIntroSlide1),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_WaterPulse, MOVE_EFFECT_ATK_MINUS_1),
        .name = _("Pond"),
        .naturePower = MOVE_HYDRO_PUMP,
        .camouflageType = TYPE_WATER, .camouflageBlend = RGB(11, 22, 31),
    },

    [BATTLE_ENVIRONMENT_MOUNTAIN] =
    {
        ENVIRONMENT_GRAPHICS(Rock, Rock, Rock, BattleIntroSlide1),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_MudSlap, MOVE_EFFECT_ACC_MINUS_1),
        .name = _("Mountain"),
        .naturePower = MOVE_EARTH_POWER,
        .camouflageType = TYPE_GROUND, .camouflageBlend = RGB(22, 16, 10),
    },

    [BATTLE_ENVIRONMENT_CAVE] =
    {
        ENVIRONMENT_GRAPHICS(Cave, Cave, Cave, CAVE_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(CAVE_SECRET_POWER_ANIMATION, CAVE_SECRET_POWER_EFFECT),
        .name = _("Cave"),
        .naturePower = CAVE_NATURE_POWER,
        .camouflageType = CAVE_CAMOUFLAGE_TYPE, .camouflageBlend = CAVE_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_BUILDING] =
    {
        ENVIRONMENT_GRAPHICS(Building, Building, Building, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Building"),
        .naturePower = BUILDING_NATURE_POWER,
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_PLAIN] =
    {
        ENVIRONMENT_GRAPHICS(Building, Building, Plain, PLAIN_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(PLAIN_SECRET_POWER_ANIMATION, PLAIN_SECRET_POWER_EFFECT),
        .name = _("Plain"),
        .naturePower = PLAIN_NATURE_POWER,
        .camouflageType = PLAIN_CAMOUFLAGE_TYPE, .camouflageBlend = PLAIN_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_FRONTIER] =
    {
        ENVIRONMENT_GRAPHICS(Building, Building, Frontier, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Frontier"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_GYM] =
    {
        ENVIRONMENT_GRAPHICS(Building, Building, BuildingGym, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Gym"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_LEADER] =
    {
        ENVIRONMENT_GRAPHICS(Building, Building, BuildingLeader, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Leader"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_MAGMA] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, StadiumMagma, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Magma"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_AQUA] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, StadiumAqua, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Aqua"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_SIDNEY] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, StadiumSidney, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Sidney"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_PHOEBE] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, StadiumPhoebe, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Phoebe"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_GLACIA] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, StadiumGlacia, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Glacia"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_DRAKE] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, StadiumDrake, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Drake"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_CHAMPION] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, StadiumWallace, BUILDING_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(BUILDING_SECRET_POWER_ANIMATION, BUILDING_SECRET_POWER_EFFECT),
        .name = _("Champion"),
        .camouflageType = BUILDING_CAMOUFLAGE_TYPE, .camouflageBlend = BUILDING_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_GROUDON] =
    {
        ENVIRONMENT_GRAPHICS(Cave, Cave, Groudon, CAVE_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(CAVE_SECRET_POWER_ANIMATION, CAVE_SECRET_POWER_EFFECT),
        .name = _("Groudon"),
        .naturePower = CAVE_NATURE_POWER,
        .camouflageType = CAVE_CAMOUFLAGE_TYPE, .camouflageBlend = CAVE_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_KYOGRE] =
    {
        ENVIRONMENT_GRAPHICS(Underwater, Water, Kyogre, BattleIntroSlide2),
        SECRET_POWER_ENVIRONMENT(CAVE_SECRET_POWER_ANIMATION, CAVE_SECRET_POWER_EFFECT),
        .name = _("Kyogre"),
        .naturePower = CAVE_NATURE_POWER,
        .camouflageType = CAVE_CAMOUFLAGE_TYPE, .camouflageBlend = CAVE_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_RAYQUAZA] =
    {
        ENVIRONMENT_GRAPHICS(Rayquaza, Rayquaza, Rayquaza, PLAIN_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(PLAIN_SECRET_POWER_ANIMATION, PLAIN_SECRET_POWER_EFFECT),
        .name = _("Rayquaza"),
        .naturePower = PLAIN_NATURE_POWER,
        .camouflageType = PLAIN_CAMOUFLAGE_TYPE, .camouflageBlend = PLAIN_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_SKY_PILLAR] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Gust, MOVE_EFFECT_SPD_MINUS_1),
        .name = _("Sky Pillar"),
        .naturePower = MOVE_AIR_SLASH,
        .camouflageType = TYPE_FLYING, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_BURIAL_GROUND] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_ShadowSneak, MOVE_EFFECT_FLINCH),
        .name = _("Burial Ground"),
        .naturePower = MOVE_SHADOW_BALL,
        .camouflageType = TYPE_GHOST, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_PUDDLE] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_MudShot, MOVE_EFFECT_SPD_MINUS_1),
        .name = _("Puddle"),
        .naturePower = MOVE_MUD_BOMB,
        .camouflageType = TYPE_GROUND, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_MARSH] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_MudShot, MOVE_EFFECT_SPD_MINUS_1),
        .name = _("Marsh"),
        .naturePower = MOVE_MUD_BOMB,
        .camouflageType = TYPE_GROUND, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_SWAMP] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_MudShot, MOVE_EFFECT_SPD_MINUS_1),
        .name = _("Swamp"),
        .naturePower = MOVE_MUD_BOMB,
        .camouflageType = TYPE_GROUND, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_ICE] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_IceShard, MOVE_EFFECT_FREEZE_OR_FROSTBITE),
        .name = _("Ice"),
        .naturePower = MOVE_ICE_BEAM,
        .camouflageType = TYPE_ICE, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_VOLCANO] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Incinerate, MOVE_EFFECT_BURN),
        .name = _("Volcano"),
        .naturePower = MOVE_LAVA_PLUME,
        .camouflageType = TYPE_FIRE, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_DISTORTION_WORLD] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Pound, MOVE_EFFECT_PARALYSIS),
        .name = _("Distortion World"),
        .naturePower = MOVE_TRI_ATTACK,
        .camouflageType = TYPE_NORMAL, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_SPACE] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Swift, MOVE_EFFECT_FLINCH),
        .name = _("Space"),
        .naturePower = MOVE_DRACO_METEOR,
        .camouflageType = TYPE_DRAGON, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_ULTRA_SPACE] =
    {
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Psywave, MOVE_EFFECT_DEF_MINUS_1),
        .name = _("Ultra Space"),
        .naturePower = MOVE_PSYSHOCK,
        .camouflageType = TYPE_PSYCHIC, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },
    //////////////////////////////
    //////////////////////////////

    [BATTLE_ENVIRONMENT_SOARING] =
    {
        ENVIRONMENT_GRAPHICS(Rayquaza, Rayquaza, Rayquaza, BattleIntroSlide3),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Gust, MOVE_EFFECT_SPD_MINUS_1),
        .name = _("Soaring"),
        .naturePower = MOVE_AIR_SLASH,
        .camouflageType = TYPE_FLYING, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_SNOW] =
    {
        ENVIRONMENT_GRAPHICS(Sand, Sand, Snow, BattleIntroSlide2),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_IceShard, MOVE_EFFECT_FREEZE_OR_FROSTBITE),
        .name = _("Snow"),
        .camouflageType = TYPE_ICE, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .naturePower = MOVE_ICE_BEAM,
    },

    [BATTLE_ENVIRONMENT_MUD] =
    {
        ENVIRONMENT_GRAPHICS(Building, Mud, Mud, BattleIntroSlide3),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_MudBomb, MOVE_EFFECT_ACC_MINUS_1),
        .name = _("Mud"),
        .camouflageType = TYPE_GROUND, .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .naturePower = MOVE_MUD_BOMB,
    },

    [BATTLE_ENVIRONMENT_WHEAT_FIELD] =
    {
        ENVIRONMENT_GRAPHICS(LongGrassAutumn, LongGrassAutumn, LongGrassAutumn, BattleIntroSlide1),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_MagicalLeaf, MOVE_EFFECT_SLEEP),
        .name = _("Autumn Grass"),
        .naturePower = MOVE_ENERGY_BALL,
        .camouflageType = TYPE_GRASS, .camouflageBlend = RGB(0, 15, 2),
    },

    [BATTLE_ENVIRONMENT_AUTUMN_GRASS] =
    {
        .name = _("Autumn Grass"),
        GRASS_ENVIRONMENT_DEFAULTS,
        .palette = gBattleEnvironmentPalette_TallGrassAutumn,
        .camouflageBlend = RGB(3, 15, 2),
    },

    [BATTLE_ENVIRONMENT_DARK_GRASS] =
    {
        .name = _("Dark Grass"),
        GRASS_ENVIRONMENT_DEFAULTS,
        .palette = gBattleEnvironmentPalette_TallGrassDark,
        .camouflageBlend = RGB(0, 13, 4),
    },

    [BATTLE_ENVIRONMENT_ASH_GRASS] =
    {
        .name = _("Ash Grass"),
        GRASS_ENVIRONMENT_DEFAULTS,
        .palette = gBattleEnvironmentPalette_TallGrassAsh,
        .camouflageBlend = RGB(5, 15, 5),
    },

    [BATTLE_ENVIRONMENT_CRYSTAL_GRASS] =
    {
        .name = _("Crystal Grass"),
        GRASS_ENVIRONMENT_DEFAULTS,
        .palette = gBattleEnvironmentPalette_TallGrassCrystal,
        .camouflageBlend = RGB(0, 15, 4),
    },

    [BATTLE_ENVIRONMENT_GYM_1] =
    {
        ENVIRONMENT_GRAPHICS(BugGym, BugGym, BugGym, BattleIntroSlide1),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_PoisonSting, MOVE_EFFECT_POISON),
        .name = _("Bug Gym"),
        .naturePower = MOVE_BUG_BITE,
        .camouflageType = TYPE_BUG, .camouflageBlend = RGB(18, 24, 6),

    },

    [BATTLE_ENVIRONMENT_GYM_2] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, ElectricGym, BattleIntroSlide3),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Thunderbolt, MOVE_EFFECT_PARALYSIS),
        .name = _("Electric Gym"),
        .naturePower = MOVE_SPARK,
        .camouflageType = TYPE_ELECTRIC, .camouflageBlend = RGB(30, 26, 7),
    },

    [BATTLE_ENVIRONMENT_GYM_3] =
    {
        ENVIRONMENT_GRAPHICS(GroundGym, GroundGym, GroundGym, BattleIntroSlide1),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Earthquake, MOVE_EFFECT_ACC_MINUS_1),
        .name = _("Ground Gym"),
        .naturePower = MOVE_EARTH_POWER,
        .camouflageType = TYPE_GROUND, .camouflageBlend = RGB(25, 23, 18),
    },

    [BATTLE_ENVIRONMENT_GYM_4] =
    {
        ENVIRONMENT_GRAPHICS(Building, Stadium, FightingGym, BattleIntroSlide3),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_BrickBreak, MOVE_EFFECT_BREAK_SCREEN),
        .name = _("Fighting Gym"),
        .naturePower = MOVE_AURA_SPHERE,
        .camouflageType = TYPE_FIGHTING, .camouflageBlend = RGB(26, 8, 14),
    },

    [BATTLE_ENVIRONMENT_GYM_5] =
    {
        ENVIRONMENT_GRAPHICS(Building, GhostGym, GhostGym, BattleIntroSlide3),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_ShadowClaw, MOVE_EFFECT_SPITE),
        .name = _("Ghost Gym"),
        .naturePower = MOVE_SHADOW_BALL,
        .camouflageType = TYPE_GHOST, .camouflageBlend = RGB(12, 10, 16),
    },

    [BATTLE_ENVIRONMENT_GYM_6] =
    {
        ENVIRONMENT_GRAPHICS(Building, FrostfireGym, FrostfireGym, BattleIntroSlide3),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_Incinerate, MOVE_EFFECT_BURN),
        .name = _("Frostfire Gym"),
        .naturePower = MOVE_LAVA_PLUME,
        .camouflageType = TYPE_FIRE, .camouflageBlend = RGB(31, 20, 11),
    },

    [BATTLE_ENVIRONMENT_GROTTO] =
    {
        ENVIRONMENT_GRAPHICS(LongGrass, Grotto, Grotto, BattleIntroSlide1),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_NeedleArm, MOVE_EFFECT_SLEEP),
        .name = _("Grotto"),
        .naturePower = MOVE_ENERGY_BALL,
        .camouflageType = TYPE_GRASS, .camouflageBlend = RGB(0, 15, 2),
    },

    [BATTLE_ENVIRONMENT_ADAMANTTOWER] =
    {
        ENVIRONMENT_GRAPHICS(Building, AdamantTower, AdamantTower, BattleIntroSlide3),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_BrickBreak, MOVE_EFFECT_BREAK_SCREEN),
        .name = _("Adamant Tower"),
        .naturePower = MOVE_POWER_UP_PUNCH,
        .camouflageType = TYPE_FIGHTING, .camouflageBlend = RGB(26, 8, 14),
    },

    [BATTLE_ENVIRONMENT_UNDERGROUNDRUINS] =
    {
        ENVIRONMENT_GRAPHICS(Sand, Cave, Ruins, CAVE_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_RockTomb, MOVE_EFFECT_LOWER_SPEED_SIDE),
        .name = _("Ruins"),
        .naturePower = MOVE_SAND_TOMB,
        .camouflageType = CAVE_CAMOUFLAGE_TYPE, .camouflageBlend = CAVE_CAMOUFLAGE_BLEND,
    },
    [BATTLE_ENVIRONMENT_SERPENTCAVE] =
    {
        ENVIRONMENT_GRAPHICS(Cave, Cave, SerpentCave, CAVE_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_DragonBreath, MOVE_EFFECT_PARALYSIS),
        .name = _("Serpent Cave"),
        .naturePower = MOVE_DRAGON_PULSE,
        .camouflageType = CAVE_CAMOUFLAGE_TYPE, .camouflageBlend = CAVE_CAMOUFLAGE_BLEND,
    },

    [BATTLE_ENVIRONMENT_WINDPLUME_CAVE] =
    {
        ENVIRONMENT_GRAPHICS(Cave, Cave, WindplumeCave, CAVE_BATTLE_INTRO_SLIDE),
        SECRET_POWER_ENVIRONMENT(gBattleAnimMove_ThunderWave, MOVE_EFFECT_PARALYSIS),
        .name = _("Windplume Peak"),
        .naturePower = MOVE_THUNDER,
        .camouflageType = CAVE_CAMOUFLAGE_TYPE, .camouflageBlend = CAVE_CAMOUFLAGE_BLEND,
    },
};

static const struct {
    u8 mapScene;
    u8 battleEnvironment;
} sMapBattleSceneMapping[] = {
    {MAP_BATTLE_SCENE_GYM,      BATTLE_ENVIRONMENT_GYM},
    {MAP_BATTLE_SCENE_MAGMA,    BATTLE_ENVIRONMENT_MAGMA},
    {MAP_BATTLE_SCENE_AQUA,     BATTLE_ENVIRONMENT_AQUA},
    {MAP_BATTLE_SCENE_SIDNEY,   BATTLE_ENVIRONMENT_SIDNEY},
    {MAP_BATTLE_SCENE_PHOEBE,   BATTLE_ENVIRONMENT_PHOEBE},
    {MAP_BATTLE_SCENE_GLACIA,   BATTLE_ENVIRONMENT_GLACIA},
    {MAP_BATTLE_SCENE_DRAKE,    BATTLE_ENVIRONMENT_DRAKE},
    {MAP_BATTLE_SCENE_FRONTIER, BATTLE_ENVIRONMENT_FRONTIER},
    {MAP_BATTLE_SCENE_GYM_1,    BATTLE_ENVIRONMENT_GYM_1},
    {MAP_BATTLE_SCENE_GYM_2,    BATTLE_ENVIRONMENT_GYM_2},
    {MAP_BATTLE_SCENE_GYM_3,    BATTLE_ENVIRONMENT_GYM_3},
    {MAP_BATTLE_SCENE_GYM_4,    BATTLE_ENVIRONMENT_GYM_4},
    {MAP_BATTLE_SCENE_GYM_5,    BATTLE_ENVIRONMENT_GYM_5},
    {MAP_BATTLE_SCENE_GYM_6,    BATTLE_ENVIRONMENT_GYM_6},
    {MAP_BATTLE_SCENE_GYM_7,    BATTLE_ENVIRONMENT_GYM_7},
    {MAP_BATTLE_SCENE_GYM_8,    BATTLE_ENVIRONMENT_GYM_8},
};
