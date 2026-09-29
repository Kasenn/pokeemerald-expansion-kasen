#ifdef __INTELLISENSE__
const struct SpeciesMiscInfo gSpeciesMiscInfoGen4[] =
{
#endif

#if P_FAMILY_PIPLUP
#if P_MEGA_EVOLUTIONS
    [SPECIES_EMPOLEON_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
    [SPECIES_STARLY] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_STARAPTOR_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_STARLY

#if P_FAMILY_KRICKETOT
    [SPECIES_KRICKETOT] =
    {
        .teachingType = TM_ILLITERATE,
    },
#endif //P_FAMILY_KRICKETOT

#if P_FAMILY_BURMY
    [SPECIES_BURMY_PLANT] =
    {
        .teachingType = TM_ILLITERATE,
    },

    [SPECIES_BURMY_SANDY] =
    {
        .teachingType = TM_ILLITERATE,
    },

    [SPECIES_BURMY_TRASH] =
    {
        .teachingType = TM_ILLITERATE,
    },

#define MOTHIM_SPECIES_INFO_MISC                                                 \
    {                                                                       \
    }

    [SPECIES_MOTHIM_PLANT] = MOTHIM_SPECIES_INFO_MISC,
    [SPECIES_MOTHIM_SANDY] = MOTHIM_SPECIES_INFO_MISC,
    [SPECIES_MOTHIM_TRASH] = MOTHIM_SPECIES_INFO_MISC,
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
    [SPECIES_COMBEE] =
    {
        .teachingType = TM_ILLITERATE,
    },
#endif //P_FAMILY_COMBEE

#if P_FAMILY_BUNEARY
#if P_MEGA_EVOLUTIONS
    [SPECIES_LOPUNNY_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_CHATOT
    [SPECIES_CHATOT] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_CHATOT

#if P_FAMILY_GIBLE
#if P_MEGA_EVOLUTIONS
    [SPECIES_GARCHOMP_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GARCHOMP_MEGA_Z] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
#if P_MEGA_EVOLUTIONS
    [SPECIES_LUCARIO_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_LUCARIO_MEGA_Z] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU

#if P_FAMILY_SNOVER
#if P_MEGA_EVOLUTIONS
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER

#if P_FAMILY_UXIE
    [SPECIES_UXIE] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
    [SPECIES_MESPRIT] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
    [SPECIES_AZELF] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
    [SPECIES_DIALGA] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_DIALGA_ORIGIN] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
    [SPECIES_PALKIA] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_PALKIA_ORIGIN] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
    [SPECIES_HEATRAN] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_HEATRAN_MEGA] =
    {
        .isMegaEvolution = TRUE,
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
    [SPECIES_REGIGIGAS] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
    [SPECIES_GIRATINA_ALTERED] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_GIRATINA_ORIGIN] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
    [SPECIES_CRESSELIA] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
    [SPECIES_PHIONE] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_MANAPHY] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
    [SPECIES_DARKRAI] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DARKRAI_MEGA] =
    {
        .isMegaEvolution = TRUE,
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
    [SPECIES_SHAYMIN_LAND] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
#define ARCEUS_SPECIES_INFO_MISC(type, typeName, iconPal)                                \
    {                                                                               \
        .isMythical = TRUE,                                                         \
        .isFrontierBanned = TRUE,                                                   \
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT, \
    }

    [SPECIES_ARCEUS_NORMAL]   = ARCEUS_SPECIES_INFO_MISC(TYPE_NORMAL,   Normal,   1),
    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_SPECIES_INFO_MISC(TYPE_FIGHTING, Fighting, 1),
    [SPECIES_ARCEUS_FLYING]   = ARCEUS_SPECIES_INFO_MISC(TYPE_FLYING,   Flying,   2),
    [SPECIES_ARCEUS_POISON]   = ARCEUS_SPECIES_INFO_MISC(TYPE_POISON,   Poison,   2),
    [SPECIES_ARCEUS_GROUND]   = ARCEUS_SPECIES_INFO_MISC(TYPE_GROUND,   Ground,   1),
    [SPECIES_ARCEUS_ROCK]     = ARCEUS_SPECIES_INFO_MISC(TYPE_ROCK,     Rock,     2),
    [SPECIES_ARCEUS_BUG]      = ARCEUS_SPECIES_INFO_MISC(TYPE_BUG,      Bug,      1),
    [SPECIES_ARCEUS_GHOST]    = ARCEUS_SPECIES_INFO_MISC(TYPE_GHOST,    Ghost,    2),
    [SPECIES_ARCEUS_STEEL]    = ARCEUS_SPECIES_INFO_MISC(TYPE_STEEL,    Steel,    0),
    [SPECIES_ARCEUS_FIRE]     = ARCEUS_SPECIES_INFO_MISC(TYPE_FIRE,     Fire,     0),
    [SPECIES_ARCEUS_WATER]    = ARCEUS_SPECIES_INFO_MISC(TYPE_WATER,    Water,    0),
    [SPECIES_ARCEUS_GRASS]    = ARCEUS_SPECIES_INFO_MISC(TYPE_GRASS,    Grass,    1),
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_SPECIES_INFO_MISC(TYPE_ELECTRIC, Electric, 3),
    [SPECIES_ARCEUS_PSYCHIC]  = ARCEUS_SPECIES_INFO_MISC(TYPE_PSYCHIC,  Psychic,  1),
    [SPECIES_ARCEUS_ICE]      = ARCEUS_SPECIES_INFO_MISC(TYPE_ICE,      Ice,      0),
    [SPECIES_ARCEUS_DRAGON]   = ARCEUS_SPECIES_INFO_MISC(TYPE_DRAGON,   Dragon,   0),
    [SPECIES_ARCEUS_DARK]     = ARCEUS_SPECIES_INFO_MISC(TYPE_DARK,     Dark,     0),
    [SPECIES_ARCEUS_FAIRY]    = ARCEUS_SPECIES_INFO_MISC(TYPE_FAIRY,    Fairy,    0),
#endif //P_FAMILY_ARCEUS

#ifdef __INTELLISENSE__
};
#endif
