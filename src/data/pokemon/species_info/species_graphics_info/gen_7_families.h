#ifdef __INTELLISENSE__
const struct SpeciesGraphicsInfo gSpeciesGraphicsInfoGen7[] =
{
#endif

#if P_FAMILY_ROWLET
    [SPECIES_ROWLET] =
    {
        .frontPic = gMonFrontPic_Rowlet,
        .frontPicSize = MON_COORDS_SIZE(31, 37),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Rowlet,
        .backPicSize = MON_COORDS_SIZE(43, 36),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rowlet,
    #endif
        .palette = gMonPalette_Rowlet,
        .shinyPalette = gMonShinyPalette_Rowlet,
        .iconSprite = gMonIcon_Rowlet,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Rowlet)
        OVERWORLD(
            sPicTable_Rowlet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rowlet,
            gShinyOverworldPalette_Rowlet
        )
    },

    [SPECIES_DARTRIX] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Dartrix,
        .frontPicSize = MON_COORDS_SIZE(34, 47),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Dartrix,
        .backPicSize = MON_COORDS_SIZE(56, 54),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rowlet,
    #endif
        .palette = gMonPalette_Dartrix,
        .shinyPalette = gMonShinyPalette_Dartrix,
        .iconSprite = gMonIcon_Dartrix,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Dartrix)
        OVERWORLD(
            sPicTable_Dartrix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Dartrix,
            gShinyOverworldPalette_Dartrix
        )
    },

    [SPECIES_DECIDUEYE] =
    {                                                                                                                                                
        .frontPic = gMonFrontPic_Decidueye,
        .frontPicSize = MON_COORDS_SIZE(45, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Decidueye,
        .backPicSize = MON_COORDS_SIZE(46, 62),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rowlet,
    #endif
        .palette = gMonPalette_Decidueye,
        .shinyPalette = gMonShinyPalette_Decidueye,
        .iconSprite = gMonIcon_Decidueye,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Decidueye)
        OVERWORLD(
            sPicTable_Decidueye,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Decidueye,
            gShinyOverworldPalette_Decidueye
        )
    },
    [SPECIES_DECIDUEYE_MEGA] =
    {
        .frontPic = gMonFrontPic_DecidueyeMega,
        .frontPicSize = MON_COORDS_SIZE(45, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_DecidueyeMega,
        .backPicSize = MON_COORDS_SIZE(46, 62),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rowlet,
    #endif
        .palette = gMonPalette_DecidueyeMega,
        .shinyPalette = gMonShinyPalette_DecidueyeMega,
        .iconSprite = gMonIcon_DecidueyeMega,
        .iconPalIndex = 1,
        FOOTPRINT(Decidueye)
    },

#if P_HISUIAN_FORMS
    [SPECIES_DECIDUEYE_HISUI] =
    {
        .frontPic = gMonFrontPic_DecidueyeHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DecidueyeHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rowlet,
    #endif
        .palette = gMonPalette_DecidueyeHisui,
        .shinyPalette = gMonShinyPalette_DecidueyeHisui,
        .iconSprite = gMonIcon_DecidueyeHisui,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Decidueye)
        OVERWORLD(
            sPicTable_DecidueyeHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DecidueyeHisui,
            gShinyOverworldPalette_DecidueyeHisui
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ROWLET

#if P_FAMILY_LITTEN
    [SPECIES_LITTEN] =
    {
        .frontPic = gMonFrontPic_Litten,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Litten,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Litten,
    #endif
        .palette = gMonPalette_Litten,
        .shinyPalette = gMonShinyPalette_Litten,
        .iconSprite = gMonIcon_Litten,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Litten)
        OVERWORLD(
            sPicTable_Litten,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Litten,
            gShinyOverworldPalette_Litten
        )
    },

    [SPECIES_TORRACAT] =
    {
        .frontPic = gMonFrontPic_Torracat,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Torracat,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Litten,
    #endif
        .palette = gMonPalette_Torracat,
        .shinyPalette = gMonShinyPalette_Torracat,
        .iconSprite = gMonIcon_Torracat,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(5, 7, SHADOW_SIZE_M)
        FOOTPRINT(Torracat)
        OVERWORLD(
            sPicTable_Torracat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Torracat,
            gShinyOverworldPalette_Torracat
        )
    },

    [SPECIES_INCINEROAR] =
    {
        .frontPic = gMonFrontPic_Incineroar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Incineroar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Litten,
    #endif
        .palette = gMonPalette_Incineroar,
        .shinyPalette = gMonShinyPalette_Incineroar,
        .iconSprite = gMonIcon_Incineroar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Incineroar)
        OVERWORLD(
            sPicTable_Incineroar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Incineroar,
            gShinyOverworldPalette_Incineroar
        )
    },
    [SPECIES_INCINEROAR_MEGA] =
    {
        .frontPic = gMonFrontPic_IncineroarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_IncineroarMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Litten,
    #endif
        .palette = gMonPalette_IncineroarMega,
        .shinyPalette = gMonShinyPalette_IncineroarMega,
        .iconSprite = gMonIcon_IncineroarMega,
        .iconPalIndex = 0,
        FOOTPRINT(Incineroar)
    },
#endif //P_FAMILY_LITTEN

#if P_FAMILY_POPPLIO
    [SPECIES_POPPLIO] =
    {
        .frontPic = gMonFrontPic_Popplio,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Popplio,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Popplio,
    #endif
        .palette = gMonPalette_Popplio,
        .shinyPalette = gMonShinyPalette_Popplio,
        .iconSprite = gMonIcon_Popplio,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Popplio)
        OVERWORLD(
            sPicTable_Popplio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Popplio,
            gShinyOverworldPalette_Popplio
        )
    },

    [SPECIES_BRIONNE] =
    {
        .frontPic = gMonFrontPic_Brionne,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Brionne,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Popplio,
    #endif
        .palette = gMonPalette_Brionne,
        .shinyPalette = gMonShinyPalette_Brionne,
        .iconSprite = gMonIcon_Brionne,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-5, 6, SHADOW_SIZE_M)
        FOOTPRINT(Brionne)
        OVERWORLD(
            sPicTable_Brionne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Brionne,
            gShinyOverworldPalette_Brionne
        )
    },

    [SPECIES_PRIMARINA] =
    {
        .frontPic = gMonFrontPic_Primarina,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SHAKE_GLOW_BLUE_SLOW,
        .backPic = gMonBackPic_Primarina,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Popplio,
    #endif
        .palette = gMonPalette_Primarina,
        .shinyPalette = gMonShinyPalette_Primarina,
        .iconSprite = gMonIcon_Primarina,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 11, SHADOW_SIZE_L)
        FOOTPRINT(Primarina)
        OVERWORLD(
            sPicTable_Primarina,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Primarina,
            gShinyOverworldPalette_Primarina
        )
    },
#endif //P_FAMILY_POPPLIO

#if P_FAMILY_PIKIPEK
    [SPECIES_PIKIPEK] =
    {
        .frontPic = gMonFrontPic_Pikipek,
        .frontPicSize = MON_COORDS_SIZE(29, 40),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pikipek,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Pikipek,
    #endif
        .palette = gMonPalette_Pikipek,
        .shinyPalette = gMonShinyPalette_Pikipek,
        .iconSprite = gMonIcon_Pikipek,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Pikipek)
        OVERWORLD(
            sPicTable_Pikipek,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pikipek,
            gShinyOverworldPalette_Pikipek
        )
    },

    [SPECIES_TRUMBEAK] =
    {
        .frontPic = gMonFrontPic_Trumbeak,
        .frontPicSize = MON_COORDS_SIZE(44, 53),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Trumbeak,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Pikipek,
    #endif
        .palette = gMonPalette_Trumbeak,
        .shinyPalette = gMonShinyPalette_Trumbeak,
        .iconSprite = gMonIcon_Trumbeak,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Trumbeak)
        OVERWORLD(
            sPicTable_Trumbeak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trumbeak,
            gShinyOverworldPalette_Trumbeak
        )
    },

    [SPECIES_TOUCANNON] =
    {
        .frontPic = gMonFrontPic_Toucannon,
        .frontPicSize = MON_COORDS_SIZE(59, 59),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHAKE_GLOW_RED_SLOW,
        .backPic = gMonBackPic_Toucannon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Pikipek,
    #endif
        .palette = gMonPalette_Toucannon,
        .shinyPalette = gMonShinyPalette_Toucannon,
        .iconSprite = gMonIcon_Toucannon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(9, 12, SHADOW_SIZE_M)
        FOOTPRINT(Toucannon)
        OVERWORLD(
            sPicTable_Toucannon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Toucannon,
            gShinyOverworldPalette_Toucannon
        )
    },
#endif //P_FAMILY_PIKIPEK

#if P_FAMILY_YUNGOOS
    [SPECIES_YUNGOOS] =
    {
        .frontPic = gMonFrontPic_Yungoos,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Yungoos,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Yungoos,
    #endif
        .palette = gMonPalette_Yungoos,
        .shinyPalette = gMonShinyPalette_Yungoos,
        .iconSprite = gMonIcon_Yungoos,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-9, 1, SHADOW_SIZE_M)
        FOOTPRINT(Yungoos)
        OVERWORLD(
            sPicTable_Yungoos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yungoos,
            gShinyOverworldPalette_Yungoos
        )
    },

    [SPECIES_GUMSHOOS] =
    {
        .frontPic = gMonFrontPic_Gumshoos,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Gumshoos,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Gumshoos,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Yungoos,
    #endif
        .palette = gMonPalette_Gumshoos,
        .shinyPalette = gMonShinyPalette_Gumshoos,
        .iconSprite = gMonIcon_Gumshoos,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Gumshoos)
        OVERWORLD(
            sPicTable_Gumshoos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gumshoos,
            gShinyOverworldPalette_Gumshoos
        )
    },

    [SPECIES_GUMSHOOS_TOTEM] =
    {
        .frontPic = gMonFrontPic_Gumshoos,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Gumshoos,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Gumshoos,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Yungoos,
    #endif
        .palette = gMonPalette_Gumshoos,
        .shinyPalette = gMonShinyPalette_Gumshoos,
        .iconSprite = gMonIcon_Gumshoos,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Gumshoos)
        OVERWORLD(
            sPicTable_Gumshoos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gumshoos,
            gShinyOverworldPalette_Gumshoos
        )
    },
#endif //P_FAMILY_YUNGOOS

#if P_FAMILY_GRUBBIN
    [SPECIES_GRUBBIN] =
    {
        .frontPic = gMonFrontPic_Grubbin,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Grubbin,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Grubbin,
    #endif
        .palette = gMonPalette_Grubbin,
        .shinyPalette = gMonShinyPalette_Grubbin,
        .iconSprite = gMonIcon_Grubbin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Grubbin)
        OVERWORLD(
            sPicTable_Grubbin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grubbin,
            gShinyOverworldPalette_Grubbin
        )
    },

    [SPECIES_CHARJABUG] =
    {
        .frontPic = gMonFrontPic_Charjabug,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SHAKE_FLASH_YELLOW_SLOW,
        .backPic = gMonBackPic_Charjabug,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Grubbin,
    #endif
        .palette = gMonPalette_Charjabug,
        .shinyPalette = gMonShinyPalette_Charjabug,
        .iconSprite = gMonIcon_Charjabug,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        NO_SHADOW
        FOOTPRINT(Charjabug)
        OVERWORLD(
            sPicTable_Charjabug,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Charjabug,
            gShinyOverworldPalette_Charjabug
        )
    },

    [SPECIES_VIKAVOLT] =
    {
        .frontPic = gMonFrontPic_Vikavolt,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Vikavolt,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Vikavolt,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Grubbin,
    #endif
        .palette = gMonPalette_Vikavolt,
        .shinyPalette = gMonShinyPalette_Vikavolt,
        .iconSprite = gMonIcon_Vikavolt,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 16, SHADOW_SIZE_S)
        FOOTPRINT(Vikavolt)
        OVERWORLD(
            sPicTable_Vikavolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vikavolt,
            gShinyOverworldPalette_Vikavolt
        )
    },

    [SPECIES_VIKAVOLT_TOTEM] =
    {
        .frontPic = gMonFrontPic_Vikavolt,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Vikavolt,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Vikavolt,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Grubbin,
    #endif
        .palette = gMonPalette_Vikavolt,
        .shinyPalette = gMonShinyPalette_Vikavolt,
        .iconSprite = gMonIcon_Vikavolt,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 16, SHADOW_SIZE_S)
        FOOTPRINT(Vikavolt)
        OVERWORLD(
            sPicTable_Vikavolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vikavolt,
            gShinyOverworldPalette_Vikavolt
        )
    },
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_CRABRAWLER
    [SPECIES_CRABRAWLER] =
    {
        .frontPic = gMonFrontPic_Crabrawler,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Crabrawler,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Crabrawler,
    #endif
        .palette = gMonPalette_Crabrawler,
        .shinyPalette = gMonShinyPalette_Crabrawler,
        .iconSprite = gMonIcon_Crabrawler,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(7, 6, SHADOW_SIZE_M)
        FOOTPRINT(Crabrawler)
        OVERWORLD(
            sPicTable_Crabrawler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Crabrawler,
            gShinyOverworldPalette_Crabrawler
        )
    },

    [SPECIES_CRABOMINABLE] =
    {
        .frontPic = gMonFrontPic_Crabominable,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Crabominable,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Crabrawler,
    #endif
        .palette = gMonPalette_Crabominable,
        .shinyPalette = gMonShinyPalette_Crabominable,
        .iconSprite = gMonIcon_Crabominable,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Crabominable)
        OVERWORLD(
            sPicTable_Crabominable,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Crabominable,
            gShinyOverworldPalette_Crabominable
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CRABOMINABLE_MEGA] =
    {
        .frontPic = gMonFrontPic_CrabominableMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CrabominableMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Crabrawler,
    #endif
        .palette = gMonPalette_CrabominableMega,
        .shinyPalette = gMonShinyPalette_CrabominableMega,
        .iconSprite = gMonIcon_CrabominableMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Crabominable)
        SHADOW(-4, 17, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CRABRAWLER

#if P_FAMILY_ORICORIO
    [SPECIES_ORICORIO_BAILE] =
    {
        .frontPic = gMonFrontPic_OricorioBaile,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_OricorioBaile,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_OricorioBaile,
    #endif
        .palette = gMonPalette_OricorioBaile,
        .shinyPalette = gMonShinyPalette_OricorioBaile,
        .iconSprite = gMonIcon_OricorioBaile,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Oricorio)
        OVERWORLD(
            sPicTable_OricorioBaile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_OricorioBaile,
            gShinyOverworldPalette_OricorioBaile
        )
    },

    [SPECIES_ORICORIO_POM_POM] =
    {
        .frontPic = gMonFrontPic_OricorioPomPom,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .backPic = gMonBackPic_OricorioPomPom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_OricorioPompom,
    #endif
        .palette = gMonPalette_OricorioPomPom,
        .shinyPalette = gMonShinyPalette_OricorioPomPom,
        .iconSprite = gMonIcon_OricorioPomPom,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 8, SHADOW_SIZE_S)
        FOOTPRINT(Oricorio)
        OVERWORLD(
            sPicTable_OricorioPomPom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_OricorioPomPom,
            gShinyOverworldPalette_OricorioPomPom
        )
    },

    [SPECIES_ORICORIO_PAU] =
    {
        .frontPic = gMonFrontPic_OricorioPau,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_OricorioPau,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_OricorioPau,
    #endif
        .palette = gMonPalette_OricorioPau,
        .shinyPalette = gMonShinyPalette_OricorioPau,
        .iconSprite = gMonIcon_OricorioPau,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 11, SHADOW_SIZE_S)
        FOOTPRINT(Oricorio)
        OVERWORLD(
            sPicTable_OricorioPau,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_OricorioPau,
            gShinyOverworldPalette_OricorioPau
        )
    },

    [SPECIES_ORICORIO_SENSU] =
    {
        .frontPic = gMonFrontPic_OricorioSensu,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_OricorioSensu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_OricorioSensu,
    #endif
        .palette = gMonPalette_OricorioSensu,
        .shinyPalette = gMonShinyPalette_OricorioSensu,
        .iconSprite = gMonIcon_OricorioSensu,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 10, SHADOW_SIZE_S)
        FOOTPRINT(Oricorio)
        OVERWORLD(
            sPicTable_OricorioSensu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_OricorioSensu,
            gShinyOverworldPalette_OricorioSensu
        )
    },
#endif //P_FAMILY_ORICORIO

#if P_FAMILY_CUTIEFLY
    [SPECIES_CUTIEFLY] =
    {
        .frontPic = gMonFrontPic_Cutiefly,
        .frontPicSize = MON_COORDS_SIZE(33, 35),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 35),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 1),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Cutiefly,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Cutiefly,
    #endif
        .palette = gMonPalette_Cutiefly,
        .shinyPalette = gMonShinyPalette_Cutiefly,
        .iconSprite = gMonIcon_Cutiefly,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Cutiefly)
        OVERWORLD(
            sPicTable_Cutiefly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cutiefly,
            gShinyOverworldPalette_Cutiefly
        )
    },

    [SPECIES_RIBOMBEE] =
    {
        .frontPic = gMonFrontPic_Ribombee,
        .frontPicSize = MON_COORDS_SIZE(32, 47),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Ribombee,
        .frontAnimId = ANIM_CONVEX_DOUBLE_ARC_TWICE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Ribombee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Cutiefly,
    #endif
        .palette = gMonPalette_Ribombee,
        .shinyPalette = gMonShinyPalette_Ribombee,
        .iconSprite = gMonIcon_Ribombee,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Ribombee)
        OVERWORLD(
            sPicTable_Ribombee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ribombee,
            gShinyOverworldPalette_Ribombee
        )
    },

    [SPECIES_RIBOMBEE_TOTEM] =
    {
        .frontPic = gMonFrontPic_Ribombee,
        .frontPicSize = MON_COORDS_SIZE(32, 47),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Ribombee,
        .frontAnimId = ANIM_CONVEX_DOUBLE_ARC_TWICE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Ribombee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Cutiefly,
    #endif
        .palette = gMonPalette_Ribombee,
        .shinyPalette = gMonShinyPalette_Ribombee,
        .iconSprite = gMonIcon_Ribombee,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Ribombee)
        OVERWORLD(
            sPicTable_Ribombee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ribombee,
            gShinyOverworldPalette_Ribombee
        )
    },
#endif //P_FAMILY_CUTIEFLY

#if P_FAMILY_ROCKRUFF
    [SPECIES_ROCKRUFF] =
    {
        .frontPic = gMonFrontPic_Rockruff,
        .frontPicSize = MON_COORDS_SIZE(37, 39),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Rockruff,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rockruff,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rockruff,
    #endif
        .palette = gMonPalette_Rockruff,
        .shinyPalette = gMonShinyPalette_Rockruff,
        .iconSprite = gMonIcon_Rockruff,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Rockruff)
        OVERWORLD(
            sPicTable_Rockruff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rockruff,
            gShinyOverworldPalette_Rockruff
        )
    },

    [SPECIES_ROCKRUFF_OWN_TEMPO] =
    {
        .frontPic = gMonFrontPic_Rockruff,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Rockruff,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rockruff,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rockruff,
    #endif
        .palette = gMonPalette_Rockruff,
        .shinyPalette = gMonShinyPalette_Rockruff,
        .iconSprite = gMonIcon_Rockruff,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Rockruff)
        OVERWORLD(
            sPicTable_Rockruff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Rockruff,
            gShinyOverworldPalette_Rockruff
        )
    },

    [SPECIES_LYCANROC_MIDDAY] =
    {
        .frontPic = gMonFrontPic_LycanrocMidday,
        .frontPicSize = MON_COORDS_SIZE(57, 53),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_LycanrocMidday,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rockruff,
    #endif
        .palette = gMonPalette_LycanrocMidday,
        .shinyPalette = gMonShinyPalette_LycanrocMidday,
        .iconSprite = gMonIcon_LycanrocMidday,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Lycanroc)
        OVERWORLD(
            sPicTable_LycanrocMidday,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LycanrocMidday,
            gShinyOverworldPalette_LycanrocMidday
        )
    },

    [SPECIES_LYCANROC_MIDNIGHT] =
    {
        .frontPic = gMonFrontPic_LycanrocMidnight,
        .frontPicSize = MON_COORDS_SIZE(56, 61),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
        .backPic = gMonBackPic_LycanrocMidnight,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rockruff,
    #endif
        .palette = gMonPalette_LycanrocMidnight,
        .shinyPalette = gMonShinyPalette_LycanrocMidnight,
        .iconSprite = gMonIcon_LycanrocMidnight,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 13, SHADOW_SIZE_L)
        FOOTPRINT(Lycanroc)
        OVERWORLD(
            sPicTable_LycanrocMidnight,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LycanrocMidnight,
            gShinyOverworldPalette_LycanrocMidnight
        )
    },

    [SPECIES_LYCANROC_DUSK] =
    {
        .frontPic = gMonFrontPic_LycanrocDusk,
        .frontPicSize = MON_COORDS_SIZE(57, 58),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_LycanrocDusk,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Rockruff,
    #endif
        .palette = gMonPalette_LycanrocDusk,
        .shinyPalette = gMonShinyPalette_LycanrocDusk,
        .iconSprite = gMonIcon_LycanrocDusk,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Lycanroc)
        OVERWORLD(
            sPicTable_LycanrocDusk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LycanrocDusk,
            gShinyOverworldPalette_LycanrocDusk
        )
    },
#endif //P_FAMILY_ROCKRUFF

#if P_FAMILY_WISHIWASHI
    [SPECIES_WISHIWASHI_SOLO] =
    {
        .frontPic = gMonFrontPic_WishiwashiSolo,
        .frontPicSize = MON_COORDS_SIZE(40, 24),
        .frontPicYOffset = 20,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_WishiwashiSolo,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 18,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Wishiwashi,
    #endif
        .palette = gMonPalette_WishiwashiSolo,
        .shinyPalette = gMonShinyPalette_WishiwashiSolo,
        .iconSprite = gMonIcon_WishiwashiSolo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Wishiwashi)
        OVERWORLD(
            sPicTable_WishiwashiSolo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_WishiwashiSolo,
            gShinyOverworldPalette_WishiwashiSolo
        )
    },

    [SPECIES_WISHIWASHI_SCHOOL] =
    {
        .frontPic = gMonFrontPic_WishiwashiSchool,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 33),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_GROW,
        .backPic = gMonBackPic_WishiwashiSchool,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Wishiwashi,
    #endif
        .palette = gMonPalette_WishiwashiSchool,
        .shinyPalette = gMonShinyPalette_WishiwashiSchool,
        .iconSprite = gMonIcon_WishiwashiSchool,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 7, SHADOW_SIZE_L)
        FOOTPRINT(Wishiwashi)
    },
#endif //P_FAMILY_WISHIWASHI

#if P_FAMILY_MAREANIE
    [SPECIES_MAREANIE] =
    {
        .frontPic = gMonFrontPic_Mareanie,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mareanie,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Mareanie,
    #endif
        .palette = gMonPalette_Mareanie,
        .shinyPalette = gMonShinyPalette_Mareanie,
        .iconSprite = gMonIcon_Mareanie,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Mareanie)
        OVERWORLD(
            sPicTable_Mareanie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mareanie,
            gShinyOverworldPalette_Mareanie
        )
    },

    [SPECIES_TOXAPEX] =
    {
        .frontPic = gMonFrontPic_Toxapex,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SHAKE_GLOW_PURPLE_SLOW,
        .backPic = gMonBackPic_Toxapex,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Mareanie,
    #endif
        .palette = gMonPalette_Toxapex,
        .shinyPalette = gMonShinyPalette_Toxapex,
        .iconSprite = gMonIcon_Toxapex,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Toxapex)
        OVERWORLD(
            sPicTable_Toxapex,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Toxapex,
            gShinyOverworldPalette_Toxapex
        )
    },
#endif //P_FAMILY_MAREANIE

#if P_FAMILY_MUDBRAY
    [SPECIES_MUDBRAY] =
    {
        .frontPic = gMonFrontPic_Mudbray,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 47),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Mudbray,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Mudbray,
    #endif
        .palette = gMonPalette_Mudbray,
        .shinyPalette = gMonShinyPalette_Mudbray,
        .iconSprite = gMonIcon_Mudbray,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Mudbray)
        OVERWORLD(
            sPicTable_Mudbray,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mudbray,
            gShinyOverworldPalette_Mudbray
        )
    },

    [SPECIES_MUDSDALE] =
    {
        .frontPic = gMonFrontPic_Mudsdale,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Mudsdale,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Mudbray,
    #endif
        .palette = gMonPalette_Mudsdale,
        .shinyPalette = gMonShinyPalette_Mudsdale,
        .iconSprite = gMonIcon_Mudsdale,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 13, SHADOW_SIZE_L)
        FOOTPRINT(Mudsdale)
        OVERWORLD(
            sPicTable_Mudsdale,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mudsdale,
            gShinyOverworldPalette_Mudsdale
        )
    },
#endif //P_FAMILY_MUDBRAY

#if P_FAMILY_DEWPIDER
    [SPECIES_DEWPIDER] =
    {
        .frontPic = gMonFrontPic_Dewpider,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 9),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Dewpider,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Dewpider,
    #endif
        .palette = gMonPalette_Dewpider,
        .shinyPalette = gMonShinyPalette_Dewpider,
        .iconSprite = gMonIcon_Dewpider,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Dewpider)
        OVERWORLD(
            sPicTable_Dewpider,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dewpider,
            gShinyOverworldPalette_Dewpider
        )
    },

    [SPECIES_ARAQUANID] =
    {
        .frontPic = gMonFrontPic_Araquanid,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Araquanid,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Araquanid,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Dewpider,
    #endif
        .palette = gMonPalette_Araquanid,
        .shinyPalette = gMonShinyPalette_Araquanid,
        .iconSprite = gMonIcon_Araquanid,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Araquanid)
        OVERWORLD(
            sPicTable_Araquanid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Araquanid,
            gShinyOverworldPalette_Araquanid
        )
    },

    [SPECIES_ARAQUANID_TOTEM] =
    {
        .frontPic = gMonFrontPic_Araquanid,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Araquanid,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Araquanid,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Dewpider,
    #endif
        .palette = gMonPalette_Araquanid,
        .shinyPalette = gMonShinyPalette_Araquanid,
        .iconSprite = gMonIcon_Araquanid,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 9, SHADOW_SIZE_S)
        FOOTPRINT(Araquanid)
        OVERWORLD(
            sPicTable_Araquanid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Araquanid,
            gShinyOverworldPalette_Araquanid
        )
    },
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_FOMANTIS
    [SPECIES_FOMANTIS] =
    {
        .frontPic = gMonFrontPic_Fomantis,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Fomantis,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Fomantis,
    #endif
        .palette = gMonPalette_Fomantis,
        .shinyPalette = gMonShinyPalette_Fomantis,
        .iconSprite = gMonIcon_Fomantis,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Fomantis)
        OVERWORLD(
            sPicTable_Fomantis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fomantis,
            gShinyOverworldPalette_Fomantis
        )
    },

    [SPECIES_LURANTIS] =
    {
        .frontPic = gMonFrontPic_Lurantis,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lurantis,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Lurantis,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Fomantis,
    #endif
        .palette = gMonPalette_Lurantis,
        .shinyPalette = gMonShinyPalette_Lurantis,
        .iconSprite = gMonIcon_Lurantis,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Lurantis)
        OVERWORLD(
            sPicTable_Lurantis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lurantis,
            gShinyOverworldPalette_Lurantis
        )
    },

    [SPECIES_LURANTIS_TOTEM] =
    {
        .frontPic = gMonFrontPic_Lurantis,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lurantis,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Lurantis,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Fomantis,
    #endif
        .palette = gMonPalette_Lurantis,
        .shinyPalette = gMonShinyPalette_Lurantis,
        .iconSprite = gMonIcon_Lurantis,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Lurantis)
        OVERWORLD(
            sPicTable_Lurantis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lurantis,
            gShinyOverworldPalette_Lurantis
        )
    },
#endif //P_FAMILY_FOMANTIS

#if P_FAMILY_MORELULL
    [SPECIES_MORELULL] =
    {
        .frontPic = gMonFrontPic_Morelull,
        .frontPicSize = MON_COORDS_SIZE(24, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Morelull,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Morelull,
    #endif
        .palette = gMonPalette_Morelull,
        .shinyPalette = gMonShinyPalette_Morelull,
        .iconSprite = gMonIcon_Morelull,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Morelull)
        OVERWORLD(
            sPicTable_Morelull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Morelull,
            gShinyOverworldPalette_Morelull
        )
    },

    [SPECIES_SHIINOTIC] =
    {
        .frontPic = gMonFrontPic_Shiinotic,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SHAKE_GLOW_WHITE_SLOW,
        .backPic = gMonBackPic_Shiinotic,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Morelull,
    #endif
        .palette = gMonPalette_Shiinotic,
        .shinyPalette = gMonShinyPalette_Shiinotic,
        .iconSprite = gMonIcon_Shiinotic,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Shiinotic)
        OVERWORLD(
            sPicTable_Shiinotic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shiinotic,
            gShinyOverworldPalette_Shiinotic
        )
    },
#endif //P_FAMILY_MORELULL

#if P_FAMILY_SALANDIT
    [SPECIES_SALANDIT] =
    {
        .frontPic = gMonFrontPic_Salandit,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_RED,
        .backPic = gMonBackPic_Salandit,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Salandit,
    #endif
        .palette = gMonPalette_Salandit,
        .shinyPalette = gMonShinyPalette_Salandit,
        .iconSprite = gMonIcon_Salandit,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, 1, SHADOW_SIZE_M)
        FOOTPRINT(Salandit)
        OVERWORLD(
            sPicTable_Salandit,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Salandit,
            gShinyOverworldPalette_Salandit
        )
    },

    [SPECIES_SALAZZLE] =
    {
        .frontPic = gMonFrontPic_Salazzle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Salazzle,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Salazzle,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Salandit,
    #endif
        .palette = gMonPalette_Salazzle,
        .shinyPalette = gMonShinyPalette_Salazzle,
        .iconSprite = gMonIcon_Salazzle,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Salazzle)
        OVERWORLD(
            sPicTable_Salazzle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Salazzle,
            gShinyOverworldPalette_Salazzle
        )
    },

    [SPECIES_SALAZZLE_TOTEM] =
    {
        .frontPic = gMonFrontPic_Salazzle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Salazzle,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Salazzle,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Salandit,
    #endif
        .palette = gMonPalette_Salazzle,
        .shinyPalette = gMonShinyPalette_Salazzle,
        .iconSprite = gMonIcon_Salazzle,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Salazzle)
        OVERWORLD(
            sPicTable_Salazzle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Salazzle,
            gShinyOverworldPalette_Salazzle
        )
    },
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_STUFFUL
    [SPECIES_STUFFUL] =
    {
        .frontPic = gMonFrontPic_Stufful,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Stufful,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Stufful,
    #endif
        .palette = gMonPalette_Stufful,
        .shinyPalette = gMonShinyPalette_Stufful,
        .iconSprite = gMonIcon_Stufful,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 3, SHADOW_SIZE_M)
        FOOTPRINT(Stufful)
        OVERWORLD(
            sPicTable_Stufful,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stufful,
            gShinyOverworldPalette_Stufful
        )
    },

    [SPECIES_BEWEAR] =
    {
        .frontPic = gMonFrontPic_Bewear,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Bewear,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Stufful,
    #endif
        .palette = gMonPalette_Bewear,
        .shinyPalette = gMonShinyPalette_Bewear,
        .iconSprite = gMonIcon_Bewear,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Bewear)
        OVERWORLD(
            sPicTable_Bewear,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bewear,
            gShinyOverworldPalette_Bewear
        )
    },
#endif //P_FAMILY_STUFFUL

#if P_FAMILY_BOUNSWEET
    [SPECIES_BOUNSWEET] =
    {
        .frontPic = gMonFrontPic_Bounsweet,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),			
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bounsweet,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Bounsweet,
    #endif
        .palette = gMonPalette_Bounsweet,
        .shinyPalette = gMonShinyPalette_Bounsweet,
        .iconSprite = gMonIcon_Bounsweet,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, -3, SHADOW_SIZE_S)
        FOOTPRINT(Bounsweet)
        OVERWORLD(
            sPicTable_Bounsweet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bounsweet,
            gShinyOverworldPalette_Bounsweet
        )
    },

    [SPECIES_STEENEE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Steenee,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Steenee,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Bounsweet,
    #endif
        .palette = gMonPalette_Steenee,
        .shinyPalette = gMonShinyPalette_Steenee,
        .iconSprite = gMonIcon_Steenee,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Steenee)
        OVERWORLD(
            sPicTable_Steenee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Steenee,
            gShinyOverworldPalette_Steenee
        )
    },

    [SPECIES_TSAREENA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Tsareena,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 40),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Tsareena,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Bounsweet,
    #endif
        .palette = gMonPalette_Tsareena,
        .shinyPalette = gMonShinyPalette_Tsareena,
        .iconSprite = gMonIcon_Tsareena,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Tsareena)
        OVERWORLD(
            sPicTable_Tsareena,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tsareena,
            gShinyOverworldPalette_Tsareena
        )
    },
#endif //P_FAMILY_BOUNSWEET

#if P_FAMILY_COMFEY
    [SPECIES_COMFEY] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Comfey,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Comfey,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Comfey,
    #endif
        .palette = gMonPalette_Comfey,
        .shinyPalette = gMonShinyPalette_Comfey,
        .iconSprite = gMonIcon_Comfey,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Comfey)
        OVERWORLD(
            sPicTable_Comfey,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Comfey,
            gShinyOverworldPalette_Comfey
        )
    },
#endif //P_FAMILY_COMFEY

#if P_FAMILY_ORANGURU
    [SPECIES_ORANGURU] =
    {
        .frontPic = gMonFrontPic_Oranguru,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_SLOW,
        .backPic = gMonBackPic_Oranguru,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Oranguru,
    #endif
        .palette = gMonPalette_Oranguru,
        .shinyPalette = gMonShinyPalette_Oranguru,
        .iconSprite = gMonIcon_Oranguru,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Oranguru)
        OVERWORLD(
            sPicTable_Oranguru,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Oranguru,
            gShinyOverworldPalette_Oranguru
        )
    },
#endif //P_FAMILY_ORANGURU

#if P_FAMILY_PASSIMIAN
    [SPECIES_PASSIMIAN] =
    {
        .frontPic = gMonFrontPic_Passimian,
        .frontPicSize = MON_COORDS_SIZE(57, 60),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Passimian,
        .backPicSize = MON_COORDS_SIZE(51, 52),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Passimian,
    #endif
        .palette = gMonPalette_Passimian,
        .shinyPalette = gMonShinyPalette_Passimian,
        .iconSprite = gMonIcon_Passimian,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 12, SHADOW_SIZE_L)
        FOOTPRINT(Passimian)
        OVERWORLD(
            sPicTable_Passimian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Passimian,
            gShinyOverworldPalette_Passimian
        )
    },
#endif //P_FAMILY_PASSIMIAN

#if P_FAMILY_WIMPOD
    [SPECIES_WIMPOD] =
    {
        .frontPic = gMonFrontPic_Wimpod,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE_H_SLIDE_FAST,
        .backPic = gMonBackPic_Wimpod,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Wimpod,
    #endif
        .palette = gMonPalette_Wimpod,
        .shinyPalette = gMonShinyPalette_Wimpod,
        .iconSprite = gMonIcon_Wimpod,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-4, -3, SHADOW_SIZE_S)
        FOOTPRINT(Wimpod)
        OVERWORLD(
            sPicTable_Wimpod,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wimpod,
            gShinyOverworldPalette_Wimpod
        )
    },

    [SPECIES_GOLISOPOD] =
    {
        .frontPic = gMonFrontPic_Golisopod,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Golisopod,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Wimpod,
    #endif
        .palette = gMonPalette_Golisopod,
        .shinyPalette = gMonShinyPalette_Golisopod,
        .iconSprite = gMonIcon_Golisopod,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Golisopod)
        OVERWORLD(
            sPicTable_Golisopod,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Golisopod,
            gShinyOverworldPalette_Golisopod
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GOLISOPOD_MEGA] =
    {
        .frontPic = gMonFrontPic_GolisopodMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GolisopodMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Wimpod,
    #endif
        .palette = gMonPalette_GolisopodMega,
        .shinyPalette = gMonShinyPalette_GolisopodMega,
        .iconSprite = gMonIcon_GolisopodMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Golisopod)
        SHADOW(0, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_SANDYGAST
    [SPECIES_SANDYGAST] =
    {
        .frontPic = gMonFrontPic_Sandygast,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Sandygast,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Sandygast,
    #endif
        .palette = gMonPalette_Sandygast,
        .shinyPalette = gMonShinyPalette_Sandygast,
        .iconSprite = gMonIcon_Sandygast,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Sandygast)
        OVERWORLD(
            sPicTable_Sandygast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Sandygast,
            gShinyOverworldPalette_Sandygast
        )
    },

    [SPECIES_PALOSSAND] =
    {
        .frontPic = gMonFrontPic_Palossand,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Palossand,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Sandygast,
    #endif
        .palette = gMonPalette_Palossand,
        .shinyPalette = gMonShinyPalette_Palossand,
        .iconSprite = gMonIcon_Palossand,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Palossand)
        OVERWORLD(
            sPicTable_Palossand,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Palossand,
            gShinyOverworldPalette_Palossand
        )
    },
#endif //P_FAMILY_SANDYGAST

#if P_FAMILY_PYUKUMUKU
    [SPECIES_PYUKUMUKU] =
    {
        .frontPic = gMonFrontPic_Pyukumuku,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pyukumuku,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Pyukumuku,
    #endif
        .palette = gMonPalette_Pyukumuku,
        .shinyPalette = gMonShinyPalette_Pyukumuku,
        .iconSprite = gMonIcon_Pyukumuku,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, -3, SHADOW_SIZE_S)
        FOOTPRINT(Pyukumuku)
        OVERWORLD(
            sPicTable_Pyukumuku,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pyukumuku,
            gShinyOverworldPalette_Pyukumuku
        )
    },
#endif //P_FAMILY_PYUKUMUKU

#if P_FAMILY_TYPE_NULL
    [SPECIES_TYPE_NULL] =
    {
        .frontPic = gMonFrontPic_TypeNull,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_TypeNull,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_TypeNull,
    #endif
        .palette = gMonPalette_TypeNull,
        .shinyPalette = gMonShinyPalette_TypeNull,
        .iconSprite = gMonIcon_TypeNull,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Type_Null)
        OVERWORLD(
            sPicTable_TypeNull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TypeNull,
            gShinyOverworldPalette_TypeNull
        )
    },

#if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
    #define SILVALLY_EGG_COLOR .eggPalette = gEggPalette_TypeNull,
#else
    #define SILVALLY_EGG_COLOR
#endif

#define SILVALLY_SPECIES_INFO_GRAPHICS(type, _palette)                                       \
    {                                                                               \
        SILVALLY_EGG_COLOR                                                          \
        .frontPic = gMonFrontPic_Silvally,                                          \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                    \
        .frontPicYOffset = 0,                                                       \
        .frontAnimFrames = ANIM_FRAMES(                                             \
            ANIMCMD_FRAME(1, 30),                                                   \
            ANIMCMD_FRAME(0, 1),                                                    \
        ),                                                                          \
        .frontAnimId = ANIM_BACK_AND_LUNGE,                                         \
        .backPic = gMonBackPic_Silvally,                                            \
        .backPicSize = MON_COORDS_SIZE(56, 64),                                     \
        .backPicYOffset = 0,                                                        \
        /*.backAnimId = BACK_ANIM_NONE,*/                                           \
        .palette = gMonPalette_Silvally##_palette,                                  \
        .shinyPalette = gMonShinyPalette_Silvally##_palette,                        \
        .iconSprite = gMonIcon_Silvally,                                            \
        .iconPalIndex = 0,                                                          \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                     \
        SHADOW(1, 13, SHADOW_SIZE_L)                                                \
        FOOTPRINT(Silvally)                                                         \
        OVERWORLD(                                                                  \
            sPicTable_Silvally,                                                     \
            SIZE_32x32,                                                             \
            SHADOW_SIZE_M,                                                          \
            TRACKS_FOOT,                                                            \
            sAnimTable_Following,                                                   \
            gOverworldPalette_Silvally,                                             \
            gShinyOverworldPalette_Silvally                                         \
        )                                                                           \
    }

    [SPECIES_SILVALLY_NORMAL]   = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_NORMAL,   Normal),
    [SPECIES_SILVALLY_FIGHTING] = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_FIGHTING, Fighting),
    [SPECIES_SILVALLY_FLYING]   = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_FLYING,   Flying),
    [SPECIES_SILVALLY_POISON]   = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_POISON,   Poison),
    [SPECIES_SILVALLY_GROUND]   = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_GROUND,   Ground),
    [SPECIES_SILVALLY_ROCK]     = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_ROCK,     Rock),
    [SPECIES_SILVALLY_BUG]      = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_BUG,      Bug),
    [SPECIES_SILVALLY_GHOST]    = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_GHOST,    Ghost),
    [SPECIES_SILVALLY_STEEL]    = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_STEEL,    Steel),
    [SPECIES_SILVALLY_FIRE]     = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_FIRE,     Fire),
    [SPECIES_SILVALLY_WATER]    = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_WATER,    Water),
    [SPECIES_SILVALLY_GRASS]    = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_GRASS,    Grass),
    [SPECIES_SILVALLY_ELECTRIC] = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_ELECTRIC, Electric),
    [SPECIES_SILVALLY_PSYCHIC]  = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_PSYCHIC,  Psychic),
    [SPECIES_SILVALLY_ICE]      = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_ICE,      Ice),
    [SPECIES_SILVALLY_DRAGON]   = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_DRAGON,   Dragon),
    [SPECIES_SILVALLY_DARK]     = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_DARK,     Dark),
    [SPECIES_SILVALLY_FAIRY]    = SILVALLY_SPECIES_INFO_GRAPHICS(TYPE_FAIRY,    Fairy),
#endif //P_FAMILY_TYPE_NULL

#if P_FAMILY_MINIOR
#if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
    #define MINIOR_EGG_COLOR .eggPalette = gEggPalette_Minior,
#else
    #define MINIOR_EGG_COLOR
#endif

#define MINIOR_MISC_INFO_GRAPHICS(color)                                             \
        MINIOR_EGG_COLOR                                                    \
        .noFlip = TRUE,                                                     \
        FOOTPRINT(Minior)

#define MINIOR_METEOR_SPECIES_INFO_GRAPHICS(Form, heldItem)          \
    {                                                       \
        .frontPic = gMonFrontPic_MiniorMeteor,              \
        .frontPicSize = MON_COORDS_SIZE(48, 40),            \
        .frontPicYOffset = 14,                              \
        .frontAnimFrames = ANIM_FRAMES(                     \
            ANIMCMD_FRAME(0, 10),                           \
            ANIMCMD_FRAME(1, 30),                           \
            ANIMCMD_FRAME(0, 1),                            \
        ),                                                  \
        .frontAnimId = ANIM_BACK_FLIP_BIG,                  \
        .enemyMonElevation = 17,                            \
        .backPic = gMonBackPic_MiniorMeteor,                \
        .backPicSize = MON_COORDS_SIZE(56, 40),             \
        .backPicYOffset = 11,                               \
        /*.backAnimId = BACK_ANIM_NONE,*/                   \
        .palette = gMonPalette_MiniorMeteor,                \
        .shinyPalette = gMonShinyPalette_MiniorMeteor,      \
        .iconSprite = gMonIcon_MiniorMeteor,                \
        .iconPalIndex = 0,                                  \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,             \
        SHADOW(0, 14, SHADOW_SIZE_S)                        \
        OVERWORLD(                                          \
            sPicTable_MiniorMeteor,                         \
            SIZE_32x32,                                     \
            SHADOW_SIZE_M,                                  \
            TRACKS_FOOT,                                    \
            sAnimTable_Following,                           \
            gOverworldPalette_MiniorMeteor,                 \
            gShinyOverworldPalette_MiniorMeteor             \
        )                                                   \
        MINIOR_MISC_INFO_GRAPHICS(BODY_COLOR_BROWN)                 \
    }

#define MINIOR_CORE_SPECIES_INFO_GRAPHICS(Form, color, iconPal, heldItem)\
    {                                                           \
        .frontPic = gMonFrontPic_MiniorCore,                    \
        .frontPicSize = MON_COORDS_SIZE(48, 40),                \
        .frontPicYOffset = 16,                                  \
        .frontAnimFrames = ANIM_FRAMES(                         \
            ANIMCMD_FRAME(0, 30),                               \
            ANIMCMD_FRAME(1, 50),                               \
            ANIMCMD_FRAME(0, 1),                                \
        ),                                                      \
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,          \
        .enemyMonElevation = 17,                                \
        .backPic = gMonBackPic_MiniorCore,                      \
        .backPicSize = MON_COORDS_SIZE(56, 40),                 \
        .backPicYOffset = 13,                                   \
        /*.backAnimId = BACK_ANIM_NONE,*/                       \
        .palette = gMonPalette_MiniorCore##Form,                \
        .shinyPalette = gMonShinyPalette_MiniorCore,            \
        .iconSprite = gMonIcon_MiniorCore##Form,                \
        .iconPalIndex = iconPal,                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                 \
        SHADOW(-2, 12, SHADOW_SIZE_S)                           \
        MINIOR_MISC_INFO_GRAPHICS(color)                                \
    }

    [SPECIES_MINIOR_METEOR_RED]    = MINIOR_METEOR_SPECIES_INFO_GRAPHICS(Red,    ITEM_HARD_STONE),
    [SPECIES_MINIOR_METEOR_ORANGE] = MINIOR_METEOR_SPECIES_INFO_GRAPHICS(Orange, ITEM_HARD_STONE),
    [SPECIES_MINIOR_METEOR_YELLOW] = MINIOR_METEOR_SPECIES_INFO_GRAPHICS(Yellow, ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_METEOR_GREEN]  = MINIOR_METEOR_SPECIES_INFO_GRAPHICS(Green,  ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_METEOR_BLUE]   = MINIOR_METEOR_SPECIES_INFO_GRAPHICS(Blue,   ITEM_HARD_STONE),
    [SPECIES_MINIOR_METEOR_INDIGO] = MINIOR_METEOR_SPECIES_INFO_GRAPHICS(Indigo, ITEM_HARD_STONE),
    [SPECIES_MINIOR_METEOR_VIOLET] = MINIOR_METEOR_SPECIES_INFO_GRAPHICS(Violet, ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_CORE_RED]      = MINIOR_CORE_SPECIES_INFO_GRAPHICS(Red,    BODY_COLOR_RED,    0, ITEM_HARD_STONE),
    [SPECIES_MINIOR_CORE_ORANGE]   = MINIOR_CORE_SPECIES_INFO_GRAPHICS(Orange, BODY_COLOR_RED,    0, ITEM_HARD_STONE),
    [SPECIES_MINIOR_CORE_YELLOW]   = MINIOR_CORE_SPECIES_INFO_GRAPHICS(Yellow, BODY_COLOR_YELLOW, 0, ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_CORE_GREEN]    = MINIOR_CORE_SPECIES_INFO_GRAPHICS(Green,  BODY_COLOR_GREEN,  1, ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_CORE_BLUE]     = MINIOR_CORE_SPECIES_INFO_GRAPHICS(Blue,   BODY_COLOR_BLUE,   0, ITEM_HARD_STONE),
    [SPECIES_MINIOR_CORE_INDIGO]   = MINIOR_CORE_SPECIES_INFO_GRAPHICS(Indigo, BODY_COLOR_BLUE,   0, ITEM_HARD_STONE),
    [SPECIES_MINIOR_CORE_VIOLET]   = MINIOR_CORE_SPECIES_INFO_GRAPHICS(Violet, BODY_COLOR_PURPLE, 2, ITEM_FLOAT_STONE),
#endif //P_FAMILY_MINIOR

#if P_FAMILY_KOMALA
    [SPECIES_KOMALA] =
    {
        .frontPic = gMonFrontPic_Komala,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_H_DIP,
        .backPic = gMonBackPic_Komala,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Komala,
    #endif
        .palette = gMonPalette_Komala,
        .shinyPalette = gMonShinyPalette_Komala,
        .iconSprite = gMonIcon_Komala,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-4, 0, SHADOW_SIZE_S)
        FOOTPRINT(Komala)
        OVERWORLD(
            sPicTable_Komala,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Komala,
            gShinyOverworldPalette_Komala
        )
    },
#endif //P_FAMILY_KOMALA

#if P_FAMILY_TURTONATOR
    [SPECIES_TURTONATOR] =
    {
        .frontPic = gMonFrontPic_Turtonator,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SHAKE_GLOW_RED,
        .backPic = gMonBackPic_Turtonator,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Turtonator,
    #endif
        .palette = gMonPalette_Turtonator,
        .shinyPalette = gMonShinyPalette_Turtonator,
        .iconSprite = gMonIcon_Turtonator,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Turtonator)
        OVERWORLD(
            sPicTable_Turtonator,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Turtonator,
            gShinyOverworldPalette_Turtonator
        )
    },
#endif //P_FAMILY_TURTONATOR

#if P_FAMILY_TOGEDEMARU
    [SPECIES_TOGEDEMARU] =
    {
        .frontPic = gMonFrontPic_Togedemaru,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Togedemaru,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .backPic = gMonBackPic_Togedemaru,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Togedemaru,
    #endif
        .palette = gMonPalette_Togedemaru,
        .shinyPalette = gMonShinyPalette_Togedemaru,
        .iconSprite = gMonIcon_Togedemaru,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Togedemaru)
        OVERWORLD(
            sPicTable_Togedemaru,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Togedemaru,
            gShinyOverworldPalette_Togedemaru
        )
    },

    [SPECIES_TOGEDEMARU_TOTEM] =
    {
        .frontPic = gMonFrontPic_Togedemaru,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Togedemaru,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .backPic = gMonBackPic_Togedemaru,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Togedemaru,
    #endif
        .palette = gMonPalette_Togedemaru,
        .shinyPalette = gMonShinyPalette_Togedemaru,
        .iconSprite = gMonIcon_Togedemaru,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Togedemaru)
        OVERWORLD(
            sPicTable_Togedemaru,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Togedemaru,
            gShinyOverworldPalette_Togedemaru
        )
    },
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_MIMIKYU
    [SPECIES_MIMIKYU_DISGUISED] =
    {
        .frontPic = gMonFrontPic_MimikyuDisguised,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_MimikyuDisguised,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_MimikyuDisguised,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Mimikyu,
    #endif
        .palette = gMonPalette_MimikyuDisguised,
        .shinyPalette = gMonShinyPalette_MimikyuDisguised,
        .iconSprite = gMonIcon_MimikyuDisguised,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mimikyu)
        OVERWORLD(
            sPicTable_MimikyuDisguised,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_MimikyuDisguised,
            gShinyOverworldPalette_MimikyuDisguised
        )
    },

    [SPECIES_MIMIKYU_BUSTED] =
    {
        .frontPic = gMonFrontPic_MimikyuBusted,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MimikyuBusted,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Mimikyu,
    #endif
        .palette = gMonPalette_MimikyuBusted,
        .shinyPalette = gMonShinyPalette_MimikyuBusted,
        .iconSprite = gMonIcon_MimikyuBusted,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mimikyu)
    },

    [SPECIES_MIMIKYU_TOTEM_DISGUISED] =
    {
        .frontPic = gMonFrontPic_MimikyuDisguised,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_MimikyuDisguised,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MimikyuDisguised,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Mimikyu,
    #endif
        .palette = gMonPalette_MimikyuDisguised,
        .shinyPalette = gMonShinyPalette_MimikyuDisguised,
        .iconSprite = gMonIcon_MimikyuDisguised,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mimikyu)
        OVERWORLD(
            sPicTable_MimikyuDisguised,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MimikyuDisguised,
            gShinyOverworldPalette_MimikyuDisguised
        )
    },

    [SPECIES_MIMIKYU_BUSTED_TOTEM] =
    {
        .frontPic = gMonFrontPic_MimikyuBusted,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MimikyuBusted,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Mimikyu,
    #endif
        .palette = gMonPalette_MimikyuBusted,
        .shinyPalette = gMonShinyPalette_MimikyuBusted,
        .iconSprite = gMonIcon_MimikyuBusted,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Mimikyu)
    },
#endif //P_FAMILY_MIMIKYU

#if P_FAMILY_BRUXISH
    [SPECIES_BRUXISH] =
    {
        .frontPic = gMonFrontPic_Bruxish,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_H_SPRING,
        .backPic = gMonBackPic_Bruxish,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Bruxish,
    #endif
        .palette = gMonPalette_Bruxish,
        .shinyPalette = gMonShinyPalette_Bruxish,
        .iconSprite = gMonIcon_Bruxish,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Bruxish)
        OVERWORLD(
            sPicTable_Bruxish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bruxish,
            gShinyOverworldPalette_Bruxish
        )
    },
#endif //P_FAMILY_BRUXISH

#if P_FAMILY_DRAMPA
    [SPECIES_DRAMPA] =
    {
        .frontPic = gMonFrontPic_Drampa,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Drampa,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Drampa,
    #endif
        .palette = gMonPalette_Drampa,
        .shinyPalette = gMonShinyPalette_Drampa,
        .iconSprite = gMonIcon_Drampa,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Drampa)
        OVERWORLD(
            sPicTable_Drampa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Drampa,
            gShinyOverworldPalette_Drampa
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DRAMPA_MEGA] =
    {
        .frontPic = gMonFrontPic_DrampaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_DrampaMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Drampa,
    #endif
        .palette = gMonPalette_DrampaMega,
        .shinyPalette = gMonShinyPalette_DrampaMega,
        .iconSprite = gMonIcon_DrampaMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Drampa)
        SHADOW(-6, 16, SHADOW_SIZE_XL_BATTLE_ONLY)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_DHELMISE
    [SPECIES_DHELMISE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Dhelmise,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 2,
        .backPic = gMonBackPic_Dhelmise,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Dhelmise,
    #endif
        .palette = gMonPalette_Dhelmise,
        .shinyPalette = gMonShinyPalette_Dhelmise,
        .iconSprite = gMonIcon_Dhelmise,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Dhelmise)
        OVERWORLD(
            sPicTable_Dhelmise,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dhelmise,
            gShinyOverworldPalette_Dhelmise
        )
    },
#endif //P_FAMILY_DHELMISE

#if P_FAMILY_JANGMO_O
    [SPECIES_JANGMO_O] =
    {
        .frontPic = gMonFrontPic_JangmoO,
        .frontPicSize = MON_COORDS_SIZE(36, 43),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_JangmoO,
        .backPicSize = MON_COORDS_SIZE(42, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_JangmoO,
    #endif
        .palette = gMonPalette_JangmoO,
        .shinyPalette = gMonShinyPalette_JangmoO,
        .iconSprite = gMonIcon_JangmoO,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(JangmoO)
        OVERWORLD(
            sPicTable_JangmoO,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_JangmoO,
            gShinyOverworldPalette_JangmoO
        )
    },

    [SPECIES_HAKAMO_O] =
    {
        .frontPic = gMonFrontPic_HakamoO,
        .frontPicSize = MON_COORDS_SIZE(53, 61),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_HakamoO,
        .backPicSize = MON_COORDS_SIZE(49, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_JangmoO,
    #endif
        .palette = gMonPalette_HakamoO,
        .shinyPalette = gMonShinyPalette_HakamoO,
        .iconSprite = gMonIcon_HakamoO,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(HakamoO)
        OVERWORLD(
            sPicTable_HakamoO,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HakamoO,
            gShinyOverworldPalette_HakamoO
        )
    },

    [SPECIES_KOMMO_O] =
    {
        .frontPic = gMonFrontPic_KommoO,
        .frontPicSize = MON_COORDS_SIZE(63, 63),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kommo_O,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_KommoO,
        .backPicSize = MON_COORDS_SIZE(60, 60),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_JangmoO,
    #endif
        .palette = gMonPalette_KommoO,
        .shinyPalette = gMonShinyPalette_KommoO,
        .iconSprite = gMonIcon_KommoO,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(KommoO)
        OVERWORLD(
            sPicTable_KommoO,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_KommoO,
            gShinyOverworldPalette_KommoO
        )
    },

    [SPECIES_KOMMO_O_TOTEM] =
    {
        .frontPic = gMonFrontPic_KommoO,
        .frontPicSize = MON_COORDS_SIZE(63, 63),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kommo_O,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_KommoO,
        .backPicSize = MON_COORDS_SIZE(60, 60),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_JangmoO,
    #endif
        .palette = gMonPalette_KommoO,
        .shinyPalette = gMonShinyPalette_KommoO,
        .iconSprite = gMonIcon_KommoO,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(KommoO)
        OVERWORLD(
            sPicTable_KommoO,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_KommoO,
            gShinyOverworldPalette_KommoO
        )
    },
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_TAPU_KOKO
    [SPECIES_TAPU_KOKO] =
    {
        .frontPic = gMonFrontPic_TapuKoko,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_TRIANGLE_DOWN_TWICE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_TapuKoko,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_TapuKoko,
    #endif
        .palette = gMonPalette_TapuKoko,
        .shinyPalette = gMonShinyPalette_TapuKoko,
        .iconSprite = gMonIcon_TapuKoko,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 19, SHADOW_SIZE_M)
        FOOTPRINT(TapuKoko)
        OVERWORLD(
            sPicTable_TapuKoko,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TapuKoko,
            gShinyOverworldPalette_TapuKoko
        )
    },
#endif //P_FAMILY_TAPU_KOKO

#if P_FAMILY_TAPU_LELE
    [SPECIES_TAPU_LELE] =
    {
        .frontPic = gMonFrontPic_TapuLele,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_TapuLele,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_TapuLele,
    #endif
        .palette = gMonPalette_TapuLele,
        .shinyPalette = gMonShinyPalette_TapuLele,
        .iconSprite = gMonIcon_TapuLele,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(TapuLele)
        OVERWORLD(
            sPicTable_TapuLele,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TapuLele,
            gShinyOverworldPalette_TapuLele
        )
    },
#endif //P_FAMILY_TAPU_LELE

#if P_FAMILY_TAPU_BULU
    [SPECIES_TAPU_BULU] =
    {
        .frontPic = gMonFrontPic_TapuBulu,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_TapuBulu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_TapuBulu,
    #endif
        .palette = gMonPalette_TapuBulu,
        .shinyPalette = gMonShinyPalette_TapuBulu,
        .iconSprite = gMonIcon_TapuBulu,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 16, SHADOW_SIZE_M)
        FOOTPRINT(TapuBulu)
        OVERWORLD(
            sPicTable_TapuBulu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TapuBulu,
            gShinyOverworldPalette_TapuBulu
        )
    },
#endif //P_FAMILY_TAPU_BULU

#if P_FAMILY_TAPU_FINI
    [SPECIES_TAPU_FINI] =
    {
        .frontPic = gMonFrontPic_TapuFini,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(1, 60),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SHAKE_GLOW_BLUE_SLOW,
        .frontAnimDelay = 5,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_TapuFini,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_TapuFini,
    #endif
        .palette = gMonPalette_TapuFini,
        .shinyPalette = gMonShinyPalette_TapuFini,
        .iconSprite = gMonIcon_TapuFini,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 15, SHADOW_SIZE_M)
        FOOTPRINT(TapuFini)
        OVERWORLD(
            sPicTable_TapuFini,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TapuFini,
            gShinyOverworldPalette_TapuFini
        )
    },
#endif //P_FAMILY_TAPU_FINI

#if P_FAMILY_COSMOG
    [SPECIES_COSMOG] =
    {
        .frontPic = gMonFrontPic_Cosmog,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Cosmog,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Cosmog,
    #endif
        .palette = gMonPalette_Cosmog,
        .shinyPalette = gMonShinyPalette_Cosmog,
        .iconSprite = gMonIcon_Cosmog,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Cosmog)
        OVERWORLD(
            sPicTable_Cosmog,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cosmog,
            gShinyOverworldPalette_Cosmog
        )
    },

    [SPECIES_COSMOEM] =
    {
        .frontPic = gMonFrontPic_Cosmoem,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 40),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Cosmoem,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Cosmog,
    #endif
        .palette = gMonPalette_Cosmoem,
        .shinyPalette = gMonShinyPalette_Cosmoem,
        .iconSprite = gMonIcon_Cosmoem,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Cosmoem)
        OVERWORLD(
            sPicTable_Cosmoem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cosmoem,
            gShinyOverworldPalette_Cosmoem
        )
    },

    [SPECIES_SOLGALEO] =
    {
        .frontPic = gMonFrontPic_Solgaleo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 57),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
        .backPic = gMonBackPic_Solgaleo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Cosmog,
    #endif
        .palette = gMonPalette_Solgaleo,
        .shinyPalette = gMonShinyPalette_Solgaleo,
        .iconSprite = gMonIcon_Solgaleo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Solgaleo)
        OVERWORLD(
            sPicTable_Solgaleo,
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Solgaleo,
            gShinyOverworldPalette_Solgaleo
        )
    },

    [SPECIES_LUNALA] =
    {
        .frontPic = gMonFrontPic_Lunala,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Lunala,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Cosmog,
    #endif
        .palette = gMonPalette_Lunala,
        .shinyPalette = gMonShinyPalette_Lunala,
        .iconSprite = gMonIcon_Lunala,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 17, SHADOW_SIZE_L)
        FOOTPRINT(Lunala)
        OVERWORLD(
            sPicTable_Lunala,
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lunala,
            gShinyOverworldPalette_Lunala
        )
    },
#endif //P_FAMILY_COSMOG

#if P_FAMILY_NIHILEGO
    [SPECIES_NIHILEGO] =
    {
        .frontPic = gMonFrontPic_Nihilego,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Nihilego,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Nihilego,
    #endif
        .palette = gMonPalette_Nihilego,
        .shinyPalette = gMonShinyPalette_Nihilego,
        .iconSprite = gMonIcon_Nihilego,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_S)
        FOOTPRINT(Nihilego)
        OVERWORLD(
            sPicTable_Nihilego,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nihilego,
            gShinyOverworldPalette_Nihilego
        )
    },
#endif //P_FAMILY_NIHILEGO

#if P_FAMILY_BUZZWOLE
    [SPECIES_BUZZWOLE] =
    {
        .frontPic = gMonFrontPic_Buzzwole,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
        .backPic = gMonBackPic_Buzzwole,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Buzzwole,
    #endif
        .palette = gMonPalette_Buzzwole,
        .shinyPalette = gMonShinyPalette_Buzzwole,
        .iconSprite = gMonIcon_Buzzwole,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Buzzwole)
        OVERWORLD(
            sPicTable_Buzzwole,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Buzzwole,
            gShinyOverworldPalette_Buzzwole
        )
    },
#endif //P_FAMILY_BUZZWOLE

#if P_FAMILY_PHEROMOSA
    [SPECIES_PHEROMOSA] =
    {
        .frontPic = gMonFrontPic_Pheromosa,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Pheromosa,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Pheromosa,
    #endif
        .palette = gMonPalette_Pheromosa,
        .shinyPalette = gMonShinyPalette_Pheromosa,
        .iconSprite = gMonIcon_Pheromosa,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Pheromosa)
        OVERWORLD(
            sPicTable_Pheromosa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pheromosa,
            gShinyOverworldPalette_Pheromosa
        )
    },
#endif //P_FAMILY_PHEROMOSA

#if P_FAMILY_XURKITREE
    [SPECIES_XURKITREE] =
    {
        .frontPic = gMonFrontPic_Xurkitree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SHAKE_FLASH_YELLOW_FAST,
        .backPic = gMonBackPic_Xurkitree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Xurkitree,
    #endif
        .palette = gMonPalette_Xurkitree,
        .shinyPalette = gMonShinyPalette_Xurkitree,
        .iconSprite = gMonIcon_Xurkitree,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Xurkitree)
        OVERWORLD(
            sPicTable_Xurkitree,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Xurkitree,
            gShinyOverworldPalette_Xurkitree
        )
    },
#endif //P_FAMILY_XURKITREE

#if P_FAMILY_CELESTEELA
    [SPECIES_CELESTEELA] =
    {
        .frontPic = gMonFrontPic_Celesteela,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Celesteela,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Celesteela,
    #endif
        .palette = gMonPalette_Celesteela,
        .shinyPalette = gMonShinyPalette_Celesteela,
        .iconSprite = gMonIcon_Celesteela,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Celesteela)
        OVERWORLD(
            sPicTable_Celesteela,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Celesteela,
            gShinyOverworldPalette_Celesteela
        )
    },
#endif //P_FAMILY_CELESTEELA

#if P_FAMILY_KARTANA
    [SPECIES_KARTANA] =
    {
        .frontPic = gMonFrontPic_Kartana,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_SWING_CONVEX_FAST,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Kartana,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Kartana,
    #endif
        .palette = gMonPalette_Kartana,
        .shinyPalette = gMonShinyPalette_Kartana,
        .iconSprite = gMonIcon_Kartana,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Kartana)
        OVERWORLD(
            sPicTable_Kartana,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kartana,
            gShinyOverworldPalette_Kartana
        )
    },
#endif //P_FAMILY_KARTANA

#if P_FAMILY_GUZZLORD
    [SPECIES_GUZZLORD] =
    {
        .frontPic = gMonFrontPic_Guzzlord,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_FAST,
        .backPic = gMonBackPic_Guzzlord,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Guzzlord,
    #endif
        .palette = gMonPalette_Guzzlord,
        .shinyPalette = gMonShinyPalette_Guzzlord,
        .iconSprite = gMonIcon_Guzzlord,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Guzzlord)
        OVERWORLD(
            sPicTable_Guzzlord,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Guzzlord,
            gShinyOverworldPalette_Guzzlord
        )
    },
#endif //P_FAMILY_GUZZLORD

#if P_FAMILY_NECROZMA
    [SPECIES_NECROZMA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Necrozma,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Necrozma,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Necrozma,
    #endif
        .palette = gMonPalette_Necrozma,
        .shinyPalette = gMonShinyPalette_Necrozma,
        .iconSprite = gMonIcon_Necrozma,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 15, SHADOW_SIZE_M)
        FOOTPRINT(Necrozma)
        OVERWORLD(
            sPicTable_Necrozma,
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Necrozma,
            gShinyOverworldPalette_Necrozma
        )
    },

#if P_FUSION_FORMS
    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_NecrozmaDuskMane,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_GROW_STUTTER_SLOW,
        .backPic = gMonBackPic_NecrozmaDuskMane,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Necrozma,
    #endif
        .palette = gMonPalette_NecrozmaDuskMane,
        .shinyPalette = gMonShinyPalette_NecrozmaDuskMane,
        .iconSprite = gMonIcon_NecrozmaDuskMane,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Necrozma)
        OVERWORLD(
            sPicTable_NecrozmaDuskMane,
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_NecrozmaDuskMane,
            gShinyOverworldPalette_NecrozmaDuskMane
        )
    },

    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_NecrozmaDawnWings,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_NecrozmaDawnWings,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Necrozma,
    #endif
        .palette = gMonPalette_NecrozmaDawnWings,
        .shinyPalette = gMonShinyPalette_NecrozmaDawnWings,
        .iconSprite = gMonIcon_NecrozmaDawnWings,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 17, SHADOW_SIZE_L)
        FOOTPRINT(Necrozma)
        OVERWORLD(
            sPicTable_NecrozmaDawnWings,
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_NecrozmaDawnWings,
            gShinyOverworldPalette_NecrozmaDawnWings
        )
    },

#if P_ULTRA_BURST_FORMS
    [SPECIES_NECROZMA_ULTRA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_NecrozmaUltra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_NecrozmaUltra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Necrozma,
    #endif
        .palette = gMonPalette_NecrozmaUltra,
        .shinyPalette = gMonShinyPalette_NecrozmaUltra,
        .iconSprite = gMonIcon_NecrozmaUltra,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 16, SHADOW_SIZE_L)
        FOOTPRINT(Necrozma)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_NecrozmaUltra,
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_NecrozmaUltra,
            gShinyOverworldPalette_NecrozmaUltra
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_ULTRA_BURST_FORMS
#endif //P_FUSION_FORMS
#endif //P_FAMILY_NECROZMA

#if P_FAMILY_MAGEARNA
    [SPECIES_MAGEARNA] =
    {
        .frontPic = gMonFrontPic_Magearna,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magearna,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Magearna,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Magearna,
    #endif
        .palette = gMonPalette_Magearna,
        .shinyPalette = gMonShinyPalette_Magearna,
        .iconSprite = gMonIcon_Magearna,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Magearna)
        OVERWORLD(
            sPicTable_Magearna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Magearna,
            gShinyOverworldPalette_Magearna
        )
    },

    [SPECIES_MAGEARNA_ORIGINAL] =
    {
        .frontPic = gMonFrontPic_MagearnaOriginal,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magearna,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_MagearnaOriginal,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Magearna,
    #endif
        .palette = gMonPalette_MagearnaOriginal,
        .shinyPalette = gMonShinyPalette_MagearnaOriginal,
        .iconSprite = gMonIcon_MagearnaOriginal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Magearna)
        OVERWORLD(
            sPicTable_MagearnaOriginal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MagearnaOriginal,
            gShinyOverworldPalette_MagearnaOriginal
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MAGEARNA_MEGA] =
    {
        .frontPic = gMonFrontPic_MagearnaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MagearnaMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Magearna,
    #endif
        .palette = gMonPalette_MagearnaMega,
        .shinyPalette = gMonShinyPalette_MagearnaMega,
        .iconSprite = gMonIcon_MagearnaMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Magearna)
        SHADOW(-1, 15, SHADOW_SIZE_M)
    },

    [SPECIES_MAGEARNA_ORIGINAL_MEGA] =
    {
        .frontPic = gMonFrontPic_MagearnaOriginalMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MagearnaOriginalMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Magearna,
    #endif
        .palette = gMonPalette_MagearnaOriginalMega,
        .shinyPalette = gMonShinyPalette_MagearnaOriginalMega,
        .iconSprite = gMonIcon_MagearnaOriginalMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Magearna)
        SHADOW(-1, 15, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGEARNA

#if P_FAMILY_MARSHADOW
    [SPECIES_MARSHADOW] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Marshadow,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 54),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Marshadow,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Marshadow,
    #endif
        .palette = gMonPalette_Marshadow,
        .shinyPalette = gMonShinyPalette_Marshadow,
        .iconSprite = gMonIcon_Marshadow,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Marshadow)
        OVERWORLD(
            sPicTable_Marshadow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Marshadow,
            gShinyOverworldPalette_Marshadow
        )
    },
#endif //P_FAMILY_MARSHADOW

#if P_FAMILY_POIPOLE
    [SPECIES_POIPOLE] =
    {
        .frontPic = gMonFrontPic_Poipole,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Poipole,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Poipole,
    #endif
        .palette = gMonPalette_Poipole,
        .shinyPalette = gMonShinyPalette_Poipole,
        .iconSprite = gMonIcon_Poipole,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Poipole)
        OVERWORLD(
            sPicTable_Poipole,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Poipole,
            gShinyOverworldPalette_Poipole
        )
    },

    [SPECIES_NAGANADEL] =
    {
        .frontPic = gMonFrontPic_Naganadel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Naganadel,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Poipole,
    #endif
        .palette = gMonPalette_Naganadel,
        .shinyPalette = gMonShinyPalette_Naganadel,
        .iconSprite = gMonIcon_Naganadel,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 17, SHADOW_SIZE_M)
        FOOTPRINT(Naganadel)
        OVERWORLD(
            sPicTable_Naganadel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Naganadel,
            gShinyOverworldPalette_Naganadel
        )
    },
#endif //P_FAMILY_POIPOLE

#if P_FAMILY_STAKATAKA
    [SPECIES_STAKATAKA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Stakataka,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_V_SHAKE_TWICE_SLOW,
        .backPic = gMonBackPic_Stakataka,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Stakataka,
    #endif
        .palette = gMonPalette_Stakataka,
        .shinyPalette = gMonShinyPalette_Stakataka,
        .iconSprite = gMonIcon_Stakataka,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 15, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Stakataka)
        OVERWORLD(
            sPicTable_Stakataka,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stakataka,
            gShinyOverworldPalette_Stakataka
        )
    },
#endif //P_FAMILY_STAKATAKA

#if P_FAMILY_BLACEPHALON
    [SPECIES_BLACEPHALON] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Blacephalon,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_SHAKE_GLOW_RED,
        .backPic = gMonBackPic_Blacephalon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Blacephalon,
    #endif
        .palette = gMonPalette_Blacephalon,
        .shinyPalette = gMonShinyPalette_Blacephalon,
        .iconSprite = gMonIcon_Blacephalon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Blacephalon)
        OVERWORLD(
            sPicTable_Blacephalon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Blacephalon,
            gShinyOverworldPalette_Blacephalon
        )
    },
#endif //P_FAMILY_BLACEPHALON

#if P_FAMILY_ZERAORA
    [SPECIES_ZERAORA] =
    {
        .frontPic = gMonFrontPic_Zeraora,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
		),
        .frontAnimId = ANIM_PIVOT_SHAKE,
        .backPic = gMonBackPic_Zeraora,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Zeraora,
    #endif
        .palette = gMonPalette_Zeraora,
        .shinyPalette = gMonShinyPalette_Zeraora,
        .iconSprite = gMonIcon_Zeraora,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Zeraora)
        OVERWORLD(
            sPicTable_Zeraora,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zeraora,
            gShinyOverworldPalette_Zeraora
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_ZERAORA_MEGA] =
    {

        .frontPic = gMonFrontPic_ZeraoraMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZeraoraMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Zeraora,
    #endif
        .palette = gMonPalette_ZeraoraMega,
        .shinyPalette = gMonShinyPalette_ZeraoraMega,
        .iconSprite = gMonIcon_ZeraoraMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Zeraora)
        SHADOW(-6, 12, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ZERAORA

#if P_FAMILY_MELTAN
    [SPECIES_MELTAN] =
    {
        .frontPic = gMonFrontPic_Meltan,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Meltan,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Meltan,
    #endif
        .palette = gMonPalette_Meltan,
        .shinyPalette = gMonShinyPalette_Meltan,
        .iconSprite = gMonIcon_Meltan,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Meltan)
        OVERWORLD(
            sPicTable_Meltan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Meltan,
            gShinyOverworldPalette_Meltan
        )
    },

    [SPECIES_MELMETAL] =
    {
        .frontPic = gMonFrontPic_Melmetal,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Melmetal,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Meltan,
    #endif
        .palette = gMonPalette_Melmetal,
        .shinyPalette = gMonShinyPalette_Melmetal,
        .iconSprite = gMonIcon_Melmetal,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_L)
        FOOTPRINT(Melmetal)
        OVERWORLD(
            sPicTable_Melmetal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Melmetal,
            gShinyOverworldPalette_Melmetal
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_MELMETAL_GMAX] =
    {
        .frontPic = gMonFrontPic_MelmetalGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MelmetalGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_7_EGG_COLORS
        .eggPalette = gEggPalette_Meltan,
    #endif
        .palette = gMonPalette_MelmetalGmax,
        .shinyPalette = gMonShinyPalette_MelmetalGmax,
        .iconSprite = gMonIcon_MelmetalGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Melmetal)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MELTAN

#ifdef __INTELLISENSE__
};
#endif
