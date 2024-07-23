static const struct TrainerMon sParty_Sawyer1[] = {
    {
    .lvl = 10,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(104, 0, 252, 0, 0 ,152), 
    .nature = NATURE_ADAMANT,
    .species = SPECIES_SQUIRTLE,
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_TACKLE},
    .heldItem = ITEM_CHOICE_BAND,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .lvl = 10,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(104, 0, 252, 0, 0 ,152), 
    .nature = NATURE_ADAMANT,
    .species = SPECIES_BULBASAUR,
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_TACKLE},
    .heldItem = ITEM_CHOICE_BAND
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .lvl = 10,
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .ev = TRAINER_PARTY_EVS(104, 0, 252, 0, 0 ,152), 
    .nature = NATURE_ADAMANT,
    .species = SPECIES_CHARMANDER,
    .gender = TRAINER_MON_MALE,
    .moves = {MOVE_SCRATCH},
    .heldItem = ITEM_CHOICE_BAND
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),   
    // .lvl = 18,
    // .species = SPECIES_MUDBRAY,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_NAIVE,
    // .moves = {MOVE_MUD_SLAP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_STOMP},
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),  
    // .lvl = 19,
    // .species = SPECIES_KADABRA,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_QUIRKY,
    // },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 14,
    .species = SPECIES_GROWLITHE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BITE, MOVE_LEER, MOVE_EMBER, MOVE_ROAR},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_POISON_STING, MOVE_GROWTH},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 16,
    .species = SPECIES_WARTORTLE,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_TACKLE, MOVE_WITHDRAW, MOVE_BUBBLE, MOVE_ICY_WIND},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),  
    // .lvl = 19,
    // .species = SPECIES_FEEBAS,
    // .gender = TRAINER_MON_FEMALE,
    // .nature = NATURE_JOLLY,
    // .moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_WATER_PULSE},
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7), 
    // .lvl = 19,
    // .species = SPECIES_KADABRA,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_QUIRKY,
    // },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),  
    .lvl = 14,
    .species = SPECIES_MUDBRAY,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_MUD_SLAP, MOVE_BULLDOZE, MOVE_LOW_KICK, MOVE_IRON_HEAD},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 14,
    .species = SPECIES_GROWLITHE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BITE, MOVE_LEER, MOVE_EMBER, MOVE_ROAR},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 16,
    .species = SPECIES_IVYSAUR,
    .nature = NATURE_HASTY,
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_TAKE_DOWN, MOVE_VINE_WHIP},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7), 
    // .lvl = 19,
    // .species = SPECIES_KADABRA,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_QUIRKY,
    // },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 14,
    .species = SPECIES_ROSELIA,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_POISON_STING, MOVE_GROWTH},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7), 
    .lvl = 14,
    .species = SPECIES_MUDBRAY,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_MUD_SLAP, MOVE_BULLDOZE, MOVE_LOW_KICK, MOVE_IRON_HEAD},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 16,
    .species = SPECIES_CHARMELEON,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_SCRATCH, MOVE_EMBER, MOVE_SMOKESCREEN},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    // .lvl = 21,
    // .species = SPECIES_MUDBRAY,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_NAIVE,
    // .moves = {MOVE_MUD_SLAP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_STOMP},
    // },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 17,
    .species = SPECIES_GROWLITHE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_EMBER, MOVE_ROAR},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 17,
    .species = SPECIES_ROSELIA,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_POISON_STING, MOVE_LEECH_SEED},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_WARTORTLE,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_BITE, MOVE_WITHDRAW, MOVE_BUBBLE, MOVE_ICY_WIND},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    // .lvl = 22,
    // .species = SPECIES_FEEBAS,
    // .gender = TRAINER_MON_FEMALE,
    // .nature = NATURE_JOLLY,
    // .moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_WATER_PULSE},
    // },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 17,
    .species = SPECIES_MUDBRAY,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_STOMP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 17,
    .species = SPECIES_GROWLITHE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_EMBER, MOVE_ROAR},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_IVYSAUR,
    .nature = NATURE_HASTY,
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_TAKE_DOWN, MOVE_VINE_WHIP},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 17,
    .species = SPECIES_MUDBRAY,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_STOMP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 17,
    .species = SPECIES_ROSELIA,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_POISON_STING, MOVE_LEECH_SEED},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_CHARMELEON,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_SCRATCH, MOVE_EMBER, MOVE_SMOKESCREEN},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_TRAINER_BROTHER4_ROWLET[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    // .lvl = 27,
    // .species = SPECIES_GOOMY,
    // .gender = TRAINER_MON_FEMALE,
    // .nature = NATURE_LAX,
    // .moves = {MOVE_FLAIL, MOVE_RAIN_DANCE, MOVE_DRAGON_BREATH, MOVE_BUBBLE},
    // },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_GROWLITHE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_EMBER, MOVE_REVERSAL},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_ROSELIA,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STUN_SPORE, MOVE_MAGICAL_LEAF, MOVE_POISON_STING, MOVE_LEECH_SEED},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 22,
    .species = SPECIES_WARTORTLE,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_BITE, MOVE_RAPID_SPIN, MOVE_BUBBLE, MOVE_ICY_WIND},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_TRAINER_BROTHER4_TORCHIC[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    // .lvl = 27,
    // .species = SPECIES_GOOMY,
    // .gender = TRAINER_MON_FEMALE,
    // .nature = NATURE_LAX,
    // .moves = {MOVE_FLAIL, MOVE_RAIN_DANCE, MOVE_DRAGON_BREATH, MOVE_BUBBLE},
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    // .lvl = 26,
    // .species = SPECIES_FEEBAS,
    // .gender = TRAINER_MON_FEMALE,
    // .nature = NATURE_JOLLY,
    // .moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_WATER_PULSE},
    // },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_MUDBRAY,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_STOMP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_GROWLITHE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_EMBER, MOVE_REVERSAL},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 22,
    .species = SPECIES_IVYSAUR,
    .nature = NATURE_HASTY,
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_TAKE_DOWN, MOVE_RAZOR_LEAF},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_TRAINER_BROTHER4_PIPLUP[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    // .lvl = 26,
    // .species = SPECIES_GOOMY,
    // .gender = TRAINER_MON_FEMALE,
    // .nature = NATURE_LAX,
    // .moves = {MOVE_FLAIL, MOVE_PROTECT, MOVE_DRAGON_BREATH, MOVE_BUBBLE},
    // },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_MUDBRAY,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_STOMP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 19,
    .species = SPECIES_ROSELIA,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_STUN_SPORE, MOVE_MAGICAL_LEAF, MOVE_POISON_STING, MOVE_LEECH_SEED},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 22,
    .species = SPECIES_CHARMELEON,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_SCRATCH, MOVE_EMBER, MOVE_SMOKESCREEN},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_Brother5_Rowlet[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 38,
    .species = SPECIES_ARCANINE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_REVERSAL},
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 38,
    .species = SPECIES_ROSERADE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE},
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 39,
    .species = SPECIES_MALAMAR,
    .nature = NATURE_QUIRKY,
    .moves = {MOVE_REVERSAL, MOVE_TOPSY_TURVY, MOVE_PLUCK, MOVE_PSYCHO_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 40,
    .species = SPECIES_BLASTOISE,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_FLASH_CANNON, MOVE_WATER_PULSE, MOVE_BITE, MOVE_ICY_WIND},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_Brother5_Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 38,
    .species = SPECIES_MUDSDALE,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_HEAVY_SLAM, MOVE_STOMPING_TANTRUM, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 38,
    .species = SPECIES_ARCANINE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_REVERSAL},
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 39,
    .species = SPECIES_MALAMAR,
    .nature = NATURE_QUIRKY,
    .moves = {MOVE_REVERSAL, MOVE_TOPSY_TURVY, MOVE_PLUCK, MOVE_PSYCHO_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 40,
    .species = SPECIES_VENUSAUR,
    .nature = NATURE_HASTY,
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STRENGTH, MOVE_PETAL_DANCE},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_Brother5_Piplup[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 38,
    .species = SPECIES_ROSERADE,
    .nature = NATURE_JOLLY,
    .moves = {MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE},
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 38,
    .species = SPECIES_MUDSDALE,
    .nature = NATURE_NAIVE,
    .moves = {MOVE_HEAVY_SLAM, MOVE_STOMPING_TANTRUM, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 39,
    .species = SPECIES_MALAMAR,
    .nature = NATURE_QUIRKY,
    .moves = {MOVE_REVERSAL, MOVE_TOPSY_TURVY, MOVE_PLUCK, MOVE_PSYCHO_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 40,
    .species = SPECIES_CHARIZARD,
    .nature = NATURE_DOCILE,
    .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_CLAW, MOVE_HEAT_WAVE, MOVE_ROCK_SMASH},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .lvl = 3,
    .species = SPECIES_RATTATA,
    },
    {
    .lvl = 4,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .lvl = 3,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 4,
    .species = SPECIES_QWILFISH,
    .ability = ABILITY_POISON_POINT,
    .moves = {MOVE_TACKLE, MOVE_POISON_STING},
    }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
    .lvl = 3,
    .species = SPECIES_WEEDLE,
    },
    {
    .lvl = 4,
    .species = SPECIES_ROWLET,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .lvl = 5,
    .species = SPECIES_PIPLUP,
    .iv = TRAINER_PARTY_IVS(0, 0, 0, 31, 0, 0),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .nature = NATURE_NAIVE,
    }
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .lvl = 5,
    .species = SPECIES_RIOLU,
    },
    {
    .lvl = 6,
    .species = SPECIES_POLIWAG,
    },
    {
    .lvl = 6,
    .species = SPECIES_GROWLITHE,
    },
    {
    .lvl = 6,
    .species = SPECIES_PIKACHU,
    }
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
    .lvl = 4,
    .species = SPECIES_POLIWAG,
    },
    {
    .lvl = 5,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .lvl = 6,
    .species = SPECIES_CUTIEFLY,
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .lvl = 5,
    .species = SPECIES_RIOLU,
    },
    {
    .lvl = 7,
    .species = SPECIES_SCRAGGY,
    }
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .lvl = 7,
    .species = SPECIES_RATTATA,
    }
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .lvl = 6,
    .species = SPECIES_RALTS,
    },
    {
    .lvl = 6,
    .species = SPECIES_PIKACHU,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .lvl = 6,
    .species = SPECIES_SCATTERBUG,
    },
    {
    .lvl = 7,
    .species = SPECIES_SCATTERBUG,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .lvl = 6,
    .species = SPECIES_RATTATA,
    },
    {
    .lvl = 7,
    .species = SPECIES_VULPIX,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .lvl = 6,
    .species = SPECIES_WEEDLE,
    },
    {
    .lvl = 7,
    .species = SPECIES_KAKUNA,
    .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_HARDEN},
    }
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
    .lvl = 6,
    .species = SPECIES_PIKACHU,
    },
    {
    .lvl = 7,
    .species = SPECIES_BUIZEL,
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_WATER_SPORT},
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
    .lvl = 7,
    .species = SPECIES_BUNEARY,
    },
    {
    .lvl = 7,
    .species = SPECIES_RIOLU,
    }
};

static const struct TrainerMon sParty_Zander[] = {
    {
    .lvl = 7,
    .species = SPECIES_RATTATA,
    },
    {
    .lvl = 7,
    .species = SPECIES_STUNKY,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .lvl = 8,
    .species = SPECIES_MURKROW,
    },
    {
    .lvl = 9,
    .species = SPECIES_SPEWPA,
    .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_STUN_SPORE, MOVE_PROTECT},
    },
    {
    .lvl = 8,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 9,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    {
    .lvl = 7,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 8,
    .species = SPECIES_CROAGUNK,
    }
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .lvl = 7,
    .species = SPECIES_NINJASK,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},

    },
    {
    .lvl = 9,
    .species = SPECIES_ROGGENROLA,
    .moves = {MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_HEADBUTT},
    },
};

static const struct TrainerMon sParty_Leah[] = {
    {
    .lvl = 9,
    .species = SPECIES_GLIGAR,
    .ev = TRAINER_PARTY_EVS(200, 0, 100, 0, 0, 100),
    .moves = {MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_SAND_ATTACK, MOVE_TOXIC},
    }
};

static const struct TrainerMon sParty_Daisy[] = {
    {
    .lvl = 7,
    .species = SPECIES_KOMALA,
    .ability = ABILITY_COMATOSE,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_SLEEP_TALK, MOVE_LAST_RESORT},
    .nature = NATURE_QUIET
    }
};

static const struct TrainerMon sParty_Rose1[] = {
    {
    .lvl = 9,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_POISON_HEAL,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_SEED_BOMB},
    },
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .lvl = 1,
    .species = SPECIES_HPBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_HPBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_HPBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_HPBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_HPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .lvl = 1,
    .species = SPECIES_ATKBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_ATKBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_ATKBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_ATKBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_ATKBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .lvl = 1,
    .species = SPECIES_DEFBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_DEFBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_DEFBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_DEFBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_DEFBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .lvl = 1,
    .species = SPECIES_SPATKBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPATKBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPATKBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPATKBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPATKBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .lvl = 1,
    .species = SPECIES_SPDEFBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPDEFBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPDEFBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPDEFBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPDEFBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .lvl = 1,
    .species = SPECIES_SPEEDBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPEEDBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPEEDBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPEEDBOT,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 1,
    .species = SPECIES_SPEEDBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
    .lvl = 6,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 6,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 6,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 6,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 6,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 6,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_STRUGGLE}
    }
};

static const struct TrainerMon sParty_Chip[] = {
    {
    .lvl = 8,
    .species = SPECIES_SCATTERBUG,
    },
    {
    .lvl = 9,
    .species = SPECIES_SPEWPA,
    .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_STUN_SPORE, MOVE_PROTECT},
    },
};

static const struct TrainerMon sParty_Foster[] = {
    {
    .lvl = 9,
    .species = SPECIES_KRICKETOT,
    },
    {
    .lvl = 9,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .lvl = 9,
    .species = SPECIES_CUTIEFLY,
    },
    {
    .lvl = 10,
    .species = SPECIES_COMBEE,
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .lvl = 10,
    .species = SPECIES_BEEDRILL,
    .moves = {MOVE_POISON_STING, MOVE_FURY_ATTACK}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .lvl = 10,
    .species = SPECIES_GRUBBIN,
    },
    {
    .lvl = 10,
    .species = SPECIES_VENIPEDE,
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .lvl = 11,
    .species = SPECIES_VENONAT,
    }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .lvl = 11,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_U_TURN, MOVE_FAIRY_WIND}
    },
    {
    .lvl = 11,
    .species = SPECIES_KRICKETUNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FURY_CUTTER, MOVE_BIDE, MOVE_GROWL}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 14,
    .species = SPECIES_BEEDRILL,
    .moves = {MOVE_U_TURN, MOVE_TWINEEDLE, MOVE_FURY_ATTACK, MOVE_POISON_STING},
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .lvl = 8,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 8,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 8,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 8,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 8,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 8,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_STRUGGLE}
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
        .lvl = 10,
        .species = SPECIES_TIMBURR,
    },
    {
        .lvl = 10,
        .species = SPECIES_ONIX,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
        .lvl = 11,
        .species = SPECIES_JIGGLYPUFF,
    },
    {
        .lvl = 12,
        .species = SPECIES_TOGEPI,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
        .lvl = 11,
        .species = SPECIES_GRIMER,
    },
    {
        .lvl = 13,
        .species = SPECIES_TRUBBISH,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
        .lvl = 10,
        .species = SPECIES_PARAS,
    },
    {
        .lvl = 10,
        .species = SPECIES_SPINARAK,
    },
    {
        .lvl = 11,
        .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
        .lvl = 12,
        .species = SPECIES_MARILL,
    },
    {
        .lvl = 12,
        .species = SPECIES_PIKACHU,
    }
};

static const struct TrainerMon sParty_Austina[] = {
    {
    .lvl = 45,
    .species = SPECIES_BRELOOM,
    .ability = ABILITY_POISON_HEAL,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_SPORE, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_SEED_BOMB},
    },
    {
    .lvl = 81,
    .species = SPECIES_SALAMENCE,
    },
    {
    .lvl = 81,
    .species = SPECIES_ARCHEOPS,
    },
    {
    .lvl = 81,
    .species = SPECIES_AGGRON,
    },
    {
    .lvl = 81,
    .species = SPECIES_LAPRAS,
    },
    {
    .lvl = 83,
    .species = SPECIES_HAXORUS
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
        .lvl = 12,
        .species = SPECIES_DODUO,
    },
    {
        .lvl = 13,
        .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
        .lvl = 12,
        .species = SPECIES_HOUNDOUR,
    },
    {
        .lvl = 12,
        .species = SPECIES_SANDSHREW,
    },
};

static const struct TrainerMon sParty_Lola3[] = {
    {
        .lvl = 11,
        .species = SPECIES_SCRAGGY,
    },
    {
        .lvl = 12,
        .species = SPECIES_MIENFOO,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
        .lvl = 11,
        .species = SPECIES_GROWLITHE,
    },
    {
        .lvl = 12,
        .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
        .lvl = 12,
        .species = SPECIES_STARLY,
    },
    {
        .lvl = 14,
        .species = SPECIES_STARAVIA,
    },
};


static const struct TrainerMon sParty_Ricky1[] = {
    {
        .lvl = 12,
        .species = SPECIES_RATTATA,
    },
    {
        .lvl = 13,
        .species = SPECIES_MEOWTH,
    }
};

static const struct TrainerMon sParty_Simon[] = {
    {
        .lvl = 12,
        .species = SPECIES_FARFETCHD,
    },
    {
        .lvl = 13,
        .species = SPECIES_STARAVIA,
    }
};

static const struct TrainerMon sParty_Charlie[] = {
    {
        .lvl = 12,
        .species = SPECIES_PETILIL,
    },
    {
        .lvl = 12,
        .species = SPECIES_BUNEARY,
    }
};


static const struct TrainerMon sParty_Ricky2[] = {
    {
    .lvl = 12,
    .species = SPECIES_COTTONEE,
    },
    {
    .lvl = 12,
    .species = SPECIES_RATTATA,
    }
};


static const struct TrainerMon sParty_Ricky3[] = {
    {
    .lvl = 12,
    .species = SPECIES_TOGEDEMARU,
    .moves = {MOVE_TACKLE, MOVE_THUNDER_SHOCK, MOVE_DEFENSE_CURL}
    },
    {
    .lvl = 13,
    .species = SPECIES_PONYTA,
    }
};


static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 13,
    .species = SPECIES_RATTATA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 13,
    .species = SPECIES_GRIMER,
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 13,
    .species = SPECIES_KOFFING,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 14,
    .species = SPECIES_STUNKY,
    }
};

static const struct TrainerMon sParty_Randall[] = {
    {
    .lvl = 16,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 16,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 16,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 16,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 16,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 16,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_STRUGGLE}
    }
};

static const struct TrainerMon sParty_Parker[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_George[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 15,
    .species = SPECIES_TOGEDEMARU,
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 15,
    .species = SPECIES_FLAAFFY,
    }
};

static const struct TrainerMon sParty_Vincent[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_PACHIRISU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_EMOLGA,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_THUNDER_SHOCK, MOVE_CHARM, MOVE_TAIL_WHIP, MOVE_SWEET_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_TOGEDEMARU,
    }
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 15,
    .species = SPECIES_FLAAFFY,
    }
};

static const struct TrainerMon sParty_Edgar[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 15,
    .species = SPECIES_LUXIO,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_PICHU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_THUNDER_SHOCK, MOVE_CHARM, MOVE_TAIL_WHIP, MOVE_SWEET_KISS}
    }
};

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_SHINX,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_THUNDER_SHOCK, MOVE_CHARM, MOVE_TAIL_WHIP, MOVE_SWEET_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_PACHIRISU,
    }
};

static const struct TrainerMon sParty_Vito[] = {
    {
    .lvl = 12,
    .species = SPECIES_BRONZOR,
    },
    {
    .lvl = 13,
    .species = SPECIES_MR_MIME,
    .heldItem = ITEM_SHELL_BELL,
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_STUNFISK,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 15,
    .species = SPECIES_LUXIO,
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 15,
    .species = SPECIES_EMOLGA,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 100,
    .species = SPECIES_HELIOPTILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 100,
    .species = SPECIES_PACHIRISU,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 100,
    .species = SPECIES_PIKACHU,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 100,
    .species = SPECIES_STUNFISK,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 15,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 14,
    .species = SPECIES_HELIOPTILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 15,
    .species = SPECIES_STUNFISK,
    }
};

static const struct TrainerMon sParty_Mary[] = {
    {
    .nature = NATURE_IMPISH,
    .lvl = 19,
    .species = SPECIES_STUNFISK,
    .moves = {MOVE_REVENGE, MOVE_MUD_SHOT, MOVE_THUNDER_SHOCK, MOVE_WATER_GUN}
    },
    {
    .nature = NATURE_MODEST,
    .lvl = 20,
    .species = SPECIES_ELECTABUZZ,
    .moves = {MOVE_WILD_CHARGE, MOVE_SWIFT, MOVE_LOW_KICK, MOVE_SIGNAL_BEAM}
    },
    {
    .nature = NATURE_MODEST,
    .lvl = 22,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_WILD_CHARGE, MOVE_BITE, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK}
    }
};

static const struct TrainerMon sParty_WpvTr1Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_SPEAROW,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_MURKROW,
    }
};

static const struct TrainerMon sParty_WpvTr2Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_STARLY,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_STARAVIA,
    }
};

static const struct TrainerMon sParty_WpvTr3Battlegirl[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_ARCHEN,
    .moves = {MOVE_BOUNCE, MOVE_PLUCK, MOVE_ANCIENT_POWER, MOVE_DRAGON_BREATH}
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 16,
    .species = SPECIES_HAWLUCHA,
    .moves = {MOVE_KARATE_CHOP, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sParty_WpvTr4Camper[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 14,
    .species = SPECIES_FLETCHLING,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 17,
    .species = SPECIES_FLETCHINDER,
    .moves = {MOVE_FLAIL, MOVE_AGILITY, MOVE_EMBER, MOVE_PECK},
    }
};

static const struct TrainerMon sParty_WpvTr5Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_FARFETCHD,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 16,
    .species = SPECIES_ORICORIO,
    .moves = {MOVE_POUND, MOVE_GROWL, MOVE_AIR_CUTTER, MOVE_PECK}
    }
};

static const struct TrainerMon sParty_WpvTr6Maniac[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 18,
    .species = SPECIES_SKARMORY,
    },
};

static const struct TrainerMon sParty_WpvTr7Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_FLETCHLING,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_SPEAROW,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_PIDGEY,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 15,
    .species = SPECIES_STARLY,
    },
};

static const struct TrainerMon sParty_WpvTr8Ninjaboy[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 16,
    .species = SPECIES_YANMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 17,
    .species = SPECIES_GLIGAR,
    .moves = {MOVE_FURY_CUTTER, MOVE_QUICK_ATTACK, MOVE_KNOCK_OFF, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_WpvTr9Lass[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 16,
    .species = SPECIES_HOPPIP,
    .moves = {MOVE_BOUNCE, MOVE_STUN_SPORE, MOVE_FAIRY_WIND, MOVE_POISON_POWDER}
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 17,
    .species = SPECIES_SKIPLOOM,
    .moves = {MOVE_BOUNCE, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_FAIRY_WIND}
    },
};

static const struct TrainerMon sParty_WpvTr10Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 16,
    .species = SPECIES_DODUO,
    .moves = {MOVE_PURSUIT, MOVE_FURY_ATTACK, MOVE_QUICK_ATTACK, MOVE_PECK}
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 17,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_WpvTr11Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 16,
    .species = SPECIES_ARCHEN,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 17,
    .species = SPECIES_CRAMORANT,
    .moves = {MOVE_FURY_ATTACK, MOVE_WATER_GUN, MOVE_PECK}
    }
};

static const struct TrainerMon sParty_WpvTr12Battlegirl[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 17,
    .species = SPECIES_ORICORIO_POM_POM,
    .moves = {MOVE_POUND, MOVE_GROWL, MOVE_AIR_CUTTER, MOVE_PECK}
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 17,
    .species = SPECIES_HAWLUCHA,
    }
};

static const struct TrainerMon sParty_WpvTr13Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 16,
    .species = SPECIES_MURKROW,
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 16,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_WpvTr14Skyla[] = {
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 20,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_STOMP, MOVE_GUST},
    .species = SPECIES_TROPIUS,
    .nature = NATURE_JOLLY
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 21,
    .moves = {MOVE_FLY, MOVE_DRILL_RUN, MOVE_METAL_CLAW, MOVE_SAND_ATTACK},
    .species = SPECIES_SKARMORY,
    .ability = ABILITY_STURDY,
    .nature = NATURE_TIMID
    },
    {
    .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
    .lvl = 24,
    .moves = {MOVE_FLY, MOVE_WATER_GUN, MOVE_BELCH, MOVE_PLUCK},
    .species = SPECIES_CRAMORANT,
    .heldItem = ITEM_WACAN_BERRY,
    .nature = NATURE_JOLLY
    }
};

static const struct TrainerMon sParty_R28_Tr1_BugCatcher[] = {
    {
    .lvl = 15,
    .species = SPECIES_KRICKETOT,
    },
    {
    .lvl = 15,
    .species = SPECIES_KRICKETUNE,
    },
    {
    .lvl = 16,
    .species = SPECIES_VIVILLON,
    .moves = {MOVE_GUST, MOVE_LIGHT_SCREEN, MOVE_STRUGGLE_BUG, MOVE_SLEEP_POWDER}
    }
};

static const struct TrainerMon sParty_R28_Tr2_Hiker[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_ROCKRUFF,
    }
};

static const struct TrainerMon sParty_R28_Tr3_NinjaBoy[] = {
    {
    .lvl = 16,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 17,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_R28_Tr4_Psychic[] = {
    {
    .lvl = 17,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER},
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
    },
    {
    .lvl = 17,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER},
    .iv = TRAINER_PARTY_IVS(30, 31, 31, 30, 31, 31)
    },
    {
    .lvl = 17,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER},
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 31, 30)
    },
};

static const struct TrainerMon sParty_R5Tr1_Fisher[] = {
    {
    .lvl = 8,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 13,
    .species = SPECIES_FINNEON,
    },
    {
    .lvl = 18,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_R5Tr2_Beauty[] = {
    {
    .lvl = 16,
    .species = SPECIES_PETILIL,
    },
    {
    .lvl = 17,
    .species = SPECIES_LILLIGANT,
    }
};

static const struct TrainerMon sParty_R5Tr3_YoungCouple[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_IMPIDIMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_HATENNA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_SOLOSIS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_GOTHITA,
    },
};

static const struct TrainerMon sParty_R5Tr4_Lass1[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_COTTONEE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_WHIMSICOTT,
    }
};

static const struct TrainerMon sParty_R5Tr5_PokeFanF[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 16,
    .species = SPECIES_PIKACHU,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_RAICHU,
    }
};

static const struct TrainerMon sParty_R5Tr6_Lass2[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_VULPIX,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_PONYTA,
    }
};

static const struct TrainerMon sParty_R5Tr7_Gentleman[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_UMBREON,
    .moves = {MOVE_PURSUIT, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_BABY_DOLL_EYES}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_ESPEON,
    .moves = {MOVE_CONFUSION, MOVE_QUICK_ATTACK, MOVE_BABY_DOLL_EYES, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_R5Tr8_Youngster[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 16,
    .species = SPECIES_RATTATA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_PANCHAM,
    }
};

static const struct TrainerMon sParty_R5Tr9_Triathlete[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 16,
    .species = SPECIES_DODUO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_R5Tr10_RichBoy[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 16,
    .species = SPECIES_GIRAFARIG,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_KANGASKHAN,
    }
};

static const struct TrainerMon sParty_R5Tr11_Man5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_SALANDIT,
    .moves = {MOVE_SMOG, MOVE_EMBER, MOVE_POISON_GAS, MOVE_SCRATCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_KOFFING,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_MAGMAR,
    }
};

static const struct TrainerMon sParty_R5Tr12_BugCatcher[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 15,
    .species = SPECIES_WEEDLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_KAKUNA,
    .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_HARDEN},
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 19,
    .species = SPECIES_BEEDRILL,
    }
};

static const struct TrainerMon sParty_R5Tr13_NinjaBoy[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 20,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 20,
    .species = SPECIES_SHEDINJA,
    }
};

static const struct TrainerMon sParty_R5Tr14_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_TIMBURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 19,
    .species = SPECIES_ONIX,
    }
};

static const struct TrainerMon sParty_R5Tr15_CoolTrainer[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_WHIMSICOTT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_GROWTH, MOVE_STUN_SPORE},
    .ev = TRAINER_PARTY_EVS(50, 0, 50, 0, 0, 50),
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_NINETALES,
    .moves = {MOVE_EMBER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK},
    .ev = TRAINER_PARTY_EVS(50, 0, 50, 0, 0, 50),
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .heldItem = ITEM_SITRUS_BERRY,
    .species = SPECIES_STARMIE,
    .moves = {MOVE_GYRO_BALL, MOVE_BUBBLE_BEAM, MOVE_SWIFT, MOVE_RECOVER},
    .ev = TRAINER_PARTY_EVS(50, 0, 50, 0, 0, 50),
    }
};

static const struct TrainerMon sParty_R6Tr1_RangerM[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 20,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_NOSEPASS,
    },
};

static const struct TrainerMon sParty_R6Tr2_PokeFanF[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 100,
    .species = SPECIES_BUNEARY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 100,
    .species = SPECIES_LOPUNNY,
    },
};

static const struct TrainerMon sParty_R6Tr3_CamperF[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 19,
    .species = SPECIES_SALANDIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 22,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_R6Tr4_CamperM1[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 100,
    .species = SPECIES_SALANDIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 100,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_R6Tr5_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_TIMBURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 19,
    .species = SPECIES_ONIX,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 20,
    .species = SPECIES_SUDOWOODO,
    }
};

static const struct TrainerMon sParty_R6Tr6_CamperM2[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 19,
    .species = SPECIES_CACNEA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 22,
    .species = SPECIES_SANDILE,
    }
};

static const struct TrainerMon sParty_R6Tr7_Kindler[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_HOUNDOUR,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_SMOG, MOVE_EMBER}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 23,
    .species = SPECIES_FLAREON,
    },
};

static const struct TrainerMon sParty_R8Tr1_ParasolLady[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_R8Tr2_SrJr[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_TOGEPI,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_MORPEKO,
    .moves = {MOVE_THUNDER_SHOCK, MOVE_POWER_TRIP, MOVE_QUICK_ATTACK, MOVE_LEER}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_TOGETIC,
    .moves = {MOVE_ENCORE, MOVE_FAIRY_WIND, MOVE_YAWN, MOVE_METRONOME}
    }
};

static const struct TrainerMon sParty_R8Tr3_AromaLady[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 19,
    .species = SPECIES_BUDEW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_ROSELIA,
    },
};

static const struct TrainerMon sParty_R8Tr4_Youngster[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_RATTATA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_RATICATE,
    }
};

static const struct TrainerMon sParty_R8Tr5_PsychicF[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 13,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 17,
    .species = SPECIES_RALTS,
    .moves = {MOVE_DISARMING_VOICE, MOVE_MAGICAL_LEAF, MOVE_DOUBLE_TEAM, MOVE_CONFUSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_KIRLIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_DISARMING_VOICE, MOVE_DOUBLE_TEAM, MOVE_CONFUSION}
    }
};

static const struct TrainerMon sParty_R8Tr6_CamperM[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 20,
    .species = SPECIES_MUDBRAY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_STEENEE,
    .moves = {MOVE_SWEET_SCENT, MOVE_MAGICAL_LEAF, MOVE_DOUBLE_SLAP, MOVE_RAPID_SPIN}
    }
};

static const struct TrainerMon sParty_R8Tr7_TriathleteM[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 20,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 22,
    .species = SPECIES_BUIZEL,
    }
};

static const struct TrainerMon sParty_R8Tr8_Gentleman[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 23,
    .species = SPECIES_PERSIAN,
    .moves = {MOVE_FEINT_ATTACK, MOVE_SCREECH, MOVE_SWIFT, MOVE_FAKE_OUT}
    }
};

static const struct TrainerMon sParty_R8Tr9_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_ROGGENROLA,
    }
};

static const struct TrainerMon sParty_R8Tr10_OldCouple[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 23,
    .species = SPECIES_BRELOOM,
    .moves = {MOVE_MACH_PUNCH, MOVE_COUNTER, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 23,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sParty_R8Tr11_BirdKeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 18,
    .species = SPECIES_SPEAROW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_FEAROW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 21,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Shoreslate_Nurse[] = {
    {
    .lvl = 25,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 25,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 25,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 25,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 25,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 25,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_STRUGGLE}
    }
};

static const struct TrainerMon sParty_DC1F_Rocket1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 20,
    .species = SPECIES_PAWNIARD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_MURKROW,
    }
};

static const struct TrainerMon sParty_DC1F_Rocket2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_SLUDGE, MOVE_ASSURANCE, MOVE_SMOKESCREEN, MOVE_SMOG}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_DC_BaseRocket1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_FANG, MOVE_GLARE, MOVE_SCREECH, MOVE_BITE}
    }
};

static const struct TrainerMon sParty_DC_BaseRocket2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_SKORUPI,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_SNEASEL,
    }
};

static const struct TrainerMon sParty_DC_BaseRocket3[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_SANDILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_CROAGUNK,
    }
};

static const struct TrainerMon sParty_DC_BaseRocket4[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_SLUDGE, MOVE_ASSURANCE, MOVE_SMOKESCREEN, MOVE_SMOG}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_HELIOPTILE,
    .moves = {MOVE_RAZOR_WIND, MOVE_QUICK_ATTACK, MOVE_MUD_SLAP, MOVE_THUNDER_SHOCK}
    }
};

static const struct TrainerMon sParty_DC2F_Rocket1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_RATTATA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_RATICATE,
    }
};

static const struct TrainerMon sParty_DC2F_Rocket2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_GOLBAT,
    .moves = {MOVE_SWIFT, MOVE_WING_ATTACK, MOVE_CONFUSE_RAY, MOVE_BITE}
    }
};

static const struct TrainerMon sParty_DC2F_Rocket3[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_ARBOK,
    .moves = {MOVE_ACID, MOVE_CRUNCH, MOVE_SCREECH, MOVE_GLARE}
    }
};

static const struct TrainerMon sParty_DC2F_Rocket4[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_PANCHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_MURKROW,
    }
};

static const struct TrainerMon sParty_DC2F_Rocket5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_MURKROW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_FANG, MOVE_GLARE, MOVE_SCREECH, MOVE_BITE}
    }
};

static const struct TrainerMon sParty_DC3F_Rocket1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_ZANGOOSE,
    .moves = {MOVE_REVENGE, MOVE_SLASH, MOVE_HONE_CLAWS, MOVE_PURSUIT}
    }
};

static const struct TrainerMon sParty_DC3F_Rocket_Proton[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_ABSOL,
    .moves = {MOVE_SLASH, MOVE_DOUBLE_TEAM, MOVE_BITE, MOVE_PURSUIT}
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 27,
    .species = SPECIES_GOLBAT,
    .moves = {MOVE_CONFUSE_RAY, MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_BITE},
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 29,
    .species = SPECIES_HOUNDOOM,
    .moves = {MOVE_FIRE_FANG, MOVE_BITE, MOVE_HOWL, MOVE_SMOG},
    }
};

static const struct TrainerMon sParty_Shoreslate_Rocket[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 21,
    .species = SPECIES_HOUNDOUR,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_SMOG, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_DesertTr1_Camper[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_TRAPINCH,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_DesertTr2_Camper2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_HIPPOPOTAS,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_CACNEA,
    }
};

static const struct TrainerMon sParty_DesertTr3_Picnicker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_SANDILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_KROKOROK,
    }
};

static const struct TrainerMon sParty_DesertTr4_Picnicker2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_SCRAGGY,
    .moves = {MOVE_SCARY_FACE, MOVE_SAND_ATTACK, MOVE_PAYBACK, MOVE_LOW_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_PAWNIARD,
    .moves = {MOVE_FURY_CUTTER, MOVE_METAL_CLAW, MOVE_ASSURANCE, MOVE_TORMENT}
    }
};

static const struct TrainerMon sParty_DesertTr5_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_PROBOPASS,
    .moves = {MOVE_POWER_GEM, MOVE_TRI_ATTACK, MOVE_SPARK, MOVE_MAGNET_BOMB}
    }
};

static const struct TrainerMon sParty_DesertTr6_Blackbelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_TIMBURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_GURDURR,
    }
};

static const struct TrainerMon sParty_DesertTr7_Picnicker3[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_PSYDUCK,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_CHEWTLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_DWEBBLE,
    }
};

static const struct TrainerMon sParty_DesertTr8_Hiker2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_BRONZOR,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_XATU,
    .moves = {MOVE_AIR_SLASH, MOVE_NIGHT_SHADE, MOVE_OMINOUS_WIND, MOVE_CONFUSE_RAY}
    }
};

static const struct TrainerMon sParty_DesertTr9_Hiker3[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_LYCANROC_MIDDAY,
    .ability = ABILITY_SAND_RUSH,
    .moves = {MOVE_ACCELEROCK, MOVE_BITE, MOVE_ROCK_TOMB, MOVE_HOWL}
    }
};

static const struct TrainerMon sParty_DesertTr10_Firebreather[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_MAGBY,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_MAGMAR,
    }
};

static const struct TrainerMon sParty_DesertTr11_Blackbelt2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_LUCARIO,
    .moves = {MOVE_AURA_SPHERE, MOVE_METAL_CLAW, MOVE_POWER_UP_PUNCH, MOVE_METAL_SOUND}
    }
};

static const struct TrainerMon sParty_DesertTr12_Hiker4[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_BRONZOR,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_YAMASK,
    }
};

static const struct TrainerMon sParty_DesertTr13_Psychic_F[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_GIRAFARIG,
    },
};

static const struct TrainerMon sParty_DesertTr14_Cooltrainer[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .ev = TRAINER_PARTY_EVS(40, 0, 40, 0, 0, 40),
    .lvl = 28,
    .species = SPECIES_CROBAT,
    .moves = {MOVE_BITE, MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_CONFUSE_RAY},
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .ev = TRAINER_PARTY_EVS(40, 0, 40, 0, 0, 40),
    .lvl = 30,
    .species = SPECIES_MUDSDALE,
    .moves = {MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER, MOVE_DOUBLE_KICK, MOVE_ROCK_SLIDE},
    .ability = ABILITY_STAMINA,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .ev = TRAINER_PARTY_EVS(40, 0, 40, 0, 0, 40),
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 31,
    .species = SPECIES_HERACROSS,
    .moves = {MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_PIN_MISSILE, MOVE_NIGHT_SLASH},
    }
};

static const struct TrainerMon sParty_Route7Tr1_Camper[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_ODDISH,
    .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER, MOVE_MEGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_GLOOM,
    .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER, MOVE_MEGA_DRAIN}
    },
};

static const struct TrainerMon sParty_Route7Tr2_Picnicker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_WOOPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_MUDBRAY,
    }
};

static const struct TrainerMon sParty_Route7Tr3_Ninjaboy[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SKORUPI,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_CROAGUNK,
    }
};

static const struct TrainerMon sParty_Route7Tr4_Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_Route7Tr5_Blackbelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 0, 0),
    .lvl = 25,
    .species = SPECIES_CROAGUNK,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 150, 0, 0),
    .lvl = 27,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sParty_Route7Tr6_Picnicker2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Route7Tr7_Fisherman[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_SLOWPOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_BARBOACH,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_SKRELP,
    }
};

static const struct TrainerMon sParty_Route7Tr8_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_DREDNAW,
    .moves = {MOVE_ROCK_TOMB, MOVE_HEADBUTT, MOVE_CRUNCH, MOVE_RAZOR_SHELL}
    }
};

static const struct TrainerMon sParty_Route7Tr9_Parasollady[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_WOOPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_CLODSIRE,
    .moves = {MOVE_AMNESIA, MOVE_POISON_JAB, MOVE_YAWN, MOVE_SLAM}
    }
};

static const struct TrainerMon sParty_Route7Tr10_NinjaBoy[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_CROBAT,
    .moves = {MOVE_CROSS_POISON, MOVE_SWIFT, MOVE_WING_ATTACK, MOVE_CONFUSE_RAY}
    }
};

static const struct TrainerMon sParty_MarigorgeNurse[] = {
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_STRUGGLE}
    }
};

static const struct TrainerMon sParty_KG_Tr1_Camper1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_WOOPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_CLODSIRE,
    .moves = {MOVE_POISON_JAB, MOVE_YAWN, MOVE_SLAM, MOVE_AMNESIA}
    }
};

static const struct TrainerMon sParty_KG_Tr2_Picnicker1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_PHANPY,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_DONPHAN,
    .moves = {MOVE_SLAM, MOVE_KNOCK_OFF, MOVE_ROLLOUT, MOVE_BULLDOZE}
    }
};

static const struct TrainerMon sParty_KG_Tr3_Hiker1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_SANDILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_KROKOROK,
    }
};

static const struct TrainerMon sParty_KG_Tr4_Camper2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_GIBLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_GABITE,
    .moves = {MOVE_DUAL_CHOP, MOVE_SAND_TOMB, MOVE_TAKE_DOWN, MOVE_DRAGON_RAGE}
    },
};

static const struct TrainerMon sParty_KG_Tr5_Hiker2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
};

static const struct TrainerMon sParty_KG_Tr6_Hiker3[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_DUGTRIO,
    .ability = ABILITY_ARENA_TRAP,
    .moves = {MOVE_SAND_TOMB, MOVE_MUD_BOMB, MOVE_SUCKER_PUNCH, MOVE_BULLDOZE}
    }
};

static const struct TrainerMon sParty_KG_Tr7_Picnicker2[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_MUDBRAY,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_DRILBUR,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_HIPPOPOTAS,
    }
};

static const struct TrainerMon sParty_KG_Tr8_Camper3[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_SAND_TOMB, MOVE_CRUSH_CLAW, MOVE_SWIFT, MOVE_MAGNITUDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_CLODSIRE,
    .moves = {MOVE_POISON_JAB, MOVE_YAWN, MOVE_SLAM, MOVE_AMNESIA}
    }
};

static const struct TrainerMon sParty_KG_Tr9_Picnicker3[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_MARSHTOMP,
    .moves = {MOVE_MUD_SHOT, MOVE_MUD_BOMB, MOVE_WATER_GUN, MOVE_TACKLE}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_PALPITOAD,
    }
};

static const struct TrainerMon sParty_KG_Tr10_Hiker4[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_KG_Clay[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 31,
    .species = SPECIES_STUNFISK,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_REVENGE, MOVE_MUD_SHOT, MOVE_THUNDER_SHOCK},
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 32,
    .species = SPECIES_DONPHAN,
    .moves = {MOVE_ROLLOUT, MOVE_STOMPING_TANTRUM, MOVE_SLAM, MOVE_KNOCK_OFF},
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 32,
    .species = SPECIES_CLODSIRE,
    .moves = {MOVE_YAWN, MOVE_POISON_JAB, MOVE_STOMPING_TANTRUM, MOVE_AMNESIA},
    .ability = ABILITY_WATER_ABSORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 34,
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_METAL_CLAW, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_SLASH},
    },
};

static const struct TrainerMon sParty_KM_Tr1_Picnicker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_RAICHU,
    .moves = {MOVE_FLASH, MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP}
    }
};

static const struct TrainerMon sParty_KM_Tr2_Blackbelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_MIND_READER, MOVE_CALM_MIND, MOVE_FORCE_PALM, MOVE_CONFUSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_HAWLUCHA,
    .moves = {MOVE_KARATE_CHOP, MOVE_ENCORE, MOVE_AERIAL_ACE, MOVE_ROOST}
    }
};

static const struct TrainerMon sParty_KM_Tr3_Camper[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_PHANPY,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_HIPPOPOTAS,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SANDILE,
    }
};

static const struct TrainerMon sParty_KM_Tr4_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_STEELIX,
    }
};

static const struct TrainerMon sParty_KM_Tr5_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_ROGGENROLA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_BOLDORE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 23,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_GRAVELER,
    },
};

static const struct TrainerMon sParty_KM_Tr6_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_ONIX,
    }
};

static const struct TrainerMon sParty_KM_Tr7_Camper[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_TYNAMO,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_EELEKTRIK,
    .moves = {MOVE_DISCHARGE, MOVE_ACID, MOVE_BIND, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_KM_Tr8_Picnicker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_FINNEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_ROSELIA,
    },
};

static const struct TrainerMon sParty_KM_Tr9_Blackbelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_GURDURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_COMBUSKEN,
    .moves = {MOVE_QUICK_ATTACK, MOVE_FLAME_CHARGE, MOVE_PECK, MOVE_DOUBLE_KICK}
    }
};

static const struct TrainerMon sParty_KM_Tr10_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_CRANIDOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_SHIELDON,
    },
};

static const struct TrainerMon sParty_BuffetTrainer1[] = {
    {
    .species = SPECIES_MIMIKYU,
    .ball = ITEM_DUSK_BALL,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 35,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK},
    .nature = NATURE_ADAMANT,
    },
    {
    .species = SPECIES_FROSLASS,
    .ball = ITEM_DUSK_BALL,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 35,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_THUNDERBOLT},
    .nature = NATURE_MODEST,
    },
    {
    .species = SPECIES_GARDEVOIR,
    .ball = ITEM_DUSK_BALL,
    .ability = ABILITY_TRACE,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 35,
    .moves = {MOVE_ENERGY_BALL, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE},
    .nature = NATURE_MODEST,
    }
};

static const struct TrainerMon sParty_BuffetTrainer2[] = {
    {
    .species = SPECIES_PRIMARINA,
    .ball = ITEM_DIVE_BALL,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 35,
    .moves = {MOVE_SCALD, MOVE_HYPER_VOICE, MOVE_ENERGY_BALL, MOVE_ICE_BEAM},
    .nature = NATURE_MODEST,
    .ability = ABILITY_LIQUID_VOICE,
    .gender = TRAINER_MON_FEMALE,
    },
    {
    .species = SPECIES_GYARADOS,
    .ball = ITEM_DIVE_BALL,
    .heldItem = ITEM_WACAN_BERRY,
    .lvl = 35,
    .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_DRAGON_DANCE},
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .gender = TRAINER_MON_MALE,
    },
    {
    .species = SPECIES_SLOWBRO,
    .ball = ITEM_DIVE_BALL,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 35,
    .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_BODY_PRESS, MOVE_SLACK_OFF},
    .nature = NATURE_RELAXED,
    .ability = ABILITY_OBLIVIOUS,
    .gender = TRAINER_MON_MALE,
    }
};

static const struct TrainerMon sParty_BuffetTrainer3[] = {
    {
    .lvl = 35,
    .ball = ITEM_PREMIER_BALL,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_SERIOUS,
    .ability = ABILITY_ANALYTIC,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_EXPLOSION}
    },
    {
    .lvl = 35,
    .ball = ITEM_PREMIER_BALL,
    .species = SPECIES_MAMOSWINE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_BODY_SLAM}
    },
    {
    .lvl = 35,
    .ball = ITEM_PREMIER_BALL,
    .species = SPECIES_QUAGSIRE,
    .nature = NATURE_SASSY,
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_TOXIC, MOVE_RECOVER, MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE}
    },
};

static const struct TrainerMon sParty_BuffetTrainer4[] = {
    {
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .friendship = 255,
    .nature = NATURE_ADAMANT,
    .ball = ITEM_QUICK_BALL,
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    .moves = {MOVE_BATON_PASS, MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_REVERSAL}
    },
    {
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_OWN_TEMPO,
    .friendship = 255,
    .nature = NATURE_TIMID,
    .ball = ITEM_DIVE_BALL,
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    .moves = {MOVE_FAKE_OUT, MOVE_ICE_BEAM, MOVE_SURF, MOVE_GRASS_KNOT}
    },
    {
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_LIGHTNING_ROD,
    .friendship = 255,
    .nature = NATURE_ADAMANT,
    .ball = ITEM_ULTRA_BALL,
    .lvl = 35,
    .species = SPECIES_MAROWAK_ALOLAN,
    .moves = {MOVE_FIRE_PUNCH, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SHADOW_BONE}
    },
};

static const struct TrainerMon sParty_HotelBirdKeeper[] = {
    {
    .lvl = 26,
    .ability = ABILITY_STURDY,
    .species = SPECIES_SKARMORY,
    .moves = {MOVE_TAILWIND, MOVE_SWIFT, MOVE_AIR_CUTTER, MOVE_METAL_CLAW}
    },
    {
    .lvl = 26,
    .heldItem = ITEM_FLYING_GEM,
    .species = SPECIES_ORICORIO_PAU,
    .moves = {MOVE_DOUBLE_SLAP, MOVE_AIR_CUTTER, MOVE_TEETER_DANCE}
    }
};

static const struct TrainerMon sParty_HotelKid1[] = {
    {
    .lvl = 25,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_HotelKid2[] = {
    {
    .lvl = 25,
    .species = SPECIES_SHELLOS_EAST_SEA,
    }
};

static const struct TrainerMon sParty_LeaderKorrina[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 35,
    .species = SPECIES_GALLADE,
    .moves = {MOVE_AERIAL_ACE, MOVE_POWER_UP_PUNCH, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 36,
    .species = SPECIES_MIENSHAO,
    .moves = {MOVE_FAKE_OUT, MOVE_U_TURN, MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 36,
    .species = SPECIES_HAWLUCHA,
    .moves = {MOVE_FLYING_PRESS, MOVE_POWER_UP_PUNCH, MOVE_ENDEAVOR, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 38,
    .heldItem = ITEM_LUCARIONITE,
    .species = SPECIES_LUCARIO,
    .moves = {MOVE_ICE_PUNCH, MOVE_METAL_CLAW, MOVE_POWER_UP_PUNCH, MOVE_BONE_RUSH}
    }
};

static const struct TrainerMon sParty_RockliffeNurse[] = {
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 30,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_STRUGGLE}
    }
};

static const struct TrainerMon sParty_Route11Tr1_Lass[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 26,
    .species = SPECIES_ESPURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 26,
    .species = SPECIES_TOGETIC,
    .moves = {MOVE_ENCORE, MOVE_FAIRY_WIND, MOVE_YAWN, MOVE_METRONOME}
    }
};

static const struct TrainerMon sParty_Route11Tr2_Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 26,
    .species = SPECIES_STARAVIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_SKARMORY,
    .moves = {MOVE_SWIFT, MOVE_AIR_CUTTER, MOVE_METAL_CLAW}
    }
};

static const struct TrainerMon sParty_Route11Tr3_Bugcatcher[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 26,
    .species = SPECIES_SPINARAK,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 26,
    .species = SPECIES_ARIADOS,
    .moves = {MOVE_SWORDS_DANCE, MOVE_FURY_SWIPES, MOVE_SHADOW_SNEAK, MOVE_BUG_BITE}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_RIBOMBEE,
    .moves = {MOVE_POLLEN_PUFF, MOVE_DRAINING_KISS, MOVE_SILVER_WIND, MOVE_STUN_SPORE}
    }
};

static const struct TrainerMon sParty_Route11Tr4_Ninjaboy[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_VENONAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_STUNKY,
    }
};

static const struct TrainerMon sParty_Route11Tr5_Pokemaniac[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_SLOWPOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_SALANDIT,
    }
};

static const struct TrainerMon sParty_Route11Tr6_Triathlete_F[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Route11Tr7_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_GURDURR,
    }
};

static const struct TrainerMon sParty_Route11Tr8_Ninjaboy_2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_HERACROSS,
    .moves = {MOVE_BRICK_BREAK, MOVE_FURY_ATTACK, MOVE_COUNTER, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sParty_Route11Tr9_Ninjaboy_3[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_PINSIR,
    .moves = {MOVE_X_SCISSOR, MOVE_BRICK_BREAK, MOVE_DOUBLE_HIT, MOVE_REVENGE}
    }
};

static const struct TrainerMon sParty_Route11Tr10_Cycler_M[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 29,
    .species = SPECIES_EMOLGA,
    }
};

static const struct TrainerMon sParty_Route11Tr11_Blackbelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_MIENFOO,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_CALM_MIND, MOVE_MIND_READER, MOVE_CONFUSION}
    }
};

static const struct TrainerMon sParty_Route11Tr12_Expert[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_DARTRIX,
    .moves = {MOVE_SYNTHESIS, MOVE_PLUCK, MOVE_OMINOUS_WIND, MOVE_RAZOR_LEAF}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_COMBUSKEN,
    .moves = {MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_PECK, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_PRINPLUP,
    .moves = {MOVE_METAL_CLAW, MOVE_FURY_ATTACK, MOVE_BUBBLE_BEAM, MOVE_PECK}
    },
};

static const struct TrainerMon sParty_Route11Tr13_Psychic_F[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .moves = {MOVE_CHARGE_BEAM, MOVE_PSYSHOCK, MOVE_DISARMING_VOICE, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_MEOWSTIC_MALE,
    .moves = {MOVE_CHARM, MOVE_PSYSHOCK, MOVE_DISARMING_VOICE, MOVE_FAKE_OUT}
    }
};

static const struct TrainerMon sParty_Route11Tr14_Acetrainer_F[] = {
    {
    .iv = TRAINER_PARTY_IVS(11, 11, 11, 11, 11, 11),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_STOUTLAND,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_BABY_DOLL_EYES, MOVE_STOMPING_TANTRUM},
    },
    {
    .iv = TRAINER_PARTY_IVS(11, 11, 11, 11, 11, 11),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    .lvl = 35,
    .species = SPECIES_GRANBULL,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_HEADBUTT, MOVE_BITE, MOVE_OUTRAGE, MOVE_ROCK_SLIDE},
    },
    {
    .iv = TRAINER_PARTY_IVS(11, 11, 11, 11, 11, 11),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    .lvl = 35,
    .species = SPECIES_LUXRAY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDER_FANG, MOVE_BITE, MOVE_SWAGGER, MOVE_FLASH},
    },
    {
    .iv = TRAINER_PARTY_IVS(11, 11, 11, 11, 11, 11),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 36,
    .ability = ABILITY_INTIMIDATE,
    .species = SPECIES_ARCANINE,
    .moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_FIRE_FANG, MOVE_ROCK_SMASH},
    }
};

static const struct TrainerMon sParty_Route11Brendan_Rowlet[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_COMBUSKEN,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK, MOVE_BULK_UP, MOVE_PECK}
    }
};

static const struct TrainerMon sParty_Route11Brendan_Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_PRINPLUP,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_METAL_CLAW, MOVE_PECK, MOVE_BRINE, MOVE_FURY_ATTACK},
    }
};

static const struct TrainerMon sParty_Route11Brendan_Piplup[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS},
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 35,
    .species = SPECIES_DARTRIX,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_PLUCK, MOVE_SYNTHESIS, MOVE_RAZOR_LEAF, MOVE_OMINOUS_WIND}
    }
};

static const struct TrainerMon sParty_Route11Brendan_Rowlet_Angry[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_CALM_MIND},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 36,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_CHARGE, MOVE_ROCK_SMASH, MOVE_BLAZE_KICK, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Route11Brendan_Torchic_Angry[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_CALM_MIND},
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 36,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RAZOR_GALE, MOVE_BRINE, MOVE_ROCK_SMASH, MOVE_SWAGGER},
    }
};

static const struct TrainerMon sParty_Route11Brendan_Piplup_Angry[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_CALM_MIND},
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 36,
    .species = SPECIES_DECIDUEYE,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SYNTHESIS, MOVE_PLUCK, MOVE_RAZOR_LEAF, MOVE_SPIRIT_SHACKLE}
    }
};

static const struct TrainerMon sParty_Route11May_Rowlet[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_COMBUSKEN,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK, MOVE_BULK_UP, MOVE_PECK}
    }
};

static const struct TrainerMon sParty_Route11May_Torhic[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_PRINPLUP,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_METAL_CLAW, MOVE_PECK, MOVE_BRINE, MOVE_FURY_ATTACK},
    }
};

static const struct TrainerMon sParty_Route11May_Piplup[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 35,
    .species = SPECIES_DARTRIX,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_PLUCK, MOVE_SYNTHESIS, MOVE_RAZOR_LEAF, MOVE_OMINOUS_WIND}
    }
};

static const struct TrainerMon sParty_Route11May_Rowlet_Angry[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 36,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_CHARGE, MOVE_ROCK_SMASH, MOVE_BLAZE_KICK, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Route11May_Torchic_Angry[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 36,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RAZOR_GALE, MOVE_BRINE, MOVE_ROCK_SMASH, MOVE_SWAGGER},
    }
};

static const struct TrainerMon sParty_Route11May_Piplup_Angry[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 36,
    .species = SPECIES_DECIDUEYE,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SYNTHESIS, MOVE_PLUCK, MOVE_RAZOR_LEAF, MOVE_SPIRIT_SHACKLE}
    }
};

static const struct TrainerMon sParty_R12Tr1_Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_HAWLUCHA,
    }
};

static const struct TrainerMon sParty_R12Tr2_Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_WHIRLIPEDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_SCOLIPEDE,
    }
};

static const struct TrainerMon sParty_R12Tr3_Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_SHINX,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_LUXIO,
    },
};

static const struct TrainerMon sParty_R12Tr4_Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_DODUO,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 29,
    .species = SPECIES_KLINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_HELIOPTILE,
    }
};

static const struct TrainerMon sParty_R12Tr5_Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_MAGNETON,
    },
};

static const struct TrainerMon sParty_R12Tr6_Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 29,
    .species = SPECIES_JOLTEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 29,
    .species = SPECIES_FLAREON,
    },
};

static const struct TrainerMon sParty_R12Tr7_Triath[] = {
    {
    .lvl = 100,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_R12Tr8_Triath[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 100,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_R12Tr9_Psychic[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 28,
    .species = SPECIES_NATU,
    .moves = {MOVE_PECK, MOVE_CONFUSE_RAY, MOVE_OMINOUS_WIND, MOVE_NIGHT_SHADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 29,
    .species = SPECIES_XATU,
    .moves = {MOVE_AIR_SLASH, MOVE_CONFUSE_RAY, MOVE_OMINOUS_WIND, MOVE_NIGHT_SHADE}
    }
};

static const struct TrainerMon sParty_R12Tr10_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 29,
    .species = SPECIES_LYCANROC,
    .moves = {MOVE_ROCK_TOMB, MOVE_ROCK_THROW, MOVE_BITE, MOVE_ACCELEROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 29,
    .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMon sParty_R12Tr11_Lass[] = {
    {
    .lvl = 28,
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .species = SPECIES_AUDINO,
    .moves = {MOVE_SECRET_POWER, MOVE_ATTRACT, MOVE_DOUBLE_SLAP, MOVE_DISARMING_VOICE}
    },
    {
    .lvl = 29,
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .species = SPECIES_BEWEAR,
    }
};

static const struct TrainerMon sParty_R12Tr12_BugMan[] = {
    {
    .lvl = 29,
    .species = SPECIES_FLOATZEL,
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    },
    {
    .lvl = 29,
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .species = SPECIES_TOGEDEMARU,
    }
};

static const struct TrainerMon sParty_R12Tr13_Ninja[] = {
    {
    .lvl = 31,
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .species = SPECIES_CROBAT,
    }
};

static const struct TrainerMon Party_Sandstone_Nurse[] = {
    {
    .lvl = 33,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 33,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 33,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 33,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 33,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 33,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_STRUGGLE}
    }
};

static const struct TrainerMon Party_R13Tr2_RunnerM[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_JOLTEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_LEAFEON,
    },
};

static const struct TrainerMon Party_R13Tr3_ExpertCouple[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .gender = TRAINER_MON_FEMALE,
    .species = SPECIES_RAICHU,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_GYARADOS,
    .moves = {MOVE_BITE, MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_TWISTER},
    },
};

static const struct TrainerMon Party_R13Tr4_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_GURDURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_BOLDORE,
    },
};

static const struct TrainerMon Party_R13Tr5_Blackbelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    .moves = {MOVE_MACH_PUNCH, MOVE_FORCE_PALM, MOVE_COUNTER, MOVE_FEINT},
    },
};

static const struct TrainerMon Party_FcTr1_Blackbelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_SCRAGGY,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_SCRAFTY,
    }
};

static const struct TrainerMon Party_FcTr2_Battlegirl[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_LUCARIO,
    }
};

static const struct TrainerMon Party_FcTr3_Camper[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_DWEBBLE,
    .moves = {MOVE_ROCK_BLAST, MOVE_ROCK_SLIDE, MOVE_SLASH, MOVE_BUG_BITE}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_KROKOROK,
    },
};

static const struct TrainerMon Party_FcTr4_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_CRANIDOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_TYRUNT,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_ANORITH,
    },
};

static const struct TrainerMon Party_R14Tr1_RunnerF[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 33,
    .species = SPECIES_ELECTRODE,
    }
};

static const struct TrainerMon Party_R14Tr2_Hiker[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_DRILBUR,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_SGTr1_CyclistM1[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 31,
    .species = SPECIES_SCRAGGY,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 32,
    .species = SPECIES_SCRAFTY,
    }
};

static const struct TrainerMon sParty_SGTr2_CyclistF1[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 100, 0, 0),
    .lvl = 31,
    .species = SPECIES_FALINKS,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 32,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sParty_SGTr3_CyclistF2[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 33,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_HYPNOSIS, MOVE_BUBBLE_BEAM, MOVE_CIRCLE_THROW, MOVE_MUD_SHOT}
    }
};

static const struct TrainerMon sParty_SGTr4_CyclistM2[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 31,
    .species = SPECIES_STUFFUL,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 32,
    .species = SPECIES_BEWEAR,
    }
};

static const struct TrainerMon sParty_SGTr5_CyclistF3[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 33,
    .species = SPECIES_LUCARIO,
    .moves = {MOVE_AURA_SPHERE, MOVE_BONE_RUSH, MOVE_METAL_SOUND, MOVE_METAL_CLAW}
    }
};

static const struct TrainerMon sParty_SGTr6_CyclistM3[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 33,
    .species = SPECIES_HAWLUCHA,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ACUPRESSURE, MOVE_POWER_TRICK}
    }
};

static const struct TrainerMon sParty_SGTr7_CyclistM4[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 33,
    .species = SPECIES_SCRAFTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
    .lvl = 33,
    .species = SPECIES_PANGORO,
    .moves = {MOVE_VITAL_THROW, MOVE_CIRCLE_THROW, MOVE_SLASH, MOVE_BULLET_PUNCH}
    }
};

static const struct TrainerMon sParty_AT2F_Tr2_Man3[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_MORGREM,
    .moves = {MOVE_FALSE_SURRENDER, MOVE_TORMENT, MOVE_SWAGGER, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_DISCHARGE, MOVE_BITE, MOVE_THUNDER_FANG, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_AT2F_Tr2_Woman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_MIENFOO,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_GURDURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_HAWLUCHA,
    }
};

static const struct TrainerMon sParty_AT2F_Tr1_Psychic[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_ESPURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_GOTHORITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_ESPEON,
    }
};

static const struct TrainerMon sParty_AT2F_Tr1_Man5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_EMOLGA,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_KRICKETUNE,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_JOLTEON,
    },
};

static const struct TrainerMon sParty_AT3F_Tr1_Expert_M[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_SCRAGGY,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 36,
    .species = SPECIES_PANGORO,
    .moves = {MOVE_BULLET_PUNCH, MOVE_BODY_SLAM, MOVE_VITAL_THROW, MOVE_CIRCLE_THROW}
    }
};

static const struct TrainerMon sParty_AT3F_Tr1_Expert_F[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_MIENFOO,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 36,
    .species = SPECIES_MIENSHAO,
    }
};

static const struct TrainerMon sParty_AT3F_Tr2_HexManiac[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_TREVENANT,
    .moves = {MOVE_SHADOW_CLAW, MOVE_FORESTS_CURSE, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP}
    }
};

static const struct TrainerMon sParty_AT3F_Tr2_PsychicF[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_XATU,
    .moves = {MOVE_AIR_SLASH, MOVE_WISH, MOVE_CONFUSE_RAY, MOVE_OMINOUS_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_MEOWSTIC_FEMALE,
    }
};

static const struct TrainerMon sParty_AT4F_Tr1_BlackBelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_GURDURR,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sParty_AT4F_Tr1_HexManiac[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 34,
    .species = SPECIES_MIMIKYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_MISMAGIUS,
    .moves = {MOVE_MEAN_LOOK, MOVE_HEX, MOVE_PSYBEAM, MOVE_PAIN_SPLIT}
    }
};

static const struct TrainerMon sParty_AT4F_Tr2_Lass[] = {
    {
    .lvl = 28,
    .species = SPECIES_DITTO,
    },
    {
    .lvl = 30,
    .species = SPECIES_BELLOSSOM,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_MOONLIGHT, MOVE_LUCKY_CHANT, MOVE_MEGA_DRAIN}
    },
};

static const struct TrainerMon sParty_AT4F_Tr2_Youngster[] = {
    {
    .lvl = 28,
    .species = SPECIES_SHUPPET,
    },
    {
    .lvl = 30,
    .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_AT4F_Tr3_BattleGirl[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(0, 150, 0, 100, 100, 0),
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    .moves = {MOVE_MACH_PUNCH, MOVE_FORCE_PALM, MOVE_HEADBUTT, MOVE_GIGA_DRAIN}
    }
};

static const struct TrainerMon sParty_AT4F_Tr3_BlackBelt[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .ev = TRAINER_PARTY_EVS(100, 0, 100, 0, 0, 100),
    .lvl = 37,
    .species = SPECIES_BEWEAR,
    .moves = {MOVE_BIND, MOVE_HAMMER_ARM, MOVE_TAKE_DOWN, MOVE_PAYBACK}
    }
};

static const struct TrainerMon sParty_AT5F_CoolTrainer_M[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_BRONZONG,
    .moves = {MOVE_BLOCK, MOVE_FUTURE_SIGHT, MOVE_PSYWAVE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 36,
    .species = SPECIES_WHIMSICOTT,
    .moves = {MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_TAILWIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 37,
    .species = SPECIES_BRAVIARY,
    .moves = {MOVE_SUPERPOWER, MOVE_CRUSH_CLAW, MOVE_SLASH, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sParty_AT5F_CoolTrainer_F[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 35,
    .species = SPECIES_MALAMAR,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_TOPSY_TURVY, MOVE_LIGHT_SCREEN, MOVE_PAYBACK, MOVE_PSYBEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 37,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_MAWILITE,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_VISE_GRIP, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH}
    }
};

static const struct TrainerMon sParty_R14Tr3_ParasolLady[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_BUIZEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_R14Tr4_FisherMan[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_FINNEON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_LUMINEON,
    }
};

static const struct TrainerMon sParty_R14Tr5_ParasolLady[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_FLOATZEL,
    .moves = {MOVE_PURSUIT, MOVE_SWIFT, MOVE_AQUA_JET, MOVE_WHIRLPOOL}
    }
};

static const struct TrainerMon sParty_R14Tr6_NinjaBoy[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_CROAGUNK,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_KOFFING,
    }
};

static const struct TrainerMon sParty_R14Tr7_Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_FEAROW,
    .moves = {MOVE_DRILL_PECK, MOVE_FOCUS_ENERGY, MOVE_MIRROR_MOVE, MOVE_PURSUIT}
    }
};

static const struct TrainerMon sParty_R14Tr8_Maniac[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_WIMPOD,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_GOLISOPOD,
    .moves = {MOVE_IRON_DEFENSE, MOVE_SUCKER_PUNCH, MOVE_RAZOR_SHELL, MOVE_FIRST_IMPRESSION}
    }
};

static const struct TrainerMon sParty_R15Tr1_Birdkeeper[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ROOST, MOVE_AERIAL_ACE, MOVE_WATER_PULSE, MOVE_SUPERSONIC}
    }
};

static const struct TrainerMon sParty_R15Tr2_RangerF[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_R15Tr3_RangerM[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_STOUTLAND,
    .moves = {MOVE_TAKE_DOWN, MOVE_CRUNCH, MOVE_ROAR, MOVE_RETALIATE}
    }
};

static const struct TrainerMon sParty_R15Tr4_Gentleman[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_UMBREON,
    .moves = {MOVE_PURSUIT, MOVE_MOONLIGHT, MOVE_CONFUSE_RAY, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_R15Tr5_Ninjaboy[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 32,
    .species = SPECIES_CHEWTLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_CHEWTLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_CHEWTLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 38,
    .species = SPECIES_CHEWTLE,
    },
};

static const struct TrainerMon sParty_R15Tr6_Ninjaboy[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_BISHARP,
    }
};

static const struct TrainerMon sParty_R15Tr7_Bugcatcher[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_WIMPOD,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 33,
    .species = SPECIES_WIMPOD,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_WIMPOD,
    },
};

static const struct TrainerMon sParty_R15Tr8_Bugmaniac[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_GOLISOPOD,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_SUCKER_PUNCH, MOVE_RAZOR_SHELL, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_ARAQUANID,
    }
};

static const struct TrainerMon sParty_R15Tr9_Beauty[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 29,
    .species = SPECIES_TOGEPI,
    .moves = {MOVE_METRONOME, MOVE_FLASH, MOVE_YAWN, MOVE_ENCORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 33,
    .species = SPECIES_TOGETIC,
    .moves = {MOVE_METRONOME, MOVE_FLASH, MOVE_YAWN, MOVE_ENCORE},
    }
};

static const struct TrainerMon sParty_R15Tr10_Fisherman[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_R15Tr11_AceM[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    .lvl = 42,
    .species = SPECIES_CONKELDURR,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_WAKE_UP_SLAP, MOVE_STOMPING_TANTRUM, MOVE_STRENGTH},
    .heldItem = ITEM_ROCKY_HELMET
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    .lvl = 43,
    .species = SPECIES_CHESNAUGHT,
    .moves = {MOVE_SPIKY_SHIELD, MOVE_SEED_BOMB, MOVE_LEECH_SEED, MOVE_IRON_HEAD},
    .heldItem = ITEM_CHESNAUGHTITE
    },
};

static const struct TrainerMon sParty_R15Tr11_AceF[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    .lvl = 42,
    .species = SPECIES_TOGEKISS,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_HELPING_HAND, MOVE_FOLLOW_ME, MOVE_ENCORE, MOVE_YAWN},
    .heldItem = ITEM_ROCKY_HELMET
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    .lvl = 43,
    .species = SPECIES_AUDINO,
    .ability = ABILITY_HEALER,
    .moves = {MOVE_HELPING_HAND, MOVE_HEAL_PULSE, MOVE_FLASH, MOVE_ATTRACT},
    .heldItem = ITEM_CHOPLE_BERRY
    }
};

static const struct TrainerMon sParty_R15Tr13_Cooltrainer[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_SLIGGOO,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_GABITE,
    .moves = {MOVE_DUAL_CHOP, MOVE_DRAGON_CLAW, MOVE_SLASH, MOVE_SAND_TOMB}
    }
};

static const struct TrainerMon sParty_R15Tr14_Lass[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_MEOWSTIC_FEMALE,
    }
};

static const struct TrainerMon sParty_R15Tr15_Scientist[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_KLANG,
    .moves = {MOVE_SHIFT_GEAR, MOVE_GEAR_GRIND, MOVE_SCREECH, MOVE_DISCHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_PORYGON2,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_RECOVER, MOVE_PSYBEAM, MOVE_ZAP_CANNON}
    },
};

static const struct TrainerMon sParty_R15Tr16_Aromalady[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_ROSELIA
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_BELLOSSOM,
    .moves = {MOVE_GIGA_DRAIN, MOVE_MOONLIGHT, MOVE_SLEEP_POWDER, MOVE_GROWTH}
    }
};

static const struct TrainerMon sParty_R15Tr17_RunnerF[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 38,
    .species = SPECIES_DODRIO,
    .moves = {MOVE_TRI_ATTACK, MOVE_SWORDS_DANCE, MOVE_ACUPRESSURE, MOVE_PLUCK}
    }
};

static const struct TrainerMon sParty_R15Tr18_RocketGrunt[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_HOUNDOOM,
    }
};

static const struct TrainerMon sParty_TRAINER_R23_TR1_BREEDER_M[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_ROCKRUFF,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR2_MANIAC[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_GRANBULL,
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR3_TWINS[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_POLIWHIRL,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_PALPITOAD,
    .moves = {MOVE_MUDDY_WATER, MOVE_UPROAR, MOVE_MUD_SHOT}
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR4_BREEDER_F[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_PIKACHU,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_TOGEDEMARU,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_EMOLGA,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_MORPEKO,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 34,
    .species = SPECIES_PACHIRISU,
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR5_HEXMANIAC_1[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_GASTLY,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR6_PSYCHIC_M[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 38,
    .species = SPECIES_MEOWSTIC_MALE,
    .moves = {MOVE_REFLECT, MOVE_PSYSHOCK, MOVE_FAKE_OUT, MOVE_DISARMING_VOICE}
    }
};

static const struct TrainerMon sParty_TRAINER_R23_TR7_HEXMANIAC_2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_PHANTUMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 36,
    .species = SPECIES_PHANTUMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_TREVENANT,
    .moves = {MOVE_SHADOW_CLAW, MOVE_FORESTS_CURSE, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP}
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR8_TRIATHLETE_F[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_ELECTRODE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SELF_DESTRUCT, MOVE_THUNDER}
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR9_FISHERMAN[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 35,
    .species = SPECIES_GOLDEEN,
    .ability = ABILITY_LIGHTNING_ROD,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_LANTURN,
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR10_BATTLEGIRL[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 38,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_SUBMISSION, MOVE_MUD_SHOT, MOVE_BUBBLE_BEAM, MOVE_BODY_SLAM}
    }
};

static const struct TrainerMon sParty_TRAINER_R23_TR11_NINJABOY[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_TRAINER_R23_TR12_ACETRAINER[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .ev = TRAINER_PARTY_EVS(0, 0, 50, 0, 0, 50),
    .lvl = 43,
    .species = SPECIES_LUDICOLO,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ZEN_HEADBUTT, MOVE_FAKE_OUT, MOVE_BUBBLE_BEAM},
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .ev = TRAINER_PARTY_EVS(0, 0, 50, 0, 0, 50),
    .lvl = 44,
    .species = SPECIES_SEISMITOAD,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_MUDDY_WATER, MOVE_MUD_SHOT, MOVE_ACID},
    },
    // {
    // .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    // .ev = TRAINER_PARTY_EVS(0, 0, 50, 0, 0, 50),
    // .lvl = 45,
    // .species = SPECIES_FLOATZEL,
    // },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .ev = TRAINER_PARTY_EVS(0, 0, 50, 0, 0, 50),
    .lvl = 45,
    .species = SPECIES_RAICHU_ALOLAN,
    .moves = {MOVE_PSYCHIC, MOVE_THUNDER, MOVE_NUZZLE},
    },
    // {
    // .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    // .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 0, 100),
    // .lvl = 45,
    // .species = SPECIES_SWAMPERT,
    // .moves = {MOVE_JET_PUNCH, MOVE_MUDDY_WATER, MOVE_ROCK_SLIDE, MOVE_MUD_BOMB},
    // .heldItem = ITEM_SWAMPERTITE,
    // },
};

static const struct TrainerMon sParty_DRISLEDGE_NURSE[] = {
    {
    .lvl = 40,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 40,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 40,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 40,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 40,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_HEALING_WISH}
    },
    {
    .lvl = 40,
    .species = SPECIES_EXPBOT,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_STRUGGLE}
    }
};

static const struct TrainerMon sParty_DRISLEDGEGYM_TRAINER1[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 38,
    .species = SPECIES_SABLEYE,
    .moves = {MOVE_CONFUSE_RAY, MOVE_ZEN_HEADBUTT, MOVE_POWER_GEM, MOVE_SHADOW_CLAW}
    }
};

static const struct TrainerMon sParty_DRISLEDGEGYM_TRAINER2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_SHUPPET,
    .moves = {MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_HEX, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 38,
    .species = SPECIES_BANETTE,
    .moves = {MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_HEX, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sParty_DRISLEDGEGYM_TRAINER3[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 38,
    .species = SPECIES_TREVENANT,
    .moves = {MOVE_SHADOW_CLAW, MOVE_FORESTS_CURSE, MOVE_STRENGTH_SAP, MOVE_WILL_O_WISP}
    }
};

static const struct TrainerMon sParty_DRISLEDGEGYM_TRAINER4[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 37,
    .species = SPECIES_MISDREAVUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 39,
    .species = SPECIES_MISMAGIUS,
    .moves = {MOVE_PHANTOM_FORCE, MOVE_PAIN_SPLIT, MOVE_MEAN_LOOK, MOVE_PSYBEAM}
    }
};

static const struct TrainerMon sParty_DRISLEDGEGYM_TRAINER5[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 39,
    .species = SPECIES_COFAGRIGUS,
    .moves = {MOVE_SHADOW_CLAW, MOVE_CURSE, MOVE_MEAN_LOOK, MOVE_WILL_O_WISP}
    }
};

static const struct TrainerMon sParty_DRISLEDGEGYM_TRAINER6[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 38,
    .species = SPECIES_MIMIKYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 39,
    .species = SPECIES_GENGAR,
    .moves = {MOVE_SHADOW_BALL, MOVE_SUCKER_PUNCH, MOVE_CURSE, MOVE_MEAN_LOOK}
    }
};

static const struct TrainerMon sParty_TRAINER_LEADER_ACEROLA[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 42,
    .species = SPECIES_MIMIKYU,
    .isShiny = TRUE,
    .moves = {MOVE_HONE_CLAWS, MOVE_SHADOW_CLAW, MOVE_DRAIN_PUNCH, MOVE_WOOD_HAMMER}
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 43,
    .species = SPECIES_BANETTE,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_CURSE, MOVE_SHADOW_CLAW, MOVE_GUNK_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 43,
    .species = SPECIES_TREVENANT,
    .moves = {MOVE_DESTINY_BOND, MOVE_SHADOW_CLAW, MOVE_FORESTS_CURSE, MOVE_STRENGTH_SAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 45,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_GENGARITE,
    .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_DREAM_EATER}
    },
};

static const struct TrainerMon sParty_Eddie[] = {
    {
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 16,
    .species = SPECIES_ZIGZAGOON,
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 3,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
    .lvl = 15,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 13,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Wallace[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Andrew[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 10,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ivan[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 6,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 7,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
    .lvl = 16,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 17,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 18,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 7,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 10,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ned[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Dale[] = {
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 14,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 14,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 25,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .lvl = 16,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .lvl = 19,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 21,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 23,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 26,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 30,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 6,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Camden[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Chase[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 27,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_BAGON,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .lvl = 26,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_DODUO,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 30,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 33,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 29,
    .species = SPECIES_DODUO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
    .lvl = 28,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 28,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
    .lvl = 29,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Benny[] = {
    {
    .lvl = 36,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
    .lvl = 26,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .lvl = 25,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    }
};

static const struct TrainerMon sParty_Dianne[] = {
    {
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 43,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 17,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .lvl = 18,
    .species = SPECIES_KOFFING,
    },
    {
    .lvl = 18,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 26,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 18,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
    .lvl = 19,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 28,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 30,
    .species = SPECIES_CASTFORM_NORMAL,
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
    .lvl = 26,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
    .lvl = 25,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 25,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
    .lvl = 24,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 24,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .lvl = 34,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 33,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 33,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .lvl = 35,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .lvl = 22,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH, MOVE_DIG}
    },
    {
    .lvl = 22,
    .species = SPECIES_MARILL,
    .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL}
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
    .lvl = 17,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 17,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
    .lvl = 18,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Martha[] = {
    {
    .lvl = 23,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 23,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
    .lvl = 19,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 19,
    .species = SPECIES_ODDISH,
    },
    {
    .lvl = 19,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .lvl = 32,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Irene[] = {
    {
    .lvl = 17,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 17,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .lvl = 15,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 15,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .lvl = 6,
    .species = SPECIES_SEEDOT,
    },
    {
    .lvl = 6,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .lvl = 26,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .lvl = 26,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .lvl = 9,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 9,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .lvl = 10,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 10,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 12,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 12,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Edmond[] = {
    {
    .lvl = 13,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 11,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
    .lvl = 25,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 25,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .lvl = 27,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .lvl = 31,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .lvl = 31,
    .species = SPECIES_CASTFORM_NORMAL,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .lvl = 33,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
    .lvl = 14,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 14,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .lvl = 18,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 18,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 6,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 8,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 4,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROWLET,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_TACKLE, MOVE_GROWL},
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    // .lvl = 12,
    // .species = SPECIES_BUNNELBY,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 14,
    .species = SPECIES_ROWLET,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_PECK, MOVE_ASTONISH, MOVE_RAZOR_LEAF, MOVE_TACKLE}
    }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SCRATCH, MOVE_GROWL},
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    // .lvl = 12,
    // .species = SPECIES_BUNNELBY,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 14,
    .species = SPECIES_TORCHIC,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_PECK, MOVE_SCRATCH, MOVE_EMBER, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_PIPLUP,
    .moves = {MOVE_POUND, MOVE_GROWL},
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_SERIOUS,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    // .lvl = 12,
    // .species = SPECIES_BUNNELBY,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 14,
    .species = SPECIES_PIPLUP,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROWLET,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_TACKLE, MOVE_GROWL},
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    // .lvl = 12,
    // .species = SPECIES_BUNEARY,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 14,
    .species = SPECIES_ROWLET,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_PECK, MOVE_ASTONISH, MOVE_RAZOR_LEAF, MOVE_TACKLE}
    }
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SCRATCH, MOVE_GROWL},
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    // .lvl = 12,
    // .species = SPECIES_BUNEARY,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 14,
    .species = SPECIES_TORCHIC,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_PECK, MOVE_SCRATCH, MOVE_EMBER, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_PIPLUP,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_POUND, MOVE_GROWL},
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    // {
    // .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    // .lvl = 12,
    // .species = SPECIES_BUNEARY,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 14,
    .species = SPECIES_PIPLUP,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    }
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Isaac1[] = {
    {
    .lvl = 11,
    .species = SPECIES_WHISMUR,
    },
    {
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 11,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 11,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 11,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 11,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Davis[] = {
    {
    .lvl = 27,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .lvl = 43,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 11,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 11,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 11,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 11,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 11,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Halle[] = {
    {
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 43,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
    .lvl = 26,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Sophia[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Julio[] = {
    {
    .lvl = 21,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 13,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 13,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .lvl = 20,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .lvl = 36,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .lvl = 36,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 20,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 22,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .lvl = 33,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 38,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 39,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 24,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 24,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 25,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Tiana[] = {
    {
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 4,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
    .lvl = 6,
    .species = SPECIES_LOTAD,
    },
    {
    .lvl = 6,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
    .lvl = 9,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Vivi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 15,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 15,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 15,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
    .lvl = 16,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .lvl = 14,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 14,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 14,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Rick[] = {
    {
    .lvl = 4,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 4,
    .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 3,
    .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 8,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 8,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_Doug[] = {
    {
    .lvl = 28,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 28,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
    .lvl = 25,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
    .lvl = 6,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 6,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Brice[] = {
    {
    .lvl = 17,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 17,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent1[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 17,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Lenny[] = {
    {
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Alan[] = {
    {
    .lvl = 22,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 22,
    .species = SPECIES_NOSEPASS,
    },
    {
    .lvl = 22,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Eric[] = {
    {
    .lvl = 20,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 20,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .lvl = 9,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
    .lvl = 10,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 10,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 31,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Gerald[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 23,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    }
};

static const struct TrainerMon sParty_Vivian[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE}
    }
};

static const struct TrainerMon sParty_Danielle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 23,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .lvl = 25,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    },
    {
    .lvl = 28,
    .species = SPECIES_NINJASK,
    .moves = {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .lvl = 28,
    .species = SPECIES_NINCADA,
    .moves = {MOVE_LEECH_LIFE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG}
    },
    {
    .lvl = 28,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 29,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 16,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 32,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 25,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .lvl = 34,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 36,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 32,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .lvl = 19,
    .species = SPECIES_SPINDA,
    },
    {
    .lvl = 19,
    .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWABLU,
    .moves = {MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 35,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_GROWTH, MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
    .lvl = 20,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_DEFENSE_CURL, MOVE_ROLLOUT, MOVE_MUD_SPORT, MOVE_ROCK_THROW}
    }
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .lvl = 27,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .lvl = 27,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 33,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .lvl = 27,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .lvl = 29,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 20,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 26,
    .species = SPECIES_FEEBAS,
    },
    {
    .lvl = 23,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Dawson[] = {
    {
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    },
    {
    .lvl = 8,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 8,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Darian[] = {
    {
    .lvl = 9,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
    .lvl = 13,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Chandler[] = {
    {
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
    .lvl = 14,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .lvl = 14,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Joseph[] = {
    {
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .lvl = 14,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Marcos[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 15,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sParty_Rhett[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 15,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Tyron[] = {
    {
    .lvl = 19,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Celina[] = {
    {
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Bianca[] = {
    {
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Hayden[] = {
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sophie[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 19,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .lvl = 17,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 19,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
    .lvl = 18,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
    .lvl = 18,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 18,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sParty_Angelina[] = {
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .lvl = 19,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .lvl = 14,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 14,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 28,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 28,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .lvl = 33,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 2,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 3,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 4,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
    .lvl = 15,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 25,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .lvl = 26,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
    .lvl = 24,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 24,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Carolina[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 22,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sParty_Bryan[] = {
    {
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    },
    {
    .lvl = 22,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Branden[] = {
    {
    .lvl = 22,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 22,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Bryant[] = {
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sParty_Shayla[] = {
    {
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .lvl = 26,
    .species = SPECIES_DODUO,
    },
    {
    .lvl = 26,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .lvl = 26,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 26,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .lvl = 26,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 18,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Johnson[] = {
    {
    .lvl = 8,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sParty_Melina[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
    .lvl = 26,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .lvl = 25,
    .species = SPECIES_SLUGMA,
    },
    {
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 28,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 29,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 29,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 13,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 15,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 32,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 39,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CHARM, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 17,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_CONFUSE_RAY, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Darius[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 30,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

