#ifdef __INTELLISENSE__
const struct SpeciesGraphicsInfo gSpeciesGraphicsInfoGen5[] =
{
#endif

#if P_FAMILY_VICTINI
    [SPECIES_VICTINI] =
    {
        .frontPic = gMonFrontPic_Victini,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 46),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Victini,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Victini,
    #endif
        .palette = gMonPalette_Victini,
        .shinyPalette = gMonShinyPalette_Victini,
        .iconSprite = gMonIcon_Victini,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Victini)
        OVERWORLD(
            sPicTable_Victini,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Victini,
            gShinyOverworldPalette_Victini
        )
    },
#endif //P_FAMILY_VICTINI

#if P_FAMILY_SNIVY
    [SPECIES_SNIVY] =
    {
        .frontPic = gMonFrontPic_Snivy,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Snivy,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Snivy,
    #endif
        .palette = gMonPalette_Snivy,
        .shinyPalette = gMonShinyPalette_Snivy,
        .iconSprite = gMonIcon_Snivy,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Snivy)
        OVERWORLD(
            sPicTable_Snivy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snivy,
            gShinyOverworldPalette_Snivy
        )
    },

    [SPECIES_SERVINE] =
    {
        .frontPic = gMonFrontPic_Servine,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
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
        .backPic = gMonBackPic_Servine,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Snivy,
    #endif
        .palette = gMonPalette_Servine,
        .shinyPalette = gMonShinyPalette_Servine,
        .iconSprite = gMonIcon_Servine,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Servine)
        OVERWORLD(
            sPicTable_Servine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Servine,
            gShinyOverworldPalette_Servine
        )
    },

    [SPECIES_SERPERIOR] =
    {
        .frontPic = gMonFrontPic_Serperior,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Serperior,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Snivy,
    #endif
        .palette = gMonPalette_Serperior,
        .shinyPalette = gMonShinyPalette_Serperior,
        .iconSprite = gMonIcon_Serperior,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Serperior)
        OVERWORLD(
            sPicTable_Serperior,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Serperior,
            gShinyOverworldPalette_Serperior
        )
    },
#endif //P_FAMILY_SNIVY

#if P_FAMILY_TEPIG
    [SPECIES_TEPIG] =
    {
        .frontPic = gMonFrontPic_Tepig,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Tepig,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tepig,
    #endif
        .palette = gMonPalette_Tepig,
        .shinyPalette = gMonShinyPalette_Tepig,
        .iconSprite = gMonIcon_Tepig,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -2, SHADOW_SIZE_S)
        FOOTPRINT(Tepig)
        OVERWORLD(
            sPicTable_Tepig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tepig,
            gShinyOverworldPalette_Tepig
        )
    },

    [SPECIES_PIGNITE] =
    {
        .frontPic = gMonFrontPic_Pignite,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pignite,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tepig,
    #endif
        .palette = gMonPalette_Pignite,
        .shinyPalette = gMonShinyPalette_Pignite,
        .iconSprite = gMonIcon_Pignite,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Pignite)
        OVERWORLD(
            sPicTable_Pignite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pignite,
            gShinyOverworldPalette_Pignite
        )
    },

    [SPECIES_EMBOAR] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Emboar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 4),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Emboar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tepig,
    #endif
        .palette = gMonPalette_Emboar,
        .shinyPalette = gMonShinyPalette_Emboar,
        .iconSprite = gMonIcon_Emboar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Emboar)
        OVERWORLD(
            sPicTable_Emboar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Emboar,
            gShinyOverworldPalette_Emboar
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EMBOAR_MEGA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_EmboarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_EmboarMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tepig,
    #endif
        .palette = gMonPalette_EmboarMega,
        .shinyPalette = gMonShinyPalette_EmboarMega,
        .iconSprite = gMonIcon_EmboarMega,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Emboar)
        SHADOW(-2, 14, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
    [SPECIES_OSHAWOTT] =
    {
        .frontPic = gMonFrontPic_Oshawott,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Oshawott,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Oshawott,
    #endif
        .palette = gMonPalette_Oshawott,
        .shinyPalette = gMonShinyPalette_Oshawott,
        .iconSprite = gMonIcon_Oshawott,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Oshawott)
        OVERWORLD(
            sPicTable_Oshawott,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Oshawott,
            gShinyOverworldPalette_Oshawott
        )
    },

    [SPECIES_DEWOTT] =
    {
        .frontPic = gMonFrontPic_Dewott,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Dewott,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Oshawott,
    #endif
        .palette = gMonPalette_Dewott,
        .shinyPalette = gMonShinyPalette_Dewott,
        .iconSprite = gMonIcon_Dewott,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Dewott)
        OVERWORLD(
            sPicTable_Dewott,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dewott,
            gShinyOverworldPalette_Dewott
        )
    },

    [SPECIES_SAMUROTT] =
    {
        .frontPic = gMonFrontPic_Samurott,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Samurott,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Oshawott,
    #endif
        .palette = gMonPalette_Samurott,
        .shinyPalette = gMonShinyPalette_Samurott,
        .iconSprite = gMonIcon_Samurott,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Samurott)
        OVERWORLD(
            sPicTable_Samurott,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Samurott,
            gShinyOverworldPalette_Samurott
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_SAMUROTT_HISUI] =
    {
        .frontPic = gMonFrontPic_SamurottHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SamurottHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Oshawott,
    #endif
        .palette = gMonPalette_SamurottHisui,
        .shinyPalette = gMonShinyPalette_SamurottHisui,
        .iconSprite = gMonIcon_SamurottHisui,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Samurott)
        OVERWORLD(
            sPicTable_SamurottHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SamurottHisui,
            gShinyOverworldPalette_SamurottHisui
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_PATRAT
    [SPECIES_PATRAT] =
    {
        .frontPic = gMonFrontPic_Patrat,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Patrat,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Patrat,
    #endif
        .palette = gMonPalette_Patrat,
        .shinyPalette = gMonShinyPalette_Patrat,
        .iconSprite = gMonIcon_Patrat,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Patrat)
        OVERWORLD(
            sPicTable_Patrat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Patrat,
            gShinyOverworldPalette_Patrat
        )
    },

    [SPECIES_WATCHOG] =
    {
        .frontPic = gMonFrontPic_Watchog,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 2,
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
        .backPic = gMonBackPic_Watchog,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Patrat,
    #endif
        .palette = gMonPalette_Watchog,
        .shinyPalette = gMonShinyPalette_Watchog,
        .iconSprite = gMonIcon_Watchog,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 11, SHADOW_SIZE_S)
        FOOTPRINT(Watchog)
        OVERWORLD(
            sPicTable_Watchog,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Watchog,
            gShinyOverworldPalette_Watchog
        )
    },
#endif //P_FAMILY_PATRAT

#if P_FAMILY_LILLIPUP
    [SPECIES_LILLIPUP] =
    {
        .frontPic = gMonFrontPic_Lillipup,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Lillipup,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Lillipup,
    #endif
        .palette = gMonPalette_Lillipup,
        .shinyPalette = gMonShinyPalette_Lillipup,
        .iconSprite = gMonIcon_Lillipup,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Lillipup)
        OVERWORLD(
            sPicTable_Lillipup,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lillipup,
            gShinyOverworldPalette_Lillipup
        )
    },

    [SPECIES_HERDIER] =
    {
        .frontPic = gMonFrontPic_Herdier,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Herdier,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Lillipup,
    #endif
        .palette = gMonPalette_Herdier,
        .shinyPalette = gMonShinyPalette_Herdier,
        .iconSprite = gMonIcon_Herdier,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Herdier)
        OVERWORLD(
            sPicTable_Herdier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Herdier,
            gShinyOverworldPalette_Herdier
        )
    },

    [SPECIES_STOUTLAND] =
    {
        .frontPic = gMonFrontPic_Stoutland,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Stoutland,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Lillipup,
    #endif
        .palette = gMonPalette_Stoutland,
        .shinyPalette = gMonShinyPalette_Stoutland,
        .iconSprite = gMonIcon_Stoutland,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 9, SHADOW_SIZE_L)
        FOOTPRINT(Stoutland)
        OVERWORLD(
            sPicTable_Stoutland,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stoutland,
            gShinyOverworldPalette_Stoutland
        )
    },
#endif //P_FAMILY_LILLIPUP

#if P_FAMILY_PURRLOIN
    [SPECIES_PURRLOIN] =
    {
        .frontPic = gMonFrontPic_Purrloin,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 9),
            ANIMCMD_FRAME(1, 54),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Purrloin,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Purrloin,
    #endif
        .palette = gMonPalette_Purrloin,
        .shinyPalette = gMonShinyPalette_Purrloin,
        .iconSprite = gMonIcon_Purrloin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Purrloin)
        OVERWORLD(
            sPicTable_Purrloin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Purrloin,
            gShinyOverworldPalette_Purrloin
        )
    },

    [SPECIES_LIEPARD] =
    {
        .frontPic = gMonFrontPic_Liepard,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Liepard,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Purrloin,
    #endif
        .palette = gMonPalette_Liepard,
        .shinyPalette = gMonShinyPalette_Liepard,
        .iconSprite = gMonIcon_Liepard,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Liepard)
        OVERWORLD(
            sPicTable_Liepard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Liepard,
            gShinyOverworldPalette_Liepard
        )
    },
#endif //P_FAMILY_PURRLOIN

#if P_FAMILY_PANSAGE
    [SPECIES_PANSAGE] =
    {
        .frontPic = gMonFrontPic_Pansage,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 13),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Pansage,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pansage,
    #endif
        .palette = gMonPalette_Pansage,
        .shinyPalette = gMonShinyPalette_Pansage,
        .iconSprite = gMonIcon_Pansage,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Pansage)
        OVERWORLD(
            sPicTable_Pansage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pansage,
            gShinyOverworldPalette_Pansage
        )
    },

    [SPECIES_SIMISAGE] =
    {
        .frontPic = gMonFrontPic_Simisage,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Simisage,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pansage,
    #endif
        .palette = gMonPalette_Simisage,
        .shinyPalette = gMonShinyPalette_Simisage,
        .iconSprite = gMonIcon_Simisage,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Simisage)
        OVERWORLD(
            sPicTable_Simisage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Simisage,
            gShinyOverworldPalette_Simisage
        )
    },
#endif //P_FAMILY_PANSAGE

#if P_FAMILY_PANSEAR
    [SPECIES_PANSEAR] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Pansear,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Pansear,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pansear,
    #endif
        .palette = gMonPalette_Pansear,
        .shinyPalette = gMonShinyPalette_Pansear,
        .iconSprite = gMonIcon_Pansear,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Pansear)
        OVERWORLD(
            sPicTable_Pansear,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pansear,
            gShinyOverworldPalette_Pansear
        )
    },

    [SPECIES_SIMISEAR] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Simisear,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Simisear,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pansear,
    #endif
        .palette = gMonPalette_Simisear,
        .shinyPalette = gMonShinyPalette_Simisear,
        .iconSprite = gMonIcon_Simisear,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Simisear)
        OVERWORLD(
            sPicTable_Simisear,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Simisear,
            gShinyOverworldPalette_Simisear
        )
    },
#endif //P_FAMILY_PANSEAR

#if P_FAMILY_PANPOUR
    [SPECIES_PANPOUR] =
    {
        .frontPic = gMonFrontPic_Panpour,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Panpour,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Panpour,
    #endif
        .palette = gMonPalette_Panpour,
        .shinyPalette = gMonShinyPalette_Panpour,
        .iconSprite = gMonIcon_Panpour,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, 4, SHADOW_SIZE_S)
        FOOTPRINT(Panpour)
        OVERWORLD(
            sPicTable_Panpour,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Panpour,
            gShinyOverworldPalette_Panpour
        )
    },

    [SPECIES_SIMIPOUR] =
    {
        .frontPic = gMonFrontPic_Simipour,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Simipour,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Panpour,
    #endif
        .palette = gMonPalette_Simipour,
        .shinyPalette = gMonShinyPalette_Simipour,
        .iconSprite = gMonIcon_Simipour,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Simipour)
        OVERWORLD(
            sPicTable_Simipour,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Simipour,
            gShinyOverworldPalette_Simipour
        )
    },
#endif //P_FAMILY_PANPOUR

#if P_FAMILY_MUNNA
    [SPECIES_MUNNA] =
    {
        .frontPic = gMonFrontPic_Munna,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 16,
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
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Munna,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Munna,
    #endif
        .palette = gMonPalette_Munna,
        .shinyPalette = gMonShinyPalette_Munna,
        .iconSprite = gMonIcon_Munna,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Munna)
        OVERWORLD(
            sPicTable_Munna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Munna,
            gShinyOverworldPalette_Munna
        )
    },

    [SPECIES_MUSHARNA] =
    {
        .frontPic = gMonFrontPic_Musharna,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_ROTATE_TO_SIDES_TWICE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Musharna,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Munna,
    #endif
        .palette = gMonPalette_Musharna,
        .shinyPalette = gMonShinyPalette_Musharna,
        .iconSprite = gMonIcon_Musharna,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 10, SHADOW_SIZE_M)
        FOOTPRINT(Musharna)
        OVERWORLD(
            sPicTable_Musharna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Musharna,
            gShinyOverworldPalette_Musharna
        )
    },
#endif //P_FAMILY_MUNNA

#if P_FAMILY_PIDOVE
    [SPECIES_PIDOVE] =
    {
        .frontPic = gMonFrontPic_Pidove,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 46),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Pidove,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pidove,
    #endif
        .palette = gMonPalette_Pidove,
        .shinyPalette = gMonShinyPalette_Pidove,
        .iconSprite = gMonIcon_Pidove,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Pidove)
        OVERWORLD(
            sPicTable_Pidove,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pidove,
            gShinyOverworldPalette_Pidove
        )
    },

    [SPECIES_TRANQUILL] =
    {
        .frontPic = gMonFrontPic_Tranquill,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Tranquill,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pidove,
    #endif
        .palette = gMonPalette_Tranquill,
        .shinyPalette = gMonShinyPalette_Tranquill,
        .iconSprite = gMonIcon_Tranquill,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Tranquill)
        OVERWORLD(
            sPicTable_Tranquill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tranquill,
            gShinyOverworldPalette_Tranquill
        )
    },

    [SPECIES_UNFEZANT] =
    {
        .frontPic = gMonFrontPic_Unfezant,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Unfezant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pidove,
    #endif
        .palette = gMonPalette_Unfezant,
        .shinyPalette = gMonShinyPalette_Unfezant,
        .iconSprite = gMonIcon_Unfezant,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_UnfezantF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_UnfezantF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_UnfezantF,
        .shinyPaletteFemale = gMonShinyPalette_UnfezantF,
        .iconSpriteFemale = gMonIcon_UnfezantF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 12, SHADOW_SIZE_M)
        FOOTPRINT(Unfezant)
        OVERWORLD(
            sPicTable_Unfezant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Unfezant,
            gShinyOverworldPalette_Unfezant
        )
        OVERWORLD_FEMALE(
            sPicTable_UnfezantF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_UnfezantF,
            gShinyOverworldPalette_UnfezantF
        )
    },
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_BLITZLE
    [SPECIES_BLITZLE] =
    {
        .frontPic = gMonFrontPic_Blitzle,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Blitzle,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Blitzle,
    #endif
        .palette = gMonPalette_Blitzle,
        .shinyPalette = gMonShinyPalette_Blitzle,
        .iconSprite = gMonIcon_Blitzle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 9, SHADOW_SIZE_M)
        FOOTPRINT(Blitzle)
        OVERWORLD(
            sPicTable_Blitzle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Blitzle,
            gShinyOverworldPalette_Blitzle
        )
    },

    [SPECIES_ZEBSTRIKA] =
    {
        .frontPic = gMonFrontPic_Zebstrika,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Zebstrika,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Blitzle,
    #endif
        .palette = gMonPalette_Zebstrika,
        .shinyPalette = gMonShinyPalette_Zebstrika,
        .iconSprite = gMonIcon_Zebstrika,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Zebstrika)
        OVERWORLD(
            sPicTable_Zebstrika,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zebstrika,
            gShinyOverworldPalette_Zebstrika
        )
    },
#endif //P_FAMILY_BLITZLE

#if P_FAMILY_ROGGENROLA
    [SPECIES_ROGGENROLA] =
    {
        .frontPic = gMonFrontPic_Roggenrola,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Roggenrola,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Roggenrola,
    #endif
        .palette = gMonPalette_Roggenrola,
        .shinyPalette = gMonShinyPalette_Roggenrola,
        .iconSprite = gMonIcon_Roggenrola,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Roggenrola)
        OVERWORLD(
            sPicTable_Roggenrola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Roggenrola,
            gShinyOverworldPalette_Roggenrola
        )
    },

    [SPECIES_BOLDORE] =
    {
        .frontPic = gMonFrontPic_Boldore,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Boldore,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Roggenrola,
    #endif
        .palette = gMonPalette_Boldore,
        .shinyPalette = gMonShinyPalette_Boldore,
        .iconSprite = gMonIcon_Boldore,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 3, SHADOW_SIZE_L)
        FOOTPRINT(Boldore)
        OVERWORLD(
            sPicTable_Boldore,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Boldore,
            gShinyOverworldPalette_Boldore
        )
    },

    [SPECIES_GIGALITH] =
    {
        .frontPic = gMonFrontPic_Gigalith,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Gigalith,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Roggenrola,
    #endif
        .palette = gMonPalette_Gigalith,
        .shinyPalette = gMonShinyPalette_Gigalith,
        .iconSprite = gMonIcon_Gigalith,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gigalith)
        OVERWORLD(
            sPicTable_Gigalith,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gigalith,
            gShinyOverworldPalette_Gigalith
        )
    },
#endif //P_FAMILY_ROGGENROLA

#if P_FAMILY_WOOBAT
    [SPECIES_WOOBAT] =
    {
        .frontPic = gMonFrontPic_Woobat,
        .frontPicSize = MON_COORDS_SIZE(64, 32),
        .frontPicYOffset = 16,
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
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FOUR_PETAL,
        .enemyMonElevation = 19,
        .backPic = gMonBackPic_Woobat,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Woobat,
    #endif
        .palette = gMonPalette_Woobat,
        .shinyPalette = gMonShinyPalette_Woobat,
        .iconSprite = gMonIcon_Woobat,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_S)
        FOOTPRINT(Woobat)
        OVERWORLD(
            sPicTable_Woobat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Woobat,
            gShinyOverworldPalette_Woobat
        )
    },

    [SPECIES_SWOOBAT] =
    {
        .frontPic = gMonFrontPic_Swoobat,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Swoobat,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Woobat,
    #endif
        .palette = gMonPalette_Swoobat,
        .shinyPalette = gMonShinyPalette_Swoobat,
        .iconSprite = gMonIcon_Swoobat,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 17, SHADOW_SIZE_M)
        FOOTPRINT(Swoobat)
        OVERWORLD(
            sPicTable_Swoobat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Swoobat,
            gShinyOverworldPalette_Swoobat
        )
    },
#endif //P_FAMILY_WOOBAT

#if P_FAMILY_DRILBUR
    [SPECIES_DRILBUR] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Drilbur,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_Drilbur,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Drilbur,
    #endif
        .palette = gMonPalette_Drilbur,
        .shinyPalette = gMonShinyPalette_Drilbur,
        .iconSprite = gMonIcon_Drilbur,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Drilbur)
        OVERWORLD(
            sPicTable_Drilbur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Drilbur,
            gShinyOverworldPalette_Drilbur
        )
    },

    [SPECIES_EXCADRILL] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Excadrill,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Excadrill,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Drilbur,
    #endif
        .palette = gMonPalette_Excadrill,
        .shinyPalette = gMonShinyPalette_Excadrill,
        .iconSprite = gMonIcon_Excadrill,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(3, 8, SHADOW_SIZE_L)
        FOOTPRINT(Excadrill)
        OVERWORLD(
            sPicTable_Excadrill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Excadrill,
            gShinyOverworldPalette_Excadrill
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EXCADRILL_MEGA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_ExcadrillMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ExcadrillMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Drilbur,
    #endif
        .palette = gMonPalette_ExcadrillMega,
        .shinyPalette = gMonShinyPalette_ExcadrillMega,
        .iconSprite = gMonIcon_ExcadrillMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Excadrill)
        SHADOW(5, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_AUDINO
    [SPECIES_AUDINO] =
    {
        .frontPic = gMonFrontPic_Audino,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Audino,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Audino,
    #endif
        .palette = gMonPalette_Audino,
        .shinyPalette = gMonShinyPalette_Audino,
        .iconSprite = gMonIcon_Audino,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Audino)
        OVERWORLD(
            sPicTable_Audino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Audino,
            gShinyOverworldPalette_Audino
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AUDINO_MEGA] =
    {
        .frontPic = gMonFrontPic_AudinoMega,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AudinoMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Audino,
    #endif
        .palette = gMonPalette_AudinoMega,
        .shinyPalette = gMonShinyPalette_AudinoMega,
        .iconSprite = gMonIcon_AudinoMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Audino)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AudinoMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AudinoMega,
            gShinyOverworldPalette_AudinoMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AUDINO

#if P_FAMILY_TIMBURR
    [SPECIES_TIMBURR] =
    {
        .frontPic = gMonFrontPic_Timburr,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Timburr,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Timburr,
    #endif
        .palette = gMonPalette_Timburr,
        .shinyPalette = gMonShinyPalette_Timburr,
        .iconSprite = gMonIcon_Timburr,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Timburr)
        OVERWORLD(
            sPicTable_Timburr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Timburr,
            gShinyOverworldPalette_Timburr
        )
    },

    [SPECIES_GURDURR] =
    {
        .frontPic = gMonFrontPic_Gurdurr,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Gurdurr,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Timburr,
    #endif
        .palette = gMonPalette_Gurdurr,
        .shinyPalette = gMonShinyPalette_Gurdurr,
        .iconSprite = gMonIcon_Gurdurr,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Gurdurr)
        OVERWORLD(
            sPicTable_Gurdurr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gurdurr,
            gShinyOverworldPalette_Gurdurr
        )
    },

    [SPECIES_CONKELDURR] =
    {
        .frontPic = gMonFrontPic_Conkeldurr,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Conkeldurr,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Timburr,
    #endif
        .palette = gMonPalette_Conkeldurr,
        .shinyPalette = gMonShinyPalette_Conkeldurr,
        .iconSprite = gMonIcon_Conkeldurr,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Conkeldurr)
        OVERWORLD(
            sPicTable_Conkeldurr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Conkeldurr,
            gShinyOverworldPalette_Conkeldurr
        )
    },
#endif //P_FAMILY_TIMBURR

#if P_FAMILY_TYMPOLE
    [SPECIES_TYMPOLE] =
    {
        .frontPic = gMonFrontPic_Tympole,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Tympole,
        .backPicSize = MON_COORDS_SIZE(40, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_H_SPRING,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tympole,
    #endif
        .palette = gMonPalette_Tympole,
        .shinyPalette = gMonShinyPalette_Tympole,
        .iconSprite = gMonIcon_Tympole,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Tympole)
        OVERWORLD(
            sPicTable_Tympole,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tympole,
            gShinyOverworldPalette_Tympole
        )
    },

    [SPECIES_PALPITOAD] =
    {
        .frontPic = gMonFrontPic_Palpitoad,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 13),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Palpitoad,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tympole,
    #endif
        .palette = gMonPalette_Palpitoad,
        .shinyPalette = gMonShinyPalette_Palpitoad,
        .iconSprite = gMonIcon_Palpitoad,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Palpitoad)
        OVERWORLD(
            sPicTable_Palpitoad,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Palpitoad,
            gShinyOverworldPalette_Palpitoad
        )
    },

    [SPECIES_SEISMITOAD] =
    {
        .frontPic = gMonFrontPic_Seismitoad,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 13),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Seismitoad,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tympole,
    #endif
        .palette = gMonPalette_Seismitoad,
        .shinyPalette = gMonShinyPalette_Seismitoad,
        .iconSprite = gMonIcon_Seismitoad,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 10, SHADOW_SIZE_L)
        FOOTPRINT(Seismitoad)
        OVERWORLD(
            sPicTable_Seismitoad,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Seismitoad,
            gShinyOverworldPalette_Seismitoad
        )
    },
#endif //P_FAMILY_TYMPOLE

#if P_FAMILY_THROH
    [SPECIES_THROH] =
    {
        .frontPic = gMonFrontPic_Throh,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Throh,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Throh,
    #endif
        .palette = gMonPalette_Throh,
        .shinyPalette = gMonShinyPalette_Throh,
        .iconSprite = gMonIcon_Throh,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 4, SHADOW_SIZE_M)
        FOOTPRINT(Throh)
        OVERWORLD(
            sPicTable_Throh,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Throh,
            gShinyOverworldPalette_Throh
        )
    },
#endif //P_FAMILY_THROH

#if P_FAMILY_SAWK
    [SPECIES_SAWK] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Sawk,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Sawk,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Sawk,
    #endif
        .palette = gMonPalette_Sawk,
        .shinyPalette = gMonShinyPalette_Sawk,
        .iconSprite = gMonIcon_Sawk,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Sawk)
        OVERWORLD(
            sPicTable_Sawk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sawk,
            gShinyOverworldPalette_Sawk
        )
    },
#endif //P_FAMILY_SAWK

#if P_FAMILY_SEWADDLE
    [SPECIES_SEWADDLE] =
    {
        .frontPic = gMonFrontPic_Sewaddle,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .backPic = gMonBackPic_Sewaddle,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Sewaddle,
    #endif
        .palette = gMonPalette_Sewaddle,
        .shinyPalette = gMonShinyPalette_Sewaddle,
        .iconSprite = gMonIcon_Sewaddle,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Sewaddle)
        OVERWORLD(
            sPicTable_Sewaddle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sewaddle,
            gShinyOverworldPalette_Sewaddle
        )
    },

    [SPECIES_SWADLOON] =
    {
        .frontPic = gMonFrontPic_Swadloon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Swadloon,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Sewaddle,
    #endif
        .palette = gMonPalette_Swadloon,
        .shinyPalette = gMonShinyPalette_Swadloon,
        .iconSprite = gMonIcon_Swadloon,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 1, SHADOW_SIZE_L)
        FOOTPRINT(Swadloon)
        OVERWORLD(
            sPicTable_Swadloon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Swadloon,
            gShinyOverworldPalette_Swadloon
        )
    },

    [SPECIES_LEAVANNY] =
    {
        .frontPic = gMonFrontPic_Leavanny,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Leavanny,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Sewaddle,
    #endif
        .palette = gMonPalette_Leavanny,
        .shinyPalette = gMonShinyPalette_Leavanny,
        .iconSprite = gMonIcon_Leavanny,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Leavanny)
        OVERWORLD(
            sPicTable_Leavanny,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Leavanny,
            gShinyOverworldPalette_Leavanny
        )
    },
#endif //P_FAMILY_SEWADDLE

#if P_FAMILY_VENIPEDE
    [SPECIES_VENIPEDE] =
    {
        .frontPic = gMonFrontPic_Venipede,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Venipede,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Venipede,
    #endif
        .palette = gMonPalette_Venipede,
        .shinyPalette = gMonShinyPalette_Venipede,
        .iconSprite = gMonIcon_Venipede,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, -3, SHADOW_SIZE_M)
        FOOTPRINT(Venipede)
        OVERWORLD(
            sPicTable_Venipede,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Venipede,
            gShinyOverworldPalette_Venipede
        )
    },

    [SPECIES_WHIRLIPEDE] =
    {
        .frontPic = gMonFrontPic_Whirlipede,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Whirlipede,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Venipede,
    #endif
        .palette = gMonPalette_Whirlipede,
        .shinyPalette = gMonShinyPalette_Whirlipede,
        .iconSprite = gMonIcon_Whirlipede,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Whirlipede)
        OVERWORLD(
            sPicTable_Whirlipede,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Whirlipede,
            gShinyOverworldPalette_Whirlipede
        )
    },

    [SPECIES_SCOLIPEDE] =
    {
        .frontPic = gMonFrontPic_Scolipede,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Scolipede,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Venipede,
    #endif
        .palette = gMonPalette_Scolipede,
        .shinyPalette = gMonShinyPalette_Scolipede,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_L)
        FOOTPRINT(Scolipede)
        OVERWORLD(
            sPicTable_Scolipede,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Scolipede,
            gShinyOverworldPalette_Scolipede
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SCOLIPEDE_MEGA] =
    {
        .frontPic = gMonFrontPic_ScolipedeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ScolipedeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Venipede,
    #endif
        .palette = gMonPalette_ScolipedeMega,
        .shinyPalette = gMonShinyPalette_ScolipedeMega,
        .iconSprite = gMonIcon_ScolipedeMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Scolipede)
        SHADOW(2, 14, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_VENIPEDE

    [SPECIES_EXPBOT] =
    {
        .noFlip = FALSE,
        .frontPic = gMonFrontPic_ExpBot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ExpBot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_ExpBot,
        .shinyPalette = gMonShinyPalette_ExpBot,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        FOOTPRINT(Scolipede)
    },

    [SPECIES_HPBOT] =
    {
        .noFlip = FALSE,
        .frontPic = gMonFrontPic_HpBot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HpBot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_HpBot,
        .shinyPalette = gMonShinyPalette_HpBot,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        FOOTPRINT(Scolipede)
    },

    [SPECIES_ATKBOT] =
    {
        .noFlip = FALSE,
        .frontPic = gMonFrontPic_AtkBot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AtkBot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_AtkBot,
        .shinyPalette = gMonShinyPalette_AtkBot,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        FOOTPRINT(Scolipede)
    },

    [SPECIES_DEFBOT] =
    {
        .noFlip = FALSE,
        .frontPic = gMonFrontPic_DefBot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DefBot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_DefBot,
        .shinyPalette = gMonShinyPalette_DefBot,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        FOOTPRINT(Scolipede)
    },

    [SPECIES_SPATKBOT] =
    {
        .noFlip = FALSE,
        .frontPic = gMonFrontPic_SpAtkBot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SpAtkBot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_SpAtkBot,
        .shinyPalette = gMonShinyPalette_SpAtkBot,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        FOOTPRINT(Scolipede)
    },

    [SPECIES_SPDEFBOT] =
    {
        .noFlip = FALSE,
        .frontPic = gMonFrontPic_SpDefBot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SpDefBot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_SpDefBot,
        .shinyPalette = gMonShinyPalette_SpDefBot,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        FOOTPRINT(Scolipede)
    },

    [SPECIES_SPEEDBOT] =
    {
        .noFlip = FALSE,
        .frontPic = gMonFrontPic_SpeedBot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SpeedBot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_SpeedBot,
        .shinyPalette = gMonShinyPalette_SpeedBot,
        .iconSprite = gMonIcon_Scolipede,
        .iconPalIndex = 2,
        FOOTPRINT(Scolipede)
    },

#if P_FAMILY_COTTONEE
    [SPECIES_COTTONEE] =
    {
        .frontPic = gMonFrontPic_Cottonee,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 18,
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
        .backPic = gMonBackPic_Cottonee,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Cottonee,
    #endif
        .palette = gMonPalette_Cottonee,
        .shinyPalette = gMonShinyPalette_Cottonee,
        .iconSprite = gMonIcon_Cottonee,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -5, SHADOW_SIZE_M)
        FOOTPRINT(Cottonee)
        OVERWORLD(
            sPicTable_Cottonee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cottonee,
            gShinyOverworldPalette_Cottonee
        )
    },

    [SPECIES_WHIMSICOTT] =
    {
        .frontPic = gMonFrontPic_Whimsicott,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Whimsicott,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Cottonee,
    #endif
        .palette = gMonPalette_Whimsicott,
        .shinyPalette = gMonShinyPalette_Whimsicott,
        .iconSprite = gMonIcon_Whimsicott,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Whimsicott)
        OVERWORLD(
            sPicTable_Whimsicott,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Whimsicott,
            gShinyOverworldPalette_Whimsicott
        )
    },
#endif //P_FAMILY_COTTONEE

#if P_FAMILY_PETILIL
    [SPECIES_PETILIL] =
    {
        .frontPic = gMonFrontPic_Petilil,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Petilil,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Petilil,
    #endif
        .palette = gMonPalette_Petilil,
        .shinyPalette = gMonShinyPalette_Petilil,
        .iconSprite = gMonIcon_Petilil,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Petilil)
        OVERWORLD(
            sPicTable_Petilil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Petilil,
            gShinyOverworldPalette_Petilil
        )
    },

    [SPECIES_LILLIGANT] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Lilligant,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lilligant,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Petilil,
    #endif
        .palette = gMonPalette_Lilligant,
        .shinyPalette = gMonShinyPalette_Lilligant,
        .iconSprite = gMonIcon_Lilligant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Lilligant)
        OVERWORLD(
            sPicTable_Lilligant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lilligant,
            gShinyOverworldPalette_Lilligant
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_LILLIGANT_HISUI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_LilligantHisui,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LilligantHisui,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Petilil,
    #endif
        .palette = gMonPalette_LilligantHisui,
        .shinyPalette = gMonShinyPalette_LilligantHisui,
        .iconSprite = gMonIcon_LilligantHisui,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Lilligant)
        OVERWORLD(
            sPicTable_LilligantHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LilligantHisui,
            gShinyOverworldPalette_LilligantHisui
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_PETILIL

#if P_FAMILY_BASCULIN
    [SPECIES_BASCULIN_RED_STRIPED] =
    {
        .frontPic = gMonFrontPic_BasculinRedStriped,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Basculin,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_BasculinRedStriped,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Basculin,
    #endif
        .palette = gMonPalette_BasculinRedStriped,
        .shinyPalette = gMonShinyPalette_BasculinRedStriped,
        .iconSprite = gMonIcon_BasculinRedStriped,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Basculin)
        OVERWORLD(
            sPicTable_BasculinRedStriped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BasculinRedStriped,
            gShinyOverworldPalette_BasculinRedStriped
        )
    },

    [SPECIES_BASCULIN_BLUE_STRIPED] =
    {
        .frontPic = gMonFrontPic_BasculinBlueStriped,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Basculin,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_BasculinBlueStriped,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Basculin,
    #endif
        .palette = gMonPalette_BasculinBlueStriped,
        .shinyPalette = gMonShinyPalette_BasculinBlueStriped,
        .iconSprite = gMonIcon_BasculinBlueStriped,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Basculin)
        OVERWORLD(
            sPicTable_BasculinBlueStriped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BasculinBlueStriped,
            gShinyOverworldPalette_BasculinBlueStriped
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_BASCULIN_WHITE_STRIPED] =
    {
        .frontPic = gMonFrontPic_BasculinWhiteStriped,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Basculin,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_BasculinWhiteStriped,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Basculin,
    #endif
        .palette = gMonPalette_BasculinWhiteStriped,
        .shinyPalette = gMonShinyPalette_BasculinWhiteStriped,
        .iconSprite = gMonIcon_BasculinWhiteStriped,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Basculin)
        OVERWORLD(
            sPicTable_BasculinWhiteStriped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BasculinWhiteStriped,
            gShinyOverworldPalette_BasculinWhiteStriped
        )
    },

    [SPECIES_BASCULEGION_M] =
    {
        .frontPic = gMonFrontPic_BasculegionM,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_BasculegionM,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Basculin,
    #endif
        .palette = gMonPalette_BasculegionM,
        .shinyPalette = gMonShinyPalette_BasculegionM,
        .iconSprite = gMonIcon_BasculegionM,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_M)
        FOOTPRINT(Basculegion)
        OVERWORLD(
            sPicTable_BasculegionM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BasculegionM,
            gShinyOverworldPalette_BasculegionM
        )
    },

    [SPECIES_BASCULEGION_F] =
    {
        .frontPic = gMonFrontPic_BasculegionF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_BasculegionF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Basculin,
    #endif
        .palette = gMonPalette_BasculegionF,
        .shinyPalette = gMonShinyPalette_BasculegionF,
        .iconSprite = gMonIcon_BasculegionF,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_M)
        FOOTPRINT(Basculegion)
        OVERWORLD(
            sPicTable_BasculegionF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BasculegionF,
            gShinyOverworldPalette_BasculegionF
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BASCULIN

#if P_FAMILY_SANDILE
    [SPECIES_SANDILE] =
    {
        .frontPic = gMonFrontPic_Sandile,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sandile,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Sandile,
    #endif
        .palette = gMonPalette_Sandile,
        .shinyPalette = gMonShinyPalette_Sandile,
        .iconSprite = gMonIcon_Sandile,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(4, -5, SHADOW_SIZE_M)
        FOOTPRINT(Sandile)
        OVERWORLD(
            sPicTable_Sandile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sandile,
            gShinyOverworldPalette_Sandile
        )
    },

    [SPECIES_KROKOROK] =
    {
        .frontPic = gMonFrontPic_Krokorok,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Krokorok,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Sandile,
    #endif
        .palette = gMonPalette_Krokorok,
        .shinyPalette = gMonShinyPalette_Krokorok,
        .iconSprite = gMonIcon_Krokorok,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Krokorok)
        OVERWORLD(
            sPicTable_Krokorok,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Krokorok,
            gShinyOverworldPalette_Krokorok
        )
    },

    [SPECIES_KROOKODILE] =
    {
        .frontPic = gMonFrontPic_Krookodile,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_Krookodile,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Sandile,
    #endif
        .palette = gMonPalette_Krookodile,
        .shinyPalette = gMonShinyPalette_Krookodile,
        .iconSprite = gMonIcon_Krookodile,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 12, SHADOW_SIZE_L)
        FOOTPRINT(Krookodile)
        OVERWORLD(
            sPicTable_Krookodile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Krookodile,
            gShinyOverworldPalette_Krookodile
        )
    },
#endif //P_FAMILY_SANDILE

#if P_FAMILY_DARUMAKA
    [SPECIES_DARUMAKA] =
    {
        .frontPic = gMonFrontPic_Darumaka,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Darumaka,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Darumaka,
    #endif
        .palette = gMonPalette_Darumaka,
        .shinyPalette = gMonShinyPalette_Darumaka,
        .iconSprite = gMonIcon_Darumaka,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Darumaka)
        OVERWORLD(
            sPicTable_Darumaka,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Darumaka,
            gShinyOverworldPalette_Darumaka
        )
    },

    [SPECIES_DARMANITAN_STANDARD] =
    {
        .frontPic = gMonFrontPic_DarmanitanStandard,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_DarmanitanStandard,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Darumaka,
    #endif
        .palette = gMonPalette_DarmanitanStandard,
        .shinyPalette = gMonShinyPalette_DarmanitanStandard,
        .iconSprite = gMonIcon_DarmanitanStandard,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_L)
        FOOTPRINT(Darmanitan)
        OVERWORLD(
            sPicTable_DarmanitanStandard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DarmanitanStandard,
            gShinyOverworldPalette_DarmanitanStandard
        )
    },

    [SPECIES_DARMANITAN_ZEN] =
    {
        .frontPic = gMonFrontPic_DarmanitanZen,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_DarmanitanZen,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Darumaka,
    #endif
        .palette = gMonPalette_DarmanitanZen,
        .shinyPalette = gMonShinyPalette_DarmanitanZen,
        .iconSprite = gMonIcon_DarmanitanZen,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Darmanitan)
    },

#if P_GALARIAN_FORMS
    [SPECIES_DARUMAKA_GALAR] =
    {
        .frontPic = gMonFrontPic_DarumakaGalar,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DarumakaGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_DarumakaGalar,
    #endif
        .palette = gMonPalette_DarumakaGalar,
        .shinyPalette = gMonShinyPalette_DarumakaGalar,
        .iconSprite = gMonIcon_DarumakaGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, -1, SHADOW_SIZE_S)
        FOOTPRINT(Darumaka)
        OVERWORLD(
            sPicTable_DarumakaGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DarumakaGalar,
            gShinyOverworldPalette_DarumakaGalar
        )
    },

    [SPECIES_DARMANITAN_GALAR_STANDARD] =
    {
        .frontPic = gMonFrontPic_DarmanitanGalarStandard,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DarmanitanGalarStandard,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_DarumakaGalar,
    #endif
        .palette = gMonPalette_DarmanitanGalarStandard,
        .shinyPalette = gMonShinyPalette_DarmanitanGalarStandard,
        .iconSprite = gMonIcon_DarmanitanGalarStandard,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Darmanitan)
        OVERWORLD(
            sPicTable_DarmanitanGalarStandard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DarmanitanGalarStandard,
            gShinyOverworldPalette_DarmanitanGalarStandard
        )
    },

    [SPECIES_DARMANITAN_GALAR_ZEN] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_DarmanitanGalarZen,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DarmanitanGalarZen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_DarumakaGalar,
    #endif
        .palette = gMonPalette_DarmanitanGalarZen,
        .shinyPalette = gMonShinyPalette_DarmanitanGalarZen,
        .iconSprite = gMonIcon_DarmanitanGalarZen,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Darmanitan)
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_MARACTUS
    [SPECIES_MARACTUS] =
    {
        .frontPic = gMonFrontPic_Maractus,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Maractus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Maractus,
    #endif
        .palette = gMonPalette_Maractus,
        .shinyPalette = gMonShinyPalette_Maractus,
        .iconSprite = gMonIcon_Maractus,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Maractus)
        OVERWORLD(
            sPicTable_Maractus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Maractus,
            gShinyOverworldPalette_Maractus
        )
    },
#endif //P_FAMILY_MARACTUS

#if P_FAMILY_DWEBBLE
    [SPECIES_DWEBBLE] =
    {
        .frontPic = gMonFrontPic_Dwebble,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
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
        .backPic = gMonBackPic_Dwebble,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Dwebble,
    #endif
        .palette = gMonPalette_Dwebble,
        .shinyPalette = gMonShinyPalette_Dwebble,
        .iconSprite = gMonIcon_Dwebble,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Dwebble)
        OVERWORLD(
            sPicTable_Dwebble,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dwebble,
            gShinyOverworldPalette_Dwebble
        )
    },

    [SPECIES_CRUSTLE] =
    {
        .frontPic = gMonFrontPic_Crustle,
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
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Crustle,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Dwebble,
    #endif
        .palette = gMonPalette_Crustle,
        .shinyPalette = gMonShinyPalette_Crustle,
        .iconSprite = gMonIcon_Crustle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Crustle)
        OVERWORLD(
            sPicTable_Crustle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Crustle,
            gShinyOverworldPalette_Crustle
        )
    },
#endif //P_FAMILY_DWEBBLE

#if P_FAMILY_SCRAGGY
    [SPECIES_SCRAGGY] =
    {
        .frontPic = gMonFrontPic_Scraggy,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Scraggy,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Scraggy,
    #endif
        .palette = gMonPalette_Scraggy,
        .shinyPalette = gMonShinyPalette_Scraggy,
        .iconSprite = gMonIcon_Scraggy,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-4, 2, SHADOW_SIZE_S)
        FOOTPRINT(Scraggy)
        OVERWORLD(
            sPicTable_Scraggy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Scraggy,
            gShinyOverworldPalette_Scraggy
        )
    },

    [SPECIES_SCRAFTY] =
    {
        .frontPic = gMonFrontPic_Scrafty,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Scrafty,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Scraggy,
    #endif
        .palette = gMonPalette_Scrafty,
        .shinyPalette = gMonShinyPalette_Scrafty,
        .iconSprite = gMonIcon_Scrafty,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Scrafty)
        OVERWORLD(
            sPicTable_Scrafty,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Scrafty,
            gShinyOverworldPalette_Scrafty
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SCRAFTY_MEGA] =
    {
        .frontPic = gMonFrontPic_ScraftyMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ScraftyMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Scraggy,
    #endif
        .palette = gMonPalette_ScraftyMega,
        .shinyPalette = gMonShinyPalette_ScraftyMega,
        .iconSprite = gMonIcon_ScraftyMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Scrafty)
        SHADOW(-4, 12, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_SIGILYPH
    [SPECIES_SIGILYPH] =
    {
        .frontPic = gMonFrontPic_Sigilyph,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Sigilyph,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Sigilyph,
    #endif
        .palette = gMonPalette_Sigilyph,
        .shinyPalette = gMonShinyPalette_Sigilyph,
        .iconSprite = gMonIcon_Sigilyph,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 18, SHADOW_SIZE_S)
        FOOTPRINT(Sigilyph)
        OVERWORLD(
            sPicTable_Sigilyph,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sigilyph,
            gShinyOverworldPalette_Sigilyph
        )
    },
#endif //P_FAMILY_SIGILYPH

#if P_FAMILY_YAMASK
    [SPECIES_YAMASK] =
    {
        .frontPic = gMonFrontPic_Yamask,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Yamask,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Yamask,
    #endif
        .palette = gMonPalette_Yamask,
        .shinyPalette = gMonShinyPalette_Yamask,
        .iconSprite = gMonIcon_Yamask,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Yamask)
        OVERWORLD(
            sPicTable_Yamask,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yamask,
            gShinyOverworldPalette_Yamask
        )
    },

    [SPECIES_COFAGRIGUS] =
    {
        .frontPic = gMonFrontPic_Cofagrigus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_BLACK,
        .backPic = gMonBackPic_Cofagrigus,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Yamask,
    #endif
        .palette = gMonPalette_Cofagrigus,
        .shinyPalette = gMonShinyPalette_Cofagrigus,
        .iconSprite = gMonIcon_Cofagrigus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 12, SHADOW_SIZE_M)
        FOOTPRINT(Cofagrigus)
        OVERWORLD(
            sPicTable_Cofagrigus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cofagrigus,
            gShinyOverworldPalette_Cofagrigus
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_YAMASK_GALAR] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_YamaskGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_YamaskGalar,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_YamaskGalar,
    #endif
        .palette = gMonPalette_YamaskGalar,
        .shinyPalette = gMonShinyPalette_YamaskGalar,
        .iconSprite = gMonIcon_YamaskGalar,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Yamask)
        OVERWORLD(
            sPicTable_YamaskGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_YamaskGalar,
            gShinyOverworldPalette_YamaskGalar
        )
    },

    [SPECIES_RUNERIGUS] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Runerigus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Runerigus,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_YamaskGalar,
    #endif
        .palette = gMonPalette_Runerigus,
        .shinyPalette = gMonShinyPalette_Runerigus,
        .iconSprite = gMonIcon_Runerigus,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(14, 14, SHADOW_SIZE_M)
        FOOTPRINT(Runerigus)
        OVERWORLD(
            sPicTable_Runerigus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Runerigus,
            gShinyOverworldPalette_Runerigus
        )
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK

#if P_FAMILY_TIRTOUGA
    [SPECIES_TIRTOUGA] =
    {
        .frontPic = gMonFrontPic_Tirtouga,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Tirtouga,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tirtouga,
    #endif
        .palette = gMonPalette_Tirtouga,
        .shinyPalette = gMonShinyPalette_Tirtouga,
        .iconSprite = gMonIcon_Tirtouga,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -3, SHADOW_SIZE_M)
        FOOTPRINT(Tirtouga)
        OVERWORLD(
            sPicTable_Tirtouga,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tirtouga,
            gShinyOverworldPalette_Tirtouga
        )
    },

    [SPECIES_CARRACOSTA] =
    {
        .frontPic = gMonFrontPic_Carracosta,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .backPic = gMonBackPic_Carracosta,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tirtouga,
    #endif
        .palette = gMonPalette_Carracosta,
        .shinyPalette = gMonShinyPalette_Carracosta,
        .iconSprite = gMonIcon_Carracosta,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_L)
        FOOTPRINT(Carracosta)
        OVERWORLD(
            sPicTable_Carracosta,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Carracosta,
            gShinyOverworldPalette_Carracosta
        )
    },
#endif //P_FAMILY_TIRTOUGA

#if P_FAMILY_ARCHEN
    [SPECIES_ARCHEN] =
    {
        .frontPic = gMonFrontPic_Archen,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 46),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Archen,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Archen,
    #endif
        .palette = gMonPalette_Archen,
        .shinyPalette = gMonShinyPalette_Archen,
        .iconSprite = gMonIcon_Archen,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, -2, SHADOW_SIZE_S)
        FOOTPRINT(Archen)
        OVERWORLD(
            sPicTable_Archen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Archen,
            gShinyOverworldPalette_Archen
        )
    },

    [SPECIES_ARCHEOPS] =
    {
        .frontPic = gMonFrontPic_Archeops,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
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
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 11,
        .backPic = gMonBackPic_Archeops,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Archen,
    #endif
        .palette = gMonPalette_Archeops,
        .shinyPalette = gMonShinyPalette_Archeops,
        .iconSprite = gMonIcon_Archeops,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 18, SHADOW_SIZE_M)
        FOOTPRINT(Archeops)
        OVERWORLD(
            sPicTable_Archeops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Archeops,
            gShinyOverworldPalette_Archeops
        )
    },
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_TRUBBISH
    [SPECIES_TRUBBISH] =
    {
        .frontPic = gMonFrontPic_Trubbish,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Trubbish,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Trubbish,
    #endif
        .palette = gMonPalette_Trubbish,
        .shinyPalette = gMonShinyPalette_Trubbish,
        .iconSprite = gMonIcon_Trubbish,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Trubbish)
        OVERWORLD(
            sPicTable_Trubbish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trubbish,
            gShinyOverworldPalette_Trubbish
        )
    },

    [SPECIES_GARBODOR] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Garbodor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Garbodor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Trubbish,
    #endif
        .palette = gMonPalette_Garbodor,
        .shinyPalette = gMonShinyPalette_Garbodor,
        .iconSprite = gMonIcon_Garbodor,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Garbodor)
        OVERWORLD(
            sPicTable_Garbodor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Garbodor,
            gShinyOverworldPalette_Garbodor
        )
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_GARBODOR_GMAX] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_GarbodorGmax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GarbodorGmax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Trubbish,
    #endif
        .palette = gMonPalette_GarbodorGmax,
        .shinyPalette = gMonShinyPalette_GarbodorGmax,
        .iconSprite = gMonIcon_GarbodorGmax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Garbodor)
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TRUBBISH

#if P_FAMILY_ZORUA
    [SPECIES_ZORUA] =
    {
        .frontPic = gMonFrontPic_Zorua,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .backPic = gMonBackPic_Zorua,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Zorua,
    #endif
        .palette = gMonPalette_Zorua,
        .shinyPalette = gMonShinyPalette_Zorua,
        .iconSprite = gMonIcon_Zorua,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Zorua)
        OVERWORLD(
            sPicTable_Zorua,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zorua,
            gShinyOverworldPalette_Zorua
        )
    },

    [SPECIES_ZOROARK] =
    {
        .frontPic = gMonFrontPic_Zoroark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .backPic = gMonBackPic_Zoroark,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Zorua,
    #endif
        .palette = gMonPalette_Zoroark,
        .shinyPalette = gMonShinyPalette_Zoroark,
        .iconSprite = gMonIcon_Zoroark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Zoroark)
        OVERWORLD(
            sPicTable_Zoroark,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zoroark,
            gShinyOverworldPalette_Zoroark
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_ZORUA_HISUI] =
    {
        .frontPic = gMonFrontPic_ZoruaHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZoruaHisui,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_ZoruaHisui,
    #endif
        .palette = gMonPalette_ZoruaHisui,
        .shinyPalette = gMonShinyPalette_ZoruaHisui,
        .iconSprite = gMonIcon_ZoruaHisui,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Zorua)
        OVERWORLD(
            sPicTable_ZoruaHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZoruaHisui,
            gShinyOverworldPalette_ZoruaHisui
        )
    },

    [SPECIES_ZOROARK_HISUI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_ZoroarkHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ZoroarkHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_ZoruaHisui,
    #endif
        .palette = gMonPalette_ZoroarkHisui,
        .shinyPalette = gMonShinyPalette_ZoroarkHisui,
        .iconSprite = gMonIcon_ZoroarkHisui,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(11, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zoroark)
        OVERWORLD(
            sPicTable_ZoroarkHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ZoroarkHisui,
            gShinyOverworldPalette_ZoroarkHisui
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ZORUA

#if P_FAMILY_MINCCINO
    [SPECIES_MINCCINO] =
    {
        .frontPic = gMonFrontPic_Minccino,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Minccino,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Minccino,
    #endif
        .palette = gMonPalette_Minccino,
        .shinyPalette = gMonShinyPalette_Minccino,
        .iconSprite = gMonIcon_Minccino,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Minccino)
        OVERWORLD(
            sPicTable_Minccino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Minccino,
            gShinyOverworldPalette_Minccino
        )
    },

    [SPECIES_CINCCINO] =
    {
        .frontPic = gMonFrontPic_Cinccino,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE,
        .backPic = gMonBackPic_Cinccino,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Minccino,
    #endif
        .palette = gMonPalette_Cinccino,
        .shinyPalette = gMonShinyPalette_Cinccino,
        .iconSprite = gMonIcon_Cinccino,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Cinccino)
        OVERWORLD(
            sPicTable_Cinccino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cinccino,
            gShinyOverworldPalette_Cinccino
        )
    },
#endif //P_FAMILY_MINCCINO

#if P_FAMILY_GOTHITA
    [SPECIES_GOTHITA] =
    {
        .frontPic = gMonFrontPic_Gothita,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Gothita,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Gothita,
    #endif
        .palette = gMonPalette_Gothita,
        .shinyPalette = gMonShinyPalette_Gothita,
        .iconSprite = gMonIcon_Gothita,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 2, SHADOW_SIZE_S)
        FOOTPRINT(Gothita)
        OVERWORLD(
            sPicTable_Gothita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gothita,
            gShinyOverworldPalette_Gothita
        )
    },

    [SPECIES_GOTHORITA] =
    {
        .frontPic = gMonFrontPic_Gothorita,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Gothorita,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Gothita,
    #endif
        .palette = gMonPalette_Gothorita,
        .shinyPalette = gMonShinyPalette_Gothorita,
        .iconSprite = gMonIcon_Gothorita,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Gothorita)
        OVERWORLD(
            sPicTable_Gothorita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gothorita,
            gShinyOverworldPalette_Gothorita
        )
    },

    [SPECIES_GOTHITELLE] =
    {
        .frontPic = gMonFrontPic_Gothitelle,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Gothitelle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Gothita,
    #endif
        .palette = gMonPalette_Gothitelle,
        .shinyPalette = gMonShinyPalette_Gothitelle,
        .iconSprite = gMonIcon_Gothitelle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gothitelle)
        OVERWORLD(
            sPicTable_Gothitelle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gothitelle,
            gShinyOverworldPalette_Gothitelle
        )
    },
#endif //P_FAMILY_GOTHITA

#if P_FAMILY_SOLOSIS
    [SPECIES_SOLOSIS] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Solosis,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_TWIST,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Solosis,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Solosis,
    #endif
        .palette = gMonPalette_Solosis,
        .shinyPalette = gMonShinyPalette_Solosis,
        .iconSprite = gMonIcon_Solosis,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Solosis)
        OVERWORLD(
            sPicTable_Solosis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Solosis,
            gShinyOverworldPalette_Solosis
        )
    },

    [SPECIES_DUOSION] =
    {
        .frontPic = gMonFrontPic_Duosion,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Duosion,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Solosis,
    #endif
        .palette = gMonPalette_Duosion,
        .shinyPalette = gMonShinyPalette_Duosion,
        .iconSprite = gMonIcon_Duosion,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Duosion)
        OVERWORLD(
            sPicTable_Duosion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Duosion,
            gShinyOverworldPalette_Duosion
        )
    },

    [SPECIES_REUNICLUS] =
    {
        .frontPic = gMonFrontPic_Reuniclus,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Reuniclus,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Solosis,
    #endif
        .palette = gMonPalette_Reuniclus,
        .shinyPalette = gMonShinyPalette_Reuniclus,
        .iconSprite = gMonIcon_Reuniclus,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_M)
        FOOTPRINT(Reuniclus)
        OVERWORLD(
            sPicTable_Reuniclus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Reuniclus,
            gShinyOverworldPalette_Reuniclus
        )
    },
#endif //P_FAMILY_SOLOSIS

#if P_FAMILY_DUCKLETT
    [SPECIES_DUCKLETT] =
    {
        .frontPic = gMonFrontPic_Ducklett,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
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
        .backPic = gMonBackPic_Ducklett,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Ducklett,
    #endif
        .palette = gMonPalette_Ducklett,
        .shinyPalette = gMonShinyPalette_Ducklett,
        .iconSprite = gMonIcon_Ducklett,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Ducklett)
        OVERWORLD(
            sPicTable_Ducklett,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ducklett,
            gShinyOverworldPalette_Ducklett
        )
    },

    [SPECIES_SWANNA] =
    {
        .frontPic = gMonFrontPic_Swanna,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Swanna,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Ducklett,
    #endif
        .palette = gMonPalette_Swanna,
        .shinyPalette = gMonShinyPalette_Swanna,
        .iconSprite = gMonIcon_Swanna,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Swanna)
        OVERWORLD(
            sPicTable_Swanna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Swanna,
            gShinyOverworldPalette_Swanna
        )
    },
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_VANILLITE
    [SPECIES_VANILLITE] =
    {
        .frontPic = gMonFrontPic_Vanillite,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Vanillite,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Vanillite,
    #endif
        .palette = gMonPalette_Vanillite,
        .shinyPalette = gMonShinyPalette_Vanillite,
        .iconSprite = gMonIcon_Vanillite,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Vanillite)
        OVERWORLD(
            sPicTable_Vanillite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vanillite,
            gShinyOverworldPalette_Vanillite
        )
    },

    [SPECIES_VANILLISH] =
    {
        .frontPic = gMonFrontPic_Vanillish,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Vanillish,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Vanillite,
    #endif
        .palette = gMonPalette_Vanillish,
        .shinyPalette = gMonShinyPalette_Vanillish,
        .iconSprite = gMonIcon_Vanillish,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 9, SHADOW_SIZE_S)
        FOOTPRINT(Vanillish)
        OVERWORLD(
            sPicTable_Vanillish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vanillish,
            gShinyOverworldPalette_Vanillish
        )
    },

    [SPECIES_VANILLUXE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Vanilluxe,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Vanilluxe,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Vanillite,
    #endif
        .palette = gMonPalette_Vanilluxe,
        .shinyPalette = gMonShinyPalette_Vanilluxe,
        .iconSprite = gMonIcon_Vanilluxe,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Vanilluxe)
        OVERWORLD(
            sPicTable_Vanilluxe,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Vanilluxe,
            gShinyOverworldPalette_Vanilluxe
        )
    },
#endif //P_FAMILY_VANILLITE

#if P_FAMILY_DEERLING
    [SPECIES_DEERLING_SPRING] =
    {
        .frontPic = gMonFrontPic_Deerling,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Deerling,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deerling,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deerling,
    #endif
        .palette = gMonPalette_DeerlingSpring,
        .shinyPalette = gMonShinyPalette_DeerlingSpring,
        .iconSprite = gMonIcon_DeerlingSpring,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deerling)
        OVERWORLD(
            sPicTable_DeerlingSpring,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeerlingSpring,
            gShinyOverworldPalette_DeerlingSpring
        )
    },

    [SPECIES_DEERLING_SUMMER] =
    {
        .frontPic = gMonFrontPic_Deerling,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Deerling,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deerling,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deerling,
    #endif
        .palette = gMonPalette_DeerlingSummer,
        .shinyPalette = gMonShinyPalette_DeerlingSummer,
        .iconSprite = gMonIcon_DeerlingSummer,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deerling)
        OVERWORLD(
            sPicTable_DeerlingSummer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeerlingSummer,
            gShinyOverworldPalette_DeerlingSummer
        )
    },

    [SPECIES_DEERLING_AUTUMN] =
    {
        .frontPic = gMonFrontPic_Deerling,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Deerling,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deerling,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deerling,
    #endif
        .palette = gMonPalette_DeerlingAutumn,
        .shinyPalette = gMonShinyPalette_DeerlingAutumn,
        .iconSprite = gMonIcon_DeerlingAutumn,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deerling)
        OVERWORLD(
            sPicTable_DeerlingAutumn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeerlingAutumn,
            gShinyOverworldPalette_DeerlingAutumn
        )
    },

    [SPECIES_DEERLING_WINTER] =
    {
        .frontPic = gMonFrontPic_Deerling,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Deerling,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deerling,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deerling,
    #endif
        .palette = gMonPalette_DeerlingWinter,
        .shinyPalette = gMonShinyPalette_DeerlingWinter,
        .iconSprite = gMonIcon_DeerlingWinter,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Deerling)
        OVERWORLD(
            sPicTable_DeerlingWinter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DeerlingWinter,
            gShinyOverworldPalette_DeerlingWinter
        )
    },

    [SPECIES_SAWSBUCK_SPRING] =
    {
        .frontPic = gMonFrontPic_SawsbuckSpring,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sawsbuck,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SawsbuckSpring,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deerling,
    #endif
        .palette = gMonPalette_SawsbuckSpring,
        .shinyPalette = gMonShinyPalette_SawsbuckSpring,
        .iconSprite = gMonIcon_SawsbuckSpring,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sawsbuck)
        OVERWORLD(
            sPicTable_SawsbuckSpring,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SawsbuckSpring,
            gShinyOverworldPalette_SawsbuckSpring
        )
    },

    [SPECIES_SAWSBUCK_SUMMER] =
    {
        .frontPic = gMonFrontPic_SawsbuckSummer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sawsbuck,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SawsbuckSummer,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deerling,
    #endif
        .palette = gMonPalette_SawsbuckSummer,
        .shinyPalette = gMonShinyPalette_SawsbuckSummer,
        .iconSprite = gMonIcon_SawsbuckSummer,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sawsbuck)
        OVERWORLD(
            sPicTable_SawsbuckSummer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SawsbuckSummer,
            gShinyOverworldPalette_SawsbuckSummer
        )
    },

    [SPECIES_SAWSBUCK_AUTUMN] =
    {
        .frontPic = gMonFrontPic_SawsbuckAutumn,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sawsbuck,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SawsbuckAutumn,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deerling,
    #endif
        .palette = gMonPalette_SawsbuckAutumn,
        .shinyPalette = gMonShinyPalette_SawsbuckAutumn,
        .iconSprite = gMonIcon_SawsbuckAutumn,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sawsbuck)
        OVERWORLD(
            sPicTable_SawsbuckAutumn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SawsbuckAutumn,
            gShinyOverworldPalette_SawsbuckAutumn
        )
    },

    [SPECIES_SAWSBUCK_WINTER] =
    {
        .frontPic = gMonFrontPic_SawsbuckWinter,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sawsbuck,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SawsbuckWinter,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deerling,
    #endif
        .palette = gMonPalette_SawsbuckWinter,
        .shinyPalette = gMonShinyPalette_SawsbuckWinter,
        .iconSprite = gMonIcon_SawsbuckWinter,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Sawsbuck)
        OVERWORLD(
            sPicTable_SawsbuckWinter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SawsbuckWinter,
            gShinyOverworldPalette_SawsbuckWinter
        )
    },
#endif //P_FAMILY_DEERLING

#if P_FAMILY_EMOLGA
    [SPECIES_EMOLGA] =
    {
        .frontPic = gMonFrontPic_Emolga,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 21),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .enemyMonElevation = 19,
        .backPic = gMonBackPic_Emolga,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Emolga,
    #endif
        .palette = gMonPalette_Emolga,
        .shinyPalette = gMonShinyPalette_Emolga,
        .iconSprite = gMonIcon_Emolga,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Emolga)
        OVERWORLD(
            sPicTable_Emolga,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Emolga,
            gShinyOverworldPalette_Emolga
        )
    },
#endif //P_FAMILY_EMOLGA

#if P_FAMILY_KARRABLAST
    [SPECIES_KARRABLAST] =
    {
        .frontPic = gMonFrontPic_Karrablast,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Karrablast,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Karrablast,
    #endif
        .palette = gMonPalette_Karrablast,
        .shinyPalette = gMonShinyPalette_Karrablast,
        .iconSprite = gMonIcon_Karrablast,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Karrablast)
        OVERWORLD(
            sPicTable_Karrablast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Karrablast,
            gShinyOverworldPalette_Karrablast
        )
    },

    [SPECIES_ESCAVALIER] =
    {
        .frontPic = gMonFrontPic_Escavalier,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Escavalier,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Karrablast,
    #endif
        .palette = gMonPalette_Escavalier,
        .shinyPalette = gMonShinyPalette_Escavalier,
        .iconSprite = gMonIcon_Escavalier,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Escavalier)
        OVERWORLD(
            sPicTable_Escavalier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Escavalier,
            gShinyOverworldPalette_Escavalier
        )
    },
#endif //P_FAMILY_KARRABLAST

#if P_FAMILY_FOONGUS
    [SPECIES_FOONGUS] =
    {
        .frontPic = gMonFrontPic_Foongus,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        .backPic = gMonBackPic_Foongus,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Foongus,
    #endif
        .palette = gMonPalette_Foongus,
        .shinyPalette = gMonShinyPalette_Foongus,
        .iconSprite = gMonIcon_Foongus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Foongus)
        OVERWORLD(
            sPicTable_Foongus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Foongus,
            gShinyOverworldPalette_Foongus
        )
    },

    [SPECIES_AMOONGUSS] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Amoonguss,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Amoonguss,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Foongus,
    #endif
        .palette = gMonPalette_Amoonguss,
        .shinyPalette = gMonShinyPalette_Amoonguss,
        .iconSprite = gMonIcon_Amoonguss,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 5, SHADOW_SIZE_M)
        FOOTPRINT(Amoonguss)
        OVERWORLD(
            sPicTable_Amoonguss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Amoonguss,
            gShinyOverworldPalette_Amoonguss
        )
    },
#endif //P_FAMILY_FOONGUS

#if P_FAMILY_FRILLISH
    [SPECIES_FRILLISH] =
    {
        .frontPic = gMonFrontPic_Frillish,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Frillish,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_FrillishM,
    #endif
        .palette = gMonPalette_Frillish,
        .shinyPalette = gMonShinyPalette_Frillish,
        .iconSprite = gMonIcon_Frillish,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_FrillishF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_FrillishF,
        .backPicSizeFemale = MON_COORDS_SIZE(40, 56),
        .paletteFemale = gMonPalette_FrillishF,
        .shinyPaletteFemale = gMonShinyPalette_FrillishF,
        .iconSpriteFemale = gMonIcon_FrillishF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Frillish)
        OVERWORLD(
            sPicTable_Frillish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frillish,
            gShinyOverworldPalette_Frillish
        )
        OVERWORLD_FEMALE(
            sPicTable_FrillishF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_FrillishF,
            gShinyOverworldPalette_FrillishF
        )
    },

    [SPECIES_JELLICENT] =
    {
        .frontPic = gMonFrontPic_Jellicent,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Jellicent,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_FrillishM,
    #endif
        .palette = gMonPalette_Jellicent,
        .shinyPalette = gMonShinyPalette_Jellicent,
        .iconSprite = gMonIcon_Jellicent,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_JellicentF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_JellicentF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .paletteFemale = gMonPalette_JellicentF,
        .shinyPaletteFemale = gMonShinyPalette_JellicentF,
        .iconSpriteFemale = gMonIcon_JellicentF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Jellicent)
        OVERWORLD(
            sPicTable_Jellicent,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Jellicent,
            gShinyOverworldPalette_Jellicent
        )
        OVERWORLD_FEMALE(
            sPicTable_JellicentF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_JellicentF,
            gShinyOverworldPalette_JellicentF
        )
    },
#endif //P_FAMILY_FRILLISH

#if P_FAMILY_ALOMOMOLA
    [SPECIES_ALOMOMOLA] =
    {
        .frontPic = gMonFrontPic_Alomomola,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Alomomola,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Alomomola,
    #endif
        .palette = gMonPalette_Alomomola,
        .shinyPalette = gMonShinyPalette_Alomomola,
        .iconSprite = gMonIcon_Alomomola,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Alomomola)
        OVERWORLD(
            sPicTable_Alomomola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Alomomola,
            gShinyOverworldPalette_Alomomola
        )
    },
#endif //P_FAMILY_ALOMOMOLA

#if P_FAMILY_JOLTIK
    [SPECIES_JOLTIK] =
    {
        .frontPic = gMonFrontPic_Joltik,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Joltik,
        .backPicSize = MON_COORDS_SIZE(48, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Joltik,
    #endif
        .palette = gMonPalette_Joltik,
        .shinyPalette = gMonShinyPalette_Joltik,
        .iconSprite = gMonIcon_Joltik,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -5, SHADOW_SIZE_S)
        FOOTPRINT(Joltik)
        OVERWORLD(
            sPicTable_Joltik,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Joltik,
            gShinyOverworldPalette_Joltik
        )
    },

    [SPECIES_GALVANTULA] =
    {
        .frontPic = gMonFrontPic_Galvantula,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 6),
            ANIMCMD_FRAME(0, 6),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Galvantula,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Joltik,
    #endif
        .palette = gMonPalette_Galvantula,
        .shinyPalette = gMonShinyPalette_Galvantula,
        .iconSprite = gMonIcon_Galvantula,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -2, SHADOW_SIZE_L)
        FOOTPRINT(Galvantula)
        OVERWORLD(
            sPicTable_Galvantula,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Galvantula,
            gShinyOverworldPalette_Galvantula
        )
    },
#endif //P_FAMILY_JOLTIK

#if P_FAMILY_FERROSEED
    [SPECIES_FERROSEED] =
    {
        .frontPic = gMonFrontPic_Ferroseed,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Ferroseed,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Ferroseed,
    #endif
        .palette = gMonPalette_Ferroseed,
        .shinyPalette = gMonShinyPalette_Ferroseed,
        .iconSprite = gMonIcon_Ferroseed,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Ferroseed)
        OVERWORLD(
            sPicTable_Ferroseed,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ferroseed,
            gShinyOverworldPalette_Ferroseed
        )
    },

    [SPECIES_FERROTHORN] =
    {
        .frontPic = gMonFrontPic_Ferrothorn,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Ferrothorn,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Ferroseed,
    #endif
        .palette = gMonPalette_Ferrothorn,
        .shinyPalette = gMonShinyPalette_Ferrothorn,
        .iconSprite = gMonIcon_Ferrothorn,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Ferrothorn)
        OVERWORLD(
            sPicTable_Ferrothorn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ferrothorn,
            gShinyOverworldPalette_Ferrothorn
        )
    },
#endif //P_FAMILY_FERROSEED

#if P_FAMILY_KLINK
    [SPECIES_KLINK] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Klink,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Klink,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Klink,
    #endif
        .palette = gMonPalette_Klink,
        .shinyPalette = gMonShinyPalette_Klink,
        .iconSprite = gMonIcon_Klink,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Klink)
        OVERWORLD(
            sPicTable_Klink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klink,
            gShinyOverworldPalette_Klink
        )
    },

    [SPECIES_KLANG] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Klang,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Klang,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Klink,
    #endif
        .palette = gMonPalette_Klang,
        .shinyPalette = gMonShinyPalette_Klang,
        .iconSprite = gMonIcon_Klang,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Klang)
        OVERWORLD(
            sPicTable_Klang,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klang,
            gShinyOverworldPalette_Klang
        )
    },

    [SPECIES_KLINKLANG] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Klinklang,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Klinklang,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Klink,
    #endif
        .palette = gMonPalette_Klinklang,
        .shinyPalette = gMonShinyPalette_Klinklang,
        .iconSprite = gMonIcon_Klinklang,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Klinklang)
        OVERWORLD(
            sPicTable_Klinklang,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klinklang,
            gShinyOverworldPalette_Klinklang
        )
    },
#endif //P_FAMILY_KLINK

#if P_FAMILY_TYNAMO
    [SPECIES_TYNAMO] =
    {
        .frontPic = gMonFrontPic_Tynamo,
        .frontPicSize = MON_COORDS_SIZE(40, 24),
        .frontPicYOffset = 22,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_Tynamo,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tynamo,
    #endif
        .palette = gMonPalette_Tynamo,
        .shinyPalette = gMonShinyPalette_Tynamo,
        .iconSprite = gMonIcon_Tynamo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Tynamo)
        OVERWORLD(
            sPicTable_Tynamo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tynamo,
            gShinyOverworldPalette_Tynamo
        )
    },

    [SPECIES_EELEKTRIK] =
    {
        .frontPic = gMonFrontPic_Eelektrik,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 4),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Eelektrik,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tynamo,
    #endif
        .palette = gMonPalette_Eelektrik,
        .shinyPalette = gMonShinyPalette_Eelektrik,
        .iconSprite = gMonIcon_Eelektrik,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Eelektrik)
        OVERWORLD(
            sPicTable_Eelektrik,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Eelektrik,
            gShinyOverworldPalette_Eelektrik
        )
    },

    [SPECIES_EELEKTROSS] =
    {
        .frontPic = gMonFrontPic_Eelektross,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 27),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 27),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Eelektross,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tynamo,
    #endif
        .palette = gMonPalette_Eelektross,
        .shinyPalette = gMonShinyPalette_Eelektross,
        .iconSprite = gMonIcon_Eelektross,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Eelektross)
        OVERWORLD(
            sPicTable_Eelektross,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Eelektross,
            gShinyOverworldPalette_Eelektross
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EELEKTROSS_MEGA] =
    {
        .frontPic = gMonFrontPic_EelektrossMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_EelektrossMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tynamo,
    #endif
        .palette = gMonPalette_EelektrossMega,
        .shinyPalette = gMonShinyPalette_EelektrossMega,
        .iconSprite = gMonIcon_EelektrossMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Eelektross)
        SHADOW(-2, 16, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TYNAMO

#if P_FAMILY_ELGYEM
    [SPECIES_ELGYEM] =
    {
        .frontPic = gMonFrontPic_Elgyem,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 11,
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
        .frontAnimId = ANIM_RISING_WOBBLE,
        .backPic = gMonBackPic_Elgyem,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Elgyem,
    #endif
        .palette = gMonPalette_Elgyem,
        .shinyPalette = gMonShinyPalette_Elgyem,
        .iconSprite = gMonIcon_Elgyem,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Elgyem)
        OVERWORLD(
            sPicTable_Elgyem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Elgyem,
            gShinyOverworldPalette_Elgyem
        )
    },

    [SPECIES_BEHEEYEM] =
    {
        .frontPic = gMonFrontPic_Beheeyem,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Beheeyem,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Elgyem,
    #endif
        .palette = gMonPalette_Beheeyem,
        .shinyPalette = gMonShinyPalette_Beheeyem,
        .iconSprite = gMonIcon_Beheeyem,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Beheeyem)
        OVERWORLD(
            sPicTable_Beheeyem,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Beheeyem,
            gShinyOverworldPalette_Beheeyem
        )
    },
#endif //P_FAMILY_ELGYEM

#if P_FAMILY_LITWICK
    [SPECIES_LITWICK] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Litwick,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Litwick,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Litwick,
    #endif
        .palette = gMonPalette_Litwick,
        .shinyPalette = gMonShinyPalette_Litwick,
        .iconSprite = gMonIcon_Litwick,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Litwick)
        OVERWORLD(
            sPicTable_Litwick,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Litwick,
            gShinyOverworldPalette_Litwick
        )
    },

    [SPECIES_LAMPENT] =
    {
        .frontPic = gMonFrontPic_Lampent,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Lampent,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Litwick,
    #endif
        .palette = gMonPalette_Lampent,
        .shinyPalette = gMonShinyPalette_Lampent,
        .iconSprite = gMonIcon_Lampent,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Lampent)
        OVERWORLD(
            sPicTable_Lampent,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lampent,
            gShinyOverworldPalette_Lampent
        )
    },

    [SPECIES_CHANDELURE] =
    {
        .frontPic = gMonFrontPic_Chandelure,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Chandelure,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Litwick,
    #endif
        .palette = gMonPalette_Chandelure,
        .shinyPalette = gMonShinyPalette_Chandelure,
        .iconSprite = gMonIcon_Chandelure,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Chandelure)
        OVERWORLD(
            sPicTable_Chandelure,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chandelure,
            gShinyOverworldPalette_Chandelure
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CHANDELURE_MEGA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_ChandelureMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_ChandelureMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Litwick,
    #endif
        .palette = gMonPalette_ChandelureMega,
        .shinyPalette = gMonShinyPalette_ChandelureMega,
        .iconSprite = gMonIcon_ChandelureMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Chandelure)
        SHADOW(-1, 16, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_LITWICK

#if P_FAMILY_AXEW
    [SPECIES_AXEW] =
    {
        .frontPic = gMonFrontPic_Axew,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Axew,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Axew,
    #endif
        .palette = gMonPalette_Axew,
        .shinyPalette = gMonShinyPalette_Axew,
        .iconSprite = gMonIcon_Axew,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Axew)
        OVERWORLD(
            sPicTable_Axew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Axew,
            gShinyOverworldPalette_Axew
        )
    },

    [SPECIES_FRAXURE] =
    {
        .frontPic = gMonFrontPic_Fraxure,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fraxure,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Axew,
    #endif
        .palette = gMonPalette_Fraxure,
        .shinyPalette = gMonShinyPalette_Fraxure,
        .iconSprite = gMonIcon_Fraxure,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Fraxure)
        OVERWORLD(
            sPicTable_Fraxure,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fraxure,
            gShinyOverworldPalette_Fraxure
        )
    },

    [SPECIES_HAXORUS] =
    {
        .frontPic = gMonFrontPic_Haxorus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Haxorus,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Axew,
    #endif
        .palette = gMonPalette_Haxorus,
        .shinyPalette = gMonShinyPalette_Haxorus,
        .iconSprite = gMonIcon_Haxorus,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_L)
        FOOTPRINT(Haxorus)
        OVERWORLD(
            sPicTable_Haxorus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Haxorus,
            gShinyOverworldPalette_Haxorus
        )
    },
#endif //P_FAMILY_AXEW

#if P_FAMILY_CUBCHOO
    [SPECIES_CUBCHOO] =
    {
        .frontPic = gMonFrontPic_Cubchoo,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cubchoo,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Cubchoo,
    #endif
        .palette = gMonPalette_Cubchoo,
        .shinyPalette = gMonShinyPalette_Cubchoo,
        .iconSprite = gMonIcon_Cubchoo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Cubchoo)
        OVERWORLD(
            sPicTable_Cubchoo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cubchoo,
            gShinyOverworldPalette_Cubchoo
        )
    },

    [SPECIES_BEARTIC] =
    {
        .frontPic = gMonFrontPic_Beartic,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Beartic,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Cubchoo,
    #endif
        .palette = gMonPalette_Beartic,
        .shinyPalette = gMonShinyPalette_Beartic,
        .iconSprite = gMonIcon_Beartic,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Beartic)
        OVERWORLD(
            sPicTable_Beartic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Beartic,
            gShinyOverworldPalette_Beartic
        )
    },
#endif //P_FAMILY_CUBCHOO

#if P_FAMILY_CRYOGONAL
    [SPECIES_CRYOGONAL] =
    {
        .frontPic = gMonFrontPic_Cryogonal,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 48),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Cryogonal,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Cryogonal,
    #endif
        .palette = gMonPalette_Cryogonal,
        .shinyPalette = gMonShinyPalette_Cryogonal,
        .iconSprite = gMonIcon_Cryogonal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cryogonal)
        OVERWORLD(
            sPicTable_Cryogonal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cryogonal,
            gShinyOverworldPalette_Cryogonal
        )
    },
#endif //P_FAMILY_CRYOGONAL

#if P_FAMILY_SHELMET
    [SPECIES_SHELMET] =
    {
        .frontPic = gMonFrontPic_Shelmet,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TWIST,
        .backPic = gMonBackPic_Shelmet,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 19,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Shelmet,
    #endif
        .palette = gMonPalette_Shelmet,
        .shinyPalette = gMonShinyPalette_Shelmet,
        .iconSprite = gMonIcon_Shelmet,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Shelmet)
        OVERWORLD(
            sPicTable_Shelmet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shelmet,
            gShinyOverworldPalette_Shelmet
        )
    },

    [SPECIES_ACCELGOR] =
    {
        .frontPic = gMonFrontPic_Accelgor,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Accelgor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_H_SPRING_REPEATED,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Shelmet,
    #endif
        .palette = gMonPalette_Accelgor,
        .shinyPalette = gMonShinyPalette_Accelgor,
        .iconSprite = gMonIcon_Accelgor,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-14, 8, SHADOW_SIZE_S)
        FOOTPRINT(Accelgor)
        OVERWORLD(
            sPicTable_Accelgor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Accelgor,
            gShinyOverworldPalette_Accelgor
        )
    },
#endif //P_FAMILY_SHELMET

#if P_FAMILY_STUNFISK
    [SPECIES_STUNFISK] =
    {
        .frontPic = gMonFrontPic_Stunfisk,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Stunfisk,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 22,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Stunfisk,
    #endif
        .palette = gMonPalette_Stunfisk,
        .shinyPalette = gMonShinyPalette_Stunfisk,
        .iconSprite = gMonIcon_Stunfisk,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Stunfisk)
        OVERWORLD(
            sPicTable_Stunfisk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stunfisk,
            gShinyOverworldPalette_Stunfisk
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_STUNFISK_GALAR] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_StunfiskGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_StunfiskGalar,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 23,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_StunfiskGalar,
    #endif
        .palette = gMonPalette_StunfiskGalar,
        .shinyPalette = gMonShinyPalette_StunfiskGalar,
        .iconSprite = gMonIcon_StunfiskGalar,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Stunfisk)
        OVERWORLD(
            sPicTable_StunfiskGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_StunfiskGalar,
            gShinyOverworldPalette_StunfiskGalar
        )
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_MIENFOO
    [SPECIES_MIENFOO] =
    {
        .frontPic = gMonFrontPic_Mienfoo,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Mienfoo,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Mienfoo,
    #endif
        .palette = gMonPalette_Mienfoo,
        .shinyPalette = gMonShinyPalette_Mienfoo,
        .iconSprite = gMonIcon_Mienfoo,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Mienfoo)
        OVERWORLD(
            sPicTable_Mienfoo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mienfoo,
            gShinyOverworldPalette_Mienfoo
        )
    },

    [SPECIES_MIENSHAO] =
    {
        .frontPic = gMonFrontPic_Mienshao,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 50),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mienshao,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Mienfoo,
    #endif
        .palette = gMonPalette_Mienshao,
        .shinyPalette = gMonShinyPalette_Mienshao,
        .iconSprite = gMonIcon_Mienshao,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Mienshao)
        OVERWORLD(
            sPicTable_Mienshao,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mienshao,
            gShinyOverworldPalette_Mienshao
        )
    },
#endif //P_FAMILY_MIENFOO

#if P_FAMILY_DRUDDIGON
    [SPECIES_DRUDDIGON] =
    {
        .frontPic = gMonFrontPic_Druddigon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 22),
            ANIMCMD_FRAME(1, 22),
            ANIMCMD_FRAME(0, 11),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        .backPic = gMonBackPic_Druddigon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Druddigon,
    #endif
        .palette = gMonPalette_Druddigon,
        .shinyPalette = gMonShinyPalette_Druddigon,
        .iconSprite = gMonIcon_Druddigon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 9, SHADOW_SIZE_M)
        FOOTPRINT(Druddigon)
        OVERWORLD(
            sPicTable_Druddigon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Druddigon,
            gShinyOverworldPalette_Druddigon
        )
    },
#endif //P_FAMILY_DRUDDIGON

#if P_FAMILY_GOLETT
    [SPECIES_GOLETT] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Golett,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 44),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Golett,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Golett,
    #endif
        .palette = gMonPalette_Golett,
        .shinyPalette = gMonShinyPalette_Golett,
        .iconSprite = gMonIcon_Golett,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 7, SHADOW_SIZE_M)
        FOOTPRINT(Golett)
        OVERWORLD(
            sPicTable_Golett,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Golett,
            gShinyOverworldPalette_Golett
        )
    },

    [SPECIES_GOLURK] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Golurk,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Golurk,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Golett,
    #endif
        .palette = gMonPalette_Golurk,
        .shinyPalette = gMonShinyPalette_Golurk,
        .iconSprite = gMonIcon_Golurk,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Golurk)
        OVERWORLD(
            sPicTable_Golurk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Golurk,
            gShinyOverworldPalette_Golurk
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GOLURK_MEGA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_GolurkMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GolurkMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Golett,
    #endif
        .palette = gMonPalette_GolurkMega,
        .shinyPalette = gMonShinyPalette_GolurkMega,
        .iconSprite = gMonIcon_GolurkMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Golurk)
        SHADOW(-3, 14, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_GOLETT

#if P_FAMILY_PAWNIARD
    [SPECIES_PAWNIARD] =
    {
        .frontPic = gMonFrontPic_Pawniard,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Pawniard,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pawniard,
    #endif
        .palette = gMonPalette_Pawniard,
        .shinyPalette = gMonShinyPalette_Pawniard,
        .iconSprite = gMonIcon_Pawniard,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(4, 4, SHADOW_SIZE_S)
        FOOTPRINT(Pawniard)
        OVERWORLD(
            sPicTable_Pawniard,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pawniard,
            gShinyOverworldPalette_Pawniard
        )
    },

    [SPECIES_BISHARP] =
    {
        .frontPic = gMonFrontPic_Bisharp,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Bisharp,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pawniard,
    #endif
        .palette = gMonPalette_Bisharp,
        .shinyPalette = gMonShinyPalette_Bisharp,
        .iconSprite = gMonIcon_Bisharp,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Bisharp)
        OVERWORLD(
            sPicTable_Bisharp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bisharp,
            gShinyOverworldPalette_Bisharp
        )
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_KINGAMBIT] =
    {
        .frontPic = gMonFrontPic_Kingambit,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kingambit,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Pawniard,
    #endif
        .palette = gMonPalette_Kingambit,
        .shinyPalette = gMonShinyPalette_Kingambit,
        .iconSprite = gMonIcon_Kingambit,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Kingambit)
        OVERWORLD(
            sPicTable_Kingambit,
            SIZE_64x64,
            SHADOW_SIZE_L,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Kingambit,
            gShinyOverworldPalette_Kingambit
        )
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD

#if P_FAMILY_BOUFFALANT
    [SPECIES_BOUFFALANT] =
    {
        .frontPic = gMonFrontPic_Bouffalant,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Bouffalant,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Bouffalant,
    #endif
        .palette = gMonPalette_Bouffalant,
        .shinyPalette = gMonShinyPalette_Bouffalant,
        .iconSprite = gMonIcon_Bouffalant,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 7, SHADOW_SIZE_M)
        FOOTPRINT(Bouffalant)
        OVERWORLD(
            sPicTable_Bouffalant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bouffalant,
            gShinyOverworldPalette_Bouffalant
        )
    },
#endif //P_FAMILY_BOUFFALANT

#if P_FAMILY_RUFFLET
    [SPECIES_RUFFLET] =
    {
        .frontPic = gMonFrontPic_Rufflet,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Rufflet,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Rufflet,
    #endif
        .palette = gMonPalette_Rufflet,
        .shinyPalette = gMonShinyPalette_Rufflet,
        .iconSprite = gMonIcon_Rufflet,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Rufflet)
        OVERWORLD(
            sPicTable_Rufflet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Rufflet,
            gShinyOverworldPalette_Rufflet
        )
    },

    [SPECIES_BRAVIARY_OUTSIDER] =
    {
        .frontPic = gMonFrontPic_Braviary,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Braviary,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Rufflet,
    #endif
        .palette = gMonPalette_Braviary,
        .shinyPalette = gMonShinyPalette_Braviary,
        .iconSprite = gMonIcon_Braviary,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 16, SHADOW_SIZE_M)
        FOOTPRINT(Braviary)
        OVERWORLD(
            sPicTable_Braviary,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Braviary,
            gShinyOverworldPalette_Braviary
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_BRAVIARY] =
    {
        .frontPic = gMonFrontPic_BraviaryHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_BraviaryHisui,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Rufflet,
    #endif
        .palette = gMonPalette_BraviaryHisui,
        .shinyPalette = gMonShinyPalette_BraviaryHisui,
        .iconSprite = gMonIcon_BraviaryHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Braviary)
        OVERWORLD(
            sPicTable_BraviaryHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BraviaryHisui,
            gShinyOverworldPalette_BraviaryHisui
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_RUFFLET

#if P_FAMILY_VULLABY
    [SPECIES_VULLABY] =
    {
        .frontPic = gMonFrontPic_Vullaby,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Vullaby,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Vullaby,
    #endif
        .palette = gMonPalette_Vullaby,
        .shinyPalette = gMonShinyPalette_Vullaby,
        .iconSprite = gMonIcon_Vullaby,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Vullaby)
        OVERWORLD(
            sPicTable_Vullaby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Vullaby,
            gShinyOverworldPalette_Vullaby
        )
    },

    [SPECIES_MANDIBUZZ] =
    {
        .frontPic = gMonFrontPic_Mandibuzz,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Mandibuzz,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Vullaby,
    #endif
        .palette = gMonPalette_Mandibuzz,
        .shinyPalette = gMonShinyPalette_Mandibuzz,
        .iconSprite = gMonIcon_Mandibuzz,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Mandibuzz)
        OVERWORLD(
            sPicTable_Mandibuzz,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mandibuzz,
            gShinyOverworldPalette_Mandibuzz
        )
    },
#endif //P_FAMILY_VULLABY

#if P_FAMILY_HEATMOR
    [SPECIES_HEATMOR] =
    {
        .frontPic = gMonFrontPic_Heatmor,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Heatmor,
        .backPicSize = MON_COORDS_SIZE(64, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Heatmor,
    #endif
        .palette = gMonPalette_Heatmor,
        .shinyPalette = gMonShinyPalette_Heatmor,
        .iconSprite = gMonIcon_Heatmor,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 7, SHADOW_SIZE_L)
        FOOTPRINT(Heatmor)
        OVERWORLD(
            sPicTable_Heatmor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Heatmor,
            gShinyOverworldPalette_Heatmor
        )
    },
#endif //P_FAMILY_HEATMOR

#if P_FAMILY_DURANT
    [SPECIES_DURANT] =
    {
        .frontPic = gMonFrontPic_Durant,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Durant,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Durant,
    #endif
        .palette = gMonPalette_Durant,
        .shinyPalette = gMonShinyPalette_Durant,
        .iconSprite = gMonIcon_Durant,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -3, SHADOW_SIZE_L)
        FOOTPRINT(Durant)
        OVERWORLD(
            sPicTable_Durant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Durant,
            gShinyOverworldPalette_Durant
        )
    },
#endif //P_FAMILY_DURANT

#if P_FAMILY_DEINO
    [SPECIES_DEINO] =
    {
        .frontPic = gMonFrontPic_Deino,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Deino,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deino,
    #endif
        .palette = gMonPalette_Deino,
        .shinyPalette = gMonShinyPalette_Deino,
        .iconSprite = gMonIcon_Deino,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Deino)
        OVERWORLD(
            sPicTable_Deino,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Deino,
            gShinyOverworldPalette_Deino
        )
    },

    [SPECIES_ZWEILOUS] =
    {
        .frontPic = gMonFrontPic_Zweilous,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Zweilous,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deino,
    #endif
        .palette = gMonPalette_Zweilous,
        .shinyPalette = gMonShinyPalette_Zweilous,
        .iconSprite = gMonIcon_Zweilous,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_L)
        FOOTPRINT(Zweilous)
        OVERWORLD(
            sPicTable_Zweilous,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zweilous,
            gShinyOverworldPalette_Zweilous
        )
    },

    [SPECIES_HYDREIGON] =
    {
        .frontPic = gMonFrontPic_Hydreigon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
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
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Hydreigon,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Deino,
    #endif
        .palette = gMonPalette_Hydreigon,
        .shinyPalette = gMonShinyPalette_Hydreigon,
        .iconSprite = gMonIcon_Hydreigon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 16, SHADOW_SIZE_M)
        FOOTPRINT(Hydreigon)
        OVERWORLD(
            sPicTable_Hydreigon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hydreigon,
            gShinyOverworldPalette_Hydreigon
        )
    },
#endif //P_FAMILY_DEINO

#if P_FAMILY_LARVESTA
    [SPECIES_LARVESTA] =
    {
        .frontPic = gMonFrontPic_Larvesta,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_GLOW_ORANGE,
        .backPic = gMonBackPic_Larvesta,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Larvesta,
    #endif
        .palette = gMonPalette_Larvesta,
        .shinyPalette = gMonShinyPalette_Larvesta,
        .iconSprite = gMonIcon_Larvesta,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Larvesta)
        OVERWORLD(
            sPicTable_Larvesta,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Larvesta,
            gShinyOverworldPalette_Larvesta
        )
    },

    [SPECIES_VOLCARONA] =
    {
        .frontPic = gMonFrontPic_Volcarona,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Volcarona,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Larvesta,
    #endif
        .palette = gMonPalette_Volcarona,
        .shinyPalette = gMonShinyPalette_Volcarona,
        .iconSprite = gMonIcon_Volcarona,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 14, SHADOW_SIZE_M)
        FOOTPRINT(Volcarona)
        OVERWORLD(
            sPicTable_Volcarona,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Volcarona,
            gShinyOverworldPalette_Volcarona
        )
    },
#endif //P_FAMILY_LARVESTA

#if P_FAMILY_COBALION
    [SPECIES_COBALION] =
    {
        .frontPic = gMonFrontPic_Cobalion,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Cobalion,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Cobalion,
    #endif
        .palette = gMonPalette_Cobalion,
        .shinyPalette = gMonShinyPalette_Cobalion,
        .iconSprite = gMonIcon_Cobalion,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Cobalion)
        OVERWORLD(
            sPicTable_Cobalion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cobalion,
            gShinyOverworldPalette_Cobalion
        )
    },
#endif //P_FAMILY_COBALION

#if P_FAMILY_TERRAKION
    [SPECIES_TERRAKION] =
    {
        .frontPic = gMonFrontPic_Terrakion,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Terrakion,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Terrakion,
    #endif
        .palette = gMonPalette_Terrakion,
        .shinyPalette = gMonShinyPalette_Terrakion,
        .iconSprite = gMonIcon_Terrakion,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 6, SHADOW_SIZE_L)
        FOOTPRINT(Terrakion)
        OVERWORLD(
            sPicTable_Terrakion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Terrakion,
            gShinyOverworldPalette_Terrakion
        )
    },
#endif //P_FAMILY_TERRAKION

#if P_FAMILY_VIRIZION
    [SPECIES_VIRIZION] =
    {
        .frontPic = gMonFrontPic_Virizion,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Virizion,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Virizion,
    #endif
        .palette = gMonPalette_Virizion,
        .shinyPalette = gMonShinyPalette_Virizion,
        .iconSprite = gMonIcon_Virizion,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Virizion)
        OVERWORLD(
            sPicTable_Virizion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Virizion,
            gShinyOverworldPalette_Virizion
        )
    },
#endif //P_FAMILY_VIRIZION

#if P_FAMILY_TORNADUS
    [SPECIES_TORNADUS_INCARNATE] =
    {
        .frontPic = gMonFrontPic_TornadusIncarnate,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
        ),
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_TornadusIncarnate,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tornadus,
    #endif
        .palette = gMonPalette_TornadusIncarnate,
        .shinyPalette = gMonShinyPalette_TornadusIncarnate,
        .iconSprite = gMonIcon_TornadusIncarnate,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Tornadus)
        OVERWORLD(
            sPicTable_TornadusIncarnate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_TornadusIncarnate,
            gShinyOverworldPalette_TornadusIncarnate
        )
    },

    [SPECIES_TORNADUS_THERIAN] =
    {
        .frontPic = gMonFrontPic_TornadusTherian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_TornadusTherian,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Tornadus,
    #endif
        .palette = gMonPalette_TornadusTherian,
        .shinyPalette = gMonShinyPalette_TornadusTherian,
        .iconSprite = gMonIcon_TornadusTherian,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_L)
        FOOTPRINT(Tornadus)
        OVERWORLD(
            sPicTable_TornadusTherian,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TornadusTherian,
            gShinyOverworldPalette_TornadusTherian
        )
    },
#endif //P_FAMILY_TORNADUS

#if P_FAMILY_THUNDURUS
    [SPECIES_THUNDURUS_INCARNATE] =
    {
        .frontPic = gMonFrontPic_ThundurusIncarnate,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
        ),
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_ThundurusIncarnate,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Thundurus,
    #endif
        .palette = gMonPalette_ThundurusIncarnate,
        .shinyPalette = gMonShinyPalette_ThundurusIncarnate,
        .iconSprite = gMonIcon_ThundurusIncarnate,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Thundurus)
        OVERWORLD(
            sPicTable_ThundurusIncarnate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_ThundurusIncarnate,
            gShinyOverworldPalette_ThundurusIncarnate
        )
    },

    [SPECIES_THUNDURUS_THERIAN] =
    {
        .frontPic = gMonFrontPic_ThundurusTherian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
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
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_ThundurusTherian,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Thundurus,
    #endif
        .palette = gMonPalette_ThundurusTherian,
        .shinyPalette = gMonShinyPalette_ThundurusTherian,
        .iconSprite = gMonIcon_ThundurusTherian,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 16, SHADOW_SIZE_M)
        FOOTPRINT(Thundurus)
        OVERWORLD(
            sPicTable_ThundurusTherian,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ThundurusTherian,
            gShinyOverworldPalette_ThundurusTherian
        )
    },
#endif //P_FAMILY_THUNDURUS

#if P_FAMILY_RESHIRAM
    [SPECIES_RESHIRAM] =
    {
        .frontPic = gMonFrontPic_Reshiram,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Reshiram,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Reshiram,
    #endif
        .palette = gMonPalette_Reshiram,
        .shinyPalette = gMonShinyPalette_Reshiram,
        .iconSprite = gMonIcon_Reshiram,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 12, SHADOW_SIZE_L)
        FOOTPRINT(Reshiram)
        OVERWORLD(
            sPicTable_Reshiram,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Reshiram,
            gShinyOverworldPalette_Reshiram
        )
    },
#endif //P_FAMILY_RESHIRAM

#if P_FAMILY_ZEKROM
    [SPECIES_ZEKROM] =
    {
        .frontPic = gMonFrontPic_Zekrom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Zekrom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Zekrom,
    #endif
        .palette = gMonPalette_Zekrom,
        .shinyPalette = gMonShinyPalette_Zekrom,
        .iconSprite = gMonIcon_Zekrom,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Zekrom)
        OVERWORLD(
            sPicTable_Zekrom,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zekrom,
            gShinyOverworldPalette_Zekrom
        )
    },
#endif //P_FAMILY_ZEKROM

#if P_FAMILY_LANDORUS
    [SPECIES_LANDORUS_INCARNATE] =
    {
        .frontPic = gMonFrontPic_LandorusIncarnate,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 2),
            ANIMCMD_FRAME(0, 2),
        ),
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_LandorusIncarnate,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Landorus,
    #endif
        .palette = gMonPalette_LandorusIncarnate,
        .shinyPalette = gMonShinyPalette_LandorusIncarnate,
        .iconSprite = gMonIcon_LandorusIncarnate,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Landorus)
        OVERWORLD(
            sPicTable_LandorusIncarnate,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_LandorusIncarnate,
            gShinyOverworldPalette_LandorusIncarnate
        )
    },

    [SPECIES_LANDORUS_THERIAN] =
    {
        .frontPic = gMonFrontPic_LandorusTherian,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_CIRCULAR_VIBRATE,
        .backPic = gMonBackPic_LandorusTherian,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Landorus,
    #endif
        .palette = gMonPalette_LandorusTherian,
        .shinyPalette = gMonShinyPalette_LandorusTherian,
        .iconSprite = gMonIcon_LandorusTherian,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Landorus)
        OVERWORLD(
            sPicTable_LandorusTherian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LandorusTherian,
            gShinyOverworldPalette_LandorusTherian
        )
    },
#endif //P_FAMILY_LANDORUS

#if P_FAMILY_KYUREM
    [SPECIES_KYUREM] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Kyurem,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kyurem,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Kyurem,
    #endif
        .palette = gMonPalette_Kyurem,
        .shinyPalette = gMonShinyPalette_Kyurem,
        .iconSprite = gMonIcon_Kyurem,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_L)
        FOOTPRINT(Kyurem)
        OVERWORLD(
            sPicTable_Kyurem,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kyurem,
            gShinyOverworldPalette_Kyurem
        )
    },

#if P_FUSION_FORMS
    [SPECIES_KYUREM_WHITE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_KyuremWhite,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_KyuremWhite,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Kyurem,
    #endif
        .palette = gMonPalette_KyuremWhite,
        .shinyPalette = gMonShinyPalette_KyuremWhite,
        .iconSprite = gMonIcon_KyuremWhite,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-8, 14, SHADOW_SIZE_L)
        FOOTPRINT(Kyurem)
        OVERWORLD(
            sPicTable_KyuremWhite,
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_KyuremWhite,
            gShinyOverworldPalette_KyuremWhite
        )
    },

    [SPECIES_KYUREM_BLACK] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_KyuremBlack,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_KyuremBlack,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Kyurem,
    #endif
        .palette = gMonPalette_KyuremBlack,
        .shinyPalette = gMonShinyPalette_KyuremBlack,
        .iconSprite = gMonIcon_KyuremBlack,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Kyurem)
        OVERWORLD(
            sPicTable_KyuremBlack,
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_KyuremBlack,
            gShinyOverworldPalette_KyuremBlack
        )
    },
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM

#if P_FAMILY_KELDEO
    [SPECIES_KELDEO_ORDINARY] =
    {
        .frontPic = gMonFrontPic_KeldeoOrdinary,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_KeldeoOrdinary,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Keldeo,
    #endif
        .palette = gMonPalette_KeldeoOrdinary,
        .shinyPalette = gMonShinyPalette_KeldeoOrdinary,
        .iconSprite = gMonIcon_KeldeoOrdinary,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Keldeo)
        OVERWORLD(
            sPicTable_KeldeoOrdinary,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_KeldeoOrdinary,
            gShinyOverworldPalette_KeldeoOrdinary
        )
    },

    [SPECIES_KELDEO_RESOLUTE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_KeldeoResolute,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_KeldeoResolute,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Keldeo,
    #endif
        .palette = gMonPalette_KeldeoResolute,
        .shinyPalette = gMonShinyPalette_KeldeoResolute,
        .iconSprite = gMonIcon_KeldeoResolute,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Keldeo)
    },
#endif //P_FAMILY_KELDEO

#if P_FAMILY_MELOETTA
    [SPECIES_MELOETTA_ARIA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_MeloettaAria,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_MeloettaAria,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Meloetta,
    #endif
        .palette = gMonPalette_MeloettaAria,
        .shinyPalette = gMonShinyPalette_MeloettaAria,
        .iconSprite = gMonIcon_MeloettaAria,
        .iconPalIndex = 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Meloetta)
        OVERWORLD(
            sPicTable_MeloettaAria,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_MeloettaAria,
            gShinyOverworldPalette_MeloettaAria
        )
    },

    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_MeloettaPirouette,
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
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_MeloettaPirouette,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
        .eggPalette = gEggPalette_Meloetta,
    #endif
        .palette = gMonPalette_MeloettaPirouette,
        .shinyPalette = gMonShinyPalette_MeloettaPirouette,
        .iconSprite = gMonIcon_MeloettaPirouette,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_S)
        FOOTPRINT(Meloetta)
        OVERWORLD(
            sPicTable_MeloettaPirouette,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_MeloettaPirouette,
            gShinyOverworldPalette_MeloettaPirouette
        )
    },
#endif //P_FAMILY_MELOETTA

#if P_FAMILY_GENESECT
#if SPECIES_EGG_COLOR && GEN_5_EGG_COLORS
    #define GENESECT_EGG_COLOR .eggPalette = gEggPalette_Genesect,
#else
    #define GENESECT_EGG_COLOR
#endif

#define GENESECT_SPECIES_INFO_GRAPHICS(form)                                                 \
    {                                                                               \
        GENESECT_EGG_COLOR                                                          \
        .frontPic = gMonFrontPic_Genesect,                                          \
        .frontPicSize = MON_COORDS_SIZE(56, 64),                                    \
        .frontPicYOffset = 0,                                                       \
        .frontAnimFrames = sAnims_Genesect,                                         \
        .frontAnimId = ANIM_H_VIBRATE,                                              \
        .backPic = gMonBackPic_Genesect,                                            \
        .backPicSize = MON_COORDS_SIZE(64, 48),                                     \
        .backPicYOffset = 8,                                                        \
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,                            \
        .palette = gMonPalette_##form,                                              \
        .shinyPalette = gMonShinyPalette_##form,                                    \
        .iconSprite = gMonIcon_Genesect,                                            \
        .iconPalIndex = 2,                                                          \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                     \
        SHADOW(5, 13, SHADOW_SIZE_L)                                                \
        FOOTPRINT(Genesect)                                                         \
        OVERWORLD(                                                                  \
            sPicTable_Genesect,                                                     \
            SIZE_32x32,                                                             \
            SHADOW_SIZE_M,                                                          \
            TRACKS_FOOT,                                                            \
            sAnimTable_Following,                                                   \
            gOverworldPalette_Genesect,                                             \
            gShinyOverworldPalette_Genesect                                         \
        )                                                                           \
    }

    [SPECIES_GENESECT]             = GENESECT_SPECIES_INFO_GRAPHICS(Genesect),
    [SPECIES_GENESECT_DOUSE] = GENESECT_SPECIES_INFO_GRAPHICS(GenesectDouseDrive),
    [SPECIES_GENESECT_SHOCK] = GENESECT_SPECIES_INFO_GRAPHICS(GenesectShockDrive),
    [SPECIES_GENESECT_BURN]  = GENESECT_SPECIES_INFO_GRAPHICS(GenesectBurnDrive),
    [SPECIES_GENESECT_CHILL] = GENESECT_SPECIES_INFO_GRAPHICS(GenesectChillDrive),
#endif //P_FAMILY_GENESECT

#ifdef __INTELLISENSE__
};
#endif
