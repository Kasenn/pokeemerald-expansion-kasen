#ifdef __INTELLISENSE__
const struct SpeciesBaseInfo gSpeciesBaseInfoGen2[] =
{
#endif

#if P_FAMILY_CHIKORITA
    [SPECIES_CHIKORITA] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 49,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .levelUpLearnset = sChikoritaLevelUpLearnset,
        .teachableLearnset = sChikoritaTeachableLearnset,
        .eggMoveLearnset = sChikoritaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BAYLEEF}),
    },

    [SPECIES_BAYLEEF] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 63,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 141,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .levelUpLearnset = sBayleefLevelUpLearnset,
        .teachableLearnset = sBayleefTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_MEGANIUM}),
    },

    [SPECIES_MEGANIUM] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 100,
        .baseSpeed     = 80,
        .baseSpAttack  = 83,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 208,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .levelUpLearnset = sMeganiumLevelUpLearnset,
        .teachableLearnset = sMeganiumTeachableLearnset,
        .formSpeciesIdTable = sMeganiumFormSpeciesIdTable,
        .formChangeTable = sMeganiumFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MEGANIUM_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 92,
        .baseDefense   = 115,
        .baseSpeed     = 80,
        .baseSpAttack  = 143,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FAIRY),
        .catchRate = 45,
        .expYield = 263,
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_MEGA_SOL, ABILITY_MEGA_SOL, ABILITY_MEGA_SOL },
        .levelUpLearnset = sMeganiumLevelUpLearnset,
        .teachableLearnset = sMeganiumTeachableLearnset,
        .formSpeciesIdTable = sMeganiumFormSpeciesIdTable,
        .formChangeTable = sMeganiumFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHIKORITA

#if P_FAMILY_CYNDAQUIL
    [SPECIES_CYNDAQUIL] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .levelUpLearnset = sCyndaquilLevelUpLearnset,
        .teachableLearnset = sCyndaquilTeachableLearnset,
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_QUILAVA}),
    },

    [SPECIES_QUILAVA] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .levelUpLearnset = sQuilavaLevelUpLearnset,
        .teachableLearnset = sQuilavaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_TYPHLOSION},
                                {EVO_ITEM, ITEM_ANCIENT_STONE, SPECIES_TYPHLOSION_HISUI}),
    },

    [SPECIES_TYPHLOSION] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 267,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 240,
    #else
        .expYield = 209,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .levelUpLearnset = sTyphlosionLevelUpLearnset,
        .teachableLearnset = sTyphlosionTeachableLearnset,
        .formSpeciesIdTable = sTyphlosionFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_TYPHLOSION_HISUI] =
    {
        .baseHP        = 73,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 95,
        .baseSpAttack  = 119,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 45,
        .expYield = 267,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FRISK },
        .levelUpLearnset = sTyphlosionHisuiLevelUpLearnset,
        .teachableLearnset = sTyphlosionHisuiTeachableLearnset,
        .formSpeciesIdTable = sTyphlosionFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_CYNDAQUIL

#if P_FAMILY_TOTODILE
    [SPECIES_TOTODILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 64,
        .baseSpeed     = 43,
        .baseSpAttack  = 44,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 66,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .levelUpLearnset = sTotodileLevelUpLearnset,
        .teachableLearnset = sTotodileTeachableLearnset,
        .eggMoveLearnset = sTotodileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CROCONAW}),
    },

    [SPECIES_CROCONAW] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 59,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 143,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .levelUpLearnset = sCroconawLevelUpLearnset,
        .teachableLearnset = sCroconawTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_FERALIGATR}),
    },

    [SPECIES_FERALIGATR] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 79,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE },
        .levelUpLearnset = sFeraligatrLevelUpLearnset,
        .teachableLearnset = sFeraligatrTeachableLearnset,
        .formSpeciesIdTable = sFeraligatrFormSpeciesIdTable,
        .formChangeTable = sFeraligatrFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FERALIGATR_MEGA] =
    {
        .baseHP        = 85,
        .baseAttack    = 160,
        .baseDefense   = 125,
        .baseSpeed     = 78,
        .baseSpAttack  = 89,
        .baseSpDefense = 93,
        .types = MON_TYPES(TYPE_WATER, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = 265,
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_DRAGONIZE, ABILITY_NONE, ABILITY_DRAGONIZE },
        .levelUpLearnset = sFeraligatrLevelUpLearnset,
        .teachableLearnset = sFeraligatrTeachableLearnset,
        .formSpeciesIdTable = sFeraligatrFormSpeciesIdTable,
        .formChangeTable = sFeraligatrFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TOTODILE

#if P_FAMILY_SENTRET
    [SPECIES_SENTRET] =
    {
        .baseHP        = 35,
        .baseAttack    = 46,
        .baseDefense   = 34,
        .baseSpeed     = 20,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 43 : 57,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_FRISK },
        .levelUpLearnset = sSentretLevelUpLearnset,
        .teachableLearnset = sSentretTeachableLearnset,
        .eggMoveLearnset = sSentretEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_FURRET}),
    },

    [SPECIES_FURRET] =
    {
        .baseHP        = 85,
        .baseAttack    = 76,
        .baseDefense   = 64,
        .baseSpeed     = 90,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_FRISK },
        .levelUpLearnset = sFurretLevelUpLearnset,
        .teachableLearnset = sFurretTeachableLearnset,
    },
#endif //P_FAMILY_SENTRET

#if P_FAMILY_HOOTHOOT
    [SPECIES_HOOTHOOT] =
    {
        .baseHP        = 60,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 36,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 52 : 58,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS },
        .levelUpLearnset = sHoothootLevelUpLearnset,
        .teachableLearnset = sHoothootTeachableLearnset,
        .eggMoveLearnset = sHoothootEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_NOCTOWL}),
    },

    [SPECIES_NOCTOWL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 86 : 76,
        .baseSpDefense = 96,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 158,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 155,
    #else
        .expYield = 162,
    #endif
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS },
        .levelUpLearnset = sNoctowlLevelUpLearnset,
        .teachableLearnset = sNoctowlTeachableLearnset,
    },
#endif //P_FAMILY_HOOTHOOT

#if P_FAMILY_LEDYBA
    [SPECIES_LEDYBA] =
    {
        .baseHP        = 40,
        .baseAttack    = 20,
        .baseDefense   = 30,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 54,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_RATTLED },
        .levelUpLearnset = sLedybaLevelUpLearnset,
        .teachableLearnset = sLedybaTeachableLearnset,
        .eggMoveLearnset = sLedybaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_LEDIAN}),
    },

    [SPECIES_LEDIAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 134,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_IRON_FIST, ABILITY_EARLY_BIRD, ABILITY_RAPID_FISTS },
        .levelUpLearnset = sLedianLevelUpLearnset,
        .teachableLearnset = sLedianTeachableLearnset,
    },
#endif //P_FAMILY_LEDYBA

#if P_FAMILY_SPINARAK
    [SPECIES_SPINARAK] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 54,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_INSOMNIA, ABILITY_SNIPER },
        .levelUpLearnset = sSpinarakLevelUpLearnset,
        .teachableLearnset = sSpinarakTeachableLearnset,
        .eggMoveLearnset = sSpinarakEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARIADOS}),
    },

    [SPECIES_ARIADOS] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = P_UPDATED_STATS >= GEN_7 ? 70 : 60,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 140,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 137,
    #else
        .expYield = 134,
    #endif
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_INSOMNIA, ABILITY_SNIPER },
        .levelUpLearnset = sAriadosLevelUpLearnset,
        .teachableLearnset = sAriadosTeachableLearnset,
        .formSpeciesIdTable = sAriadosFormSpeciesIdTable,
        .formChangeTable = sAriadosFormChangeTable
    },

    [SPECIES_ARIADOS_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .abilities = { ABILITY_HIVE_LEADER, ABILITY_HIVE_LEADER, ABILITY_HIVE_LEADER },
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 140,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 137,
    #else
        .expYield = 134,
    #endif
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .levelUpLearnset = sAriadosLevelUpLearnset,
        .teachableLearnset = sAriadosTeachableLearnset,
        .formSpeciesIdTable = sAriadosFormSpeciesIdTable,
        .formChangeTable = sAriadosFormChangeTable
    },
#endif //P_FAMILY_SPINARAK

#if P_FAMILY_CHINCHOU
    [SPECIES_CHINCHOU] =
    {
        .baseHP        = 75,
        .baseAttack    = 38,
        .baseDefense   = 38,
        .baseSpeed     = 67,
        .baseSpAttack  = 56,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 90,
        .evYield_HP = 1,
        .itemRare = ITEM_YELLOW_SHARD,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE, ABILITY_WATER_ABSORB },
        .levelUpLearnset = sChinchouLevelUpLearnset,
        .teachableLearnset = sChinchouTeachableLearnset,
        .eggMoveLearnset = sChinchouEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_LANTURN}),
    },

    [SPECIES_LANTURN] =
    {
        .baseHP        = 125,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 67,
        .baseSpAttack  = 76,
        .baseSpDefense = 76,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 156,
        .evYield_HP = 2,
        .itemRare = ITEM_YELLOW_SHARD,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE, ABILITY_WATER_ABSORB },
        .levelUpLearnset = sLanturnLevelUpLearnset,
        .teachableLearnset = sLanturnTeachableLearnset,
    },
#endif //P_FAMILY_CHINCHOU

#if P_FAMILY_TOGEPI
#define TOGEPI_FAMILY_TYPE1 (P_UPDATED_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL)

    [SPECIES_TOGEPI] =
    {
        .baseHP        = 35,
        .baseAttack    = 20,
        .baseDefense   = 65,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = MON_TYPES(TOGEPI_FAMILY_TYPE1),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 49 : 74,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = 120,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .levelUpLearnset = sTogepiLevelUpLearnset,
        .teachableLearnset = sTogepiTeachableLearnset,
        .eggMoveLearnset = sTogepiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_TOGETIC, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD})}),
    },

    [SPECIES_TOGETIC] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 105,
        .types = MON_TYPES(TOGEPI_FAMILY_TYPE1, TYPE_FLYING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 114,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .levelUpLearnset = sTogeticLevelUpLearnset,
        .teachableLearnset = sTogeticTeachableLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_TOGEKISS}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TOGEKISS] =
    {
        .baseHP        = 85,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 120,
        .baseSpDefense = 115,
        .types = MON_TYPES(TOGEPI_FAMILY_TYPE1, TYPE_FLYING),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 273,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 245,
    #else
        .expYield = 220,
    #endif
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .levelUpLearnset = sTogekissLevelUpLearnset,
        .teachableLearnset = sTogekissTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI

#if P_FAMILY_NATU
    [SPECIES_NATU] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 64 : 73,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sNatuLevelUpLearnset,
        .teachableLearnset = sNatuTeachableLearnset,
        .eggMoveLearnset = sNatuEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_XATU}),
    },

    [SPECIES_XATU] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 165 : 171,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE },
        .levelUpLearnset = sXatuLevelUpLearnset,
        .teachableLearnset = sXatuTeachableLearnset,
    },
#endif //P_FAMILY_NATU

#if P_FAMILY_MAREEP
    [SPECIES_MAREEP] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 59,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS },
        .levelUpLearnset = sMareepLevelUpLearnset,
        .teachableLearnset = sMareepTeachableLearnset,
        .eggMoveLearnset = sMareepEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_FLAAFFY}),
    },

    [SPECIES_FLAAFFY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 128 : 117,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS },
        .levelUpLearnset = sFlaaffyLevelUpLearnset,
        .teachableLearnset = sFlaaffyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_AMPHAROS}),
    },

    [SPECIES_AMPHAROS] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 85 : 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 255,
    #elif P_UPDATED_EXP_YIELDS >= GEN_6
        .expYield = 230,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 225,
    #else
        .expYield = 194,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS },
        .levelUpLearnset = sAmpharosLevelUpLearnset,
        .teachableLearnset = sAmpharosTeachableLearnset,
        .formSpeciesIdTable = sAmpharosFormSpeciesIdTable,
        .formChangeTable = sAmpharosFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AMPHAROS_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = 105,
        .baseSpeed     = 45,
        .baseSpAttack  = 165,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 305 : 275,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .levelUpLearnset = sAmpharosLevelUpLearnset,
        .teachableLearnset = sAmpharosTeachableLearnset,
        .formSpeciesIdTable = sAmpharosFormSpeciesIdTable,
        .formChangeTable = sAmpharosFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAREEP

#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
    [SPECIES_AZURILL] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 40,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_NORMAL),
    #endif
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 38 : 33,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 120,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .levelUpLearnset = sAzurillLevelUpLearnset,
        .teachableLearnset = sAzurillTeachableLearnset,
        .eggMoveLearnset = sAzurillEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_MARILL, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD})}),
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_MARILL] =
    {
        .baseHP        = 70,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 50,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_WATER),
    #endif
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 88 : 58,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .levelUpLearnset = sMarillLevelUpLearnset,
        .teachableLearnset = sMarillTeachableLearnset,
        .eggMoveLearnset = sMarillEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_AZUMARILL}),
    },

    [SPECIES_AZUMARILL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 60 : 50,
        .baseSpDefense = 80,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_WATER),
    #endif
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 210,
    #elif P_UPDATED_EXP_YIELDS >= GEN_6
        .expYield = 189,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 185,
    #else
        .expYield = 153,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .levelUpLearnset = sAzumarillLevelUpLearnset,
        .teachableLearnset = sAzumarillTeachableLearnset,
    },
#endif //P_FAMILY_MARILL

#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BONSLY] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 68,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED },
        .levelUpLearnset = sBonslyLevelUpLearnset,
        .teachableLearnset = sBonslyTeachableLearnset,
        .eggMoveLearnset = sBonslyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SUDOWOODO, CONDITIONS({IF_KNOWS_MOVE, MOVE_MIMIC})}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_SUDOWOODO] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 95,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 135,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED },
        .levelUpLearnset = sSudowoodoLevelUpLearnset,
        .teachableLearnset = sSudowoodoTeachableLearnset,
        .eggMoveLearnset = sSudowoodoEggMoveLearnset,
    },
#endif //P_FAMILY_SUDOWOODO

#if P_FAMILY_HOPPIP
    [SPECIES_HOPPIP] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 74,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_INFILTRATOR },
    #endif
        .levelUpLearnset = sHoppipLevelUpLearnset,
        .teachableLearnset = sHoppipTeachableLearnset,
        .eggMoveLearnset = sHoppipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_SKIPLOOM}),
    },

    [SPECIES_SKIPLOOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 136,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_INFILTRATOR },
    #endif
        .levelUpLearnset = sSkiploomLevelUpLearnset,
        .teachableLearnset = sSkiploomTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_JUMPLUFF}),
    },

    [SPECIES_JUMPLUFF] =
    {
        .baseHP        = 75,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 55,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 230,
    #elif P_UPDATED_EXP_YIELDS >= GEN_6
        .expYield = 207,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 203,
    #else
        .expYield = 176,
    #endif
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_INFILTRATOR },
    #endif
        .levelUpLearnset = sJumpluffLevelUpLearnset,
        .teachableLearnset = sJumpluffTeachableLearnset,
    },
#endif //P_FAMILY_HOPPIP

#if P_FAMILY_AIPOM
    [SPECIES_AIPOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 72 : 94,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_SKILL_LINK },
        .levelUpLearnset = sAipomLevelUpLearnset,
        .teachableLearnset = sAipomTeachableLearnset,
        .eggMoveLearnset = sAipomEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_AMBIPOM, CONDITIONS({IF_KNOWS_MOVE, MOVE_DOUBLE_HIT})}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_AMBIPOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 66,
        .baseSpeed     = 115,
        .baseSpAttack  = 60,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 169 : 186,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TECHNICIAN, ABILITY_PICKUP, ABILITY_SKILL_LINK },
        .levelUpLearnset = sAmbipomLevelUpLearnset,
        .teachableLearnset = sAmbipomTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM

#if P_FAMILY_SUNKERN
    [SPECIES_SUNKERN] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 36 : 52,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EARLY_BIRD },
    #endif
        .levelUpLearnset = sSunkernLevelUpLearnset,
        .teachableLearnset = sSunkernTeachableLearnset,
        .eggMoveLearnset = sSunkernEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}),
    },

    [SPECIES_SUNFLORA] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 149 : 146,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EARLY_BIRD },
    #endif
        .levelUpLearnset = sSunfloraLevelUpLearnset,
        .teachableLearnset = sSunfloraTeachableLearnset,
    },
#endif //P_FAMILY_SUNKERN

#if P_FAMILY_YANMA
    [SPECIES_YANMA] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 78 : 147,
        .evYield_Speed = (P_UPDATED_EVS >= GEN_4) ? 1 : 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_COMPOUND_EYES, ABILITY_FRISK },
        .levelUpLearnset = sYanmaLevelUpLearnset,
        .teachableLearnset = sYanmaTeachableLearnset,
        .eggMoveLearnset = sYanmaEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_YANMEGA, CONDITIONS({IF_KNOWS_MOVE, MOVE_ANCIENT_POWER})}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_YANMEGA] =
    {
        .baseHP        = 86,
        .baseAttack    = 76,
        .baseDefense   = 86,
        .baseSpeed     = 95,
        .baseSpAttack  = 116,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 198,
        .evYield_Attack = 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SPEED_BOOST, ABILITY_TINTED_LENS, ABILITY_FRISK },
        .levelUpLearnset = sYanmegaLevelUpLearnset,
        .teachableLearnset = sYanmegaTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA

#if P_FAMILY_WOOPER
    [SPECIES_WOOPER_OUTSIDER] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 42 : 52,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_DAMP, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .levelUpLearnset = sWooperLevelUpLearnset,
        .teachableLearnset = sWooperTeachableLearnset,
        .eggMoveLearnset = sWooperEggMoveLearnset,
        .formSpeciesIdTable = sWooperFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_QUAGSIRE}),
    },

    [SPECIES_QUAGSIRE] =
    {
        .baseHP        = 95,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 151 : 137,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_DAMP, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .levelUpLearnset = sQuagsireLevelUpLearnset,
        .teachableLearnset = sQuagsireTeachableLearnset,
    },

#if P_PALDEAN_FORMS
    [SPECIES_WOOPER] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_POISON, TYPE_GROUND),
        .catchRate = 255,
        .expYield = 42,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_POINT, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .levelUpLearnset = sWooperPaldeaLevelUpLearnset,
        .teachableLearnset = sWooperPaldeaTeachableLearnset,
        .eggMoveLearnset = sWooperPaldeaEggMoveLearnset,
        .formSpeciesIdTable = sWooperFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_CLODSIRE}),
    },

    [SPECIES_CLODSIRE] =
    {
        .baseHP        = 130,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON, TYPE_GROUND),
        .catchRate = 90,
        .expYield = 151,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_POINT, ABILITY_WATER_ABSORB, ABILITY_UNAWARE },
        .levelUpLearnset = sClodsireLevelUpLearnset,
        .teachableLearnset = sClodsireTeachableLearnset,
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_WOOPER

#if P_FAMILY_MURKROW
    [SPECIES_MURKROW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 42,
        .baseSpeed     = 91,
        .baseSpAttack  = 85,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 81 : 107,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_PRANKSTER },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_PRANKSTER },
    #endif
        .levelUpLearnset = sMurkrowLevelUpLearnset,
        .teachableLearnset = sMurkrowTeachableLearnset,
        .eggMoveLearnset = sMurkrowEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_HONCHKROW}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_HONCHKROW] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 52,
        .baseSpeed     = 71,
        .baseSpAttack  = 105,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 187,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_MOXIE },
        .levelUpLearnset = sHonchkrowLevelUpLearnset,
        .teachableLearnset = sHonchkrowTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW

#if P_FAMILY_MISDREAVUS
    [SPECIES_MISDREAVUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 87 : 147,
        .evYield_SpAttack = (P_UPDATED_EVS >= GEN_4) ? 0 : 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sMisdreavusLevelUpLearnset,
        .teachableLearnset = sMisdreavusTeachableLearnset,
        .eggMoveLearnset = sMisdreavusEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_MISMAGIUS}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MISMAGIUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 187,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sMismagiusLevelUpLearnset,
        .teachableLearnset = sMismagiusTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MISDREAVUS

#if P_FAMILY_UNOWN
#define UNOWN_MISC_INFO_BASE(letter, _noFlip, frontWidth, frontHeight, backWidth, backHeight, backYOffset)   \
    {                                                                                                   \
        .baseHP        = 48,                                                                            \
        .baseAttack    = 72,                                                                            \
        .baseDefense   = 48,                                                                            \
        .baseSpeed     = 48,                                                                            \
        .baseSpAttack  = 72,                                                                            \
        .baseSpDefense = 48,                                                                            \
        .types = MON_TYPES(TYPE_PSYCHIC),                                                               \
        .catchRate = 225,                                                                               \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 118 : 61,                                         \
        .evYield_Attack = 1,                                                                            \
        .evYield_SpAttack = 1,                                                                          \
        .genderRatio = MON_GENDERLESS,                                                                  \
        .eggCycles = 40,                                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                                      \
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },                                  \
        .levelUpLearnset = sUnownLevelUpLearnset,                                                       \
        .teachableLearnset = sUnownTeachableLearnset,                                                   \
        .formSpeciesIdTable = sUnownFormSpeciesIdTable,                                                 \
    }

    [SPECIES_UNOWN]             = UNOWN_MISC_INFO_BASE(A,           FALSE, 24, 40, 24, 48,  8 ),
    [SPECIES_UNOWN_B]           = UNOWN_MISC_INFO_BASE(B,           TRUE,  24, 32, 40, 48,  9 ),
    [SPECIES_UNOWN_C]           = UNOWN_MISC_INFO_BASE(C,           TRUE,  32, 32, 48, 56,  6 ),
    [SPECIES_UNOWN_D]           = UNOWN_MISC_INFO_BASE(D,           TRUE,  32, 32, 40, 48,  8 ),
    [SPECIES_UNOWN_E]           = UNOWN_MISC_INFO_BASE(E,           TRUE,  32, 32, 40, 48, 10 ),
    [SPECIES_UNOWN_F]           = UNOWN_MISC_INFO_BASE(F,           TRUE,  32, 32, 48, 48, 10 ),
    [SPECIES_UNOWN_G]           = UNOWN_MISC_INFO_BASE(G,           TRUE,  24, 40, 40, 56,  5 ),
    [SPECIES_UNOWN_H]           = UNOWN_MISC_INFO_BASE(H,           TRUE,  32, 32, 48, 48,  8 ),
    [SPECIES_UNOWN_I]           = UNOWN_MISC_INFO_BASE(I,           FALSE, 24, 32, 24, 56,  7 ),
    [SPECIES_UNOWN_J]           = UNOWN_MISC_INFO_BASE(J,           TRUE,  24, 32, 32, 48,  9 ),
    [SPECIES_UNOWN_K]           = UNOWN_MISC_INFO_BASE(K,           TRUE,  32, 32, 40, 56,  7 ),
    [SPECIES_UNOWN_L]           = UNOWN_MISC_INFO_BASE(L,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_M]           = UNOWN_MISC_INFO_BASE(M,           FALSE, 32, 32, 48, 40, 13 ),
    [SPECIES_UNOWN_N]           = UNOWN_MISC_INFO_BASE(N,           TRUE,  32, 24, 48, 40, 13 ),
    [SPECIES_UNOWN_O]           = UNOWN_MISC_INFO_BASE(O,           FALSE, 32, 32, 48, 48,  8 ),
    [SPECIES_UNOWN_P]           = UNOWN_MISC_INFO_BASE(P,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_Q]           = UNOWN_MISC_INFO_BASE(Q,           TRUE,  32, 24, 40, 40, 15 ),
    [SPECIES_UNOWN_R]           = UNOWN_MISC_INFO_BASE(R,           TRUE,  24, 32, 32, 40, 12 ),
    [SPECIES_UNOWN_S]           = UNOWN_MISC_INFO_BASE(S,           TRUE,  32, 40, 40, 56,  4 ),
    [SPECIES_UNOWN_T]           = UNOWN_MISC_INFO_BASE(T,           FALSE, 24, 32, 32, 40, 13 ),
    [SPECIES_UNOWN_U]           = UNOWN_MISC_INFO_BASE(U,           FALSE, 32, 32, 48, 40, 13 ),
    [SPECIES_UNOWN_V]           = UNOWN_MISC_INFO_BASE(V,           TRUE,  32, 32, 40, 48, 11 ),
    [SPECIES_UNOWN_W]           = UNOWN_MISC_INFO_BASE(W,           FALSE, 32, 32, 40, 40, 13 ),
    [SPECIES_UNOWN_X]           = UNOWN_MISC_INFO_BASE(X,           FALSE, 24, 24, 40, 40, 15 ),
    [SPECIES_UNOWN_Y]           = UNOWN_MISC_INFO_BASE(Y,           FALSE, 24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_Z]           = UNOWN_MISC_INFO_BASE(Z,           TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_EXCLAMATION] = UNOWN_MISC_INFO_BASE(Exclamation, FALSE, 24, 40, 24, 56,  6 ),
    [SPECIES_UNOWN_QUESTION]    = UNOWN_MISC_INFO_BASE(Question,    TRUE,  24, 40, 32, 56,  6 ),
#endif //P_FAMILY_UNOWN

#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
    [SPECIES_WYNAUT] =
    {
        .baseHP        = 95,
        .baseAttack    = 23,
        .baseDefense   = 48,
        .baseSpeed     = 23,
        .baseSpAttack  = 23,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 125,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 52 : 44,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .levelUpLearnset = sWynautLevelUpLearnset,
        .teachableLearnset = sWynautTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_WOBBUFFET}),
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_WOBBUFFET] =
    {
        .baseHP        = 190,
        .baseAttack    = 33,
        .baseDefense   = 58,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 177,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .levelUpLearnset = sWobbuffetLevelUpLearnset,
        .teachableLearnset = sWobbuffetTeachableLearnset,
    },
#endif //P_FAMILY_WOBBUFFET

#if P_FAMILY_GIRAFARIG
    [SPECIES_GIRAFARIG] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 149,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD, ABILITY_SAP_SIPPER },
        .levelUpLearnset = sGirafarigLevelUpLearnset,
        .teachableLearnset = sGirafarigTeachableLearnset,
        .eggMoveLearnset = sGirafarigEggMoveLearnset,
        // .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_FARIGIRAF, CONDITIONS({IF_KNOWS_MOVE, MOVE_TWIN_BEAM})}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_FARIGIRAF] =
    {
        .baseHP        = 120,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 260,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUD_CHEW, ABILITY_ARMOR_TAIL, ABILITY_SAP_SIPPER },
        .levelUpLearnset = sFarigirafLevelUpLearnset,
        .teachableLearnset = sFarigirafTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_GIRAFARIG

#if P_FAMILY_PINECO
    [SPECIES_PINECO] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 90,
        .baseSpeed     = 15,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 60,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_OVERCOAT },
        .levelUpLearnset = sPinecoLevelUpLearnset,
        .teachableLearnset = sPinecoTeachableLearnset,
        .eggMoveLearnset = sPinecoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_FORRETRESS}),
    },

    [SPECIES_FORRETRESS] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 118,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_OVERCOAT },
        .levelUpLearnset = sForretressLevelUpLearnset,
        .teachableLearnset = sForretressTeachableLearnset,
    },
#endif //P_FAMILY_PINECO

#if P_FAMILY_DUNSPARCE
    [SPECIES_DUNSPARCE] =
    {
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 190,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 145,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 125,
    #else
        .expYield = 75,
    #endif
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .levelUpLearnset = sDunsparceLevelUpLearnset,
        .teachableLearnset = sDunsparceTeachableLearnset,
        .eggMoveLearnset = sDunsparceEggMoveLearnset,
        // .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_DUDUNSPARCE_TWO_SEGMENT, CONDITIONS({IF_KNOWS_MOVE, MOVE_HYPER_DRILL}, {IF_PID_MODULO_100_GT, 0})},
        //                         {EVO_LEVEL, 0, SPECIES_DUDUNSPARCE_THREE_SEGMENT, CONDITIONS({IF_KNOWS_MOVE, MOVE_HYPER_DRILL}, {IF_PID_MODULO_100_EQ, 0})}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_DUDUNSPARCE_TWO_SEGMENT] =
    {
        .baseHP        = 125,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .levelUpLearnset = sDudunsparceLevelUpLearnset,
        .teachableLearnset = sDudunsparceTeachableLearnset,
        .formSpeciesIdTable = sDudunsparceFormSpeciesIdTable,
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] =
    {
        .baseHP        = 125,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .levelUpLearnset = sDudunsparceLevelUpLearnset,
        .teachableLearnset = sDudunsparceTeachableLearnset,
        .formSpeciesIdTable = sDudunsparceFormSpeciesIdTable,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_GLIGAR
    [SPECIES_GLIGAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 105,
        .baseSpeed     = 85,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FLYING),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 86 : 108,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_IMMUNITY },
        .levelUpLearnset = sGligarLevelUpLearnset,
        .teachableLearnset = sGligarTeachableLearnset,
        .eggMoveLearnset = sGligarEggMoveLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_GLISCOR, CONDITIONS({IF_TIME, TIME_NIGHT}, {IF_HOLD_ITEM, ITEM_RAZOR_FANG})},
                                {EVO_ITEM, ITEM_RAZOR_FANG, SPECIES_GLISCOR, CONDITIONS({IF_TIME, TIME_NIGHT})}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_GLISCOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 125,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 179 : 192,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_POISON_HEAL },
        .levelUpLearnset = sGliscorLevelUpLearnset,
        .teachableLearnset = sGliscorTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR

#if P_FAMILY_SNUBBULL
    [SPECIES_SNUBBULL] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_NORMAL),
    #endif
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 63,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .levelUpLearnset = sSnubbullLevelUpLearnset,
        .teachableLearnset = sSnubbullTeachableLearnset,
        .eggMoveLearnset = sSnubbullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_GRANBULL}),
    },

    [SPECIES_GRANBULL] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_NORMAL),
    #endif
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 178,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_RATTLED },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RATTLED },
    #endif
        .levelUpLearnset = sGranbullLevelUpLearnset,
        .teachableLearnset = sGranbullTeachableLearnset,
    },
#endif //P_FAMILY_SNUBBULL

#if P_FAMILY_QWILFISH
    [SPECIES_QWILFISH] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 85 : 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER, TYPE_POISON),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 88,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 86,
    #else
        .expYield = 100,
    #endif
        .evYield_Attack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },
        .levelUpLearnset = sQwilfishLevelUpLearnset,
        .teachableLearnset = sQwilfishTeachableLearnset,
        .eggMoveLearnset = sQwilfishEggMoveLearnset,
        .formSpeciesIdTable = sQwilfishFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_QWILFISH_HISUI] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .catchRate = 45,
        .expYield = 88,
        .evYield_Attack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },
        .levelUpLearnset = sQwilfishHisuiLevelUpLearnset,
        .teachableLearnset = sQwilfishHisuiTeachableLearnset,
        .eggMoveLearnset = sQwilfishHisuiEggMoveLearnset,
        .formSpeciesIdTable = sQwilfishFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_OVERQWIL, CONDITIONS({IF_KNOWS_MOVE, MOVE_BARB_BARRAGE})}),
    },

    [SPECIES_OVERQWIL] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE },
        .levelUpLearnset = sOverqwilLevelUpLearnset,
        .teachableLearnset = sOverqwilTeachableLearnset,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_QWILFISH

#if P_FAMILY_SHUCKLE
    [SPECIES_SHUCKLE] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 230,
        .baseSpeed     = 5,
        .baseSpAttack  = 10,
        .baseSpDefense = 230,
        .types = MON_TYPES(TYPE_BUG, TYPE_ROCK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 80,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_BERRY_JUICE,
        .itemRare = ITEM_BERRY_JUICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_STURDY, ABILITY_GLUTTONY, ABILITY_CONTRARY },
    #else
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_CONTRARY },
    #endif
        .levelUpLearnset = sShuckleLevelUpLearnset,
        .teachableLearnset = sShuckleTeachableLearnset,
        .eggMoveLearnset = sShuckleEggMoveLearnset,
    },
#endif //P_FAMILY_SHUCKLE

#if P_FAMILY_HERACROSS
    [SPECIES_HERACROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 200,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_GUTS, ABILITY_MOXIE },
        .levelUpLearnset = sHeracrossLevelUpLearnset,
        .teachableLearnset = sHeracrossTeachableLearnset,
        .eggMoveLearnset = sHeracrossEggMoveLearnset,
        .formSpeciesIdTable = sHeracrossFormSpeciesIdTable,
        .formChangeTable = sHeracrossFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_HERACROSS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 185,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SKILL_LINK, ABILITY_SKILL_LINK, ABILITY_SKILL_LINK },
        .levelUpLearnset = sHeracrossLevelUpLearnset,
        .teachableLearnset = sHeracrossTeachableLearnset,
        .eggMoveLearnset = sHeracrossEggMoveLearnset,
        .formSpeciesIdTable = sHeracrossFormSpeciesIdTable,
        .formChangeTable = sHeracrossFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HERACROSS

#if P_FAMILY_SNEASEL
    [SPECIES_SNEASEL] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 35,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_ICE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 86 : 132,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET },
        .levelUpLearnset = sSneaselLevelUpLearnset,
        .teachableLearnset = sSneaselTeachableLearnset,
        .eggMoveLearnset = sSneaselEggMoveLearnset,
        .formSpeciesIdTable = sSneaselFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_WEAVILE, CONDITIONS({IF_TIME, TIME_NIGHT}, {IF_HOLD_ITEM, ITEM_RAZOR_CLAW})}, 
                                {EVO_ITEM, ITEM_RAZOR_CLAW, SPECIES_WEAVILE, CONDITIONS({IF_TIME, TIME_NIGHT})},
                                {EVO_ITEM, ITEM_ANCIENT_STONE, SPECIES_SNEASLER}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_WEAVILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 125,
        .baseSpAttack  = 45,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DARK, TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 179 : 199,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_PICKPOCKET },
        .levelUpLearnset = sWeavileLevelUpLearnset,
        .teachableLearnset = sWeavileTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_HISUIAN_FORMS
    [SPECIES_SNEASEL_HISUI] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 35,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_POISON),
        .catchRate = 60,
        .expYield = 86,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET },
        .levelUpLearnset = sSneaselHisuiLevelUpLearnset,
        .teachableLearnset = sSneaselHisuiTeachableLearnset,
        .eggMoveLearnset = sSneaselHisuiEggMoveLearnset,
        .formSpeciesIdTable = sSneaselFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_SNEASLER, CONDITIONS({IF_NOT_TIME, TIME_NIGHT}, {IF_HOLD_ITEM, ITEM_RAZOR_CLAW})},
                                {EVO_ITEM, ITEM_RAZOR_CLAW, SPECIES_SNEASLER, CONDITIONS({IF_NOT_TIME, TIME_NIGHT})}),
    },

    [SPECIES_SNEASLER] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 120,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_POISON),
        .catchRate = 20,
        .expYield = 102,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PRESSURE, ABILITY_UNBURDEN, ABILITY_POISON_TOUCH },
        .levelUpLearnset = sSneaslerLevelUpLearnset,
        .teachableLearnset = sSneaslerTeachableLearnset,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_SNEASEL

#if P_FAMILY_TEDDIURSA
    [SPECIES_TEDDIURSA] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 160,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 124,
        .evYield_Attack = 1,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_PICKUP, ABILITY_QUICK_FEET, ABILITY_HONEY_GATHER },
    #else
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_HONEY_GATHER },
    #endif
        .levelUpLearnset = sTeddiursaLevelUpLearnset,
        .teachableLearnset = sTeddiursaTeachableLearnset,
        .eggMoveLearnset = sTeddiursaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_URSARING}),
    },

    [SPECIES_URSARING] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 189,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_QUICK_FEET, ABILITY_UNNERVE },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_UNNERVE },
    #endif
        .levelUpLearnset = sUrsaringLevelUpLearnset,
        .teachableLearnset = sUrsaringTeachableLearnset,
    #if P_GEN_8_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_PEAT_BLOCK, SPECIES_URSALUNA, CONDITIONS({IF_REGION, REGION_HISUI}, {IF_TIME, TIME_NIGHT})},
                                {EVO_NONE, 0, SPECIES_URSALUNA_BLOODMOON}),
    #endif
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_URSALUNA] =
    {
        .baseHP        = 130,
        .baseAttack    = 140,
        .baseDefense   = 105,
        .baseSpeed     = 50,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND, TYPE_NORMAL),
        .catchRate = 20,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GUTS, ABILITY_BULLETPROOF, ABILITY_UNNERVE },
        .levelUpLearnset = sUrsalunaLevelUpLearnset,
        .teachableLearnset = sUrsalunaTeachableLearnset,
        .formSpeciesIdTable = sUrsalunaFormSpeciesIdTable,
    },

    [SPECIES_URSALUNA_BLOODMOON] =
    {
        .baseHP        = 113,
        .baseAttack    = 70,
        .baseDefense   = 120,
        .baseSpeed     = 52,
        .baseSpAttack  = 135,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND, TYPE_NORMAL),
        .catchRate = 5,
        .expYield = 278,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sUrsalunaBloodmoonLevelUpLearnset,
        .teachableLearnset = sUrsalunaBloodmoonTeachableLearnset,
        .formSpeciesIdTable = sUrsalunaFormSpeciesIdTable,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_TEDDIURSA

#if P_FAMILY_SLUGMA
    [SPECIES_SLUGMA] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 78,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sSlugmaLevelUpLearnset,
        .teachableLearnset = sSlugmaTeachableLearnset,
        .eggMoveLearnset = sSlugmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MAGCARGO}),
    },

    [SPECIES_MAGCARGO] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 60 : 50,
        .baseAttack    = 50,
        .baseDefense   = 120,
        .baseSpeed     = 30,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 90 : 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 151,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 144,
    #else
        .expYield = 154,
    #endif
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sMagcargoLevelUpLearnset,
        .teachableLearnset = sMagcargoTeachableLearnset,
    },
#endif //P_FAMILY_SLUGMA

#if P_FAMILY_SWINUB
    [SPECIES_SWINUB] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ICE, TYPE_GROUND),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 78,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_THICK_FAT },
    #endif
        .levelUpLearnset = sSwinubLevelUpLearnset,
        .teachableLearnset = sSwinubTeachableLearnset,
        .eggMoveLearnset = sSwinubEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_PILOSWINE}),
    },

    [SPECIES_PILOSWINE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE, TYPE_GROUND),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 160,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_THICK_FAT },
    #endif
        .levelUpLearnset = sPiloswineLevelUpLearnset,
        .teachableLearnset = sPiloswineTeachableLearnset,
    #if P_GEN_4_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_MAMOSWINE, CONDITIONS({IF_KNOWS_MOVE, MOVE_ANCIENT_POWER})}),
    #endif
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAMOSWINE] =
    {
        .baseHP        = 110,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE, TYPE_GROUND),
        .catchRate = 50,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 207,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT },
        .levelUpLearnset = sMamoswineLevelUpLearnset,
        .teachableLearnset = sMamoswineTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB

#if P_FAMILY_CORSOLA
    [SPECIES_CORSOLA] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 65 : 55,
        .baseAttack    = 55,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 190,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 144,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 133,
    #else
        .expYield = 113,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_RED_SHARD,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_HUSTLE, ABILITY_NATURAL_CURE, ABILITY_REGENERATOR },
        .levelUpLearnset = sCorsolaLevelUpLearnset,
        .teachableLearnset = sCorsolaTeachableLearnset,
        .eggMoveLearnset = sCorsolaEggMoveLearnset,
        .formSpeciesIdTable = sCorsolaFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_CORSOLA_GALAR] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 100,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 60,
        .expYield = 144,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY },
        .levelUpLearnset = sCorsolaGalarLevelUpLearnset,
        .teachableLearnset = sCorsolaGalarTeachableLearnset,
        .eggMoveLearnset = sCorsolaGalarEggMoveLearnset,
        .formSpeciesIdTable = sCorsolaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_CURSOLA}),
    },

    [SPECIES_CURSOLA] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 145,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 30,
        .expYield = 179,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_PERISH_BODY },
        .levelUpLearnset = sCursolaLevelUpLearnset,
        .teachableLearnset = sCursolaTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_CORSOLA

#if P_FAMILY_REMORAID
    [SPECIES_REMORAID] =
    {
        .baseHP        = 35,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 78,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .itemRare = ITEM_GREEN_SHARD,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_HUSTLE, ABILITY_SNIPER, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .levelUpLearnset = sRemoraidLevelUpLearnset,
        .teachableLearnset = sRemoraidTeachableLearnset,
        .eggMoveLearnset = sRemoraidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_OCTILLERY}),
    },

    [SPECIES_OCTILLERY] =
    {
        .baseHP        = 75,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 164,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .itemRare = ITEM_GREEN_SHARD,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_SNIPER, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .levelUpLearnset = sOctilleryLevelUpLearnset,
        .teachableLearnset = sOctilleryTeachableLearnset,
    },
#endif //P_FAMILY_REMORAID

#if P_FAMILY_DELIBIRD
    [SPECIES_DELIBIRD] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ICE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 116 : 183,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_HUSTLE, ABILITY_INSOMNIA },
        .levelUpLearnset = sDelibirdLevelUpLearnset,
        .teachableLearnset = sDelibirdTeachableLearnset,
        .eggMoveLearnset = sDelibirdEggMoveLearnset,
    },
#endif //P_FAMILY_DELIBIRD

#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MANTYKE] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 69 : 108,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL },
        .levelUpLearnset = sMantykeLevelUpLearnset,
        .teachableLearnset = sMantykeTeachableLearnset,
        .eggMoveLearnset = sMantykeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_MANTINE, CONDITIONS({IF_SPECIES_IN_PARTY, SPECIES_REMORAID})}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_MANTINE] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 85 : 65,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 140,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 25,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 170,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 163,
    #else
        .expYield = 168,
    #endif
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL },
        .levelUpLearnset = sMantineLevelUpLearnset,
        .teachableLearnset = sMantineTeachableLearnset,
        .eggMoveLearnset = sMantineEggMoveLearnset,
    },
#endif //P_FAMILY_MANTINE

#if P_FAMILY_SKARMORY
    [SPECIES_SKARMORY] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 140,
        .baseSpeed     = 70,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 163,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_STURDY, ABILITY_WEAK_ARMOR },
        .levelUpLearnset = sSkarmoryLevelUpLearnset,
        .teachableLearnset = sSkarmoryTeachableLearnset,
        .eggMoveLearnset = sSkarmoryEggMoveLearnset,
        .formSpeciesIdTable = sSkarmoryFormSpeciesIdTable,
        .formChangeTable = sSkarmoryFormChangeTable,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SKARMORY_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 140,
        .baseDefense   = 110,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .catchRate = 25,
        .expYield = 163,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_STALWART, ABILITY_STALWART, ABILITY_STALWART },
        .levelUpLearnset = sSkarmoryLevelUpLearnset,
        .teachableLearnset = sSkarmoryTeachableLearnset,
        .formSpeciesIdTable = sSkarmoryFormSpeciesIdTable,
        .formChangeTable = sSkarmoryFormChangeTable,
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SKARMORY

#if P_FAMILY_HOUNDOUR
    [SPECIES_HOUNDOUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 114,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_UNNERVE },
        .itemRare = ITEM_RAZOR_FANG,
        .levelUpLearnset = sHoundourLevelUpLearnset,
        .teachableLearnset = sHoundourTeachableLearnset,
        .eggMoveLearnset = sHoundourEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_HOUNDOOM}),
    },

    [SPECIES_HOUNDOOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 204,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_UNNERVE },
        .itemCommon = ITEM_RAZOR_FANG,
        .levelUpLearnset = sHoundoomLevelUpLearnset,
        .teachableLearnset = sHoundoomTeachableLearnset,
        .formSpeciesIdTable = sHoundoomFormSpeciesIdTable,
        .formChangeTable = sHoundoomFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_HOUNDOOM_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 115,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 210,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER },
        .levelUpLearnset = sHoundoomLevelUpLearnset,
        .teachableLearnset = sHoundoomTeachableLearnset,
        .formSpeciesIdTable = sHoundoomFormSpeciesIdTable,
        .formChangeTable = sHoundoomFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOUNDOUR

#if P_FAMILY_PHANPY
    [SPECIES_PHANPY] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 124,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_SAND_VEIL },
        .levelUpLearnset = sPhanpyLevelUpLearnset,
        .teachableLearnset = sPhanpyTeachableLearnset,
        .eggMoveLearnset = sPhanpyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_DONPHAN}),
    },

    [SPECIES_DONPHAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 189,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SAND_VEIL },
        .levelUpLearnset = sDonphanLevelUpLearnset,
        .teachableLearnset = sDonphanTeachableLearnset,
    },
#endif //P_FAMILY_PHANPY

#if P_FAMILY_STANTLER
    [SPECIES_STANTLER] =
    {
        .baseHP        = 73,
        .baseAttack    = 95,
        .baseDefense   = 62,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 165,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_SAP_SIPPER },
    #endif
        .levelUpLearnset = sStantlerLevelUpLearnset,
        .teachableLearnset = sStantlerTeachableLearnset,
        .eggMoveLearnset = sStantlerEggMoveLearnset,
    #if P_GEN_8_CROSS_EVOS
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_WYRDEER, CONDITIONS({IF_USED_MOVE_X_TIMES, MOVE_PSYSHIELD_BASH, 20})}),
    #endif
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_WYRDEER] =
    {
        .baseHP        = 103,
        .baseAttack    = 105,
        .baseDefense   = 72,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 263,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER },
        .levelUpLearnset = sWyrdeerLevelUpLearnset,
        .teachableLearnset = sWyrdeerTeachableLearnset,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_STANTLER

#if P_FAMILY_SMEARGLE
    [SPECIES_SMEARGLE] =
    {
        .baseHP        = 55,
        .baseAttack    = 20,
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 20,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 88 : 106,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_TECHNICIAN, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .levelUpLearnset = sSmeargleLevelUpLearnset,
        .teachableLearnset = sSmeargleTeachableLearnset,
    },
#endif //P_FAMILY_SMEARGLE

#if P_FAMILY_MILTANK
    [SPECIES_MILTANK] =
    {
        .baseHP        = 95,
        .baseAttack    = 80,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 200,
        .evYield_Defense = 2,
        .itemCommon = ITEM_MOOMOO_MILK,
        .itemRare = ITEM_MOOMOO_MILK,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_THICK_FAT, ABILITY_SCRAPPY, ABILITY_SAP_SIPPER },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_SAP_SIPPER },
    #endif
        .levelUpLearnset = sMiltankLevelUpLearnset,
        .teachableLearnset = sMiltankTeachableLearnset,
        .eggMoveLearnset = sMiltankEggMoveLearnset,
    },
#endif //P_FAMILY_MILTANK

#if P_FAMILY_RAIKOU
    [SPECIES_RAIKOU] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 216,
    #endif
        .evYield_Speed = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_VOLT_ABSORB },
    #endif
        .levelUpLearnset = sRaikouLevelUpLearnset,
        .teachableLearnset = sRaikouTeachableLearnset,
    },
#endif //P_FAMILY_RAIKOU

#if P_FAMILY_ENTEI
    [SPECIES_ENTEI] =
    {
        .baseHP        = 115,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 217,
    #endif
        .evYield_HP = 1,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLASH_FIRE },
    #endif
        .levelUpLearnset = sEnteiLevelUpLearnset,
        .teachableLearnset = sEnteiTeachableLearnset,
    },
#endif //P_FAMILY_ENTEI

#if P_FAMILY_SUICUNE
    [SPECIES_SUICUNE] =
    {
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 215,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_WATER_ABSORB },
    #endif
        .levelUpLearnset = sSuicuneLevelUpLearnset,
        .teachableLearnset = sSuicuneTeachableLearnset,
    },
#endif //P_FAMILY_SUICUNE

#if P_FAMILY_LARVITAR
    [SPECIES_LARVITAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 41,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 67,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_SAND_VEIL },
        .levelUpLearnset = sLarvitarLevelUpLearnset,
        .teachableLearnset = sLarvitarTeachableLearnset,
        .eggMoveLearnset = sLarvitarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PUPITAR}),
    },

    [SPECIES_PUPITAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 84,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sPupitarLevelUpLearnset,
        .teachableLearnset = sPupitarTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_TYRANITAR}),
    },

    [SPECIES_TYRANITAR] =
    {
        .baseHP        = 100,
        .baseAttack    = 134,
        .baseDefense   = 110,
        .baseSpeed     = 61,
        .baseSpAttack  = 95,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DARK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 218,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_UNNERVE },
        .levelUpLearnset = sTyranitarLevelUpLearnset,
        .teachableLearnset = sTyranitarTeachableLearnset,
        .formSpeciesIdTable = sTyranitarFormSpeciesIdTable,
        .formChangeTable = sTyranitarFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TYRANITAR_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 164,
        .baseDefense   = 150,
        .baseSpeed     = 71,
        .baseSpAttack  = 95,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SAND_STREAM, ABILITY_SAND_STREAM, ABILITY_SAND_STREAM },
        .levelUpLearnset = sTyranitarLevelUpLearnset,
        .teachableLearnset = sTyranitarTeachableLearnset,
        .formSpeciesIdTable = sTyranitarFormSpeciesIdTable,
        .formChangeTable = sTyranitarFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LARVITAR

#if P_FAMILY_LUGIA
    [SPECIES_LUGIA] =
    {
        .baseHP        = 106,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 110,
        .baseSpAttack  = 90,
        .baseSpDefense = 154,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 340,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 306,
    #else
        .expYield = 220,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_MULTISCALE },
        .levelUpLearnset = sLugiaLevelUpLearnset,
        .teachableLearnset = sLugiaTeachableLearnset,
    },
#endif //P_FAMILY_LUGIA

#if P_FAMILY_HO_OH
    [SPECIES_HO_OH] =
    {
        .baseHP        = 106,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 110,
        .baseSpDefense = 154,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 340,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 306,
    #else
        .expYield = 220,
    #endif
        .evYield_SpDefense = 3,
        .itemCommon = ITEM_SACRED_ASH,
        .itemRare   = ITEM_SACRED_ASH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_REGENERATOR },
        .levelUpLearnset = sHoOhLevelUpLearnset,
        .teachableLearnset = sHoOhTeachableLearnset,
    },
#endif //P_FAMILY_HO_OH

#if P_FAMILY_CELEBI
    [SPECIES_CELEBI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 64,
    #endif
        .evYield_HP = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_NONE },
        .levelUpLearnset = sCelebiLevelUpLearnset,
        .teachableLearnset = sCelebiTeachableLearnset,
    },
#endif //P_FAMILY_CELEBI

#ifdef __INTELLISENSE__
};
#endif
