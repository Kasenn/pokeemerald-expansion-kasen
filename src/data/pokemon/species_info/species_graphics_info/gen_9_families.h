#ifdef __INTELLISENSE__
const struct SpeciesGraphicsInfo gSpeciesGraphicsInfoGen9[] =
{
#endif

#if P_FAMILY_SPRIGATITO
    [SPECIES_SPRIGATITO] =
    {
        .frontPic = gMonFrontPic_Sprigatito,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sprigatito,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Sprigatito,
    #endif
        .palette = gMonPalette_Sprigatito,
        .shinyPalette = gMonShinyPalette_Sprigatito,
        .iconSprite = gMonIcon_Sprigatito,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Sprigatito)
        OVERWORLD(
            sPicTable_Sprigatito,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sprigatito,
            gShinyOverworldPalette_Sprigatito
        )
    },

    [SPECIES_FLORAGATO] =
    {
        .frontPic = gMonFrontPic_Floragato,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Floragato,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Sprigatito,
    #endif
        .palette = gMonPalette_Floragato,
        .shinyPalette = gMonShinyPalette_Floragato,
        .iconSprite = gMonIcon_Floragato,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 11, SHADOW_SIZE_M)
        FOOTPRINT(Floragato)
        OVERWORLD(
            sPicTable_Floragato,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Floragato,
            gShinyOverworldPalette_Floragato
        )
    },

    [SPECIES_MEOWSCARADA] =
    {
        .frontPic = gMonFrontPic_Meowscarada,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Meowscarada,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Sprigatito,
    #endif
        .palette = gMonPalette_Meowscarada,
        .shinyPalette = gMonShinyPalette_Meowscarada,
        .iconSprite = gMonIcon_Meowscarada,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_S)
        FOOTPRINT(Meowscarada)
        OVERWORLD(
            sPicTable_Meowscarada,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Meowscarada,
            gShinyOverworldPalette_Meowscarada
        )
    },
#endif //P_FAMILY_SPRIGATITO

#if P_FAMILY_FUECOCO
    [SPECIES_FUECOCO] =
    {
        .frontPic = gMonFrontPic_Fuecoco,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fuecoco,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Fuecoco,
    #endif
        .palette = gMonPalette_Fuecoco,
        .shinyPalette = gMonShinyPalette_Fuecoco,
        .iconSprite = gMonIcon_Fuecoco,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Fuecoco)
        OVERWORLD(
            sPicTable_Fuecoco,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fuecoco,
            gShinyOverworldPalette_Fuecoco
        )
    },

    [SPECIES_CROCALOR] =
    {
        .frontPic = gMonFrontPic_Crocalor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Crocalor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Fuecoco,
    #endif
        .palette = gMonPalette_Crocalor,
        .shinyPalette = gMonShinyPalette_Crocalor,
        .iconSprite = gMonIcon_Crocalor,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_M)
        FOOTPRINT(Crocalor)
        OVERWORLD(
            sPicTable_Crocalor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Crocalor,
            gShinyOverworldPalette_Crocalor
        )
    },

    [SPECIES_SKELEDIRGE] =
    {
        .frontPic = gMonFrontPic_Skeledirge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skeledirge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Fuecoco,
    #endif
        .palette = gMonPalette_Skeledirge,
        .shinyPalette = gMonShinyPalette_Skeledirge,
        .iconSprite = gMonIcon_Skeledirge,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Skeledirge)
        OVERWORLD(
            sPicTable_Skeledirge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skeledirge,
            gShinyOverworldPalette_Skeledirge
        )
    },
#endif //P_FAMILY_FUECOCO

#if P_FAMILY_QUAXLY
    [SPECIES_QUAXLY] =
    {
        .frontPic = gMonFrontPic_Quaxly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Quaxly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Quaxly,
    #endif
        .palette = gMonPalette_Quaxly,
        .shinyPalette = gMonShinyPalette_Quaxly,
        .iconSprite = gMonIcon_Quaxly,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Quaxly)
        OVERWORLD(
            sPicTable_Quaxly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quaxly,
            gShinyOverworldPalette_Quaxly
        )
    },

    [SPECIES_QUAXWELL] =
    {
        .frontPic = gMonFrontPic_Quaxwell,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Quaxwell,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Quaxly,
    #endif
        .palette = gMonPalette_Quaxwell,
        .shinyPalette = gMonShinyPalette_Quaxwell,
        .iconSprite = gMonIcon_Quaxwell,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_S)
        FOOTPRINT(Quaxwell)
        OVERWORLD(
            sPicTable_Quaxwell,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quaxwell,
            gShinyOverworldPalette_Quaxwell
        )
    },

    [SPECIES_QUAQUAVAL] =
    {
        .frontPic = gMonFrontPic_Quaquaval,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Quaquaval,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Quaxly,
    #endif
        .palette = gMonPalette_Quaquaval,
        .shinyPalette = gMonShinyPalette_Quaquaval,
        .iconSprite = gMonIcon_Quaquaval,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-7, 13, SHADOW_SIZE_M)
        FOOTPRINT(Quaquaval)
        OVERWORLD(
            sPicTable_Quaquaval,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quaquaval,
            gShinyOverworldPalette_Quaquaval
        )
    },
#endif //P_FAMILY_QUAXLY

#if P_FAMILY_LECHONK
    [SPECIES_LECHONK] =
    {
        .frontPic = gMonFrontPic_Lechonk,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lechonk,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Lechonk,
    #endif
        .palette = gMonPalette_Lechonk,
        .shinyPalette = gMonShinyPalette_Lechonk,
        .iconSprite = gMonIcon_Lechonk,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Lechonk)
        OVERWORLD(
            sPicTable_Lechonk,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lechonk,
            gShinyOverworldPalette_Lechonk
        )
    },

    [SPECIES_OINKOLOGNE_M] =
    {
        .frontPic = gMonFrontPic_OinkologneM,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OinkologneM,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Lechonk,
    #endif
        .palette = gMonPalette_OinkologneM,
        .shinyPalette = gMonShinyPalette_OinkologneM,
        .iconSprite = gMonIcon_OinkologneM,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 6, SHADOW_SIZE_M)
        FOOTPRINT(Oinkologne)
        OVERWORLD(
            sPicTable_OinkologneM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_OinkologneM,
            gShinyOverworldPalette_OinkologneM
        )
    },

    [SPECIES_OINKOLOGNE_F] =
    {
        .frontPic = gMonFrontPic_OinkologneF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_OinkologneF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Lechonk,
    #endif
        .palette = gMonPalette_OinkologneF,
        .shinyPalette = gMonShinyPalette_OinkologneF,
        .iconSprite = gMonIcon_OinkologneF,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 6, SHADOW_SIZE_M)
        FOOTPRINT(Oinkologne)
        OVERWORLD(
            sPicTable_OinkologneF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_OinkologneF,
            gShinyOverworldPalette_OinkologneF
        )
    },
#endif //P_FAMILY_LECHONK

#if P_FAMILY_TAROUNTULA
    [SPECIES_TAROUNTULA] =
    {
        .frontPic = gMonFrontPic_Tarountula,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tarountula,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tarountula,
    #endif
        .palette = gMonPalette_Tarountula,
        .shinyPalette = gMonShinyPalette_Tarountula,
        .iconSprite = gMonIcon_Tarountula,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 2, SHADOW_SIZE_M)
        FOOTPRINT(Tarountula)
        OVERWORLD(
            sPicTable_Tarountula,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Tarountula,
            gShinyOverworldPalette_Tarountula
        )
    },

    [SPECIES_SPIDOPS] =
    {
        .frontPic = gMonFrontPic_Spidops,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Spidops,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tarountula,
    #endif
        .palette = gMonPalette_Spidops,
        .shinyPalette = gMonShinyPalette_Spidops,
        .iconSprite = gMonIcon_Spidops,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 8, SHADOW_SIZE_L)
        FOOTPRINT(Spidops)
        OVERWORLD(
            sPicTable_Spidops,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spidops,
            gShinyOverworldPalette_Spidops
        )
    },
#endif //P_FAMILY_TAROUNTULA

#if P_FAMILY_NYMBLE
    [SPECIES_NYMBLE] =
    {
        .frontPic = gMonFrontPic_Nymble,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nymble,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Nymble,
    #endif
        .palette = gMonPalette_Nymble,
        .shinyPalette = gMonShinyPalette_Nymble,
        .iconSprite = gMonIcon_Nymble,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 3, SHADOW_SIZE_M)
        FOOTPRINT(Nymble)
        OVERWORLD(
            sPicTable_Nymble,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Nymble,
            gShinyOverworldPalette_Nymble
        )
    },

    [SPECIES_LOKIX] =
    {
        .frontPic = gMonFrontPic_Lokix,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Lokix,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Nymble,
    #endif
        .palette = gMonPalette_Lokix,
        .shinyPalette = gMonShinyPalette_Lokix,
        .iconSprite = gMonIcon_Lokix,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_M)
        FOOTPRINT(Lokix)
        OVERWORLD(
            sPicTable_Lokix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lokix,
            gShinyOverworldPalette_Lokix
        )
    },
#endif //P_FAMILY_NYMBLE

#if P_FAMILY_PAWMI
    [SPECIES_PAWMI] =
    {
        .frontPic = gMonFrontPic_Pawmi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pawmi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Pawmi,
    #endif
        .palette = gMonPalette_Pawmi,
        .shinyPalette = gMonShinyPalette_Pawmi,
        .iconSprite = gMonIcon_Pawmi,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(1, 4, SHADOW_SIZE_M)
        FOOTPRINT(Pawmi)
            OVERWORLD(
            sPicTable_Pawmi,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pawmi,
            gShinyOverworldPalette_Pawmi
        )
    },

    [SPECIES_PAWMO] =
    {
        .frontPic = gMonFrontPic_Pawmo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pawmo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Pawmi,
    #endif
        .palette = gMonPalette_Pawmo,
        .shinyPalette = gMonShinyPalette_Pawmo,
        .iconSprite = gMonIcon_Pawmo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-3, 10, SHADOW_SIZE_S)
        FOOTPRINT(Pawmo)
        OVERWORLD(
            sPicTable_Pawmo,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pawmo,
            gShinyOverworldPalette_Pawmo
        )
    },

    [SPECIES_PAWMOT] =
    {
        .frontPic = gMonFrontPic_Pawmot,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pawmot,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Pawmi,
    #endif
        .palette = gMonPalette_Pawmot,
        .shinyPalette = gMonShinyPalette_Pawmot,
        .iconSprite = gMonIcon_Pawmot,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_M)
        FOOTPRINT(Pawmot)
        OVERWORLD(
            sPicTable_Pawmot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pawmot,
            gShinyOverworldPalette_Pawmot
        )
    },
#endif //P_FAMILY_PAWMI

#if P_FAMILY_TANDEMAUS
    [SPECIES_TANDEMAUS] =
    {
        .frontPic = gMonFrontPic_Tandemaus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tandemaus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tandemaus,
    #endif
        .palette = gMonPalette_Tandemaus,
        .shinyPalette = gMonShinyPalette_Tandemaus,
        .iconSprite = gMonIcon_Tandemaus,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, -1, SHADOW_SIZE_M)
        FOOTPRINT(Tandemaus)
        OVERWORLD(
            sPicTable_Tandemaus,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tandemaus,
            gShinyOverworldPalette_Tandemaus
        )
    },

    [SPECIES_MAUSHOLD_THREE] =
    {
        .frontPic = gMonFrontPic_MausholdThree,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_MausholdThree,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tandemaus,
    #endif
        .palette = gMonPalette_Maushold,
        .shinyPalette = gMonShinyPalette_Maushold,
        .iconSprite = gMonIcon_MausholdThree,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(4, -1, SHADOW_SIZE_L)
        FOOTPRINT(MausholdThree)
        OVERWORLD(
            sPicTable_MausholdThree,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MausholdThree,
            gShinyOverworldPalette_MausholdThree
        )
    },

    [SPECIES_MAUSHOLD_FOUR] =
    {
        .frontPic = gMonFrontPic_MausholdFour,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_MausholdFour,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tandemaus,
    #endif
        .palette = gMonPalette_Maushold,
        .shinyPalette = gMonShinyPalette_Maushold,
        .iconSprite = gMonIcon_MausholdFour,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, -1, SHADOW_SIZE_L)
        FOOTPRINT(MausholdFour)
        OVERWORLD(
            sPicTable_MausholdFour,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MausholdFour,
            gShinyOverworldPalette_MausholdFour
        )
    },
#endif //P_FAMILY_TANDEMAUS

#if P_FAMILY_FIDOUGH
    [SPECIES_FIDOUGH] =
    {
        .frontPic = gMonFrontPic_Fidough,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fidough,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Fidough,
    #endif
        .palette = gMonPalette_Fidough,
        .shinyPalette = gMonShinyPalette_Fidough,
        .iconSprite = gMonIcon_Fidough,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, 0, SHADOW_SIZE_S)
        FOOTPRINT(Fidough)
        OVERWORLD(
            sPicTable_Fidough,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fidough,
            gShinyOverworldPalette_Fidough
        )
    },

    [SPECIES_DACHSBUN] =
    {
        .frontPic = gMonFrontPic_Dachsbun,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dachsbun,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Fidough,
    #endif
        .palette = gMonPalette_Dachsbun,
        .shinyPalette = gMonShinyPalette_Dachsbun,
        .iconSprite = gMonIcon_Dachsbun,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 7, SHADOW_SIZE_L)
        FOOTPRINT(Dachsbun)
        OVERWORLD(
            sPicTable_Dachsbun,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dachsbun,
            gShinyOverworldPalette_Dachsbun
        )
    },
#endif //P_FAMILY_FIDOUGH

#if P_FAMILY_SMOLIV
    [SPECIES_SMOLIV] =
    {
        .frontPic = gMonFrontPic_Smoliv,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Smoliv,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Smoliv,
    #endif
        .palette = gMonPalette_Smoliv,
        .shinyPalette = gMonShinyPalette_Smoliv,
        .iconSprite = gMonIcon_Smoliv,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -2, SHADOW_SIZE_S)
        FOOTPRINT(Smoliv)
        OVERWORLD(
            sPicTable_Smoliv,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Smoliv,
            gShinyOverworldPalette_Smoliv
        )
    },

    [SPECIES_DOLLIV] =
    {
        .frontPic = gMonFrontPic_Dolliv,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Dolliv,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Smoliv,
    #endif
        .palette = gMonPalette_Dolliv,
        .shinyPalette = gMonShinyPalette_Dolliv,
        .iconSprite = gMonIcon_Dolliv,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Dolliv)
        OVERWORLD(
            sPicTable_Dolliv,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dolliv,
            gShinyOverworldPalette_Dolliv
        )
    },

    [SPECIES_ARBOLIVA] =
    {
        .frontPic = gMonFrontPic_Arboliva,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arboliva,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Smoliv,
    #endif
        .palette = gMonPalette_Arboliva,
        .shinyPalette = gMonShinyPalette_Arboliva,
        .iconSprite = gMonIcon_Arboliva,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 13, SHADOW_SIZE_L)
        FOOTPRINT(Arboliva)
        OVERWORLD(
            sPicTable_Arboliva,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arboliva,
            gShinyOverworldPalette_Arboliva
        )
    },
#endif //P_FAMILY_SMOLIV

#if P_FAMILY_SQUAWKABILLY
    [SPECIES_SQUAWKABILLY_GREEN] =
    {
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_SquawkabillyGreen,
    #endif
        .palette = gMonPalette_SquawkabillyGreen,
        .shinyPalette = gMonShinyPalette_SquawkabillyGreen,
        .iconSprite = gMonIcon_SquawkabillyGreen,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Squawkabilly)
        OVERWORLD(
            sPicTable_SquawkabillyGreen,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SquawkabillyGreen,
            gShinyOverworldPalette_SquawkabillyGreen
        )
    },

    [SPECIES_SQUAWKABILLY_BLUE] =
    {
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_SquawkabillyBlue,
    #endif
        .palette = gMonPalette_SquawkabillyBlue,
        .shinyPalette = gMonShinyPalette_SquawkabillyBlue,
        .iconSprite = gMonIcon_SquawkabillyBlue,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Squawkabilly)
        OVERWORLD(
            sPicTable_SquawkabillyBlue,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SquawkabillyBlue,
            gShinyOverworldPalette_SquawkabillyBlue
        )
    },

    [SPECIES_SQUAWKABILLY_YELLOW] =
    {
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_SquawkabillyYellow,
    #endif
        .palette = gMonPalette_SquawkabillyYellow,
        .shinyPalette = gMonShinyPalette_SquawkabillyYellow,
        .iconSprite = gMonIcon_SquawkabillyYellow,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Squawkabilly)
        OVERWORLD(
            sPicTable_SquawkabillyYellow,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SquawkabillyYellow,
            gShinyOverworldPalette_SquawkabillyYellow
        )
    },

    [SPECIES_SQUAWKABILLY_WHITE] =
    {
        .frontPic = gMonFrontPic_Squawkabilly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_Squawkabilly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_SquawkabillyWhite,
    #endif
        .palette = gMonPalette_SquawkabillyWhite,
        .shinyPalette = gMonShinyPalette_SquawkabillyWhite,
        .iconSprite = gMonIcon_SquawkabillyWhite,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 9, SHADOW_SIZE_M)
        FOOTPRINT(Squawkabilly)
        OVERWORLD(
            sPicTable_SquawkabillyWhite,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_SquawkabillyWhite,
            gShinyOverworldPalette_SquawkabillyWhite
        )
    },
#endif //P_FAMILY_SQUAWKABILLY

#if P_FAMILY_NACLI
    [SPECIES_NACLI] =
    {
        .frontPic = gMonFrontPic_Nacli,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Nacli,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Nacli,
    #endif
        .palette = gMonPalette_Nacli,
        .shinyPalette = gMonShinyPalette_Nacli,
        .iconSprite = gMonIcon_Nacli,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Nacli)
        OVERWORLD(
            sPicTable_Nacli,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Nacli,
            gShinyOverworldPalette_Nacli
        )
    },

    [SPECIES_NACLSTACK] =
    {
        .frontPic = gMonFrontPic_Naclstack,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Naclstack,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Nacli,
    #endif
        .palette = gMonPalette_Naclstack,
        .shinyPalette = gMonShinyPalette_Naclstack,
        .iconSprite = gMonIcon_Naclstack,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 0, SHADOW_SIZE_L)
        FOOTPRINT(Naclstack)
        OVERWORLD(
            sPicTable_Naclstack,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Naclstack,
            gShinyOverworldPalette_Naclstack
        )
    },

    [SPECIES_GARGANACL] =
    {
        .frontPic = gMonFrontPic_Garganacl,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Garganacl,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Nacli,
    #endif
        .palette = gMonPalette_Garganacl,
        .shinyPalette = gMonShinyPalette_Garganacl,
        .iconSprite = gMonIcon_Garganacl,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Garganacl)
        OVERWORLD(
            sPicTable_Garganacl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Garganacl,
            gShinyOverworldPalette_Garganacl
        )
    },
#endif //P_FAMILY_NACLI

#if P_FAMILY_CHARCADET
    [SPECIES_CHARCADET] =
    {
        .frontPic = gMonFrontPic_Charcadet,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Charcadet,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Charcadet,
    #endif
        .palette = gMonPalette_Charcadet,
        .shinyPalette = gMonShinyPalette_Charcadet,
        .iconSprite = gMonIcon_Charcadet,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Charcadet)
        OVERWORLD(
            sPicTable_Charcadet,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Charcadet,
            gShinyOverworldPalette_Charcadet
        )
    },

    [SPECIES_ARMAROUGE] =
    {
        .frontPic = gMonFrontPic_Armarouge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Armarouge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Charcadet,
    #endif
        .palette = gMonPalette_Armarouge,
        .shinyPalette = gMonShinyPalette_Armarouge,
        .iconSprite = gMonIcon_Armarouge,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(Armarouge)
        OVERWORLD(
            sPicTable_Armarouge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Armarouge,
            gShinyOverworldPalette_Armarouge
        )
    },

    [SPECIES_CERULEDGE] =
    {
        .frontPic = gMonFrontPic_Ceruledge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Ceruledge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Charcadet,
    #endif
        .palette = gMonPalette_Ceruledge,
        .shinyPalette = gMonShinyPalette_Ceruledge,
        .iconSprite = gMonIcon_Ceruledge,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(9, 14, SHADOW_SIZE_L)
        FOOTPRINT(Ceruledge)
        OVERWORLD(
            sPicTable_Ceruledge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ceruledge,
            gShinyOverworldPalette_Ceruledge
        )
    },
#endif //P_FAMILY_CHARCADET

#if P_FAMILY_TADBULB
    [SPECIES_TADBULB] =
    {
        .frontPic = gMonFrontPic_Tadbulb,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 26),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Tadbulb,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tadbulb,
    #endif
        .palette = gMonPalette_Tadbulb,
        .shinyPalette = gMonShinyPalette_Tadbulb,
        .iconSprite = gMonIcon_Tadbulb,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 19, SHADOW_SIZE_S)
        FOOTPRINT(Tadbulb)
        OVERWORLD(
            sPicTable_Tadbulb,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Tadbulb,
            gShinyOverworldPalette_Tadbulb
        )
    },

    [SPECIES_BELLIBOLT] =
    {
        .frontPic = gMonFrontPic_Bellibolt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 2),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .backPic = gMonBackPic_Bellibolt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tadbulb,
    #endif
        .palette = gMonPalette_Bellibolt,
        .shinyPalette = gMonShinyPalette_Bellibolt,
        .iconSprite = gMonIcon_Bellibolt,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(Bellibolt)
        OVERWORLD(
            sPicTable_Bellibolt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bellibolt,
            gShinyOverworldPalette_Bellibolt
        )
    },
#endif //P_FAMILY_TADBULB

#if P_FAMILY_WATTREL
    [SPECIES_WATTREL] =
    {
        .frontPic = gMonFrontPic_Wattrel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wattrel,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Wattrel,
    #endif
        .palette = gMonPalette_Wattrel,
        .shinyPalette = gMonShinyPalette_Wattrel,
        .iconSprite = gMonIcon_Wattrel,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 0, SHADOW_SIZE_S)
        FOOTPRINT(Wattrel)
        OVERWORLD(
            sPicTable_Wattrel,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Wattrel,
            gShinyOverworldPalette_Wattrel
        )
    },

    [SPECIES_KILOWATTREL] =
    {
        .frontPic = gMonFrontPic_Kilowattrel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kilowattrel,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Wattrel,
    #endif
        .palette = gMonPalette_Kilowattrel,
        .shinyPalette = gMonShinyPalette_Kilowattrel,
        .iconSprite = gMonIcon_Kilowattrel,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 6, SHADOW_SIZE_M)
        FOOTPRINT(Kilowattrel)
        OVERWORLD(
            sPicTable_Kilowattrel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Kilowattrel,
            gShinyOverworldPalette_Kilowattrel
        )
    },
#endif //P_FAMILY_WATTREL

#if P_FAMILY_MASCHIFF
    [SPECIES_MASCHIFF] =
    {
        .frontPic = gMonFrontPic_Maschiff,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Maschiff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Maschiff,
    #endif
        .palette = gMonPalette_Maschiff,
        .shinyPalette = gMonShinyPalette_Maschiff,
        .iconSprite = gMonIcon_Maschiff,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 5, SHADOW_SIZE_L)
        FOOTPRINT(Maschiff)
        OVERWORLD(
            sPicTable_Maschiff,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Maschiff,
            gShinyOverworldPalette_Maschiff
        )
    },

    [SPECIES_MABOSSTIFF] =
    {
        .frontPic = gMonFrontPic_Mabosstiff,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Mabosstiff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Maschiff,
    #endif
        .palette = gMonPalette_Mabosstiff,
        .shinyPalette = gMonShinyPalette_Mabosstiff,
        .iconSprite = gMonIcon_Mabosstiff,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 5, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Mabosstiff)
        OVERWORLD(
            sPicTable_Mabosstiff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Mabosstiff,
            gShinyOverworldPalette_Mabosstiff
        )
    },
#endif //P_FAMILY_MASCHIFF

#if P_FAMILY_SHROODLE
    [SPECIES_SHROODLE] =
    {
        .frontPic = gMonFrontPic_Shroodle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Shroodle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Shroodle,
    #endif
        .palette = gMonPalette_Shroodle,
        .shinyPalette = gMonShinyPalette_Shroodle,
        .iconSprite = gMonIcon_Shroodle,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, -6, SHADOW_SIZE_S)
        FOOTPRINT(Shroodle)
        OVERWORLD(
            sPicTable_Shroodle,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Shroodle,
            gShinyOverworldPalette_Shroodle
        )
    },

    [SPECIES_GRAFAIAI] =
    {
        .frontPic = gMonFrontPic_Grafaiai,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Grafaiai,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Shroodle,
    #endif
        .palette = gMonPalette_Grafaiai,
        .shinyPalette = gMonShinyPalette_Grafaiai,
        .iconSprite = gMonIcon_Grafaiai,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 5, SHADOW_SIZE_S)
        FOOTPRINT(Grafaiai)
        OVERWORLD(
            sPicTable_Grafaiai,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Grafaiai,
            gShinyOverworldPalette_Grafaiai
        )
    },
#endif //P_FAMILY_SHROODLE

#if P_FAMILY_BRAMBLIN
    [SPECIES_BRAMBLIN] =
    {
        .frontPic = gMonFrontPic_Bramblin,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bramblin,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Bramblin,
    #endif
        .palette = gMonPalette_Bramblin,
        .shinyPalette = gMonShinyPalette_Bramblin,
        .iconSprite = gMonIcon_Bramblin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Bramblin)
        OVERWORLD(
            sPicTable_Bramblin,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Bramblin,
            gShinyOverworldPalette_Bramblin
        )
    },

    [SPECIES_BRAMBLEGHAST] =
    {
        .frontPic = gMonFrontPic_Brambleghast,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Brambleghast,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Bramblin,
    #endif
        .palette = gMonPalette_Brambleghast,
        .shinyPalette = gMonShinyPalette_Brambleghast,
        .iconSprite = gMonIcon_Brambleghast,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 6, SHADOW_SIZE_M)
        FOOTPRINT(Brambleghast)
        OVERWORLD(
            sPicTable_Brambleghast,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Brambleghast,
            gShinyOverworldPalette_Brambleghast
        )
    },
#endif //P_FAMILY_BRAMBLIN

#if P_FAMILY_TOEDSCOOL
    [SPECIES_TOEDSCOOL] =
    {
        .frontPic = gMonFrontPic_Toedscool,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toedscool,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Toedscool,
    #endif
        .palette = gMonPalette_Toedscool,
        .shinyPalette = gMonShinyPalette_Toedscool,
        .iconSprite = gMonIcon_Toedscool,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Toedscool)
        OVERWORLD(
            sPicTable_Toedscool,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Toedscool,
            gShinyOverworldPalette_Toedscool
        )
    },

    [SPECIES_TOEDSCRUEL] =
    {
        .frontPic = gMonFrontPic_Toedscruel,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Toedscruel,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Toedscool,
    #endif
        .palette = gMonPalette_Toedscruel,
        .shinyPalette = gMonShinyPalette_Toedscruel,
        .iconSprite = gMonIcon_Toedscruel,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 8, SHADOW_SIZE_L)
        FOOTPRINT(Toedscruel)
        OVERWORLD(
            sPicTable_Toedscruel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Toedscruel,
            gShinyOverworldPalette_Toedscruel
        )
    },
#endif //P_FAMILY_TOEDSCOOL

#if P_FAMILY_KLAWF
    [SPECIES_KLAWF] =
    {
        .frontPic = gMonFrontPic_Klawf,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Klawf,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 20,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Klawf,
    #endif
        .palette = gMonPalette_Klawf,
        .shinyPalette = gMonShinyPalette_Klawf,
        .iconSprite = gMonIcon_Klawf,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 0, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Klawf)
        OVERWORLD(
            sPicTable_Klawf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klawf,
            gShinyOverworldPalette_Klawf
        )
    },
#endif //P_FAMILY_KLAWF

#if P_FAMILY_CAPSAKID
    [SPECIES_CAPSAKID] =
    {
        .frontPic = gMonFrontPic_Capsakid,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Capsakid,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Capsakid,
    #endif
        .palette = gMonPalette_Capsakid,
        .shinyPalette = gMonShinyPalette_Capsakid,
        .iconSprite = gMonIcon_Capsakid,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Capsakid)
        OVERWORLD(
            sPicTable_Capsakid,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Capsakid,
            gShinyOverworldPalette_Capsakid
        )
    },

    [SPECIES_SCOVILLAIN] =
    {
        .frontPic = gMonFrontPic_Scovillain,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Scovillain,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Capsakid,
    #endif
        .palette = gMonPalette_Scovillain,
        .shinyPalette = gMonShinyPalette_Scovillain,
        .iconSprite = gMonIcon_Scovillain,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 11, SHADOW_SIZE_M)
        FOOTPRINT(Scovillain)
        OVERWORLD(
            sPicTable_Scovillain,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Scovillain,
            gShinyOverworldPalette_Scovillain
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SCOVILLAIN_MEGA] =
    {
        .frontPic = gMonFrontPic_ScovillainMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ScovillainMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Capsakid,
    #endif
        .palette = gMonPalette_ScovillainMega,
        .shinyPalette = gMonShinyPalette_ScovillainMega,
        .iconSprite = gMonIcon_ScovillainMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Scovillain)
        SHADOW(1, 12, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CAPSAKID

#if P_FAMILY_RELLOR
    [SPECIES_RELLOR] =
    {
        .frontPic = gMonFrontPic_Rellor,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Rellor,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Rellor,
    #endif
        .palette = gMonPalette_Rellor,
        .shinyPalette = gMonShinyPalette_Rellor,
        .iconSprite = gMonIcon_Rellor,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(4, -3, SHADOW_SIZE_L)
        FOOTPRINT(Rellor)
        OVERWORLD(
            sPicTable_Rellor,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_BUG,
            sAnimTable_Following,
            gOverworldPalette_Rellor,
            gShinyOverworldPalette_Rellor
        )
    },

    [SPECIES_RABSCA] =
    {
        .frontPic = gMonFrontPic_Rabsca,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Rabsca,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Rellor,
    #endif
        .palette = gMonPalette_Rabsca,
        .shinyPalette = gMonShinyPalette_Rabsca,
        .iconSprite = gMonIcon_Rabsca,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Rabsca)
        OVERWORLD(
            sPicTable_Rabsca,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Rabsca,
            gShinyOverworldPalette_Rabsca
        )
    },
#endif //P_FAMILY_RELLOR

#if P_FAMILY_FLITTLE
    [SPECIES_FLITTLE] =
    {
        .frontPic = gMonFrontPic_Flittle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Flittle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Flittle,
    #endif
        .palette = gMonPalette_Flittle,
        .shinyPalette = gMonShinyPalette_Flittle,
        .iconSprite = gMonIcon_Flittle,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Flittle)
        OVERWORLD(
            sPicTable_Flittle,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Flittle,
            gShinyOverworldPalette_Flittle
        )
    },

    [SPECIES_ESPATHRA] =
    {
        .frontPic = gMonFrontPic_Espathra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Espathra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Flittle,
    #endif
        .palette = gMonPalette_Espathra,
        .shinyPalette = gMonShinyPalette_Espathra,
        .iconSprite = gMonIcon_Espathra,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 10, SHADOW_SIZE_M)
        FOOTPRINT(Espathra)
        OVERWORLD(
            sPicTable_Espathra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Espathra,
            gShinyOverworldPalette_Espathra
        )
    },
#endif //P_FAMILY_FLITTLE

#if P_FAMILY_TINKATINK
    [SPECIES_TINKATINK] =
    {
        .frontPic = gMonFrontPic_Tinkatink,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tinkatink,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tinkatink,
    #endif
        .palette = gMonPalette_Tinkatink,
        .shinyPalette = gMonShinyPalette_Tinkatink,
        .iconSprite = gMonIcon_Tinkatink,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 1, SHADOW_SIZE_S)
        FOOTPRINT(Tinkatink)
        OVERWORLD(
            sPicTable_Tinkatink,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Tinkatink,
            gShinyOverworldPalette_Tinkatink
        )
    },

    [SPECIES_TINKATUFF] =
    {
        .frontPic = gMonFrontPic_Tinkatuff,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tinkatuff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tinkatink,
    #endif
        .palette = gMonPalette_Tinkatuff,
        .shinyPalette = gMonShinyPalette_Tinkatuff,
        .iconSprite = gMonIcon_Tinkatuff,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-4, 5, SHADOW_SIZE_L)
        FOOTPRINT(Tinkatuff)
        OVERWORLD(
            sPicTable_Tinkatuff,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Tinkatuff,
            gShinyOverworldPalette_Tinkatuff
        )
    },

    [SPECIES_TINKATON] =
    {
        .frontPic = gMonFrontPic_Tinkaton,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Tinkaton,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Tinkatink,
    #endif
        .palette = gMonPalette_Tinkaton,
        .shinyPalette = gMonShinyPalette_Tinkaton,
        .iconSprite = gMonIcon_Tinkaton,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-5, 15, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Tinkaton)
        OVERWORLD(
            sPicTable_Tinkaton,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Tinkaton,
            gShinyOverworldPalette_Tinkaton
        )
    },
#endif //P_FAMILY_TINKATINK

#if P_FAMILY_WIGLETT
    [SPECIES_WIGLETT] =
    {
        .frontPic = gMonFrontPic_Wiglett,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wiglett,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Wiglett,
    #endif
        .palette = gMonPalette_Wiglett,
        .shinyPalette = gMonShinyPalette_Wiglett,
        .iconSprite = gMonIcon_Wiglett,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Wiglett)
        OVERWORLD(
            sPicTable_Wiglett,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Wiglett,
            gShinyOverworldPalette_Wiglett
        )
    },

    [SPECIES_WUGTRIO] =
    {
        .frontPic = gMonFrontPic_Wugtrio,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wugtrio,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Wiglett,
    #endif
        .palette = gMonPalette_Wugtrio,
        .shinyPalette = gMonShinyPalette_Wugtrio,
        .iconSprite = gMonIcon_Wugtrio,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        NO_SHADOW
        FOOTPRINT(Wugtrio)
        OVERWORLD(
            sPicTable_Wugtrio,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Wugtrio,
            gShinyOverworldPalette_Wugtrio
        )
    },
#endif //P_FAMILY_WIGLETT

#if P_FAMILY_BOMBIRDIER
    [SPECIES_BOMBIRDIER] =
    {
        .frontPic = gMonFrontPic_Bombirdier,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bombirdier,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Bombirdier,
    #endif
        .palette = gMonPalette_Bombirdier,
        .shinyPalette = gMonShinyPalette_Bombirdier,
        .iconSprite = gMonIcon_Bombirdier,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 12, SHADOW_SIZE_M)
        FOOTPRINT(Bombirdier)
        OVERWORLD(
            sPicTable_Bombirdier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Bombirdier,
            gShinyOverworldPalette_Bombirdier
        )
    },
#endif //P_FAMILY_BOMBIRDIER

#if P_FAMILY_FINIZEN
    [SPECIES_FINIZEN] =
    {
        .frontPic = gMonFrontPic_Finizen,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Finizen,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Finizen,
    #endif
        .palette = gMonPalette_Finizen,
        .shinyPalette = gMonShinyPalette_Finizen,
        .iconSprite = gMonIcon_Finizen,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Finizen)
        OVERWORLD(
            sPicTable_Finizen,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Finizen,
            gShinyOverworldPalette_Finizen
        )
    },

    [SPECIES_PALAFIN_ZERO] =
    {
        .frontPic = gMonFrontPic_PalafinZero,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_PalafinZero,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Finizen,
    #endif
        .palette = gMonPalette_PalafinZero,
        .shinyPalette = gMonShinyPalette_PalafinZero,
        .iconSprite = gMonIcon_PalafinZero,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_S)
        FOOTPRINT(Palafin)
        OVERWORLD(
            sPicTable_PalafinZero,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_PalafinZero,
            gShinyOverworldPalette_PalafinZero
        )
    },

    [SPECIES_PALAFIN_HERO] =
    {
        .frontPic = gMonFrontPic_PalafinHero,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_PalafinHero,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Finizen,
    #endif
        .palette = gMonPalette_PalafinHero,
        .shinyPalette = gMonShinyPalette_PalafinHero,
        .iconSprite = gMonIcon_PalafinHero,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Palafin)
        OVERWORLD(
            sPicTable_PalafinHero,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_PalafinHero,
            gShinyOverworldPalette_PalafinHero
        )
    },
#endif //P_FAMILY_FINIZEN

#if P_FAMILY_VAROOM
    [SPECIES_VAROOM] =
    {
        .frontPic = gMonFrontPic_Varoom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Varoom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Varoom,
    #endif
        .palette = gMonPalette_Varoom,
        .shinyPalette = gMonShinyPalette_Varoom,
        .iconSprite = gMonIcon_Varoom,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 0, SHADOW_SIZE_M)
        FOOTPRINT(Varoom)
        OVERWORLD(
            sPicTable_Varoom,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Varoom,
            gShinyOverworldPalette_Varoom
        )
    },

    [SPECIES_REVAVROOM] =
    {
        .frontPic = gMonFrontPic_Revavroom,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Revavroom,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Varoom,
    #endif
        .palette = gMonPalette_Revavroom,
        .shinyPalette = gMonShinyPalette_Revavroom,
        .iconSprite = gMonIcon_Revavroom,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 7, SHADOW_SIZE_L)
        FOOTPRINT(Revavroom)
        OVERWORLD(
            sPicTable_Revavroom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Revavroom,
            gShinyOverworldPalette_Revavroom
        )
    },
#endif //P_FAMILY_VAROOM

#if P_FAMILY_CYCLIZAR
    [SPECIES_CYCLIZAR] =
    {
        .frontPic = gMonFrontPic_Cyclizar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cyclizar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Cyclizar,
    #endif
        .palette = gMonPalette_Cyclizar,
        .shinyPalette = gMonShinyPalette_Cyclizar,
        .iconSprite = gMonIcon_Cyclizar,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 9, SHADOW_SIZE_M)
        FOOTPRINT(Cyclizar)
        OVERWORLD(
            sPicTable_Cyclizar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cyclizar,
            gShinyOverworldPalette_Cyclizar
        )
    },
#endif //P_FAMILY_CYCLIZAR

#if P_FAMILY_ORTHWORM
    [SPECIES_ORTHWORM] =
    {
        .frontPic = gMonFrontPic_Orthworm,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Orthworm,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Orthworm,
    #endif
        .palette = gMonPalette_Orthworm,
        .shinyPalette = gMonShinyPalette_Orthworm,
        .iconSprite = gMonIcon_Orthworm,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 10, SHADOW_SIZE_L)
        FOOTPRINT(Orthworm)
        OVERWORLD(
            sPicTable_Orthworm,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_Orthworm,
            gShinyOverworldPalette_Orthworm
        )
    },
#endif //P_FAMILY_ORTHWORM

#if P_FAMILY_GLIMMET
    [SPECIES_GLIMMET] =
    {
        .frontPic = gMonFrontPic_Glimmet,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 11,
        .backPic = gMonBackPic_Glimmet,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Glimmet,
    #endif
        .palette = gMonPalette_Glimmet,
        .shinyPalette = gMonShinyPalette_Glimmet,
        .iconSprite = gMonIcon_Glimmet,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 6, SHADOW_SIZE_S)
        FOOTPRINT(Glimmet)
        OVERWORLD(
            sPicTable_Glimmet,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Glimmet,
            gShinyOverworldPalette_Glimmet
        )
    },

    [SPECIES_GLIMMORA] =
    {
        .frontPic = gMonFrontPic_Glimmora,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Glimmora,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Glimmet,
    #endif
        .palette = gMonPalette_Glimmora,
        .shinyPalette = gMonShinyPalette_Glimmora,
        .iconSprite = gMonIcon_Glimmora,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 17, SHADOW_SIZE_M)
        FOOTPRINT(Glimmora)
        OVERWORLD(
            sPicTable_Glimmora,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Glimmora,
            gShinyOverworldPalette_Glimmora
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GLIMMORA_MEGA] =
    {
        .frontPic = gMonFrontPic_GlimmoraMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_GlimmoraMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Glimmet,
    #endif
        .palette = gMonPalette_GlimmoraMega,
        .shinyPalette = gMonShinyPalette_GlimmoraMega,
        .iconSprite = gMonIcon_GlimmoraMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Glimmora)
        SHADOW(1, 18, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_GLIMMET

#if P_FAMILY_GREAVARD
    [SPECIES_GREAVARD] =
    {
        .frontPic = gMonFrontPic_Greavard,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Greavard,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Greavard,
    #endif
        .palette = gMonPalette_Greavard,
        .shinyPalette = gMonShinyPalette_Greavard,
        .iconSprite = gMonIcon_Greavard,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(3, 2, SHADOW_SIZE_M)
        FOOTPRINT(Greavard)
        OVERWORLD(
            sPicTable_Greavard,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Greavard,
            gShinyOverworldPalette_Greavard
        )
    },

    [SPECIES_HOUNDSTONE] =
    {
        .frontPic = gMonFrontPic_Houndstone,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Houndstone,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Greavard,
    #endif
        .palette = gMonPalette_Houndstone,
        .shinyPalette = gMonShinyPalette_Houndstone,
        .iconSprite = gMonIcon_Houndstone,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Houndstone)
        OVERWORLD(
            sPicTable_Houndstone,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Houndstone,
            gShinyOverworldPalette_Houndstone
        )
    },
#endif //P_FAMILY_GREAVARD

#if P_FAMILY_FLAMIGO
    [SPECIES_FLAMIGO] =
    {
        .frontPic = gMonFrontPic_Flamigo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Flamigo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Flamigo,
    #endif
        .palette = gMonPalette_Flamigo,
        .shinyPalette = gMonShinyPalette_Flamigo,
        .iconSprite = gMonIcon_Flamigo,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Flamigo)
        OVERWORLD(
            sPicTable_Flamigo,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Flamigo,
            gShinyOverworldPalette_Flamigo
        )
    },
#endif //P_FAMILY_FLAMIGO

#if P_FAMILY_CETODDLE
    [SPECIES_CETODDLE] =
    {
        .frontPic = gMonFrontPic_Cetoddle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cetoddle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Cetoddle,
    #endif
        .palette = gMonPalette_Cetoddle,
        .shinyPalette = gMonShinyPalette_Cetoddle,
        .iconSprite = gMonIcon_Cetoddle,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 0, SHADOW_SIZE_M)
        FOOTPRINT(Cetoddle)
        OVERWORLD(
            sPicTable_Cetoddle,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cetoddle,
            gShinyOverworldPalette_Cetoddle
        )
    },

    [SPECIES_CETITAN] =
    {
        .frontPic = gMonFrontPic_Cetitan,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cetitan,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Cetoddle,
    #endif
        .palette = gMonPalette_Cetitan,
        .shinyPalette = gMonShinyPalette_Cetitan,
        .iconSprite = gMonIcon_Cetitan,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 10, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Cetitan)
        OVERWORLD(
            sPicTable_Cetitan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Cetitan,
            gShinyOverworldPalette_Cetitan
        )
    },
#endif //P_FAMILY_CETODDLE

#if P_FAMILY_VELUZA
    [SPECIES_VELUZA] =
    {
        .frontPic = gMonFrontPic_Veluza,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Veluza,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Veluza,
    #endif
        .palette = gMonPalette_Veluza,
        .shinyPalette = gMonShinyPalette_Veluza,
        .iconSprite = gMonIcon_Veluza,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Veluza)
        OVERWORLD(
            sPicTable_Veluza,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Veluza,
            gShinyOverworldPalette_Veluza
        )
    },
#endif //P_FAMILY_VELUZA

#if P_FAMILY_DONDOZO
    [SPECIES_DONDOZO] =
    {
        .frontPic = gMonFrontPic_Dondozo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 1,
        .backPic = gMonBackPic_Dondozo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Dondozo,
    #endif
        .palette = gMonPalette_Dondozo,
        .shinyPalette = gMonShinyPalette_Dondozo,
        .iconSprite = gMonIcon_Dondozo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Dondozo)
        OVERWORLD(
            sPicTable_Dondozo,
            SIZE_64x64,
            SHADOW_SIZE_L,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Dondozo,
            gShinyOverworldPalette_Dondozo
        )
    },
#endif //P_FAMILY_DONDOZO

#if P_FAMILY_TATSUGIRI
    [SPECIES_TATSUGIRI_CURLY] =
    {
        .frontPic = gMonFrontPic_TatsugiriCurly,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriCurly,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_TatsugiriCurly,
    #endif
        .palette = gMonPalette_TatsugiriCurly,
        .shinyPalette = gMonShinyPalette_TatsugiriCurly,
        .iconSprite = gMonIcon_TatsugiriCurly,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Tatsugiri)
        OVERWORLD(
            sPicTable_TatsugiriCurly,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_TatsugiriCurly,
            gShinyOverworldPalette_TatsugiriCurly
        )
    },

    [SPECIES_TATSUGIRI_DROOPY] =
    {
        .frontPic = gMonFrontPic_TatsugiriDroopy,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriDroopy,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_TatsugiriDroopy,
    #endif
        .palette = gMonPalette_TatsugiriDroopy,
        .shinyPalette = gMonShinyPalette_TatsugiriDroopy,
        .iconSprite = gMonIcon_TatsugiriDroopy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Tatsugiri)
        OVERWORLD(
            sPicTable_TatsugiriDroopy,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_TatsugiriDroopy,
            gShinyOverworldPalette_TatsugiriDroopy
        )
    },

    [SPECIES_TATSUGIRI_STRETCHY] =
    {
        .frontPic = gMonFrontPic_TatsugiriStretchy,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/
        .backPic = gMonBackPic_TatsugiriStretchy,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        /*.backAnimId = BACK_ANIM_NONE,*/
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_TatsugiriStretchy,
    #endif
        .palette = gMonPalette_TatsugiriStretchy,
        .shinyPalette = gMonShinyPalette_TatsugiriStretchy,
        .iconSprite = gMonIcon_TatsugiriStretchy,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Tatsugiri)
        OVERWORLD(
            sPicTable_TatsugiriStretchy,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_TatsugiriStretchy,
            gShinyOverworldPalette_TatsugiriStretchy
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_TATSUGIRI_CURLY_MEGA] =
    {
        .frontPic = gMonFrontPic_TatsugiriCurlyMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TatsugiriCurlyMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_TatsugiriCurly,
    #endif
        .palette = gMonPalette_TatsugiriMega,
        .shinyPalette = gMonShinyPalette_TatsugiriMega,
        .iconSprite = gMonIcon_TatsugiriCurlyMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Tatsugiri)
        SHADOW(0, 2, SHADOW_SIZE_M)
    },

    [SPECIES_TATSUGIRI_DROOPY_MEGA] =
    {
        .frontPic = gMonFrontPic_TatsugiriDroopyMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TatsugiriDroopyMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_TatsugiriDroopy,
    #endif
        .palette = gMonPalette_TatsugiriMega,
        .shinyPalette = gMonShinyPalette_TatsugiriMega,
        .iconSprite = gMonIcon_TatsugiriDroopyMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Tatsugiri)
        SHADOW(0, 2, SHADOW_SIZE_M)
    },

    [SPECIES_TATSUGIRI_STRETCHY_MEGA] =
    {
        .frontPic = gMonFrontPic_TatsugiriStretchyMega,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TatsugiriStretchyMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_TatsugiriStretchy,
    #endif
        .palette = gMonPalette_TatsugiriMega,
        .shinyPalette = gMonShinyPalette_TatsugiriMega,
        .iconSprite = gMonIcon_TatsugiriStretchyMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Tatsugiri)
        SHADOW(0, 2, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TATSUGIRI

#if P_FAMILY_GREAT_TUSK
    [SPECIES_GREAT_TUSK] =
    {
        .frontPic = gMonFrontPic_GreatTusk,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GreatTusk,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_GreatTusk,
    #endif
        .palette = gMonPalette_GreatTusk,
        .shinyPalette = gMonShinyPalette_GreatTusk,
        .iconSprite = gMonIcon_GreatTusk,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(GreatTusk)
        OVERWORLD(
            sPicTable_GreatTusk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GreatTusk,
            gShinyOverworldPalette_GreatTusk
        )
    },
#endif //P_FAMILY_GREAT_TUSK

#if P_FAMILY_SCREAM_TAIL
    [SPECIES_SCREAM_TAIL] =
    {
        .frontPic = gMonFrontPic_ScreamTail,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ScreamTail,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_ScreamTail,
    #endif
        .palette = gMonPalette_ScreamTail,
        .shinyPalette = gMonShinyPalette_ScreamTail,
        .iconSprite = gMonIcon_ScreamTail,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 3, SHADOW_SIZE_L)
        FOOTPRINT(ScreamTail)
        OVERWORLD(
            sPicTable_ScreamTail,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ScreamTail,
            gShinyOverworldPalette_ScreamTail
        )
    },
#endif //P_FAMILY_SCREAM_TAIL

#if P_FAMILY_BRUTE_BONNET
    [SPECIES_BRUTE_BONNET] =
    {
        .frontPic = gMonFrontPic_BruteBonnet,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BruteBonnet,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_BruteBonnet,
    #endif
        .palette = gMonPalette_BruteBonnet,
        .shinyPalette = gMonShinyPalette_BruteBonnet,
        .iconSprite = gMonIcon_BruteBonnet,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 7, SHADOW_SIZE_L)
        FOOTPRINT(BruteBonnet)
        OVERWORLD(
            sPicTable_BruteBonnet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BruteBonnet,
            gShinyOverworldPalette_BruteBonnet
        )
    },
#endif //P_FAMILY_BRUTE_BONNET

#if P_FAMILY_FLUTTER_MANE
    [SPECIES_FLUTTER_MANE] =
    {
        .frontPic = gMonFrontPic_FlutterMane,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 18,
        .backPic = gMonBackPic_FlutterMane,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_FlutterMane,
    #endif
        .palette = gMonPalette_FlutterMane,
        .shinyPalette = gMonShinyPalette_FlutterMane,
        .iconSprite = gMonIcon_FlutterMane,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 20, SHADOW_SIZE_S)
        FOOTPRINT(FlutterMane)
        OVERWORLD(
            sPicTable_FlutterMane,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_FlutterMane,
            gShinyOverworldPalette_FlutterMane
        )
    },
#endif //P_FAMILY_FLUTTER_MANE

#if P_FAMILY_SLITHER_WING
    [SPECIES_SLITHER_WING] =
    {
        .frontPic = gMonFrontPic_SlitherWing,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SlitherWing,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_SlitherWing,
    #endif
        .palette = gMonPalette_SlitherWing,
        .shinyPalette = gMonShinyPalette_SlitherWing,
        .iconSprite = gMonIcon_SlitherWing,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-5, 13, SHADOW_SIZE_M)
        FOOTPRINT(SlitherWing)
        OVERWORLD(
            sPicTable_SlitherWing,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_SlitherWing,
            gShinyOverworldPalette_SlitherWing
        )
    },
#endif //P_FAMILY_SLITHER_WING

#if P_FAMILY_SANDY_SHOCKS
    [SPECIES_SANDY_SHOCKS] =
    {
        .frontPic = gMonFrontPic_SandyShocks,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SandyShocks,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_SandyShocks,
    #endif
        .palette = gMonPalette_SandyShocks,
        .shinyPalette = gMonShinyPalette_SandyShocks,
        .iconSprite = gMonIcon_SandyShocks,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(SandyShocks)
        OVERWORLD(
            sPicTable_SandyShocks,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SandyShocks,
            gShinyOverworldPalette_SandyShocks
        )
    },
#endif //P_FAMILY_SANDY_SHOCKS

#if P_FAMILY_IRON_TREADS
    [SPECIES_IRON_TREADS] =
    {
        .frontPic = gMonFrontPic_IronTreads,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronTreads,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronTreads,
    #endif
        .palette = gMonPalette_IronTreads,
        .shinyPalette = gMonShinyPalette_IronTreads,
        .iconSprite = gMonIcon_IronTreads,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 3, SHADOW_SIZE_L)
        FOOTPRINT(IronTreads)
        OVERWORLD(
            sPicTable_IronTreads,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronTreads,
            gShinyOverworldPalette_IronTreads
        )
    },
#endif //P_FAMILY_IRON_TREADS

#if P_FAMILY_IRON_BUNDLE
    [SPECIES_IRON_BUNDLE] =
    {
        .frontPic = gMonFrontPic_IronBundle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronBundle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronBundle,
    #endif
        .palette = gMonPalette_IronBundle,
        .shinyPalette = gMonShinyPalette_IronBundle,
        .iconSprite = gMonIcon_IronBundle,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, 6, SHADOW_SIZE_M)
        FOOTPRINT(IronBundle)
        OVERWORLD(
            sPicTable_IronBundle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronBundle,
            gShinyOverworldPalette_IronBundle
        )
    },
#endif //P_FAMILY_IRON_BUNDLE

#if P_FAMILY_IRON_HANDS
    [SPECIES_IRON_HANDS] =
    {
        .frontPic = gMonFrontPic_IronHands,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronHands,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronHands,
    #endif
        .palette = gMonPalette_IronHands,
        .shinyPalette = gMonShinyPalette_IronHands,
        .iconSprite = gMonIcon_IronHands,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 8, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(IronHands)
        OVERWORLD(
            sPicTable_IronHands,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronHands,
            gShinyOverworldPalette_IronHands
        )
    },
#endif //P_FAMILY_IRON_HANDS

#if P_FAMILY_IRON_JUGULIS
    [SPECIES_IRON_JUGULIS] =
    {
        .frontPic = gMonFrontPic_IronJugulis,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_IronJugulis,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronJugulis,
    #endif
        .palette = gMonPalette_IronJugulis,
        .shinyPalette = gMonShinyPalette_IronJugulis,
        .iconSprite = gMonIcon_IronJugulis,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 15, SHADOW_SIZE_M)
        FOOTPRINT(IronJugulis)
        OVERWORLD(
            sPicTable_IronJugulis,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_IronJugulis,
            gShinyOverworldPalette_IronJugulis
        )
    },
#endif //P_FAMILY_IRON_JUGULIS

#if P_FAMILY_IRON_MOTH
    [SPECIES_IRON_MOTH] =
    {
        .frontPic = gMonFrontPic_IronMoth,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_IronMoth,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronMoth,
    #endif
        .palette = gMonPalette_IronMoth,
        .shinyPalette = gMonShinyPalette_IronMoth,
        .iconSprite = gMonIcon_IronMoth,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 14, SHADOW_SIZE_M)
        FOOTPRINT(IronMoth)
        OVERWORLD(
            sPicTable_IronMoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronMoth,
            gShinyOverworldPalette_IronMoth
        )
    },
#endif //P_FAMILY_IRON_MOTH

#if P_FAMILY_IRON_THORNS
    [SPECIES_IRON_THORNS] =
    {
        .frontPic = gMonFrontPic_IronThorns,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronThorns,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronThorns,
    #endif
        .palette = gMonPalette_IronThorns,
        .shinyPalette = gMonShinyPalette_IronThorns,
        .iconSprite = gMonIcon_IronThorns,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-9, 12, SHADOW_SIZE_L)
        FOOTPRINT(IronThorns)
        OVERWORLD(
            sPicTable_IronThorns,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronThorns,
            gShinyOverworldPalette_IronThorns
        )
    },
#endif //P_FAMILY_IRON_THORNS

#if P_FAMILY_FRIGIBAX
    [SPECIES_FRIGIBAX] =
    {
        .frontPic = gMonFrontPic_Frigibax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Frigibax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Frigibax,
    #endif
        .palette = gMonPalette_Frigibax,
        .shinyPalette = gMonShinyPalette_Frigibax,
        .iconSprite = gMonIcon_Frigibax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, -1, SHADOW_SIZE_S)
        FOOTPRINT(Frigibax)
        OVERWORLD(
            sPicTable_Frigibax,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frigibax,
            gShinyOverworldPalette_Frigibax
        )
    },

    [SPECIES_ARCTIBAX] =
    {
        .frontPic = gMonFrontPic_Arctibax,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Arctibax,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Frigibax,
    #endif
        .palette = gMonPalette_Arctibax,
        .shinyPalette = gMonShinyPalette_Arctibax,
        .iconSprite = gMonIcon_Arctibax,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 8, SHADOW_SIZE_M)
        FOOTPRINT(Arctibax)
        OVERWORLD(
            sPicTable_Arctibax,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Arctibax,
            gShinyOverworldPalette_Arctibax
        )
    },

    [SPECIES_BAXCALIBUR] =
    {
        .frontPic = gMonFrontPic_Baxcalibur,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Baxcalibur,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Frigibax,
    #endif
        .palette = gMonPalette_Baxcalibur,
        .shinyPalette = gMonShinyPalette_Baxcalibur,
        .iconSprite = gMonIcon_Baxcalibur,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Baxcalibur)
        OVERWORLD(
            sPicTable_Baxcalibur,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Baxcalibur,
            gShinyOverworldPalette_Baxcalibur
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_BAXCALIBUR_MEGA] =
    {
        .frontPic = gMonFrontPic_BaxcaliburMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BaxcaliburMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Frigibax,
    #endif
        .palette = gMonPalette_BaxcaliburMega,
        .shinyPalette = gMonShinyPalette_BaxcaliburMega,
        .iconSprite = gMonIcon_BaxcaliburMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Baxcalibur)
        SHADOW(4, 14, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FRIGIBAX

#if P_FAMILY_GIMMIGHOUL
    [SPECIES_GIMMIGHOUL_CHEST] =
    {
        .frontPic = gMonFrontPic_GimmighoulChest,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GimmighoulChest,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Gimmighoul,
    #endif
        .palette = gMonPalette_GimmighoulChest,
        .shinyPalette = gMonShinyPalette_GimmighoulChest,
        .iconSprite = gMonIcon_GimmighoulChest,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(0, 7, SHADOW_SIZE_M)
        FOOTPRINT(GimmighoulChest)
        OVERWORLD(
            sPicTable_GimmighoulChest,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_GimmighoulChest,
            gShinyOverworldPalette_GimmighoulChest
        )
    },

    [SPECIES_GIMMIGHOUL_ROAMING] =
    {
        .frontPic = gMonFrontPic_GimmighoulRoaming,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GimmighoulRoaming,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Gimmighoul,
    #endif
        .palette = gMonPalette_GimmighoulRoaming,
        .shinyPalette = gMonShinyPalette_GimmighoulRoaming,
        .iconSprite = gMonIcon_GimmighoulRoaming,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-1, -4, SHADOW_SIZE_S)
        FOOTPRINT(GimmighoulRoaming)
    },

    [SPECIES_GHOLDENGO] =
    {
        .frontPic = gMonFrontPic_Gholdengo,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Gholdengo,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Gimmighoul,
    #endif
        .palette = gMonPalette_Gholdengo,
        .shinyPalette = gMonShinyPalette_Gholdengo,
        .iconSprite = gMonIcon_Gholdengo,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 13, SHADOW_SIZE_M)
        FOOTPRINT(Gholdengo)
        OVERWORLD(
            sPicTable_Gholdengo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Gholdengo,
            gShinyOverworldPalette_Gholdengo
        )
    },
#endif //P_FAMILY_GIMMIGHOUL

#if P_FAMILY_WO_CHIEN
    [SPECIES_WO_CHIEN] =
    {
        .frontPic = gMonFrontPic_WoChien,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WoChien,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_WoChien,
    #endif
        .palette = gMonPalette_WoChien,
        .shinyPalette = gMonShinyPalette_WoChien,
        .iconSprite = gMonIcon_WoChien,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(WoChien)
        OVERWORLD(
            sPicTable_WoChien,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            sAnimTable_Following,
            gOverworldPalette_WoChien,
            gShinyOverworldPalette_WoChien
        )
    },
#endif //P_FAMILY_WO_CHIEN

#if P_FAMILY_CHIEN_PAO
    [SPECIES_CHIEN_PAO] =
    {
        .frontPic = gMonFrontPic_ChienPao,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_ChienPao,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_ChienPao,
    #endif
        .palette = gMonPalette_ChienPao,
        .shinyPalette = gMonShinyPalette_ChienPao,
        .iconSprite = gMonIcon_ChienPao,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 8, SHADOW_SIZE_L)
        FOOTPRINT(ChienPao)
        OVERWORLD(
            sPicTable_ChienPao,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_ChienPao,
            gShinyOverworldPalette_ChienPao
        )
    },
#endif //P_FAMILY_CHIEN_PAO

#if P_FAMILY_TING_LU
    [SPECIES_TING_LU] =
    {
        .frontPic = gMonFrontPic_TingLu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TingLu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_TingLu,
    #endif
        .palette = gMonPalette_TingLu,
        .shinyPalette = gMonShinyPalette_TingLu,
        .iconSprite = gMonIcon_TingLu,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(12, 13, SHADOW_SIZE_L)
        FOOTPRINT(TingLu)
        OVERWORLD(
            sPicTable_TingLu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TingLu,
            gShinyOverworldPalette_TingLu
        )
    },
#endif //P_FAMILY_TING_LU

#if P_FAMILY_CHI_YU
    [SPECIES_CHI_YU] =
    {
        .frontPic = gMonFrontPic_ChiYu,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_ChiYu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_ChiYu,
    #endif
        .palette = gMonPalette_ChiYu,
        .shinyPalette = gMonShinyPalette_ChiYu,
        .iconSprite = gMonIcon_ChiYu,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_S)
        FOOTPRINT(ChiYu)
        OVERWORLD(
            sPicTable_ChiYu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_ChiYu,
            gShinyOverworldPalette_ChiYu
        )
    },
#endif //P_FAMILY_CHI_YU

#if P_FAMILY_ROARING_MOON
    [SPECIES_ROARING_MOON] =
    {
        .frontPic = gMonFrontPic_RoaringMoon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 0,
        .backPic = gMonBackPic_RoaringMoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_RoaringMoon,
    #endif
        .palette = gMonPalette_RoaringMoon,
        .shinyPalette = gMonShinyPalette_RoaringMoon,
        .iconSprite = gMonIcon_RoaringMoon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(RoaringMoon)
        OVERWORLD(
            sPicTable_RoaringMoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RoaringMoon,
            gShinyOverworldPalette_RoaringMoon
        )
    },
#endif //P_FAMILY_ROARING_MOON

#if P_FAMILY_IRON_VALIANT
    [SPECIES_IRON_VALIANT] =
    {
        .frontPic = gMonFrontPic_IronValiant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronValiant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronValiant,
    #endif
        .palette = gMonPalette_IronValiant,
        .shinyPalette = gMonShinyPalette_IronValiant,
        .iconSprite = gMonIcon_IronValiant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 14, SHADOW_SIZE_L)
        FOOTPRINT(IronValiant)
        OVERWORLD(
            sPicTable_IronValiant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronValiant,
            gShinyOverworldPalette_IronValiant
        )
    },
#endif //P_FAMILY_IRON_VALIANT

#if P_FAMILY_KORAIDON
    [SPECIES_KORAIDON] =
    {
        .frontPic = gMonFrontPic_Koraidon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Koraidon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Koraidon,
    #endif
        .palette = gMonPalette_Koraidon,
        .shinyPalette = gMonShinyPalette_Koraidon,
        .iconSprite = gMonIcon_Koraidon,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Koraidon)
        OVERWORLD(
            sPicTable_Koraidon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Koraidon,
            gShinyOverworldPalette_Koraidon
        )
    },
#endif //P_FAMILY_KORAIDON

#if P_FAMILY_MIRAIDON
    [SPECIES_MIRAIDON] =
    {
        .frontPic = gMonFrontPic_Miraidon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Miraidon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Miraidon,
    #endif
        .palette = gMonPalette_Miraidon,
        .shinyPalette = gMonShinyPalette_Miraidon,
        .iconSprite = gMonIcon_Miraidon,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 20, SHADOW_SIZE_L)
        FOOTPRINT(Miraidon)
        OVERWORLD(
            sPicTable_Miraidon,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Miraidon,
            gShinyOverworldPalette_Miraidon
        )
    },
#endif //P_FAMILY_MIRAIDON

#if P_FAMILY_WALKING_WAKE
    [SPECIES_WALKING_WAKE] =
    {
        .frontPic = gMonFrontPic_WalkingWake,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WalkingWake,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_WalkingWake,
    #endif
        .palette = gMonPalette_WalkingWake,
        .shinyPalette = gMonShinyPalette_WalkingWake,
        .iconSprite = gMonIcon_WalkingWake,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 13, SHADOW_SIZE_L)
        FOOTPRINT(WalkingWake)
        OVERWORLD(
            sPicTable_WalkingWake,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_WalkingWake,
            gShinyOverworldPalette_WalkingWake
        )
    },
#endif //P_FAMILY_WALKING_WAKE

#if P_FAMILY_IRON_LEAVES
    [SPECIES_IRON_LEAVES] =
    {
        .frontPic = gMonFrontPic_IronLeaves,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronLeaves,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronLeaves,
    #endif
        .palette = gMonPalette_IronLeaves,
        .shinyPalette = gMonShinyPalette_IronLeaves,
        .iconSprite = gMonIcon_IronLeaves,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_M)
        FOOTPRINT(IronLeaves)
        OVERWORLD(
            sPicTable_IronLeaves,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronLeaves,
            gShinyOverworldPalette_IronLeaves
        )
    },
#endif //P_FAMILY_IRON_LEAVES

#if P_FAMILY_POLTCHAGEIST
    [SPECIES_POLTCHAGEIST_COUNTERFEIT] =
    {
        .frontPic = gMonFrontPic_Poltchageist,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Poltchageist,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Poltchageist,
    #endif
        .palette = gMonPalette_Poltchageist,
        .shinyPalette = gMonShinyPalette_Poltchageist,
        .iconSprite = gMonIcon_Poltchageist,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Poltchageist)
        OVERWORLD(
            sPicTable_Poltchageist,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Poltchageist,
            gShinyOverworldPalette_Poltchageist
        )
    },

    [SPECIES_POLTCHAGEIST_ARTISAN] =
    {
        .frontPic = gMonFrontPic_Poltchageist,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Poltchageist,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Poltchageist,
    #endif
        .palette = gMonPalette_Poltchageist,
        .shinyPalette = gMonShinyPalette_Poltchageist,
        .iconSprite = gMonIcon_Poltchageist,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Poltchageist)
        OVERWORLD(
            sPicTable_Poltchageist,
            SIZE_32x32,
            SHADOW_SIZE_S,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Poltchageist,
            gShinyOverworldPalette_Poltchageist
        )
    },

    [SPECIES_SINISTCHA_UNREMARKABLE] =
    {
        .frontPic = gMonFrontPic_Sinistcha,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Sinistcha,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Poltchageist,
    #endif
        .palette = gMonPalette_Sinistcha,
        .shinyPalette = gMonShinyPalette_Sinistcha,
        .iconSprite = gMonIcon_Sinistcha,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 16, SHADOW_SIZE_M)
        FOOTPRINT(Sinistcha)
        OVERWORLD(
            sPicTable_Sinistcha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Sinistcha,
            gShinyOverworldPalette_Sinistcha
        )
    },

    [SPECIES_SINISTCHA_MASTERPIECE] =
    {
        .frontPic = gMonFrontPic_Sinistcha,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Sinistcha,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Poltchageist,
    #endif
        .palette = gMonPalette_Sinistcha,
        .shinyPalette = gMonShinyPalette_Sinistcha,
        .iconSprite = gMonIcon_Sinistcha,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 16, SHADOW_SIZE_M)
        FOOTPRINT(Sinistcha)
        OVERWORLD(
            sPicTable_Sinistcha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Sinistcha,
            gShinyOverworldPalette_Sinistcha
        )
    },
#endif //P_FAMILY_POLTCHAGEIST

#if P_FAMILY_OKIDOGI
    [SPECIES_OKIDOGI] =
    {
        .frontPic = gMonFrontPic_Okidogi,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Okidogi,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Okidogi,
    #endif
        .palette = gMonPalette_Okidogi,
        .shinyPalette = gMonShinyPalette_Okidogi,
        .iconSprite = gMonIcon_Okidogi,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Okidogi)
        OVERWORLD(
            sPicTable_Okidogi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Okidogi,
            gShinyOverworldPalette_Okidogi
        )
    },
#endif //P_FAMILY_OKIDOGI

#if P_FAMILY_MUNKIDORI
    [SPECIES_MUNKIDORI] =
    {
        .frontPic = gMonFrontPic_Munkidori,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Munkidori,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Munkidori,
    #endif
        .palette = gMonPalette_Munkidori,
        .shinyPalette = gMonShinyPalette_Munkidori,
        .iconSprite = gMonIcon_Munkidori,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 8, SHADOW_SIZE_S)
        FOOTPRINT(Munkidori)
        OVERWORLD(
            sPicTable_Munkidori,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Munkidori,
            gShinyOverworldPalette_Munkidori
        )
    },
#endif //P_FAMILY_MUNKIDORI

#if P_FAMILY_FEZANDIPITI
    [SPECIES_FEZANDIPITI] =
    {
        .frontPic = gMonFrontPic_Fezandipiti,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fezandipiti,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Fezandipiti,
    #endif
        .palette = gMonPalette_Fezandipiti,
        .shinyPalette = gMonShinyPalette_Fezandipiti,
        .iconSprite = gMonIcon_Fezandipiti,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Fezandipiti)
        OVERWORLD(
            sPicTable_Fezandipiti,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fezandipiti,
            gShinyOverworldPalette_Fezandipiti
        )
    },
#endif //P_FAMILY_FEZANDIPITI

#if P_FAMILY_OGERPON
#if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
    #define OGERPON_EGG_COLOR .eggPalette = gEggPalette_Ogerpon,
#else
    #define OGERPON_EGG_COLOR
#endif

#define OGERPON_SPECIES_INFO_GRAPHICS(Form1, Form2, type, ability, color, frontYOffset, iconpalette, isTeraform)    \
    {                                                                                                      \
        OGERPON_EGG_COLOR                                                                                  \
        .frontPic = gMonFrontPic_Ogerpon##Form2,                                                           \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                                           \
        .frontPicYOffset = frontYOffset,                                                                   \
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,                                                  \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                                       \
        .backPic = gMonBackPic_Ogerpon##Form2,                                                             \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                                            \
        .backPicYOffset = 0,                                                                               \
        /*.backAnimId = BACK_ANIM_NONE,*/                                                                  \
        .palette = gMonPalette_Ogerpon##Form2,                                                             \
        .shinyPalette = gMonShinyPalette_Ogerpon##Form2,                                                   \
        .iconSprite = gMonIcon_Ogerpon##Form1,                                                             \
        .iconPalIndex = iconpalette,                                                                       \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                                            \
        SHADOW(3, 12, SHADOW_SIZE_M)                                                                       \
        FOOTPRINT(Ogerpon)                                                                                 \
        OVERWORLD(                                                                                         \
            sPicTable_Ogerpon##Form2,                                                                      \
            SIZE_32x32,                                                                                    \
            SHADOW_SIZE_M,                                                                                 \
            TRACKS_FOOT,                                                                                   \
            sAnimTable_Following,                                                                          \
            gOverworldPalette_Ogerpon##Form2,                                                              \
            gShinyOverworldPalette_Ogerpon##Form2                                                          \
        )                                                                                                  \
    }

    [SPECIES_OGERPON_TEAL]             = OGERPON_SPECIES_INFO_GRAPHICS(Teal,        Teal,            TYPE_GRASS, ABILITY_DEFIANT,                        BODY_COLOR_GREEN, 2, 1, FALSE),
    [SPECIES_OGERPON_WELLSPRING]       = OGERPON_SPECIES_INFO_GRAPHICS(Wellspring,  Wellspring,      TYPE_WATER, ABILITY_WATER_ABSORB,                   BODY_COLOR_BLUE,  2, 0, FALSE),
    [SPECIES_OGERPON_HEARTHFLAME]      = OGERPON_SPECIES_INFO_GRAPHICS(Hearthflame, Hearthflame,     TYPE_FIRE,  ABILITY_MOLD_BREAKER,                   BODY_COLOR_RED,   2, 0, FALSE),
    [SPECIES_OGERPON_CORNERSTONE]      = OGERPON_SPECIES_INFO_GRAPHICS(Cornerstone, Cornerstone,     TYPE_ROCK,  ABILITY_STURDY,                         BODY_COLOR_GRAY,  2, 0, FALSE),
#if P_TERA_FORMS
    [SPECIES_OGERPON_TEAL_TERA]        = OGERPON_SPECIES_INFO_GRAPHICS(Teal,        TealTera,        TYPE_GRASS, ABILITY_EMBODY_ASPECT_TEAL_MASK,        BODY_COLOR_GREEN, 0, 1, TRUE),
    [SPECIES_OGERPON_WELLSPRING_TERA]  = OGERPON_SPECIES_INFO_GRAPHICS(Wellspring,  WellspringTera,  TYPE_WATER, ABILITY_EMBODY_ASPECT_WELLSPRING_MASK,  BODY_COLOR_BLUE,  0, 0, TRUE),
    [SPECIES_OGERPON_HEARTHFLAME_TERA] = OGERPON_SPECIES_INFO_GRAPHICS(Hearthflame, HearthflameTera, TYPE_FIRE,  ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK, BODY_COLOR_RED,   0, 0, TRUE),
    [SPECIES_OGERPON_CORNERSTONE_TERA] = OGERPON_SPECIES_INFO_GRAPHICS(Cornerstone, CornerstoneTera, TYPE_ROCK,  ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK, BODY_COLOR_GRAY,  0, 0, TRUE),
#endif //P_TERA_FORMS
#endif //P_FAMILY_OGERPON

#if P_FAMILY_GOUGING_FIRE
    [SPECIES_GOUGING_FIRE] =
    {
        .frontPic = gMonFrontPic_GougingFire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GougingFire,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_GougingFire,
    #endif
        .palette = gMonPalette_GougingFire,
        .shinyPalette = gMonShinyPalette_GougingFire,
        .iconSprite = gMonIcon_GougingFire,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 6, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(GougingFire)
        OVERWORLD(
            sPicTable_GougingFire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GougingFire,
            gShinyOverworldPalette_GougingFire
        )
    },
#endif //P_FAMILY_GOUGING_FIRE

#if P_FAMILY_RAGING_BOLT
    [SPECIES_RAGING_BOLT] =
    {
        .frontPic = gMonFrontPic_RagingBolt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_RagingBolt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_RagingBolt,
    #endif
        .palette = gMonPalette_RagingBolt,
        .shinyPalette = gMonShinyPalette_RagingBolt,
        .iconSprite = gMonIcon_RagingBolt,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(RagingBolt)
        OVERWORLD(
            sPicTable_RagingBolt,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_RagingBolt,
            gShinyOverworldPalette_RagingBolt
        )
    },
#endif //P_FAMILY_RAGING_BOLT

#if P_FAMILY_IRON_BOULDER
    [SPECIES_IRON_BOULDER] =
    {
        .frontPic = gMonFrontPic_IronBoulder,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronBoulder,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronBoulder,
    #endif
        .palette = gMonPalette_IronBoulder,
        .shinyPalette = gMonShinyPalette_IronBoulder,
        .iconSprite = gMonIcon_IronBoulder,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 7, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(IronBoulder)
        OVERWORLD(
            sPicTable_IronBoulder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronBoulder,
            gShinyOverworldPalette_IronBoulder
        )
    },
#endif //P_FAMILY_IRON_BOULDER

#if P_FAMILY_IRON_CROWN
    [SPECIES_IRON_CROWN] =
    {
        .frontPic = gMonFrontPic_IronCrown,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_IronCrown,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_IronCrown,
    #endif
        .palette = gMonPalette_IronCrown,
        .shinyPalette = gMonShinyPalette_IronCrown,
        .iconSprite = gMonIcon_IronCrown,
        .iconPalIndex = 3,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_L)
        FOOTPRINT(IronCrown)
        OVERWORLD(
            sPicTable_IronCrown,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_IronCrown,
            gShinyOverworldPalette_IronCrown
        )
    },
#endif //P_FAMILY_IRON_CROWN

#if P_FAMILY_TERAPAGOS
    [SPECIES_TERAPAGOS_NORMAL] =
    {
        .frontPic = gMonFrontPic_TerapagosNormal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TerapagosNormal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Terapagos,
    #endif
        .palette = gMonPalette_TerapagosNormal,
        .shinyPalette = gMonShinyPalette_TerapagosNormal,
        .iconSprite = gMonIcon_TerapagosNormal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 2, SHADOW_SIZE_M)
        FOOTPRINT(TerapagosNormal)
        OVERWORLD(
            sPicTable_TerapagosNormal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TerapagosNormal,
            gShinyOverworldPalette_TerapagosNormal
        )
    },

    [SPECIES_TERAPAGOS_TERASTAL] =
    {
        .frontPic = gMonFrontPic_TerapagosTerastal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_TerapagosTerastal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Terapagos,
    #endif
        .palette = gMonPalette_TerapagosTerastal,
        .shinyPalette = gMonShinyPalette_TerapagosTerastal,
        .iconSprite = gMonIcon_TerapagosTerastal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-4, 8, SHADOW_SIZE_L)
        FOOTPRINT(TerapagosTerastal)
        OVERWORLD(
            sPicTable_TerapagosTerastal,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_TerapagosTerastal,
            gShinyOverworldPalette_TerapagosTerastal
        )
    },

    [SPECIES_TERAPAGOS_STELLAR] =
    {
        .frontPic = gMonFrontPic_TerapagosStellar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TerapagosStellar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Terapagos,
    #endif
        .palette = gMonPalette_TerapagosStellar,
        .shinyPalette = gMonShinyPalette_TerapagosStellar,
        .iconSprite = gMonIcon_TerapagosStellar,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_L)
        FOOTPRINT(TerapagosStellar)
    },
#endif //P_FAMILY_TERAPAGOS

#if P_FAMILY_PECHARUNT
    [SPECIES_PECHARUNT] =
    {
        .frontPic = gMonFrontPic_Pecharunt,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Pecharunt,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_9_EGG_COLORS
        .eggPalette = gEggPalette_Pecharunt,
    #endif
        .palette = gMonPalette_Pecharunt,
        .shinyPalette = gMonShinyPalette_Pecharunt,
        .iconSprite = gMonIcon_Pecharunt,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 1, SHADOW_SIZE_L)
        FOOTPRINT(Pecharunt)
        OVERWORLD(
            sPicTable_Pecharunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pecharunt,
            gShinyOverworldPalette_Pecharunt
        )
    },
#endif //P_FAMILY_PECHARUNT

#ifdef __INTELLISENSE__
};
#endif
