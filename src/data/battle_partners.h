    #include "constants/battle_ai.h"
    
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender = 
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
        .trainerName = _("STEVEN"),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender = 
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .species = SPECIES_RATTATA_OUTSIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(0, 252, 252, 0, 6, 0),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 5,
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_TACKLE,
            },
            },
            {
            .species = SPECIES_RATTATA_OUTSIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(0, 252, 252, 0, 6, 0),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 5,
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_TACKLE,
            },
            },
            {
            .species = SPECIES_RATTATA_OUTSIDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
            EVS(0, 252, 252, 0, 6, 0),
            IVS(31, 31, 31, 31, 31, 31),
            .lvl = 5,
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
                MOVE_TACKLE,
            },
            },
        },
    },

    [DIFFICULTY_NORMAL][PARTNER_MAY_ROWLET] =
    {
        TRAINER_PARTY(sParty_MayRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerBackPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_MAY_TORCHIC] =
    {
        TRAINER_PARTY(sParty_MayTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerBackPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_MAY_PIPLUP] =
    {
        TRAINER_PARTY(sParty_MayPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerBackPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_MAY_ORAS_ROWLET] =
    {
        TRAINER_PARTY(sParty_MayRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerBackPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_MAY_ORAS_TORCHIC] =
    {
        TRAINER_PARTY(sParty_MayTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerBackPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_MAY_ORAS_PIPLUP] =
    {
        TRAINER_PARTY(sParty_MayPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerBackPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },

    [DIFFICULTY_NORMAL][PARTNER_BRENDAN_ROWLET] =
    {
        TRAINER_PARTY(sParty_BrendanRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_BRENDAN_TORCHIC] =
    {
        TRAINER_PARTY(sParty_BrendanTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_BRENDAN_PIPLUP] =
    {
        TRAINER_PARTY(sParty_BrendanPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_BRENDAN_ORAS_ROWLET] =
    {
        TRAINER_PARTY(sParty_BrendanRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_BRENDAN_ORAS_TORCHIC] =
    {
        TRAINER_PARTY(sParty_BrendanTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [DIFFICULTY_NORMAL][PARTNER_BRENDAN_ORAS_PIPLUP] =
    {
        TRAINER_PARTY(sParty_BrendanPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
