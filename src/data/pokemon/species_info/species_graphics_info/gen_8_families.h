#ifdef __INTELLISENSE__
const struct SpeciesGraphicsInfo gSpeciesGraphicsInfoGen8[] =
{
#endif

#if P_FAMILY_GROOKEY
    [SPECIES_GROOKEY] =
    {
        .frontPic = gMonFrontPic_Grookey,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Grookey,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Grookey,
    #endif
        .palette = gMonPalette_Grookey,
        .shinyPalette = gMonShinyPalette_Grookey,
        .iconSprite = gMonIcon_Grookey,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Grookey)
        OVERWORLD(
            sPicTable_Grookey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grookey,
            gShinyOverworldPalette_Grookey
        )
    },

    [SPECIES_THWACKEY] =
    {
        .frontPic = gMonFrontPic_Thwackey,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Thwackey,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Grookey,
    #endif
        .palette = gMonPalette_Thwackey,
        .shinyPalette = gMonShinyPalette_Thwackey,
        .iconSprite = gMonIcon_Thwackey,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(5, 6, SHADOW_SIZE_M)
        FOOTPRINT(Thwackey)
        OVERWORLD(
            sPicTable_Thwackey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Thwackey,
            gShinyOverworldPalette_Thwackey
        )
    },

    [SPECIES_RILLABOOM] =
    {
        .frontPic = gMonFrontPic_Rillaboom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Rillaboom,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Grookey,
    #endif
        .palette = gMonPalette_Rillaboom,
        .shinyPalette = gMonShinyPalette_Rillaboom,
        .iconSprite = gMonIcon_Rillaboom,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 10, SHADOW_SIZE_L)
        FOOTPRINT(Rillaboom)
        OVERWORLD(
            sPicTable_Rillaboom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rillaboom,
            gShinyOverworldPalette_Rillaboom
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_RILLABOOM_GMAX] =
    {
        .frontPic = gMonFrontPic_RillaboomGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RillaboomGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Grookey,
    #endif
        .palette = gMonPalette_RillaboomGmax,
        .shinyPalette = gMonShinyPalette_RillaboomGmax,
        .iconSprite = gMonIcon_RillaboomGmax,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Rillaboom)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GROOKEY

#if P_FAMILY_SCORBUNNY
    [SPECIES_SCORBUNNY] =
    {
        .frontPic = gMonFrontPic_Scorbunny,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 48),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Scorbunny,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Scorbunny,
    #endif
        .palette = gMonPalette_Scorbunny,
        .shinyPalette = gMonShinyPalette_Scorbunny,
        .iconSprite = gMonIcon_Scorbunny,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Scorbunny)
        OVERWORLD(
            sPicTable_Scorbunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Scorbunny,
            gShinyOverworldPalette_Scorbunny
        )
    },

    [SPECIES_RABOOT] =
    {
        .frontPic = gMonFrontPic_Raboot,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Raboot,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Scorbunny,
    #endif
        .palette = gMonPalette_Raboot,
        .shinyPalette = gMonShinyPalette_Raboot,
        .iconSprite = gMonIcon_Raboot,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-4, 5, SHADOW_SIZE_S)
        FOOTPRINT(Raboot)
        OVERWORLD(
            sPicTable_Raboot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Raboot,
            gShinyOverworldPalette_Raboot
        )
    },

    [SPECIES_CINDERACE] =
    {
        .frontPic = gMonFrontPic_Cinderace,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 42),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_CONCAVE_ARC_SMALL,
        .backPic = gMonBackPic_Cinderace,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Scorbunny,
    #endif
        .palette = gMonPalette_Cinderace,
        .shinyPalette = gMonShinyPalette_Cinderace,
        .iconSprite = gMonIcon_Cinderace,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cinderace)
        OVERWORLD(
            sPicTable_Cinderace,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cinderace,
            gShinyOverworldPalette_Cinderace
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CINDERACE_GMAX] =
    {
        .frontPic = gMonFrontPic_CinderaceGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CinderaceGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Scorbunny,
    #endif
        .palette = gMonPalette_CinderaceGmax,
        .shinyPalette = gMonShinyPalette_CinderaceGmax,
        .iconSprite = gMonIcon_CinderaceGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Cinderace)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SCORBUNNY

#if P_FAMILY_SOBBLE
    [SPECIES_SOBBLE] =
    {
        .frontPic = gMonFrontPic_Sobble,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Sobble,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sobble,
    #endif
        .palette = gMonPalette_Sobble,
        .shinyPalette = gMonShinyPalette_Sobble,
        .iconSprite = gMonIcon_Sobble,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Sobble)
        OVERWORLD(
            sPicTable_Sobble,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sobble,
            gShinyOverworldPalette_Sobble
        )
    },

    [SPECIES_DRIZZILE] =
    {
        .frontPic = gMonFrontPic_Drizzile,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Drizzile,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sobble,
    #endif
        .palette = gMonPalette_Drizzile,
        .shinyPalette = gMonShinyPalette_Drizzile,
        .iconSprite = gMonIcon_Drizzile,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 5, SHADOW_SIZE_M)
        FOOTPRINT(Drizzile)
        OVERWORLD(
            sPicTable_Drizzile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Drizzile,
            gShinyOverworldPalette_Drizzile
        )
    },

    [SPECIES_INTELEON] =
    {
        .frontPic = gMonFrontPic_Inteleon,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Inteleon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sobble,
    #endif
        .palette = gMonPalette_Inteleon,
        .shinyPalette = gMonShinyPalette_Inteleon,
        .iconSprite = gMonIcon_Inteleon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_S)
        FOOTPRINT(Inteleon)
        OVERWORLD(
            sPicTable_Inteleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Inteleon,
            gShinyOverworldPalette_Inteleon
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_INTELEON_GMAX] =
    {
        .frontPic = gMonFrontPic_InteleonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_InteleonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sobble,
    #endif
        .palette = gMonPalette_InteleonGmax,
        .shinyPalette = gMonShinyPalette_InteleonGmax,
        .iconSprite = gMonIcon_InteleonGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Inteleon)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SOBBLE

#if P_FAMILY_SKWOVET
    [SPECIES_SKWOVET] =
    {
        .frontPic = gMonFrontPic_Skwovet,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Skwovet,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Skwovet,
    #endif
        .palette = gMonPalette_Skwovet,
        .shinyPalette = gMonShinyPalette_Skwovet,
        .iconSprite = gMonIcon_Skwovet,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-7, 5, SHADOW_SIZE_S)
        FOOTPRINT(Skwovet)
        OVERWORLD(
            sPicTable_Skwovet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skwovet,
            gShinyOverworldPalette_Skwovet
        )
    },

    [SPECIES_GREEDENT] =
    {
        .frontPic = gMonFrontPic_Greedent,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Greedent,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Skwovet,
    #endif
        .palette = gMonPalette_Greedent,
        .shinyPalette = gMonShinyPalette_Greedent,
        .iconSprite = gMonIcon_Greedent,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-11, 10, SHADOW_SIZE_M)
        FOOTPRINT(Greedent)
        OVERWORLD(
            sPicTable_Greedent,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Greedent,
            gShinyOverworldPalette_Greedent
        )
    },
#endif //P_FAMILY_SKWOVET

#if P_FAMILY_ROOKIDEE
    [SPECIES_ROOKIDEE] =
    {
        .frontPic = gMonFrontPic_Rookidee,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Rookidee,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Rookidee,
    #endif
        .palette = gMonPalette_Rookidee,
        .shinyPalette = gMonShinyPalette_Rookidee,
        .iconSprite = gMonIcon_Rookidee,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Rookidee)
        OVERWORLD(
            sPicTable_Rookidee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rookidee,
            gShinyOverworldPalette_Rookidee
        )
    },

    [SPECIES_CORVISQUIRE] =
    {
        .frontPic = gMonFrontPic_Corvisquire,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Corvisquire,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Rookidee,
    #endif
        .palette = gMonPalette_Corvisquire,
        .shinyPalette = gMonShinyPalette_Corvisquire,
        .iconSprite = gMonIcon_Corvisquire,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 16, SHADOW_SIZE_S)
        FOOTPRINT(Corvisquire)
        OVERWORLD(
            sPicTable_Corvisquire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Corvisquire,
            gShinyOverworldPalette_Corvisquire
        )
    },

    [SPECIES_CORVIKNIGHT] =
    {
        .frontPic = gMonFrontPic_Corviknight,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_STRETCH_FAR_SLOW,
        .backPic = gMonBackPic_Corviknight,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Rookidee,
    #endif
        .palette = gMonPalette_Corviknight,
        .shinyPalette = gMonShinyPalette_Corviknight,
        .iconSprite = gMonIcon_Corviknight,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Corviknight)
        OVERWORLD(
            sPicTable_Corviknight,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Corviknight,
            gShinyOverworldPalette_Corviknight
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CORVIKNIGHT_GMAX] =
    {
        .frontPic = gMonFrontPic_CorviknightGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CorviknightGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Rookidee,
    #endif
        .palette = gMonPalette_CorviknightGmax,
        .shinyPalette = gMonShinyPalette_CorviknightGmax,
        .iconSprite = gMonIcon_CorviknightGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Corviknight)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_BLIPBUG
    [SPECIES_BLIPBUG] =
    {
        .frontPic = gMonFrontPic_Blipbug,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Blipbug,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Blipbug,
    #endif
        .palette = gMonPalette_Blipbug,
        .shinyPalette = gMonShinyPalette_Blipbug,
        .iconSprite = gMonIcon_Blipbug,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Blipbug)
        OVERWORLD(
            sPicTable_Blipbug,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blipbug,
            gShinyOverworldPalette_Blipbug
        )
    },

    [SPECIES_DOTTLER] =
    {
        .frontPic = gMonFrontPic_Dottler,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH_BOTH_ENDS_SLOW,
        .backPic = gMonBackPic_Dottler,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Blipbug,
    #endif
        .palette = gMonPalette_Dottler,
        .shinyPalette = gMonShinyPalette_Dottler,
        .iconSprite = gMonIcon_Dottler,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 0, SHADOW_SIZE_M)
        FOOTPRINT(Dottler)
        OVERWORLD(
            sPicTable_Dottler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dottler,
            gShinyOverworldPalette_Dottler
        )
    },

    [SPECIES_ORBEETLE] =
    {
        .frontPic = gMonFrontPic_Orbeetle,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 15,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Orbeetle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Blipbug,
    #endif
        .palette = gMonPalette_Orbeetle,
        .shinyPalette = gMonShinyPalette_Orbeetle,
        .iconSprite = gMonIcon_Orbeetle,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_M)
        FOOTPRINT(Orbeetle)
        OVERWORLD(
            sPicTable_Orbeetle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Orbeetle,
            gShinyOverworldPalette_Orbeetle
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_ORBEETLE_GMAX] =
    {
        .frontPic = gMonFrontPic_OrbeetleGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OrbeetleGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Blipbug,
    #endif
        .palette = gMonPalette_OrbeetleGmax,
        .shinyPalette = gMonShinyPalette_OrbeetleGmax,
        .iconSprite = gMonIcon_OrbeetleGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Orbeetle)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BLIPBUG

#if P_FAMILY_NICKIT
    [SPECIES_NICKIT] =
    {
        .frontPic = gMonFrontPic_Nickit,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nickit,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Nickit,
    #endif
        .palette = gMonPalette_Nickit,
        .shinyPalette = gMonShinyPalette_Nickit,
        .iconSprite = gMonIcon_Nickit,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Nickit)
        OVERWORLD(
            sPicTable_Nickit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nickit,
            gShinyOverworldPalette_Nickit
        )
    },

    [SPECIES_THIEVUL] =
    {
        .frontPic = gMonFrontPic_Thievul,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Thievul,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Nickit,
    #endif
        .palette = gMonPalette_Thievul,
        .shinyPalette = gMonShinyPalette_Thievul,
        .iconSprite = gMonIcon_Thievul,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-9, 7, SHADOW_SIZE_M)
        FOOTPRINT(Thievul)
        OVERWORLD(
            sPicTable_Thievul,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Thievul,
            gShinyOverworldPalette_Thievul
        )
    },
#endif //P_FAMILY_NICKIT

#if P_FAMILY_GOSSIFLEUR
    [SPECIES_GOSSIFLEUR] =
    {
        .frontPic = gMonFrontPic_Gossifleur,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gossifleur,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Gossifleur,
    #endif
        .palette = gMonPalette_Gossifleur,
        .shinyPalette = gMonShinyPalette_Gossifleur,
        .iconSprite = gMonIcon_Gossifleur,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Gossifleur)
        OVERWORLD(
            sPicTable_Gossifleur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gossifleur,
            gShinyOverworldPalette_Gossifleur
        )
    },

    [SPECIES_ELDEGOSS] =
    {
        .frontPic = gMonFrontPic_Eldegoss,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Eldegoss,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Gossifleur,
    #endif
        .palette = gMonPalette_Eldegoss,
        .shinyPalette = gMonShinyPalette_Eldegoss,
        .iconSprite = gMonIcon_Eldegoss,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 8, SHADOW_SIZE_S)
        FOOTPRINT(Eldegoss)
        OVERWORLD(
            sPicTable_Eldegoss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Eldegoss,
            gShinyOverworldPalette_Eldegoss
        )
    },
#endif //P_FAMILY_GOSSIFLEUR

#if P_FAMILY_WOOLOO
    [SPECIES_WOOLOO] =
    {
        .frontPic = gMonFrontPic_Wooloo,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wooloo,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 18,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Wooloo,
    #endif
        .palette = gMonPalette_Wooloo,
        .shinyPalette = gMonShinyPalette_Wooloo,
        .iconSprite = gMonIcon_Wooloo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Wooloo)
        OVERWORLD(
            sPicTable_Wooloo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wooloo,
            gShinyOverworldPalette_Wooloo
        )
    },

    [SPECIES_DUBWOOL] =
    {
        .frontPic = gMonFrontPic_Dubwool,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dubwool,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Wooloo,
    #endif
        .palette = gMonPalette_Dubwool,
        .shinyPalette = gMonShinyPalette_Dubwool,
        .iconSprite = gMonIcon_Dubwool,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Dubwool)
        OVERWORLD(
            sPicTable_Dubwool,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dubwool,
            gShinyOverworldPalette_Dubwool
        )
    },
#endif //P_FAMILY_WOOLOO

#if P_FAMILY_CHEWTLE
    [SPECIES_CHEWTLE] =
    {
        .frontPic = gMonFrontPic_Chewtle,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Chewtle,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Chewtle,
    #endif
        .palette = gMonPalette_Chewtle,
        .shinyPalette = gMonShinyPalette_Chewtle,
        .iconSprite = gMonIcon_Chewtle,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Chewtle)
        OVERWORLD(
            sPicTable_Chewtle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chewtle,
            gShinyOverworldPalette_Chewtle
        )
    },

    [SPECIES_DREDNAW] =
    {
        .frontPic = gMonFrontPic_Drednaw,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Drednaw,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 18,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Chewtle,
    #endif
        .palette = gMonPalette_Drednaw,
        .shinyPalette = gMonShinyPalette_Drednaw,
        .iconSprite = gMonIcon_Drednaw,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 4, SHADOW_SIZE_L)
        FOOTPRINT(Drednaw)
        OVERWORLD(
            sPicTable_Drednaw,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Drednaw,
            gShinyOverworldPalette_Drednaw
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DREDNAW_GMAX] =
    {
        .frontPic = gMonFrontPic_DrednawGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DrednawGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Chewtle,
    #endif
        .palette = gMonPalette_DrednawGmax,
        .shinyPalette = gMonShinyPalette_DrednawGmax,
        .iconSprite = gMonIcon_DrednawGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Drednaw)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHEWTLE

#if P_FAMILY_YAMPER
    [SPECIES_YAMPER] =
    {
        .frontPic = gMonFrontPic_Yamper,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Yamper,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Yamper,
    #endif
        .palette = gMonPalette_Yamper,
        .shinyPalette = gMonShinyPalette_Yamper,
        .iconSprite = gMonIcon_Yamper,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Yamper)
        OVERWORLD(
            sPicTable_Yamper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yamper,
            gShinyOverworldPalette_Yamper
        )
    },

    [SPECIES_BOLTUND] =
    {
        .frontPic = gMonFrontPic_Boltund,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Boltund,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Yamper,
    #endif
        .palette = gMonPalette_Boltund,
        .shinyPalette = gMonShinyPalette_Boltund,
        .iconSprite = gMonIcon_Boltund,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Boltund)
        OVERWORLD(
            sPicTable_Boltund,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Boltund,
            gShinyOverworldPalette_Boltund
        )
    },
#endif //P_FAMILY_YAMPER

#if P_FAMILY_ROLYCOLY
    [SPECIES_ROLYCOLY] =
    {
        .frontPic = gMonFrontPic_Rolycoly,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Rolycoly,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Rolycoly,
    #endif
        .palette = gMonPalette_Rolycoly,
        .shinyPalette = gMonShinyPalette_Rolycoly,
        .iconSprite = gMonIcon_Rolycoly,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -3, SHADOW_SIZE_S)
        FOOTPRINT(Rolycoly)
        OVERWORLD(
            sPicTable_Rolycoly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rolycoly,
            gShinyOverworldPalette_Rolycoly
        )
    },

    [SPECIES_CARKOL] =
    {
        .frontPic = gMonFrontPic_Carkol,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Carkol,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Rolycoly,
    #endif
        .palette = gMonPalette_Carkol,
        .shinyPalette = gMonShinyPalette_Carkol,
        .iconSprite = gMonIcon_Carkol,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Carkol)
        OVERWORLD(
            sPicTable_Carkol,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Carkol,
            gShinyOverworldPalette_Carkol
        )
    },

    [SPECIES_COALOSSAL] =
    {
        .frontPic = gMonFrontPic_Coalossal,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GLOW_RED,
        .backPic = gMonBackPic_Coalossal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Rolycoly,
    #endif
        .palette = gMonPalette_Coalossal,
        .shinyPalette = gMonShinyPalette_Coalossal,
        .iconSprite = gMonIcon_Coalossal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Coalossal)
        OVERWORLD(
            sPicTable_Coalossal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Coalossal,
            gShinyOverworldPalette_Coalossal
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_COALOSSAL_GMAX] =
    {
        .frontPic = gMonFrontPic_CoalossalGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CoalossalGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Rolycoly,
    #endif
        .palette = gMonPalette_CoalossalGmax,
        .shinyPalette = gMonShinyPalette_CoalossalGmax,
        .iconSprite = gMonIcon_CoalossalGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Coalossal)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROLYCOLY

#if P_FAMILY_APPLIN
    [SPECIES_APPLIN] =
    {
        .frontPic = gMonFrontPic_Applin,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Applin,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Applin,
    #endif
        .palette = gMonPalette_Applin,
        .shinyPalette = gMonShinyPalette_Applin,
        .iconSprite = gMonIcon_Applin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Applin)
        OVERWORLD(
            sPicTable_Applin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Applin,
            gShinyOverworldPalette_Applin
        )
    },

    [SPECIES_FLAPPLE] =
    {
        .frontPic = gMonFrontPic_Flapple,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_CONCAVE_ARC_LARGE_TWICE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Flapple,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Applin,
    #endif
        .palette = gMonPalette_Flapple,
        .shinyPalette = gMonShinyPalette_Flapple,
        .iconSprite = gMonIcon_Flapple,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 11, SHADOW_SIZE_S)
        FOOTPRINT(Flapple)
        OVERWORLD(
            sPicTable_Flapple,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Flapple,
            gShinyOverworldPalette_Flapple
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_FLAPPLE_GMAX] =
    {
        .frontPic = gMonFrontPic_FlappleGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FlappleGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Applin,
    #endif
        .palette = gMonPalette_FlappleGmax,
        .shinyPalette = gMonShinyPalette_FlappleGmax,
        .iconSprite = gMonIcon_FlappleGmax,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Flapple)
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_APPLETUN] =
    {
        .frontPic = gMonFrontPic_Appletun,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Appletun,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Applin,
    #endif
        .palette = gMonPalette_Appletun,
        .shinyPalette = gMonShinyPalette_Appletun,
        .iconSprite = gMonIcon_Appletun,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(5, 6, SHADOW_SIZE_L)
        FOOTPRINT(Appletun)
        OVERWORLD(
            sPicTable_Appletun,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Appletun,
            gShinyOverworldPalette_Appletun
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_APPLETUN_GMAX] =
    {
        .frontPic = gMonFrontPic_AppletunGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AppletunGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Applin,
    #endif
        .palette = gMonPalette_AppletunGmax,
        .shinyPalette = gMonShinyPalette_AppletunGmax,
        .iconSprite = gMonIcon_AppletunGmax,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Appletun)
    },
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
    [SPECIES_DIPPLIN] =
    {
        .frontPic = gMonFrontPic_Dipplin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dipplin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Applin,
    #endif
        .palette = gMonPalette_Dipplin,
        .shinyPalette = gMonShinyPalette_Dipplin,
        .iconSprite = gMonIcon_Dipplin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-4, 8, SHADOW_SIZE_S)
        FOOTPRINT(Dipplin)
        OVERWORLD(
            sPicTable_Dipplin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dipplin,
            gShinyOverworldPalette_Dipplin
        )
    },

    [SPECIES_HYDRAPPLE] =
    {
        .frontPic = gMonFrontPic_Hydrapple,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hydrapple,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Applin,
    #endif
        .palette = gMonPalette_Hydrapple,
        .shinyPalette = gMonShinyPalette_Hydrapple,
        .iconSprite = gMonIcon_Hydrapple,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Hydrapple)
        OVERWORLD(
            sPicTable_Hydrapple,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hydrapple,
            gShinyOverworldPalette_Hydrapple
        )
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN

#if P_FAMILY_SILICOBRA
    [SPECIES_SILICOBRA] =
    {
        .frontPic = gMonFrontPic_Silicobra,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Silicobra,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Silicobra,
    #endif
        .palette = gMonPalette_Silicobra,
        .shinyPalette = gMonShinyPalette_Silicobra,
        .iconSprite = gMonIcon_Silicobra,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 1, SHADOW_SIZE_M)
        FOOTPRINT(Silicobra)
        OVERWORLD(
            sPicTable_Silicobra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Silicobra,
            gShinyOverworldPalette_Silicobra
        )
    },

    [SPECIES_SANDACONDA] =
    {
        .frontPic = gMonFrontPic_Sandaconda,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
        .backPic = gMonBackPic_Sandaconda,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Silicobra,
    #endif
        .palette = gMonPalette_Sandaconda,
        .shinyPalette = gMonShinyPalette_Sandaconda,
        .iconSprite = gMonIcon_Sandaconda,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Sandaconda)
        OVERWORLD(
            sPicTable_Sandaconda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sandaconda,
            gShinyOverworldPalette_Sandaconda
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SANDACONDA_GMAX] =
    {
        .frontPic = gMonFrontPic_SandacondaGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SandacondaGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Silicobra,
    #endif
        .palette = gMonPalette_SandacondaGmax,
        .shinyPalette = gMonShinyPalette_SandacondaGmax,
        .iconSprite = gMonIcon_SandacondaGmax,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Sandaconda)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SILICOBRA

#if P_FAMILY_CRAMORANT
    [SPECIES_CRAMORANT] =
    {
        .frontPic = gMonFrontPic_Cramorant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cramorant,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Cramorant,
    #endif
        .palette = gMonPalette_Cramorant,
        .shinyPalette = gMonShinyPalette_Cramorant,
        .iconSprite = gMonIcon_Cramorant,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cramorant)
        OVERWORLD(
            sPicTable_Cramorant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cramorant,
            gShinyOverworldPalette_Cramorant
        )
    },

    [SPECIES_CRAMORANT_GULPING] =
    {
        .frontPic = gMonFrontPic_CramorantGulping,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CramorantGulping,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Cramorant,
    #endif
        .palette = gMonPalette_CramorantGulping,
        .shinyPalette = gMonShinyPalette_CramorantGulping,
        .iconSprite = gMonIcon_CramorantGulping,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cramorant)
    },

    [SPECIES_CRAMORANT_GORGING] =
    {
        .frontPic = gMonFrontPic_CramorantGorging,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CramorantGorging,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Cramorant,
    #endif
        .palette = gMonPalette_CramorantGorging,
        .shinyPalette = gMonShinyPalette_CramorantGorging,
        .iconSprite = gMonIcon_CramorantGorging,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cramorant)
    },
#endif //P_FAMILY_CRAMORANT

#if P_FAMILY_ARROKUDA
    [SPECIES_ARROKUDA] =
    {
        .frontPic = gMonFrontPic_Arrokuda,
        .frontPicSize = MON_COORDS_SIZE(56, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arrokuda,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Arrokuda,
    #endif
        .palette = gMonPalette_Arrokuda,
        .shinyPalette = gMonShinyPalette_Arrokuda,
        .iconSprite = gMonIcon_Arrokuda,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -5, SHADOW_SIZE_S)
        FOOTPRINT(Arrokuda)
        OVERWORLD(
            sPicTable_Arrokuda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arrokuda,
            gShinyOverworldPalette_Arrokuda
        )
    },

    [SPECIES_BARRASKEWDA] =
    {
        .frontPic = gMonFrontPic_Barraskewda,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Barraskewda,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Arrokuda,
    #endif
        .palette = gMonPalette_Barraskewda,
        .shinyPalette = gMonShinyPalette_Barraskewda,
        .iconSprite = gMonIcon_Barraskewda,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 5, SHADOW_SIZE_M)
        FOOTPRINT(Barraskewda)
        OVERWORLD(
            sPicTable_Barraskewda,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Barraskewda,
            gShinyOverworldPalette_Barraskewda
        )
    },
#endif //P_FAMILY_ARROKUDA

#if P_FAMILY_TOXEL
    [SPECIES_TOXEL] =
    {
        .frontPic = gMonFrontPic_Toxel,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toxel,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Toxel,
    #endif
        .palette = gMonPalette_Toxel,
        .shinyPalette = gMonShinyPalette_Toxel,
        .iconSprite = gMonIcon_Toxel,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 1, SHADOW_SIZE_M)
        FOOTPRINT(Toxel)
        OVERWORLD(
            sPicTable_Toxel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Toxel,
            gShinyOverworldPalette_Toxel
        )
    },

    [SPECIES_TOXTRICITY_AMPED] =
    {
        .frontPic = gMonFrontPic_ToxtricityAmped,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToxtricityAmped,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Toxel,
    #endif
        .palette = gMonPalette_ToxtricityAmped,
        .shinyPalette = gMonShinyPalette_ToxtricityAmped,
        .iconSprite = gMonIcon_ToxtricityAmped,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 13, SHADOW_SIZE_M)
        FOOTPRINT(Toxtricity)
        OVERWORLD(
            sPicTable_ToxtricityAmped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ToxtricityAmped,
            gShinyOverworldPalette_ToxtricityAmped
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_TOXTRICITY_AMPED_GMAX] =
    {
        .frontPic = gMonFrontPic_ToxtricityGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToxtricityGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Toxel,
    #endif
        .palette = gMonPalette_ToxtricityGmax,
        .shinyPalette = gMonShinyPalette_ToxtricityGmax,
        .iconSprite = gMonIcon_ToxtricityGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Toxtricity)
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_TOXTRICITY_LOW_KEY] =
    {
        .frontPic = gMonFrontPic_ToxtricityLowKey,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToxtricityLowKey,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Toxel,
    #endif
        .palette = gMonPalette_ToxtricityLowKey,
        .shinyPalette = gMonShinyPalette_ToxtricityLowKey,
        .iconSprite = gMonIcon_ToxtricityLowKey,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Toxtricity)
        OVERWORLD(
            sPicTable_ToxtricityLowKey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ToxtricityLowKey,
            gShinyOverworldPalette_ToxtricityLowKey
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_TOXTRICITY_LOW_KEY_GMAX] =
    {
        .frontPic = gMonFrontPic_ToxtricityGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ToxtricityGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Toxel,
    #endif
        .palette = gMonPalette_ToxtricityGmax,
        .shinyPalette = gMonShinyPalette_ToxtricityGmax,
        .iconSprite = gMonIcon_ToxtricityGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Toxtricity)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOXEL

#if P_FAMILY_SIZZLIPEDE
    [SPECIES_SIZZLIPEDE] =
    {
        .frontPic = gMonFrontPic_Sizzlipede,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Sizzlipede,
        .backPicSize = MON_COORDS_SIZE(40, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sizzlipede,
    #endif
        .palette = gMonPalette_Sizzlipede,
        .shinyPalette = gMonShinyPalette_Sizzlipede,
        .iconSprite = gMonIcon_Sizzlipede,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(6, -4, SHADOW_SIZE_S)
        FOOTPRINT(Sizzlipede)
        OVERWORLD(
            sPicTable_Sizzlipede,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sizzlipede,
            gShinyOverworldPalette_Sizzlipede
        )
    },

    [SPECIES_CENTISKORCH] =
    {
        .frontPic = gMonFrontPic_Centiskorch,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Centiskorch,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sizzlipede,
    #endif
        .palette = gMonPalette_Centiskorch,
        .shinyPalette = gMonShinyPalette_Centiskorch,
        .iconSprite = gMonIcon_Centiskorch,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 7, SHADOW_SIZE_M)
        FOOTPRINT(Centiskorch)
        OVERWORLD(
            sPicTable_Centiskorch,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Centiskorch,
            gShinyOverworldPalette_Centiskorch
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CENTISKORCH_GMAX] =
    {
        .frontPic = gMonFrontPic_CentiskorchGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CentiskorchGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sizzlipede,
    #endif
        .palette = gMonPalette_CentiskorchGmax,
        .shinyPalette = gMonShinyPalette_CentiskorchGmax,
        .iconSprite = gMonIcon_CentiskorchGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 9, SHADOW_SIZE_L)
        FOOTPRINT(Centiskorch)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SIZZLIPEDE

#if P_FAMILY_CLOBBOPUS
    [SPECIES_CLOBBOPUS] =
    {
        .frontPic = gMonFrontPic_Clobbopus,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clobbopus,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Clobbopus,
    #endif
        .palette = gMonPalette_Clobbopus,
        .shinyPalette = gMonShinyPalette_Clobbopus,
        .iconSprite = gMonIcon_Clobbopus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Clobbopus)
        OVERWORLD(
            sPicTable_Clobbopus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Clobbopus,
            gShinyOverworldPalette_Clobbopus
        )
    },

    [SPECIES_GRAPPLOCT] =
    {
        .frontPic = gMonFrontPic_Grapploct,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Grapploct,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Clobbopus,
    #endif
        .palette = gMonPalette_Grapploct,
        .shinyPalette = gMonShinyPalette_Grapploct,
        .iconSprite = gMonIcon_Grapploct,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 9, SHADOW_SIZE_M)
        FOOTPRINT(Grapploct)
        OVERWORLD(
            sPicTable_Grapploct,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grapploct,
            gShinyOverworldPalette_Grapploct
        )
    },
#endif //P_FAMILY_CLOBBOPUS

#if P_FAMILY_SINISTEA
    [SPECIES_SINISTEA_PHONY] =
    {
        .frontPic = gMonFrontPic_Sinistea,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Sinistea,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sinistea,
    #endif
        .palette = gMonPalette_Sinistea,
        .shinyPalette = gMonShinyPalette_Sinistea,
        .iconSprite = gMonIcon_Sinistea,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Sinistea)
        OVERWORLD(
            sPicTable_Sinistea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sinistea,
            gShinyOverworldPalette_Sinistea
        )
    },

    [SPECIES_SINISTEA_ANTIQUE] =
    {
        .frontPic = gMonFrontPic_Sinistea,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Sinistea,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sinistea,
    #endif
        .palette = gMonPalette_Sinistea,
        .shinyPalette = gMonShinyPalette_Sinistea,
        .iconSprite = gMonIcon_Sinistea,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 4, SHADOW_SIZE_S)
        FOOTPRINT(Sinistea)
        OVERWORLD(
            sPicTable_Sinistea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sinistea,
            gShinyOverworldPalette_Sinistea
        )
    },

    [SPECIES_POLTEAGEIST_PHONY] =
    {
        .frontPic = gMonFrontPic_Polteageist,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Polteageist,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sinistea,
    #endif
        .palette = gMonPalette_Polteageist,
        .shinyPalette = gMonShinyPalette_Polteageist,
        .iconSprite = gMonIcon_Polteageist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Polteageist)
        OVERWORLD(
            sPicTable_Polteageist,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Polteageist,
            gShinyOverworldPalette_Polteageist
        )
    },

    [SPECIES_POLTEAGEIST_ANTIQUE] =
    {
        .frontPic = gMonFrontPic_Polteageist,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 11,
        .backPic = gMonBackPic_Polteageist,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Sinistea,
    #endif
        .palette = gMonPalette_Polteageist,
        .shinyPalette = gMonShinyPalette_Polteageist,
        .iconSprite = gMonIcon_Polteageist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Polteageist)
        OVERWORLD(
            sPicTable_Polteageist,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Polteageist,
            gShinyOverworldPalette_Polteageist
        )
    },
#endif //P_FAMILY_SINISTEA

#if P_FAMILY_HATENNA
    [SPECIES_HATENNA] =
    {
        .frontPic = gMonFrontPic_Hatenna,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hatenna,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Hatenna,
    #endif
        .palette = gMonPalette_Hatenna,
        .shinyPalette = gMonShinyPalette_Hatenna,
        .iconSprite = gMonIcon_Hatenna,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 1, SHADOW_SIZE_M)
        FOOTPRINT(Hatenna)
        OVERWORLD(
            sPicTable_Hatenna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hatenna,
            gShinyOverworldPalette_Hatenna
        )
    },

    [SPECIES_HATTREM] =
    {
        .frontPic = gMonFrontPic_Hattrem,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hattrem,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Hatenna,
    #endif
        .palette = gMonPalette_Hattrem,
        .shinyPalette = gMonShinyPalette_Hattrem,
        .iconSprite = gMonIcon_Hattrem,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Hattrem)
        OVERWORLD(
            sPicTable_Hattrem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hattrem,
            gShinyOverworldPalette_Hattrem
        )
    },

    [SPECIES_HATTERENE] =
    {
        .frontPic = gMonFrontPic_Hatterene,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Hatterene,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Hatenna,
    #endif
        .palette = gMonPalette_Hatterene,
        .shinyPalette = gMonShinyPalette_Hatterene,
        .iconSprite = gMonIcon_Hatterene,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 13, SHADOW_SIZE_S)
        FOOTPRINT(Hatterene)
        OVERWORLD(
            sPicTable_Hatterene,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hatterene,
            gShinyOverworldPalette_Hatterene
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_HATTERENE_GMAX] =
    {
        .frontPic = gMonFrontPic_HattereneGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HattereneGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Hatenna,
    #endif
        .palette = gMonPalette_HattereneGmax,
        .shinyPalette = gMonShinyPalette_HattereneGmax,
        .iconSprite = gMonIcon_HattereneGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Hatterene)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_HATENNA

#if P_FAMILY_IMPIDIMP
    [SPECIES_IMPIDIMP] =
    {
        .frontPic = gMonFrontPic_Impidimp,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Impidimp,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Impidimp,
    #endif
        .palette = gMonPalette_Impidimp,
        .shinyPalette = gMonShinyPalette_Impidimp,
        .iconSprite = gMonIcon_Impidimp,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Impidimp)
        OVERWORLD(
            sPicTable_Impidimp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Impidimp,
            gShinyOverworldPalette_Impidimp
        )
    },

    [SPECIES_MORGREM] =
    {
        .frontPic = gMonFrontPic_Morgrem,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Morgrem,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Impidimp,
    #endif
        .palette = gMonPalette_Morgrem,
        .shinyPalette = gMonShinyPalette_Morgrem,
        .iconSprite = gMonIcon_Morgrem,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Morgrem)
        OVERWORLD(
            sPicTable_Morgrem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Morgrem,
            gShinyOverworldPalette_Morgrem
        )
    },

    [SPECIES_GRIMMSNARL] =
    {
        .frontPic = gMonFrontPic_Grimmsnarl,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Grimmsnarl,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Impidimp,
    #endif
        .palette = gMonPalette_Grimmsnarl,
        .shinyPalette = gMonShinyPalette_Grimmsnarl,
        .iconSprite = gMonIcon_Grimmsnarl,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Grimmsnarl)
        OVERWORLD(
            sPicTable_Grimmsnarl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grimmsnarl,
            gShinyOverworldPalette_Grimmsnarl
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_GRIMMSNARL_GMAX] =
    {
        .frontPic = gMonFrontPic_GrimmsnarlGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GrimmsnarlGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Impidimp,
    #endif
        .palette = gMonPalette_GrimmsnarlGmax,
        .shinyPalette = gMonShinyPalette_GrimmsnarlGmax,
        .iconSprite = gMonIcon_GrimmsnarlGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Grimmsnarl)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_IMPIDIMP

#if P_FAMILY_MILCERY
    [SPECIES_MILCERY] =
    {
        .frontPic = gMonFrontPic_Milcery,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Milcery,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Milcery,
    #endif
        .palette = gMonPalette_Milcery,
        .shinyPalette = gMonShinyPalette_Milcery,
        .iconSprite = gMonIcon_Milcery,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Milcery)
        OVERWORLD(
            sPicTable_Milcery,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Milcery,
            gShinyOverworldPalette_Milcery
        )
    },

#if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
    #define ALCREMIE_EGG_COLOR .eggPalette = gEggPalette_Milcery,
#else
    #define ALCREMIE_EGG_COLOR
#endif

#define ALCREMIE_MISC_INFO_GRAPHICS(color)                                               \
        ALCREMIE_EGG_COLOR

#define ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(sweet, cream, color)                                      \
    {                                                                                           \
        ALCREMIE_MISC_INFO_GRAPHICS(color)                                                              \
        .frontPic = gMonFrontPic_Alcremie ##sweet,                                              \
        .frontPicSize = MON_COORDS_SIZE(40, 56),                                                \
        .frontPicYOffset = 7,                                                                   \
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,                                       \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                            \
        .backPic = gMonBackPic_Alcremie ##sweet,                                                \
        .backPicSize = MON_COORDS_SIZE(48, 56),                                                 \
        .backPicYOffset = 9,                                                                    \
        /*.backAnimId = BACK_ANIM_NONE,*/                                                       \
        .palette = gMonPalette_Alcremie ##sweet##cream,                                         \
        .shinyPalette = gMonShinyPalette_Alcremie ##sweet,                                      \
        .iconSprite = gMonIcon_AlcremieStrawberryVanillaCream, /*AlcremieStrawberry##cream##*/  \
        .iconPalIndex = 0,                                                                      \
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,                                                 \
        SHADOW(0, 5, SHADOW_SIZE_S)                                                             \
        FOOTPRINT(Alcremie)                                                                     \
        OVERWORLD(                                                                              \
            sPicTable_AlcremieStrawberry, /*Alcremie ##sweet*/                                  \
            SIZE_32x32,                                                                         \
            SHADOW_SIZE_M,                                                                      \
            TRACKS_FOOT,                                                                        \
            sAnimTable_Following,                                                               \
            gOverworldPalette_AlcremieStrawberryVanillaCream, /*Alcremie ##sweet##cream*/       \
            gShinyOverworldPalette_AlcremieStrawberryVanillaCream /*Alcremie ##sweet##cream*/   \
        )                                                                                       \
    }

    [SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM] = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM]    = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM]  = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM]    = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM]   = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM]  = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL]    = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL] = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL] = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Strawberry, RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_VANILLA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_BERRY_RUBY_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_BERRY_MATCHA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_BERRY_MINT_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_BERRY_LEMON_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_SALTED_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_BERRY_RUBY_SWIRL]         = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_CARAMEL_SWIRL]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_BERRY_RAINBOW_SWIRL]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Berry,      RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_VANILLA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_LOVE_RUBY_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_LOVE_MATCHA_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_LOVE_MINT_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_LOVE_LEMON_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_SALTED_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_LOVE_RUBY_SWIRL]          = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_CARAMEL_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_LOVE_RAINBOW_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Love,       RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_VANILLA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STAR_RUBY_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STAR_MATCHA_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STAR_MINT_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STAR_LEMON_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_SALTED_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STAR_RUBY_SWIRL]          = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_CARAMEL_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STAR_RAINBOW_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Star,       RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_CLOVER_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_CLOVER_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_CLOVER_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_CLOVER_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_CLOVER_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_CLOVER_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Clover,     RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_FLOWER_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_FLOWER_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_FLOWER_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_FLOWER_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_FLOWER_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_FLOWER_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Flower,     RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_RIBBON_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_RIBBON_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_RIBBON_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_RIBBON_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_RIBBON_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_RIBBON_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_GRAPHICS(Ribbon,     RainbowSwirl, BODY_COLOR_YELLOW),
#if P_GIGANTAMAX_FORMS
    [SPECIES_ALCREMIE_GMAX] =
    {
        ALCREMIE_MISC_INFO_GRAPHICS(BODY_COLOR_YELLOW)
        .frontPic = gMonFrontPic_AlcremieGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AlcremieGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_AlcremieGmax,
        .shinyPalette = gMonShinyPalette_AlcremieGmax,
        .iconSprite = gMonIcon_AlcremieGmax,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Alcremie)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MILCERY

#if P_FAMILY_FALINKS
    [SPECIES_FALINKS] =
    {
        .frontPic = gMonFrontPic_Falinks,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Falinks,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Falinks,
    #endif
        .palette = gMonPalette_Falinks,
        .shinyPalette = gMonShinyPalette_Falinks,
        .iconSprite = gMonIcon_Falinks,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 5, SHADOW_SIZE_S)
        FOOTPRINT(Falinks)
        OVERWORLD(
            sPicTable_Falinks,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Falinks,
            gShinyOverworldPalette_Falinks
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FALINKS_MEGA] =
    {
        .frontPic = gMonFrontPic_FalinksMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FalinksMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Falinks,
    #endif
        .palette = gMonPalette_FalinksMega,
        .shinyPalette = gMonShinyPalette_FalinksMega,
        .iconSprite = gMonIcon_FalinksMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Falinks)
        SHADOW(0, 12, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FALINKS

#if P_FAMILY_PINCURCHIN
    [SPECIES_PINCURCHIN] =
    {
        .frontPic = gMonFrontPic_Pincurchin,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),			
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE,
        .backPic = gMonBackPic_Pincurchin,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Pincurchin,
    #endif
        .palette = gMonPalette_Pincurchin,
        .shinyPalette = gMonShinyPalette_Pincurchin,
        .iconSprite = gMonIcon_Pincurchin,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -4, SHADOW_SIZE_S)
        FOOTPRINT(Pincurchin)
        OVERWORLD(
            sPicTable_Pincurchin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pincurchin,
            gShinyOverworldPalette_Pincurchin
        )
    },
#endif //P_FAMILY_PINCURCHIN

#if P_FAMILY_SNOM
    [SPECIES_SNOM] =
    {
        .frontPic = gMonFrontPic_Snom,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 20,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Snom,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Snom,
    #endif
        .palette = gMonPalette_Snom,
        .shinyPalette = gMonShinyPalette_Snom,
        .iconSprite = gMonIcon_Snom,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, -7, SHADOW_SIZE_S)
        FOOTPRINT(Snom)
        OVERWORLD(
            sPicTable_Snom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snom,
            gShinyOverworldPalette_Snom
        )
    },

    [SPECIES_FROSMOTH] =
    {
        .frontPic = gMonFrontPic_Frosmoth,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Frosmoth,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Snom,
    #endif
        .palette = gMonPalette_Frosmoth,
        .shinyPalette = gMonShinyPalette_Frosmoth,
        .iconSprite = gMonIcon_Frosmoth,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Frosmoth)
        OVERWORLD(
            sPicTable_Frosmoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frosmoth,
            gShinyOverworldPalette_Frosmoth
        )
    },
#endif //P_FAMILY_SNOM

#if P_FAMILY_STONJOURNER
    [SPECIES_STONJOURNER] =
    {
        .frontPic = gMonFrontPic_Stonjourner,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Stonjourner,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Stonjourner,
    #endif
        .palette = gMonPalette_Stonjourner,
        .shinyPalette = gMonShinyPalette_Stonjourner,
        .iconSprite = gMonIcon_Stonjourner,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_L)
        FOOTPRINT(Stonjourner)
        OVERWORLD(
            sPicTable_Stonjourner,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stonjourner,
            gShinyOverworldPalette_Stonjourner
        )
    },
#endif //P_FAMILY_STONJOURNER

#if P_FAMILY_EISCUE
    [SPECIES_EISCUE_ICE] =
    {
        .frontPic = gMonFrontPic_EiscueIce,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EiscueIce,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Eiscue,
    #endif
        .palette = gMonPalette_EiscueIce,
        .shinyPalette = gMonShinyPalette_EiscueIce,
        .iconSprite = gMonIcon_EiscueIce,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Eiscue)
        OVERWORLD(
            sPicTable_EiscueIce,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_EiscueIce,
            gShinyOverworldPalette_EiscueIce
        )
    },

    [SPECIES_EISCUE_NOICE] =
    {
        .frontPic = gMonFrontPic_EiscueNoice,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EiscueNoice,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Eiscue,
    #endif
        .palette = gMonPalette_EiscueNoice,
        .shinyPalette = gMonShinyPalette_EiscueNoice,
        .iconSprite = gMonIcon_EiscueNoice,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Eiscue)
    },
#endif //P_FAMILY_EISCUE

#if P_FAMILY_INDEEDEE
    [SPECIES_INDEEDEE_M] =
    {
        .frontPic = gMonFrontPic_IndeedeeM,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IndeedeeM,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Indeedee,
    #endif
        .palette = gMonPalette_IndeedeeM,
        .shinyPalette = gMonShinyPalette_IndeedeeM,
        .iconSprite = gMonIcon_IndeedeeM,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_S)
        FOOTPRINT(Indeedee)
        OVERWORLD(
            sPicTable_IndeedeeM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IndeedeeM,
            gShinyOverworldPalette_IndeedeeM
        )
    },

    [SPECIES_INDEEDEE_F] =
    {
        .frontPic = gMonFrontPic_IndeedeeF,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IndeedeeF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Indeedee,
    #endif
        .palette = gMonPalette_IndeedeeF,
        .shinyPalette = gMonShinyPalette_IndeedeeF,
        .iconSprite = gMonIcon_IndeedeeF,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_S)
        FOOTPRINT(Indeedee)
        OVERWORLD(
            sPicTable_IndeedeeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IndeedeeF,
            gShinyOverworldPalette_IndeedeeF
        )
    },
#endif //P_FAMILY_INDEEDEE

#if P_FAMILY_MORPEKO
    [SPECIES_MORPEKO_FULL_BELLY] =
    {
        .frontPic = gMonFrontPic_MorpekoFullBelly,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MorpekoFullBelly,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Morpeko,
    #endif
        .palette = gMonPalette_MorpekoFullBelly,
        .shinyPalette = gMonShinyPalette_MorpekoFullBelly,
        .iconSprite = gMonIcon_MorpekoFullBelly,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Morpeko)
        OVERWORLD(
            sPicTable_MorpekoFullBelly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MorpekoFullBelly,
            gShinyOverworldPalette_MorpekoFullBelly
        )
    },

    [SPECIES_MORPEKO_HANGRY] =
    {
        .frontPic = gMonFrontPic_MorpekoHangry,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MorpekoHangry,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Morpeko,
    #endif
        .palette = gMonPalette_MorpekoHangry,
        .shinyPalette = gMonShinyPalette_MorpekoHangry,
        .iconSprite = gMonIcon_MorpekoHangry,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Morpeko)
    },
#endif //P_FAMILY_MORPEKO

#if P_FAMILY_CUFANT
    [SPECIES_CUFANT] =
    {
        .frontPic = gMonFrontPic_Cufant,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cufant,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Cufant,
    #endif
        .palette = gMonPalette_Cufant,
        .shinyPalette = gMonShinyPalette_Cufant,
        .iconSprite = gMonIcon_Cufant,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 2, SHADOW_SIZE_M)
        FOOTPRINT(Cufant)
        OVERWORLD(
            sPicTable_Cufant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cufant,
            gShinyOverworldPalette_Cufant
        )
    },

    [SPECIES_COPPERAJAH] =
    {
        .frontPic = gMonFrontPic_Copperajah,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Copperajah,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Cufant,
    #endif
        .palette = gMonPalette_Copperajah,
        .shinyPalette = gMonShinyPalette_Copperajah,
        .iconSprite = gMonIcon_Copperajah,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 7, SHADOW_SIZE_L)
        FOOTPRINT(Copperajah)
        OVERWORLD(
            sPicTable_Copperajah,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Copperajah,
            gShinyOverworldPalette_Copperajah
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_COPPERAJAH_GMAX] =
    {
        .frontPic = gMonFrontPic_CopperajahGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CopperajahGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Cufant,
    #endif
        .palette = gMonPalette_CopperajahGmax,
        .shinyPalette = gMonShinyPalette_CopperajahGmax,
        .iconSprite = gMonIcon_CopperajahGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_L)
        FOOTPRINT(Copperajah)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CUFANT

#if P_FAMILY_DRACOZOLT
    [SPECIES_DRACOZOLT] =
    {
        .frontPic = gMonFrontPic_Dracozolt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dracozolt,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Dracozolt,
    #endif
        .palette = gMonPalette_Dracozolt,
        .shinyPalette = gMonShinyPalette_Dracozolt,
        .iconSprite = gMonIcon_Dracozolt,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 10, SHADOW_SIZE_L)
        FOOTPRINT(Dracozolt)
        OVERWORLD(
            sPicTable_Dracozolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dracozolt,
            gShinyOverworldPalette_Dracozolt
        )
    },
#endif //P_FAMILY_DRACOZOLT

#if P_FAMILY_ARCTOZOLT
    [SPECIES_ARCTOZOLT] =
    {
        .frontPic = gMonFrontPic_Arctozolt,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arctozolt,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Arctozolt,
    #endif
        .palette = gMonPalette_Arctozolt,
        .shinyPalette = gMonShinyPalette_Arctozolt,
        .iconSprite = gMonIcon_Arctozolt,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Arctozolt)
        OVERWORLD(
            sPicTable_Arctozolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arctozolt,
            gShinyOverworldPalette_Arctozolt
        )
    },
#endif //P_FAMILY_ARCTOZOLT

#if P_FAMILY_DRACOVISH
    [SPECIES_DRACOVISH] =
    {
        .frontPic = gMonFrontPic_Dracovish,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dracovish,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Dracovish,
    #endif
        .palette = gMonPalette_Dracovish,
        .shinyPalette = gMonShinyPalette_Dracovish,
        .iconSprite = gMonIcon_Dracovish,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Dracovish)
        OVERWORLD(
            sPicTable_Dracovish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dracovish,
            gShinyOverworldPalette_Dracovish
        )
    },
#endif //P_FAMILY_DRACOVISH

#if P_FAMILY_ARCTOVISH
    [SPECIES_ARCTOVISH] =
    {
        .frontPic = gMonFrontPic_Arctovish,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arctovish,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Arctovish,
    #endif
        .palette = gMonPalette_Arctovish,
        .shinyPalette = gMonShinyPalette_Arctovish,
        .iconSprite = gMonIcon_Arctovish,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_L)
        FOOTPRINT(Arctovish)
        OVERWORLD(
            sPicTable_Arctovish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arctovish,
            gShinyOverworldPalette_Arctovish
        )
    },
#endif //P_FAMILY_ARCTOVISH

#if P_FAMILY_DURALUDON
    [SPECIES_DURALUDON] =
    {
        .frontPic = gMonFrontPic_Duraludon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(0, 2),
        ),
        .frontAnimId = ANIM_SHAKE_FLASH_YELLOW_FAST,
        .backPic = gMonBackPic_Duraludon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Duraludon,
    #endif
        .palette = gMonPalette_Duraludon,
        .shinyPalette = gMonShinyPalette_Duraludon,
        .iconSprite = gMonIcon_Duraludon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Duraludon)
        OVERWORLD(
            sPicTable_Duraludon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Duraludon,
            gShinyOverworldPalette_Duraludon
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DURALUDON_GMAX] =
    {
        .frontPic = gMonFrontPic_DuraludonGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DuraludonGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Duraludon,
    #endif
        .palette = gMonPalette_DuraludonGmax,
        .shinyPalette = gMonShinyPalette_DuraludonGmax,
        .iconSprite = gMonIcon_DuraludonGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Duraludon)
    },
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
    [SPECIES_ARCHALUDON] =
    {
        .frontPic = gMonFrontPic_Archaludon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Archaludon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Duraludon,
    #endif
        .palette = gMonPalette_Archaludon,
        .shinyPalette = gMonShinyPalette_Archaludon,
        .iconSprite = gMonIcon_Archaludon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Archaludon)
        OVERWORLD(
            sPicTable_Archaludon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Archaludon,
            gShinyOverworldPalette_Archaludon
        )
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DURALUDON

#if P_FAMILY_DREEPY
    [SPECIES_DREEPY] =
    {
        .frontPic = gMonFrontPic_Dreepy,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Dreepy,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Dreepy,
    #endif
        .palette = gMonPalette_Dreepy,
        .shinyPalette = gMonShinyPalette_Dreepy,
        .iconSprite = gMonIcon_Dreepy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Dreepy)
        OVERWORLD(
            sPicTable_Dreepy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dreepy,
            gShinyOverworldPalette_Dreepy
        )
    },

    [SPECIES_DRAKLOAK] =
    {
        .frontPic = gMonFrontPic_Drakloak,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Drakloak,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Dreepy,
    #endif
        .palette = gMonPalette_Drakloak,
        .shinyPalette = gMonShinyPalette_Drakloak,
        .iconSprite = gMonIcon_Drakloak,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_M)
        FOOTPRINT(Drakloak)
        OVERWORLD(
            sPicTable_Drakloak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Drakloak,
            gShinyOverworldPalette_Drakloak
        )
    },

    [SPECIES_DRAGAPULT] =
    {
        .frontPic = gMonFrontPic_Dragapult,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Dragapult,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Dreepy,
    #endif
        .palette = gMonPalette_Dragapult,
        .shinyPalette = gMonShinyPalette_Dragapult,
        .iconSprite = gMonIcon_Dragapult,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Dragapult)
        OVERWORLD(
            sPicTable_Dragapult,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dragapult,
            gShinyOverworldPalette_Dragapult
        )
    },
#endif //P_FAMILY_DREEPY

#if P_FAMILY_ZACIAN
    [SPECIES_ZACIAN_HERO] =
    {
        .frontPic = gMonFrontPic_ZacianHero,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZacianHero,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Zacian,
    #endif
        .palette = gMonPalette_ZacianHero,
        .shinyPalette = gMonShinyPalette_ZacianHero,
        .iconSprite = gMonIcon_ZacianHero,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_L)
        FOOTPRINT(Zacian)
        OVERWORLD(
            sPicTable_ZacianHero,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZacianHero,
            gShinyOverworldPalette_ZacianHero
        )
    },

    [SPECIES_ZACIAN_CROWNED] =
    {
        .frontPic = gMonFrontPic_ZacianCrowned,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZacianCrowned,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Zacian,
    #endif
        .palette = gMonPalette_ZacianCrowned,
        .shinyPalette = gMonShinyPalette_ZacianCrowned,
        .iconSprite = gMonIcon_ZacianCrowned,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Zacian)
        OVERWORLD(
            sPicTable_ZacianCrowned,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZacianCrowned,
            gShinyOverworldPalette_ZacianCrowned
        )
    },
#endif //P_FAMILY_ZACIAN

#if P_FAMILY_ZAMAZENTA
    [SPECIES_ZAMAZENTA_HERO] =
    {
        .frontPic = gMonFrontPic_ZamazentaHero,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZamazentaHero,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Zamazenta,
    #endif
        .palette = gMonPalette_ZamazentaHero,
        .shinyPalette = gMonShinyPalette_ZamazentaHero,
        .iconSprite = gMonIcon_ZamazentaHero,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Zamazenta)
        OVERWORLD(
            sPicTable_ZamazentaHero,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZamazentaHero,
            gShinyOverworldPalette_ZamazentaHero
        )
    },

    [SPECIES_ZAMAZENTA_CROWNED] =
    {
        .frontPic = gMonFrontPic_ZamazentaCrowned,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZamazentaCrowned,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Zamazenta,
    #endif
        .palette = gMonPalette_ZamazentaCrowned,
        .shinyPalette = gMonShinyPalette_ZamazentaCrowned,
        .iconSprite = gMonIcon_ZamazentaCrowned,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_L)
        FOOTPRINT(Zamazenta)
        OVERWORLD(
            sPicTable_ZamazentaCrowned,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZamazentaCrowned,
            gShinyOverworldPalette_ZamazentaCrowned
        )
    },
#endif //P_FAMILY_ZAMAZENTA

#if P_FAMILY_ETERNATUS
    [SPECIES_ETERNATUS] =
    {
        .frontPic = gMonFrontPic_Eternatus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Eternatus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Eternatus,
    #endif
        .palette = gMonPalette_Eternatus,
        .shinyPalette = gMonShinyPalette_Eternatus,
        .iconSprite = gMonIcon_Eternatus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Eternatus)
        OVERWORLD(
            sPicTable_Eternatus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Eternatus,
            gShinyOverworldPalette_Eternatus
        )
    },

    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        .frontPic = gMonFrontPic_EternatusEternamax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_EternatusEternamax,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Eternatus,
    #endif
        .palette = gMonPalette_EternatusEternamax,
        .shinyPalette = gMonShinyPalette_EternatusEternamax,
        .iconSprite = gMonIcon_EternatusEternamax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 20, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Eternatus)
    },
#endif //P_FAMILY_ETERNATUS

#if P_FAMILY_KUBFU
    [SPECIES_KUBFU] =
    {
        .frontPic = gMonFrontPic_Kubfu,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kubfu,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Kubfu,
    #endif
        .palette = gMonPalette_Kubfu,
        .shinyPalette = gMonShinyPalette_Kubfu,
        .iconSprite = gMonIcon_Kubfu,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Kubfu)
        OVERWORLD(
            sPicTable_Kubfu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kubfu,
            gShinyOverworldPalette_Kubfu
        )
    },

    [SPECIES_URSHIFU_SINGLE_STRIKE] =
    {
        .frontPic = gMonFrontPic_UrshifuSingleStrike,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrshifuSingleStrike,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Kubfu,
    #endif
        .palette = gMonPalette_UrshifuSingleStrike,
        .shinyPalette = gMonShinyPalette_UrshifuSingleStrike,
        .iconSprite = gMonIcon_Urshifu,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Urshifu)
        OVERWORLD(
            sPicTable_Urshifu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Urshifu,
            gShinyOverworldPalette_Urshifu
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_URSHIFU_SINGLE_STRIKE_GMAX] =
    {
        .frontPic = gMonFrontPic_UrshifuSingleStrikeGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrshifuSingleStrikeGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Kubfu,
    #endif
        .palette = gMonPalette_UrshifuSingleStrikeGmax,
        .shinyPalette = gMonShinyPalette_UrshifuSingleStrikeGmax,
        .iconSprite = gMonIcon_UrshifuSingleStrikeGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Urshifu)
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_URSHIFU_RAPID_STRIKE] =
    {
        .frontPic = gMonFrontPic_UrshifuRapidStrike,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrshifuRapidStrike,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Kubfu,
    #endif
        .palette = gMonPalette_UrshifuRapidStrike,
        .shinyPalette = gMonShinyPalette_UrshifuRapidStrike,
        .iconSprite = gMonIcon_Urshifu,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_M)
        FOOTPRINT(Urshifu)
        OVERWORLD(
            sPicTable_Urshifu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Urshifu,
            gShinyOverworldPalette_Urshifu
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_URSHIFU_RAPID_STRIKE_GMAX] =
    {
        .frontPic = gMonFrontPic_UrshifuRapidStrikeGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrshifuRapidStrikeGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Kubfu,
    #endif
        .palette = gMonPalette_UrshifuRapidStrikeGmax,
        .shinyPalette = gMonShinyPalette_UrshifuRapidStrikeGmax,
        .iconSprite = gMonIcon_UrshifuRapidStrikeGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Urshifu)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KUBFU

#if P_FAMILY_ZARUDE
    [SPECIES_ZARUDE] =
    {
        .frontPic = gMonFrontPic_Zarude,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Zarude,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Zarude,
    #endif
        .palette = gMonPalette_Zarude,
        .shinyPalette = gMonShinyPalette_Zarude,
        .iconSprite = gMonIcon_Zarude,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zarude)
        OVERWORLD(
            sPicTable_Zarude,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zarude,
            gShinyOverworldPalette_Zarude
        )
    },

    [SPECIES_ZARUDE_DADA] =
    {
        .frontPic = gMonFrontPic_ZarudeDada,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZarudeDada,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Zarude,
    #endif
        .palette = gMonPalette_ZarudeDada,
        .shinyPalette = gMonShinyPalette_ZarudeDada,
        .iconSprite = gMonIcon_ZarudeDada,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zarude)
    },
#endif //P_FAMILY_ZARUDE

#if P_FAMILY_REGIELEKI
    [SPECIES_REGIELEKI] =
    {
        .frontPic = gMonFrontPic_Regieleki,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Regieleki,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Regieleki,
    #endif
        .palette = gMonPalette_Regieleki,
        .shinyPalette = gMonShinyPalette_Regieleki,
        .iconSprite = gMonIcon_Regieleki,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_S)
        FOOTPRINT(Regieleki)
        OVERWORLD(
            sPicTable_Regieleki,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Regieleki,
            gShinyOverworldPalette_Regieleki
        )
    },
#endif //P_FAMILY_REGIELEKI

#if P_FAMILY_REGIDRAGO
    [SPECIES_REGIDRAGO] =
    {
        .frontPic = gMonFrontPic_Regidrago,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Regidrago,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Regidrago,
    #endif
        .palette = gMonPalette_Regidrago,
        .shinyPalette = gMonShinyPalette_Regidrago,
        .iconSprite = gMonIcon_Regidrago,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Regidrago)
        OVERWORLD(
            sPicTable_Regidrago,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Regidrago,
            gShinyOverworldPalette_Regidrago
        )
    },
#endif //P_FAMILY_REGIDRAGO

#if P_FAMILY_GLASTRIER
    [SPECIES_GLASTRIER] =
    {
        .frontPic = gMonFrontPic_Glastrier,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Glastrier,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Glastrier,
    #endif
        .palette = gMonPalette_Glastrier,
        .shinyPalette = gMonShinyPalette_Glastrier,
        .iconSprite = gMonIcon_Glastrier,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Glastrier)
        OVERWORLD(
            sPicTable_Glastrier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Glastrier,
            gShinyOverworldPalette_Glastrier
        )
    },
#endif //P_FAMILY_GLASTRIER

#if P_FAMILY_SPECTRIER
    [SPECIES_SPECTRIER] =
    {
        .frontPic = gMonFrontPic_Spectrier,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Spectrier,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Spectrier,
    #endif
        .palette = gMonPalette_Spectrier,
        .shinyPalette = gMonShinyPalette_Spectrier,
        .iconSprite = gMonIcon_Spectrier,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 12, SHADOW_SIZE_L)
        FOOTPRINT(Spectrier)
        OVERWORLD(
            sPicTable_Spectrier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spectrier,
            gShinyOverworldPalette_Spectrier
        )
    },
#endif //P_FAMILY_SPECTRIER

#if P_FAMILY_CALYREX
    [SPECIES_CALYREX] =
    {
        .frontPic = gMonFrontPic_Calyrex,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Calyrex,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Calyrex,
    #endif
        .palette = gMonPalette_Calyrex,
        .shinyPalette = gMonShinyPalette_Calyrex,
        .iconSprite = gMonIcon_Calyrex,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Calyrex)
        OVERWORLD(
            sPicTable_Calyrex,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Calyrex,
            gShinyOverworldPalette_Calyrex
        )
    },

#if P_FUSION_FORMS
    [SPECIES_CALYREX_ICE] =
    {
        .frontPic = gMonFrontPic_CalyrexIce,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalyrexIce,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Calyrex,
    #endif
        .palette = gMonPalette_CalyrexIce,
        .shinyPalette = gMonShinyPalette_CalyrexIce,
        .iconSprite = gMonIcon_CalyrexIce,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Calyrex)
        OVERWORLD(
            sPicTable_CalyrexIce,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CalyrexIce,
            gShinyOverworldPalette_CalyrexIce
        )
    },

    [SPECIES_CALYREX_SHADOW] =
    {
        .frontPic = gMonFrontPic_CalyrexShadow,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CalyrexShadow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Calyrex,
    #endif
        .palette = gMonPalette_CalyrexShadow,
        .shinyPalette = gMonShinyPalette_CalyrexShadow,
        .iconSprite = gMonIcon_CalyrexShadow,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Calyrex)
        OVERWORLD(
            sPicTable_CalyrexShadow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CalyrexShadow,
            gShinyOverworldPalette_CalyrexShadow
        )
    },
#endif //P_FUSION_FORMS
#endif //P_FAMILY_CALYREX

#if P_FAMILY_ENAMORUS
    [SPECIES_ENAMORUS_INCARNATE] =
    {
        .frontPic = gMonFrontPic_EnamorusIncarnate,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_EnamorusIncarnate,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Enamorus,
    #endif
        .palette = gMonPalette_EnamorusIncarnate,
        .shinyPalette = gMonShinyPalette_EnamorusIncarnate,
        .iconSprite = gMonIcon_EnamorusIncarnate,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 19, SHADOW_SIZE_M)
        FOOTPRINT(Enamorus)
        OVERWORLD(
            sPicTable_EnamorusIncarnate,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_EnamorusIncarnate,
            gShinyOverworldPalette_EnamorusIncarnate
        )
    },

    [SPECIES_ENAMORUS_THERIAN] =
    {
        .frontPic = gMonFrontPic_EnamorusTherian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_EnamorusTherian,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_Enamorus,
    #endif
        .palette = gMonPalette_EnamorusTherian,
        .shinyPalette = gMonShinyPalette_EnamorusTherian,
        .iconSprite = gMonIcon_EnamorusTherian,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Enamorus)
        OVERWORLD(
            sPicTable_EnamorusTherian,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_EnamorusTherian,
            gShinyOverworldPalette_EnamorusTherian
        )
    },
#endif //P_FAMILY_ENAMORUS

#ifdef __INTELLISENSE__
};
#endif
