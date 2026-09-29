#ifdef __INTELLISENSE__
const struct SpeciesMiscInfo gSpeciesMiscInfoGen1[] =
{
#endif

#if P_FAMILY_BULBASAUR
#if P_MEGA_EVOLUTIONS
    [SPECIES_VENUSAUR_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_VENUSAUR_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
#if P_MEGA_EVOLUTIONS
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .isMegaEvolution = TRUE,
    },

    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CHARIZARD_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
#if P_MEGA_EVOLUTIONS
    [SPECIES_BLASTOISE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_BLASTOISE_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_CATERPIE
    [SPECIES_CATERPIE] =
    {
        .teachingType = TM_ILLITERATE,
    },

    [SPECIES_METAPOD] =
    {
        .teachingType = TM_ILLITERATE,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_BUTTERFREE_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CATERPIE

#if P_FAMILY_WEEDLE
    [SPECIES_WEEDLE] =
    {
        .monFleeRate = 15,
        .teachingType = TM_ILLITERATE,
    },

    [SPECIES_KAKUNA] =
    {
        .teachingType = TM_ILLITERATE,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BEEDRILL_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
    [SPECIES_PIDGEY] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PIDGEOT_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_RATTATA
    [SPECIES_RATTATA_OUTSIDER] =
    {
        .isAlolanForm = TRUE,
    },

    [SPECIES_RATICATE_OUTSIDER] =
    {
        .isAlolanForm = TRUE,
    },

#if P_ALOLAN_FORMS
    [SPECIES_RATICATE_OUTSIDER_TOTEM] =
    {
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RATTATA

#if P_FAMILY_SPEAROW
    [SPECIES_SPEAROW] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_SPEAROW

#if P_FAMILY_PIKACHU
#if P_GIGANTAMAX_FORMS
    [SPECIES_PIKACHU_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_PIKACHU_STARTER] =
    {
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },

#if P_ALOLAN_FORMS
    [SPECIES_RAICHU_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_RAICHU_MEGA_X] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_RAICHU_MEGA_Y] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
#if P_ALOLAN_FORMS
    [SPECIES_SANDSHREW_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },

    [SPECIES_SANDSLASH_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_CLEFAIRY
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CLEFABLE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
#if P_ALOLAN_FORMS
    [SPECIES_VULPIX_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },

    [SPECIES_NINETALES_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX

#if P_FAMILY_DIGLETT
    [SPECIES_DIGLETT] =
    {
        .isTelekinesisBanned = TRUE,
    },

    [SPECIES_DUGTRIO] =
    {
        .isTelekinesisBanned = TRUE,
    },

#if P_ALOLAN_FORMS
    [SPECIES_DIGLETT_ALOLA] =
    {
        .isAlolanForm = TRUE,
        .isTelekinesisBanned = TRUE,
    },

    [SPECIES_DUGTRIO_ALOLA] =
    {
        .isAlolanForm = TRUE,
        .isTelekinesisBanned = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
    [SPECIES_MEOWTH_OUTSIDER] =
    {
        .isAlolanForm = TRUE,
    },

    [SPECIES_PERSIAN_OUTSIDER] =
    {
        .isAlolanForm = TRUE,
    },

#if P_GALARIAN_FORMS
    [SPECIES_MEOWTH_GALAR] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_MEOWTH_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_GROWLITHE
#if P_HISUIAN_FORMS
    [SPECIES_GROWLITHE_HISUI] =
    {
        .isHisuianForm = TRUE,
    },

    [SPECIES_ARCANINE_HISUI] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_ABRA
#if P_MEGA_EVOLUTIONS
    [SPECIES_ALAKAZAM_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
#if P_GIGANTAMAX_FORMS
    [SPECIES_MACHAMP_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_VICTREEBEL_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_GEODUDE
#if P_ALOLAN_FORMS
    [SPECIES_GEODUDE_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },

    [SPECIES_GRAVELER_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },

    [SPECIES_GOLEM_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
#if P_GALARIAN_FORMS
    [SPECIES_PONYTA_GALAR] =
    {
        .isGalarianForm = TRUE,
    },

    [SPECIES_RAPIDASH_GALAR] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
#if P_MEGA_EVOLUTIONS
    [SPECIES_SLOWBRO_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
    [SPECIES_SLOWPOKE_GALAR] =
    {
        .isGalarianForm = TRUE,
    },

    [SPECIES_SLOWBRO_GALAR] =
    {
        .isGalarianForm = TRUE,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING_GALAR] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_FARFETCHD
    [SPECIES_FARFETCHD] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },

#if P_GALARIAN_FORMS
    [SPECIES_FARFETCHD_GALAR] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
    [SPECIES_DODUO] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },

    [SPECIES_DODRIO] =
    {
        .isSkyBattleBanned = B_SKY_BATTLE_STRICT_ELIGIBILITY,
    },
#endif //P_FAMILY_DODUO

#if P_FAMILY_GRIMER
#if P_ALOLAN_FORMS
    [SPECIES_GRIMER_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },

    [SPECIES_MUK_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GRIMER

#if P_FAMILY_GASTLY
    [SPECIES_GASTLY] =
    {
        .monFleeRate = 10,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GENGAR_MEGA] =
    {
        .isMegaEvolution = TRUE,
        .isTelekinesisBanned = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_GENGAR_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
#if P_GEN_2_CROSS_EVOS
#if P_MEGA_EVOLUTIONS
    [SPECIES_STEELIX_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX

#if P_FAMILY_KRABBY
#if P_GIGANTAMAX_FORMS
    [SPECIES_KINGLER_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
#if P_HISUIAN_FORMS
    [SPECIES_VOLTORB_HISUI] =
    {
        .isHisuianForm = TRUE,
    },

    [SPECIES_ELECTRODE_HISUI] =
    {
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
#if P_ALOLAN_FORMS
    [SPECIES_EXEGGUTOR_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
#if P_ALOLAN_FORMS
    [SPECIES_MAROWAK_ALOLA] =
    {
        .isAlolanForm = TRUE,
    },

    [SPECIES_MAROWAK_ALOLA_TOTEM] =
    {
        .isTotem = TRUE,
        .isAlolanForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CUBONE

#if P_FAMILY_KOFFING
#if P_GALARIAN_FORMS
    [SPECIES_WEEZING_GALAR] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_KOFFING

#if P_FAMILY_KANGASKHAN
#if P_MEGA_EVOLUTIONS
    [SPECIES_KANGASKHAN_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_STARYU
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_STARMIE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
#if P_GALARIAN_FORMS
    [SPECIES_MR_MIME_GALAR] =
    {
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
#if P_GEN_2_CROSS_EVOS
#if P_MEGA_EVOLUTIONS
    [SPECIES_SCIZOR_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_PINSIR
#if P_MEGA_EVOLUTIONS
    [SPECIES_PINSIR_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
#if P_PALDEAN_FORMS
    [SPECIES_TAUROS_PALDEA_COMBAT] =
    {
        .isPaldeanForm = TRUE,
    },

    [SPECIES_TAUROS_PALDEA_BLAZE] =
    {
        .isPaldeanForm = TRUE,
    },

    [SPECIES_TAUROS_PALDEA_AQUA] =
    {
        .isPaldeanForm = TRUE,
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_TAUROS

#if P_FAMILY_MAGIKARP
    [SPECIES_MAGIKARP] =
    {
        .teachingType = TM_ILLITERATE,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GYARADOS_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
#if P_GIGANTAMAX_FORMS
    [SPECIES_LAPRAS_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_DITTO
    [SPECIES_DITTO] =
    {
        .teachingType = TM_ILLITERATE,
    },
#endif //P_FAMILY_DITTO

#if P_FAMILY_EEVEE
#if P_GIGANTAMAX_FORMS
    [SPECIES_EEVEE_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_EEVEE_STARTER] =
    {
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },
#endif //P_FAMILY_EEVEE

#if P_FAMILY_PORYGON
#if P_GEN_2_CROSS_EVOS
#if P_GEN_4_CROSS_EVOS
    [SPECIES_PORYGON_Z_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_AERODACTYL
#if P_MEGA_EVOLUTIONS
    [SPECIES_AERODACTYL_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
#if P_GIGANTAMAX_FORMS
    [SPECIES_SNORLAX_GMAX] =
    {
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
    [SPECIES_ARTICUNO_GALARIAN] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GALARIAN_FORMS
    [SPECIES_ARTICUNO] =
    {
        .isSubLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
    [SPECIES_ZAPDOS_GALARIAN] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZAPDOS] =
    {
        .isSubLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
    [SPECIES_MOLTRES_GALARIAN] =
    {
        .isSubLegendary = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_GALARIAN_FORMS
    [SPECIES_MOLTRES] =
    {
        .isSubLegendary = TRUE,
        .isGalarianForm = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DRAGONITE_MEGA] =
    {
        .isMegaEvolution = TRUE,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
    [SPECIES_MEWTWO] =
    {
        .isRestrictedLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEWTWO_MEGA_X] =
    {
        .isRestrictedLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },

    [SPECIES_MEWTWO_MEGA_Y] =
    {
        .isRestrictedLegendary = TRUE,
        .isMegaEvolution = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEWTWO

#if P_FAMILY_MEW
    [SPECIES_MEW] =
    {
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .perfectIVCount = LEGENDARY_PERFECT_IV_COUNT,
        .teachingType = ALL_TEACHABLES,
    },
#endif //P_FAMILY_MEW

#ifdef __INTELLISENSE__
};
#endif
