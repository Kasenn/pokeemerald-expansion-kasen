//
// DO NOT MODIFY THIS FILE! It is auto-generated from test/battle/partner_control.party
//
// If you want to modify this file see expansion PR #7154
//

    [PARTNER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
    [PARTNER_STEVEN_TEST] =
    {
        .trainerName = _("STEVEN"),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .trainerPic = TRAINER_PIC_STEVEN,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_CHECK_VIABILITY,
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(0, 252, 252, 0, 6, 0),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 42,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(252, 0, 0, 0, 6, 252),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 43,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(0, 252, 0, 0, 252, 6),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 44,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
    [2] =
    {
        .trainerName = _("Test2"),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .trainerPic = TRAINER_PIC_STEVEN,
        .gender = TRAINER_GENDER_MALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 50,
            .ball = POKEBALL_COUNT,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
