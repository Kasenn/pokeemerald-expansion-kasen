const struct Trainer gBattlePartners[] = {
    [PARTNER_NONE] =
    {
        .party = NULL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
    },

    [PARTNER_STEVEN] =
    {
        .party = TRAINER_PARTY(sParty_StevenPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("STEVEN"),
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
};
