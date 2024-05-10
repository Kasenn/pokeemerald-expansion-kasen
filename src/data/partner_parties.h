static const struct TrainerMon sParty_StevenPartner[] = {
    {
        .species = SPECIES_METANG,
        .lvl = 45,
        .nature = NATURE_BRAVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_METAL_CLAW},
    },
    {
        .species = SPECIES_SKARMORY,
        .lvl = 43,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
        .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_PROTECT, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_AGGRON,
        .lvl = 44,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
        .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW},
    }
};

static const struct TrainerMon sParty_BrendanRowletPartner[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_MORPEKO,
        .nature = NATURE_RASH,
        .moves = {MOVE_BITE, MOVE_SPARK, MOVE_QUICK_ATTACK, MOVE_FOUL_PLAY},
        .gender = TRAINER_MON_MALE,
    },
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_GARDEVOIR,
        .gender = TRAINER_MON_FEMALE,
        .nature = NATURE_MILD,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_WISH, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 45,
        .species = SPECIES_DECIDUEYE,
        .gender = TRAINER_MON_MALE,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_RAZOR_LEAF, MOVE_SPIRIT_SHACKLE}
    }
};

static const struct TrainerMon sParty_BrendanTorchicPartner[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_MORPEKO,
        .nature = NATURE_RASH,
        .moves = {MOVE_BITE, MOVE_SPARK, MOVE_QUICK_ATTACK, MOVE_FOUL_PLAY},
        .gender = TRAINER_MON_MALE,
    },
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_GARDEVOIR,
        .gender = TRAINER_MON_FEMALE,
        .nature = NATURE_MILD,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_WISH, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 45,
        .species = SPECIES_BLAZIKEN,
        .gender = TRAINER_MON_MALE,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_FLAME_CHARGE, MOVE_ROCK_SMASH, MOVE_BLAZE_KICK, MOVE_PECK}
    }
};

static const struct TrainerMon sParty_BrendanPiplupPartner[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_MORPEKO,
        .nature = NATURE_RASH,
        .moves = {MOVE_BITE, MOVE_SPARK, MOVE_QUICK_ATTACK, MOVE_FOUL_PLAY},
        .gender = TRAINER_MON_MALE,
    },
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_GARDEVOIR,
        .gender = TRAINER_MON_FEMALE,
        .nature = NATURE_MILD,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_WISH, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 45,
        .species = SPECIES_EMPOLEON,
        .gender = TRAINER_MON_MALE,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_METAL_CLAW, MOVE_BRINE, MOVE_AQUA_JET, MOVE_SWAGGER},
    }
};

static const struct TrainerMon sParty_MayRowletPartner[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_MORPEKO,
        .nature = NATURE_RASH,
        .moves = {MOVE_BITE, MOVE_SPARK, MOVE_QUICK_ATTACK, MOVE_FOUL_PLAY},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_GALLADE,
        .gender = TRAINER_MON_MALE,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_POWER_UP_PUNCH, MOVE_ROCK_SMASH}
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 45,
        .species = SPECIES_DECIDUEYE,
        .gender = TRAINER_MON_FEMALE,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK, MOVE_RAZOR_LEAF, MOVE_SPIRIT_SHACKLE}
    }
};

static const struct TrainerMon sParty_MayTorchicPartner[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_MORPEKO,
        .nature = NATURE_RASH,
        .moves = {MOVE_BITE, MOVE_SPARK, MOVE_QUICK_ATTACK, MOVE_FOUL_PLAY},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_GALLADE,
        .gender = TRAINER_MON_MALE,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_POWER_UP_PUNCH, MOVE_ROCK_SMASH}
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 45,
        .species = SPECIES_BLAZIKEN,
        .gender = TRAINER_MON_FEMALE,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_FLAME_CHARGE, MOVE_ROCK_SMASH, MOVE_BLAZE_KICK, MOVE_PECK}
    }
};

static const struct TrainerMon sParty_MayPiplupPartner[] = {
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_MORPEKO,
        .nature = NATURE_RASH,
        .moves = {MOVE_BITE, MOVE_SPARK, MOVE_QUICK_ATTACK, MOVE_FOUL_PLAY},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 44,
        .species = SPECIES_GALLADE,
        .gender = TRAINER_MON_MALE,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_POWER_UP_PUNCH, MOVE_ROCK_SMASH}
    },
    {
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .ev = TRAINER_PARTY_EVS(100, 0, 50, 0, 0, 50),
        .lvl = 45,
        .species = SPECIES_EMPOLEON,
        .gender = TRAINER_MON_FEMALE,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_METAL_CLAW, MOVE_BRINE, MOVE_AQUA_JET, MOVE_SWAGGER},
    }
};
