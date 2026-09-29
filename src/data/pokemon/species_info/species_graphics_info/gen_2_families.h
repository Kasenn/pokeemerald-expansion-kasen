#ifdef __INTELLISENSE__
const struct SpeciesGraphicsInfo gSpeciesGraphicsInfoGen2[] =
{
#endif

#if P_FAMILY_CHIKORITA
    [SPECIES_CHIKORITA] =
    {
        .frontPic = gMonFrontPic_Chikorita,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Chikorita,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Chikorita,
    #endif
        .palette = gMonPalette_Chikorita,
        .shinyPalette = gMonShinyPalette_Chikorita,
        .iconSprite = gMonIcon_Chikorita,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Chikorita)
        OVERWORLD(
            sPicTable_Chikorita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chikorita,
            gShinyOverworldPalette_Chikorita
        )
    },

    [SPECIES_BAYLEEF] =
    {
        .frontPic = gMonFrontPic_Bayleef,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bayleef,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Chikorita,
    #endif
        .palette = gMonPalette_Bayleef,
        .shinyPalette = gMonShinyPalette_Bayleef,
        .iconSprite = gMonIcon_Bayleef,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Bayleef)
        OVERWORLD(
            sPicTable_Bayleef,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bayleef,
            gShinyOverworldPalette_Bayleef
        )
    },

    [SPECIES_MEGANIUM] =
    {
        .frontPic = gMonFrontPic_Meganium,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Meganium,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Chikorita,
    #endif
        .palette = gMonPalette_Meganium,
        .shinyPalette = gMonShinyPalette_Meganium,
        .iconSprite = gMonIcon_Meganium,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_MeganiumF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 64),
        .backPicFemale = gMonBackPic_MeganiumF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_M)
        FOOTPRINT(Meganium)
        OVERWORLD(
            sPicTable_Meganium,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Meganium,
            gShinyOverworldPalette_Meganium
        )
        OVERWORLD_FEMALE(
            sPicTable_MeganiumF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MEGANIUM_MEGA] =
    {
        .frontPic = gMonFrontPic_MeganiumMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MeganiumMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Chikorita,
    #endif
        .palette = gMonPalette_MeganiumMega,
        .shinyPalette = gMonShinyPalette_MeganiumMega,
        .iconSprite = gMonIcon_MeganiumMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Meganium)
        SHADOW(-2, 13, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHIKORITA

#if P_FAMILY_CYNDAQUIL
    [SPECIES_CYNDAQUIL] =
    {
        .frontPic = gMonFrontPic_Cyndaquil,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Cyndaquil,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Cyndaquil,
    #endif
        .palette = gMonPalette_Cyndaquil,
        .shinyPalette = gMonShinyPalette_Cyndaquil,
        .iconSprite = gMonIcon_Cyndaquil,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Cyndaquil)
        OVERWORLD(
            sPicTable_Cyndaquil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cyndaquil,
            gShinyOverworldPalette_Cyndaquil
        )
    },

    [SPECIES_QUILAVA] =
    {
        .frontPic = gMonFrontPic_Quilava,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_H_STRETCH,
        .backPic = gMonBackPic_Quilava,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Cyndaquil,
    #endif
        .palette = gMonPalette_Quilava,
        .shinyPalette = gMonShinyPalette_Quilava,
        .iconSprite = gMonIcon_Quilava,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Quilava)
        OVERWORLD(
            sPicTable_Quilava,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quilava,
            gShinyOverworldPalette_Quilava
        )
    },

    [SPECIES_TYPHLOSION] =
    {
        .frontPic = gMonFrontPic_Typhlosion,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Typhlosion,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Cyndaquil,
    #endif
        .palette = gMonPalette_Typhlosion,
        .shinyPalette = gMonShinyPalette_Typhlosion,
        .iconSprite = gMonIcon_Typhlosion,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Typhlosion)
        OVERWORLD(
            sPicTable_Typhlosion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Typhlosion,
            gShinyOverworldPalette_Typhlosion
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_TYPHLOSION_HISUI] =
    {
        .frontPic = gMonFrontPic_TyphlosionHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TyphlosionHisui,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Cyndaquil,
    #endif
        .palette = gMonPalette_TyphlosionHisui,
        .shinyPalette = gMonShinyPalette_TyphlosionHisui,
        .iconSprite = gMonIcon_TyphlosionHisui,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Typhlosion)
        OVERWORLD(
            sPicTable_TyphlosionHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TyphlosionHisui,
            gShinyOverworldPalette_TyphlosionHisui
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_CYNDAQUIL

#if P_FAMILY_TOTODILE
    [SPECIES_TOTODILE] =
    {
        .frontPic = gMonFrontPic_Totodile,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Totodile,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Totodile,
    #endif
        .palette = gMonPalette_Totodile,
        .shinyPalette = gMonShinyPalette_Totodile,
        .iconSprite = gMonIcon_Totodile,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Totodile)
        OVERWORLD(
            sPicTable_Totodile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Totodile,
            gShinyOverworldPalette_Totodile
        )
    },

    [SPECIES_CROCONAW] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Croconaw,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Croconaw,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Totodile,
    #endif
        .palette = gMonPalette_Croconaw,
        .shinyPalette = gMonShinyPalette_Croconaw,
        .iconSprite = gMonIcon_Croconaw,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Croconaw)
        OVERWORLD(
            sPicTable_Croconaw,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Croconaw,
            gShinyOverworldPalette_Croconaw
        )
    },

    [SPECIES_FERALIGATR] =
    {
        .frontPic = gMonFrontPic_Feraligatr,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 5,
        .backPic = gMonBackPic_Feraligatr,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Totodile,
    #endif
        .palette = gMonPalette_Feraligatr,
        .shinyPalette = gMonShinyPalette_Feraligatr,
        .iconSprite = gMonIcon_Feraligatr,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Feraligatr)
        OVERWORLD(
            sPicTable_Feraligatr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Feraligatr,
            gShinyOverworldPalette_Feraligatr
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FERALIGATR_MEGA] =
    {
        .frontPic = gMonFrontPic_FeraligatrMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FeraligatrMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Totodile,
    #endif
        .palette = gMonPalette_FeraligatrMega,
        .shinyPalette = gMonShinyPalette_FeraligatrMega,
        .iconSprite = gMonIcon_FeraligatrMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Feraligatr)
        SHADOW(2, 13, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TOTODILE

#if P_FAMILY_SENTRET
    [SPECIES_SENTRET] =
    {
        .frontPic = gMonFrontPic_Sentret,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 56) : MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sentret,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Sentret,
    #endif
        .palette = gMonPalette_Sentret,
        .shinyPalette = gMonShinyPalette_Sentret,
        .iconSprite = gMonIcon_Sentret,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_S)
        FOOTPRINT(Sentret)
        OVERWORLD(
            sPicTable_Sentret,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sentret,
            gShinyOverworldPalette_Sentret
        )
    },

    [SPECIES_FURRET] =
    {
        .frontPic = gMonFrontPic_Furret,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Furret,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Sentret,
    #endif
        .palette = gMonPalette_Furret,
        .shinyPalette = gMonShinyPalette_Furret,
        .iconSprite = gMonIcon_Furret,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Furret)
        OVERWORLD(
            sPicTable_Furret,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Furret,
            gShinyOverworldPalette_Furret
        )
    },
#endif //P_FAMILY_SENTRET

#if P_FAMILY_HOOTHOOT
    [SPECIES_HOOTHOOT] =
    {
        .frontPic = gMonFrontPic_Hoothoot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 7),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .backPic = gMonBackPic_Hoothoot,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Hoothoot,
    #endif
        .palette = gMonPalette_Hoothoot,
        .shinyPalette = gMonShinyPalette_Hoothoot,
        .iconSprite = gMonIcon_Hoothoot,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Hoothoot)
        OVERWORLD(
            sPicTable_Hoothoot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hoothoot,
            gShinyOverworldPalette_Hoothoot
        )
    },

    [SPECIES_NOCTOWL] =
    {
        .frontPic = gMonFrontPic_Noctowl,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Noctowl,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Hoothoot,
    #endif
        .palette = gMonPalette_Noctowl,
        .shinyPalette = gMonShinyPalette_Noctowl,
        .iconSprite = gMonIcon_Noctowl,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Noctowl)
        OVERWORLD(
            sPicTable_Noctowl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Noctowl,
            gShinyOverworldPalette_Noctowl
        )
    },
#endif //P_FAMILY_HOOTHOOT

#if P_FAMILY_LEDYBA
    [SPECIES_LEDYBA] =
    {
        .frontPic = gMonFrontPic_Ledyba,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Ledyba,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Ledyba,
    #endif
        .palette = gMonPalette_Ledyba,
        .shinyPalette = gMonShinyPalette_Ledyba,
        .iconSprite = gMonIcon_Ledyba,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_LedybaF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .backPicFemale = gMonBackPic_LedybaF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Ledyba)
        OVERWORLD(
            sPicTable_Ledyba,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Ledyba,
            gShinyOverworldPalette_Ledyba
        )
        OVERWORLD_FEMALE(
            sPicTable_LedybaF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following
        )
    },

    [SPECIES_LEDIAN] =
    {
        .frontPic = gMonFrontPic_Ledian,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SLIDE_SLOW : ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backPic = gMonBackPic_Ledian,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Ledyba,
    #endif
        .palette = gMonPalette_Ledian,
        .shinyPalette = gMonShinyPalette_Ledian,
        .iconSprite = gMonIcon_Ledian,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_LedianF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_LedianF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Ledian)
        OVERWORLD(
            sPicTable_Ledian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ledian,
            gShinyOverworldPalette_Ledian
        )
        OVERWORLD_FEMALE(
            sPicTable_LedianF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_LEDYBA

#if P_FAMILY_SPINARAK
    [SPECIES_SPINARAK] =
    {
        .frontPic = gMonFrontPic_Spinarak,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 19 : 16,
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
        .backPic = gMonBackPic_Spinarak,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 24) : MON_COORDS_SIZE(64, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 16,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Spinarak,
    #endif
        .palette = gMonPalette_Spinarak,
        .shinyPalette = gMonShinyPalette_Spinarak,
        .iconSprite = gMonIcon_Spinarak,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -8, SHADOW_SIZE_M)
        FOOTPRINT(Spinarak)
        OVERWORLD(
            sPicTable_Spinarak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Spinarak,
            gShinyOverworldPalette_Spinarak
        )
    },

    [SPECIES_ARIADOS] =
    {
        .frontPic = gMonFrontPic_Ariados,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Ariados,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Spinarak,
    #endif
        .palette = gMonPalette_Ariados,
        .shinyPalette = gMonShinyPalette_Ariados,
        .iconSprite = gMonIcon_Ariados,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 3, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Ariados)
        OVERWORLD(
            sPicTable_Ariados,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Ariados,
            gShinyOverworldPalette_Ariados
        )
    },

    [SPECIES_ARIADOS_MEGA] =
    {
        .frontPic = gMonFrontPic_AriadosMega,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_AriadosMega,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Spinarak,
    #endif
        .palette = gMonPalette_Ariados,
        .shinyPalette = gMonShinyPalette_Ariados,
        .iconSprite = gMonIcon_AriadosMega,
        .iconPalIndex = 0,
        FOOTPRINT(Ariados)
        OVERWORLD(
            sPicTable_Ariados,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Ariados,
            gShinyOverworldPalette_Ariados
        )
    },
#endif //P_FAMILY_SPINARAK

#if P_FAMILY_CHINCHOU
    [SPECIES_CHINCHOU] =
    {
        .frontPic = gMonFrontPic_Chinchou,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Chinchou,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Chinchou,
    #endif
        .palette = gMonPalette_Chinchou,
        .shinyPalette = gMonShinyPalette_Chinchou,
        .iconSprite = gMonIcon_Chinchou,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Chinchou)
        OVERWORLD(
            sPicTable_Chinchou,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Chinchou,
            gShinyOverworldPalette_Chinchou
        )
    },

    [SPECIES_LANTURN] =
    {
        .frontPic = gMonFrontPic_Lanturn,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Lanturn,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Chinchou,
    #endif
        .palette = gMonPalette_Lanturn,
        .shinyPalette = gMonShinyPalette_Lanturn,
        .iconSprite = gMonIcon_Lanturn,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 4, SHADOW_SIZE_M)
        FOOTPRINT(Lanturn)
        OVERWORLD(
            sPicTable_Lanturn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Lanturn,
            gShinyOverworldPalette_Lanturn
        )
    },
#endif //P_FAMILY_CHINCHOU

#if P_FAMILY_TOGEPI
    [SPECIES_TOGEPI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Togepi,
        .frontPicSize = MON_COORDS_SIZE(24, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_SWING_CONCAVE : ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Togepi,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(48, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Togepi,
    #endif
        .palette = gMonPalette_Togepi,
        .shinyPalette = gMonShinyPalette_Togepi,
        .iconSprite = gMonIcon_Togepi,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -3, SHADOW_SIZE_S)
        FOOTPRINT(Togepi)
        OVERWORLD(
            sPicTable_Togepi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Togepi,
            gShinyOverworldPalette_Togepi
        )
    },

    [SPECIES_TOGETIC] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Togetic,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Togetic,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Togepi,
    #endif
        .palette = gMonPalette_Togetic,
        .shinyPalette = gMonShinyPalette_Togetic,
        .iconSprite = gMonIcon_Togetic,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_S)
        FOOTPRINT(Togetic)
        OVERWORLD(
            sPicTable_Togetic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Togetic,
            gShinyOverworldPalette_Togetic
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TOGEKISS] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Togekiss,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Togekiss,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Togepi,
    #endif
        .palette = gMonPalette_Togekiss,
        .shinyPalette = gMonShinyPalette_Togekiss,
        .iconSprite = gMonIcon_Togekiss,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 15, SHADOW_SIZE_M)
        FOOTPRINT(Togekiss)
        OVERWORLD(
            sPicTable_Togekiss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Togekiss,
            gShinyOverworldPalette_Togekiss
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI

#if P_FAMILY_NATU
    [SPECIES_NATU] =
    {
        .frontPic = gMonFrontPic_Natu,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Natu,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 32) : MON_COORDS_SIZE(40, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Natu,
    #endif
        .palette = gMonPalette_Natu,
        .shinyPalette = gMonShinyPalette_Natu,
        .iconSprite = gMonIcon_Natu,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, -4, SHADOW_SIZE_S)
        FOOTPRINT(Natu)
        OVERWORLD(
            sPicTable_Natu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Natu,
            gShinyOverworldPalette_Natu
        )
    },

    [SPECIES_XATU] =
    {
        .frontPic = gMonFrontPic_Xatu,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 56) : MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
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
        .backPic = gMonBackPic_Xatu,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Natu,
    #endif
        .palette = gMonPalette_Xatu,
        .shinyPalette = gMonShinyPalette_Xatu,
        .iconSprite = gMonIcon_Xatu,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_XatuF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_S)
        FOOTPRINT(Xatu)
        OVERWORLD(
            sPicTable_Xatu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Xatu,
            gShinyOverworldPalette_Xatu
        )
        OVERWORLD_FEMALE(
            sPicTable_XatuF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_NATU

#if P_FAMILY_MAREEP
    [SPECIES_MAREEP] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Mareep,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 50,
        .backPic = gMonBackPic_Mareep,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Mareep,
    #endif
        .palette = gMonPalette_Mareep,
        .shinyPalette = gMonShinyPalette_Mareep,
        .iconSprite = gMonIcon_Mareep,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(1, 1, SHADOW_SIZE_M)
        FOOTPRINT(Mareep)
        OVERWORLD(
            sPicTable_Mareep,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mareep,
            gShinyOverworldPalette_Mareep
        )
    },

    [SPECIES_FLAAFFY] =
    {
        .frontPic = gMonFrontPic_Flaaffy,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_BIG : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Flaaffy,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Mareep,
    #endif
        .palette = gMonPalette_Flaaffy,
        .shinyPalette = gMonShinyPalette_Flaaffy,
        .iconSprite = gMonIcon_Flaaffy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Flaaffy)
        OVERWORLD(
            sPicTable_Flaaffy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Flaaffy,
            gShinyOverworldPalette_Flaaffy
        )
    },

    [SPECIES_AMPHAROS] =
    {
        .frontPic = gMonFrontPic_Ampharos,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Ampharos,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 3,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Mareep,
    #endif
        .palette = gMonPalette_Ampharos,
        .shinyPalette = gMonShinyPalette_Ampharos,
        .iconSprite = gMonIcon_Ampharos,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 11, SHADOW_SIZE_M)
        FOOTPRINT(Ampharos)
        OVERWORLD(
            sPicTable_Ampharos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ampharos,
            gShinyOverworldPalette_Ampharos
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AMPHAROS_MEGA] =
    {
        .frontPic = gMonFrontPic_AmpharosMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AmpharosMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Mareep,
    #endif
        .palette = gMonPalette_AmpharosMega,
        .shinyPalette = gMonShinyPalette_AmpharosMega,
        .iconSprite = gMonIcon_AmpharosMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Ampharos)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_AmpharosMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AmpharosMega,
            gShinyOverworldPalette_AmpharosMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAREEP

#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
    [SPECIES_AZURILL] =
    {
        .frontPic = gMonFrontPic_Azurill,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Azurill,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Marill,
    #endif
        .palette = gMonPalette_Azurill,
        .shinyPalette = gMonShinyPalette_Azurill,
        .iconSprite = gMonIcon_Azurill,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-4, 3, SHADOW_SIZE_S)
        FOOTPRINT(Azurill)
        OVERWORLD(
            sPicTable_Azurill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Azurill,
            gShinyOverworldPalette_Azurill
        )
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_MARILL] =
    {
        .frontPic = gMonFrontPic_Marill,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Marill,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Marill,
    #endif
        .palette = gMonPalette_Marill,
        .shinyPalette = gMonShinyPalette_Marill,
        .iconSprite = gMonIcon_Marill,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Marill)
        OVERWORLD(
            sPicTable_Marill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Marill,
            gShinyOverworldPalette_Marill
        )
    },

    [SPECIES_AZUMARILL] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Azumarill,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW : ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Azumarill,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Marill,
    #endif
        .palette = gMonPalette_Azumarill,
        .shinyPalette = gMonShinyPalette_Azumarill,
        .iconSprite = gMonIcon_Azumarill,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 8, SHADOW_SIZE_S)
        FOOTPRINT(Azumarill)
        OVERWORLD(
            sPicTable_Azumarill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Azumarill,
            gShinyOverworldPalette_Azumarill
        )
    },
#endif //P_FAMILY_MARILL

#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BONSLY] =
    {
        .frontPic = gMonFrontPic_Bonsly,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Bonsly,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Sudowoodo,
    #endif
        .palette = gMonPalette_Bonsly,
        .shinyPalette = gMonShinyPalette_Bonsly,
        .iconSprite = gMonIcon_Bonsly,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, 4, SHADOW_SIZE_S)
        FOOTPRINT(Bonsly)
        OVERWORLD(
            sPicTable_Bonsly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bonsly,
            gShinyOverworldPalette_Bonsly
        )
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_SUDOWOODO] =
    {
        .frontPic = gMonFrontPic_Sudowoodo,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Sudowoodo,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Sudowoodo,
    #endif
        .palette = gMonPalette_Sudowoodo,
        .shinyPalette = gMonShinyPalette_Sudowoodo,
        .iconSprite = gMonIcon_Sudowoodo,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_SudowoodoF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_SudowoodoF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Sudowoodo)
        OVERWORLD(
            sPicTable_Sudowoodo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sudowoodo,
            gShinyOverworldPalette_Sudowoodo
        )
        OVERWORLD_FEMALE(
            sPicTable_SudowoodoF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_SUDOWOODO

#if P_FAMILY_HOPPIP
    [SPECIES_HOPPIP] =
    {
        .frontPic = gMonFrontPic_Hoppip,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 11 : 15,
        .backPic = gMonBackPic_Hoppip,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Hoppip,
    #endif
        .palette = gMonPalette_Hoppip,
        .shinyPalette = gMonShinyPalette_Hoppip,
        .iconSprite = gMonIcon_Hoppip,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 12, SHADOW_SIZE_S)
        FOOTPRINT(Hoppip)
        OVERWORLD(
            sPicTable_Hoppip,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Hoppip,
            gShinyOverworldPalette_Hoppip
        )
    },

    [SPECIES_SKIPLOOM] =
    {
        .frontPic = gMonFrontPic_Skiploom,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
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
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 12 : 15,
        .backPic = gMonBackPic_Skiploom,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Hoppip,
    #endif
        .palette = gMonPalette_Skiploom,
        .shinyPalette = gMonShinyPalette_Skiploom,
        .iconSprite = gMonIcon_Skiploom,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Skiploom)
        OVERWORLD(
            sPicTable_Skiploom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Skiploom,
            gShinyOverworldPalette_Skiploom
        )
    },

    [SPECIES_JUMPLUFF] =
    {
        .frontPic = gMonFrontPic_Jumpluff,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Jumpluff,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Hoppip,
    #endif
        .palette = gMonPalette_Jumpluff,
        .shinyPalette = gMonShinyPalette_Jumpluff,
        .iconSprite = gMonIcon_Jumpluff,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Jumpluff)
        OVERWORLD(
            sPicTable_Jumpluff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Jumpluff,
            gShinyOverworldPalette_Jumpluff
        )
    },
#endif //P_FAMILY_HOPPIP

#if P_FAMILY_AIPOM
    [SPECIES_AIPOM] =
    {
        .frontPic = gMonFrontPic_Aipom,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 64) : MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Aipom,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Aipom,
    #endif
        .palette = gMonPalette_Aipom,
        .shinyPalette = gMonShinyPalette_Aipom,
        .iconSprite = gMonIcon_Aipom,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_AipomF,
        .frontPicSizeFemale = MON_COORDS_SIZE(32, 64),
        .backPicFemale = gMonBackPic_AipomF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Aipom)
        OVERWORLD(
            sPicTable_Aipom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aipom,
            gShinyOverworldPalette_Aipom
        )
        OVERWORLD_FEMALE(
            sPicTable_AipomF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_AMBIPOM] =
    {
        .frontPic = gMonFrontPic_Ambipom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Ambipom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Aipom,
    #endif
        .palette = gMonPalette_Ambipom,
        .shinyPalette = gMonShinyPalette_Ambipom,
        .iconSprite = gMonIcon_Ambipom,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_AmbipomF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_AmbipomF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Ambipom)
        OVERWORLD(
            sPicTable_Ambipom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ambipom,
            gShinyOverworldPalette_Ambipom
        )
        OVERWORLD_FEMALE(
            sPicTable_AmbipomF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM

#if P_FAMILY_SUNKERN
    [SPECIES_SUNKERN] =
    {
        .frontPic = gMonFrontPic_Sunkern,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 32) : MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 16 : 17,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Sunkern,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Sunkern,
    #endif
        .palette = gMonPalette_Sunkern,
        .shinyPalette = gMonShinyPalette_Sunkern,
        .iconSprite = gMonIcon_Sunkern,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -4, SHADOW_SIZE_S)
        FOOTPRINT(Sunkern)
        OVERWORLD(
            sPicTable_Sunkern,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Sunkern,
            gShinyOverworldPalette_Sunkern
        )
    },

    [SPECIES_SUNFLORA] =
    {
        .frontPic = gMonFrontPic_Sunflora,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sunflora,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Sunkern,
    #endif
        .palette = gMonPalette_Sunflora,
        .shinyPalette = gMonShinyPalette_Sunflora,
        .iconSprite = gMonIcon_Sunflora,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Sunflora)
        OVERWORLD(
            sPicTable_Sunflora,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sunflora,
            gShinyOverworldPalette_Sunflora
        )
    },
#endif //P_FAMILY_SUNKERN

#if P_FAMILY_YANMA
    [SPECIES_YANMA] =
    {
        .frontPic = gMonFrontPic_Yanma,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 14,
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
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 13,
        .backPic = gMonBackPic_Yanma,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Yanma,
    #endif
        .palette = gMonPalette_Yanma,
        .shinyPalette = gMonShinyPalette_Yanma,
        .iconSprite = gMonIcon_Yanma,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_S)
        FOOTPRINT(Yanma)
        OVERWORLD(
            sPicTable_Yanma,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Yanma,
            gShinyOverworldPalette_Yanma
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_YANMEGA] =
    {
        .frontPic = gMonFrontPic_Yanmega,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
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
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Yanmega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Yanma,
    #endif
        .palette = gMonPalette_Yanmega,
        .shinyPalette = gMonShinyPalette_Yanmega,
        .iconSprite = gMonIcon_Yanmega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Yanmega)
        OVERWORLD(
            sPicTable_Yanmega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yanmega,
            gShinyOverworldPalette_Yanmega
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA

#if P_FAMILY_WOOPER
    [SPECIES_WOOPER_OUTSIDER] =
    {
        .frontPic = gMonFrontPic_Wooper,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wooper,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Wooper,
    #endif
        .palette = gMonPalette_Wooper,
        .shinyPalette = gMonShinyPalette_Wooper,
        .iconSprite = gMonIcon_Wooper,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_WooperF,
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 32),
        .backPicFemale = gMonBackPic_WooperF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Wooper)
        OVERWORLD(
            sPicTable_Wooper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wooper,
            gShinyOverworldPalette_Wooper
        )
        OVERWORLD_FEMALE(
            sPicTable_WooperF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_QUAGSIRE] =
    {
        .frontPic = gMonFrontPic_Quagsire,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Quagsire,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Wooper,
    #endif
        .palette = gMonPalette_Quagsire,
        .shinyPalette = gMonShinyPalette_Quagsire,
        .iconSprite = gMonIcon_Quagsire,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_QuagsireF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_QuagsireF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_M)
        FOOTPRINT(Quagsire)
        OVERWORLD(
            sPicTable_Quagsire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quagsire,
            gShinyOverworldPalette_Quagsire
        )
        OVERWORLD_FEMALE(
            sPicTable_QuagsireF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_PALDEAN_FORMS
    [SPECIES_WOOPER] =
    {
        .frontPic = gMonFrontPic_WooperPaldea,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WooperPaldea,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_WooperPaldea,
    #endif
        .palette = gMonPalette_WooperPaldea,
        .shinyPalette = gMonShinyPalette_WooperPaldea,
        .iconSprite = gMonIcon_WooperPaldea,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Wooper)
        OVERWORLD(
            sPicTable_WooperPaldea,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_WooperPaldea,
            gShinyOverworldPalette_WooperPaldea
        )
    },

    [SPECIES_CLODSIRE] =
    {
        .frontPic = gMonFrontPic_Clodsire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clodsire,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_WooperPaldea,
    #endif
        .palette = gMonPalette_Clodsire,
        .shinyPalette = gMonShinyPalette_Clodsire,
        .iconSprite = gMonIcon_Clodsire,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 3, SHADOW_SIZE_L)
        FOOTPRINT(Clodsire)
        OVERWORLD(
            sPicTable_Clodsire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Clodsire,
            gShinyOverworldPalette_Clodsire
        )
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_WOOPER

#if P_FAMILY_MURKROW
    [SPECIES_MURKROW] =
    {
        .frontPic = gMonFrontPic_Murkrow,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 15,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 12,
        .backPic = gMonBackPic_Murkrow,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(40, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Murkrow,
    #endif
        .palette = gMonPalette_Murkrow,
        .shinyPalette = gMonShinyPalette_Murkrow,
        .iconSprite = gMonIcon_Murkrow,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_MurkrowF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 40),
        .backPicFemale = gMonBackPic_MurkrowF,
        .backPicSizeFemale = MON_COORDS_SIZE(40, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_S)
        FOOTPRINT(Murkrow)
        OVERWORLD(
            sPicTable_Murkrow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Murkrow,
            gShinyOverworldPalette_Murkrow
        )
        OVERWORLD_FEMALE(
            sPicTable_MurkrowF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_HONCHKROW] =
    {
        .frontPic = gMonFrontPic_Honchkrow,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 21),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Honchkrow,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Murkrow,
    #endif
        .palette = gMonPalette_Honchkrow,
        .shinyPalette = gMonShinyPalette_Honchkrow,
        .iconSprite = gMonIcon_Honchkrow,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 7, SHADOW_SIZE_M)
        FOOTPRINT(Honchkrow)
        OVERWORLD(
            sPicTable_Honchkrow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Honchkrow,
            gShinyOverworldPalette_Honchkrow
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW

#if P_FAMILY_MISDREAVUS
    [SPECIES_MISDREAVUS] =
    {
        .frontPic = gMonFrontPic_Misdreavus,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
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
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 8 : 12,
        .backPic = gMonBackPic_Misdreavus,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Misdreavus,
    #endif
        .palette = gMonPalette_Misdreavus,
        .shinyPalette = gMonShinyPalette_Misdreavus,
        .iconSprite = gMonIcon_Misdreavus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_S)
        FOOTPRINT(Misdreavus)
        OVERWORLD(
            sPicTable_Misdreavus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Misdreavus,
            gShinyOverworldPalette_Misdreavus
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MISMAGIUS] =
    {
        .frontPic = gMonFrontPic_Mismagius,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
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
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Mismagius,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Misdreavus,
    #endif
        .palette = gMonPalette_Mismagius,
        .shinyPalette = gMonShinyPalette_Mismagius,
        .iconSprite = gMonIcon_Mismagius,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Mismagius)
        OVERWORLD(
            sPicTable_Mismagius,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mismagius,
            gShinyOverworldPalette_Mismagius
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MISDREAVUS

#if P_FAMILY_UNOWN
#if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
    #define UNOWN_EGG_COLOR .eggPalette = gEggPalette_Unown,
#else
    #define UNOWN_EGG_COLOR
#endif

#define UNOWN_MISC_INFO_GRAPHICS(letter, _noFlip, frontWidth, frontHeight, backWidth, backHeight, backYOffset)   \
    {                                                                                                   \
        UNOWN_EGG_COLOR                                                                                 \
        .noFlip = _noFlip,                                                                              \
        .frontPic = gMonFrontPic_Unown ##letter,                                                        \
        .frontPicSize = MON_COORDS_SIZE(frontWidth, frontHeight),                                       \
        .frontPicYOffset = 16,                                                                          \
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,                                               \
        .frontAnimId = ANIM_ZIGZAG_FAST,                                                                \
        .enemyMonElevation = 8,                                                                         \
        .backPic = gMonBackPic_Unown ##letter,                                                          \
        .backPicSize = MON_COORDS_SIZE(backWidth, backHeight),                                          \
        .backPicYOffset = backYOffset,                                                                  \
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                                                    \
        .palette = gMonPalette_Unown,                                                                   \
        .shinyPalette = gMonShinyPalette_Unown,                                                         \
        .iconSprite = gMonIcon_Unown ##letter,                                                          \
        .iconPalIndex = 0,                                                                              \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                                         \
        SHADOW(0, 3, SHADOW_SIZE_S)                                                                     \
        FOOTPRINT(Unown)                                                                                \
        OVERWORLD(                                                                                      \
            sPicTable_Unown ##letter,                                                                   \
            SIZE_32x32,                                                                                 \
            SHADOW_SIZE_M,                                                                              \
            TRACKS_NONE,                                                                                \
            sAnimTable_Following,                                                                       \
            gOverworldPalette_Unown,                                                                    \
            gShinyOverworldPalette_Unown,                                                               \
        )                                                                                               \
    }

    [SPECIES_UNOWN]             = UNOWN_MISC_INFO_GRAPHICS(A,           FALSE, 24, 40, 24, 48,  8 ),
    [SPECIES_UNOWN_B]           = UNOWN_MISC_INFO_GRAPHICS(B,           TRUE,  24, 32, 40, 48,  9 ),
    [SPECIES_UNOWN_C]           = UNOWN_MISC_INFO_GRAPHICS(C,           TRUE,  32, 32, 48, 56,  6 ),
    [SPECIES_UNOWN_D]           = UNOWN_MISC_INFO_GRAPHICS(D,           TRUE,  32, 32, 40, 48,  8 ),
    [SPECIES_UNOWN_E]           = UNOWN_MISC_INFO_GRAPHICS(E,           TRUE,  32, 32, 40, 48, 10 ),
    [SPECIES_UNOWN_F]           = UNOWN_MISC_INFO_GRAPHICS(F,           TRUE,  32, 32, 48, 48, 10 ),
    [SPECIES_UNOWN_G]           = UNOWN_MISC_INFO_GRAPHICS(G,           TRUE,  24, 40, 40, 56,  5 ),
    [SPECIES_UNOWN_H]           = UNOWN_MISC_INFO_GRAPHICS(H,           TRUE,  32, 32, 48, 48,  8 ),
    [SPECIES_UNOWN_I]           = UNOWN_MISC_INFO_GRAPHICS(I,           FALSE, 24, 32, 24, 56,  7 ),
    [SPECIES_UNOWN_J]           = UNOWN_MISC_INFO_GRAPHICS(J,           TRUE,  24, 32, 32, 48,  9 ),
    [SPECIES_UNOWN_K]           = UNOWN_MISC_INFO_GRAPHICS(K,           TRUE,  32, 32, 40, 56,  7 ),
    [SPECIES_UNOWN_L]           = UNOWN_MISC_INFO_GRAPHICS(L,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_M]           = UNOWN_MISC_INFO_GRAPHICS(M,           FALSE, 32, 32, 48, 40, 13 ),
    [SPECIES_UNOWN_N]           = UNOWN_MISC_INFO_GRAPHICS(N,           TRUE,  32, 24, 48, 40, 13 ),
    [SPECIES_UNOWN_O]           = UNOWN_MISC_INFO_GRAPHICS(O,           FALSE, 32, 32, 48, 48,  8 ),
    [SPECIES_UNOWN_P]           = UNOWN_MISC_INFO_GRAPHICS(P,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_Q]           = UNOWN_MISC_INFO_GRAPHICS(Q,           TRUE,  32, 24, 40, 40, 15 ),
    [SPECIES_UNOWN_R]           = UNOWN_MISC_INFO_GRAPHICS(R,           TRUE,  24, 32, 32, 40, 12 ),
    [SPECIES_UNOWN_S]           = UNOWN_MISC_INFO_GRAPHICS(S,           TRUE,  32, 40, 40, 56,  4 ),
    [SPECIES_UNOWN_T]           = UNOWN_MISC_INFO_GRAPHICS(T,           FALSE, 24, 32, 32, 40, 13 ),
    [SPECIES_UNOWN_U]           = UNOWN_MISC_INFO_GRAPHICS(U,           FALSE, 32, 32, 48, 40, 13 ),
    [SPECIES_UNOWN_V]           = UNOWN_MISC_INFO_GRAPHICS(V,           TRUE,  32, 32, 40, 48, 11 ),
    [SPECIES_UNOWN_W]           = UNOWN_MISC_INFO_GRAPHICS(W,           FALSE, 32, 32, 40, 40, 13 ),
    [SPECIES_UNOWN_X]           = UNOWN_MISC_INFO_GRAPHICS(X,           FALSE, 24, 24, 40, 40, 15 ),
    [SPECIES_UNOWN_Y]           = UNOWN_MISC_INFO_GRAPHICS(Y,           FALSE, 24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_Z]           = UNOWN_MISC_INFO_GRAPHICS(Z,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_EXCLAMATION] = UNOWN_MISC_INFO_GRAPHICS(Exclamation, FALSE, 24, 40, 24, 56,  6 ),
    [SPECIES_UNOWN_QUESTION]    = UNOWN_MISC_INFO_GRAPHICS(Question,    TRUE,  24, 40, 32, 56,  6 ),
#endif //P_FAMILY_UNOWN

#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
    [SPECIES_WYNAUT] =
    {
        .frontPic = gMonFrontPic_Wynaut,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Wynaut,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Wobbuffet,
    #endif
        .palette = gMonPalette_Wynaut,
        .shinyPalette = gMonShinyPalette_Wynaut,
        .iconSprite = gMonIcon_Wynaut,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 2, SHADOW_SIZE_S)
        FOOTPRINT(Wynaut)
        OVERWORLD(
            sPicTable_Wynaut,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wynaut,
            gShinyOverworldPalette_Wynaut
        )
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_WOBBUFFET] =
    {
        .frontPic = gMonFrontPic_Wobbuffet,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_DEEP_V_SQUISH_AND_BOUNCE : ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Wobbuffet,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Wobbuffet,
    #endif
        .palette = gMonPalette_Wobbuffet,
        .shinyPalette = gMonShinyPalette_Wobbuffet,
        .iconSprite = gMonIcon_Wobbuffet,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_WobbuffetF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicFemale = gMonBackPic_WobbuffetF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_WobbuffetF,
        .iconPalIndexFemale = 0,
    #endif
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 8, SHADOW_SIZE_M)
        FOOTPRINT(Wobbuffet)
        OVERWORLD(
            sPicTable_Wobbuffet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wobbuffet,
            gShinyOverworldPalette_Wobbuffet
        )
        OVERWORLD_FEMALE(
            sPicTable_WobbuffetF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_WOBBUFFET

#if P_FAMILY_GIRAFARIG
    [SPECIES_GIRAFARIG] =
    {
        .frontPic = gMonFrontPic_Girafarig,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_BIG : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Girafarig,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Girafarig,
    #endif
        .palette = gMonPalette_Girafarig,
        .shinyPalette = gMonShinyPalette_Girafarig,
        .iconSprite = gMonIcon_Girafarig,
        .iconPalIndex = 1,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_GirafarigF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicFemale = gMonBackPic_GirafarigF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Girafarig)
        OVERWORLD(
            sPicTable_Girafarig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Girafarig,
            gShinyOverworldPalette_Girafarig
        )
        OVERWORLD_FEMALE(
            sPicTable_GirafarigF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_FARIGIRAF] =
    {
        .frontPic = gMonFrontPic_Farigiraf,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Farigiraf,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Girafarig,
    #endif
        .palette = gMonPalette_Farigiraf,
        .shinyPalette = gMonShinyPalette_Farigiraf,
        .iconSprite = gMonIcon_Farigiraf,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(11, 13, SHADOW_SIZE_L)
        FOOTPRINT(Farigiraf)
        OVERWORLD(
            sPicTable_Farigiraf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Farigiraf,
            gShinyOverworldPalette_Farigiraf
        )
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_GIRAFARIG

#if P_FAMILY_PINECO
    [SPECIES_PINECO] =
    {
        .frontPic = gMonFrontPic_Pineco,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Pineco,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Pineco,
    #endif
        .palette = gMonPalette_Pineco,
        .shinyPalette = gMonShinyPalette_Pineco,
        .iconSprite = gMonIcon_Pineco,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pineco)
        OVERWORLD(
            sPicTable_Pineco,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pineco,
            gShinyOverworldPalette_Pineco
        )
    },

    [SPECIES_FORRETRESS] =
    {
        .frontPic = gMonFrontPic_Forretress,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Forretress,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Pineco,
    #endif
        .palette = gMonPalette_Forretress,
        .shinyPalette = gMonShinyPalette_Forretress,
        .iconSprite = gMonIcon_Forretress,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_L)
        FOOTPRINT(Forretress)
        OVERWORLD(
            sPicTable_Forretress,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Forretress,
            gShinyOverworldPalette_Forretress
        )
    },
#endif //P_FAMILY_PINECO

#if P_FAMILY_DUNSPARCE
    [SPECIES_DUNSPARCE] =
    {
        .frontPic = gMonFrontPic_Dunsparce,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 32) : MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 17 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Dunsparce,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(56, 32),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 17,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Dunsparce,
    #endif
        .palette = gMonPalette_Dunsparce,
        .shinyPalette = gMonShinyPalette_Dunsparce,
        .iconSprite = gMonIcon_Dunsparce,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -4, SHADOW_SIZE_M)
        FOOTPRINT(Dunsparce)
        OVERWORLD(
            sPicTable_Dunsparce,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Dunsparce,
            gShinyOverworldPalette_Dunsparce
        )
        //                         {EVO_LEVEL, 0, SPECIES_DUDUNSPARCE_THREE_SEGMENT, CONDITIONS({IF_KNOWS_MOVE, MOVE_HYPER_DRILL}, {IF_PID_MODULO_100_EQ, 0})}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_DUDUNSPARCE_TWO_SEGMENT] =
    {
        .frontPic = gMonFrontPic_DudunsparceTwoSegment,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DudunsparceTwoSegment,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Dunsparce,
    #endif
        .palette = gMonPalette_Dudunsparce,
        .shinyPalette = gMonShinyPalette_Dudunsparce,
        .iconSprite = gMonIcon_Dudunsparce,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_L)
        FOOTPRINT(Dudunsparce)
        OVERWORLD(
            sPicTable_DudunsparceTwoSegment,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Dudunsparce,
            gShinyOverworldPalette_Dudunsparce
        )
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] =
    {
        .frontPic = gMonFrontPic_DudunsparceThreeSegment,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DudunsparceThreeSegment,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Dunsparce,
    #endif
        .palette = gMonPalette_Dudunsparce,
        .shinyPalette = gMonShinyPalette_Dudunsparce,
        .iconSprite = gMonIcon_Dudunsparce,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 4, SHADOW_SIZE_L)
        FOOTPRINT(Dudunsparce)
        OVERWORLD(
            sPicTable_DudunsparceThreeSegment,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_DudunsparceThreeSegment,
            gShinyOverworldPalette_DudunsparceThreeSegment
        )
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_GLIGAR
    [SPECIES_GLIGAR] =
    {
        .frontPic = gMonFrontPic_Gligar,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 17),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 6 : 8,
        .backPic = gMonBackPic_Gligar,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Gligar,
    #endif
        .palette = gMonPalette_Gligar,
        .shinyPalette = gMonShinyPalette_Gligar,
        .iconSprite = gMonIcon_Gligar,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_GligarF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_GligarF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_S)
        FOOTPRINT(Gligar)
        OVERWORLD(
            sPicTable_Gligar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Gligar,
            gShinyOverworldPalette_Gligar
        )
        OVERWORLD_FEMALE(
            sPicTable_GligarF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_GLISCOR] =
    {
        .frontPic = gMonFrontPic_Gliscor,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Gliscor,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Gligar,
    #endif
        .palette = gMonPalette_Gliscor,
        .shinyPalette = gMonShinyPalette_Gliscor,
        .iconSprite = gMonIcon_Gliscor,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gliscor)
        OVERWORLD(
            sPicTable_Gliscor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gliscor,
            gShinyOverworldPalette_Gliscor
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR

#if P_FAMILY_SNUBBULL
    [SPECIES_SNUBBULL] =
    {
        .frontPic = gMonFrontPic_Snubbull,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Snubbull,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Snubbull,
    #endif
        .palette = gMonPalette_Snubbull,
        .shinyPalette = gMonShinyPalette_Snubbull,
        .iconSprite = gMonIcon_Snubbull,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Snubbull)
        OVERWORLD(
            sPicTable_Snubbull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Snubbull,
            gShinyOverworldPalette_Snubbull
        )
    },

    [SPECIES_GRANBULL] =
    {
        .frontPic = gMonFrontPic_Granbull,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Granbull,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Snubbull,
    #endif
        .palette = gMonPalette_Granbull,
        .shinyPalette = gMonShinyPalette_Granbull,
        .iconSprite = gMonIcon_Granbull,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_L)
        FOOTPRINT(Granbull)
        OVERWORLD(
            sPicTable_Granbull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Granbull,
            gShinyOverworldPalette_Granbull
        )
    },
#endif //P_FAMILY_SNUBBULL

#if P_FAMILY_QWILFISH
    [SPECIES_QWILFISH] =
    {
        .frontPic = gMonFrontPic_Qwilfish,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 39,
        .backPic = gMonBackPic_Qwilfish,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Qwilfish,
    #endif
        .palette = gMonPalette_Qwilfish,
        .shinyPalette = gMonShinyPalette_Qwilfish,
        .iconSprite = gMonIcon_Qwilfish,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Qwilfish)
        OVERWORLD(
            sPicTable_Qwilfish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Qwilfish,
            gShinyOverworldPalette_Qwilfish
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_QWILFISH_HISUI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_QwilfishHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_QwilfishHisui,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_QwilfishHisui,
    #endif
        .palette = gMonPalette_QwilfishHisui,
        .shinyPalette = gMonShinyPalette_QwilfishHisui,
        .iconSprite = gMonIcon_QwilfishHisui,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 4, SHADOW_SIZE_S)
        FOOTPRINT(Qwilfish)
        OVERWORLD(
            sPicTable_QwilfishHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_QwilfishHisui,
            gShinyOverworldPalette_QwilfishHisui
        )
    },

    [SPECIES_OVERQWIL] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Overqwil,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Overqwil,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_QwilfishHisui,
    #endif
        .palette = gMonPalette_Overqwil,
        .shinyPalette = gMonShinyPalette_Overqwil,
        .iconSprite = gMonIcon_Overqwil,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Overqwil)
        OVERWORLD(
            sPicTable_Overqwil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Overqwil,
            gShinyOverworldPalette_Overqwil
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_QWILFISH

#if P_FAMILY_SHUCKLE
    [SPECIES_SHUCKLE] =
    {
        .frontPic = gMonFrontPic_Shuckle,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Shuckle,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Shuckle,
    #endif
        .palette = gMonPalette_Shuckle,
        .shinyPalette = gMonShinyPalette_Shuckle,
        .iconSprite = gMonIcon_Shuckle,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Shuckle)
        OVERWORLD(
            sPicTable_Shuckle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Shuckle,
            gShinyOverworldPalette_Shuckle
        )
    },
#endif //P_FAMILY_SHUCKLE

#if P_FAMILY_HERACROSS
    [SPECIES_HERACROSS] =
    {
        .frontPic = gMonFrontPic_Heracross,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_LUNGE_GROW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Heracross,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Heracross,
    #endif
        .palette = gMonPalette_Heracross,
        .shinyPalette = gMonShinyPalette_Heracross,
        .iconSprite = gMonIcon_Heracross,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 2 : 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_HeracrossF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_HeracrossF,
        .backPicSizeFemale = MON_COORDS_SIZE(48, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_M)
        FOOTPRINT(Heracross)
        OVERWORLD(
            sPicTable_Heracross,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Heracross,
            gShinyOverworldPalette_Heracross
        )
        OVERWORLD_FEMALE(
            sPicTable_HeracrossF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_HERACROSS_MEGA] =
    {
        .frontPic = gMonFrontPic_HeracrossMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HeracrossMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Heracross,
    #endif
        .palette = gMonPalette_HeracrossMega,
        .shinyPalette = gMonShinyPalette_HeracrossMega,
        .iconSprite = gMonIcon_HeracrossMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_M)
        FOOTPRINT(Heracross)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_HeracrossMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HeracrossMega,
            gShinyOverworldPalette_HeracrossMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HERACROSS

#if P_FAMILY_SNEASEL
    [SPECIES_SNEASEL] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Sneasel,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_STRETCH : ANIM_H_JUMPS,
        .backPic = gMonBackPic_Sneasel,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Sneasel,
    #endif
        .palette = gMonPalette_Sneasel,
        .shinyPalette = gMonShinyPalette_Sneasel,
        .iconSprite = gMonIcon_Sneasel,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_SneaselF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_SneaselF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Sneasel)
        OVERWORLD(
            sPicTable_Sneasel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Sneasel,
            gShinyOverworldPalette_Sneasel
        )
        OVERWORLD_FEMALE(
            sPicTable_SneaselF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_WEAVILE] =
    {
        .frontPic = gMonFrontPic_Weavile,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Weavile,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Sneasel,
    #endif
        .palette = gMonPalette_Weavile,
        .shinyPalette = gMonShinyPalette_Weavile,
        .iconSprite = gMonIcon_Weavile,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_WeavileF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_WeavileF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 10, SHADOW_SIZE_M)
        FOOTPRINT(Weavile)
        OVERWORLD(
            sPicTable_Weavile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Weavile,
            gShinyOverworldPalette_Weavile
        )
        OVERWORLD_FEMALE(
            sPicTable_WeavileF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_HISUIAN_FORMS
    [SPECIES_SNEASEL_HISUI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_SneaselHisui,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SneaselHisui,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_SneaselHisui,
    #endif
        .palette = gMonPalette_SneaselHisui,
        .shinyPalette = gMonShinyPalette_SneaselHisui,
        .iconSprite = gMonIcon_SneaselHisui,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_SneaselHisuiF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicFemale = gMonBackPic_SneaselHisuiF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Sneasel)
        OVERWORLD(
            sPicTable_SneaselHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SneaselHisui,
            gShinyOverworldPalette_SneaselHisui
        )
        OVERWORLD_FEMALE(
            sPicTable_SneaselHisuiF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

    [SPECIES_SNEASLER] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Sneasler,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sneasler,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_SneaselHisui,
    #endif
        .palette = gMonPalette_Sneasler,
        .shinyPalette = gMonShinyPalette_Sneasler,
        .iconSprite = gMonIcon_Sneasler,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(Sneasler)
        OVERWORLD(
            sPicTable_Sneasler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sneasler,
            gShinyOverworldPalette_Sneasler
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_SNEASEL

#if P_FAMILY_TEDDIURSA
    [SPECIES_TEDDIURSA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Teddiursa,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Teddiursa,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Teddiursa,
    #endif
        .palette = gMonPalette_Teddiursa,
        .shinyPalette = gMonShinyPalette_Teddiursa,
        .iconSprite = gMonIcon_Teddiursa,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Teddiursa)
        OVERWORLD(
            sPicTable_Teddiursa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Teddiursa,
            gShinyOverworldPalette_Teddiursa
        )
    },

    [SPECIES_URSARING] =
    {
        .frontPic = gMonFrontPic_Ursaring,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Ursaring,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Teddiursa,
    #endif
        .palette = gMonPalette_Ursaring,
        .shinyPalette = gMonShinyPalette_Ursaring,
        .iconSprite = gMonIcon_Ursaring,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_UrsaringF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_UrsaringF,
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Ursaring)
        OVERWORLD(
            sPicTable_Ursaring,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ursaring,
            gShinyOverworldPalette_Ursaring
        )
        OVERWORLD_FEMALE(
            sPicTable_UrsaringF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_URSALUNA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Ursaluna,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Ursaluna,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Teddiursa,
    #endif
        .palette = gMonPalette_Ursaluna,
        .shinyPalette = gMonShinyPalette_Ursaluna,
        .iconSprite = gMonIcon_Ursaluna,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Ursaluna)
        OVERWORLD(
            sPicTable_Ursaluna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ursaluna,
            gShinyOverworldPalette_Ursaluna
        )
    },

    [SPECIES_URSALUNA_BLOODMOON] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_UrsalunaBloodmoon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrsalunaBloodmoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Teddiursa,
    #endif
        .palette = gMonPalette_UrsalunaBloodmoon,
        .shinyPalette = gMonShinyPalette_UrsalunaBloodmoon,
        .iconSprite = gMonIcon_UrsalunaBloodmoon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 11, SHADOW_SIZE_L)
        FOOTPRINT(Ursaluna)
        OVERWORLD(
            sPicTable_UrsalunaBloodmoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_UrsalunaBloodmoon,
            gShinyOverworldPalette_UrsalunaBloodmoon
        )
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_TEDDIURSA

#if P_FAMILY_SLUGMA
    [SPECIES_SLUGMA] =
    {
        .frontPic = gMonFrontPic_Slugma,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 40) : MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Slugma,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Slugma,
    #endif
        .palette = gMonPalette_Slugma,
        .shinyPalette = gMonShinyPalette_Slugma,
        .iconSprite = gMonIcon_Slugma,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 0, SHADOW_SIZE_S)
        FOOTPRINT(Slugma)
        OVERWORLD(
            sPicTable_Slugma,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Slugma,
            gShinyOverworldPalette_Slugma
        )
    },

    [SPECIES_MAGCARGO] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Magcargo,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Magcargo,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Slugma,
    #endif
        .palette = gMonPalette_Magcargo,
        .shinyPalette = gMonShinyPalette_Magcargo,
        .iconSprite = gMonIcon_Magcargo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Magcargo)
        OVERWORLD(
            sPicTable_Magcargo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following_Asym,
            gOverworldPalette_Magcargo,
            gShinyOverworldPalette_Magcargo
        )
    },
#endif //P_FAMILY_SLUGMA

#if P_FAMILY_SWINUB
    [SPECIES_SWINUB] =
    {
        .frontPic = gMonFrontPic_Swinub,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 24) : MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 20 : 18,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Swinub,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 24) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 21 : 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Swinub,
    #endif
        .palette = gMonPalette_Swinub,
        .shinyPalette = gMonShinyPalette_Swinub,
        .iconSprite = gMonIcon_Swinub,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-3, -6, SHADOW_SIZE_S)
        FOOTPRINT(Swinub)
        OVERWORLD(
            sPicTable_Swinub,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Swinub,
            gShinyOverworldPalette_Swinub
        )
    },

    [SPECIES_PILOSWINE] =
    {
        .frontPic = gMonFrontPic_Piloswine,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Piloswine,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 8,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Swinub,
    #endif
        .palette = gMonPalette_Piloswine,
        .shinyPalette = gMonShinyPalette_Piloswine,
        .iconSprite = gMonIcon_Piloswine,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_PiloswineF,
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicFemale = gMonBackPic_PiloswineF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Piloswine)
        OVERWORLD(
            sPicTable_Piloswine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Piloswine,
            gShinyOverworldPalette_Piloswine
        )
        OVERWORLD_FEMALE(
            sPicTable_PiloswineF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAMOSWINE] =
    {
        .frontPic = gMonFrontPic_Mamoswine,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Mamoswine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Swinub,
    #endif
        .palette = gMonPalette_Mamoswine,
        .shinyPalette = gMonShinyPalette_Mamoswine,
        .iconSprite = gMonIcon_Mamoswine,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_MamoswineF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 7, SHADOW_SIZE_L)
        FOOTPRINT(Mamoswine)
        OVERWORLD(
            sPicTable_Mamoswine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mamoswine,
            gShinyOverworldPalette_Mamoswine
        )
        OVERWORLD_FEMALE(
            sPicTable_MamoswineF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB

#if P_FAMILY_CORSOLA
    [SPECIES_CORSOLA] =
    {
        .frontPic = gMonFrontPic_Corsola,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Corsola,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Corsola,
    #endif
        .palette = gMonPalette_Corsola,
        .shinyPalette = gMonShinyPalette_Corsola,
        .iconSprite = gMonIcon_Corsola,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_M)
        FOOTPRINT(Corsola)
        OVERWORLD(
            sPicTable_Corsola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Corsola,
            gShinyOverworldPalette_Corsola
        )
    },

#if P_GALARIAN_FORMS
    [SPECIES_CORSOLA_GALAR] =
    {
        .frontPic = gMonFrontPic_CorsolaGalar,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CorsolaGalar,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_CorsolaGalar,
    #endif
        .palette = gMonPalette_CorsolaGalar,
        .shinyPalette = gMonShinyPalette_CorsolaGalar,
        .iconSprite = gMonIcon_CorsolaGalar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(Corsola)
        OVERWORLD(
            sPicTable_CorsolaGalar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_CorsolaGalar,
            gShinyOverworldPalette_CorsolaGalar
        )
    },

    [SPECIES_CURSOLA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Cursola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cursola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_8_EGG_COLORS
        .eggPalette = gEggPalette_CorsolaGalar,
    #endif
        .palette = gMonPalette_Cursola,
        .shinyPalette = gMonShinyPalette_Cursola,
        .iconSprite = gMonIcon_Cursola,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_S)
        FOOTPRINT(Cursola)
        OVERWORLD(
            sPicTable_Cursola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cursola,
            gShinyOverworldPalette_Cursola
        )
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_CORSOLA

#if P_FAMILY_REMORAID
    [SPECIES_REMORAID] =
    {
        .frontPic = gMonFrontPic_Remoraid,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Remoraid,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Remoraid,
    #endif
        .palette = gMonPalette_Remoraid,
        .shinyPalette = gMonShinyPalette_Remoraid,
        .iconSprite = gMonIcon_Remoraid,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 0, SHADOW_SIZE_S)
        FOOTPRINT(Remoraid)
        OVERWORLD(
            sPicTable_Remoraid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Remoraid,
            gShinyOverworldPalette_Remoraid
        )
    },

    [SPECIES_OCTILLERY] =
    {
        .frontPic = gMonFrontPic_Octillery,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Octillery,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Remoraid,
    #endif
        .palette = gMonPalette_Octillery,
        .shinyPalette = gMonShinyPalette_Octillery,
        .iconSprite = gMonIcon_Octillery,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_OctilleryF,
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicFemale = gMonBackPic_OctilleryF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Octillery)
        OVERWORLD(
            sPicTable_Octillery,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Octillery,
            gShinyOverworldPalette_Octillery
        )
        OVERWORLD_FEMALE(
            sPicTable_OctilleryF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_REMORAID

#if P_FAMILY_DELIBIRD
    [SPECIES_DELIBIRD] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Delibird,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 48) : MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_JUMPS_SMALL : ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Delibird,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 56) : MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Delibird,
    #endif
        .palette = gMonPalette_Delibird,
        .shinyPalette = gMonShinyPalette_Delibird,
        .iconSprite = gMonIcon_Delibird,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Delibird)
        OVERWORLD(
            sPicTable_Delibird,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Delibird,
            gShinyOverworldPalette_Delibird
        )
    },
#endif //P_FAMILY_DELIBIRD

#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MANTYKE] =
    {
        .frontPic = gMonFrontPic_Mantyke,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_Mantyke,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Mantine,
    #endif
        .palette = gMonPalette_Mantyke,
        .shinyPalette = gMonShinyPalette_Mantyke,
        .iconSprite = gMonIcon_Mantyke,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 3, SHADOW_SIZE_S)
        FOOTPRINT(Mantyke)
        OVERWORLD(
            sPicTable_Mantyke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mantyke,
            gShinyOverworldPalette_Mantyke
        )
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_MANTINE] =
    {
        .noFlip = P_GBA_STYLE_SPECIES_GFX,
        .frontPic = gMonFrontPic_Mantine,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 40),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = P_GBA_STYLE_SPECIES_GFX ? 0 : 6,
        .backPic = gMonBackPic_Mantine,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 2,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Mantine,
    #endif
        .palette = gMonPalette_Mantine,
        .shinyPalette = gMonShinyPalette_Mantine,
        .iconSprite = gMonIcon_Mantine,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_M)
        FOOTPRINT(Mantine)
        OVERWORLD(
            sPicTable_Mantine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Mantine,
            gShinyOverworldPalette_Mantine
        )
    },
#endif //P_FAMILY_MANTINE

#if P_FAMILY_SKARMORY
    [SPECIES_SKARMORY] =
    {
        .frontPic = gMonFrontPic_Skarmory,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_STRETCH : ANIM_V_SHAKE,
        .backPic = gMonBackPic_Skarmory,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(48, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 1,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Skarmory,
    #endif
        .palette = gMonPalette_Skarmory,
        .shinyPalette = gMonShinyPalette_Skarmory,
        .iconSprite = gMonIcon_Skarmory,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_M)
        FOOTPRINT(Skarmory)
        OVERWORLD(
            sPicTable_Skarmory,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skarmory,
            gShinyOverworldPalette_Skarmory
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SKARMORY_MEGA] =
    {
        .frontPic = gMonFrontPic_SkarmoryMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_SkarmoryMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Skarmory,
    #endif
        .palette = gMonPalette_SkarmoryMega,
        .shinyPalette = gMonShinyPalette_SkarmoryMega,
        .iconSprite = gMonIcon_SkarmoryMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Skarmory)
        SHADOW(2, 16, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SKARMORY

#if P_FAMILY_HOUNDOUR
    [SPECIES_HOUNDOUR] =
    {
        .frontPic = gMonFrontPic_Houndour,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 11 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Houndour,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 40) : MON_COORDS_SIZE(40, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 12 : 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Houndour,
    #endif
        .palette = gMonPalette_Houndour,
        .shinyPalette = gMonShinyPalette_Houndour,
        .iconSprite = gMonIcon_Houndour,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 4, SHADOW_SIZE_M)
        FOOTPRINT(Houndour)
        OVERWORLD(
            sPicTable_Houndour,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Houndour,
            gShinyOverworldPalette_Houndour
        )
    },

    [SPECIES_HOUNDOOM] =
    {
        .frontPic = gMonFrontPic_Houndoom,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Houndoom,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Houndour,
    #endif
        .palette = gMonPalette_Houndoom,
        .shinyPalette = gMonShinyPalette_Houndoom,
        .iconSprite = gMonIcon_Houndoom,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_HoundoomF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_HoundoomF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 13, SHADOW_SIZE_L)
        FOOTPRINT(Houndoom)
        OVERWORLD(
            sPicTable_Houndoom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Houndoom,
            gShinyOverworldPalette_Houndoom
        )
        OVERWORLD_FEMALE(
            sPicTable_HoundoomF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_HOUNDOOM_MEGA] =
    {
        .frontPic = gMonFrontPic_HoundoomMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HoundoomMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Houndour,
    #endif
        .palette = gMonPalette_HoundoomMega,
        .shinyPalette = gMonShinyPalette_HoundoomMega,
        .iconSprite = gMonIcon_HoundoomMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 13, SHADOW_SIZE_L)
        FOOTPRINT(Houndoom)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_HoundoomMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoundoomMega,
            gShinyOverworldPalette_HoundoomMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOUNDOUR

#if P_FAMILY_PHANPY
    [SPECIES_PHANPY] =
    {
        .frontPic = gMonFrontPic_Phanpy,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Phanpy,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 40) : MON_COORDS_SIZE(56, 40),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Phanpy,
    #endif
        .palette = gMonPalette_Phanpy,
        .shinyPalette = gMonShinyPalette_Phanpy,
        .iconSprite = gMonIcon_Phanpy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(3, -2, SHADOW_SIZE_M)
        FOOTPRINT(Phanpy)
        OVERWORLD(
            sPicTable_Phanpy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phanpy,
            gShinyOverworldPalette_Phanpy
        )
    },

    [SPECIES_DONPHAN] =
    {
        .frontPic = gMonFrontPic_Donphan,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE_TWICE : ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Donphan,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 40) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 13 : 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Phanpy,
    #endif
        .palette = gMonPalette_Donphan,
        .shinyPalette = gMonShinyPalette_Donphan,
        .iconSprite = gMonIcon_Donphan,
        .iconPalIndex = 0,
#if P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .frontPicFemale = gMonFrontPic_DonphanF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicFemale = gMonBackPic_DonphanF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
#endif //P_GENDER_DIFFERENCES && !P_GBA_STYLE_SPECIES_GFX
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 2, SHADOW_SIZE_L)
        FOOTPRINT(Donphan)
        OVERWORLD(
            sPicTable_Donphan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Donphan,
            gShinyOverworldPalette_Donphan
        )
        OVERWORLD_FEMALE(
            sPicTable_DonphanF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },
#endif //P_FAMILY_PHANPY

#if P_FAMILY_STANTLER
    [SPECIES_STANTLER] =
    {
        .frontPic = gMonFrontPic_Stantler,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Stantler,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 64) : MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 3 : 1,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Stantler,
    #endif
        .palette = gMonPalette_Stantler,
        .shinyPalette = gMonShinyPalette_Stantler,
        .iconSprite = gMonIcon_Stantler,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Stantler)
        OVERWORLD(
            sPicTable_Stantler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Stantler,
            gShinyOverworldPalette_Stantler
        )
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_WYRDEER] =
    {
        .frontPic = gMonFrontPic_Wyrdeer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wyrdeer,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Stantler,
    #endif
        .palette = gMonPalette_Wyrdeer,
        .shinyPalette = gMonShinyPalette_Wyrdeer,
        .iconSprite = gMonIcon_Wyrdeer,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Wyrdeer)
        OVERWORLD(
            sPicTable_Wyrdeer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Wyrdeer,
            gShinyOverworldPalette_Wyrdeer
        )
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_STANTLER

#if P_FAMILY_SMEARGLE
    [SPECIES_SMEARGLE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Smeargle,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 12),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_JUMPS : ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Smeargle,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Smeargle,
    #endif
        .palette = gMonPalette_Smeargle,
        .shinyPalette = gMonShinyPalette_Smeargle,
        .iconSprite = gMonIcon_Smeargle,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 7, SHADOW_SIZE_S)
        FOOTPRINT(Smeargle)
        OVERWORLD(
            sPicTable_Smeargle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Smeargle,
            gShinyOverworldPalette_Smeargle
        )
    },
#endif //P_FAMILY_SMEARGLE

#if P_FAMILY_MILTANK
    [SPECIES_MILTANK] =
    {
        .frontPic = gMonFrontPic_Miltank,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(56, 56) : MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 4 : 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Miltank,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 7 : 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Miltank,
    #endif
        .palette = gMonPalette_Miltank,
        .shinyPalette = gMonShinyPalette_Miltank,
        .iconSprite = gMonIcon_Miltank,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 4, SHADOW_SIZE_M)
        FOOTPRINT(Miltank)
        OVERWORLD(
            sPicTable_Miltank,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Miltank,
            gShinyOverworldPalette_Miltank
        )
    },
#endif //P_FAMILY_MILTANK

#if P_FAMILY_RAIKOU
    [SPECIES_RAIKOU] =
    {
        .frontPic = gMonFrontPic_Raikou,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 64) : MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_FLASH_YELLOW : ANIM_V_STRETCH,
        .backPic = gMonBackPic_Raikou,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 48) : MON_COORDS_SIZE(64, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 10 : 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Raikou,
    #endif
        .palette = gMonPalette_Raikou,
        .shinyPalette = gMonShinyPalette_Raikou,
        .iconSprite = gMonIcon_Raikou,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 7, SHADOW_SIZE_L)
        FOOTPRINT(Raikou)
        OVERWORLD(
            sPicTable_Raikou,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Raikou,
            gShinyOverworldPalette_Raikou
        )
    },
#endif //P_FAMILY_RAIKOU

#if P_FAMILY_ENTEI
    [SPECIES_ENTEI] =
    {
        .frontPic = gMonFrontPic_Entei,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Entei,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(64, 56) : MON_COORDS_SIZE(64, 48),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 6 : 11,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Entei,
    #endif
        .palette = gMonPalette_Entei,
        .shinyPalette = gMonShinyPalette_Entei,
        .iconSprite = gMonIcon_Entei,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_L)
        FOOTPRINT(Entei)
        OVERWORLD(
            sPicTable_Entei,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Entei,
            gShinyOverworldPalette_Entei
        )
    },
#endif //P_FAMILY_ENTEI

#if P_FAMILY_SUICUNE
    [SPECIES_SUICUNE] =
    {
        .frontPic = gMonFrontPic_Suicune,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Suicune,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Suicune,
    #endif
        .palette = gMonPalette_Suicune,
        .shinyPalette = gMonShinyPalette_Suicune,
        .iconSprite = gMonIcon_Suicune,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Suicune)
        OVERWORLD(
            sPicTable_Suicune,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Suicune,
            gShinyOverworldPalette_Suicune
        )
    },
#endif //P_FAMILY_SUICUNE

#if P_FAMILY_LARVITAR
    [SPECIES_LARVITAR] =
    {
        .frontPic = gMonFrontPic_Larvitar,
        .frontPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(32, 48) : MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Larvitar,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Larvitar,
    #endif
        .palette = gMonPalette_Larvitar,
        .shinyPalette = gMonShinyPalette_Larvitar,
        .iconSprite = gMonIcon_Larvitar,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 3, SHADOW_SIZE_S)
        FOOTPRINT(Larvitar)
        OVERWORLD(
            sPicTable_Larvitar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Larvitar,
            gShinyOverworldPalette_Larvitar
        )
    },

    [SPECIES_PUPITAR] =
    {
        .frontPic = gMonFrontPic_Pupitar,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 9 : 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_V_SHAKE : ANIM_H_SHAKE,
        .backPic = gMonBackPic_Pupitar,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 5 : 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Larvitar,
    #endif
        .palette = gMonPalette_Pupitar,
        .shinyPalette = gMonShinyPalette_Pupitar,
        .iconSprite = gMonIcon_Pupitar,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 0 : 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 3, SHADOW_SIZE_S)
        FOOTPRINT(Pupitar)
        OVERWORLD(
            sPicTable_Pupitar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Pupitar,
            gShinyOverworldPalette_Pupitar
        )
    },

    [SPECIES_TYRANITAR] =
    {
        .frontPic = gMonFrontPic_Tyranitar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_H_SHAKE : ANIM_V_SHAKE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Tyranitar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 0 : 1,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Larvitar,
    #endif
        .palette = gMonPalette_Tyranitar,
        .shinyPalette = gMonShinyPalette_Tyranitar,
        .iconSprite = gMonIcon_Tyranitar,
        .iconPalIndex = P_GBA_STYLE_SPECIES_ICONS ? 1 : 4,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Tyranitar)
        OVERWORLD(
            sPicTable_Tyranitar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyranitar,
            gShinyOverworldPalette_Tyranitar
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TYRANITAR_MEGA] =
    {
        .frontPic = gMonFrontPic_TyranitarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TyranitarMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Larvitar,
    #endif
        .palette = gMonPalette_TyranitarMega,
        .shinyPalette = gMonShinyPalette_TyranitarMega,
        .iconSprite = gMonIcon_TyranitarMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tyranitar)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_TyranitarMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TyranitarMega,
            gShinyOverworldPalette_TyranitarMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LARVITAR

#if P_FAMILY_LUGIA
    [SPECIES_LUGIA] =
    {
        .frontPic = gMonFrontPic_Lugia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 20,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Lugia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Lugia,
    #endif
        .palette = gMonPalette_Lugia,
        .shinyPalette = gMonShinyPalette_Lugia,
        .iconSprite = gMonIcon_Lugia,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 17, SHADOW_SIZE_L)
        FOOTPRINT(Lugia)
        OVERWORLD(
            sPicTable_Lugia,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Lugia,
            gShinyOverworldPalette_Lugia
        )
    },
#endif //P_FAMILY_LUGIA

#if P_FAMILY_HO_OH
    [SPECIES_HO_OH] =
    {
        .frontPic = gMonFrontPic_HoOh,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_HoOh,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 1 : 2,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_HoOh,
    #endif
        .palette = gMonPalette_HoOh,
        .shinyPalette = gMonShinyPalette_HoOh,
        .iconSprite = gMonIcon_HoOh,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 17, SHADOW_SIZE_L)
        FOOTPRINT(HoOh)
        OVERWORLD(
            sPicTable_HoOh,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_HoOh,
            gShinyOverworldPalette_HoOh
        )
    },
#endif //P_FAMILY_HO_OH

#if P_FAMILY_CELEBI
    [SPECIES_CELEBI] =
    {
        .frontPic = gMonFrontPic_Celebi,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 14 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = P_GBA_STYLE_SPECIES_GFX ? ANIM_RISING_WOBBLE : ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Celebi,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(48, 48) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 8 : 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
    #if SPECIES_EGG_COLOR && GEN_2_EGG_COLORS
        .eggPalette = gEggPalette_Celebi,
    #endif
        .palette = gMonPalette_Celebi,
        .shinyPalette = gMonShinyPalette_Celebi,
        .iconSprite = gMonIcon_Celebi,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_S)
        FOOTPRINT(Celebi)
        OVERWORLD(
            sPicTable_Celebi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Celebi,
            gShinyOverworldPalette_Celebi
        )
    },
#endif //P_FAMILY_CELEBI

#ifdef __INTELLISENSE__
};
#endif
