//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/debug_trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/debug_trainers.h' to remove #line markers.
//


    [DIFFICULTY_NORMAL][DEBUG_TRAINER_PLAYER] =
    {
        .trainerName = _("Player"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
            .nickname = COMPOUND_STRING("Buffie"),
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(0, 252, 252, 0, 6, 0),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 100,
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_EARTHQUAKE,
                MOVE_FLAMETHROWER,
                MOVE_CELEBRATE,
                MOVE_CELEBRATE,
            },
            },
        },
    },
    [DIFFICULTY_NORMAL][DEBUG_TRAINER_AI] =
    {
        .trainerName = _("Debugger"),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(0, 252, 252, 0, 6, 0),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 42,
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_LIGHT_SCREEN,
                MOVE_MIST,
                MOVE_AURORA_VEIL,
                MOVE_SAFEGUARD,
            },
            },
            {
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(252, 0, 0, 0, 6, 252),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 43,
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
