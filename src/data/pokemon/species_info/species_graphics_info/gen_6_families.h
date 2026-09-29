#ifdef __INTELLISENSE__
const struct SpeciesGraphicsInfo gSpeciesGraphicsInfoGen6[] =
{
#endif

#if P_FAMILY_CHESPIN
    [SPECIES_CHESPIN] =
    {
        .frontPic = gMonFrontPic_Chespin,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 24),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Chespin,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Chespin,
    #endif
        .palette = gMonPalette_Chespin,
        .shinyPalette = gMonShinyPalette_Chespin,
        .iconSprite = gMonIcon_Chespin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Chespin)
        OVERWORLD(
            sPicTable_Chespin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chespin,
            gShinyOverworldPalette_Chespin
        )
    },

    [SPECIES_QUILLADIN] =
    {
        .frontPic = gMonFrontPic_Quilladin,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Quilladin,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Chespin,
    #endif
        .palette = gMonPalette_Quilladin,
        .shinyPalette = gMonShinyPalette_Quilladin,
        .iconSprite = gMonIcon_Quilladin,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 4, SHADOW_SIZE_M)
        FOOTPRINT(Quilladin)
        OVERWORLD(
            sPicTable_Quilladin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Quilladin,
            gShinyOverworldPalette_Quilladin
        )
    },

    [SPECIES_CHESNAUGHT] =
    {
        .frontPic = gMonFrontPic_Chesnaught,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_Chesnaught,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Chespin,
    #endif
        .palette = gMonPalette_Chesnaught,
        .shinyPalette = gMonShinyPalette_Chesnaught,
        .iconSprite = gMonIcon_Chesnaught,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 10, SHADOW_SIZE_L)
        FOOTPRINT(Chesnaught)
        OVERWORLD(
            sPicTable_Chesnaught,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Chesnaught,
            gShinyOverworldPalette_Chesnaught
        )
    },
    [SPECIES_CHESNAUGHT_MEGA] =
    {
        .frontPic = gMonFrontPic_ChesnaughtMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .backPic = gMonBackPic_ChesnaughtMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Chespin,
    #endif
        .palette = gMonPalette_ChesnaughtMega,
        .shinyPalette = gMonShinyPalette_ChesnaughtMega,
        .iconSprite = gMonIcon_ChesnaughtMega,
        .iconPalIndex = 1,
    },
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
    [SPECIES_FENNEKIN] =
    {
        .frontPic = gMonFrontPic_Fennekin,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Fennekin,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Fennekin,
    #endif
        .palette = gMonPalette_Fennekin,
        .shinyPalette = gMonShinyPalette_Fennekin,
        .iconSprite = gMonIcon_Fennekin,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 4, SHADOW_SIZE_S)
        FOOTPRINT(Fennekin)
        OVERWORLD(
            sPicTable_Fennekin,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fennekin,
            gShinyOverworldPalette_Fennekin
        )
    },

    [SPECIES_BRAIXEN] =
    {
        .frontPic = gMonFrontPic_Braixen,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Braixen,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Fennekin,
    #endif
        .palette = gMonPalette_Braixen,
        .shinyPalette = gMonShinyPalette_Braixen,
        .iconSprite = gMonIcon_Braixen,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Braixen)
        OVERWORLD(
            sPicTable_Braixen,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Braixen,
            gShinyOverworldPalette_Braixen
        )
    },

    [SPECIES_DELPHOX] =
    {
        .frontPic = gMonFrontPic_Delphox,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Delphox,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Fennekin,
    #endif
        .palette = gMonPalette_Delphox,
        .shinyPalette = gMonShinyPalette_Delphox,
        .iconSprite = gMonIcon_Delphox,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(7, 14, SHADOW_SIZE_M)
        FOOTPRINT(Delphox)
        OVERWORLD(
            sPicTable_Delphox,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Delphox,
            gShinyOverworldPalette_Delphox
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DELPHOX_MEGA] =
    {
        .frontPic = gMonFrontPic_DelphoxMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_DelphoxMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Fennekin,
    #endif
        .palette = gMonPalette_DelphoxMega,
        .shinyPalette = gMonShinyPalette_DelphoxMega,
        .iconSprite = gMonIcon_DelphoxMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Delphox)
        SHADOW(-1, 18, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
    [SPECIES_FROAKIE] =
    {
        .frontPic = gMonFrontPic_Froakie,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
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
        .backPic = gMonBackPic_Froakie,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Froakie,
    #endif
        .palette = gMonPalette_Froakie,
        .shinyPalette = gMonShinyPalette_Froakie,
        .iconSprite = gMonIcon_Froakie,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Froakie)
        OVERWORLD(
            sPicTable_Froakie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Froakie,
            gShinyOverworldPalette_Froakie
        )
    },

    [SPECIES_FROGADIER] =
    {
        .frontPic = gMonFrontPic_Frogadier,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Frogadier,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Froakie,
    #endif
        .palette = gMonPalette_Frogadier,
        .shinyPalette = gMonShinyPalette_Frogadier,
        .iconSprite = gMonIcon_Frogadier,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(0, 5, SHADOW_SIZE_M)
        FOOTPRINT(Frogadier)
        OVERWORLD(
            sPicTable_Frogadier,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Frogadier,
            gShinyOverworldPalette_Frogadier
        )
    },

    [SPECIES_GRENINJA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Greninja,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Greninja,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Greninja,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Froakie,
    #endif
        .palette = gMonPalette_Greninja,
        .shinyPalette = gMonShinyPalette_Greninja,
        .iconSprite = gMonIcon_Greninja,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
        OVERWORLD(
            sPicTable_Greninja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Greninja,
            gShinyOverworldPalette_Greninja
        )
    },

    [SPECIES_GRENINJA_BATTLE_BOND] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Greninja,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames =sAnims_Greninja,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Greninja,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Froakie,
    #endif
        .palette = gMonPalette_Greninja,
        .shinyPalette = gMonShinyPalette_Greninja,
        .iconSprite = gMonIcon_Greninja,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 6, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
        OVERWORLD(
            sPicTable_Greninja,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Greninja,
            gShinyOverworldPalette_Greninja
        )
    },

    [SPECIES_GRENINJA_ASH] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_GreninjaAsh,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_GreninjaAsh,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Froakie,
    #endif
        .palette = gMonPalette_GreninjaAsh,
        .shinyPalette = gMonShinyPalette_GreninjaAsh,
        .iconSprite = gMonIcon_GreninjaAsh,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 10, SHADOW_SIZE_L)
        FOOTPRINT(Greninja)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_GreninjaAsh,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GreninjaAsh,
            gShinyOverworldPalette_GreninjaAsh
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GRENINJA_MEGA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_GreninjaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_GreninjaMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Froakie,
    #endif
        .palette = gMonPalette_GreninjaMega,
        .shinyPalette = gMonShinyPalette_GreninjaMega,
        .iconSprite = gMonIcon_GreninjaMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Greninja)
        SHADOW(-1, 18, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_BUNNELBY
    [SPECIES_BUNNELBY] =
    {
        .frontPic = gMonFrontPic_Bunnelby,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Bunnelby,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Bunnelby,
    #endif
        .palette = gMonPalette_Bunnelby,
        .shinyPalette = gMonShinyPalette_Bunnelby,
        .iconSprite = gMonIcon_Bunnelby,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(3, 9, SHADOW_SIZE_S)
        FOOTPRINT(Bunnelby)
        OVERWORLD(
            sPicTable_Bunnelby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bunnelby,
            gShinyOverworldPalette_Bunnelby
        )
    },

    [SPECIES_DIGGERSBY] =
    {
        .frontPic = gMonFrontPic_Diggersby,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Diggersby,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Bunnelby,
    #endif
        .palette = gMonPalette_Diggersby,
        .shinyPalette = gMonShinyPalette_Diggersby,
        .iconSprite = gMonIcon_Diggersby,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 10, SHADOW_SIZE_M)
        FOOTPRINT(Diggersby)
        OVERWORLD(
            sPicTable_Diggersby,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Diggersby,
            gShinyOverworldPalette_Diggersby
        )
    },
#endif //P_FAMILY_BUNNELBY

#if P_FAMILY_FLETCHLING
    [SPECIES_FLETCHLING] =
    {
        .frontPic = gMonFrontPic_Fletchling,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 7),
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Fletchling,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Fletchling,
    #endif
        .palette = gMonPalette_Fletchling,
        .shinyPalette = gMonShinyPalette_Fletchling,
        .iconSprite = gMonIcon_Fletchling,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 0, SHADOW_SIZE_S)
        FOOTPRINT(Fletchling)
        OVERWORLD(
            sPicTable_Fletchling,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fletchling,
            gShinyOverworldPalette_Fletchling
        )
    },

    [SPECIES_FLETCHINDER] =
    {
        .frontPic = gMonFrontPic_Fletchinder,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 30),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Fletchinder,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Fletchling,
    #endif
        .palette = gMonPalette_Fletchinder,
        .shinyPalette = gMonShinyPalette_Fletchinder,
        .iconSprite = gMonIcon_Fletchinder,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Fletchinder)
        OVERWORLD(
            sPicTable_Fletchinder,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Fletchinder,
            gShinyOverworldPalette_Fletchinder
        )
    },

    [SPECIES_TALONFLAME] =
    {
        .frontPic = gMonFrontPic_Talonflame,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 55),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 7,
        .backPic = gMonBackPic_Talonflame,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Fletchling,
    #endif
        .palette = gMonPalette_Talonflame,
        .shinyPalette = gMonShinyPalette_Talonflame,
        .iconSprite = gMonIcon_Talonflame,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 17, SHADOW_SIZE_M)
        FOOTPRINT(Talonflame)
        OVERWORLD(
            sPicTable_Talonflame,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Talonflame,
            gShinyOverworldPalette_Talonflame
        )
    },
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
#if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
    #define SCATTERBUG_EGG_COLOR .eggPalette = gEggPalette_Scatterbug,
#else
    #define SCATTERBUG_EGG_COLOR
#endif

#define SCATTERBUG_SPECIES_INFO_GRAPHICS(evolution)                                                  \
    {                                                                                       \
        SCATTERBUG_EGG_COLOR                                                                \
        .frontPic = gMonFrontPic_Scatterbug,                                                \
        .frontPicSize = MON_COORDS_SIZE(32, 48),                                            \
        .frontPicYOffset = 13,                                                              \
        .frontAnimFrames = sAnims_Scatterbug,                                               \
        .frontAnimId = ANIM_V_STRETCH,                                                      \
        .backPic = gMonBackPic_Scatterbug,                                                  \
        .backPicSize = MON_COORDS_SIZE(40, 56),                                             \
        .backPicYOffset = 12,                                                               \
        .backAnimId = BACK_ANIM_H_SLIDE,                                                    \
        .palette = gMonPalette_Scatterbug,                                                  \
        .shinyPalette = gMonShinyPalette_Scatterbug,                                        \
        .iconSprite = gMonIcon_Scatterbug,                                                  \
        .iconPalIndex = 1,                                                                  \
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,                                             \
        SHADOW(1, 1, SHADOW_SIZE_S)                                                         \
        FOOTPRINT(Scatterbug)                                                               \
        OVERWORLD(                                                                          \
            sPicTable_Scatterbug,                                                           \
            SIZE_32x32,                                                                     \
            SHADOW_SIZE_M,                                                                  \
            TRACKS_FOOT,                                                                    \
            sAnimTable_Following,                                                           \
            gOverworldPalette_Scatterbug,                                                   \
            gShinyOverworldPalette_Scatterbug                                               \
        )                                                                                   \
    }                                                                                       \

    [SPECIES_SCATTERBUG_ICY_SNOW]    = SCATTERBUG_SPECIES_INFO_GRAPHICS(ICY_SNOW),
    [SPECIES_SCATTERBUG_POLAR]       = SCATTERBUG_SPECIES_INFO_GRAPHICS(POLAR),
    [SPECIES_SCATTERBUG_TUNDRA]      = SCATTERBUG_SPECIES_INFO_GRAPHICS(TUNDRA),
    [SPECIES_SCATTERBUG_CONTINENTAL] = SCATTERBUG_SPECIES_INFO_GRAPHICS(CONTINENTAL),
    [SPECIES_SCATTERBUG_GARDEN]      = SCATTERBUG_SPECIES_INFO_GRAPHICS(GARDEN),
    [SPECIES_SCATTERBUG_ELEGANT]     = SCATTERBUG_SPECIES_INFO_GRAPHICS(ELEGANT),
    [SPECIES_SCATTERBUG_MEADOW]      = SCATTERBUG_SPECIES_INFO_GRAPHICS(MEADOW),
    [SPECIES_SCATTERBUG_MODERN]      = SCATTERBUG_SPECIES_INFO_GRAPHICS(MODERN),
    [SPECIES_SCATTERBUG_MARINE]      = SCATTERBUG_SPECIES_INFO_GRAPHICS(MARINE),
    [SPECIES_SCATTERBUG_ARCHIPELAGO] = SCATTERBUG_SPECIES_INFO_GRAPHICS(ARCHIPELAGO),
    [SPECIES_SCATTERBUG_HIGH_PLAINS] = SCATTERBUG_SPECIES_INFO_GRAPHICS(HIGH_PLAINS),
    [SPECIES_SCATTERBUG_SANDSTORM]   = SCATTERBUG_SPECIES_INFO_GRAPHICS(SANDSTORM),
    [SPECIES_SCATTERBUG_RIVER]       = SCATTERBUG_SPECIES_INFO_GRAPHICS(RIVER),
    [SPECIES_SCATTERBUG_MONSOON]     = SCATTERBUG_SPECIES_INFO_GRAPHICS(MONSOON),
    [SPECIES_SCATTERBUG_SAVANNA]     = SCATTERBUG_SPECIES_INFO_GRAPHICS(SAVANNA),
    [SPECIES_SCATTERBUG_SUN]         = SCATTERBUG_SPECIES_INFO_GRAPHICS(SUN),
    [SPECIES_SCATTERBUG_OCEAN]       = SCATTERBUG_SPECIES_INFO_GRAPHICS(OCEAN),
    [SPECIES_SCATTERBUG_JUNGLE]      = SCATTERBUG_SPECIES_INFO_GRAPHICS(JUNGLE),
    [SPECIES_SCATTERBUG_FANCY]       = SCATTERBUG_SPECIES_INFO_GRAPHICS(FANCY),
    [SPECIES_SCATTERBUG_POKEBALL]    = SCATTERBUG_SPECIES_INFO_GRAPHICS(POKEBALL),

#define SPEWPA_SPECIES_INFO_GRAPHICS(evolution)                                          \
    {                                                                           \
        SCATTERBUG_EGG_COLOR                                                    \
        .frontPic = gMonFrontPic_Spewpa,                                        \
        .frontPicSize = MON_COORDS_SIZE(40, 48),                                \
        .frontPicYOffset = 11,                                                  \
        .frontAnimFrames = sAnims_Spewpa,                                       \
        .frontAnimId = ANIM_V_SHAKE,                                            \
        .backPic = gMonBackPic_Spewpa,                                          \
        .backPicSize = MON_COORDS_SIZE(48, 48),                                 \
        .backPicYOffset = 12,                                                   \
        .backAnimId = BACK_ANIM_H_VIBRATE,                                      \
        .palette = gMonPalette_Spewpa,                                          \
        .shinyPalette = gMonShinyPalette_Spewpa,                                \
        .iconSprite = gMonIcon_Spewpa,                                          \
        .iconPalIndex = 1,                                                      \
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,                               \
        SHADOW(0, 2, SHADOW_SIZE_M)                                             \
        FOOTPRINT(Spewpa)                                                       \
        OVERWORLD(                                                              \
            sPicTable_Spewpa,                                                   \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Spewpa,                                           \
            gShinyOverworldPalette_Spewpa                                       \
        )                                                                       \
    }

    [SPECIES_SPEWPA_ICY_SNOW]    = SPEWPA_SPECIES_INFO_GRAPHICS(ICY_SNOW),
    [SPECIES_SPEWPA_POLAR]       = SPEWPA_SPECIES_INFO_GRAPHICS(POLAR),
    [SPECIES_SPEWPA_TUNDRA]      = SPEWPA_SPECIES_INFO_GRAPHICS(TUNDRA),
    [SPECIES_SPEWPA_CONTINENTAL] = SPEWPA_SPECIES_INFO_GRAPHICS(CONTINENTAL),
    [SPECIES_SPEWPA_GARDEN]      = SPEWPA_SPECIES_INFO_GRAPHICS(GARDEN),
    [SPECIES_SPEWPA_ELEGANT]     = SPEWPA_SPECIES_INFO_GRAPHICS(ELEGANT),
    [SPECIES_SPEWPA_MEADOW]      = SPEWPA_SPECIES_INFO_GRAPHICS(MEADOW),
    [SPECIES_SPEWPA_MODERN]      = SPEWPA_SPECIES_INFO_GRAPHICS(MODERN),
    [SPECIES_SPEWPA_MARINE]      = SPEWPA_SPECIES_INFO_GRAPHICS(MARINE),
    [SPECIES_SPEWPA_ARCHIPELAGO] = SPEWPA_SPECIES_INFO_GRAPHICS(ARCHIPELAGO),
    [SPECIES_SPEWPA_HIGH_PLAINS] = SPEWPA_SPECIES_INFO_GRAPHICS(HIGH_PLAINS),
    [SPECIES_SPEWPA_SANDSTORM]   = SPEWPA_SPECIES_INFO_GRAPHICS(SANDSTORM),
    [SPECIES_SPEWPA_RIVER]       = SPEWPA_SPECIES_INFO_GRAPHICS(RIVER),
    [SPECIES_SPEWPA_MONSOON]     = SPEWPA_SPECIES_INFO_GRAPHICS(MONSOON),
    [SPECIES_SPEWPA_SAVANNA]     = SPEWPA_SPECIES_INFO_GRAPHICS(SAVANNA),
    [SPECIES_SPEWPA_SUN]         = SPEWPA_SPECIES_INFO_GRAPHICS(SUN),
    [SPECIES_SPEWPA_OCEAN]       = SPEWPA_SPECIES_INFO_GRAPHICS(OCEAN),
    [SPECIES_SPEWPA_JUNGLE]      = SPEWPA_SPECIES_INFO_GRAPHICS(JUNGLE),
    [SPECIES_SPEWPA_FANCY]       = SPEWPA_SPECIES_INFO_GRAPHICS(FANCY),
    [SPECIES_SPEWPA_POKEBALL]   = SPEWPA_SPECIES_INFO_GRAPHICS(POKEBALL),

#define VIVILLON_MISC_INFO_GRAPHICS(form, color, iconPal)                                            \
        SCATTERBUG_EGG_COLOR                                                                \
        .frontPic = gMonFrontPic_Vivillon ##form,                                           \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                            \
        .frontPicYOffset = 0,                                                               \
        .frontAnimFrames = sAnims_Vivillon,                                                 \
        .frontAnimId = ANIM_ZIGZAG_SLOW,                                                    \
        .enemyMonElevation = 9,                                                             \
        .backPic = gMonBackPic_Vivillon ##form,                                             \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                             \
        .backPicYOffset = 0,                                                                \
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,                                    \
        .palette = gMonPalette_Vivillon ##form,                                             \
        .shinyPalette = gMonShinyPalette_Vivillon ##form,                                   \
        .iconSprite = gMonIcon_Vivillon ##form,                                             \
        .iconPalIndex = iconPal,                                                            \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                             \
        SHADOW(0, 20, SHADOW_SIZE_M)                                                        \
        FOOTPRINT(Vivillon)                                                                 \
        OVERWORLD(                                                                          \
            sPicTable_Vivillon ##form,                                                      \
            SIZE_32x32,                                                                     \
            SHADOW_SIZE_M,                                                                  \
            TRACKS_FOOT,                                                                    \
            sAnimTable_Following,                                                           \
            gOverworldPalette_Vivillon ##form,                                              \
            gShinyOverworldPalette_Vivillon ##form                                          \
        )

    [SPECIES_VIVILLON_ICY_SNOW] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(IcySnow, BODY_COLOR_WHITE, 0)
    },

    [SPECIES_VIVILLON_POLAR] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Polar, BODY_COLOR_BLUE, 0)
    },

    [SPECIES_VIVILLON_TUNDRA] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Tundra, BODY_COLOR_BLUE, 0)
    },

    [SPECIES_VIVILLON_CONTINENTAL] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Continental, BODY_COLOR_YELLOW, 2)
    },

    [SPECIES_VIVILLON_GARDEN] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Garden, BODY_COLOR_GREEN, 1)
    },

    [SPECIES_VIVILLON_ELEGANT] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Elegant, BODY_COLOR_PURPLE, 0)
    },

    [SPECIES_VIVILLON_MEADOW] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Meadow, BODY_COLOR_PINK, 0)
    },

    [SPECIES_VIVILLON_MODERN] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Modern, BODY_COLOR_RED, 2)
    },

    [SPECIES_VIVILLON_MARINE] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Marine, BODY_COLOR_BLUE, 0)
    },

    [SPECIES_VIVILLON_ARCHIPELAGO] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Archipelago, BODY_COLOR_BROWN, 0)
    },

    [SPECIES_VIVILLON_HIGH_PLAINS] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(HighPlains, BODY_COLOR_BROWN, 0)
    },

    [SPECIES_VIVILLON_SANDSTORM] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Sandstorm, BODY_COLOR_BROWN, 1)
    },

    [SPECIES_VIVILLON_RIVER] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(River, BODY_COLOR_BROWN, 2)
    },

    [SPECIES_VIVILLON_MONSOON] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Monsoon, BODY_COLOR_GRAY, 0)
    },

    [SPECIES_VIVILLON_SAVANNA] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Savanna, BODY_COLOR_GREEN, 0)
    },

    [SPECIES_VIVILLON_SUN] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Sun, BODY_COLOR_RED, 0)
    },

    [SPECIES_VIVILLON_OCEAN] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Ocean, BODY_COLOR_RED, 0)
    },

    [SPECIES_VIVILLON_JUNGLE] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Jungle, BODY_COLOR_GREEN, 0)
    },

    [SPECIES_VIVILLON_FANCY] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(Fancy, BODY_COLOR_PINK, 1)
    },

    [SPECIES_VIVILLON_POKEBALL] =
    {
        VIVILLON_MISC_INFO_GRAPHICS(PokeBall, BODY_COLOR_RED, 2)
    },
#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
    [SPECIES_LITLEO] =
    {
        .frontPic = gMonFrontPic_Litleo,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Litleo,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Litleo,
    #endif
        .palette = gMonPalette_Litleo,
        .shinyPalette = gMonShinyPalette_Litleo,
        .iconSprite = gMonIcon_Litleo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(2, 3, SHADOW_SIZE_S)
        FOOTPRINT(Litleo)
        OVERWORLD(
            sPicTable_Litleo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Litleo,
            gShinyOverworldPalette_Litleo
        )
    },

    [SPECIES_PYROAR] =
    {
        .frontPic = gMonFrontPic_Pyroar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Pyroar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Litleo,
    #endif
        .palette = gMonPalette_Pyroar,
        .shinyPalette = gMonShinyPalette_Pyroar,
        .iconSprite = gMonIcon_Pyroar,
        .iconPalIndex = 2,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_PyroarF,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_PyroarF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .iconSpriteFemale = gMonIcon_PyroarF,
        .iconPalIndexFemale = 2,
#endif //P_GENDER_DIFFERENCES
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 11, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pyroar)
        OVERWORLD(
            sPicTable_Pyroar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pyroar,
            gShinyOverworldPalette_Pyroar
        )
        OVERWORLD_FEMALE(
            sPicTable_PyroarF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_PYROAR_MEGA] =
    {
        .frontPic = gMonFrontPic_PyroarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_PyroarMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Litleo,
    #endif
        .palette = gMonPalette_PyroarMega,
        .shinyPalette = gMonShinyPalette_PyroarMega,
        .iconSprite = gMonIcon_PyroarMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Pyroar)
        SHADOW(-1, 12, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
#if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
    #define FLABEBE_EGG_COLOR .eggPalette = gEggPalette_Flabebe,
#else
    #define FLABEBE_EGG_COLOR
#endif

#define FLABEBE_MISC_INFO_GRAPHICS(Form, FORM, iconPal)                                  \
        FLABEBE_EGG_COLOR                                                       \
        .frontPic = gMonFrontPic_Flabebe,                                       \
        .frontPicSize = MON_COORDS_SIZE(48, 56),                                \
        .frontPicYOffset = 6,                                                   \
        .frontAnimFrames = sAnims_Flabebe,                                      \
        .frontAnimId = ANIM_H_SLIDE_SLOW,                                       \
        .enemyMonElevation = 6,                                                 \
        .backPic = gMonBackPic_Flabebe,                                         \
        .backPicSize = MON_COORDS_SIZE(64, 40),                                 \
        .backPicYOffset = 12,                                                   \
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,                              \
        .palette = gMonPalette_Flabebe##Form,                                   \
        .shinyPalette = gMonShinyPalette_Flabebe##Form,                         \
        .iconSprite = gMonIcon_Flabebe##Form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(0, 11, SHADOW_SIZE_S)                                            \
        FOOTPRINT(Flabebe)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Flabebe##Form,                                            \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Flabebe##Form,                                    \
            gShinyOverworldPalette_Flabebe##Form                                \
        )

    [SPECIES_FLABEBE_RED] =
    {
        FLABEBE_MISC_INFO_GRAPHICS(Red, RED, 1)
    },

    [SPECIES_FLABEBE_YELLOW] =
    {
        FLABEBE_MISC_INFO_GRAPHICS(Yellow, YELLOW, 1)
    },

    [SPECIES_FLABEBE_ORANGE] =
    {
        FLABEBE_MISC_INFO_GRAPHICS(Orange, ORANGE, 0)
    },

    [SPECIES_FLABEBE_BLUE]   =
    {
        FLABEBE_MISC_INFO_GRAPHICS(Blue, BLUE, 0)
    },

    [SPECIES_FLABEBE_WHITE]  =
    {
        FLABEBE_MISC_INFO_GRAPHICS(White, WHITE, 1)
    },

#define FLOETTE_MISC_INFO_GRAPHICS(form, FORM, iconPal)                                  \
        FLABEBE_EGG_COLOR                                                       \
        .frontAnimFrames = sAnims_Floette,                                      \
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,                                     \
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,                              \
        .palette = gMonPalette_Floette ##form,                                  \
        .shinyPalette = gMonShinyPalette_Floette ##form,                        \
        .iconSprite = gMonIcon_Floette##form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(-3, 12, SHADOW_SIZE_S)                                           \
        FOOTPRINT(Floette)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Floette ##form,                                           \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following_Asym,                                          \
            gOverworldPalette_Floette ##form,                                   \
            gShinyOverworldPalette_Floette ##form                               \
        )

#define FLOETTE_NORMAL_INFO_GRAPHICS(form, FORM, iconPal)                                                \
        .frontPic = gMonFrontPic_Floette,                                                       \
        .frontPicSize = MON_COORDS_SIZE(48, 64),                                                \
        .frontPicYOffset = 3,                                                                   \
        .enemyMonElevation = 4,                                                                 \
        .backPic = gMonBackPic_Floette,                                                         \
        .backPicSize = MON_COORDS_SIZE(64, 64),                                                 \
        .backPicYOffset = 2,                                                                    \
        FLOETTE_MISC_INFO_GRAPHICS(form, FORM, iconPal)

    [SPECIES_FLOETTE_RED] =
    {
        FLOETTE_NORMAL_INFO_GRAPHICS(Red, RED, 1)
    },

    [SPECIES_FLOETTE_YELLOW] =
    {
        FLOETTE_NORMAL_INFO_GRAPHICS(Yellow, YELLOW, 1)
    },

    [SPECIES_FLOETTE_ORANGE] =
    {
        FLOETTE_NORMAL_INFO_GRAPHICS(Orange, ORANGE, 0)
    },

    [SPECIES_FLOETTE_BLUE] =
    {
        FLOETTE_NORMAL_INFO_GRAPHICS(Blue, BLUE, 0)
    },

    [SPECIES_FLOETTE_WHITE] =
    {
        FLOETTE_NORMAL_INFO_GRAPHICS(White, WHITE, 1)
    },

    [SPECIES_FLOETTE_ETERNAL] =
    {
        FLOETTE_MISC_INFO_GRAPHICS(Eternal, ETERNAL, 0)
        .frontPic = gMonFrontPic_FloetteEternal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_FloetteEternal,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
    },

#define FLORGES_MISC_INFO_GRAPHICS(Form, iconPal)                                        \
        FLABEBE_EGG_COLOR                                                       \
        .frontPic = gMonFrontPic_Florges,                                       \
        .frontPicSize = MON_COORDS_SIZE(64, 64),                                \
        .frontPicYOffset = 0,                                                   \
        .frontAnimFrames = sAnims_Florges,                                      \
        .frontAnimId = ANIM_V_SLIDE_SLOW,                                       \
        .backPic = gMonBackPic_Florges,                                         \
        .backPicSize = MON_COORDS_SIZE(64, 48),                                 \
        .backPicYOffset = 9,                                                    \
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                            \
        .palette = gMonPalette_Florges##Form,                                   \
        .shinyPalette = gMonShinyPalette_Florges##Form,                         \
        .iconSprite = gMonIcon_Florges##Form,                                   \
        .iconPalIndex = iconPal,                                                \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                 \
        SHADOW(-5, 15, SHADOW_SIZE_M)                                           \
        FOOTPRINT(Florges)                                                      \
        OVERWORLD(                                                              \
            sPicTable_Florges ##Form,                                           \
            SIZE_32x32,                                                         \
            SHADOW_SIZE_M,                                                      \
            TRACKS_FOOT,                                                        \
            sAnimTable_Following,                                               \
            gOverworldPalette_Florges ##Form,                                   \
            gShinyOverworldPalette_Florges ##Form                               \
        )

    [SPECIES_FLORGES_RED] =
    {
        FLORGES_MISC_INFO_GRAPHICS(Red, 0)
    },

    [SPECIES_FLORGES_YELLOW] =
    {
        FLORGES_MISC_INFO_GRAPHICS(Yellow, 1)
    },

    [SPECIES_FLORGES_ORANGE] =
    {
        FLORGES_MISC_INFO_GRAPHICS(Orange, 0)
    },

    [SPECIES_FLORGES_BLUE] =
    {
        FLORGES_MISC_INFO_GRAPHICS(Blue, 0)
    },

    [SPECIES_FLORGES_WHITE] =
    {
        FLORGES_MISC_INFO_GRAPHICS(White, 0)
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FLOETTE_MEGA] =
    {
        .frontPic = gMonFrontPic_FloetteMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_FloetteMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Flabebe,
    #endif
        .palette = gMonPalette_FloetteMega,
        .shinyPalette = gMonShinyPalette_FloetteMega,
        .iconSprite = gMonIcon_FloetteMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Floette)
        SHADOW(10, 10, SHADOW_SIZE_S)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
    [SPECIES_SKIDDO] =
    {
        .frontPic = gMonFrontPic_Skiddo,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Skiddo,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Skiddo,
    #endif
        .palette = gMonPalette_Skiddo,
        .shinyPalette = gMonShinyPalette_Skiddo,
        .iconSprite = gMonIcon_Skiddo,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 7, SHADOW_SIZE_M)
        FOOTPRINT(Skiddo)
        OVERWORLD(
            sPicTable_Skiddo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skiddo,
            gShinyOverworldPalette_Skiddo
        )
    },

    [SPECIES_GOGOAT] =
    {
        .frontPic = gMonFrontPic_Gogoat,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Gogoat,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Skiddo,
    #endif
        .palette = gMonPalette_Gogoat,
        .shinyPalette = gMonShinyPalette_Gogoat,
        .iconSprite = gMonIcon_Gogoat,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 9, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Gogoat)
        OVERWORLD(
            sPicTable_Gogoat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gogoat,
            gShinyOverworldPalette_Gogoat
        )
    },
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
    [SPECIES_PANCHAM] =
    {
        .frontPic = gMonFrontPic_Pancham,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Pancham,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pancham,
    #endif
        .palette = gMonPalette_Pancham,
        .shinyPalette = gMonShinyPalette_Pancham,
        .iconSprite = gMonIcon_Pancham,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pancham)
        OVERWORLD(
            sPicTable_Pancham,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pancham,
            gShinyOverworldPalette_Pancham
        )
    },

    [SPECIES_PANGORO] =
    {
        .frontPic = gMonFrontPic_Pangoro,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Pangoro,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pancham,
    #endif
        .palette = gMonPalette_Pangoro,
        .shinyPalette = gMonShinyPalette_Pangoro,
        .iconSprite = gMonIcon_Pangoro,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Pangoro)
        OVERWORLD(
            sPicTable_Pangoro,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pangoro,
            gShinyOverworldPalette_Pangoro
        )
    },
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
#if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
    #define FURFROU_EGG_COLOR .eggPalette = gEggPalette_Furfrou,
#else
    #define FURFROU_EGG_COLOR
#endif

#define FURFROU_MISC_INFO_GRAPHICS(_form, _noFlip, frontWidth, frontYOffset, backWidth, backYOffset, _iconIdx, _overworldAnim)   \
    {                                                                                                                   \
        FURFROU_EGG_COLOR                                                                                               \
        .noFlip = _noFlip,                                                                                              \
        .frontPic = gMonFrontPic_Furfrou##_form,                                                                        \
        .frontPicSize = MON_COORDS_SIZE(frontWidth, 64),                                                                \
        .frontPicYOffset = frontYOffset,                                                                                \
        .frontAnimFrames = sAnims_Furfrou,                                                                              \
        .frontAnimId = ANIM_H_SLIDE,                                                                                    \
        .backPic = gMonBackPic_Furfrou##_form,                                                                          \
        .backPicSize = MON_COORDS_SIZE(backWidth, 64),                                                                  \
        .backPicYOffset = backYOffset,                                                                                  \
        .backAnimId = BACK_ANIM_V_STRETCH,                                                                              \
        .palette = gMonPalette_Furfrou##_form,                                                                          \
        .shinyPalette = gMonShinyPalette_Furfrou##_form,                                                                \
        .iconSprite = gMonIcon_Furfrou##_form,                                                                          \
        .iconPalIndex = _iconIdx,                                                                                       \
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,                                                                         \
        SHADOW(3, 10, SHADOW_SIZE_XL_BATTLE_ONLY)                                                                       \
        FOOTPRINT(Furfrou)                                                                                              \
        OVERWORLD(                                                                                                      \
            sPicTable_Furfrou##_form,                                                                                   \
            SIZE_32x32,                                                                                                 \
            SHADOW_SIZE_M,                                                                                              \
            TRACKS_FOOT,                                                                                                \
            _overworldAnim,                                                                                       \
            gOverworldPalette_Furfrou##_form,                                                                           \
            gShinyOverworldPalette_Furfrou##_form                                                                       \
        )                                                                                                               \
    }

    [SPECIES_FURFROU_NATURAL]   = FURFROU_MISC_INFO_GRAPHICS(Natural,   FALSE, 48, 3, 56, 0, 0, sAnimTable_Following),
    [SPECIES_FURFROU_HEART]     = FURFROU_MISC_INFO_GRAPHICS(Heart,     FALSE, 56, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_STAR]      = FURFROU_MISC_INFO_GRAPHICS(Star,      FALSE, 56, 2, 64, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_DIAMOND]   = FURFROU_MISC_INFO_GRAPHICS(Diamond,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_DEBUTANTE] = FURFROU_MISC_INFO_GRAPHICS(Debutante, TRUE,  48, 2, 56, 1, 2, sAnimTable_Following_Asym),
    [SPECIES_FURFROU_MATRON]    = FURFROU_MISC_INFO_GRAPHICS(Matron,    FALSE, 48, 2, 56, 1, 2, sAnimTable_Following),
    [SPECIES_FURFROU_DANDY]     = FURFROU_MISC_INFO_GRAPHICS(Dandy,     FALSE, 48, 2, 56, 1, 1, sAnimTable_Following),
    [SPECIES_FURFROU_LA_REINE]  = FURFROU_MISC_INFO_GRAPHICS(LaReine,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_KABUKI]    = FURFROU_MISC_INFO_GRAPHICS(Kabuki,    FALSE, 56, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_PHARAOH]   = FURFROU_MISC_INFO_GRAPHICS(Pharaoh,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
    [SPECIES_ESPURR] =
    {
        .frontPic = gMonFrontPic_Espurr,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 10,
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
        .backPic = gMonBackPic_Espurr,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Espurr,
    #endif
        .palette = gMonPalette_Espurr,
        .shinyPalette = gMonShinyPalette_Espurr,
        .iconSprite = gMonIcon_Espurr,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Espurr)
        OVERWORLD(
            sPicTable_Espurr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Espurr,
            gShinyOverworldPalette_Espurr
        )
    },

    [SPECIES_MEOWSTIC_M] =
    {
        .frontPic = gMonFrontPic_MeowsticM,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Meowstic,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_MeowsticM,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Espurr,
    #endif
        .palette = gMonPalette_MeowsticM,
        .shinyPalette = gMonShinyPalette_MeowsticM,
        .iconSprite = gMonIcon_MeowsticM,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 11, SHADOW_SIZE_S)
        FOOTPRINT(Meowstic)
        OVERWORLD(
            sPicTable_MeowsticM,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MeowsticM,
            gShinyOverworldPalette_MeowsticM
        )
    },

    [SPECIES_MEOWSTIC_F] =
    {
        .frontPic = gMonFrontPic_MeowsticF,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Meowstic,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_MeowsticF,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Espurr,
    #endif
        .palette = gMonPalette_MeowsticF,
        .shinyPalette = gMonShinyPalette_MeowsticF,
        .iconSprite = gMonIcon_MeowsticF,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 12, SHADOW_SIZE_S)
        FOOTPRINT(Meowstic)
        OVERWORLD(
            sPicTable_MeowsticF,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_MeowsticF,
            gShinyOverworldPalette_MeowsticF
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MEOWSTIC_M_MEGA] =
    {
        .frontPic = gMonFrontPic_MeowsticMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MeowsticMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Espurr,
    #endif
        .palette = gMonPalette_MeowsticMega,
        .shinyPalette = gMonShinyPalette_MeowsticMega,
        .iconSprite = gMonIcon_MeowsticMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Meowstic)
        SHADOW(-3, 18, SHADOW_SIZE_S)
    },

    [SPECIES_MEOWSTIC_F_MEGA] =
    {
        .frontPic = gMonFrontPic_MeowsticMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_MeowsticMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Espurr,
    #endif
        .palette = gMonPalette_MeowsticMega,
        .shinyPalette = gMonShinyPalette_MeowsticMega,
        .iconSprite = gMonIcon_MeowsticMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Meowstic)
        SHADOW(-3, 18, SHADOW_SIZE_S)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
    [SPECIES_HONEDGE] =
    {
        .frontPic = gMonFrontPic_Honedge,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Honedge,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Honedge,
    #endif
        .palette = gMonPalette_Honedge,
        .shinyPalette = gMonShinyPalette_Honedge,
        .iconSprite = gMonIcon_Honedge,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-10, 11, SHADOW_SIZE_S)
        FOOTPRINT(Honedge)
        OVERWORLD(
            sPicTable_Honedge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Honedge,
            gShinyOverworldPalette_Honedge
        )
    },

    [SPECIES_DOUBLADE] =
    {
        .frontPic = gMonFrontPic_Doublade,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Doublade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Honedge,
    #endif
        .palette = gMonPalette_Doublade,
        .shinyPalette = gMonShinyPalette_Doublade,
        .iconSprite = gMonIcon_Doublade,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(8, 11, SHADOW_SIZE_M)
        FOOTPRINT(Doublade)
        OVERWORLD(
            sPicTable_Doublade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Doublade,
            gShinyOverworldPalette_Doublade
        )
    },

    [SPECIES_AEGISLASH_SHIELD] =
    {
        .frontPic = gMonFrontPic_AegislashShield,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_AegislashShield,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Honedge,
    #endif
        .palette = gMonPalette_AegislashShield,
        .shinyPalette = gMonShinyPalette_AegislashShield,
        .iconSprite = gMonIcon_AegislashShield,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Aegislash)
        OVERWORLD(
            sPicTable_AegislashShield,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_AegislashShield,
            gShinyOverworldPalette_AegislashShield
        )
    },

    [SPECIES_AEGISLASH_BLADE] =
    {
        .frontPic = gMonFrontPic_AegislashBlade,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_AegislashBlade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Honedge,
    #endif
        .palette = gMonPalette_AegislashBlade,
        .shinyPalette = gMonShinyPalette_AegislashBlade,
        .iconSprite = gMonIcon_AegislashBlade,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 14, SHADOW_SIZE_M)
        FOOTPRINT(Aegislash)
    },
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
    [SPECIES_SPRITZEE] =
    {
        .frontPic = gMonFrontPic_Spritzee,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Spritzee,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Spritzee,
    #endif
        .palette = gMonPalette_Spritzee,
        .shinyPalette = gMonShinyPalette_Spritzee,
        .iconSprite = gMonIcon_Spritzee,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_S)
        FOOTPRINT(Spritzee)
        OVERWORLD(
            sPicTable_Spritzee,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Spritzee,
            gShinyOverworldPalette_Spritzee
        )
    },

    [SPECIES_AROMATISSE] =
    {
        .frontPic = gMonFrontPic_Aromatisse,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Aromatisse,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Spritzee,
    #endif
        .palette = gMonPalette_Aromatisse,
        .shinyPalette = gMonShinyPalette_Aromatisse,
        .iconSprite = gMonIcon_Aromatisse,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 10, SHADOW_SIZE_M)
        FOOTPRINT(Aromatisse)
        OVERWORLD(
            sPicTable_Aromatisse,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aromatisse,
            gShinyOverworldPalette_Aromatisse
        )
    },
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
    [SPECIES_SWIRLIX] =
    {
        .frontPic = gMonFrontPic_Swirlix,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
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
        .backPic = gMonBackPic_Swirlix,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SPRING,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Swirlix,
    #endif
        .palette = gMonPalette_Swirlix,
        .shinyPalette = gMonShinyPalette_Swirlix,
        .iconSprite = gMonIcon_Swirlix,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, -1, SHADOW_SIZE_S)
        FOOTPRINT(Swirlix)
        OVERWORLD(
            sPicTable_Swirlix,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Swirlix,
            gShinyOverworldPalette_Swirlix
        )
    },

    [SPECIES_SLURPUFF] =
    {
        .frontPic = gMonFrontPic_Slurpuff,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Slurpuff,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Swirlix,
    #endif
        .palette = gMonPalette_Slurpuff,
        .shinyPalette = gMonShinyPalette_Slurpuff,
        .iconSprite = gMonIcon_Slurpuff,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_M)
        FOOTPRINT(Slurpuff)
        OVERWORLD(
            sPicTable_Slurpuff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Slurpuff,
            gShinyOverworldPalette_Slurpuff
        )
    },
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
    [SPECIES_INKAY] =
    {
        .frontPic = gMonFrontPic_Inkay,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Inkay,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Inkay,
    #endif
        .palette = gMonPalette_Inkay,
        .shinyPalette = gMonShinyPalette_Inkay,
        .iconSprite = gMonIcon_Inkay,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_S)
        FOOTPRINT(Inkay)
        OVERWORLD(
            sPicTable_Inkay,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Inkay,
            gShinyOverworldPalette_Inkay
        )
    },

    [SPECIES_INKAY_FLIPPED] =
    {
        .frontPic = gMonFrontPic_InkayFlipped,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 25),
        ),
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_InkayFlipped,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Inkay,
    #endif
        .palette = gMonPalette_Inkay,
        .shinyPalette = gMonShinyPalette_Inkay,
        .iconSprite = gMonIcon_InkayFlipped,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 11, SHADOW_SIZE_S)
        FOOTPRINT(Inkay)
        OVERWORLD(
            sPicTable_InkayFlipped,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Inkay,
            gShinyOverworldPalette_Inkay
        )
    },

    [SPECIES_MALAMAR] =
    {
        .frontPic = gMonFrontPic_Malamar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        .backPic = gMonBackPic_Malamar,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Inkay,
    #endif
        .palette = gMonPalette_Malamar,
        .shinyPalette = gMonShinyPalette_Malamar,
        .iconSprite = gMonIcon_Malamar,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 14, SHADOW_SIZE_M)
        FOOTPRINT(Malamar)
        OVERWORLD(
            sPicTable_Malamar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Malamar,
            gShinyOverworldPalette_Malamar
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MALAMAR_MEGA] =
    {
        .frontPic = gMonFrontPic_MalamarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_MalamarMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Inkay,
    #endif
        .palette = gMonPalette_MalamarMega,
        .shinyPalette = gMonShinyPalette_MalamarMega,
        .iconSprite = gMonIcon_MalamarMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Malamar)
        SHADOW(15, 15, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
    [SPECIES_BINACLE] =
    {
        .frontPic = gMonFrontPic_Binacle,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Binacle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Binacle,
    #endif
        .palette = gMonPalette_Binacle,
        .shinyPalette = gMonShinyPalette_Binacle,
        .iconSprite = gMonIcon_Binacle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-3, 5, SHADOW_SIZE_M)
        FOOTPRINT(Binacle)
        OVERWORLD(
            sPicTable_Binacle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Binacle,
            gShinyOverworldPalette_Binacle
        )
    },

    [SPECIES_BARBARACLE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Barbaracle,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Barbaracle,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Binacle,
    #endif
        .palette = gMonPalette_Barbaracle,
        .shinyPalette = gMonShinyPalette_Barbaracle,
        .iconSprite = gMonIcon_Barbaracle,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_L)
        FOOTPRINT(Barbaracle)
        OVERWORLD(
            sPicTable_Barbaracle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Barbaracle,
            gShinyOverworldPalette_Barbaracle
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_BARBARACLE_MEGA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_BarbaracleMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_BarbaracleMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Binacle,
    #endif
        .palette = gMonPalette_BarbaracleMega,
        .shinyPalette = gMonShinyPalette_BarbaracleMega,
        .iconSprite = gMonIcon_BarbaracleMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Barbaracle)
        SHADOW(-1, 14, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
    [SPECIES_SKRELP] =
    {
        .frontPic = gMonFrontPic_Skrelp,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
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
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Skrelp,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Skrelp,
    #endif
        .palette = gMonPalette_Skrelp,
        .shinyPalette = gMonShinyPalette_Skrelp,
        .iconSprite = gMonIcon_Skrelp,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 5, SHADOW_SIZE_S)
        FOOTPRINT(Skrelp)
        OVERWORLD(
            sPicTable_Skrelp,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Skrelp,
            gShinyOverworldPalette_Skrelp
        )
    },

    [SPECIES_DRAGALGE] =
    {
        .frontPic = gMonFrontPic_Dragalge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FRONT_FLIP,
        .backPic = gMonBackPic_Dragalge,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Skrelp,
    #endif
        .palette = gMonPalette_Dragalge,
        .shinyPalette = gMonShinyPalette_Dragalge,
        .iconSprite = gMonIcon_Dragalge,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Dragalge)
        OVERWORLD(
            sPicTable_Dragalge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dragalge,
            gShinyOverworldPalette_Dragalge
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DRAGALGE_MEGA] =
    {
        .frontPic = gMonFrontPic_DragalgeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DragalgeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Skrelp,
    #endif
        .palette = gMonPalette_DragalgeMega,
        .shinyPalette = gMonShinyPalette_DragalgeMega,
        .iconSprite = gMonIcon_DragalgeMega,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Dragalge)
        SHADOW(3, 16, SHADOW_SIZE_L)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
    [SPECIES_CLAUNCHER] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Clauncher,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Clauncher,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Clauncher,
    #endif
        .palette = gMonPalette_Clauncher,
        .shinyPalette = gMonShinyPalette_Clauncher,
        .iconSprite = gMonIcon_Clauncher,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(4, -6, SHADOW_SIZE_M)
        FOOTPRINT(Clauncher)
        OVERWORLD(
            sPicTable_Clauncher,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Clauncher,
            gShinyOverworldPalette_Clauncher
        )
    },

    [SPECIES_CLAWITZER] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Clawitzer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
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
        .backPic = gMonBackPic_Clawitzer,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Clauncher,
    #endif
        .palette = gMonPalette_Clawitzer,
        .shinyPalette = gMonShinyPalette_Clawitzer,
        .iconSprite = gMonIcon_Clawitzer,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(6, 1, SHADOW_SIZE_L)
        FOOTPRINT(Clawitzer)
        OVERWORLD(
            sPicTable_Clawitzer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Clawitzer,
            gShinyOverworldPalette_Clawitzer
        )
    },
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
    [SPECIES_HELIOPTILE] =
    {
        .frontPic = gMonFrontPic_Helioptile,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Helioptile,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Helioptile,
    #endif
        .palette = gMonPalette_Helioptile,
        .shinyPalette = gMonShinyPalette_Helioptile,
        .iconSprite = gMonIcon_Helioptile,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-1, 1, SHADOW_SIZE_S)
        FOOTPRINT(Helioptile)
        OVERWORLD(
            sPicTable_Helioptile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Helioptile,
            gShinyOverworldPalette_Helioptile
        )
    },

    [SPECIES_HELIOLISK] =
    {
        .frontPic = gMonFrontPic_Heliolisk,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 30),
            ANIMCMD_FRAME(0, 30),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Heliolisk,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Helioptile,
    #endif
        .palette = gMonPalette_Heliolisk,
        .shinyPalette = gMonShinyPalette_Heliolisk,
        .iconSprite = gMonIcon_Heliolisk,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 10, SHADOW_SIZE_M)
        FOOTPRINT(Heliolisk)
        OVERWORLD(
            sPicTable_Heliolisk,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Heliolisk,
            gShinyOverworldPalette_Heliolisk
        )
    },
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
    [SPECIES_TYRUNT] =
    {
        .frontPic = gMonFrontPic_Tyrunt,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tyrunt,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Tyrunt,
    #endif
        .palette = gMonPalette_Tyrunt,
        .shinyPalette = gMonShinyPalette_Tyrunt,
        .iconSprite = gMonIcon_Tyrunt,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 2, SHADOW_SIZE_M)
        FOOTPRINT(Tyrunt)
        OVERWORLD(
            sPicTable_Tyrunt,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrunt,
            gShinyOverworldPalette_Tyrunt
        )
    },

    [SPECIES_TYRANTRUM] =
    {
        .frontPic = gMonFrontPic_Tyrantrum,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Tyrantrum,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Tyrunt,
    #endif
        .palette = gMonPalette_Tyrantrum,
        .shinyPalette = gMonShinyPalette_Tyrantrum,
        .iconSprite = gMonIcon_Tyrantrum,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_L)
        FOOTPRINT(Tyrantrum)
        OVERWORLD(
            sPicTable_Tyrantrum,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Tyrantrum,
            gShinyOverworldPalette_Tyrantrum
        )
    },
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
    [SPECIES_AMAURA] =
    {
        .frontPic = gMonFrontPic_Amaura,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 4),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 11),
            ANIMCMD_FRAME(0, 6),
            ANIMCMD_FRAME(1, 8),
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 5),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_CONCAVE_ARC_SMALL_TWICE,
        .backPic = gMonBackPic_Amaura,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Amaura,
    #endif
        .palette = gMonPalette_Amaura,
        .shinyPalette = gMonShinyPalette_Amaura,
        .iconSprite = gMonIcon_Amaura,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 8, SHADOW_SIZE_S)
        FOOTPRINT(Amaura)
        OVERWORLD(
            sPicTable_Amaura,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Amaura,
            gShinyOverworldPalette_Amaura
        )
    },

    [SPECIES_AURORUS] =
    {
        .frontPic = gMonFrontPic_Aurorus,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Aurorus,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Amaura,
    #endif
        .palette = gMonPalette_Aurorus,
        .shinyPalette = gMonShinyPalette_Aurorus,
        .iconSprite = gMonIcon_Aurorus,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-6, 14, SHADOW_SIZE_L)
        FOOTPRINT(Aurorus)
        OVERWORLD(
            sPicTable_Aurorus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Aurorus,
            gShinyOverworldPalette_Aurorus
        )
    },
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
    [SPECIES_HAWLUCHA] =
    {
        .frontPic = gMonFrontPic_Hawlucha,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Hawlucha,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Hawlucha,
    #endif
        .palette = gMonPalette_Hawlucha,
        .shinyPalette = gMonShinyPalette_Hawlucha,
        .iconSprite = gMonIcon_Hawlucha,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 6, SHADOW_SIZE_S)
        FOOTPRINT(Hawlucha)
        OVERWORLD(
            sPicTable_Hawlucha,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Hawlucha,
            gShinyOverworldPalette_Hawlucha
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_HAWLUCHA_MEGA] =
    {
        .frontPic = gMonFrontPic_HawluchaMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HawluchaMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Hawlucha,
    #endif
        .palette = gMonPalette_HawluchaMega,
        .shinyPalette = gMonShinyPalette_HawluchaMega,
        .iconSprite = gMonIcon_HawluchaMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Hawlucha)
        SHADOW(-2, 13, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
    [SPECIES_DEDENNE] =
    {
        .frontPic = gMonFrontPic_Dedenne,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GLOW_YELLOW,
        .backPic = gMonBackPic_Dedenne,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Dedenne,
    #endif
        .palette = gMonPalette_Dedenne,
        .shinyPalette = gMonShinyPalette_Dedenne,
        .iconSprite = gMonIcon_Dedenne,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_FAST,
        SHADOW(-2, 1, SHADOW_SIZE_S)
        FOOTPRINT(Dedenne)
        OVERWORLD(
            sPicTable_Dedenne,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Dedenne,
            gShinyOverworldPalette_Dedenne
        )
    },
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
    [SPECIES_CARBINK] =
    {
        .frontPic = gMonFrontPic_Carbink,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 4,
        .backPic = gMonBackPic_Carbink,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_VIBRATE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Carbink,
    #endif
        .palette = gMonPalette_Carbink,
        .shinyPalette = gMonShinyPalette_Carbink,
        .iconSprite = gMonIcon_Carbink,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Carbink)
        OVERWORLD(
            sPicTable_Carbink,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Carbink,
            gShinyOverworldPalette_Carbink
        )
    },
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
    [SPECIES_GOOMY] =
    {
        .frontPic = gMonFrontPic_Goomy,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 28),
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Goomy,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SPRING,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Goomy,
    #endif
        .palette = gMonPalette_Goomy,
        .shinyPalette = gMonShinyPalette_Goomy,
        .iconSprite = gMonIcon_Goomy,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Goomy)
        OVERWORLD(
            sPicTable_Goomy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goomy,
            gShinyOverworldPalette_Goomy
        )
    },

    [SPECIES_SLIGGOO] =
    {
        .frontPic = gMonFrontPic_Sliggoo,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sliggoo,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Goomy,
    #endif
        .palette = gMonPalette_Sliggoo,
        .shinyPalette = gMonShinyPalette_Sliggoo,
        .iconSprite = gMonIcon_Sliggoo,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 6, SHADOW_SIZE_S)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_Sliggoo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Sliggoo,
            gShinyOverworldPalette_Sliggoo
        )
    },

    [SPECIES_GOODRA] =
    {
        .frontPic = gMonFrontPic_Goodra,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 18),
            ANIMCMD_FRAME(1, 18),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Goodra,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Goomy,
    #endif
        .palette = gMonPalette_Goodra,
        .shinyPalette = gMonShinyPalette_Goodra,
        .iconSprite = gMonIcon_Goodra,
        .iconPalIndex = 5,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 14, SHADOW_SIZE_M)
        FOOTPRINT(Goodra)
        OVERWORLD(
            sPicTable_Goodra,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Goodra,
            gShinyOverworldPalette_Goodra
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_SLIGGOO_HISUI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_SliggooHisui,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SliggooHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Goomy,
    #endif
        .palette = gMonPalette_SliggooHisui,
        .shinyPalette = gMonShinyPalette_SliggooHisui,
        .iconSprite = gMonIcon_SliggooHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_SLOW,
        SHADOW(2, 6, SHADOW_SIZE_M)
        FOOTPRINT(Sliggoo)
        OVERWORLD(
            sPicTable_SliggooHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_SliggooHisui,
            gShinyOverworldPalette_SliggooHisui
        )

    },

    [SPECIES_GOODRA_HISUI] =
    {
        .frontPic = gMonFrontPic_GoodraHisui,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GoodraHisui,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Goomy,
    #endif
        .palette = gMonPalette_GoodraHisui,
        .shinyPalette = gMonShinyPalette_GoodraHisui,
        .iconSprite = gMonIcon_GoodraHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 12, SHADOW_SIZE_M)
        FOOTPRINT(Goodra)
        OVERWORLD(
            sPicTable_GoodraHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_GoodraHisui,
            gShinyOverworldPalette_GoodraHisui
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
    [SPECIES_KLEFKI] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Klefki,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_FOUR_PETAL,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Klefki,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Klefki,
    #endif
        .palette = gMonPalette_Klefki,
        .shinyPalette = gMonShinyPalette_Klefki,
        .iconSprite = gMonIcon_Klefki,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 12, SHADOW_SIZE_S)
        FOOTPRINT(Klefki)
        OVERWORLD(
            sPicTable_Klefki,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Klefki,
            gShinyOverworldPalette_Klefki
        )
    },
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
    [SPECIES_PHANTUMP] =
    {
        .frontPic = gMonFrontPic_Phantump,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Phantump,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Phantump,
    #endif
        .palette = gMonPalette_Phantump,
        .shinyPalette = gMonShinyPalette_Phantump,
        .iconSprite = gMonIcon_Phantump,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Phantump)
        OVERWORLD(
            sPicTable_Phantump,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phantump,
            gShinyOverworldPalette_Phantump
        )
    },

    [SPECIES_TREVENANT] =
    {
        .frontPic = gMonFrontPic_Trevenant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Trevenant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Phantump,
    #endif
        .palette = gMonPalette_Trevenant,
        .shinyPalette = gMonShinyPalette_Trevenant,
        .iconSprite = gMonIcon_Trevenant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Trevenant)
        OVERWORLD(
            sPicTable_Trevenant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trevenant,
            gShinyOverworldPalette_Trevenant
        )
    },
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
    [SPECIES_PUMPKABOO_AVERAGE] =
    {
        .frontPic = gMonFrontPic_PumpkabooAverage,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooAverage,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pumpkaboo,
    #endif
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooAverage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
    },

    [SPECIES_PUMPKABOO_SMALL] =
    {
        .frontPic = gMonFrontPic_PumpkabooSmall,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooSmall,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pumpkaboo,
    #endif
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooSmall,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
    },

    [SPECIES_PUMPKABOO_LARGE] =
    {
        .frontPic = gMonFrontPic_PumpkabooLarge,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooLarge,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pumpkaboo,
    #endif
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 2, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooLarge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
    },

    [SPECIES_PUMPKABOO_SUPER] =
    {
        .frontPic = gMonFrontPic_PumpkabooSuper,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Pumpkaboo,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .backPic = gMonBackPic_PumpkabooSuper,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pumpkaboo,
    #endif
        .palette = gMonPalette_Pumpkaboo,
        .shinyPalette = gMonShinyPalette_Pumpkaboo,
        .iconSprite = gMonIcon_Pumpkaboo,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 4, SHADOW_SIZE_S)
        FOOTPRINT(Pumpkaboo)
        OVERWORLD(
            sPicTable_PumpkabooSuper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Pumpkaboo,
            gShinyOverworldPalette_Pumpkaboo
        )
    },

    [SPECIES_GOURGEIST_AVERAGE] =
    {
        .frontPic = gMonFrontPic_GourgeistAverage,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistAverage,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pumpkaboo,
    #endif
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 10, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistAverage,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .frontPic = gMonFrontPic_GourgeistSmall,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistSmall,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pumpkaboo,
    #endif
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 9, SHADOW_SIZE_S)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistSmall,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .frontPic = gMonFrontPic_GourgeistLarge,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistLarge,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pumpkaboo,
    #endif
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 12, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistLarge,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .frontPic = gMonFrontPic_GourgeistSuper,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Gourgeist,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_GourgeistSuper,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Pumpkaboo,
    #endif
        .palette = gMonPalette_Gourgeist,
        .shinyPalette = gMonShinyPalette_Gourgeist,
        .iconSprite = gMonIcon_Gourgeist,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 14, SHADOW_SIZE_M)
        FOOTPRINT(Gourgeist)
        OVERWORLD(
            sPicTable_GourgeistSuper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gourgeist,
            gShinyOverworldPalette_Gourgeist
        )
    },
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
    [SPECIES_BERGMITE] =
    {
        .frontPic = gMonFrontPic_Bergmite,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 11),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_LUNGE_GROW,
        .backPic = gMonBackPic_Bergmite,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Bergmite,
    #endif
        .palette = gMonPalette_Bergmite,
        .shinyPalette = gMonShinyPalette_Bergmite,
        .iconSprite = gMonIcon_Bergmite,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -1, SHADOW_SIZE_S)
        FOOTPRINT(Bergmite)
        OVERWORLD(
            sPicTable_Bergmite,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Bergmite,
            gShinyOverworldPalette_Bergmite
        )
    },

    [SPECIES_AVALUGG] =
    {
        .frontPic = gMonFrontPic_Avalugg,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Avalugg,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Bergmite,
    #endif
        .palette = gMonPalette_Avalugg,
        .shinyPalette = gMonShinyPalette_Avalugg,
        .iconSprite = gMonIcon_Avalugg,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, -1, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Avalugg)
        OVERWORLD(
            sPicTable_Avalugg,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Avalugg,
            gShinyOverworldPalette_Avalugg
        )
    },

#if P_HISUIAN_FORMS
    [SPECIES_AVALUGG_HISUI] =
    {
        .frontPic = gMonFrontPic_AvaluggHisui,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AvaluggHisui,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Bergmite,
    #endif
        .palette = gMonPalette_AvaluggHisui,
        .shinyPalette = gMonShinyPalette_AvaluggHisui,
        .iconSprite = gMonIcon_AvaluggHisui,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, -2, SHADOW_SIZE_L)
        FOOTPRINT(Avalugg)
        OVERWORLD(
            sPicTable_AvaluggHisui,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_AvaluggHisui,
            gShinyOverworldPalette_AvaluggHisui
        )
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
    [SPECIES_NOIBAT] =
    {
        .frontPic = gMonFrontPic_Noibat,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
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
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Noibat,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Noibat,
    #endif
        .palette = gMonPalette_Noibat,
        .shinyPalette = gMonShinyPalette_Noibat,
        .iconSprite = gMonIcon_Noibat,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(2, 11, SHADOW_SIZE_L)
        FOOTPRINT(Noibat)
        OVERWORLD(
            sPicTable_Noibat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Noibat,
            gShinyOverworldPalette_Noibat
        )
    },

    [SPECIES_NOIVERN] =
    {
        .frontPic = gMonFrontPic_Noivern,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 32),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Noivern,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Noibat,
    #endif
        .palette = gMonPalette_Noivern,
        .shinyPalette = gMonShinyPalette_Noivern,
        .iconSprite = gMonIcon_Noivern,
        .iconPalIndex = 2,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(5, 10, SHADOW_SIZE_L)
        FOOTPRINT(Noivern)
        OVERWORLD(
            sPicTable_Noivern,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Noivern,
            gShinyOverworldPalette_Noivern
        )
    },
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_XERNEAS
    [SPECIES_XERNEAS_NEUTRAL] =
    {
        .frontPic = gMonFrontPic_XerneasNeutral,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xerneas,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_XerneasNeutral,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Xerneas,
    #endif
        .palette = gMonPalette_XerneasNeutral,
        .shinyPalette = gMonShinyPalette_XerneasNeutral,
        .iconSprite = gMonIcon_XerneasNeutral,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Xerneas)
        OVERWORLD(
            sPicTable_XerneasNeutral,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XerneasNeutral,
            gShinyOverworldPalette_XerneasNeutral
        )
    },

    [SPECIES_XERNEAS_ACTIVE] =
    {
        .frontPic = gMonFrontPic_XerneasActive,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Xerneas,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_XerneasActive,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Xerneas,
    #endif
        .palette = gMonPalette_XerneasActive,
        .shinyPalette = gMonShinyPalette_XerneasActive,
        .iconSprite = gMonIcon_XerneasActive,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(3, 14, SHADOW_SIZE_M)
        FOOTPRINT(Xerneas)
        OVERWORLD(
            sPicTable_XerneasActive,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_XerneasNeutral,
            gShinyOverworldPalette_XerneasNeutral
        )
    },
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
    [SPECIES_YVELTAL] =
    {
        .frontPic = gMonFrontPic_Yveltal,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 1),
        ),
        .frontAnimId = ANIM_FRONT_FLIP,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Yveltal,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Yveltal,
    #endif
        .palette = gMonPalette_Yveltal,
        .shinyPalette = gMonShinyPalette_Yveltal,
        .iconSprite = gMonIcon_Yveltal,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 16, SHADOW_SIZE_L)
        FOOTPRINT(Yveltal)
        OVERWORLD(
            sPicTable_Yveltal,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Yveltal,
            gShinyOverworldPalette_Yveltal
        )
    },
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
    [SPECIES_ZYGARDE_50] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Zygarde50,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zygarde50,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Zygarde50,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_V_STRETCH,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Zygarde,
    #endif
        .palette = gMonPalette_Zygarde50,
        .shinyPalette = gMonShinyPalette_Zygarde50,
        .iconSprite = gMonIcon_Zygarde50,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde50,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde50,
            gShinyOverworldPalette_Zygarde50
        )
    },

    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Zygarde50,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zygarde50,
        .frontAnimId = ANIM_TIP_MOVE_FORWARD,
        .backPic = gMonBackPic_Zygarde50,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Zygarde,
    #endif
        .palette = gMonPalette_Zygarde50,
        .shinyPalette = gMonShinyPalette_Zygarde50,
        .iconSprite = gMonIcon_Zygarde50,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde50,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Zygarde50,
            gShinyOverworldPalette_Zygarde50
        )
    },

    [SPECIES_ZYGARDE_10_AURA_BREAK] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Zygarde10,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zygarde10,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,,
        .backPic = gMonBackPic_Zygarde10,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Zygarde,
    #endif
        .palette = gMonPalette_Zygarde10,
        .shinyPalette = gMonShinyPalette_Zygarde10,
        .iconSprite = gMonIcon_Zygarde10,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde10,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Zygarde10,
            gShinyOverworldPalette_Zygarde10
        )
    },

    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_Zygarde10,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zygarde10,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,,
        .backPic = gMonBackPic_Zygarde10,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Zygarde,
    #endif
        .palette = gMonPalette_Zygarde10,
        .shinyPalette = gMonShinyPalette_Zygarde10,
        .iconSprite = gMonIcon_Zygarde10,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 11, SHADOW_SIZE_L)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_Zygarde10,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_Zygarde10,
            gShinyOverworldPalette_Zygarde10
        )
    },

    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_ZygardeComplete,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 12),
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_ZygardeComplete,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Zygarde,
    #endif
        .palette = gMonPalette_ZygardeComplete,
        .shinyPalette = gMonShinyPalette_ZygardeComplete,
        .iconSprite = gMonIcon_ZygardeComplete,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-3, 13, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Zygarde)
        OVERWORLD(
            sPicTable_ZygardeComplete, 
            SIZE_32x32, //TODO: 64x64 overworld sprite!
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following_Asym,
            gOverworldPalette_ZygardeComplete,
            gShinyOverworldPalette_ZygardeComplete
        )
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_ZYGARDE_MEGA] =
    {
        .noFlip = TRUE,
        .frontPic = gMonFrontPic_ZygardeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_ZygardeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Zygarde,
    #endif
        .palette = gMonPalette_ZygardeMega,
        .shinyPalette = gMonShinyPalette_ZygardeMega,
        .iconSprite = gMonIcon_ZygardeMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(Zygarde)
        SHADOW(8, 20, SHADOW_SIZE_M)
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
    [SPECIES_DIANCIE] =
    {
        .frontPic = gMonFrontPic_Diancie,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Diancie,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Diancie,
    #endif
        .palette = gMonPalette_Diancie,
        .shinyPalette = gMonShinyPalette_Diancie,
        .iconSprite = gMonIcon_Diancie,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Diancie)
        OVERWORLD(
            sPicTable_Diancie,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Diancie,
            gShinyOverworldPalette_Diancie
        )
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DIANCIE_MEGA] =
    {
        .frontPic = gMonFrontPic_DiancieMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DiancieMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Diancie,
    #endif
        .palette = gMonPalette_DiancieMega,
        .shinyPalette = gMonShinyPalette_DiancieMega,
        .iconSprite = gMonIcon_DiancieMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_M)
        FOOTPRINT(Diancie)
    #if OW_BATTLE_ONLY_FORMS
        OVERWORLD(
            sPicTable_DiancieMega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_DiancieMega,
            gShinyOverworldPalette_DiancieMega
        )
    #endif //OW_BATTLE_ONLY_FORMS
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
    [SPECIES_HOOPA_CONFINED] =
    {
        .frontPic = gMonFrontPic_HoopaConfined,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 5),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 25),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_HoopaConfined,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Hoopa,
    #endif
        .palette = gMonPalette_HoopaConfined,
        .shinyPalette = gMonShinyPalette_HoopaConfined,
        .iconSprite = gMonIcon_HoopaConfined,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 13, SHADOW_SIZE_S)
        FOOTPRINT(Hoopa)
        OVERWORLD(
            sPicTable_HoopaConfined,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoopaConfined,
            gShinyOverworldPalette_HoopaConfined
        )
    },

    [SPECIES_HOOPA_UNBOUND] =
    {
        .frontPic = gMonFrontPic_HoopaUnbound,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_HoopaUnbound,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Hoopa,
    #endif
        .palette = gMonPalette_HoopaUnbound,
        .shinyPalette = gMonShinyPalette_HoopaUnbound,
        .iconSprite = gMonIcon_HoopaUnbound,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(1, 14, SHADOW_SIZE_L)
        FOOTPRINT(Hoopa)
        OVERWORLD(
            sPicTable_HoopaUnbound,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_HoopaUnbound,
            gShinyOverworldPalette_HoopaUnbound
        )
    },
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
    [SPECIES_VOLCANION] =
    {
        .frontPic = gMonFrontPic_Volcanion,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 45),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .backPic = gMonBackPic_Volcanion,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
    #if SPECIES_EGG_COLOR && GEN_6_EGG_COLORS
        .eggPalette = gEggPalette_Volcanion,
    #endif
        .palette = gMonPalette_Volcanion,
        .shinyPalette = gMonShinyPalette_Volcanion,
        .iconSprite = gMonIcon_Volcanion,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 12, SHADOW_SIZE_XL_BATTLE_ONLY)
        FOOTPRINT(Volcanion)
        OVERWORLD(
            sPicTable_Volcanion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Volcanion,
            gShinyOverworldPalette_Volcanion
        )
    },
#endif //P_FAMILY_VOLCANION

#ifdef __INTELLISENSE__
};
#endif
