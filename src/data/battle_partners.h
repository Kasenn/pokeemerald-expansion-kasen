    #include "constants/battle_ai.h"
    
    [PARTNER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_BRENDAN,
               .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
    [PARTNER_STEVEN] =
    {
        .trainerName = _("STEVEN"),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
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

    [PARTNER_MAY_ROWLET] =
    {
        TPARTY(sParty_MayRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .gender = FEMALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_MAY_TORCHIC] =
    {
        TPARTY(sParty_MayTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .gender = FEMALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_MAY_PIPLUP] =
    {
        TPARTY(sParty_MayPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .gender = FEMALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_MAY_ORAS_ROWLET] =
    {
        TPARTY(sParty_MayRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .gender = FEMALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY_ORAS,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_MAY_ORAS_TORCHIC] =
    {
        TPARTY(sParty_MayTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .gender = FEMALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY_ORAS,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_MAY_ORAS_PIPLUP] =
    {
        TPARTY(sParty_MayPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .gender = FEMALE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY_ORAS,
        .trainerName = _("May"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },

    [PARTNER_BRENDAN_ROWLET] =
    {
        TPARTY(sParty_BrendanRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
               .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_BRENDAN_TORCHIC] =
    {
        TPARTY(sParty_BrendanTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
               .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_BRENDAN_PIPLUP] =
    {
        TPARTY(sParty_BrendanPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
               .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_BRENDAN_ORAS_ROWLET] =
    {
        TPARTY(sParty_BrendanRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
               .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_BRENDAN_ORAS_TORCHIC] =
    {
        TPARTY(sParty_BrendanTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
               .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
    [PARTNER_BRENDAN_ORAS_PIPLUP] =
    {
        TPARTY(sParty_BrendanPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
               .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    },
