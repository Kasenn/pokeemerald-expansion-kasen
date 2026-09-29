#ifdef __INTELLISENSE__
const struct SpeciesMiscInfo gSpeciesMiscInfoGen7[] =
{
#endif

#if P_FAMILY_ROWLET
    [SPECIES_ROWLET] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },

    [SPECIES_DECIDUEYE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },

#if P_HISUIAN_FORMS
    [SPECIES_DECIDUEYE_HISUI] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ROWLET

#if P_FAMILY_LITTEN
    [SPECIES_INCINEROAR_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_FAMILY_LITTEN

#if P_FAMILY_PIKIPEK
    [SPECIES_PIKIPEK] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_PIKIPEK

#if P_FAMILY_YUNGOOS
    [SPECIES_GUMSHOOS_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_YUNGOOS

#if P_FAMILY_GRUBBIN
    [SPECIES_VIKAVOLT_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_CRABRAWLER
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CRABOMINABLE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CRABRAWLER

#if P_FAMILY_CUTIEFLY
    [SPECIES_RIBOMBEE_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_CUTIEFLY

#if P_FAMILY_DEWPIDER
    [SPECIES_ARAQUANID_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_FOMANTIS
    [SPECIES_LURANTIS_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_FOMANTIS

#if P_FAMILY_SALANDIT
    [SPECIES_SALAZZLE_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_WIMPOD
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GOLISOPOD_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_SANDYGAST
    [SPECIES_SANDYGAST] =
    {
        .isTelekinesisBanned = TRUE,
    },

    [SPECIES_PALOSSAND] =
    {
        .isTelekinesisBanned = TRUE,
    },
#endif //P_FAMILY_SANDYGAST

#if P_FAMILY_PYUKUMUKU
    [SPECIES_PYUKUMUKU] =
    {
        .teachingType = TM_ILLITERATE,
    },
#endif //P_FAMILY_PYUKUMUKU

#if P_FAMILY_TYPE_NULL
    [SPECIES_TYPE_NULL] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#define SILVALLY_SPECIES_INFO_MISC(type, _palette)                                       \
    {                                                                               \
        .isSubLegendary = TRUE,                                                     \
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,                               \
    }

    [SPECIES_SILVALLY_NORMAL]   = SILVALLY_SPECIES_INFO_MISC(TYPE_NORMAL,   Normal),
    [SPECIES_SILVALLY_FIGHTING] = SILVALLY_SPECIES_INFO_MISC(TYPE_FIGHTING, Fighting),
    [SPECIES_SILVALLY_FLYING]   = SILVALLY_SPECIES_INFO_MISC(TYPE_FLYING,   Flying),
    [SPECIES_SILVALLY_POISON]   = SILVALLY_SPECIES_INFO_MISC(TYPE_POISON,   Poison),
    [SPECIES_SILVALLY_GROUND]   = SILVALLY_SPECIES_INFO_MISC(TYPE_GROUND,   Ground),
    [SPECIES_SILVALLY_ROCK]     = SILVALLY_SPECIES_INFO_MISC(TYPE_ROCK,     Rock),
    [SPECIES_SILVALLY_BUG]      = SILVALLY_SPECIES_INFO_MISC(TYPE_BUG,      Bug),
    [SPECIES_SILVALLY_GHOST]    = SILVALLY_SPECIES_INFO_MISC(TYPE_GHOST,    Ghost),
    [SPECIES_SILVALLY_STEEL]    = SILVALLY_SPECIES_INFO_MISC(TYPE_STEEL,    Steel),
    [SPECIES_SILVALLY_FIRE]     = SILVALLY_SPECIES_INFO_MISC(TYPE_FIRE,     Fire),
    [SPECIES_SILVALLY_WATER]    = SILVALLY_SPECIES_INFO_MISC(TYPE_WATER,    Water),
    [SPECIES_SILVALLY_GRASS]    = SILVALLY_SPECIES_INFO_MISC(TYPE_GRASS,    Grass),
    [SPECIES_SILVALLY_ELECTRIC] = SILVALLY_SPECIES_INFO_MISC(TYPE_ELECTRIC, Electric),
    [SPECIES_SILVALLY_PSYCHIC]  = SILVALLY_SPECIES_INFO_MISC(TYPE_PSYCHIC,  Psychic),
    [SPECIES_SILVALLY_ICE]      = SILVALLY_SPECIES_INFO_MISC(TYPE_ICE,      Ice),
    [SPECIES_SILVALLY_DRAGON]   = SILVALLY_SPECIES_INFO_MISC(TYPE_DRAGON,   Dragon),
    [SPECIES_SILVALLY_DARK]     = SILVALLY_SPECIES_INFO_MISC(TYPE_DARK,     Dark),
    [SPECIES_SILVALLY_FAIRY]    = SILVALLY_SPECIES_INFO_MISC(TYPE_FAIRY,    Fairy),
#endif //P_FAMILY_TYPE_NULL

#if P_FAMILY_TOGEDEMARU
    [SPECIES_TOGEDEMARU_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_MIMIKYU
    [SPECIES_MIMIKYU_TOTEM_DISGUISED] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_MIMIKYU_BUSTED_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_MIMIKYU

#if P_FAMILY_DRAMPA
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DRAMPA_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_JANGMO_O
    [SPECIES_KOMMO_O_TOTEM] =
    {
        .isTotem = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_TAPU_KOKO
    [SPECIES_TAPU_KOKO] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_TAPU_KOKO

#if P_FAMILY_TAPU_LELE
    [SPECIES_TAPU_LELE] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_TAPU_LELE

#if P_FAMILY_TAPU_BULU
    [SPECIES_TAPU_BULU] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_TAPU_BULU

#if P_FAMILY_TAPU_FINI
    [SPECIES_TAPU_FINI] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_TAPU_FINI

#if P_FAMILY_COSMOG
    [SPECIES_COSMOG] =
    {
        .isRestrictedLegendary = TRUE,
        .teachingType = TM_ILLITERATE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_COSMOEM] =
    {
        .isRestrictedLegendary = TRUE,
        .teachingType = TM_ILLITERATE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_SOLGALEO] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_LUNALA] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_COSMOG

#if P_FAMILY_NIHILEGO
    [SPECIES_NIHILEGO] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_NIHILEGO

#if P_FAMILY_BUZZWOLE
    [SPECIES_BUZZWOLE] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_BUZZWOLE

#if P_FAMILY_PHEROMOSA
    [SPECIES_PHEROMOSA] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_PHEROMOSA

#if P_FAMILY_XURKITREE
    [SPECIES_XURKITREE] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_XURKITREE

#if P_FAMILY_CELESTEELA
    [SPECIES_CELESTEELA] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_CELESTEELA

#if P_FAMILY_KARTANA
    [SPECIES_KARTANA] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_KARTANA

#if P_FAMILY_GUZZLORD
    [SPECIES_GUZZLORD] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_GUZZLORD

#if P_FAMILY_NECROZMA
    [SPECIES_NECROZMA] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_FUSION_FORMS
    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .isRestrictedLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .isRestrictedLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_ULTRA_BURST_FORMS
    [SPECIES_NECROZMA_ULTRA] =
    {
        .isRestrictedLegendary = TRUE,
        .isUltraBurst = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_ULTRA_BURST_FORMS
#endif //P_FUSION_FORMS
#endif //P_FAMILY_NECROZMA

#if P_FAMILY_MAGEARNA
    [SPECIES_MAGEARNA] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_MAGEARNA_ORIGINAL] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MAGEARNA_MEGA] =
    {
        .isMegaEvolution = TRUE,
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_MAGEARNA_ORIGINAL_MEGA] =
    {
        .isMegaEvolution = TRUE,
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGEARNA

#if P_FAMILY_MARSHADOW
    [SPECIES_MARSHADOW] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_MARSHADOW

#if P_FAMILY_POIPOLE
    [SPECIES_POIPOLE] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_NAGANADEL] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_POIPOLE

#if P_FAMILY_STAKATAKA
    [SPECIES_STAKATAKA] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_STAKATAKA

#if P_FAMILY_BLACEPHALON
    [SPECIES_BLACEPHALON] =
    {
        .isUltraBeast = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_BLACEPHALON

#if P_FAMILY_ZERAORA
    [SPECIES_ZERAORA] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_ZERAORA_MEGA] =
    {

        .isMegaEvolution = TRUE,
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ZERAORA

#if P_FAMILY_MELTAN
    [SPECIES_MELTAN] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_MELMETAL] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_MELMETAL_GMAX] =
    {
        .isMythical = TRUE,
        .isGigantamax = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MELTAN

#ifdef __INTELLISENSE__
};
#endif
