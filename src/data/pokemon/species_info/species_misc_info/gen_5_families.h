#ifdef __INTELLISENSE__
const struct SpeciesMiscInfo gSpeciesMiscInfoGen5[] =
{
#endif

#if P_FAMILY_VICTINI
    [SPECIES_VICTINI] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_VICTINI

#if P_FAMILY_TEPIG
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EMBOAR_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
#if P_HISUIAN_FORMS
    [SPECIES_SAMUROTT_HISUI] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_PIDOVE
    [SPECIES_PIDOVE] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_DRILBUR
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EXCADRILL_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_AUDINO
#if P_MEGA_EVOLUTIONS
    [SPECIES_AUDINO_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AUDINO

#if P_FAMILY_VENIPEDE
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SCOLIPEDE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_VENIPEDE

#if P_FAMILY_PETILIL
#if P_HISUIAN_FORMS
    [SPECIES_LILLIGANT_HISUI] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_PETILIL

#if P_FAMILY_DARUMAKA
#if P_GALARIAN_FORMS
    [SPECIES_DARUMAKA_GALAR] =
    {
        .isGalarianForm = TRUE,
    },

    [SPECIES_DARMANITAN_GALAR_STANDARD] =
    {
        .isGalarianForm = TRUE,
    },

    [SPECIES_DARMANITAN_GALAR_ZEN] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_SCRAGGY
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SCRAFTY_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_YAMASK
#if P_GALARIAN_FORMS
    [SPECIES_YAMASK_GALAR] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK

#if P_FAMILY_ARCHEN
    [SPECIES_ARCHEN] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_TRUBBISH
#if P_GIGANTAMAX_FORMS
    [SPECIES_GARBODOR_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TRUBBISH

#if P_FAMILY_ZORUA
#if P_HISUIAN_FORMS
    [SPECIES_ZORUA_HISUI] =
    {
        .isHisuianForm = TRUE,
    },

    [SPECIES_ZOROARK_HISUI] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ZORUA

#if P_FAMILY_DUCKLETT
    [SPECIES_DUCKLETT] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_TYNAMO
    [SPECIES_TYNAMO] =
    {
        .teachingType = TM_ILLITERATE,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EELEKTROSS_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TYNAMO

#if P_FAMILY_LITWICK
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CHANDELURE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_LITWICK

#if P_FAMILY_STUNFISK
#if P_GALARIAN_FORMS
    [SPECIES_STUNFISK_GALAR] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_GOLETT
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GOLURK_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_GOLETT

#if P_FAMILY_RUFFLET
    [SPECIES_RUFFLET] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },

    [SPECIES_BRAVIARY_OUTSIDER] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_FAMILY_RUFFLET

#if P_FAMILY_VULLABY
    [SPECIES_VULLABY] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_VULLABY

#if P_FAMILY_COBALION
    [SPECIES_COBALION] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_COBALION

#if P_FAMILY_TERRAKION
    [SPECIES_TERRAKION] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_TERRAKION

#if P_FAMILY_VIRIZION
    [SPECIES_VIRIZION] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_VIRIZION

#if P_FAMILY_TORNADUS
    [SPECIES_TORNADUS_INCARNATE] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_TORNADUS_THERIAN] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_TORNADUS

#if P_FAMILY_THUNDURUS
    [SPECIES_THUNDURUS_INCARNATE] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_THUNDURUS_THERIAN] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_THUNDURUS

#if P_FAMILY_RESHIRAM
    [SPECIES_RESHIRAM] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_RESHIRAM

#if P_FAMILY_ZEKROM
    [SPECIES_ZEKROM] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_ZEKROM

#if P_FAMILY_LANDORUS
    [SPECIES_LANDORUS_INCARNATE] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_LANDORUS_THERIAN] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_LANDORUS

#if P_FAMILY_KYUREM
    [SPECIES_KYUREM] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_FUSION_FORMS
    [SPECIES_KYUREM_WHITE] =
    {
        .isRestrictedLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_KYUREM_BLACK] =
    {
        .isRestrictedLegendary = TRUE,
        .cannotBeTraded = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM

#if P_FAMILY_KELDEO
    [SPECIES_KELDEO_ORDINARY] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_KELDEO_RESOLUTE] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_KELDEO

#if P_FAMILY_MELOETTA
    [SPECIES_MELOETTA_ARIA] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_FAMILY_MELOETTA

#if P_FAMILY_GENESECT
#define GENESECT_SPECIES_INFO_MISC(form)                                                 \
    {                                                                               \
        .isMythical = TRUE,                                                         \
        .isFrontierBanned = TRUE,                                                   \
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT, \
    }

    [SPECIES_GENESECT]             = GENESECT_SPECIES_INFO_MISC(Genesect),
    [SPECIES_GENESECT_DOUSE] = GENESECT_SPECIES_INFO_MISC(GenesectDouseDrive),
    [SPECIES_GENESECT_SHOCK] = GENESECT_SPECIES_INFO_MISC(GenesectShockDrive),
    [SPECIES_GENESECT_BURN]  = GENESECT_SPECIES_INFO_MISC(GenesectBurnDrive),
    [SPECIES_GENESECT_CHILL] = GENESECT_SPECIES_INFO_MISC(GenesectChillDrive),
#endif //P_FAMILY_GENESECT

#ifdef __INTELLISENSE__
};
#endif
