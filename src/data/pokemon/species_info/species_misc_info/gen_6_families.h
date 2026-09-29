#ifdef __INTELLISENSE__
const struct SpeciesMiscInfo gSpeciesMiscInfoGen6[] =
{
#endif

#if P_FAMILY_CHESPIN
    [SPECIES_CHESNAUGHT_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DELPHOX_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GRENINJA_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_FLETCHLING
    [SPECIES_FLETCHLING] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
#define SCATTERBUG_SPECIES_INFO_MISC(evolution)                                                  \
    {                                                                                       \
        .monFleeRate = 15,                                                          \
        .teachingType = TM_ILLITERATE,                                                      \
    }                                                                                       \

    [SPECIES_SCATTERBUG_ICY_SNOW]    = SCATTERBUG_SPECIES_INFO_MISC(ICY_SNOW),
    [SPECIES_SCATTERBUG_POLAR]       = SCATTERBUG_SPECIES_INFO_MISC(POLAR),
    [SPECIES_SCATTERBUG_TUNDRA]      = SCATTERBUG_SPECIES_INFO_MISC(TUNDRA),
    [SPECIES_SCATTERBUG_CONTINENTAL] = SCATTERBUG_SPECIES_INFO_MISC(CONTINENTAL),
    [SPECIES_SCATTERBUG_GARDEN]      = SCATTERBUG_SPECIES_INFO_MISC(GARDEN),
    [SPECIES_SCATTERBUG_ELEGANT]     = SCATTERBUG_SPECIES_INFO_MISC(ELEGANT),
    [SPECIES_SCATTERBUG_MEADOW]      = SCATTERBUG_SPECIES_INFO_MISC(MEADOW),
    [SPECIES_SCATTERBUG_MODERN]      = SCATTERBUG_SPECIES_INFO_MISC(MODERN),
    [SPECIES_SCATTERBUG_MARINE]      = SCATTERBUG_SPECIES_INFO_MISC(MARINE),
    [SPECIES_SCATTERBUG_ARCHIPELAGO] = SCATTERBUG_SPECIES_INFO_MISC(ARCHIPELAGO),
    [SPECIES_SCATTERBUG_HIGH_PLAINS] = SCATTERBUG_SPECIES_INFO_MISC(HIGH_PLAINS),
    [SPECIES_SCATTERBUG_SANDSTORM]   = SCATTERBUG_SPECIES_INFO_MISC(SANDSTORM),
    [SPECIES_SCATTERBUG_RIVER]       = SCATTERBUG_SPECIES_INFO_MISC(RIVER),
    [SPECIES_SCATTERBUG_MONSOON]     = SCATTERBUG_SPECIES_INFO_MISC(MONSOON),
    [SPECIES_SCATTERBUG_SAVANNA]     = SCATTERBUG_SPECIES_INFO_MISC(SAVANNA),
    [SPECIES_SCATTERBUG_SUN]         = SCATTERBUG_SPECIES_INFO_MISC(SUN),
    [SPECIES_SCATTERBUG_OCEAN]       = SCATTERBUG_SPECIES_INFO_MISC(OCEAN),
    [SPECIES_SCATTERBUG_JUNGLE]      = SCATTERBUG_SPECIES_INFO_MISC(JUNGLE),
    [SPECIES_SCATTERBUG_FANCY]       = SCATTERBUG_SPECIES_INFO_MISC(FANCY),
    [SPECIES_SCATTERBUG_POKEBALL]    = SCATTERBUG_SPECIES_INFO_MISC(POKEBALL),

#define SPEWPA_SPECIES_INFO_MISC(evolution)                                          \
    {                                                                           \
        .teachingType = TM_ILLITERATE,                                          \
    }

    [SPECIES_SPEWPA_ICY_SNOW]    = SPEWPA_SPECIES_INFO_MISC(ICY_SNOW),
    [SPECIES_SPEWPA_POLAR]       = SPEWPA_SPECIES_INFO_MISC(POLAR),
    [SPECIES_SPEWPA_TUNDRA]      = SPEWPA_SPECIES_INFO_MISC(TUNDRA),
    [SPECIES_SPEWPA_CONTINENTAL] = SPEWPA_SPECIES_INFO_MISC(CONTINENTAL),
    [SPECIES_SPEWPA_GARDEN]      = SPEWPA_SPECIES_INFO_MISC(GARDEN),
    [SPECIES_SPEWPA_ELEGANT]     = SPEWPA_SPECIES_INFO_MISC(ELEGANT),
    [SPECIES_SPEWPA_MEADOW]      = SPEWPA_SPECIES_INFO_MISC(MEADOW),
    [SPECIES_SPEWPA_MODERN]      = SPEWPA_SPECIES_INFO_MISC(MODERN),
    [SPECIES_SPEWPA_MARINE]      = SPEWPA_SPECIES_INFO_MISC(MARINE),
    [SPECIES_SPEWPA_ARCHIPELAGO] = SPEWPA_SPECIES_INFO_MISC(ARCHIPELAGO),
    [SPECIES_SPEWPA_HIGH_PLAINS] = SPEWPA_SPECIES_INFO_MISC(HIGH_PLAINS),
    [SPECIES_SPEWPA_SANDSTORM]   = SPEWPA_SPECIES_INFO_MISC(SANDSTORM),
    [SPECIES_SPEWPA_RIVER]       = SPEWPA_SPECIES_INFO_MISC(RIVER),
    [SPECIES_SPEWPA_MONSOON]     = SPEWPA_SPECIES_INFO_MISC(MONSOON),
    [SPECIES_SPEWPA_SAVANNA]     = SPEWPA_SPECIES_INFO_MISC(SAVANNA),
    [SPECIES_SPEWPA_SUN]         = SPEWPA_SPECIES_INFO_MISC(SUN),
    [SPECIES_SPEWPA_OCEAN]       = SPEWPA_SPECIES_INFO_MISC(OCEAN),
    [SPECIES_SPEWPA_JUNGLE]      = SPEWPA_SPECIES_INFO_MISC(JUNGLE),
    [SPECIES_SPEWPA_FANCY]       = SPEWPA_SPECIES_INFO_MISC(FANCY),
    [SPECIES_SPEWPA_POKEBALL]   = SPEWPA_SPECIES_INFO_MISC(POKEBALL),
#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_PYROAR_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FLOETTE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_ESPURR
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MEOWSTIC_M_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },

    [SPECIES_MEOWSTIC_F_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ESPURR

#if P_FAMILY_INKAY
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MALAMAR_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_BARBARACLE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DRAGALGE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SKRELP

#if P_FAMILY_HAWLUCHA
    [SPECIES_HAWLUCHA] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_HAWLUCHA_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_GOOMY
#if P_HISUIAN_FORMS
    [SPECIES_SLIGGOO_HISUI] =
    {
        .isHisuianForm = TRUE,

    },

    [SPECIES_GOODRA_HISUI] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_BERGMITE
#if P_HISUIAN_FORMS
    [SPECIES_AVALUGG_HISUI] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_XERNEAS
    [SPECIES_XERNEAS_NEUTRAL] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_XERNEAS_ACTIVE] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
    [SPECIES_YVELTAL] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
    [SPECIES_ZYGARDE_50] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_ZYGARDE_10_AURA_BREAK] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_ZYGARDE_MEGA] =
    {
        .isMegaEvolution = TRUE,
        .isRestrictedLegendary = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
    [SPECIES_DIANCIE] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DIANCIE_MEGA] =
    {
        .isMythical = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
    [SPECIES_HOOPA_CONFINED] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_HOOPA_UNBOUND] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
    [SPECIES_VOLCANION] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_VOLCANION

#ifdef __INTELLISENSE__
};
#endif
