//
// DO NOT MODIFY THIS FILE! It is auto-generated from test/battle/trainer_control.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'test/battle/trainer_control.h' to remove #line markers.
//


    [0] =
    {
        .trainerName = _("Test1"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .nickname = COMPOUND_STRING("Bubbles"),
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_FEMALE,
            .heldItem = ITEM_ASSAULT_VEST,
            EVS(252, 0, 0, 252, 4, 0),
            IVS(25, 26, 27, 28, 29, 30),
            .ability = ABILITY_TELEPATHY,
            .lvl = 67,
            .ball = ITEM_MASTER_BALL,
            .friendship = 42,
            .nature = NATURE_HASTY,
            .isShiny = TRUE,
            .dynamaxLevel = 5,
            .shouldUseDynamax = TRUE,
            .moves = {
                MOVE_AIR_SLASH,
                MOVE_BARRIER,
                MOVE_SOLAR_BEAM,
                MOVE_EXPLOSION,
            },
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(0, 0, 0, 0, 0, 0),
            .ability = ABILITY_SHADOW_TAG,
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(0, 0, 0, 0, 0, 0),
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
    [1] =
    {
        .trainerName = _("Test2"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
    [2] =
    {
        .trainerName = _("Test2"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
    [3] =
    {
        .trainerName = _("Test3"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 1,
        .poolSize = 4,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_MEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
    [4] =
    {
        .trainerName = _("Test4"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .poolSize = 6,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
            {
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_ACE,
            },
            {
            .species = SPECIES_MEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_ACE,
            },
            {
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
        },
    },
    [5] =
    {
        .trainerName = _("Test5"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .poolRuleIndex = POOL_RULESET_WEATHER_DOUBLES,
        .partySize = 3,
        .poolSize = 10,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
            {
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD | MON_POOL_TAG_WEATHER_SETTER,
            },
            {
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD | MON_POOL_TAG_WEATHER_ABUSER,
            },
            {
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD | MON_POOL_TAG_WEATHER_SETTER,
            },
            {
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD | MON_POOL_TAG_WEATHER_ABUSER,
            },
            {
            .species = SPECIES_MEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
            {
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
            {
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
    [6] =
    {
        .trainerName = _("Test6"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .poolRuleIndex = POOL_RULESET_BASIC,
        .partySize = 2,
        .poolSize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
            {
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
        },
    },
    [7] =
    {
        .trainerName = _("Test1"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .poolRuleIndex = POOL_RULESET_BASIC,
        .poolPruneIndex = POOL_PRUNE_TEST,
        .partySize = 2,
        .poolSize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
            {
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
    [8] =
    {
        .trainerName = _("Test1"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .poolRuleIndex = POOL_RULESET_BASIC,
        .poolPickIndex = POOL_PICK_LOWEST,
        .partySize = 2,
        .poolSize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_ACE,
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .tags = MON_POOL_TAG_LEAD,
            },
        },
    },
    [9] =
    {
        .trainerName = _("Test9"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 2,
        .poolSize = 2,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
    [10] =
    {
        .trainerName = _("Test10"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .partySize = 2,
        .poolSize = 2,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
