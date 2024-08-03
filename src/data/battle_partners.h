    [PARTNER_NONE] =
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
    [PARTNER_STEVEN] =
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
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .lvl = 42,
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
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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

    [PARTNER_MAY_ROWLET] =
    {
        .party = TRAINER_PARTY(sParty_MayRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
    },
    [PARTNER_MAY_TORCHIC] =
    {
        .party = TRAINER_PARTY(sParty_MayTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
    },
    [PARTNER_MAY_PIPLUP] =
    {
        .party = TRAINER_PARTY(sParty_MayPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
    },
    [PARTNER_MAY_ORAS_ROWLET] =
    {
        .party = TRAINER_PARTY(sParty_MayRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerName = _("May"),
    },
    [PARTNER_MAY_ORAS_TORCHIC] =
    {
        .party = TRAINER_PARTY(sParty_MayTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerName = _("May"),
    },
    [PARTNER_MAY_ORAS_PIPLUP] =
    {
        .party = TRAINER_PARTY(sParty_MayPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_BACK_PIC_MAY_ORAS,
        .trainerName = _("May"),
    },

    [PARTNER_BRENDAN_ROWLET] =
    {
        .party = TRAINER_PARTY(sParty_BrendanRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
    },
    [PARTNER_BRENDAN_TORCHIC] =
    {
        .party = TRAINER_PARTY(sParty_BrendanTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
    },
    [PARTNER_BRENDAN_PIPLUP] =
    {
        .party = TRAINER_PARTY(sParty_BrendanPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
    },
    [PARTNER_BRENDAN_ORAS_ROWLET] =
    {
        .party = TRAINER_PARTY(sParty_BrendanRowletPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
    },
    [PARTNER_BRENDAN_ORAS_TORCHIC] =
    {
        .party = TRAINER_PARTY(sParty_BrendanTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
    },
    [PARTNER_BRENDAN_ORAS_PIPLUP] =
    {
        .party = TRAINER_PARTY(sParty_BrendanPiplupPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN_ORAS,
        .trainerName = _("Brendan"),
    },
