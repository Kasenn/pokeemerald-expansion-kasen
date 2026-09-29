#ifdef __INTELLISENSE__
const struct SpeciesGraphicsInfo gSpeciesGraphicsInfoGen4[] =
{
#endif

#if P_FAMILY_TURTWIG
    [SPECIES_TURTWIG] =
    {
        .frontPic = gMonFrontPic_Turtwig,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Turtwig,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Turtwig,
    #endif
        .palette = gMonPalette_Turtwig,
        .shinyPalette = gMonShinyPalette_Turtwig,
        .iconSprite = gMonIcon_Turtwig,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Turtwig)
        OVERWORLD(
            sPicTable_Turtwig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Turtwig,
            gShinyOverworldPalette_Turtwig
        )
    },

    [SPECIES_GROTLE] =
    {
        .frontPic = gMonFrontPic_Grotle,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Grotle,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Turtwig,
    #endif
        .palette = gMonPalette_Grotle,
        .shinyPalette = gMonShinyPalette_Grotle,
        .iconSprite = gMonIcon_Grotle,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 2, SHADOW_SIZE_L)
        FOOTPRINT(Grotle)
        OVERWORLD(
            sPicTable_Grotle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grotle,
            gShinyOverworldPalette_Grotle
        )
    },

    [SPECIES_TORTERRA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Torterra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Torterra,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Turtwig,
    #endif
        .palette = gMonPalette_Torterra,
        .shinyPalette = gMonShinyPalette_Torterra,
        .iconSprite = gMonIcon_Torterra,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Torterra)
        OVERWORLD(
            sPicTable_Torterra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Torterra,
            gShinyOverworldPalette_Torterra
        )
    },
#endif //P_FAMILY_TURTWIG

#if P_FAMILY_CHIMCHAR
    [SPECIES_CHIMCHAR] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Chimchar,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Chimchar,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Chimchar,
    #endif
        .palette = gMonPalette_Chimchar,
        .shinyPalette = gMonShinyPalette_Chimchar,
        .iconSprite = gMonIcon_Chimchar,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Chimchar)
        OVERWORLD(
            sPicTable_Chimchar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chimchar,
            gShinyOverworldPalette_Chimchar
        )
    },

    [SPECIES_MONFERNO] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Monferno,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Monferno,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Chimchar,
    #endif
        .palette = gMonPalette_Monferno,
        .shinyPalette = gMonShinyPalette_Monferno,
        .iconSprite = gMonIcon_Monferno,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 6, SHADOW_SIZE_S)
        FOOTPRINT(Monferno)
        OVERWORLD(
            sPicTable_Monferno,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Monferno,
            gShinyOverworldPalette_Monferno
        )
    },

    [SPECIES_INFERNAPE] =
    {
        .frontPic = gMonFrontPic_Infernape,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Infernape,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Chimchar,
    #endif
        .palette = gMonPalette_Infernape,
        .shinyPalette = gMonShinyPalette_Infernape,
        .iconSprite = gMonIcon_Infernape,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_L)
        FOOTPRINT(Infernape)
        OVERWORLD(
            sPicTable_Infernape,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Infernape,
            gShinyOverworldPalette_Infernape
        )
    },
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_PIPLUP
    [SPECIES_PIPLUP] =
    {
        .frontPic = gMonFrontPic_Piplup,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Piplup,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Piplup,
    #endif
        .palette = gMonPalette_Piplup,
        .shinyPalette = gMonShinyPalette_Piplup,
        .iconSprite = gMonIcon_Piplup,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Piplup)
        OVERWORLD(
            sPicTable_Piplup,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Piplup,
            gShinyOverworldPalette_Piplup
        )
    },

    [SPECIES_PRINPLUP] =
    {
        .frontPic = gMonFrontPic_Prinplup,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Prinplup,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Piplup,
    #endif
        .palette = gMonPalette_Prinplup,
        .shinyPalette = gMonShinyPalette_Prinplup,
        .iconSprite = gMonIcon_Prinplup,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Prinplup)
        OVERWORLD(
            sPicTable_Prinplup,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Prinplup,
            gShinyOverworldPalette_Prinplup
        )
    },

    [SPECIES_EMPOLEON] =
    {
        FOOTPRINT(Empoleon)
        OVERWORLD(
            sPicTable_Empoleon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Empoleon,
            gShinyOverworldPalette_Empoleon
        )                                
        .frontPic = gMonFrontPic_Empoleon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Empoleon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Piplup,
    #endif
        .palette = gMonPalette_Empoleon,
        .shinyPalette = gMonShinyPalette_Empoleon,
        .iconSprite = gMonIcon_Empoleon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 12, SHADOW_SIZE_M)
    },
#if P_MEGA_EVOLUTIONS
    [SPECIES_EMPOLEON_MEGA] =
    {
        FOOTPRINT(Empoleon)                                
        .frontPic = gMonFrontPic_EmpoleonMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_EmpoleonMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Piplup,
    #endif
        .palette = gMonPalette_EmpoleonMega,
        .shinyPalette = gMonShinyPalette_EmpoleonMega,
        .iconSprite = gMonIcon_EmpoleonMega,
        .iconPalIndex = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
    [SPECIES_STARLY] =
    {
        .frontPic = gMonFrontPic_Starly,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Starly,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Starly,
    #endif
        .palette = gMonPalette_Starly,
        .shinyPalette = gMonShinyPalette_Starly,
        .iconSprite = gMonIcon_Starly,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_StarlyF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .backPicFemale = gMonBackPic_StarlyF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Starly)
        OVERWORLD(
            sPicTable_Starly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Starly,
            gShinyOverworldPalette_Starly
        )
        OVERWORLD_FEMALE(
            sPicTable_StarlyF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_STARAVIA] =
    {
        .frontPic = gMonFrontPic_Staravia,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Staravia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Starly,
    #endif
        .palette = gMonPalette_Staravia,
        .shinyPalette = gMonShinyPalette_Staravia,
        .iconSprite = gMonIcon_Staravia,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_StaraviaF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_StaraviaF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Staravia)
        OVERWORLD(
            sPicTable_Staravia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Staravia,
            gShinyOverworldPalette_Staravia
        )
        OVERWORLD_FEMALE(
            sPicTable_StaraviaF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_STARAPTOR] =
    {
        .frontPic = gMonFrontPic_Staraptor,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Staraptor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Starly,
    #endif
        .palette = gMonPalette_Staraptor,
        .shinyPalette = gMonShinyPalette_Staraptor,
        .iconSprite = gMonIcon_Staraptor,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_StaraptorF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Staraptor)
        OVERWORLD(
            sPicTable_Staraptor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Staraptor,
            gShinyOverworldPalette_Staraptor
        )
        OVERWORLD_FEMALE(
            sPicTable_StaraptorF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_STARAPTOR_MEGA] =
    {
        .frontPic = gMonFrontPic_StaraptorMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_StaraptorMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Starly,
    #endif
        .palette = gMonPalette_StaraptorMega,
        .shinyPalette = gMonShinyPalette_StaraptorMega,
        .iconSprite = gMonIcon_StaraptorMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Staraptor)
        SHADOW(-1, 13, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
    [SPECIES_BIDOOF] =
    {
        .frontPic = gMonFrontPic_Bidoof,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Bidoof,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Bidoof,
    #endif
        .palette = gMonPalette_Bidoof,
        .shinyPalette = gMonShinyPalette_Bidoof,
        .iconSprite = gMonIcon_Bidoof,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BidoofF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 40),
        .backPicFemale = gMonBackPic_BidoofF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Bidoof)
        OVERWORLD(
            sPicTable_Bidoof,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bidoof,
            gShinyOverworldPalette_Bidoof
        )
        OVERWORLD_FEMALE(
            sPicTable_BidoofF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_BIBAREL] =
    {
        .frontPic = gMonFrontPic_Bibarel,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Bibarel,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Bidoof,
    #endif
        .palette = gMonPalette_Bibarel,
        .shinyPalette = gMonShinyPalette_Bibarel,
        .iconSprite = gMonIcon_Bibarel,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_BibarelF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 5, SHADOW_SIZE_M)
        FOOTPRINT(Bibarel)
        OVERWORLD(
            sPicTable_Bibarel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bibarel,
            gShinyOverworldPalette_Bibarel
        )
        OVERWORLD_FEMALE(
            sPicTable_BibarelF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_KRICKETOT
    [SPECIES_KRICKETOT] =
    {
        .frontPic = gMonFrontPic_Kricketot,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Kricketot,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Kricketot,
    #endif
        .palette = gMonPalette_Kricketot,
        .shinyPalette = gMonShinyPalette_Kricketot,
        .iconSprite = gMonIcon_Kricketot,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KricketotF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_KricketotF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-5, 2, SHADOW_SIZE_S)
        FOOTPRINT(Kricketot)
        OVERWORLD(
            sPicTable_Kricketot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kricketot,
            gShinyOverworldPalette_Kricketot
        )
        OVERWORLD_FEMALE(
            sPicTable_KricketotF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_KRICKETUNE] =
    {
        .frontPic = gMonFrontPic_Kricketune,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Kricketune,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Kricketot,
    #endif
        .palette = gMonPalette_Kricketune,
        .shinyPalette = gMonShinyPalette_Kricketune,
        .iconSprite = gMonIcon_Kricketune,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_KricketuneF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_KricketuneF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Kricketune)
        OVERWORLD(
            sPicTable_Kricketune,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kricketune,
            gShinyOverworldPalette_Kricketune
        )
        OVERWORLD_FEMALE(
            sPicTable_KricketuneF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_KRICKETOT

#if P_FAMILY_SHINX
    [SPECIES_SHINX] =
    {
        .frontPic = gMonFrontPic_Shinx,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shinx,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Shinx,
    #endif
        .palette = gMonPalette_Shinx,
        .shinyPalette = gMonShinyPalette_Shinx,
        .iconSprite = gMonIcon_Shinx,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ShinxF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 40),
        .backPicFemale = gMonBackPic_ShinxF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Shinx)
        OVERWORLD(
            sPicTable_Shinx,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shinx,
            gShinyOverworldPalette_Shinx
        )
        OVERWORLD_FEMALE(
            sPicTable_ShinxF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_LUXIO] =
    {
        .frontPic = gMonFrontPic_Luxio,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Luxio,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Shinx,
    #endif
        .palette = gMonPalette_Luxio,
        .shinyPalette = gMonShinyPalette_Luxio,
        .iconSprite = gMonIcon_Luxio,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LuxioF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_LuxioF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 2, SHADOW_SIZE_M)
        FOOTPRINT(Luxio)
        OVERWORLD(
            sPicTable_Luxio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Luxio,
            gShinyOverworldPalette_Luxio
        )
        OVERWORLD_FEMALE(
            sPicTable_LuxioF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_LUXRAY] =
    {
        .frontPic = gMonFrontPic_Luxray,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Luxray,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Shinx,
    #endif
        .palette = gMonPalette_Luxray,
        .shinyPalette = gMonShinyPalette_Luxray,
        .iconSprite = gMonIcon_Luxray,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LuxrayF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_LuxrayF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Luxray)
        OVERWORLD(
            sPicTable_Luxray,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Luxray,
            gShinyOverworldPalette_Luxray
        )
        OVERWORLD_FEMALE(
            sPicTable_LuxrayF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
    [SPECIES_CRANIDOS] =
    {
        .frontPic = gMonFrontPic_Cranidos,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Cranidos,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Cranidos,
    #endif
        .palette = gMonPalette_Cranidos,
        .shinyPalette = gMonShinyPalette_Cranidos,
        .iconSprite = gMonIcon_Cranidos,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 4, SHADOW_SIZE_S)
        FOOTPRINT(Cranidos)
        OVERWORLD(
            sPicTable_Cranidos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cranidos,
            gShinyOverworldPalette_Cranidos
        )
    },

    [SPECIES_RAMPARDOS] =
    {
        .frontPic = gMonFrontPic_Rampardos,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Rampardos,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Cranidos,
    #endif
        .palette = gMonPalette_Rampardos,
        .shinyPalette = gMonShinyPalette_Rampardos,
        .iconSprite = gMonIcon_Rampardos,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 11, SHADOW_SIZE_L)
        FOOTPRINT(Rampardos)
        OVERWORLD(
            sPicTable_Rampardos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rampardos,
            gShinyOverworldPalette_Rampardos
        )
    },
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_SHIELDON
    [SPECIES_SHIELDON] =
    {
        .frontPic = gMonFrontPic_Shieldon,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Shieldon,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Shieldon,
    #endif
        .palette = gMonPalette_Shieldon,
        .shinyPalette = gMonShinyPalette_Shieldon,
        .iconSprite = gMonIcon_Shieldon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(3, -1, SHADOW_SIZE_S)
        FOOTPRINT(Shieldon)
        OVERWORLD(
            sPicTable_Shieldon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shieldon,
            gShinyOverworldPalette_Shieldon
        )
    },

    [SPECIES_BASTIODON] =
    {
        .frontPic = gMonFrontPic_Bastiodon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Bastiodon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Shieldon,
    #endif
        .palette = gMonPalette_Bastiodon,
        .shinyPalette = gMonShinyPalette_Bastiodon,
        .iconSprite = gMonIcon_Bastiodon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_L)
        FOOTPRINT(Bastiodon)
        OVERWORLD(
            sPicTable_Bastiodon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bastiodon,
            gShinyOverworldPalette_Bastiodon
        )
    },
#endif //P_FAMILY_SHIELDON

#if P_FAMILY_BURMY
    [SPECIES_BURMY_PLANT] =
    {
        .frontPic = gMonFrontPic_BurmyPlant,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmyPlant,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Burmy,
    #endif
        .palette = gMonPalette_BurmyPlant,
        .shinyPalette = gMonShinyPalette_BurmyPlant,
        .iconSprite = gMonIcon_BurmyPlant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Burmy)
        OVERWORLD(
            sPicTable_BurmyPlant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BurmyPlant,
            gShinyOverworldPalette_BurmyPlant
        )
    },

    [SPECIES_BURMY_SANDY] =
    {
        .frontPic = gMonFrontPic_BurmySandy,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmySandy,
        .backPicSize = MON_COORDS_SIZE(32, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Burmy,
    #endif
        .palette = gMonPalette_BurmySandy,
        .shinyPalette = gMonShinyPalette_BurmySandy,
        .iconSprite = gMonIcon_BurmySandy,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Burmy)
        OVERWORLD(
            sPicTable_BurmySandy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BurmySandy,
            gShinyOverworldPalette_BurmySandy
        )
    },

    [SPECIES_BURMY_TRASH] =
    {
        .frontPic = gMonFrontPic_BurmyTrash,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Burmy,
        .frontAnimId = ANIM_V_STRETCH,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_BurmyTrash,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Burmy,
    #endif
        .palette = gMonPalette_BurmyTrash,
        .shinyPalette = gMonShinyPalette_BurmyTrash,
        .iconSprite = gMonIcon_BurmyTrash,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Burmy)
        OVERWORLD(
            sPicTable_BurmyTrash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BurmyTrash,
            gShinyOverworldPalette_BurmyTrash
        )
    },

    [SPECIES_WORMADAM_PLANT] =
    {
        .frontPic = gMonFrontPic_WormadamPlant,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamPlant,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Burmy,
    #endif
        .palette = gMonPalette_WormadamPlant,
        .shinyPalette = gMonShinyPalette_WormadamPlant,
        .iconSprite = gMonIcon_WormadamPlant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_WormadamPlant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_WormadamPlant,
            gShinyOverworldPalette_WormadamPlant
        )
    },

    [SPECIES_WORMADAM_SANDY] =
    {
        .frontPic = gMonFrontPic_WormadamSandy,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamSandy,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Burmy,
    #endif
        .palette = gMonPalette_WormadamSandy,
        .shinyPalette = gMonShinyPalette_WormadamSandy,
        .iconSprite = gMonIcon_WormadamSandy,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_WormadamSandy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_WormadamSandy,
            gShinyOverworldPalette_WormadamSandy
        )
    },

    [SPECIES_WORMADAM_TRASH] =
    {
        .frontPic = gMonFrontPic_WormadamTrash,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Wormadam,
        .frontAnimId = ANIM_SWING_CONVEX_FAST_SHORT,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_WormadamTrash,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Burmy,
    #endif
        .palette = gMonPalette_WormadamTrash,
        .shinyPalette = gMonShinyPalette_WormadamTrash,
        .iconSprite = gMonIcon_WormadamTrash,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_S)
        FOOTPRINT(Wormadam)
        OVERWORLD(
            sPicTable_WormadamTrash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_WormadamTrash,
            gShinyOverworldPalette_WormadamTrash
        )
    },

#if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
    #define MOTHIM_EGG_COLOR .eggPalette = gEggPalette_Burmy,
#else
    #define MOTHIM_EGG_COLOR
#endif

#define MOTHIM_SPECIES_INFO_GRAPHICS                                                 \
    {                                                                       \
        MOTHIM_EGG_COLOR                                                    \
        .frontPic = gMonFrontPic_Mothim,                                    \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                            \
        .frontPicYOffset = 12,                                              \
        .frontAnimFrames = sAnims_Mothim,                                   \
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,                                 \
        .enemyMonElevation = 10,                                            \
        .backPic = gMonBackPic_Mothim,                                      \
        .backPicSize = MON_COORDS_SIZE(64, 56),                             \
        .backPicYOffset = 8,                                                \
        .backAnimId = BACK_ANIM_H_SHAKE,                                    \
        .palette = gMonPalette_Mothim,                                      \
        .shinyPalette = gMonShinyPalette_Mothim,                            \
        .iconSprite = gMonIcon_Mothim,                                      \
        .iconPalIndex = 0,                                                  \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                             \
        SHADOW(-1, 9, SHADOW_SIZE_S)                                        \
        FOOTPRINT(Mothim)                                                   \
        OVERWORLD(                                                          \
            sPicTable_Mothim,                                               \
            SIZE_32x32,                                                     \
            SHADOW_SIZE_M,                                                  \
            TRACKS_FOOT,                                                    \
            sAnimTable_Following,                                           \
            gOverworldPalette_Mothim,                                       \
            gShinyOverworldPalette_Mothim                                   \
        )                                                                   \
    }

    [SPECIES_MOTHIM_PLANT] = MOTHIM_SPECIES_INFO_GRAPHICS,
    [SPECIES_MOTHIM_SANDY] = MOTHIM_SPECIES_INFO_GRAPHICS,
    [SPECIES_MOTHIM_TRASH] = MOTHIM_SPECIES_INFO_GRAPHICS,
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
    [SPECIES_COMBEE] =
    {
        .frontPic = gMonFrontPic_Combee,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Combee,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 22,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Combee,
    #endif
        .palette = gMonPalette_Combee,
        .shinyPalette = gMonShinyPalette_Combee,
        .iconSprite = gMonIcon_Combee,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_CombeeF,
        .shinyPaletteFemale = gMonShinyPalette_CombeeF,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 10, SHADOW_SIZE_S)
        FOOTPRINT(Combee)
        OVERWORLD(
            sPicTable_Combee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Combee,
            gShinyOverworldPalette_Combee
        )
        OVERWORLD_FEMALE(
            sPicTable_CombeeF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_VESPIQUEN] =
    {
        .frontPic = gMonFrontPic_Vespiquen,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Vespiquen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Combee,
    #endif
        .palette = gMonPalette_Vespiquen,
        .shinyPalette = gMonShinyPalette_Vespiquen,
        .iconSprite = gMonIcon_Vespiquen,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Vespiquen)
        OVERWORLD(
            sPicTable_Vespiquen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vespiquen,
            gShinyOverworldPalette_Vespiquen
        )
    },
#endif //P_FAMILY_COMBEE

#if P_FAMILY_PACHIRISU
    [SPECIES_PACHIRISU] =
    {
        .frontPic = gMonFrontPic_Pachirisu,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pachirisu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Pachirisu,
    #endif
        .palette = gMonPalette_Pachirisu,
        .shinyPalette = gMonShinyPalette_Pachirisu,
        .iconSprite = gMonIcon_Pachirisu,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PachirisuF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Pachirisu)
        OVERWORLD(
            sPicTable_Pachirisu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pachirisu,
            gShinyOverworldPalette_Pachirisu
        )
        OVERWORLD_FEMALE(
            sPicTable_PachirisuF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_PACHIRISU

#if P_FAMILY_BUIZEL
    [SPECIES_BUIZEL] =
    {
        .frontPic = gMonFrontPic_Buizel,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Buizel,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Buizel,
    #endif
        .palette = gMonPalette_Buizel,
        .shinyPalette = gMonShinyPalette_Buizel,
        .iconSprite = gMonIcon_Buizel,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .backPicFemale = gMonBackPic_BuizelF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Buizel)
        OVERWORLD(
            sPicTable_Buizel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Buizel,
            gShinyOverworldPalette_Buizel
        )
        OVERWORLD_FEMALE(
            sPicTable_BuizelF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_FLOATZEL] =
    {
        .frontPic = gMonFrontPic_Floatzel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Floatzel,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Buizel,
    #endif
        .palette = gMonPalette_Floatzel,
        .shinyPalette = gMonShinyPalette_Floatzel,
        .iconSprite = gMonIcon_Floatzel,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .backPicFemale = gMonBackPic_FloatzelF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 10, SHADOW_SIZE_M)
        FOOTPRINT(Floatzel)
        OVERWORLD(
            sPicTable_Floatzel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Floatzel,
            gShinyOverworldPalette_Floatzel
        )
        OVERWORLD_FEMALE(
            sPicTable_FloatzelF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
    [SPECIES_CHERUBI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Cherubi,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 50),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cherubi,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Cherubi,
    #endif
        .palette = gMonPalette_Cherubi,
        .shinyPalette = gMonShinyPalette_Cherubi,
        .iconSprite = gMonIcon_Cherubi,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-4, -2, SHADOW_SIZE_S)
        FOOTPRINT(Cherubi)
        OVERWORLD(
            sPicTable_Cherubi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cherubi,
            gShinyOverworldPalette_Cherubi
        )
    },

    [SPECIES_CHERRIM_OVERCAST] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_CherrimOvercast,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CherrimOvercast,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Cherubi,
    #endif
        .palette = gMonPalette_CherrimOvercast,
        .shinyPalette = gMonShinyPalette_CherrimOvercast,
        .iconSprite = gMonIcon_CherrimOvercast,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Cherrim)
        OVERWORLD(
            sPicTable_CherrimOvercast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CherrimOvercast,
            gShinyOverworldPalette_CherrimOvercast
        )
    },

    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .frontPic = gMonFrontPic_CherrimSunshine,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_CherrimSunshine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Cherubi,
    #endif
        .palette = gMonPalette_CherrimSunshine,
        .shinyPalette = gMonShinyPalette_CherrimSunshine,
        .iconSprite = gMonIcon_CherrimSunshine,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Cherrim)
        OVERWORLD(
            sPicTable_CherrimSunshine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CherrimSunshine,
            gShinyOverworldPalette_CherrimSunshine
        )
    },
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_SHELLOS
    [SPECIES_SHELLOS_WEST] =
    {
        .frontPic = gMonFrontPic_ShellosWestSea,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shellos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShellosWestSea,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_ShellosWest,
    #endif
        .palette = gMonPalette_ShellosWestSea,
        .shinyPalette = gMonShinyPalette_ShellosWestSea,
        .iconSprite = gMonIcon_ShellosWestSea,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Shellos)
        OVERWORLD(
            sPicTable_ShellosWestSea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ShellosWestSea,
            gShinyOverworldPalette_ShellosWestSea
        )
    },

    [SPECIES_SHELLOS_EAST] =
    {
        .frontPic = gMonFrontPic_ShellosEast,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Shellos,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShellosEast,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SPRING,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_ShellosEast,
    #endif
        .palette = gMonPalette_ShellosEast,
        .shinyPalette = gMonShinyPalette_ShellosEast,
        .iconSprite = gMonIcon_ShellosEast,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Shellos)
        OVERWORLD(
            sPicTable_ShellosEast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ShellosEast,
            gShinyOverworldPalette_ShellosEast
        )
    },

    [SPECIES_GASTRODON_WEST] =
    {
        .frontPic = gMonFrontPic_GastrodonWestSea,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gastrodon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_GastrodonWestSea,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_ShellosWest,
    #endif
        .palette = gMonPalette_GastrodonWestSea,
        .shinyPalette = gMonShinyPalette_GastrodonWestSea,
        .iconSprite = gMonIcon_GastrodonWestSea,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Gastrodon)
        OVERWORLD(
            sPicTable_GastrodonWestSea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GastrodonWestSea,
            gShinyOverworldPalette_GastrodonWestSea
        )
    },

    [SPECIES_GASTRODON_EAST] =
    {
        .frontPic = gMonFrontPic_GastrodonEast,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Gastrodon,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_GastrodonEast,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_ShellosEast,
    #endif
        .palette = gMonPalette_GastrodonEast,
        .shinyPalette = gMonShinyPalette_GastrodonEast,
        .iconSprite = gMonIcon_GastrodonEast,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Gastrodon)
        OVERWORLD(
            sPicTable_GastrodonEast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GastrodonEast,
            gShinyOverworldPalette_GastrodonEast
        )
    },
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_DRIFLOON
    [SPECIES_DRIFLOON] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Drifloon,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Drifloon,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Drifloon,
    #endif
        .palette = gMonPalette_Drifloon,
        .shinyPalette = gMonShinyPalette_Drifloon,
        .iconSprite = gMonIcon_Drifloon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Drifloon)
        OVERWORLD(
            sPicTable_Drifloon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Drifloon,
            gShinyOverworldPalette_Drifloon
        )
    },

    [SPECIES_DRIFBLIM] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Drifblim,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Drifblim,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Drifloon,
    #endif
        .palette = gMonPalette_Drifblim,
        .shinyPalette = gMonShinyPalette_Drifblim,
        .iconSprite = gMonIcon_Drifblim,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_M)
        FOOTPRINT(Drifblim)
        OVERWORLD(
            sPicTable_Drifblim,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Drifblim,
            gShinyOverworldPalette_Drifblim
        )
    },
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_BUNEARY
    [SPECIES_BUNEARY] =
    {
        .frontPic = gMonFrontPic_Buneary,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Buneary,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Buneary,
    #endif
        .palette = gMonPalette_Buneary,
        .shinyPalette = gMonShinyPalette_Buneary,
        .iconSprite = gMonIcon_Buneary,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Buneary)
        OVERWORLD(
            sPicTable_Buneary,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Buneary,
            gShinyOverworldPalette_Buneary
        )
    },

    [SPECIES_LOPUNNY] =
    {
        .frontPic = gMonFrontPic_Lopunny,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Lopunny,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Buneary,
    #endif
        .palette = gMonPalette_Lopunny,
        .shinyPalette = gMonShinyPalette_Lopunny,
        .iconSprite = gMonIcon_Lopunny,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Lopunny)
        OVERWORLD(
            sPicTable_Lopunny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lopunny,
            gShinyOverworldPalette_Lopunny
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LOPUNNY_MEGA] =
    {
        .frontPic = gMonFrontPic_LopunnyMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LopunnyMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Buneary,
    #endif
        .palette = gMonPalette_LopunnyMega,
        .shinyPalette = gMonShinyPalette_LopunnyMega,
        .iconSprite = gMonIcon_LopunnyMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Lopunny)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_LopunnyMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LopunnyMega,
            gShinyOverworldPalette_LopunnyMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_GLAMEOW
    [SPECIES_GLAMEOW] =
    {
        .frontPic = gMonFrontPic_Glameow,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Glameow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Glameow,
    #endif
        .palette = gMonPalette_Glameow,
        .shinyPalette = gMonShinyPalette_Glameow,
        .iconSprite = gMonIcon_Glameow,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Glameow)
        OVERWORLD(
            sPicTable_Glameow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Glameow,
            gShinyOverworldPalette_Glameow
        )
    },

    [SPECIES_PURUGLY] =
    {
        .frontPic = gMonFrontPic_Purugly,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Purugly,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Glameow,
    #endif
        .palette = gMonPalette_Purugly,
        .shinyPalette = gMonShinyPalette_Purugly,
        .iconSprite = gMonIcon_Purugly,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Purugly)
        OVERWORLD(
            sPicTable_Purugly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Purugly,
            gShinyOverworldPalette_Purugly
        )
    },
#endif //P_FAMILY_GLAMEOW

#if P_FAMILY_STUNKY
    [SPECIES_STUNKY] =
    {
        .frontPic = gMonFrontPic_Stunky,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Stunky,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Stunky,
    #endif
        .palette = gMonPalette_Stunky,
        .shinyPalette = gMonShinyPalette_Stunky,
        .iconSprite = gMonIcon_Stunky,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 0, SHADOW_SIZE_M)
        FOOTPRINT(Stunky)
        OVERWORLD(
            sPicTable_Stunky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stunky,
            gShinyOverworldPalette_Stunky
        )
    },

    [SPECIES_SKUNTANK] =
    {
        .frontPic = gMonFrontPic_Skuntank,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Skuntank,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Stunky,
    #endif
        .palette = gMonPalette_Skuntank,
        .shinyPalette = gMonShinyPalette_Skuntank,
        .iconSprite = gMonIcon_Skuntank,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 6, SHADOW_SIZE_L)
        FOOTPRINT(Skuntank)
        OVERWORLD(
            sPicTable_Skuntank,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skuntank,
            gShinyOverworldPalette_Skuntank
        )
    },
#endif //P_FAMILY_STUNKY

#if P_FAMILY_BRONZOR
    [SPECIES_BRONZOR] =
    {
        .frontPic = gMonFrontPic_Bronzor,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Bronzor,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Bronzor,
    #endif
        .palette = gMonPalette_Bronzor,
        .shinyPalette = gMonShinyPalette_Bronzor,
        .iconSprite = gMonIcon_Bronzor,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Bronzor)
        OVERWORLD(
            sPicTable_Bronzor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bronzor,
            gShinyOverworldPalette_Bronzor
        )
    },

    [SPECIES_BRONZONG] =
    {
        .frontPic = gMonFrontPic_Bronzong,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Bronzong,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Bronzor,
    #endif
        .palette = gMonPalette_Bronzong,
        .shinyPalette = gMonShinyPalette_Bronzong,
        .iconSprite = gMonIcon_Bronzong,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 12, SHADOW_SIZE_M)
        FOOTPRINT(Bronzong)
        OVERWORLD(
            sPicTable_Bronzong,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bronzong,
            gShinyOverworldPalette_Bronzong
        )
    },
#endif //P_FAMILY_BRONZOR

#if P_FAMILY_CHATOT
    [SPECIES_CHATOT] =
    {
        .frontPic = gMonFrontPic_Chatot,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Chatot,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Chatot,
    #endif
        .palette = gMonPalette_Chatot,
        .shinyPalette = gMonShinyPalette_Chatot,
        .iconSprite = gMonIcon_Chatot,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Chatot)
        OVERWORLD(
            sPicTable_Chatot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chatot,
            gShinyOverworldPalette_Chatot
        )
    },
#endif //P_FAMILY_CHATOT

#if P_FAMILY_SPIRITOMB
    [SPECIES_SPIRITOMB] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Spiritomb,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Spiritomb,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Spiritomb,
    #endif
        .palette = gMonPalette_Spiritomb,
        .shinyPalette = gMonShinyPalette_Spiritomb,
        .iconSprite = gMonIcon_Spiritomb,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Spiritomb)
        OVERWORLD(
            sPicTable_Spiritomb,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spiritomb,
            gShinyOverworldPalette_Spiritomb
        )
    },
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_GIBLE
    [SPECIES_GIBLE] =
    {
        .frontPic = gMonFrontPic_Gible,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gible,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Gible,
    #endif
        .palette = gMonPalette_Gible,
        .shinyPalette = gMonShinyPalette_Gible,
        .iconSprite = gMonIcon_Gible,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GibleF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_GibleF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Gible)
        OVERWORLD(
            sPicTable_Gible,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gible,
            gShinyOverworldPalette_Gible
        )
        OVERWORLD_FEMALE(
            sPicTable_GibleF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_GABITE] =
    {
        .frontPic = gMonFrontPic_Gabite,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gabite,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Gible,
    #endif
        .palette = gMonPalette_Gabite,
        .shinyPalette = gMonShinyPalette_Gabite,
        .iconSprite = gMonIcon_Gabite,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GabiteF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_GabiteF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Gabite)
        OVERWORLD(
            sPicTable_Gabite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gabite,
            gShinyOverworldPalette_Gabite
        )
        OVERWORLD_FEMALE(
            sPicTable_GabiteF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_GARCHOMP] =
    {
        .frontPic = gMonFrontPic_Garchomp,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Garchomp,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Gible,
    #endif
        .palette = gMonPalette_Garchomp,
        .shinyPalette = gMonShinyPalette_Garchomp,
        .iconSprite = gMonIcon_Garchomp,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_GarchompF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 11, SHADOW_SIZE_L)
        FOOTPRINT(Garchomp)
        OVERWORLD(
            sPicTable_Garchomp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Garchomp,
            gShinyOverworldPalette_Garchomp
        )
        OVERWORLD_FEMALE(
            sPicTable_GarchompF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARCHOMP_MEGA] =
    {
        .frontPic = gMonFrontPic_GarchompMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GarchompMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Gible,
    #endif
        .palette = gMonPalette_GarchompMega,
        .shinyPalette = gMonShinyPalette_GarchompMega,
        .iconSprite = gMonIcon_GarchompMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Garchomp)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GarchompMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GarchompMega,
            gShinyOverworldPalette_GarchompMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GARCHOMP_MEGA_Z] =
    {
        .frontPic = gMonFrontPic_GarchompMegaZ,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_GarchompMegaZ,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Gible,
    #endif
        .palette = gMonPalette_GarchompMegaZ,
        .shinyPalette = gMonShinyPalette_GarchompMegaZ,
        .iconSprite = gMonIcon_GarchompMegaZ,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Garchomp)
        SHADOW(0, 18, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
    [SPECIES_RIOLU] =
    {
        .frontPic = gMonFrontPic_Riolu,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 28),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Riolu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Riolu,
    #endif
        .palette = gMonPalette_Riolu,
        .shinyPalette = gMonShinyPalette_Riolu,
        .iconSprite = gMonIcon_Riolu,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Riolu)
        OVERWORLD(
            sPicTable_Riolu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Riolu,
            gShinyOverworldPalette_Riolu
        )
    },

    [SPECIES_LUCARIO] =
    {
        .frontPic = gMonFrontPic_Lucario,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lucario,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Riolu,
    #endif
        .palette = gMonPalette_Lucario,
        .shinyPalette = gMonShinyPalette_Lucario,
        .iconSprite = gMonIcon_Lucario,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Lucario)
        OVERWORLD(
            sPicTable_Lucario,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lucario,
            gShinyOverworldPalette_Lucario
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LUCARIO_MEGA] =
    {
        .frontPic = gMonFrontPic_LucarioMega,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LucarioMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Riolu,
    #endif
        .palette = gMonPalette_LucarioMega,
        .shinyPalette = gMonShinyPalette_LucarioMega,
        .iconSprite = gMonIcon_LucarioMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Lucario)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_LucarioMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LucarioMega,
            gShinyOverworldPalette_LucarioMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_LUCARIO_MEGA_Z] =
    {
        .frontPic = gMonFrontPic_LucarioMegaZ,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LucarioMegaZ,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Riolu,
    #endif
        .palette = gMonPalette_LucarioMegaZ,
        .shinyPalette = gMonShinyPalette_LucarioMegaZ,
        .iconSprite = gMonIcon_LucarioMegaZ,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Lucario)
        SHADOW(-5, 13, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
    [SPECIES_HIPPOPOTAS] =
    {
        .frontPic = gMonFrontPic_Hippopotas,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Hippopotas,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Hippopotas,
    #endif
        .palette = gMonPalette_Hippopotas,
        .shinyPalette = gMonShinyPalette_Hippopotas,
        .iconSprite = gMonIcon_Hippopotas,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_HippopotasF,
        .shinyPaletteFemale = gMonShinyPalette_HippopotasF,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_HippopotasF,
        .iconPalIndexFemale = 1,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -1, SHADOW_SIZE_L)
        FOOTPRINT(Hippopotas)
        OVERWORLD(
            sPicTable_Hippopotas,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hippopotas,
            gShinyOverworldPalette_Hippopotas
        )
        OVERWORLD_FEMALE(
            sPicTable_HippopotasF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_HIPPOWDON] =
    {
        .frontPic = gMonFrontPic_Hippowdon,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Hippowdon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Hippopotas,
    #endif
        .palette = gMonPalette_Hippowdon,
        .shinyPalette = gMonShinyPalette_Hippowdon,
        .iconSprite = gMonIcon_Hippowdon,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .paletteFemale = gMonPalette_HippowdonF,
        .shinyPaletteFemale = gMonShinyPalette_HippowdonF,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_HippowdonF,
        .iconPalIndexFemale = 1,
    #endif
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Hippowdon)
        OVERWORLD(
            sPicTable_Hippowdon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hippowdon,
            gShinyOverworldPalette_Hippowdon
        )
        OVERWORLD_PAL_FEMALE(
            gOverworldPalette_HippowdonF,
            gShinyOverworldPalette_HippowdonF
        )
    },
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
    [SPECIES_SKORUPI] =
    {
        .frontPic = gMonFrontPic_Skorupi,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Skorupi,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Skorupi,
    #endif
        .palette = gMonPalette_Skorupi,
        .shinyPalette = gMonShinyPalette_Skorupi,
        .iconSprite = gMonIcon_Skorupi,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Skorupi)
        OVERWORLD(
            sPicTable_Skorupi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skorupi,
            gShinyOverworldPalette_Skorupi
        )
    },

    [SPECIES_DRAPION] =
    {
        .frontPic = gMonFrontPic_Drapion,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Drapion,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Skorupi,
    #endif
        .palette = gMonPalette_Drapion,
        .shinyPalette = gMonShinyPalette_Drapion,
        .iconSprite = gMonIcon_Drapion,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 6, SHADOW_SIZE_L)
        FOOTPRINT(Drapion)
        OVERWORLD(
            sPicTable_Drapion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Drapion,
            gShinyOverworldPalette_Drapion
        )
    },
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
    [SPECIES_CROAGUNK] =
    {
        .frontPic = gMonFrontPic_Croagunk,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 28),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Croagunk,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Croagunk,
    #endif
        .palette = gMonPalette_Croagunk,
        .shinyPalette = gMonShinyPalette_Croagunk,
        .iconSprite = gMonIcon_Croagunk,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CroagunkF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 48),
        .backPicFemale = gMonBackPic_CroagunkF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 4, SHADOW_SIZE_S)
        FOOTPRINT(Croagunk)
        OVERWORLD(
            sPicTable_Croagunk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Croagunk,
            gShinyOverworldPalette_Croagunk
        )
        OVERWORLD_FEMALE(
            sPicTable_CroagunkF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_TOXICROAK] =
    {
        .frontPic = gMonFrontPic_Toxicroak,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toxicroak,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Croagunk,
    #endif
        .palette = gMonPalette_Toxicroak,
        .shinyPalette = gMonShinyPalette_Toxicroak,
        .iconSprite = gMonIcon_Toxicroak,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_ToxicroakF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_ToxicroakF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 7, SHADOW_SIZE_M)
        FOOTPRINT(Toxicroak)
        OVERWORLD(
            sPicTable_Toxicroak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Toxicroak,
            gShinyOverworldPalette_Toxicroak
        )
        OVERWORLD_FEMALE(
            sPicTable_ToxicroakF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
    [SPECIES_CARNIVINE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Carnivine,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Carnivine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Carnivine,
    #endif
        .palette = gMonPalette_Carnivine,
        .shinyPalette = gMonShinyPalette_Carnivine,
        .iconSprite = gMonIcon_Carnivine,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Carnivine)
        OVERWORLD(
            sPicTable_Carnivine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Carnivine,
            gShinyOverworldPalette_Carnivine
        )
    },
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_FINNEON
    [SPECIES_FINNEON] =
    {
        .frontPic = gMonFrontPic_Finneon,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Finneon,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Finneon,
    #endif
        .palette = gMonPalette_Finneon,
        .shinyPalette = gMonShinyPalette_Finneon,
        .iconSprite = gMonIcon_Finneon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_FinneonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(32, 40),
        .backPicFemale = gMonBackPic_FinneonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 40),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Finneon)
        OVERWORLD(
            sPicTable_Finneon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Finneon,
            gShinyOverworldPalette_Finneon
        )
        OVERWORLD_FEMALE(
            sPicTable_FinneonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_LUMINEON] =
    {
        .frontPic = gMonFrontPic_Lumineon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Lumineon,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Finneon,
    #endif
        .palette = gMonPalette_Lumineon,
        .shinyPalette = gMonShinyPalette_Lumineon,
        .iconSprite = gMonIcon_Lumineon,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_LumineonF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_LumineonF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Lumineon)
        OVERWORLD(
            sPicTable_Lumineon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lumineon,
            gShinyOverworldPalette_Lumineon
        )
        OVERWORLD_FEMALE(
            sPicTable_LumineonF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_FINNEON

#if P_FAMILY_SNOVER
    [SPECIES_SNOVER] =
    {
        .frontPic = gMonFrontPic_Snover,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Snover,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Snover,
    #endif
        .palette = gMonPalette_Snover,
        .shinyPalette = gMonShinyPalette_Snover,
        .iconSprite = gMonIcon_Snover,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_SnoverF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicFemale = gMonBackPic_SnoverF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Snover)
        OVERWORLD(
            sPicTable_Snover,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snover,
            gShinyOverworldPalette_Snover
        )
        OVERWORLD_FEMALE(
            sPicTable_SnoverF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_ABOMASNOW] =
    {
        .frontPic = gMonFrontPic_Abomasnow,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Abomasnow,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Snover,
    #endif
        .palette = gMonPalette_Abomasnow,
        .shinyPalette = gMonShinyPalette_Abomasnow,
        .iconSprite = gMonIcon_Abomasnow,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_AbomasnowF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_L)
        FOOTPRINT(Abomasnow)
        OVERWORLD(
            sPicTable_Abomasnow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Abomasnow,
            gShinyOverworldPalette_Abomasnow
        )
        OVERWORLD_FEMALE(
            sPicTable_AbomasnowF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .frontPic = gMonFrontPic_AbomasnowMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AbomasnowMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Snover,
    #endif
        .palette = gMonPalette_AbomasnowMega,
        .shinyPalette = gMonShinyPalette_AbomasnowMega,
        .iconSprite = gMonIcon_AbomasnowMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Abomasnow)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AbomasnowMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AbomasnowMega,
            gShinyOverworldPalette_AbomasnowMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER

#if P_FAMILY_ROTOM
    [SPECIES_ROTOM] =
    {
        .frontPic = gMonFrontPic_Rotom,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Rotom,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Rotom,
    #endif
        .palette = gMonPalette_Rotom,
        .shinyPalette = gMonShinyPalette_Rotom,
        .iconSprite = gMonIcon_Rotom,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_Rotom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rotom,
            gShinyOverworldPalette_Rotom
        )
    },

    [SPECIES_ROTOM_HEAT] =
    {
        .frontPic = gMonFrontPic_RotomHeat,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomHeat,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Rotom,
    #endif
        .palette = gMonPalette_RotomHeat,
        .shinyPalette = gMonShinyPalette_RotomHeat,
        .iconSprite = gMonIcon_RotomHeat,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomHeat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomHeat,
            gShinyOverworldPalette_RotomHeat
        )
    },

    [SPECIES_ROTOM_WASH] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_RotomWash,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomWash,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Rotom,
    #endif
        .palette = gMonPalette_RotomWash,
        .shinyPalette = gMonShinyPalette_RotomWash,
        .iconSprite = gMonIcon_RotomWash,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomWash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_RotomWash,
            gShinyOverworldPalette_RotomWash
        )
    },

    [SPECIES_ROTOM_FROST] =
    {
        .frontPic = gMonFrontPic_RotomFrost,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomFrost,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Rotom,
    #endif
        .palette = gMonPalette_RotomFrost,
        .shinyPalette = gMonShinyPalette_RotomFrost,
        .iconSprite = gMonIcon_RotomFrost,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomFrost,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomFrost,
            gShinyOverworldPalette_RotomFrost
        )
    },

    [SPECIES_ROTOM_FAN] =
    {
        .frontPic = gMonFrontPic_RotomFan,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 3),
            ANIMCMD_FRAME(0, 3),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .frontAnimDelay = 7,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomFan,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Rotom,
    #endif
        .palette = gMonPalette_RotomFan,
        .shinyPalette = gMonShinyPalette_RotomFan,
        .iconSprite = gMonIcon_RotomFan,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomFan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomFan,
            gShinyOverworldPalette_RotomFan
        )
    },

    [SPECIES_ROTOM_MOW] =
    {
        .frontPic = gMonFrontPic_RotomMow,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_RotomMow,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Rotom,
    #endif
        .palette = gMonPalette_RotomMow,
        .shinyPalette = gMonShinyPalette_RotomMow,
        .iconSprite = gMonIcon_RotomMow,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Rotom)
        OVERWORLD(
            sPicTable_RotomMow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RotomMow,
            gShinyOverworldPalette_RotomMow
        )
    },
#endif //P_FAMILY_ROTOM

#if P_FAMILY_UXIE
    [SPECIES_UXIE] =
    {
        .frontPic = gMonFrontPic_Uxie,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Uxie,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Uxie,
    #endif
        .palette = gMonPalette_Uxie,
        .shinyPalette = gMonShinyPalette_Uxie,
        .iconSprite = gMonIcon_Uxie,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Uxie)
        OVERWORLD(
            sPicTable_Uxie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Uxie,
            gShinyOverworldPalette_Uxie
        )
    },
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
    [SPECIES_MESPRIT] =
    {
        .frontPic = gMonFrontPic_Mesprit,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Mesprit,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Mesprit,
    #endif
        .palette = gMonPalette_Mesprit,
        .shinyPalette = gMonShinyPalette_Mesprit,
        .iconSprite = gMonIcon_Mesprit,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Mesprit)
        OVERWORLD(
            sPicTable_Mesprit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mesprit,
            gShinyOverworldPalette_Mesprit
        )
    },
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
    [SPECIES_AZELF] =
    {
        .frontPic = gMonFrontPic_Azelf,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Azelf,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Azelf,
    #endif
        .palette = gMonPalette_Azelf,
        .shinyPalette = gMonShinyPalette_Azelf,
        .iconSprite = gMonIcon_Azelf,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 17, SHADOW_SIZE_S)
        FOOTPRINT(Azelf)
        OVERWORLD(
            sPicTable_Azelf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Azelf,
            gShinyOverworldPalette_Azelf
        )
    },
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
    [SPECIES_DIALGA] =
    {
        .frontPic = gMonFrontPic_Dialga,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Dialga,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Dialga,
    #endif
        .palette = gMonPalette_Dialga,
        .shinyPalette = gMonShinyPalette_Dialga,
        .iconSprite = gMonIcon_Dialga,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_L)
        FOOTPRINT(Dialga)
        OVERWORLD(
            sPicTable_Dialga,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dialga,
            gShinyOverworldPalette_Dialga
        )
    },

    [SPECIES_DIALGA_ORIGIN] =
    {
        .frontPic = gMonFrontPic_DialgaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DialgaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Dialga,
    #endif
        .palette = gMonPalette_DialgaOrigin,
        .shinyPalette = gMonShinyPalette_DialgaOrigin,
        .iconSprite = gMonIcon_DialgaOrigin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Dialga)
        OVERWORLD(
            sPicTable_DialgaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_DialgaOrigin,
            gShinyOverworldPalette_DialgaOrigin
        )
    },
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
    [SPECIES_PALKIA] =
    {
        .frontPic = gMonFrontPic_Palkia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Palkia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Palkia,
    #endif
        .palette = gMonPalette_Palkia,
        .shinyPalette = gMonShinyPalette_Palkia,
        .iconSprite = gMonIcon_Palkia,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_L)
        FOOTPRINT(Palkia)
        OVERWORLD(
            sPicTable_Palkia,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Palkia,
            gShinyOverworldPalette_Palkia
        )
    },

    [SPECIES_PALKIA_ORIGIN] =
    {
        .frontPic = gMonFrontPic_PalkiaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PalkiaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Palkia,
    #endif
        .palette = gMonPalette_PalkiaOrigin,
        .shinyPalette = gMonShinyPalette_PalkiaOrigin,
        .iconSprite = gMonIcon_PalkiaOrigin,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_L)
        FOOTPRINT(Palkia)
        OVERWORLD(
            sPicTable_PalkiaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_PalkiaOrigin,
            gShinyOverworldPalette_PalkiaOrigin
        )
    },
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
    [SPECIES_HEATRAN] =
    {
        .frontPic = gMonFrontPic_Heatran,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_ORANGE,
        .backPic = gMonBackPic_Heatran,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Heatran,
    #endif
        .palette = gMonPalette_Heatran,
        .shinyPalette = gMonShinyPalette_Heatran,
        .iconSprite = gMonIcon_Heatran,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 2, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Heatran)
        OVERWORLD(
            sPicTable_Heatran,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Heatran,
            gShinyOverworldPalette_Heatran
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_HEATRAN_MEGA] =
    {
        .frontPic = gMonFrontPic_HeatranMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HeatranMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Heatran,
    #endif
        .palette = gMonPalette_HeatranMega,
        .shinyPalette = gMonShinyPalette_HeatranMega,
        .iconSprite = gMonIcon_HeatranMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Heatran)
        SHADOW(2, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
    [SPECIES_REGIGIGAS] =
    {
        .frontPic = gMonFrontPic_Regigigas,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Regigigas,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Regigigas,
    #endif
        .palette = gMonPalette_Regigigas,
        .shinyPalette = gMonShinyPalette_Regigigas,
        .iconSprite = gMonIcon_Regigigas,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Regigigas)
        OVERWORLD(
            sPicTable_Regigigas,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Regigigas,
            gShinyOverworldPalette_Regigigas
        )
    },
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
    [SPECIES_GIRATINA_ALTERED] =
    {
        .frontPic = gMonFrontPic_GiratinaAltered,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_GiratinaAltered,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Giratina,
    #endif
        .palette = gMonPalette_GiratinaAltered,
        .shinyPalette = gMonShinyPalette_GiratinaAltered,
        .iconSprite = gMonIcon_GiratinaAltered,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_L)
        FOOTPRINT(GiratinaAltered)
        OVERWORLD(
            sPicTable_GiratinaAltered,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GiratinaAltered,
            gShinyOverworldPalette_GiratinaAltered
        )
    },

    [SPECIES_GIRATINA_ORIGIN] =
    {
        .frontPic = gMonFrontPic_GiratinaOrigin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_GiratinaOrigin,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Giratina,
    #endif
        .palette = gMonPalette_GiratinaOrigin,
        .shinyPalette = gMonShinyPalette_GiratinaOrigin,
        .iconSprite = gMonIcon_GiratinaOrigin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 18, SHADOW_SIZE_L)
        FOOTPRINT(GiratinaOrigin)
        OVERWORLD(
            sPicTable_GiratinaOrigin,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GiratinaOrigin,
            gShinyOverworldPalette_GiratinaOrigin
        )
    },
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
    [SPECIES_CRESSELIA] =
    {
        .frontPic = gMonFrontPic_Cresselia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Cresselia,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Cresselia,
    #endif
        .palette = gMonPalette_Cresselia,
        .shinyPalette = gMonShinyPalette_Cresselia,
        .iconSprite = gMonIcon_Cresselia,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Cresselia)
        OVERWORLD(
            sPicTable_Cresselia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cresselia,
            gShinyOverworldPalette_Cresselia
        )
    },
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
    [SPECIES_PHIONE] =
    {
        .frontPic = gMonFrontPic_Phione,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Phione,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Phione,
    #endif
        .palette = gMonPalette_Phione,
        .shinyPalette = gMonShinyPalette_Phione,
        .iconSprite = gMonIcon_Phione,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Phione)
        OVERWORLD(
            sPicTable_Phione,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phione,
            gShinyOverworldPalette_Phione
        )
    },

    [SPECIES_MANAPHY] =
    {
        .frontPic = gMonFrontPic_Manaphy,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Manaphy,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Manaphy,
    #endif
        .palette = gMonPalette_Manaphy,
        .shinyPalette = gMonShinyPalette_Manaphy,
        .iconSprite = gMonIcon_Manaphy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 8, SHADOW_SIZE_S)
        FOOTPRINT(Manaphy)
        OVERWORLD(
            sPicTable_Manaphy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Manaphy,
            gShinyOverworldPalette_Manaphy
        )
        .eggId = EGG_ID_MANAPHY,
    },
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
    [SPECIES_DARKRAI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Darkrai,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_BLACK,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Darkrai,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Darkrai,
    #endif
        .palette = gMonPalette_Darkrai,
        .shinyPalette = gMonShinyPalette_Darkrai,
        .iconSprite = gMonIcon_Darkrai,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_M)
        FOOTPRINT(Darkrai)
        OVERWORLD(
            sPicTable_Darkrai,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Darkrai,
            gShinyOverworldPalette_Darkrai
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DARKRAI_MEGA] =
    {
        .frontPic = gMonFrontPic_DarkraiMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_DarkraiMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Darkrai,
    #endif
        .palette = gMonPalette_DarkraiMega,
        .shinyPalette = gMonShinyPalette_DarkraiMega,
        .iconSprite = gMonIcon_DarkraiMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Darkrai)
        SHADOW(-2, 18, SHADOW_SIZE_XL_BATTLE_ONLY)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
    [SPECIES_SHAYMIN_LAND] =
    {
        .frontPic = gMonFrontPic_ShayminLand,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ShayminLand,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Shaymin,
    #endif
        .palette = gMonPalette_ShayminLand,
        .shinyPalette = gMonShinyPalette_ShayminLand,
        .iconSprite = gMonIcon_ShayminLand,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Shaymin)
        OVERWORLD(
            sPicTable_ShayminLand,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ShayminLand,
            gShinyOverworldPalette_ShayminLand
        )
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_ShayminSky,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_ShayminSky,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
        .eggPalette = gEggPalette_Shaymin,
    #endif
        .palette = gMonPalette_ShayminSky,
        .shinyPalette = gMonShinyPalette_ShayminSky,
        .iconSprite = gMonIcon_ShayminSky,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 7, SHADOW_SIZE_M)
        FOOTPRINT(Shaymin)
        OVERWORLD(
            sPicTable_ShayminSky,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_ShayminSky,
            gShinyOverworldPalette_ShayminSky
        )
    },
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
#if P_ARCEUS_UNIQUE_FORM_ICONS >= GEN_9
    #define ARCEUS_ICON(typeName, iconPal)        \
        .iconSprite = gMonIcon_Arceus ##typeName, \
        .iconPalIndex = iconPal,
#else
    #define ARCEUS_ICON(typeName, iconPal)   \
        .iconSprite = gMonIcon_ArceusNormal, \
        .iconPalIndex = 1,
#endif
#if SPECIES_EGG_COLOR && GEN_4_EGG_COLORS
    #define ARCEUS_EGG_COLOR .eggPalette = gEggPalette_Arceus,
#else
    #define ARCEUS_EGG_COLOR
#endif

#define ARCEUS_SPECIES_INFO_GRAPHICS(type, typeName, iconPal)                                \
    {                                                                               \
        ARCEUS_EGG_COLOR                                                            \
        .frontPic = gMonFrontPic_Arceus,                                            \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                    \
        .frontPicYOffset = 0,                                                       \
        .frontAnimFrames = sAnims_Arceus,                                           \
        .frontAnimId = ANIM_GROW_VIBRATE,                                           \
        .backPic = gMonBackPic_Arceus,                                              \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                     \
        .backPicYOffset = 3,                                                        \
        .backAnimId = BACK_ANIM_GROW_STUTTER,                                       \
        .palette = gMonPalette_Arceus ##typeName,                                   \
        .shinyPalette = gMonShinyPalette_Arceus ##typeName,                         \
        ARCEUS_ICON(typeName, iconPal)                                              \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                     \
        SHADOW(-1, 15, SHADOW_SIZE_XL_BATTLE_ONLY)                                  \
        FOOTPRINT(Arceus)                                                           \
        OVERWORLD(                                                                  \
            sPicTable_Arceus ##typeName,                                            \
            SIZE_64x64,                                                             \
            SHADOW_SIZE_M,                                                          \
            TRACKS_FOOT,                                                            \
            sAnimTable_Following,                                                   \
            gOverworldPalette_Arceus ##typeName,                                    \
            gShinyOverworldPalette_Arceus ##typeName                                \
        )                                                                           \
    }

    [SPECIES_ARCEUS_NORMAL]   = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_NORMAL,   Normal,   1),
    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_FIGHTING, Fighting, 1),
    [SPECIES_ARCEUS_FLYING]   = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_FLYING,   Flying,   2),
    [SPECIES_ARCEUS_POISON]   = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_POISON,   Poison,   2),
    [SPECIES_ARCEUS_GROUND]   = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_GROUND,   Ground,   1),
    [SPECIES_ARCEUS_ROCK]     = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_ROCK,     Rock,     2),
    [SPECIES_ARCEUS_BUG]      = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_BUG,      Bug,      1),
    [SPECIES_ARCEUS_GHOST]    = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_GHOST,    Ghost,    2),
    [SPECIES_ARCEUS_STEEL]    = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_STEEL,    Steel,    0),
    [SPECIES_ARCEUS_FIRE]     = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_FIRE,     Fire,     0),
    [SPECIES_ARCEUS_WATER]    = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_WATER,    Water,    0),
    [SPECIES_ARCEUS_GRASS]    = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_GRASS,    Grass,    1),
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_ELECTRIC, Electric, 3),
    [SPECIES_ARCEUS_PSYCHIC]  = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_PSYCHIC,  Psychic,  1),
    [SPECIES_ARCEUS_ICE]      = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_ICE,      Ice,      0),
    [SPECIES_ARCEUS_DRAGON]   = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_DRAGON,   Dragon,   0),
    [SPECIES_ARCEUS_DARK]     = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_DARK,     Dark,     0),
    [SPECIES_ARCEUS_FAIRY]    = ARCEUS_SPECIES_INFO_GRAPHICS(TYPE_FAIRY,    Fairy,    0),
#endif //P_FAMILY_ARCEUS

#ifdef __INTELLISENSE__
};
#endif
