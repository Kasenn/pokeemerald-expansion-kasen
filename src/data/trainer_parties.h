
static const struct TrainerMon sP_Brother1_Squirtle[] = {
    {
    POKEMON_MN(SPECIES_SQUIRTLE, 5, NATURE_ADAMANT),
    .moves = {MOVE_TACKLE},
    .heldItem = ITEM_CHOICE_BAND,
    }
};

static const struct TrainerMon sP_Brother1_Bulbasaur[] = {
    {
    POKEMON_MN(SPECIES_BULBASAUR, 5, NATURE_ADAMANT),
    .moves = {MOVE_TACKLE},
    .heldItem = ITEM_CHOICE_BAND
    }
};

static const struct TrainerMon sP_Brother1_Charmander[] = {
    {
    POKEMON_MN(SPECIES_CHARMANDER, 5, NATURE_ADAMANT),
    .moves = {MOVE_SCRATCH},
    .heldItem = ITEM_CHOICE_BAND
    }
};

static const struct TrainerMon sP_Brother2_Squirtle[] = {
    {POKEMON_N(SPECIES_GROWLITHE, 14, NATURE_JOLLY), IVS_ALL(7),
     MOVES(MOVE_BITE, MOVE_LEER, MOVE_EMBER, MOVE_ROAR)},

    {POKEMON_N(SPECIES_ROSELIA, 14, NATURE_JOLLY), IVS_ALL(7),
     MOVES(MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_POISON_STING, MOVE_GROWTH)},

    {POKEMON_N(SPECIES_WARTORTLE, 16, NATURE_DOCILE), IVS_ALL(7),
     MOVES(MOVE_TACKLE, MOVE_WITHDRAW, MOVE_BUBBLE, MOVE_ICY_WIND), HELD(ITEM_SITRUS_BERRY)}
};

static const struct TrainerMon sP_Brother2_Bulbasaur[] = {
    {
    POKEMON_N(SPECIES_MUDBRAY, 14, NATURE_NAIVE), IVS_ALL(7),
    .moves = {MOVE_MUD_SLAP, MOVE_BULLDOZE, MOVE_LOW_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_GROWLITHE, 14, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_BITE, MOVE_LEER, MOVE_EMBER, MOVE_ROAR},
    },
    {
    POKEMON_N(SPECIES_IVYSAUR, 16, NATURE_HASTY), IVS_ALL(7),
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_TAKE_DOWN, MOVE_VINE_WHIP},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother2_Charmander[] = {
    {
    POKEMON_N(SPECIES_ROSELIA, 14, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_POISON_STING, MOVE_GROWTH},
    },
    {
    POKEMON_N(SPECIES_MUDBRAY, 14, NATURE_NAIVE), IVS_ALL(7),
    .moves = {MOVE_MUD_SLAP, MOVE_BULLDOZE, MOVE_LOW_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_CHARMELEON, 16, NATURE_DOCILE), IVS_ALL(7),
    .moves = {MOVE_SCRATCH, MOVE_EMBER, MOVE_SMOKESCREEN},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother3_Squirtle[] = {
    {
    POKEMON_N(SPECIES_GROWLITHE, 17, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_EMBER, MOVE_ROAR},
    },
    {
    POKEMON_N(SPECIES_ROSELIA, 17, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_POISON_STING, MOVE_LEECH_SEED},
    },
    {
    POKEMON_N(SPECIES_WARTORTLE, 19, NATURE_DOCILE), IVS_ALL(7),
    .moves = {MOVE_BITE, MOVE_WITHDRAW, MOVE_BUBBLE, MOVE_ICY_WIND},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother3_Bulbasaur[] = {
    {
    POKEMON_N(SPECIES_MUDBRAY, 17, NATURE_NAIVE), IVS_ALL(7),
    .moves = {MOVE_STOMP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_GROWLITHE, 17, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_EMBER, MOVE_ROAR},
    },
    {
    POKEMON_N(SPECIES_IVYSAUR, 19, NATURE_HASTY), IVS_ALL(7),
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_TAKE_DOWN, MOVE_VINE_WHIP},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother3_Charmander[] = {
    {
    POKEMON_N(SPECIES_MUDBRAY, 17, NATURE_NAIVE), IVS_ALL(7),
    .moves = {MOVE_STOMP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_ROSELIA, 17, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_STUN_SPORE, MOVE_MEGA_DRAIN, MOVE_POISON_STING, MOVE_LEECH_SEED},
    },
    {
    POKEMON_N(SPECIES_CHARMELEON, 19, NATURE_DOCILE), IVS_ALL(7),
    .moves = {MOVE_SCRATCH, MOVE_EMBER, MOVE_SMOKESCREEN},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother4_Squirtle[] = {
    {
    POKEMON_N(SPECIES_GROWLITHE, 19, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_EMBER, MOVE_REVERSAL},
    },
    {
    POKEMON_N(SPECIES_ROSELIA, 19, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_STUN_SPORE, MOVE_MAGICAL_LEAF, MOVE_POISON_STING, MOVE_LEECH_SEED},
    },
    {
    POKEMON_N(SPECIES_WARTORTLE, 22, NATURE_DOCILE), IVS_ALL(7),
    .moves = {MOVE_BITE, MOVE_RAPID_SPIN, MOVE_BUBBLE, MOVE_ICY_WIND},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother4_Bulbasaur[] = {
    {
    POKEMON_N(SPECIES_MUDBRAY, 19, NATURE_NAIVE), IVS_ALL(7),
    .moves = {MOVE_STOMP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_GROWLITHE, 19, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_EMBER, MOVE_REVERSAL},
    },
    {
    POKEMON_N(SPECIES_IVYSAUR, 22, NATURE_HASTY), IVS_ALL(7),
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_TAKE_DOWN, MOVE_RAZOR_LEAF},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother4_Charmander[] = {
    {
    POKEMON_N(SPECIES_MUDBRAY, 19, NATURE_NAIVE), IVS_ALL(7),
    .moves = {MOVE_STOMP, MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_ROSELIA, 19, NATURE_JOLLY), IVS_ALL(7),
    .moves = {MOVE_STUN_SPORE, MOVE_MAGICAL_LEAF, MOVE_POISON_STING, MOVE_LEECH_SEED},
    },
    {
    POKEMON_N(SPECIES_CHARMELEON, 22, NATURE_DOCILE), IVS_ALL(7),
    .moves = {MOVE_SCRATCH, MOVE_EMBER, MOVE_SMOKESCREEN},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother5_Squirtle[] = {
    {
    POKEMON_N(SPECIES_ARCANINE, 38, NATURE_JOLLY), IVS_ALL(13),
    .moves = {MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_REVERSAL},
    },
    {
    POKEMON_N(SPECIES_ROSERADE, 38, NATURE_JOLLY), IVS_ALL(13),
    .moves = {MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE},
    },
    {
    POKEMON_N(SPECIES_MALAMAR, 39, NATURE_QUIRKY), IVS_ALL(13),
    .moves = {MOVE_REVERSAL, MOVE_TOPSY_TURVY, MOVE_PLUCK, MOVE_PSYCHO_CUT}
    },
    {
    POKEMON_N(SPECIES_BLASTOISE, 40, NATURE_DOCILE), IVS_ALL(13),
    .moves = {MOVE_FLASH_CANNON, MOVE_WATER_PULSE, MOVE_BITE, MOVE_ICY_WIND},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother5_Bulbasaur[] = {
    {
    POKEMON_N(SPECIES_MUDSDALE, 38, NATURE_NAIVE), IVS_ALL(13),
    .moves = {MOVE_HEAVY_SLAM, MOVE_STOMPING_TANTRUM, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_ARCANINE, 38, NATURE_JOLLY), IVS_ALL(13),
    .moves = {MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_REVERSAL},
    },
    {
    POKEMON_N(SPECIES_MALAMAR, 39, NATURE_QUIRKY), IVS_ALL(13),
    .moves = {MOVE_REVERSAL, MOVE_TOPSY_TURVY, MOVE_PLUCK, MOVE_PSYCHO_CUT}
    },
    {
    POKEMON_N(SPECIES_VENUSAUR, 40, NATURE_HASTY), IVS_ALL(13),
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STRENGTH, MOVE_PETAL_DANCE},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother5_Charmander[] = {
    {
    POKEMON_N(SPECIES_ROSERADE, 38, NATURE_JOLLY), IVS_ALL(13),
    .moves = {MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE},
    },
    {
    POKEMON_N(SPECIES_MUDSDALE, 38, NATURE_NAIVE), IVS_ALL(13),
    .moves = {MOVE_HEAVY_SLAM, MOVE_STOMPING_TANTRUM, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_MALAMAR, 39, NATURE_QUIRKY), IVS_ALL(13),
    .moves = {MOVE_REVERSAL, MOVE_TOPSY_TURVY, MOVE_PLUCK, MOVE_PSYCHO_CUT}
    },
    {
    POKEMON_N(SPECIES_CHARIZARD, 40, NATURE_DOCILE), IVS_ALL(13),
    .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_CLAW, MOVE_HEAT_WAVE, MOVE_ROCK_SMASH},
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sP_Brother6_Squirtle[] = {
    {
    POKEMON(SPECIES_URSARING, 51), IVS_ALL(16),
    .moves = {MOVE_REST, MOVE_SNORE, MOVE_SLASH, MOVE_SHADOW_CLAW},
    },
    {
    POKEMON_N(SPECIES_ARCANINE, 50, NATURE_JOLLY), IVS_ALL(16),
    .moves = {MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_REVERSAL},
    },
    {
    POKEMON_N(SPECIES_ROSERADE, 52, NATURE_JOLLY), IVS_ALL(16),
    .moves = {MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE},
    },
    {
    POKEMON(SPECIES_BRAVIARY, 52), IVS_ALL(16),
    .moves = {MOVE_SUPERPOWER, MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_WHIRLWIND}
    },
    {
    POKEMON_N(SPECIES_BLASTOISE, 54, NATURE_DOCILE), IVS_ALL(16),
    .moves = {MOVE_FLASH_CANNON, MOVE_WATER_PULSE, MOVE_HYDRO_PUMP, MOVE_ICY_WIND},
    .heldItem = ITEM_BLASTOISINITE,
    }
};

static const struct TrainerMon sP_Brother6_Bulbasaur[] = {
    {
    POKEMON(SPECIES_URSARING, 51), IVS_ALL(16),
    .moves = {MOVE_REST, MOVE_SNORE, MOVE_SLASH, MOVE_SHADOW_CLAW},
    },
    {
    POKEMON_N(SPECIES_MUDSDALE, 50, NATURE_NAIVE), IVS_ALL(16),
    .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON_N(SPECIES_ARCANINE, 52, NATURE_JOLLY), IVS_ALL(16),
    .moves = {MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_REVERSAL},
    },
    {
    POKEMON(SPECIES_BRAVIARY, 52), IVS_ALL(16),
    .moves = {MOVE_SUPERPOWER, MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_WHIRLWIND}
    },
    {
    POKEMON_N(SPECIES_VENUSAUR, 54, NATURE_HASTY), IVS_ALL(16),
    .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STRENGTH, MOVE_PETAL_BLIZZARD},
    .heldItem = ITEM_VENUSAURITE,
    }
};

static const struct TrainerMon sP_Brother6_Charmander[] = {
    {
    POKEMON(SPECIES_URSARING, 51), IVS_ALL(16),
    .moves = {MOVE_REST, MOVE_SNORE, MOVE_SLASH, MOVE_SHADOW_CLAW},
    },
    {
    POKEMON_N(SPECIES_ROSERADE, 50, NATURE_JOLLY), IVS_ALL(16),
    .moves = {MOVE_TOXIC, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_GRASS_WHISTLE},
    },
    {
    POKEMON_N(SPECIES_MUDSDALE, 52, NATURE_NAIVE), IVS_ALL(16),
    .moves = {MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_DOUBLE_KICK, MOVE_IRON_HEAD},
    },
    {
    POKEMON(SPECIES_BRAVIARY, 52), IVS_ALL(16),
    .moves = {MOVE_SUPERPOWER, MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_WHIRLWIND}
    },
    {
    POKEMON_N(SPECIES_CHARIZARD, 54, NATURE_DOCILE), IVS_ALL(16),
    .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM},
    .heldItem = ITEM_CHARIZARDITE_Y,
    }
};

static const struct TrainerMon sP_GruntRusturfTunnel[] = {
    {POKEMON(SPECIES_RATTATA, 3)},
    {POKEMON(SPECIES_TORCHIC, 4)}
};

static const struct TrainerMon sP_GruntWeatherInst1[] = {
    {POKEMON(SPECIES_GOLDEEN, 3)},
    {
    POKEMON(SPECIES_QWILFISH, 4),
    .ability = ABILITY_POISON_POINT,
    .moves = {MOVE_TACKLE, MOVE_POISON_STING},
    }
};

static const struct TrainerMon sP_GruntWeatherInst2[] = {
    {POKEMON(SPECIES_WEEDLE, 3)},
    {POKEMON(SPECIES_ROWLET, 4)}
};

static const struct TrainerMon sP_GruntWeatherInst3[] = {
    {
    POKEMON_N(SPECIES_PIPLUP, 5, NATURE_NAIVE), IVS_SPEED(31, 0), EVS_SPEED(252, 0),
    }
};

static const struct TrainerMon sP_GruntMuseum1[] = {
    {POKEMON(SPECIES_RIOLU, 5)},
    {POKEMON(SPECIES_POLIWAG, 6)},
    {POKEMON(SPECIES_PIKACHU, 6)}
};

static const struct TrainerMon sP_GruntMuseum2[] = {
    {POKEMON(SPECIES_POLIWAG, 4)},
    {POKEMON(SPECIES_HORSEA, 5)}
};

static const struct TrainerMon sP_GruntSpaceCenter1[] = {
    {POKEMON(SPECIES_CUTIEFLY, 6)}
};

static const struct TrainerMon sP_GruntMtPyre1[] = {
    {POKEMON(SPECIES_RIOLU, 5)},
    {POKEMON(SPECIES_SCRAGGY, 7)}
};

static const struct TrainerMon sP_GruntMtPyre2[] = {
    {POKEMON(SPECIES_RATTATA, 7)}
};

static const struct TrainerMon sP_GruntMtPyre3[] = {
    {POKEMON(SPECIES_RALTS, 6)},
    {POKEMON(SPECIES_PIKACHU, 6)}
};

static const struct TrainerMon sP_GruntWeatherInst4[] = {
    {POKEMON(SPECIES_SCATTERBUG, 6)},
    {POKEMON(SPECIES_SCATTERBUG, 7)}
};

static const struct TrainerMon sP_GruntAquaHideout5[] = {
    {POKEMON(SPECIES_RATTATA, 6)},
    {POKEMON(SPECIES_VULPIX, 7)}
};

static const struct TrainerMon sP_GruntAquaHideout6[] = {
    {POKEMON(SPECIES_WEEDLE, 6)},
    {
    POKEMON(SPECIES_KAKUNA, 7),
    .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_HARDEN},
    }
};

static const struct TrainerMon sP_WW_CAMPER[] = {
    {POKEMON(SPECIES_PIKACHU, 6)},
    {
    POKEMON(SPECIES_BUIZEL, 7),
    .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_WATER_SPORT},
    }
};

static const struct TrainerMon sP_Matt[] = {
    {POKEMON(SPECIES_BUNEARY, 7)},
    {POKEMON(SPECIES_RIOLU, 7)}
};

static const struct TrainerMon sP_Zander[] = {
    {POKEMON(SPECIES_RATTATA, 7)},
    {POKEMON(SPECIES_STUNKY, 7)}
};

static const struct TrainerMon sP_ShellyWeatherInstitute[] = {
    {POKEMON(SPECIES_MURKROW, 8)},
    {
    POKEMON(SPECIES_SPEWPA, 9),
    .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_STUN_SPORE, MOVE_PROTECT},
    },
    {POKEMON(SPECIES_CHINCHOU, 8)},
    {POKEMON(SPECIES_PINSIR, 9)}
};

static const struct TrainerMon sP_ShellySeafloorCavern[] = {
    {POKEMON(SPECIES_ZUBAT, 7)},
    {POKEMON(SPECIES_CROAGUNK, 8)}
};

static const struct TrainerMon sP_Archie[] = {
    {
    POKEMON(SPECIES_NINJASK, 7),
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},
    },
    {
    POKEMON(SPECIES_ROGGENROLA, 9),
    .moves = {MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_HEADBUTT},
    },
};

static const struct TrainerMon sP_Leah[] = {
    {
    POKEMON(SPECIES_GLIGAR, 9),
    .moves = {MOVE_SUBSTITUTE, MOVE_PROTECT, MOVE_SAND_ATTACK, MOVE_TOXIC},
    }
};

static const struct TrainerMon sP_Daisy[] = {
    {
    POKEMON_N(SPECIES_KOMALA, 7, NATURE_QUIET),
    .ability = ABILITY_COMATOSE,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_SLEEP_TALK, MOVE_LAST_RESORT},
    }
};

static const struct TrainerMon sP_Rose1[] = {
    {
    POKEMON(SPECIES_BRELOOM, 9),
    .ability = ABILITY_POISON_HEAL,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_MEGA_DRAIN},
    },
};

static const struct TrainerMon sP_Felix[] = {
    {POKEMON(SPECIES_HPBOT, 1)},
    {POKEMON(SPECIES_HPBOT, 1)},
    {POKEMON(SPECIES_HPBOT, 1)},
    {POKEMON(SPECIES_HPBOT, 1)},
    {POKEMON(SPECIES_HPBOT, 1)}
};

static const struct TrainerMon sP_Violet[] = {
    {POKEMON(SPECIES_ATKBOT, 1)},
    {POKEMON(SPECIES_ATKBOT, 1)},
    {POKEMON(SPECIES_ATKBOT, 1)},
    {POKEMON(SPECIES_ATKBOT, 1)},
    {POKEMON(SPECIES_ATKBOT, 1)}
};

static const struct TrainerMon sP_Rose2[] = {
    {POKEMON(SPECIES_DEFBOT, 1)},
    {POKEMON(SPECIES_DEFBOT, 1)},
    {POKEMON(SPECIES_DEFBOT, 1)},
    {POKEMON(SPECIES_DEFBOT, 1)},
    {POKEMON(SPECIES_DEFBOT, 1)}
};

static const struct TrainerMon sP_Rose3[] = {
    {POKEMON(SPECIES_SPATKBOT, 1)},
    {POKEMON(SPECIES_SPATKBOT, 1)},
    {POKEMON(SPECIES_SPATKBOT, 1)},
    {POKEMON(SPECIES_SPATKBOT, 1)},
    {POKEMON(SPECIES_SPATKBOT, 1)}
};

static const struct TrainerMon sP_Rose4[] = {
    {POKEMON(SPECIES_SPDEFBOT, 1)},
    {POKEMON(SPECIES_SPDEFBOT, 1)},
    {POKEMON(SPECIES_SPDEFBOT, 1)},
    {POKEMON(SPECIES_SPDEFBOT, 1)},
    {POKEMON(SPECIES_SPDEFBOT, 1)}
};

static const struct TrainerMon sP_Rose5[] = {
    {POKEMON(SPECIES_SPEEDBOT, 1)},
    {POKEMON(SPECIES_SPEEDBOT, 1)},
    {POKEMON(SPECIES_SPEEDBOT, 1)},
    {POKEMON(SPECIES_SPEEDBOT, 1)},
    {POKEMON(SPECIES_SPEEDBOT, 1)}
};

static const struct TrainerMon sP_Dusty1[] = {
    {POKEMON(SPECIES_EXPBOT, 6)},
    {POKEMON(SPECIES_EXPBOT, 6)},
    {POKEMON(SPECIES_EXPBOT, 6)},
    {POKEMON(SPECIES_EXPBOT, 6)},
    {POKEMON(SPECIES_EXPBOT, 6)}
};

static const struct TrainerMon sP_GabbyAndTy2[] = {
    {POKEMON(SPECIES_EXPBOT, 8)},
    {POKEMON(SPECIES_EXPBOT, 8)},
    {POKEMON(SPECIES_EXPBOT, 8)},
    {POKEMON(SPECIES_EXPBOT, 8)},
    {POKEMON(SPECIES_EXPBOT, 8)},
    {POKEMON(SPECIES_EXPBOT, 8)}
};

static const struct TrainerMon sP_Randall[] = {
    {POKEMON(SPECIES_EXPBOT, 16)},
    {POKEMON(SPECIES_EXPBOT, 16)},
    {POKEMON(SPECIES_EXPBOT, 16)},
    {POKEMON(SPECIES_EXPBOT, 16)},
    {POKEMON(SPECIES_EXPBOT, 16)},
    {POKEMON(SPECIES_EXPBOT, 16)}
};

static const struct TrainerMon sP_Shoreslate_Nurse[] = {
    {POKEMON(SPECIES_EXPBOT, 25)},
    {POKEMON(SPECIES_EXPBOT, 25)},
    {POKEMON(SPECIES_EXPBOT, 25)},
    {POKEMON(SPECIES_EXPBOT, 25)},
    {POKEMON(SPECIES_EXPBOT, 25)},
    {POKEMON(SPECIES_EXPBOT, 25)}
};

static const struct TrainerMon sP_MarigorgeNurse[] = {
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)}
};

static const struct TrainerMon sP_RockliffeNurse[] = {
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)},
    {POKEMON(SPECIES_EXPBOT, 30)}
};

static const struct TrainerMon sP_Sandstone_Nurse[] = {
    {POKEMON(SPECIES_EXPBOT, 33)},
    {POKEMON(SPECIES_EXPBOT, 33)},
    {POKEMON(SPECIES_EXPBOT, 33)},
    {POKEMON(SPECIES_EXPBOT, 33)},
    {POKEMON(SPECIES_EXPBOT, 33)},
    {POKEMON(SPECIES_EXPBOT, 33)}
};

static const struct TrainerMon sP_DRISLEDGE_NURSE[] = {
    {POKEMON(SPECIES_EXPBOT, 40)},
    {POKEMON(SPECIES_EXPBOT, 40)},
    {POKEMON(SPECIES_EXPBOT, 40)},
    {POKEMON(SPECIES_EXPBOT, 40)},
    {POKEMON(SPECIES_EXPBOT, 40)},
    {POKEMON(SPECIES_EXPBOT, 40)}
};

static const struct TrainerMon sP_FROSTHEARTH_NURSE[] = {
    {POKEMON(SPECIES_EXPBOT, 45)},
    {POKEMON(SPECIES_EXPBOT, 45)},
    {POKEMON(SPECIES_EXPBOT, 45)},
    {POKEMON(SPECIES_EXPBOT, 45)},
    {POKEMON(SPECIES_EXPBOT, 45)},
    {POKEMON(SPECIES_EXPBOT, 45)}
};

static const struct TrainerMon sP_Chip[] = {
    {POKEMON(SPECIES_SCATTERBUG, 8)},
    {
    POKEMON(SPECIES_SPEWPA, 9),
    .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_STUN_SPORE, MOVE_PROTECT},
    },
};

static const struct TrainerMon sP_Foster[] = {
    {POKEMON(SPECIES_KRICKETOT, 9)},
    {POKEMON(SPECIES_NINCADA, 9)}
};

static const struct TrainerMon sP_Dusty2[] = {
    {POKEMON(SPECIES_CUTIEFLY, 9)},
    {POKEMON_F(SPECIES_COMBEE, 10)}
};

static const struct TrainerMon sP_Dusty3[] = {
    {
    POKEMON(SPECIES_BEEDRILL, 10),
    .moves = {MOVE_POISON_STING, MOVE_FURY_ATTACK}
    }
};

static const struct TrainerMon sP_Dusty4[] = {
    {POKEMON(SPECIES_GRUBBIN, 10)},
    {POKEMON(SPECIES_VENIPEDE, 10)}
};

static const struct TrainerMon sP_Dusty5[] = {
    {POKEMON(SPECIES_VENONAT, 11)}
};

static const struct TrainerMon sP_GabbyAndTy1[] = {
    {
    POKEMON(SPECIES_CUTIEFLY, 11),
    .moves = {MOVE_U_TURN, MOVE_FAIRY_WIND}
    },
    {
    POKEMON(SPECIES_KRICKETUNE, 11),
    .moves = {MOVE_FURY_CUTTER, MOVE_BIDE, MOVE_GROWL}
    },
    {
    POKEMON(SPECIES_BEEDRILL, 14), IVS_ALL(4),
    .moves = {MOVE_U_TURN, MOVE_TWINEEDLE, MOVE_FURY_ATTACK, MOVE_POISON_STING},
    }
};

static const struct TrainerMon sP_GabbyAndTy3[] = {
    {POKEMON(SPECIES_TIMBURR, 10)},
    {POKEMON(SPECIES_ONIX, 10)}
};

static const struct TrainerMon sP_GabbyAndTy4[] = {
    {POKEMON(SPECIES_JIGGLYPUFF, 11)},
    {POKEMON(SPECIES_TOGEPI, 12)}
};

static const struct TrainerMon sP_GabbyAndTy5[] = {
    {POKEMON(SPECIES_GRIMER, 11)},
    {POKEMON(SPECIES_TRUBBISH, 13)}
};

static const struct TrainerMon sP_GabbyAndTy6[] = {
    {POKEMON(SPECIES_PARAS, 10)},
    {POKEMON(SPECIES_SPINARAK, 10)},
    {POKEMON(SPECIES_NINCADA, 11)}
};

static const struct TrainerMon sP_Lola1[] = {
    {POKEMON(SPECIES_MARILL, 12)},
    {POKEMON(SPECIES_PIKACHU, 12)}
};

static const struct TrainerMon sP_R16_TR1_SWIMMER_M[] = {
    {POKEMON(SPECIES_REMORAID, 39), IVS_ALL(9)},
    {POKEMON(SPECIES_OCTILLERY, 41), IVS_ALL(9),
     MOVES(MOVE_ICE_BEAM, MOVE_SIGNAL_BEAM, MOVE_WRING_OUT, MOVE_OCTAZOOKA)},
};

static const struct TrainerMon sP_Gwen[] = {
    {POKEMON(SPECIES_DODUO, 12)},
    {POKEMON(SPECIES_ELECTRIKE, 13)}
};

static const struct TrainerMon sP_Lola2[] = {
    {POKEMON(SPECIES_HOUNDOUR, 12)},
    {POKEMON(SPECIES_SANDILE, 13)},
};

static const struct TrainerMon sP_Lola3[] = {
    {POKEMON(SPECIES_SCRAGGY, 11)},
    {POKEMON(SPECIES_MIENFOO, 12)}
};

static const struct TrainerMon sP_Lola4[] = {
    {POKEMON(SPECIES_GROWLITHE, 11)},
    {POKEMON(SPECIES_ROSELIA, 12)}
};

static const struct TrainerMon sP_Lola5[] = {
    {POKEMON(SPECIES_STARLY, 12)},
    {POKEMON(SPECIES_STARAVIA, 14)},
};

static const struct TrainerMon sP_Ricky1[] = {
    {POKEMON(SPECIES_RATTATA, 12)},
    {POKEMON(SPECIES_RATTATA, 13)}
};

static const struct TrainerMon sP_Simon[] = {
    {POKEMON(SPECIES_FARFETCHD, 12)},
    {POKEMON(SPECIES_STARLY, 13)}
};

static const struct TrainerMon sP_Charlie[] = {
    {POKEMON(SPECIES_PETILIL, 12)},
    {POKEMON(SPECIES_BUNEARY, 12)}
};

static const struct TrainerMon sP_Ricky2[] = {
    {POKEMON(SPECIES_COTTONEE, 12)},
    {POKEMON(SPECIES_RATTATA, 12)}
};

static const struct TrainerMon sP_Ricky3[] = {
    {
    POKEMON(SPECIES_TOGEDEMARU, 12),
    .moves = {MOVE_TACKLE, MOVE_THUNDER_SHOCK, MOVE_DEFENSE_CURL}
    },
    {POKEMON(SPECIES_PONYTA, 13)}
};

static const struct TrainerMon sP_Ricky4[] = {
    {POKEMON(SPECIES_RATTATA, 13), IVS_ALL(4)},
    {POKEMON(SPECIES_GRIMER, 13), IVS_ALL(4)}
};

static const struct TrainerMon sP_Ricky5[] = {
    {POKEMON(SPECIES_KOFFING, 13), IVS_ALL(4)},
    {POKEMON(SPECIES_STUNKY, 13), IVS_ALL(4)}
};

static const struct TrainerMon sP_Parker[] = {
    {POKEMON(SPECIES_VOLTORB, 13), IVS_ALL(3)},
    {POKEMON(SPECIES_MAGNEMITE, 13), IVS_ALL(3)}
};

static const struct TrainerMon sP_George[] = {
    {POKEMON(SPECIES_VOLTORB, 13), IVS_ALL(3)},
    {POKEMON(SPECIES_CHINCHOU, 13), IVS_ALL(3)}
};

static const struct TrainerMon sP_Berke[] = {
    {POKEMON(SPECIES_TOGEDEMARU, 15), IVS_ALL(3)}
};

static const struct TrainerMon sP_Braxton[] = {
    {POKEMON(SPECIES_FLAAFFY, 15), IVS_ALL(3)}
};

static const struct TrainerMon sP_Vincent[] = {
    {POKEMON(SPECIES_PACHIRISU, 13), IVS_ALL(3)},
    {POKEMON(SPECIES_EMOLGA, 14), IVS_ALL(3)}
};

static const struct TrainerMon sP_Leroy[] = {
    {
    POKEMON(SPECIES_PIKACHU, 14), IVS_ALL(3),
    .moves = {MOVE_THUNDER_SHOCK, MOVE_CHARM, MOVE_TAIL_WHIP, MOVE_SWEET_KISS}
    },
    {POKEMON(SPECIES_TOGEDEMARU, 14), IVS_ALL(3)}
};

static const struct TrainerMon sP_Wilton1[] = {
    {POKEMON(SPECIES_CHINCHOU, 14), IVS_ALL(3)},
    {POKEMON(SPECIES_FLAAFFY, 15), IVS_ALL(3)}
};

static const struct TrainerMon sP_Edgar[] = {
    {POKEMON(SPECIES_LUXIO, 15), IVS_ALL(3)}
};

static const struct TrainerMon sP_Albert[] = {
    {POKEMON(SPECIES_PICHU, 13), IVS_ALL(3)},
    {
    POKEMON(SPECIES_PIKACHU, 14), IVS_ALL(3),
    .moves = {MOVE_THUNDER_SHOCK, MOVE_CHARM, MOVE_TAIL_WHIP, MOVE_SWEET_KISS}
    }
};

static const struct TrainerMon sP_Samuel[] = {
    {
    IVS_ALL(3),
    .lvl = 14,
    .species = SPECIES_SHINX,
    },
    {
    IVS_ALL(3),
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    },
    {
    IVS_ALL(3),
    .lvl = 14,
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_THUNDER_SHOCK, MOVE_CHARM, MOVE_TAIL_WHIP, MOVE_SWEET_KISS}
    },
    {
    IVS_ALL(3),
    .lvl = 14,
    .species = SPECIES_PACHIRISU,
    }
};

static const struct TrainerMon sP_Vito[] = {
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

static const struct TrainerMon sP_Owen[] = {
    {
    IVS_ALL(3),
    .lvl = 14,
    .species = SPECIES_STUNFISK,
    },
    {
    IVS_ALL(3),
    .lvl = 15,
    .species = SPECIES_LUXIO,
    }
};

static const struct TrainerMon sP_Wilton2[] = {
    {
    IVS_ALL(3),
    .lvl = 16,
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_THUNDER_SHOCK, MOVE_CHARM, MOVE_TAIL_WHIP, MOVE_SWEET_KISS}
    }
};

static const struct TrainerMon sP_Wilton3[] = {
    {
    IVS_ALL(4),
    .lvl = 100,
    .species = SPECIES_HELIOPTILE,
    },
    {
    IVS_ALL(4),
    .lvl = 100,
    .species = SPECIES_PACHIRISU,
    }
};

static const struct TrainerMon sP_Wilton4[] = {
    {
    IVS_ALL(4),
    .lvl = 100,
    .species = SPECIES_PIKACHU,
    },
    {
    IVS_ALL(4),
    .lvl = 100,
    .species = SPECIES_STUNFISK,
    }
};

static const struct TrainerMon sP_Wilton5[] = {
    {
    IVS_ALL(3),
    .lvl = 14,
    .species = SPECIES_MAGNEMITE,
    },
    {
    IVS_ALL(3),
    .lvl = 15,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sP_Warren[] = {
    {
    IVS_ALL(3),
    .lvl = 14,
    .species = SPECIES_HELIOPTILE,
    },
    {
    IVS_ALL(3),
    .lvl = 15,
    .species = SPECIES_STUNFISK,
    }
};

static const struct TrainerMon sP_Mary[] = {
    {
    .lvl = 19,
    .species = SPECIES_FLAAFFY,
    .moves = {MOVE_CHARGE_BEAM, MOVE_CHARGE, MOVE_TACKLE}
    },
    {
    .lvl = 20,
    .species = SPECIES_STUNFISK,
    .moves = {MOVE_MUD_SHOT, MOVE_CHARGE_BEAM, MOVE_WATER_GUN, MOVE_BIDE}
    },
    {
    .lvl = 22,
    .species = SPECIES_ELECTABUZZ,
    .moves = {MOVE_CHARGE_BEAM, MOVE_SWIFT, MOVE_LOW_KICK, MOVE_SIGNAL_BEAM}
    },
};

static const struct TrainerMon sP_WpvTr1Birdkeeper[] = {
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_SPEAROW,
    },
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_MURKROW,
    }
};

static const struct TrainerMon sP_WpvTr2Triath[] = {
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_STARLY,
    },
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_STARAVIA,
    }
};

static const struct TrainerMon sP_WpvTr3Battlegirl[] = {
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_ARCHEN,
    .moves = {MOVE_BOUNCE, MOVE_PLUCK, MOVE_ROCK_THROW, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(5),
    .lvl = 16,
    .species = SPECIES_HAWLUCHA,
    .moves = {MOVE_KARATE_CHOP, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sP_WpvTr4Camper[] = {
    {
    IVS_ALL(5),
    .lvl = 14,
    .species = SPECIES_FLETCHLING,
    },
    {
    IVS_ALL(5),
    .lvl = 17,
    .species = SPECIES_FLETCHINDER,
    .moves = {MOVE_FLAIL, MOVE_AGILITY, MOVE_EMBER, MOVE_PECK},
    }
};

static const struct TrainerMon sP_WpvTr5Birdkeeper[] = {
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_FARFETCHD,
    },
    {
    IVS_ALL(5),
    .lvl = 16,
    .species = SPECIES_ORICORIO,
    .moves = {MOVE_POUND, MOVE_GROWL, MOVE_AIR_CUTTER, MOVE_PECK}
    }
};

static const struct TrainerMon sP_WpvTr6Maniac[] = {
    {
    IVS_ALL(5),
    .lvl = 19,
    .species = SPECIES_SKARMORY,
    },
};

static const struct TrainerMon sP_WpvTr7Birdkeeper[] = {
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_FLETCHLING,
    },
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_SPEAROW,
    },
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_PIDGEY,
    },
    {
    IVS_ALL(5),
    .lvl = 15,
    .species = SPECIES_STARLY,
    },
};

static const struct TrainerMon sP_WpvTr8Ninjaboy[] = {
    {
    IVS_ALL(5),
    .lvl = 16,
    .species = SPECIES_YANMA,
    },
    {
    IVS_ALL(5),
    .lvl = 17,
    .species = SPECIES_GLIGAR,
    .moves = {MOVE_FURY_CUTTER, MOVE_QUICK_ATTACK, MOVE_KNOCK_OFF, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sP_WpvTr9Lass[] = {
    {
    IVS_ALL(5),
    .lvl = 16,
    .species = SPECIES_HOPPIP,
    .moves = {MOVE_BOUNCE, MOVE_STUN_SPORE, MOVE_FAIRY_WIND, MOVE_POISON_POWDER}
    },
    {
    IVS_ALL(5),
    .lvl = 17,
    .species = SPECIES_SKIPLOOM,
    .moves = {MOVE_BOUNCE, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_FAIRY_WIND}
    },
};

static const struct TrainerMon sP_WpvTr10Triath[] = {
    {
    IVS_ALL(5),
    .lvl = 19,
    .species = SPECIES_PIDGEOTTO,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAND_ATTACK, MOVE_QUICK_ATTACK, MOVE_WHIRLWIND}
    },
};

static const struct TrainerMon sP_WpvTr11Birdkeeper[] = {
    {
    IVS_ALL(5),
    .lvl = 16,
    .species = SPECIES_ARCHEN,
    },
    {
    IVS_ALL(5),
    .lvl = 17,
    .species = SPECIES_CRAMORANT,
    .moves = {MOVE_FURY_ATTACK, MOVE_WATER_GUN, MOVE_PECK}
    }
};

static const struct TrainerMon sP_WpvTr12Battlegirl[] = {
    {
    IVS_ALL(5),
    .lvl = 17,
    .species = SPECIES_ORICORIO_POM_POM,
    .moves = {MOVE_POUND, MOVE_GROWL, MOVE_AIR_CUTTER, MOVE_PECK}
    },
};

static const struct TrainerMon sP_WpvTr13Birdkeeper[] = {
    {
    IVS_ALL(5),
    .lvl = 17,
    .species = SPECIES_ORICORIO,
    .moves = {MOVE_POUND, MOVE_GROWL, MOVE_AIR_CUTTER, MOVE_PECK}
    },
};

static const struct TrainerMon sP_WpvTr14Skyla[] = {
    {
    IVS_ALL(5),
    .lvl = 20,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_STOMP, MOVE_GUST},
    .species = SPECIES_TROPIUS,
    .nature = NATURE_JOLLY
    },
    {
    IVS_ALL(5),
    .lvl = 21,
    .moves = {MOVE_FLY, MOVE_DRILL_RUN, MOVE_METAL_CLAW, MOVE_SAND_ATTACK},
    .species = SPECIES_SKARMORY,
    .ability = ABILITY_STURDY,
    .nature = NATURE_TIMID
    },
    {
    IVS_ALL(5),
    .lvl = 24,
    .moves = {MOVE_FLY, MOVE_WATER_GUN, MOVE_BELCH, MOVE_PLUCK},
    .species = SPECIES_CRAMORANT,
    .heldItem = ITEM_WACAN_BERRY,
    .nature = NATURE_JOLLY
    }
};

static const struct TrainerMon sP_R30_BugCatcher[] = {
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

static const struct TrainerMon sP_R30_Hiker[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_ROCKRUFF,
    }
};

static const struct TrainerMon sP_R30_NinjaBoy[] = {
    {
    .lvl = 16,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 17,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_R30_Psychic[] = {
    {
    .lvl = 17,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER},
    IVS_ALL(31),
    },
    {
    .lvl = 17,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER},
    IVS(30, 31, 31, 30, 31, 31)
    },
    {
    .lvl = 17,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER},
    IVS(31, 30, 31, 31, 31, 30)
    },
};

static const struct TrainerMon sP_R5_Fisher[] = {
    {
    .lvl = 8,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 18,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sP_R5_Beauty[] = {
    {
    .lvl = 16,
    .species = SPECIES_PETILIL,
    },
    {
    .lvl = 17,
    .species = SPECIES_LILLIGANT,
    }
};

static const struct TrainerMon sP_R5_YoungCouple[] = {
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_IMPIDIMP,
    },
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_HATENNA,
    },
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_SOLOSIS,
    },
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_GOTHITA,
    },
};

static const struct TrainerMon sP_R5_Lass1[] = {
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_COTTONEE,
    },
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_WHIMSICOTT,
    }
};

static const struct TrainerMon sP_R5_PokeFanF[] = {
    {
    IVS_ALL(4),
    .lvl = 16,
    .species = SPECIES_PIKACHU,
    },
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_RAICHU,
    }
};

static const struct TrainerMon sP_R5_Lass2[] = {
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_VULPIX,
    },
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_PONYTA,
    }
};

static const struct TrainerMon sP_R5_Gentleman[] = {
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_UMBREON,
    .moves = {MOVE_PURSUIT, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_BABY_DOLL_EYES}
    },
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_ESPEON,
    .moves = {MOVE_CONFUSION, MOVE_QUICK_ATTACK, MOVE_BABY_DOLL_EYES, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sP_R5_Youngster[] = {
    {
    IVS_ALL(4),
    .lvl = 16,
    .species = SPECIES_RATTATA,
    },
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_PANCHAM,
    }
};

static const struct TrainerMon sP_R5_Triathlete[] = {
    {
    IVS_ALL(4),
    .lvl = 16,
    .species = SPECIES_DODUO,
    },
    {
    IVS_ALL(4),
    .lvl = 16,
    .species = SPECIES_MAGNEMITE,
    },
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sP_R5_RichBoy[] = {
    {
    IVS_ALL(4),
    .lvl = 16,
    .species = SPECIES_GIRAFARIG,
    },
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_KANGASKHAN,
    }
};

static const struct TrainerMon sP_R5_Man5[] = {
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_SALANDIT,
    .moves = {MOVE_SMOG, MOVE_EMBER, MOVE_POISON_GAS, MOVE_SCRATCH}
    },
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_KOFFING,
    },
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_MAGMAR,
    }
};

static const struct TrainerMon sP_R5_BugCatcher[] = {
    {
    IVS_ALL(4),
    .lvl = 15,
    .species = SPECIES_WEEDLE,
    },
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_KAKUNA,
    .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_HARDEN},
    },
    {
    IVS_ALL(4),
    .lvl = 19,
    .species = SPECIES_BEEDRILL,
    }
};

static const struct TrainerMon sP_R5_NinjaBoy[] = {
    {
    IVS_ALL(4),
    .lvl = 20,
    .species = SPECIES_NINJASK,
    },
    {
    IVS_ALL(4),
    .lvl = 20,
    .species = SPECIES_SHEDINJA,
    }
};

static const struct TrainerMon sP_R5_Hiker[] = {
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_TIMBURR,
    },
    {
    IVS_ALL(4),
    .lvl = 19,
    .species = SPECIES_ONIX,
    }
};

static const struct TrainerMon sP_R5_CoolTrainer[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_WHIMSICOTT,
    .ability = ABILITY_PRANKSTER,
    .moves = {MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_GROWTH, MOVE_STUN_SPORE},
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_NINETALES,
    .moves = {MOVE_EMBER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK},
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .heldItem = ITEM_SITRUS_BERRY,
    .species = SPECIES_STARMIE,
    .moves = {MOVE_GYRO_BALL, MOVE_BUBBLE_BEAM, MOVE_SWIFT, MOVE_RECOVER},
    }
};

static const struct TrainerMon sP_R6_RangerM[] = {
    {
    IVS_ALL(4),
    .lvl = 20,
    .species = SPECIES_ROSELIA,
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_NOSEPASS,
    },
};

static const struct TrainerMon sP_R16_TR2_SWIMMER_F[] = {
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_SEAKING,
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_STARMIE,
    .moves = {MOVE_CONFUSE_RAY, MOVE_POWER_GEM, MOVE_MINIMIZE, MOVE_BRINE}
    },
};

static const struct TrainerMon sP_R6_CamperF[] = {
    {
    IVS_ALL(4),
    .lvl = 19,
    .species = SPECIES_SALANDIT,
    },
    {
    IVS_ALL(4),
    .lvl = 22,
    .species = SPECIES_VULLABY,
    }
};

static const struct TrainerMon sP_R16_TR10_NINJABOY2[] = {
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_SKUNTANK,
    .moves = {MOVE_SMOKESCREEN, MOVE_FLAMETHROWER, MOVE_POISON_GAS, MOVE_FURY_SWIPES}
    },
};

static const struct TrainerMon sP_R6_Hiker[] = {
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_TIMBURR,
    },
    {
    IVS_ALL(4),
    .lvl = 19,
    .species = SPECIES_ONIX,
    },
    {
    IVS_ALL(4),
    .lvl = 20,
    .species = SPECIES_SUDOWOODO,
    }
};

static const struct TrainerMon sP_R6_CamperM2[] = {
    {
    IVS_ALL(4),
    .lvl = 19,
    .species = SPECIES_CACNEA,
    },
    {
    IVS_ALL(4),
    .lvl = 22,
    .species = SPECIES_SANDILE,
    .moves = {MOVE_SWAGGER, MOVE_MUD_SLAP, MOVE_ASSURANCE, MOVE_SAND_TOMB}
    }
};

static const struct TrainerMon sP_R6_Kindler[] = {
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_HOUNDOUR,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_SMOG, MOVE_EMBER}
    },
    {
    IVS_ALL(4),
    .lvl = 23,
    .species = SPECIES_FLAREON,
    },
};

static const struct TrainerMon sP_R8_ParasolLady[] = {
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sP_R8_SrJr[] = {
    {
        POKEMON(SPECIES_TOGEPI, 17), IVS_ALL(4),
    },
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_MORPEKO,
    .moves = {MOVE_THUNDER_SHOCK, MOVE_POWER_TRIP, MOVE_QUICK_ATTACK, MOVE_LEER}
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_TOGETIC,
    .moves = {MOVE_ENCORE, MOVE_FAIRY_WIND, MOVE_YAWN, MOVE_METRONOME}
    }
};

static const struct TrainerMon sP_R8_AromaLady[] = {
    {
    IVS_ALL(4),
    .lvl = 19,
    .species = SPECIES_BUDEW,
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_ROSELIA,
    },
};

static const struct TrainerMon sP_R8_Youngster[] = {
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_RATTATA,
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_RATICATE,
    }
};

static const struct TrainerMon sP_R8_PsychicF[] = {
    {
    IVS_ALL(4),
    .lvl = 13,
    .species = SPECIES_RALTS,
    },
    {
    IVS_ALL(4),
    .lvl = 17,
    .species = SPECIES_RALTS,
    .moves = {MOVE_DISARMING_VOICE, MOVE_MAGICAL_LEAF, MOVE_DOUBLE_TEAM, MOVE_CONFUSION}
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_KIRLIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_DISARMING_VOICE, MOVE_DOUBLE_TEAM, MOVE_CONFUSION}
    }
};

static const struct TrainerMon sP_R8_CamperM[] = {
    {
    IVS_ALL(4),
    .lvl = 20,
    .species = SPECIES_MUDBRAY,
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_STEENEE,
    .moves = {MOVE_SWEET_SCENT, MOVE_MAGICAL_LEAF, MOVE_DOUBLE_SLAP, MOVE_RAPID_SPIN}
    }
};

static const struct TrainerMon sP_R8_TriathleteM[] = {
    {
    IVS_ALL(4),
    .lvl = 20,
    .species = SPECIES_VOLTORB,
    },
    {
    IVS_ALL(4),
    .lvl = 22,
    .species = SPECIES_BUIZEL,
    }
};

static const struct TrainerMon sP_R8_Gentleman[] = {
    {
    IVS_ALL(4),
    .lvl = 23,
    .species = SPECIES_PERSIAN,
    .moves = {MOVE_FEINT_ATTACK, MOVE_SCREECH, MOVE_SWIFT, MOVE_FAKE_OUT}
    }
};

static const struct TrainerMon sP_R8_Hiker[] = {
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_ZUBAT,
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_ROGGENROLA,
    }
};

static const struct TrainerMon sP_R8_OldCouple[] = {
    {
    IVS_ALL(4),
    .lvl = 23,
    .species = SPECIES_BRELOOM,
    .nature = NATURE_MODEST,
    .moves = {MOVE_MACH_PUNCH, MOVE_POISON_POWDER, MOVE_MEGA_DRAIN, MOVE_TACKLE}
    },
    {
    IVS_ALL(4),
    .nature = NATURE_MODEST,
    .lvl = 23,
    .species = SPECIES_HERACROSS,
    .moves = {MOVE_CHIP_AWAY, MOVE_HORN_ATTACK, MOVE_LEER, MOVE_TACKLE}
    }
};

static const struct TrainerMon sP_R8_BirdKeeper[] = {
    {
    IVS_ALL(4),
    .lvl = 18,
    .species = SPECIES_SPEAROW,
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_FEAROW,
    },
    {
    IVS_ALL(4),
    .lvl = 21,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sP_DC1F_Rocket1[] = {
    {
    IVS_ALL(6),
    .lvl = 20,
    .species = SPECIES_PAWNIARD,
    },
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_MURKROW,
    }
};

static const struct TrainerMon sP_DC1F_Rocket2[] = {
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_SLUDGE, MOVE_ASSURANCE, MOVE_SMOKESCREEN, MOVE_SMOG}
    },
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_DC_BaseRocket1[] = {
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_FANG, MOVE_GLARE, MOVE_SCREECH, MOVE_BITE}
    }
};

static const struct TrainerMon sP_DC_BaseRocket2[] = {
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_SKORUPI,
    },
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_SNEASEL,
    }
};

static const struct TrainerMon sP_DC_BaseRocket3[] = {
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_SANDILE,
    .moves = {MOVE_SWAGGER, MOVE_MUD_SLAP, MOVE_ASSURANCE, MOVE_SAND_TOMB}
    },
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_CROAGUNK,
    }
};

static const struct TrainerMon sP_DC_BaseRocket4[] = {
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_MAGNEMITE,
    },
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_SLUDGE, MOVE_ASSURANCE, MOVE_SMOKESCREEN, MOVE_SMOG}
    },
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_HELIOPTILE,
    .moves = {MOVE_RAZOR_WIND, MOVE_QUICK_ATTACK, MOVE_MUD_SLAP, MOVE_THUNDER_SHOCK}
    }
};

static const struct TrainerMon sP_DC2F_Rocket1[] = {
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_RATTATA,
    },
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_RATICATE,
    }
};

static const struct TrainerMon sP_DC2F_Rocket2[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_GOLBAT,
    .moves = {MOVE_SWIFT, MOVE_WING_ATTACK, MOVE_CONFUSE_RAY, MOVE_BITE}
    }
};

static const struct TrainerMon sP_DC2F_Rocket3[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_ARBOK,
    .moves = {MOVE_ACID, MOVE_CRUNCH, MOVE_SCREECH, MOVE_GLARE}
    }
};

static const struct TrainerMon sP_DC2F_Rocket4[] = {
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_PANCHAM,
    },
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_MURKROW,
    }
};

static const struct TrainerMon sP_DC2F_Rocket5[] = {
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_MURKROW,
    },
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_SNEASEL,
    },
};

static const struct TrainerMon sP_DC3F_Rocket1[] = {
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_FANG, MOVE_GLARE, MOVE_SCREECH, MOVE_BITE}
    },
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_ZANGOOSE,
    .moves = {MOVE_REVENGE, MOVE_SLASH, MOVE_HONE_CLAWS, MOVE_PURSUIT}
    }
};

static const struct TrainerMon sP_DC3F_Rocket_Proton[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_ABSOL,
    .moves = {MOVE_SLASH, MOVE_DOUBLE_TEAM, MOVE_BITE, MOVE_PURSUIT}
    },
    {
    IVS_ALL(9),
    .lvl = 27,
    .species = SPECIES_GOLBAT,
    .moves = {MOVE_CONFUSE_RAY, MOVE_WING_ATTACK, MOVE_POISON_FANG, MOVE_BITE},
    },
    {
    IVS_ALL(9),
    .lvl = 29,
    .species = SPECIES_HOUNDOOM,
    .moves = {MOVE_FIRE_FANG, MOVE_BITE, MOVE_HOWL, MOVE_SMOG},
    }
};

static const struct TrainerMon sP_Shoreslate_Rocket[] = {
    {
    IVS_ALL(6),
    .lvl = 21,
    .species = SPECIES_HOUNDOUR,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_SMOG, MOVE_EMBER}
    }
};

static const struct TrainerMon sP_DesertTrCamper[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_TRAPINCH,
    },
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sP_DesertTrCamper2[] = {
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_SANDILE,
    .moves = {MOVE_SWAGGER, MOVE_MUD_SLAP, MOVE_ASSURANCE, MOVE_SAND_TOMB}
    },
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_HIPPOPOTAS,
    },
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_CACNEA,
    }
};

static const struct TrainerMon sP_DesertTrPicnicker[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_SANDILE,
    .moves = {MOVE_SWAGGER, MOVE_MUD_SLAP, MOVE_ASSURANCE, MOVE_SAND_TOMB}
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_KROKOROK,
    }
};

static const struct TrainerMon sP_DesertTrPicnicker2[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_SCRAGGY,
    .moves = {MOVE_SCARY_FACE, MOVE_SAND_ATTACK, MOVE_PAYBACK, MOVE_LOW_KICK}
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_PAWNIARD,
    .moves = {MOVE_FURY_CUTTER, MOVE_METAL_CLAW, MOVE_ASSURANCE, MOVE_TORMENT}
    }
};

static const struct TrainerMon sP_DesertTrHiker[] = {
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_PROBOPASS,
    .moves = {MOVE_POWER_GEM, MOVE_TRI_ATTACK, MOVE_SPARK, MOVE_MAGNET_BOMB}
    }
};

static const struct TrainerMon sP_DesertTrBlackbelt[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_TIMBURR,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_GURDURR,
    }
};

static const struct TrainerMon sP_DesertTrPicnicker3[] = {
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_PSYDUCK,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_CHEWTLE,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_DWEBBLE,
    }
};

static const struct TrainerMon sP_DesertTrHiker2[] = {
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_BRONZOR,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_XATU,
    .moves = {MOVE_AIR_SLASH, MOVE_NIGHT_SHADE, MOVE_OMINOUS_WIND, MOVE_CONFUSE_RAY}
    }
};

static const struct TrainerMon sP_DesertTrHiker3[] = {
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_LYCANROC_MIDDAY,
    .ability = ABILITY_SAND_RUSH,
    .moves = {MOVE_ACCELEROCK, MOVE_BITE, MOVE_ROCK_TOMB, MOVE_HOWL}
    }
};

static const struct TrainerMon sP_Desert_Kindler[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_MAGBY,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_MAGMAR,
    }
};

static const struct TrainerMon sP_Desert_Blackbelt2[] = {
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_LUCARIO,
    .moves = {MOVE_AURA_SPHERE, MOVE_METAL_CLAW, MOVE_POWER_UP_PUNCH, MOVE_METAL_SOUND}
    }
};

static const struct TrainerMon sP_Desert_Hiker4[] = {
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_BRONZOR,
    },
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_BALTOY,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_YAMASK,
    }
};

static const struct TrainerMon sP_Desert_Psychic_F[] = {
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_GIRAFARIG,
    },
};

static const struct TrainerMon sP_Desert_Ace[] = {
    {
    IVS_ALL(9),
    .lvl = 28,
    .species = SPECIES_CROBAT,
    .moves = {MOVE_BITE, MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_CONFUSE_RAY},
    },
    {
    IVS_ALL(9),
    .lvl = 30,
    .species = SPECIES_MUDSDALE,
    .moves = {MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER, MOVE_DOUBLE_KICK, MOVE_ROCK_SLIDE},
    .ability = ABILITY_STAMINA,
    },
    {
    IVS_ALL(9),
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 31,
    .species = SPECIES_HERACROSS,
    .moves = {MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_PIN_MISSILE, MOVE_NIGHT_SLASH},
    }
};

static const struct TrainerMon sP_R7_Camper[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_ODDISH,
    .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER, MOVE_MEGA_DRAIN}
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_GLOOM,
    .moves = {MOVE_ACID, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER, MOVE_MEGA_DRAIN}
    },
};

static const struct TrainerMon sP_R7_Picnicker[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_WOOPER,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_MUDBRAY,
    }
};

static const struct TrainerMon sP_R7_Ninjaboy[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_SKORUPI,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_CROAGUNK,
    }
};

static const struct TrainerMon sP_R7_Birdkeeper[] = {
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sP_R7_Blackbelt[] = {
    {
    IVS_ALL(6),
    EVS(0, 0, 0, 150, 0, 0),
    .lvl = 25,
    .species = SPECIES_CROAGUNK,
    },
    {
    IVS_ALL(6),
    EVS(0, 0, 0, 150, 0, 0),
    .lvl = 27,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sP_R7_Picnicker2[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_MARILL,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sP_R7_Fisherman[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_SLOWPOKE,
    },
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_BARBOACH,
    },
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_SKRELP,
    }
};

static const struct TrainerMon sP_R7_Hiker[] = {
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_DREDNAW,
    .moves = {MOVE_ROCK_TOMB, MOVE_HEADBUTT, MOVE_CRUNCH, MOVE_RAZOR_SHELL}
    }
};

static const struct TrainerMon sP_R7_Parasollady[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_WOOPER,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_CLODSIRE,
    .moves = {MOVE_AMNESIA, MOVE_POISON_JAB, MOVE_YAWN, MOVE_SLAM}
    }
};

static const struct TrainerMon sP_R7_NinjaBoy[] = {
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_CROBAT,
    .moves = {MOVE_CROSS_POISON, MOVE_SWIFT, MOVE_WING_ATTACK, MOVE_CONFUSE_RAY}
    }
};

static const struct TrainerMon sP_KG_Tr1_Camper1[] = {
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_WOOPER,
    },
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_CLODSIRE,
    .moves = {MOVE_POISON_JAB, MOVE_YAWN, MOVE_SLAM, MOVE_AMNESIA}
    }
};

static const struct TrainerMon sP_KG_Tr2_Picnicker1[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_PHANPY,
    },
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_DONPHAN,
    .moves = {MOVE_SLAM, MOVE_KNOCK_OFF, MOVE_ROLLOUT, MOVE_BULLDOZE}
    }
};

static const struct TrainerMon sP_KG_Tr3_Hiker1[] = {
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_SANDILE,
    },
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_KROKOROK,
    }
};

static const struct TrainerMon sP_KG_Tr4_Camper2[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_GIBLE,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_GABITE,
    .moves = {MOVE_DUAL_CHOP, MOVE_SAND_TOMB, MOVE_TAKE_DOWN, MOVE_DRAGON_RAGE}
    },
};

static const struct TrainerMon sP_KG_Tr5_Hiker2[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
};

static const struct TrainerMon sP_KG_Tr6_Hiker3[] = {
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_DUGTRIO,
    .ability = ABILITY_ARENA_TRAP,
    .moves = {MOVE_SAND_TOMB, MOVE_MUD_BOMB, MOVE_SUCKER_PUNCH, MOVE_BULLDOZE}
    }
};

static const struct TrainerMon sP_KG_Tr7_Picnicker2[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_MUDBRAY,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_DRILBUR,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_HIPPOPOTAS,
    }
};

static const struct TrainerMon sP_KG_Tr8_Camper3[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_WOOPER,
    .moves = {MOVE_POISON_JAB, MOVE_YAWN, MOVE_SLAM, MOVE_MUD_SHOT}
    },
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_CLODSIRE,
    .moves = {MOVE_POISON_JAB, MOVE_YAWN, MOVE_SLAM, MOVE_MUD_SHOT}
    }
};

static const struct TrainerMon sP_KG_Tr9_Picnicker3[] = {
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_MARSHTOMP,
    .moves = {MOVE_MUD_SHOT, MOVE_MUD_BOMB, MOVE_WATER_GUN, MOVE_TACKLE}
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_PALPITOAD,
    }
};

static const struct TrainerMon sP_KG_Tr10_Hiker4[] = {
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sP_KG_Clay[] = {
    {
    IVS_ALL(9),
    .lvl = 31,
    .species = SPECIES_KROKOROK,
    .moves = {MOVE_SANDSTORM, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_DIG},
    },
    {
    IVS_ALL(9),
    .lvl = 31,
    .species = SPECIES_DONPHAN,
    .moves = {MOVE_ROLLOUT, MOVE_STOMPING_TANTRUM, MOVE_SLAM, MOVE_KNOCK_OFF},
    },
    {
    IVS_ALL(9),
    .lvl = 32,
    .species = SPECIES_CLODSIRE,
    .moves = {MOVE_YAWN, MOVE_POISON_JAB, MOVE_STOMPING_TANTRUM, MOVE_AMNESIA},
    .ability = ABILITY_WATER_ABSORB,
    },
    {
    IVS_ALL(9),
    .lvl = 34,
    .species = SPECIES_EXCADRILL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_METAL_CLAW, MOVE_STOMPING_TANTRUM, MOVE_ROCK_SLIDE, MOVE_SLASH},
    },
};

static const struct TrainerMon sP_KM_Tr1_Picnicker[] = {
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_RAICHU,
    .moves = {MOVE_FLASH, MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP}
    }
};

static const struct TrainerMon sP_KM_Tr2_Blackbelt[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_MIND_READER, MOVE_CALM_MIND, MOVE_FORCE_PALM, MOVE_CONFUSION}
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_HAWLUCHA,
    .moves = {MOVE_KARATE_CHOP, MOVE_ENCORE, MOVE_AERIAL_ACE, MOVE_ROOST}
    }
};

static const struct TrainerMon sP_KM_Tr3_Camper[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_PHANPY,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_HIPPOPOTAS,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_SANDILE,
    .moves = {MOVE_SWAGGER, MOVE_MUD_SLAP, MOVE_CRUNCH, MOVE_SAND_TOMB}
    }
};

static const struct TrainerMon sP_KM_Tr4_Hiker[] = {
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_STEELIX,
    }
};

static const struct TrainerMon sP_KM_Tr5_Hiker[] = {
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_ROGGENROLA,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_BOLDORE,
    },
    {
    IVS_ALL(6),
    .lvl = 23,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_GRAVELER,
    },
};

static const struct TrainerMon sP_KM_Tr6_Hiker[] = {
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_ARON,
    },
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_ONIX,
    }
};

static const struct TrainerMon sP_KM_Tr7_Camper[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_TYNAMO,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_EELEKTRIK,
    .moves = {MOVE_DISCHARGE, MOVE_ACID, MOVE_BIND, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sP_KM_Tr8_Picnicker[] = {
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    },
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_ROSELIA,
    },
};

static const struct TrainerMon sP_KM_Tr9_Blackbelt[] = {
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_GURDURR,
    },
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_COMBUSKEN,
    .moves = {MOVE_QUICK_ATTACK, MOVE_FLAME_CHARGE, MOVE_PECK, MOVE_DOUBLE_KICK}
    }
};

static const struct TrainerMon sP_KM_Tr10_Hiker[] = {
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_CRANIDOS,
    },
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_SHIELDON,
    },
};

static const struct TrainerMon sP_BuffetTrainer1[] = {
    {
    .species = SPECIES_MIMIKYU,
    .ball = ITEM_DUSK_BALL,
    .heldItem = ITEM_LIFE_ORB,
    .lvl = 40,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK},
    },
    {
    .species = SPECIES_FROSLASS,
    .ball = ITEM_DUSK_BALL,
    .heldItem = ITEM_FOCUS_SASH,
    .lvl = 40,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_DRAINING_KISS, MOVE_THUNDERBOLT},
    },
    {
    .species = SPECIES_GARDEVOIR,
    .ball = ITEM_DUSK_BALL,
    .ability = ABILITY_TRACE,
    .heldItem = ITEM_CHOICE_SPECS,
    .lvl = 40,
    .moves = {MOVE_ENERGY_BALL, MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_MYSTICAL_FIRE},
    }
};

static const struct TrainerMon sP_BuffetTrainer2[] = {
    {
    .species = SPECIES_PRIMARINA,
    .ball = ITEM_DIVE_BALL,
    .heldItem = ITEM_ASSAULT_VEST,
    .lvl = 40,
    .moves = {MOVE_SCALD, MOVE_HYPER_VOICE, MOVE_ENERGY_BALL, MOVE_ICE_BEAM},
    .ability = ABILITY_LIQUID_VOICE,
    .gender = TRAINER_MON_FEMALE,
    },
    {
    .species = SPECIES_GYARADOS,
    .ball = ITEM_DIVE_BALL,
    .heldItem = ITEM_WACAN_BERRY,
    .lvl = 40,
    .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_POWER_WHIP, MOVE_DRAGON_DANCE},
    .ability = ABILITY_INTIMIDATE,
    .gender = TRAINER_MON_MALE,
    },
    {
    .species = SPECIES_SLOWBRO,
    .ball = ITEM_DIVE_BALL,
    .heldItem = ITEM_LEFTOVERS,
    .lvl = 40,
    .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_BODY_PRESS, MOVE_SLACK_OFF},
    .ability = ABILITY_OBLIVIOUS,
    .gender = TRAINER_MON_MALE,
    }
};

static const struct TrainerMon sP_BuffetTrainer3[] = {
    {
    .lvl = 40,
    .ball = ITEM_PREMIER_BALL,
    .species = SPECIES_MAGNEZONE,
    .ability = ABILITY_ANALYTIC,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON, MOVE_EXPLOSION}
    },
    {
    .lvl = 40,
    .ball = ITEM_PREMIER_BALL,
    .species = SPECIES_MAMOSWINE,
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_BODY_SLAM}
    },
    {
    .lvl = 40,
    .ball = ITEM_PREMIER_BALL,
    .species = SPECIES_QUAGSIRE,
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_TOXIC, MOVE_RECOVER, MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE}
    },
};

static const struct TrainerMon sP_BuffetTrainer4[] = {
    {
    .heldItem = ITEM_FLAME_ORB,
    .ability = ABILITY_GUTS,
    .friendship = 255,
    .ball = ITEM_QUICK_BALL,
    .lvl = 40,
    .species = SPECIES_SWELLOW,
    .moves = {MOVE_BATON_PASS, MOVE_FACADE, MOVE_BRAVE_BIRD, MOVE_REVERSAL}
    },
    {
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_OWN_TEMPO,
    .friendship = 255,
    .ball = ITEM_DIVE_BALL,
    .lvl = 40,
    .species = SPECIES_LUDICOLO,
    .moves = {MOVE_FAKE_OUT, MOVE_ICE_BEAM, MOVE_SURF, MOVE_GRASS_KNOT}
    },
    {
    .heldItem = ITEM_THICK_CLUB,
    .ability = ABILITY_LIGHTNING_ROD,
    .friendship = 255,
    .ball = ITEM_ULTRA_BALL,
    .lvl = 40,
    .species = SPECIES_MAROWAK_ALOLAN,
    .moves = {MOVE_FIRE_PUNCH, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_SHADOW_BONE}
    },
};

static const struct TrainerMon sP_HotelBirdKeeper[] = {
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

static const struct TrainerMon sP_HotelKid1[] = {
    {
    .lvl = 25,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_HotelKid2[] = {
    {
    .lvl = 25,
    .species = SPECIES_SHELLOS_EAST_SEA,
    }
};

static const struct TrainerMon sP_LeaderKorrina[] = {
    {
    IVS_ALL(14),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 35,
    .species = SPECIES_GALLADE,
    .moves = {MOVE_AERIAL_ACE, MOVE_POWER_UP_PUNCH, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH}
    },
    {
    IVS_ALL(14),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 36,
    .species = SPECIES_SCRAFTY,
    .ability = ABILITY_MOXIE,
    .moves = {MOVE_FAKE_OUT, MOVE_CRUNCH, MOVE_DRAIN_PUNCH, MOVE_POWER_UP_PUNCH}
    },
    {
    IVS_ALL(14),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 36,
    .species = SPECIES_HAWLUCHA,
    .moves = {MOVE_FLYING_PRESS, MOVE_POWER_UP_PUNCH, MOVE_ENDEAVOR, MOVE_IRON_HEAD}
    },
    {
    IVS_ALL(14),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 38,
    .heldItem = ITEM_LUCARIONITE,
    .species = SPECIES_LUCARIO,
    .moves = {MOVE_ICE_PUNCH, MOVE_METAL_CLAW, MOVE_POWER_UP_PUNCH, MOVE_BONE_RUSH}
    }
};

static const struct TrainerMon sP_R11Tr1_Lass[] = {
    {
    IVS_ALL(7),
    .lvl = 26,
    .species = SPECIES_ESPURR,
    },
    {
    IVS_ALL(7),
    .lvl = 26,
    .species = SPECIES_TOGETIC,
    .moves = {MOVE_ENCORE, MOVE_FAIRY_WIND, MOVE_YAWN, MOVE_METRONOME}
    }
};

static const struct TrainerMon sP_R11Tr2_Birdkeeper[] = {
    {
    IVS_ALL(7),
    .lvl = 26,
    .species = SPECIES_STARAVIA,
    },
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_SKARMORY,
    .moves = {MOVE_SWIFT, MOVE_AIR_CUTTER, MOVE_METAL_CLAW}
    }
};

static const struct TrainerMon sP_R11Tr3_Bugcatcher[] = {
    {
    IVS_ALL(7),
    .lvl = 26,
    .species = SPECIES_SPINARAK,
    },
    {
    IVS_ALL(7),
    .lvl = 26,
    .species = SPECIES_ARIADOS,
    .moves = {MOVE_SWORDS_DANCE, MOVE_FURY_SWIPES, MOVE_SHADOW_SNEAK, MOVE_BUG_BITE}
    },
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_RIBOMBEE,
    .moves = {MOVE_POLLEN_PUFF, MOVE_DRAINING_KISS, MOVE_SILVER_WIND, MOVE_STUN_SPORE}
    }
};

static const struct TrainerMon sP_R11Tr4_Ninjaboy[] = {
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_VENONAT,
    },
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_STUNKY,
    }
};

static const struct TrainerMon sP_R11Tr5_Pokemaniac[] = {
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_SLOWPOKE,
    },
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_SALANDIT,
    }
};

static const struct TrainerMon sP_R11Tr6_Triathlete_F[] = {
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sP_R11Tr7_Hiker[] = {
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_GURDURR,
    }
};

static const struct TrainerMon sP_R11Tr8_Ninjaboy_2[] = {
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_HERACROSS,
    .moves = {MOVE_BRICK_BREAK, MOVE_FURY_ATTACK, MOVE_COUNTER, MOVE_AERIAL_ACE}
    }
};

static const struct TrainerMon sP_R11Tr9_Ninjaboy_3[] = {
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_PINSIR,
    .moves = {MOVE_X_SCISSOR, MOVE_BRICK_BREAK, MOVE_DOUBLE_HIT, MOVE_REVENGE}
    }
};

static const struct TrainerMon sP_R11Tr10_Cycler_M[] = {
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_VOLTORB,
    },
    {
    IVS_ALL(7),
    .lvl = 29,
    .species = SPECIES_EMOLGA,
    }
};

static const struct TrainerMon sP_R11Tr11_Blackbelt[] = {
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_MIENFOO,
    },
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_CALM_MIND, MOVE_MIND_READER, MOVE_CONFUSION}
    }
};

static const struct TrainerMon sP_R11Tr12_Expert[] = {
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_DARTRIX,
    .moves = {MOVE_SYNTHESIS, MOVE_PLUCK, MOVE_OMINOUS_WIND, MOVE_RAZOR_LEAF}
    },
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_COMBUSKEN,
    .moves = {MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_PECK, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_PRINPLUP,
    .moves = {MOVE_METAL_CLAW, MOVE_FURY_ATTACK, MOVE_BUBBLE_BEAM, MOVE_PECK}
    },
};

static const struct TrainerMon sP_R11Tr13_Psychic_F[] = {
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_MEOWSTIC_FEMALE,
    .moves = {MOVE_CHARGE_BEAM, MOVE_PSYSHOCK, MOVE_DISARMING_VOICE, MOVE_FAKE_OUT}
    },
    {
    IVS_ALL(7),
    .lvl = 28,
    .gender = TRAINER_MON_MALE,
    .species = SPECIES_MEOWSTIC_MALE,
    .moves = {MOVE_CHARM, MOVE_PSYSHOCK, MOVE_DISARMING_VOICE, MOVE_FAKE_OUT}
    }
};

static const struct TrainerMon sP_R11Tr14_Acetrainer_F[] = {
    {
    .lvl = 34,
    .species = SPECIES_STOUTLAND,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_CRUNCH, MOVE_TAKE_DOWN, MOVE_BABY_DOLL_EYES, MOVE_STOMPING_TANTRUM},
    },
    {
    .lvl = 35,
    .species = SPECIES_GRANBULL,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_HEADBUTT, MOVE_BITE, MOVE_OUTRAGE, MOVE_ROCK_SLIDE},
    },
    {
    .lvl = 35,
    .species = SPECIES_LUXRAY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDER_FANG, MOVE_BITE, MOVE_SWAGGER, MOVE_FLASH},
    },
    {
    .heldItem = ITEM_SITRUS_BERRY,
    .lvl = 36,
    .ability = ABILITY_INTIMIDATE,
    .species = SPECIES_ARCANINE,
    .moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_FIRE_FANG, MOVE_ROCK_SMASH},
    }
};

static const struct TrainerMon sP_BRENDAN_ROUTE_11_NORMAL_FIRE[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS},
    },
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_COMBUSKEN,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK, MOVE_BULK_UP, MOVE_PECK}
    }
};

static const struct TrainerMon sP_BRENDAN_ROUTE_11_NORMAL_WATER[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS},
    },
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_PRINPLUP,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_METAL_CLAW, MOVE_PECK, MOVE_BRINE, MOVE_FURY_ATTACK},
    }
};

static const struct TrainerMon sP_BRENDAN_ROUTE_11_NORMAL_GRASS[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS},
    },
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_DARTRIX,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_PLUCK, MOVE_SYNTHESIS, MOVE_RAZOR_LEAF, MOVE_OMINOUS_WIND}
    }
};

static const struct TrainerMon sP_BRENDAN_ROUTE_11_ANGRY_FIRE[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    IVS_ALL(6),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_CALM_MIND},
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_CHARGE, MOVE_ROCK_SMASH, MOVE_BLAZE_KICK, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sP_BRENDAN_ROUTE_11_ANGRY_WATER[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    IVS_ALL(6),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_CALM_MIND},
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RAZOR_GALE, MOVE_BRINE, MOVE_ROCK_SMASH, MOVE_SWAGGER},
    }
};

static const struct TrainerMon sP_BRENDAN_ROUTE_11_ANGRY_GRASS[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    IVS_ALL(6),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_CALM_MIND},
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_DECIDUEYE,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SYNTHESIS, MOVE_PLUCK, MOVE_RAZOR_LEAF, MOVE_SPIRIT_SHACKLE}
    }
};

static const struct TrainerMon sP_MAY_ROUTE_11_NORMAL_FIRE[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_COMBUSKEN,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_FLAME_CHARGE, MOVE_DOUBLE_KICK, MOVE_BULK_UP, MOVE_PECK}
    }
};

static const struct TrainerMon sP_MAY_ROUTE_11_NORMAL_WATER[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_PRINPLUP,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_METAL_CLAW, MOVE_PECK, MOVE_BRINE, MOVE_FURY_ATTACK},
    }
};

static const struct TrainerMon sP_MAY_ROUTE_11_NORMAL_GRASS[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_AMNESIA, MOVE_SLUDGE_WAVE, MOVE_YAWN, MOVE_MUD_SHOT}
    },
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_STARAVIA,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_TAKE_DOWN, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_DARTRIX,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_PLUCK, MOVE_SYNTHESIS, MOVE_RAZOR_LEAF, MOVE_OMINOUS_WIND}
    }
};

static const struct TrainerMon sP_MAY_ROUTE_11_ANGRY_FIRE[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    IVS_ALL(6),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_CHARGE, MOVE_ROCK_SMASH, MOVE_BLAZE_KICK, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sP_MAY_ROUTE_11_ANGRY_WATER[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    IVS_ALL(6),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RAZOR_GALE, MOVE_BRINE, MOVE_ROCK_SMASH, MOVE_SWAGGER},
    }
};

static const struct TrainerMon sP_MAY_ROUTE_11_ANGRY_GRASS[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_CLODSIRE,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM}
    },
    {
    IVS_ALL(6),
    .lvl = 34,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_IMPISH,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_AERIAL_ACE, MOVE_DOUBLE_TEAM, MOVE_ENDEAVOR}
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_GALLADE,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_DECIDUEYE,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SYNTHESIS, MOVE_PLUCK, MOVE_RAZOR_LEAF, MOVE_SPIRIT_SHACKLE}
    }
};

static const struct TrainerMon sP_R12Tr1_Triath[] = {
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_HAWLUCHA,
    }
};

static const struct TrainerMon sP_R12Tr2_Triath[] = {
    {
    IVS_ALL(7),
    .lvl = 27,
    .species = SPECIES_WHIRLIPEDE,
    },
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_SCOLIPEDE,
    }
};

static const struct TrainerMon sP_R12Tr3_Triath[] = {
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_SHINX,
    },
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_LUXIO,
    },
};

static const struct TrainerMon sP_R12Tr4_Triath[] = {
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_DODUO,
    },
    {
    IVS_ALL(7),
    .lvl = 29,
    .species = SPECIES_KLINK,
    },
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_HELIOPTILE,
    }
};

static const struct TrainerMon sP_R12Tr5_Triath[] = {
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_MAGNETON,
    },
};

static const struct TrainerMon sP_R12Tr6_Triath[] = {
    {
    IVS_ALL(7),
    .lvl = 29,
    .species = SPECIES_JOLTEON,
    },
    {
    IVS_ALL(7),
    .lvl = 29,
    .species = SPECIES_FLAREON,
    },
};

static const struct TrainerMon sP_R16_TR3_SWIMMER_F[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_MANTINE,
    .moves = {MOVE_AQUA_RING, MOVE_AIR_SLASH, MOVE_AGILITY, MOVE_SURF}
    },
};

static const struct TrainerMon sP_R12Tr9_Psychic[] = {
    {
    IVS_ALL(7),
    .lvl = 28,
    .species = SPECIES_NATU,
    .moves = {MOVE_PECK, MOVE_CONFUSE_RAY, MOVE_OMINOUS_WIND, MOVE_NIGHT_SHADE}
    },
    {
    IVS_ALL(7),
    .lvl = 29,
    .species = SPECIES_XATU,
    .moves = {MOVE_AIR_SLASH, MOVE_CONFUSE_RAY, MOVE_OMINOUS_WIND, MOVE_NIGHT_SHADE}
    }
};

static const struct TrainerMon sP_R12Tr10_Hiker[] = {
    {
    IVS_ALL(7),
    .lvl = 29,
    .species = SPECIES_LYCANROC,
    .moves = {MOVE_ROCK_TOMB, MOVE_ROCK_THROW, MOVE_BITE, MOVE_ACCELEROCK}
    },
    {
    IVS_ALL(7),
    .lvl = 29,
    .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMon sP_R12Tr11_Lass[] = {
    {
    .lvl = 28,
    IVS_ALL(7),
    .species = SPECIES_AUDINO,
    .moves = {MOVE_SECRET_POWER, MOVE_ATTRACT, MOVE_DOUBLE_SLAP, MOVE_DISARMING_VOICE}
    },
    {
    .lvl = 29,
    IVS_ALL(7),
    .species = SPECIES_BEWEAR,
    }
};

static const struct TrainerMon sP_R12Tr12_BugMan[] = {
    {
    .lvl = 29,
    .species = SPECIES_FLOATZEL,
    IVS_ALL(7),
    },
    {
    .lvl = 29,
    IVS_ALL(7),
    .species = SPECIES_TOGEDEMARU,
    }
};

static const struct TrainerMon sP_R12Tr13_Ninja[] = {
    {
    .lvl = 31,
    IVS_ALL(7),
    .species = SPECIES_CROBAT,
    }
};

static const struct TrainerMon sP_R16_TR4_SWIMMER_F[] = {
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_SKRELP,
    .moves = {MOVE_AQUA_TAIL, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_CAMOUFLAGE}
    },
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_CORSOLA,
    .moves = {MOVE_AQUA_RING, MOVE_ROCK_BLAST, MOVE_IRON_DEFENSE, MOVE_BRINE}
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_AMNESIA, MOVE_WATER_SPOUT, MOVE_REST, MOVE_ASTONISH}
    },
};

static const struct TrainerMon sP_R16_TR5_GUITARIST[] = {
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_MAGBY,
    .moves = {MOVE_SUNNY_DAY, MOVE_LAVA_PLUME, MOVE_CONFUSE_RAY, MOVE_SMOKESCREEN}
    },
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_MAGMAR,
    .moves = {MOVE_FIRE_PUNCH, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN, MOVE_FEINT_ATTACK}
    },
};

static const struct TrainerMon sP_R16_TR6_HIKER[] = {
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_GIGALITH,
    .moves = {MOVE_SANDSTORM, MOVE_SMACK_DOWN, MOVE_IRON_DEFENSE, MOVE_ROCK_BLAST}
    },
};

static const struct TrainerMon sP_R16_TR7_BEAUTY[] = {
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_YAWN, MOVE_TAKE_DOWN, MOVE_EARTH_POWER, MOVE_LAVA_PLUME}
    },
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_FLETCHINDER,
    },
};

static const struct TrainerMon sP_FcTr1_Blackbelt[] = {
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_SCRAGGY,
    },
    {
    IVS_ALL(7),
    .lvl = 32,
    .species = SPECIES_SCRAFTY,
    }
};

static const struct TrainerMon sP_FcTr2_Battlegirl[] = {
    {
    IVS_ALL(7),
    .lvl = 32,
    .species = SPECIES_LUCARIO,
    }
};

static const struct TrainerMon sP_FcTr3_Camper[] = {
    {
    IVS_ALL(7),
    .lvl = 31,
    .species = SPECIES_DWEBBLE,
    .moves = {MOVE_ROCK_BLAST, MOVE_ROCK_SLIDE, MOVE_SLASH, MOVE_BUG_BITE}
    },
    {
    IVS_ALL(7),
    .lvl = 32,
    .species = SPECIES_KROKOROK,
    },
};

static const struct TrainerMon sP_FcTr4_Hiker[] = {
    {
    IVS_ALL(7),
    .lvl = 31,
    .species = SPECIES_CRANIDOS,
    },
    {
    IVS_ALL(7),
    .lvl = 31,
    .species = SPECIES_TYRUNT,
    },
    {
    IVS_ALL(7),
    .lvl = 31,
    .species = SPECIES_ANORITH,
    },
};

static const struct TrainerMon sP_R14Tr1_RunnerF[] = {
    {
    IVS_ALL(7),
    .lvl = 33,
    .species = SPECIES_ELECTRODE,
    }
};

static const struct TrainerMon sP_R14Tr2_Hiker[] = {
    {
    IVS_ALL(7),
    .lvl = 31,
    .species = SPECIES_DRILBUR,
    },
    {
    IVS_ALL(7),
    .lvl = 32,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMon sP_Sidney[] = {
    {
    IVS_ALL(30),
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    IVS_ALL(30),
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    IVS_ALL(30),
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    IVS_ALL(30),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    IVS_ALL(31),
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sP_Phoebe[] = {
    {
    IVS_ALL(30),
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    IVS_ALL(30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(30),
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_Glacia[] = {
    {
    IVS_ALL(30),
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    IVS_ALL(30),
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(30),
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    IVS_ALL(30),
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sP_Drake[] = {
    {
    IVS_ALL(30),
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    IVS_ALL(30),
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(30),
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    IVS_ALL(30),
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sP_SGTr1_CyclistM1[] = {
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 31,
    .species = SPECIES_SCRAGGY,
    },
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 32,
    .species = SPECIES_SCRAFTY,
    }
};

static const struct TrainerMon sP_SGTr2_CyclistF1[] = {
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 31,
    .species = SPECIES_FALINKS,
    },
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 32,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sP_SGTr3_CyclistF2[] = {
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 33,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_HYPNOSIS, MOVE_BUBBLE_BEAM, MOVE_CIRCLE_THROW, MOVE_MUD_SHOT}
    }
};

static const struct TrainerMon sP_SGTr4_CyclistM2[] = {
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 31,
    .species = SPECIES_STUFFUL,
    },
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 32,
    .species = SPECIES_BEWEAR,
    }
};

static const struct TrainerMon sP_SGTr5_CyclistF3[] = {
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 33,
    .species = SPECIES_LUCARIO,
    .moves = {MOVE_AURA_SPHERE, MOVE_BONE_RUSH, MOVE_METAL_SOUND, MOVE_METAL_CLAW}
    }
};

static const struct TrainerMon sP_SGTr6_CyclistM3[] = {
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 33,
    .species = SPECIES_HAWLUCHA,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_ACUPRESSURE, MOVE_POWER_TRICK}
    }
};

static const struct TrainerMon sP_SGTr7_CyclistM4[] = {
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 33,
    .species = SPECIES_SCRAFTY,
    },
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 0, 0),
    .lvl = 33,
    .species = SPECIES_PANGORO,
    .moves = {MOVE_VITAL_THROW, MOVE_CIRCLE_THROW, MOVE_SLASH, MOVE_BULLET_PUNCH}
    }
};

static const struct TrainerMon sP_AT2F_Tr2_Man3[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_MORGREM,
    .moves = {MOVE_FALSE_SURRENDER, MOVE_TORMENT, MOVE_SWAGGER, MOVE_FAKE_OUT}
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_MAWILE,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_DISCHARGE, MOVE_BITE, MOVE_THUNDER_FANG, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sP_AT2F_Tr2_Woman5[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_MIENFOO,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_GURDURR,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_HAWLUCHA,
    }
};

static const struct TrainerMon sP_AT2F_Tr1_Psychic[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_ESPURR,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_GOTHORITA,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_ESPEON,
    }
};

static const struct TrainerMon sP_AT2F_Tr1_Man5[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_EMOLGA,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_KRICKETUNE,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_JOLTEON,
    },
};

static const struct TrainerMon sP_AT3F_Tr1_Expert_M[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_SCRAGGY,
    },
    {
    IVS_ALL(10),
    .lvl = 36,
    .species = SPECIES_PANGORO,
    .moves = {MOVE_BULLET_PUNCH, MOVE_BODY_SLAM, MOVE_VITAL_THROW, MOVE_CIRCLE_THROW}
    }
};

static const struct TrainerMon sP_AT3F_Tr1_Expert_F[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_TIMBURR,
    },
    {
    IVS_ALL(10),
    .lvl = 36,
    .species = SPECIES_GURDURR,
    }
};

static const struct TrainerMon sP_AT3F_Tr2_HexManiac[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_SABLEYE,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_TREVENANT,
    .moves = {MOVE_SHADOW_CLAW, MOVE_FORESTS_CURSE, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP}
    }
};

static const struct TrainerMon sP_AT3F_Tr2_PsychicF[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_XATU,
    .moves = {MOVE_AIR_SLASH, MOVE_WISH, MOVE_CONFUSE_RAY, MOVE_OMINOUS_WIND}
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_MEOWSTIC_FEMALE,
    }
};

static const struct TrainerMon sP_AT4F_Tr1_BlackBelt[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_GURDURR,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_HERACROSS,
    }
};

static const struct TrainerMon sP_AT4F_Tr1_HexManiac[] = {
    {
    IVS_ALL(10),
    .lvl = 34,
    .species = SPECIES_MIMIKYU,
    },
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_MISMAGIUS,
    .moves = {MOVE_MEAN_LOOK, MOVE_HEX, MOVE_PSYBEAM, MOVE_PAIN_SPLIT}
    }
};

static const struct TrainerMon sP_AT4F_Tr2_Lass[] = {
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

static const struct TrainerMon sP_AT4F_Tr2_Youngster[] = {
    {
    .lvl = 28,
    .species = SPECIES_SHUPPET,
    },
    {
    .lvl = 30,
    .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sP_AT4F_Tr3_BattleGirl[] = {
    {
    IVS_ALL(10),
    EVS(0, 0, 0, 100, 100, 0),
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    .moves = {MOVE_MACH_PUNCH, MOVE_FORCE_PALM, MOVE_HEADBUTT, MOVE_GIGA_DRAIN}
    }
};

static const struct TrainerMon sP_AT4F_Tr3_BlackBelt[] = {
    {
    IVS_ALL(10),
    EVS(100, 0, 100, 0, 0, 100),
    .lvl = 37,
    .species = SPECIES_BEWEAR,
    .moves = {MOVE_BIND, MOVE_HAMMER_ARM, MOVE_TAKE_DOWN, MOVE_PAYBACK}
    }
};

static const struct TrainerMon sP_AT5F_CoolTrainer_M[] = {
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_BRONZONG,
    .moves = {MOVE_BLOCK, MOVE_FUTURE_SIGHT, MOVE_PSYWAVE, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(10),
    .lvl = 36,
    .species = SPECIES_WHIMSICOTT,
    .moves = {MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_TAILWIND}
    },
    {
    IVS_ALL(10),
    .lvl = 37,
    .species = SPECIES_MANDIBUZZ,
    .moves = {MOVE_BONE_RUSH, MOVE_DARK_PULSE, MOVE_AIR_SLASH, MOVE_PUNISHMENT}
    }
};

static const struct TrainerMon sP_AT5F_CoolTrainer_F[] = {
    {
    IVS_ALL(10),
    .lvl = 35,
    .species = SPECIES_MALAMAR,
    .ability = ABILITY_CONTRARY,
    .moves = {MOVE_TOPSY_TURVY, MOVE_LIGHT_SCREEN, MOVE_PAYBACK, MOVE_PSYBEAM}
    },
    {
    IVS_ALL(10),
    .lvl = 37,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_MAWILITE,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_VISE_GRIP, MOVE_IRON_HEAD, MOVE_PLAY_ROUGH}
    }
};

static const struct TrainerMon sP_R14Tr3_ParasolLady[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_BUIZEL,
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sP_R14Tr4_FisherMan[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_GOLDEEN,
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sP_R14Tr5_ParasolLady[] = {
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_FLOATZEL,
    .moves = {MOVE_PURSUIT, MOVE_SWIFT, MOVE_AQUA_JET, MOVE_WHIRLPOOL}
    }
};

static const struct TrainerMon sP_R14Tr6_NinjaBoy[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_CROAGUNK,
    },
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_KOFFING,
    }
};

static const struct TrainerMon sP_R14Tr7_Birdkeeper[] = {
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_FEAROW,
    .moves = {MOVE_DRILL_PECK, MOVE_FOCUS_ENERGY, MOVE_MIRROR_MOVE, MOVE_PURSUIT}
    }
};

static const struct TrainerMon sP_R14Tr8_Maniac[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_WIMPOD,
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_GOLISOPOD,
    .moves = {MOVE_IRON_DEFENSE, MOVE_SUCKER_PUNCH, MOVE_RAZOR_SHELL, MOVE_FIRST_IMPRESSION}
    }
};

static const struct TrainerMon sP_R15Tr1_Birdkeeper[] = {
    {
    IVS_ALL(7),
    .lvl = 32,
    .species = SPECIES_WINGULL,
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_WINGULL,
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ROOST, MOVE_AERIAL_ACE, MOVE_WATER_PULSE, MOVE_SUPERSONIC}
    }
};

static const struct TrainerMon sP_R15Tr2_RangerF[] = {
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sP_R15Tr3_RangerM[] = {
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_STOUTLAND,
    .moves = {MOVE_TAKE_DOWN, MOVE_CRUNCH, MOVE_ROAR, MOVE_RETALIATE}
    }
};

static const struct TrainerMon sP_R15Tr4_Gentleman[] = {
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_UMBREON,
    .moves = {MOVE_PURSUIT, MOVE_MOONLIGHT, MOVE_CONFUSE_RAY, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sP_R15Tr5_Ninjaboy[] = {
    {
    IVS_ALL(7),
    .lvl = 32,
    .species = SPECIES_CHEWTLE,
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_CHEWTLE,
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_CHEWTLE,
    },
    {
    IVS_ALL(7),
    .lvl = 38,
    .species = SPECIES_CHEWTLE,
    },
};

static const struct TrainerMon sP_R15Tr6_Ninjaboy[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_BISHARP,
    .moves = {MOVE_ASSURANCE, MOVE_SLASH, MOVE_METAL_CLAW, MOVE_SCARY_FACE}
    }
};

static const struct TrainerMon sP_R15Tr7_Bugcatcher[] = {
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_WIMPOD,
    },
    {
    IVS_ALL(7),
    .lvl = 33,
    .species = SPECIES_WIMPOD,
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_WIMPOD,
    },
};

static const struct TrainerMon sP_R15Tr8_Bugmaniac[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_GOLISOPOD,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_SUCKER_PUNCH, MOVE_RAZOR_SHELL, MOVE_SLASH}
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_ARAQUANID,
    }
};

static const struct TrainerMon sP_R15Tr9_Beauty[] = {
    {
    IVS_ALL(7),
    .lvl = 29,
    .species = SPECIES_TOGEPI,
    .moves = {MOVE_METRONOME, MOVE_FLASH, MOVE_YAWN, MOVE_ENCORE}
    },
    {
    IVS_ALL(7),
    .lvl = 33,
    .species = SPECIES_TOGETIC,
    .moves = {MOVE_METRONOME, MOVE_FLASH, MOVE_YAWN, MOVE_ENCORE},
    }
};

static const struct TrainerMon sP_R15Tr10_Fisherman[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_HORSEA,
    },
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sP_R15Tr11_AceM[] = {
    {
    IVS_ALL(13),
    .lvl = 42,
    .species = SPECIES_CONKELDURR,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_WAKE_UP_SLAP, MOVE_STOMPING_TANTRUM, MOVE_STRENGTH},
    .heldItem = ITEM_ROCKY_HELMET
    },
    {
    IVS_ALL(13),
    EVS(0, 0, 100, 0, 0, 100),
    .lvl = 43,
    .species = SPECIES_CHESNAUGHT,
    .moves = {MOVE_SPIKY_SHIELD, MOVE_SEED_BOMB, MOVE_LEECH_SEED, MOVE_IRON_HEAD},
    .heldItem = ITEM_CHESNAUGHTITE
    },
};

static const struct TrainerMon sP_R15Tr11_AceF[] = {
    {
    IVS_ALL(13),
    .lvl = 42,
    .species = SPECIES_TOGEKISS,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_HELPING_HAND, MOVE_FOLLOW_ME, MOVE_ENCORE, MOVE_YAWN},
    .heldItem = ITEM_ROCKY_HELMET
    },
    {
    IVS_ALL(13),
    EVS(0, 0, 100, 0, 0, 100),
    .lvl = 43,
    .species = SPECIES_AUDINO,
    .ability = ABILITY_HEALER,
    .moves = {MOVE_HELPING_HAND, MOVE_HEAL_PULSE, MOVE_FLASH, MOVE_ATTRACT},
    .heldItem = ITEM_CHOPLE_BERRY
    }
};

static const struct TrainerMon sP_R15Tr13_Cooltrainer[] = {
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_SLIGGOO,
    },
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_GABITE,
    .moves = {MOVE_DUAL_CHOP, MOVE_DRAGON_CLAW, MOVE_SLASH, MOVE_SAND_TOMB}
    }
};

static const struct TrainerMon sP_R15Tr14_Lass[] = {
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_MEOWSTIC_FEMALE,
    }
};

static const struct TrainerMon sP_R15Tr15_Scientist[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_KLANG,
    .moves = {MOVE_CHARGE_BEAM, MOVE_GEAR_GRIND, MOVE_SCREECH, MOVE_MIRROR_SHOT}
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_PORYGON2,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_RECOVER, MOVE_PSYBEAM, MOVE_ZAP_CANNON}
    },
};

static const struct TrainerMon sP_R15Tr16_Aromalady[] = {
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_ROSELIA
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_BELLOSSOM,
    .moves = {MOVE_GIGA_DRAIN, MOVE_MOONLIGHT, MOVE_SLEEP_POWDER, MOVE_GROWTH}
    }
};

static const struct TrainerMon sP_R15Tr17_RunnerF[] = {
    {
    IVS_ALL(7),
    .lvl = 38,
    .species = SPECIES_DODRIO,
    .moves = {MOVE_TRI_ATTACK, MOVE_SWORDS_DANCE, MOVE_ACUPRESSURE, MOVE_PLUCK}
    }
};

static const struct TrainerMon sP_R15Tr18_RocketGrunt[] = {
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_HOUNDOOM,
    }
};

static const struct TrainerMon sP_R23_TR1_BREEDER_M[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_ROCKRUFF,
    },
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_KROKOROK,
    },
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMon sP_R23_TR2_MANIAC[] = {
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_GRANBULL,
    },
};

static const struct TrainerMon sP_R23_TR3_TWINS[] = {
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_POLIWHIRL,
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_PALPITOAD,
    .moves = {MOVE_MUDDY_WATER, MOVE_UPROAR, MOVE_MUD_SHOT}
    },
};

static const struct TrainerMon sP_R23_TR4_BREEDER_F[] = {
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_PIKACHU,
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_TOGEDEMARU,
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_EMOLGA,
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_MORPEKO,
    },
    {
    IVS_ALL(7),
    .lvl = 34,
    .species = SPECIES_PACHIRISU,
    },
};

static const struct TrainerMon sP_R23_TR5_HEXMANIAC_1[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_GASTLY,
    },
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMon sP_R23_TR6_PSYCHIC_M[] = {
    {
    IVS_ALL(7),
    .lvl = 38,
    .species = SPECIES_MEOWSTIC_MALE,
    .moves = {MOVE_REFLECT, MOVE_PSYSHOCK, MOVE_FAKE_OUT, MOVE_DISARMING_VOICE}
    }
};

static const struct TrainerMon sP_R23_TR7_HEXMANIAC_2[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_PHANTUMP,
    },
    {
    IVS_ALL(7),
    .lvl = 36,
    .species = SPECIES_PHANTUMP,
    },
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_TREVENANT,
    .moves = {MOVE_SHADOW_CLAW, MOVE_FORESTS_CURSE, MOVE_WILL_O_WISP, MOVE_STRENGTH_SAP}
    },
};

static const struct TrainerMon sP_R23_TR8_TRIATHLETE_F[] = {
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_ELECTRODE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SELF_DESTRUCT, MOVE_THUNDER}
    },
};

static const struct TrainerMon sP_R23_TR9_FISHERMAN[] = {
    {
    IVS_ALL(7),
    .lvl = 35,
    .species = SPECIES_GOLDEEN,
    .ability = ABILITY_LIGHTNING_ROD,
    },
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_LANTURN,
    },
};

static const struct TrainerMon sP_R23_TR10_BATTLEGIRL[] = {
    {
    IVS_ALL(7),
    .lvl = 38,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_SUBMISSION, MOVE_MUD_SHOT, MOVE_BUBBLE_BEAM, MOVE_BODY_SLAM}
    }
};

static const struct TrainerMon sP_R23_TR11_NINJABOY[] = {
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sP_R23_TR12_ACETRAINER[] = {
    {
    .lvl = 43,
    .species = SPECIES_LUDICOLO,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ZEN_HEADBUTT, MOVE_FAKE_OUT, MOVE_BUBBLE_BEAM},
    },
    {
    .lvl = 44,
    .species = SPECIES_SEISMITOAD,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_MUDDY_WATER, MOVE_MUD_SHOT, MOVE_ACID},
    },
    // {
    // IVS_ALL(13),
    // .lvl = 45,
    // .species = SPECIES_FLOATZEL,
    // },
    {
    .lvl = 45,
    .species = SPECIES_RAICHU_ALOLAN,
    .moves = {MOVE_PSYCHIC, MOVE_THUNDER, MOVE_NUZZLE},
    },
    // {
    // IVS_ALL(13),
    // .lvl = 45,
    // .species = SPECIES_SWAMPERT,
    // .moves = {MOVE_JET_PUNCH, MOVE_MUDDY_WATER, MOVE_ROCK_SLIDE, MOVE_MUD_BOMB},
    // .heldItem = ITEM_SWAMPERTITE,
    // },
};

static const struct TrainerMon sP_DRISLEDGEGYM_TRAINER1[] = {
    {
    IVS_ALL(7),
    .lvl = 38,
    .species = SPECIES_SABLEYE,
    .moves = {MOVE_CONFUSE_RAY, MOVE_ZEN_HEADBUTT, MOVE_POWER_GEM, MOVE_SHADOW_CLAW}
    }
};

static const struct TrainerMon sP_DRISLEDGEGYM_TRAINER2[] = {
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_SHUPPET,
    .moves = {MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_HEX, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(7),
    .lvl = 38,
    .species = SPECIES_BANETTE,
    .moves = {MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_HEX, MOVE_FEINT_ATTACK}
    }
};

static const struct TrainerMon sP_DRISLEDGEGYM_TRAINER3[] = {
    {
    IVS_ALL(7),
    .lvl = 38,
    .species = SPECIES_TREVENANT,
    .moves = {MOVE_SHADOW_CLAW, MOVE_FORESTS_CURSE, MOVE_STRENGTH_SAP, MOVE_WILL_O_WISP}
    }
};

static const struct TrainerMon sP_DRISLEDGEGYM_TRAINER4[] = {
    {
    IVS_ALL(7),
    .lvl = 37,
    .species = SPECIES_MISDREAVUS,
    },
    {
    IVS_ALL(7),
    .lvl = 39,
    .species = SPECIES_MISMAGIUS,
    .moves = {MOVE_PHANTOM_FORCE, MOVE_PAIN_SPLIT, MOVE_MEAN_LOOK, MOVE_PSYBEAM}
    }
};

static const struct TrainerMon sP_DRISLEDGEGYM_TRAINER5[] = {
    {
    IVS_ALL(7),
    .lvl = 39,
    .species = SPECIES_COFAGRIGUS,
    .moves = {MOVE_HEX, MOVE_CURSE, MOVE_SCARY_FACE, MOVE_WILL_O_WISP}
    }
};

static const struct TrainerMon sP_DRISLEDGEGYM_TRAINER6[] = {
    {
    IVS_ALL(7),
    .lvl = 38,
    .species = SPECIES_MIMIKYU,
    },
    {
    IVS_ALL(7),
    .lvl = 39,
    .species = SPECIES_GENGAR,
    .moves = {MOVE_SHADOW_BALL, MOVE_SUCKER_PUNCH, MOVE_CURSE, MOVE_MEAN_LOOK}
    }
};

static const struct TrainerMon sP_LEADER_ACEROLA[] = {
    {
    IVS_ALL(17),
    .lvl = 42,
    .species = SPECIES_MIMIKYU,
    .isShiny = TRUE,
    .moves = {MOVE_HONE_CLAWS, MOVE_SHADOW_CLAW, MOVE_DRAIN_PUNCH, MOVE_WOOD_HAMMER}
    },
    {
    IVS_ALL(17),
    .lvl = 43,
    .species = SPECIES_TREVENANT,
    .moves = {MOVE_DESTINY_BOND, MOVE_SHADOW_CLAW, MOVE_FORESTS_CURSE, MOVE_STRENGTH_SAP}
    },
    {
    IVS_ALL(17),
    .lvl = 43,
    .species = SPECIES_FROSLASS,
    .moves = {MOVE_DESTINY_BOND, MOVE_SHADOW_CLAW, MOVE_WILL_O_WISP, MOVE_ICY_WIND}
    },
    {
    IVS_ALL(17),
    .lvl = 45,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_BANETTITE,
    .moves = {MOVE_SUCKER_PUNCH, MOVE_SHADOW_CLAW, MOVE_GUNK_SHOT}
    }
};

static const struct TrainerMon sP_LeaderJasmine[] = {
    {
    .lvl = 40,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 40,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 40,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .lvl = 10,
    .species = SPECIES_STEELIX,
    }
};

static const struct TrainerMon sP_LeaderJasmine2[] = {
    {
    .lvl = 70,
    .heldItem = ITEM_AMPHAROSITE,
    .species = SPECIES_AMPHAROS,
    .moves = {MOVE_GRASS_KNOT, MOVE_THUNDER_PUNCH, MOVE_SIGNAL_BEAM, MOVE_POWER_GEM},
    },
};

static const struct TrainerMon sP_Kasen[] = {
    {
    .lvl = 50,
    .species = SPECIES_UMBREON,
    .ball = ITEM_MASTER_BALL,
    .nature = NATURE_CALM,
    IVS_ALL(25),
    EVS(252, 0, 252, 0, 0, 4),
    .moves = {MOVE_MOONLIGHT, MOVE_CONFUSE_RAY, MOVE_FLASH, MOVE_FOUL_PLAY},
    .ability = ABILITY_SYNCHRONIZE,
    .heldItem = ITEM_LEFTOVERS,
    },
    {
    .lvl = 50,
    .species = SPECIES_GOODRA_HISUIAN,
    .ball = ITEM_MASTER_BALL,
    .nature = NATURE_MODEST,
    IVS_ALL(25),
    EVS(120, 0, 0, 0, 252, 136),
    .moves = {MOVE_DRAGON_PULSE, MOVE_WATER_PULSE, MOVE_THUNDER, MOVE_IRON_HEAD},
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_ASSAULT_VEST,
    },
    {
    .lvl = 50,
    .species = SPECIES_DONPHAN,
    .nature = NATURE_ADAMANT,
    .ball = ITEM_MASTER_BALL,
    IVS_ALL(25),
    EVS(252, 252, 4, 0, 0, 0),
    .moves = {MOVE_GIGA_IMPACT, MOVE_EARTHQUAKE, MOVE_THUNDER_FANG, MOVE_FIRE_FANG},
    .heldItem = ITEM_SITRUS_BERRY,
    },
    {
    .lvl = 50,
    .species = SPECIES_GARDEVOIR,
    .gender = TRAINER_MON_FEMALE,
    .ball = ITEM_MASTER_BALL,
    .nature = NATURE_MODEST,
    IVS_ALL(25),
    EVS(252, 0, 0, 0, 252, 4),
    .ability = ABILITY_TRACE,
    .moves = {MOVE_MOONBLAST, MOVE_CAPTIVATE, MOVE_MAGICAL_LEAF, MOVE_PSYCHIC},
    .heldItem = ITEM_BRIGHT_POWDER,
    },
    {
    .lvl = 50,
    .species = SPECIES_FROSLASS,
    .gender = TRAINER_MON_FEMALE,
    .ball = ITEM_MASTER_BALL,
    .nature = NATURE_TIMID,
    IVS_ALL(25),
    EVS(4, 0, 0, 252, 252, 0),
    .moves = {MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_BLIZZARD, MOVE_WILL_O_WISP},
    .heldItem = ITEM_FOCUS_SASH,
    },
    {
    .lvl = 50,
    .species = SPECIES_BLAZIKEN,
    .ball = ITEM_MASTER_BALL,
    IVS_ALL(25),
    EVS(4, 252, 0, 252, 0, 0),
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_BLAZE_KICK, MOVE_BRAVE_BIRD, MOVE_SLASH, MOVE_ROCK_SMASH},
    .heldItem = ITEM_MUSCLE_BAND,
    }
};

static const struct TrainerMon sP_R3_SWIMMER_F[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_REMORAID,
    },
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_OCTILLERY,
    .moves = {MOVE_OCTAZOOKA, MOVE_SIGNAL_BEAM, MOVE_WRING_OUT, MOVE_AURORA_BEAM}
    },
};

static const struct TrainerMon sP_R3_SWIMMER_M[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_REMORAID,
    },
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_SKRELP,
    },
};

static const struct TrainerMon sP_R3_SWIMMER_OLDSIS[] = {
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sP_R3_TUBER[] = {
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_GOLDEEN,
    },
};

static const struct TrainerMon sP_R3_FISHERMAN[] = {
    {
    IVS_ALL(9),
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    },
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_CORSOLA,
    },
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_SHARPEDO,
    },
};

static const struct TrainerMon sP_R3_LANDSWIMMER_1[] = {
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_POLIWRATH,
    .moves = {MOVE_SUBMISSION, MOVE_DYNAMIC_PUNCH, MOVE_MUD_SHOT, MOVE_BUBBLE_BEAM}
    },
};

static const struct TrainerMon sP_R3_LANDSWIMMER_2[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_QUAGSIRE,
    },
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_CLODSIRE,
    },
};

static const struct TrainerMon sP_R3_SAILOR[] = {
    {
    IVS_ALL(9),
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    IVS_ALL(9),
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMon sP_R3_SWIMMER_M1[] = {
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_MANTINE,
    .moves = {MOVE_AQUA_RING, MOVE_AIR_SLASH, MOVE_AGILITY, MOVE_WATER_PULSE}
    },
};

static const struct TrainerMon sP_R3_SWIMMER_M2[] = {
    {
    IVS_ALL(9),
    .lvl = 36,
    .species = SPECIES_STARYU,
    },
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
};

static const struct TrainerMon sP_R3_SWIMMER_F1[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_BIBAREL,
    .moves = {MOVE_WATER_GUN, MOVE_TAKE_DOWN, MOVE_YAWN, MOVE_CRUNCH}
    },
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_FLOATZEL,
    },
};

static const struct TrainerMon sP_R9_TR1_SWIMMER_M[] = {
    {
    IVS_ALL(9),
    .lvl = 36,
    .species = SPECIES_HORSEA,
    },
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_HORSEA,
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMon sP_R9_TR2_BLACKBELT[] = {
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_ACUPRESSURE, MOVE_HIGH_JUMP_KICK, MOVE_CONFUSION},
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_ACUPRESSURE, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT},
    },
};

static const struct TrainerMon sP_R9_TR3_BIRDKEEPER[] = {
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_CRAMORANT,
    },
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_MANDIBUZZ,
    },
};

static const struct TrainerMon sP_R9_TR4_BATTLEGIRL[] = {
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_MIENFOO,
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_MIENSHAO,
    },
};

static const struct TrainerMon sP_R9_TR5_SWIMMER_F[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_TIRTOUGA,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_CRUNCH, MOVE_SMACK_DOWN, MOVE_CURSE, MOVE_BRINE},
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_CARRACOSTA,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_CRUNCH, MOVE_SMACK_DOWN, MOVE_CURSE, MOVE_BRINE},
    },
};

static const struct TrainerMon sP_R9_TR6_FISHERMAN[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_GOLDEEN,
    },
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_SEAKING,
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sP_R9_TR7_HIKER[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_WOOPER_OUTSIDER,
    .ability = ABILITY_WATER_ABSORB,
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_QUAGSIRE,
    .ability = ABILITY_WATER_ABSORB,
    },
};

static const struct TrainerMon sP_R9_TR8_COLLECTOR[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_FRILLISH,
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_JELLICENT,
    },
};

static const struct TrainerMon sP_R9_TR9_SWIMMER_M2[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_STARMIE,
    .moves = {MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_BRINE, MOVE_RECOVER},
    },
};

static const struct TrainerMon sP_R9_TR10_LANDSWIMMER[] = {
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_GASTRODON_WEST,
    .moves = {MOVE_WATER_PULSE, MOVE_MUD_BOMB, MOVE_RAIN_DANCE, MOVE_BODY_SLAM},
    },
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_GASTRODON_EAST,
    .moves = {MOVE_WATER_PULSE, MOVE_MUD_BOMB, MOVE_RAIN_DANCE, MOVE_BODY_SLAM},
    },
};

static const struct TrainerMon sP_R10_TR1_ACESWIMMER[] = {
    {
    IVS(15, 15, 15, 0, 15, 15),
    .lvl = 44,
    .species = SPECIES_AZUMARILL,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_RAIN_DANCE, MOVE_PLAY_ROUGH, MOVE_AQUA_TAIL},
    },
    {
    IVS(15, 15, 15, 0, 15, 15),
    .lvl = 45,
    .species = SPECIES_GASTRODON_EAST,
    .ability = ABILITY_STICKY_HOLD,
    .heldItem = ITEM_BLUNDER_POLICY,
    .moves = {MOVE_MUDDY_WATER, MOVE_WATER_PULSE, MOVE_ROCK_SLIDE, MOVE_TOXIC},
    },
    {
    IVS(15, 15, 15, 0, 15, 15),
    .lvl = 46,
    .species = SPECIES_ARAQUANID,
    .moves = {MOVE_LUNGE, MOVE_CRUNCH, MOVE_AQUA_RING, MOVE_BUBBLE_BEAM},
    },
    {
    IVS(15, 15, 15, 0, 15, 15),
    .lvl = 48,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_SLOWBRONITE,
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_SLACK_OFF, MOVE_AMNESIA, MOVE_WATER_PULSE},
    },
};

static const struct TrainerMon sP_R10_TR2_SWIMMER_F1[] = {
    {
    IVS_SPEED(31, 9),
    EVS_SPEED(120, 0),
    .lvl = 37,
    .species = SPECIES_ARROKUDA,
    },
    {
    IVS_SPEED(31, 9),
    EVS_SPEED(120, 0),
    .lvl = 39,
    .species = SPECIES_SEAKING,
    },
    {
    IVS_SPEED(31, 9),
    EVS_SPEED(120, 0),
    .lvl = 41,
    .species = SPECIES_BARRASKEWDA,
    },
};

static const struct TrainerMon sP_R10_TR3_FISHERMAN[] = {
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_LANTURN,
    .moves = {MOVE_DISCHARGE, MOVE_FLAIL, MOVE_SIGNAL_BEAM, MOVE_BUBBLE_BEAM}
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMon sP_R10_TR4_SWIMMER_M1[] = {
    {
    IVS_SPEED(31, 9),
    EVS_SPEED(120, 0),
    .lvl = 37,
    .species = SPECIES_BUIZEL,
    },
    {
    IVS_SPEED(31, 9),
    EVS_SPEED(120, 0),
    .lvl = 39,
    .species = SPECIES_BUIZEL,
    },
    {
    IVS_SPEED(31, 9),
    EVS_SPEED(120, 0),
    .lvl = 41,
    .species = SPECIES_FLOATZEL,
    },
};

static const struct TrainerMon sP_R10_TR5_BLACKBELT[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_HAWLUCHA,
    },
};

static const struct TrainerMon sP_R10_TR6_HIKER[] = {
    {
    IVS_ALL(9),
    .lvl = 38,
    .species = SPECIES_GASTRODON_WEST,
    .moves = {MOVE_WATER_PULSE, MOVE_MUD_BOMB, MOVE_RAIN_DANCE, MOVE_BODY_SLAM},
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_CARRACOSTA,
    .moves = {MOVE_CRUNCH, MOVE_SMACK_DOWN, MOVE_CURSE, MOVE_BRINE},
    },
};

static const struct TrainerMon sP_R10_TR7_SWIMMER_F2[] = {
    {
    IVS(9, 9, 9, 31, 9, 9),
    EVS( 0, 0, 0, 120, 0, 0),
    .lvl = 37,
    .species = SPECIES_ARROKUDA,
    },
    {
    IVS(9, 9, 9, 31, 9, 9),
    EVS( 0, 0, 0, 120, 0, 0),
    .lvl = 39,
    .species = SPECIES_CARVANHA,
    },
    {
    IVS(9, 9, 9, 31, 9, 9),
    EVS( 0, 0, 0, 120, 0, 0),
    .lvl = 41,
    .species = SPECIES_SHARPEDO,
    },
};

static const struct TrainerMon sP_R10_TR8_SWIMMER_M2[] = {
    {
    IVS(9, 9, 9, 31, 9, 9),
    EVS( 0, 0, 0, 120, 0, 0),
    .lvl = 37,
    .species = SPECIES_TENTACOOL,
    },
    {
    IVS(9, 9, 9, 31, 9, 9),
    EVS( 0, 0, 0, 120, 0, 0),
    .lvl = 39,
    .species = SPECIES_TENTACRUEL,
    },
    {
    IVS(9, 9, 9, 31, 9, 9),
    EVS( 0, 0, 0, 120, 0, 0),
    .lvl = 41,
    .species = SPECIES_STARMIE,
    .moves = {MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_BRINE, MOVE_RECOVER},
    },
};

static const struct TrainerMon sP_R10_TR9_BATTLEGIRL[] = {
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_POLIWHIRL,
    },
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_SCRAFTY,
    },
};

static const struct TrainerMon sP_R10_TR10_TUBER_M[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_FRILLISH,
    },
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_FRILLISH,
    .gender = TRAINER_MON_FEMALE,
    },
};

static const struct TrainerMon sP_R16_TR8_NINJABOY[] = {
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_WEEZING,
    .moves = {MOVE_EXPLOSION}
    },
};

static const struct TrainerMon sP_FACTORY_ROCKET_1[] = {
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_SWAGGER, MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_GLARE}
    },
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_ARBOK,
    .moves = {MOVE_CRUNCH, MOVE_MUD_BOMB, MOVE_ACID_SPRAY, MOVE_SCREECH}
    },
};

static const struct TrainerMon sP_R16_TR9_EXPERT_F[] = {
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_FLETCHINDER,
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_SCRAFTY,
    },
};

static const struct TrainerMon sP_FACTORY_ROCKET_2[] = {
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_BISHARP,
    .moves = {MOVE_IRON_DEFENSE, MOVE_IRON_HEAD, MOVE_NIGHT_SLASH, MOVE_METAL_SOUND}
    },
};

static const struct TrainerMon sP_FACTORY_ROCKET_3[] = {
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_KROKOROK,
    .moves = {MOVE_FOUL_PLAY, MOVE_CRUNCH, MOVE_DIG, MOVE_SANDSTORM}
    },
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_AUDINO,
    .moves = {MOVE_HEAL_PULSE, MOVE_TAKE_DOWN, MOVE_ATTRACT, MOVE_DISARMING_VOICE}
    },
};

static const struct TrainerMon sP_FACTORY_ROCKET_4[] = {
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_ZUBAT,
    .moves = {MOVE_VENOSHOCK, MOVE_LEECH_LIFE, MOVE_HAZE, MOVE_MEAN_LOOK}
    },
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_GOLBAT,
    .moves = {MOVE_POISON_FANG, MOVE_LEECH_LIFE, MOVE_HAZE, MOVE_MEAN_LOOK}
    },
};

static const struct TrainerMon sP_FACTORY_ROCKET_5[] = {
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_SCRAGGY,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_SCARY_FACE}
    },
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_SCRAFTY,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_SCARY_FACE}
    },
};

static const struct TrainerMon sP_Maria5[] = {
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sP_Camden[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sP_FACTORY_ROCKET_PETREL[] = {
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TOXIC, MOVE_EXPLOSION}
    },
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_KROKOROK,
    .moves = {MOVE_FOUL_PLAY, MOVE_CRUNCH, MOVE_STOMPING_TANTRUM, MOVE_SANDSTORM}
    },
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_RATICATE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_SUPER_FANG, MOVE_SUCKER_PUNCH, MOVE_FOCUS_ENERGY}
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_TOXICROAK,
    .moves = {MOVE_VENOSHOCK, MOVE_SUCKER_PUNCH, MOVE_MUD_BOMB, MOVE_SWAGGER}
    },
    {
    IVS_ALL(9),
    .lvl = 46,
    .species = SPECIES_WEEZING,
    .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_GYRO_BALL, MOVE_DOUBLE_HIT}
    },
};

static const struct TrainerMon sP_MAY_BASALEK_TOWN_FIRE[] = {
        {
        IVS_ALL(6),
        .lvl = 44,
        .species = SPECIES_STARAPTOR,
        .nature = NATURE_IMPISH,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLY, MOVE_TAKE_DOWN, MOVE_ENDEAVOR},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(6),
        .lvl = 45,
        .species = SPECIES_GALLADE,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_POWER_UP_PUNCH, MOVE_ROCK_SLIDE},
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_STEADFAST,
    },
    {
        IVS_ALL(6),
        .lvl = 45,
        .species = SPECIES_CLODSIRE,
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM},
        .ability = ABILITY_POISON_POINT,
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(6),
        .lvl = 46,
        .species = SPECIES_CRUSTLE,
        .nature = NATURE_SASSY,
        .ability = ABILITY_STURDY,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_SLASH, MOVE_ROCK_POLISH},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(6),
        .lvl = 48,
        .species = SPECIES_BLAZIKEN,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_FLAME_CHARGE, MOVE_ROCK_SMASH, MOVE_BLAZE_KICK, MOVE_SLASH},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_BLAZIKENITE,
    }
};

static const struct TrainerMon sP_MAY_BASALEK_TOWN_WATER[] = {
    {
        IVS_ALL(8),
        .lvl = 44,
        .species = SPECIES_STARAPTOR,
        .nature = NATURE_IMPISH,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLY, MOVE_TAKE_DOWN, MOVE_ENDEAVOR},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_GALLADE,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_POWER_UP_PUNCH, MOVE_ROCK_SLIDE},
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_STEADFAST,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_CLODSIRE,
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM},
        .ability = ABILITY_POISON_POINT,
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(8),
        .lvl = 46,
        .species = SPECIES_CRUSTLE,
        .nature = NATURE_SASSY,
        .ability = ABILITY_STURDY,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_SLASH, MOVE_ROCK_POLISH},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(8),
        .lvl = 48,
        .species = SPECIES_EMPOLEON,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_RAZOR_GALE, MOVE_BRINE, MOVE_FURY_ATTACK, MOVE_SWAGGER},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_EMPOLEONITE,
    }
};

static const struct TrainerMon sP_MAY_BASALEK_TOWN_GRASS[] = {
        {
        IVS_ALL(8),
        .lvl = 44,
        .species = SPECIES_STARAPTOR,
        .nature = NATURE_IMPISH,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLY, MOVE_TAKE_DOWN, MOVE_ENDEAVOR},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_GALLADE,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_POWER_UP_PUNCH, MOVE_ROCK_SLIDE},
        .gender = TRAINER_MON_MALE,
        .ability = ABILITY_STEADFAST,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_CLODSIRE,
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM},
        .ability = ABILITY_POISON_POINT,
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(8),
        .lvl = 46,
        .species = SPECIES_CRUSTLE,
        .nature = NATURE_SASSY,
        .ability = ABILITY_STURDY,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_SLASH, MOVE_ROCK_POLISH},
        .gender = TRAINER_MON_FEMALE,
    },
    {
        IVS_ALL(8),
        .lvl = 48,
        .species = SPECIES_DECIDUEYE,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_SYNTHESIS, MOVE_PLUCK, MOVE_LEAF_BLADE, MOVE_SPIRIT_SHACKLE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DECIDUEITE,
    }
};

static const struct TrainerMon sP_BRENDAN_BASALEK_TOWN_FIRE[] = {
    {
        IVS_ALL(8),
        .lvl = 44,
        .species = SPECIES_STARAPTOR,
        .nature = NATURE_IMPISH,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLY, MOVE_TAKE_DOWN, MOVE_ENDEAVOR},
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_GARDEVOIR,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_CAPTIVATE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_TRACE,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_CLODSIRE,
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM},
        .ability = ABILITY_POISON_POINT,
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 46,
        .species = SPECIES_CRUSTLE,
        .nature = NATURE_SASSY,
        .ability = ABILITY_STURDY,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_SLASH, MOVE_ROCK_POLISH},
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 48,
        .species = SPECIES_BLAZIKEN,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_FLAME_CHARGE, MOVE_ROCK_SMASH, MOVE_BLAZE_KICK, MOVE_SLASH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_BLAZIKENITE,
    }
};

static const struct TrainerMon sP_BRENDAN_BASALEK_TOWN_WATER[] = {
    {
        IVS_ALL(8),
        .lvl = 44,
        .species = SPECIES_STARAPTOR,
        .nature = NATURE_IMPISH,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLY, MOVE_TAKE_DOWN, MOVE_ENDEAVOR},
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_GARDEVOIR,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_CAPTIVATE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_TRACE,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_CLODSIRE,
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM},
        .ability = ABILITY_POISON_POINT,
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 46,
        .species = SPECIES_CRUSTLE,
        .nature = NATURE_SASSY,
        .ability = ABILITY_STURDY,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_SLASH, MOVE_ROCK_POLISH},
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 48,
        .species = SPECIES_EMPOLEON,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_RAZOR_GALE, MOVE_BRINE, MOVE_FURY_ATTACK, MOVE_SWAGGER},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_EMPOLEONITE,
    }
};

static const struct TrainerMon sP_BRENDAN_BASALEK_TOWN_GRASS[] = {
    {
        IVS_ALL(8),
        .lvl = 44,
        .species = SPECIES_STARAPTOR,
        .nature = NATURE_IMPISH,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_FLY, MOVE_TAKE_DOWN, MOVE_ENDEAVOR},
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_GARDEVOIR,
        .nature = NATURE_MILD,
        .moves = {MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_CAPTIVATE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        .ability = ABILITY_TRACE,
    },
    {
        IVS_ALL(8),
        .lvl = 45,
        .species = SPECIES_CLODSIRE,
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_SLAM, MOVE_POISON_JAB, MOVE_YAWN, MOVE_STOMPING_TANTRUM},
        .ability = ABILITY_POISON_POINT,
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 46,
        .species = SPECIES_CRUSTLE,
        .nature = NATURE_SASSY,
        .ability = ABILITY_STURDY,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_SLASH, MOVE_ROCK_POLISH},
        .gender = TRAINER_MON_MALE,
    },
    {
        IVS_ALL(8),
        .lvl = 48,
        .species = SPECIES_DECIDUEYE,
        .nature = NATURE_SERIOUS,
        .moves = {MOVE_SYNTHESIS, MOVE_PLUCK, MOVE_LEAF_BLADE, MOVE_SPIRIT_SHACKLE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_DECIDUEITE,
    }
};

static const struct TrainerMon sP_R17_TR1_CAMPER_M[] = {
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_STOUTLAND,
    },
};

static const struct TrainerMon sP_R17_TR2_PICNICKER1[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_FLETCHINDER,
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_HEATMOR,
    },
};

static const struct TrainerMon sP_R17_TR3_PICNICKER2[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_QUAGSIRE,
    .moves = {MOVE_RAIN_DANCE, MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_SURF}
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_GOLDUCK,
    },
};

static const struct TrainerMon sP_R17_TR4_MANIAC[] = { // ton of confuse + toxic spam
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_GOLBAT,
    .moves = {MOVE_MEAN_LOOK, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_SWIFT},
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_LANTURN,
    .moves = {MOVE_CONFUSE_RAY, MOVE_DISCHARGE, MOVE_THUNDER_WAVE, MOVE_BUBBLE_BEAM},
    },
};

static const struct TrainerMon sP_R17_TR5_SCIENTIST[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_KLANG,
    .moves = {MOVE_SCREECH, MOVE_DISCHARGE, MOVE_GEAR_GRIND, MOVE_MIRROR_SHOT},
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_THUNDER_WAVE, MOVE_TRI_ATTACK, MOVE_DISCHARGE, MOVE_FLASH_CANNON},
    },
};

static const struct TrainerMon sP_R17_TR6_HIKER1[] = {
    {
    .lvl = 38,
    .species = SPECIES_GEODUDE,
    .moves = {MOVE_MAGNITUDE, MOVE_EARTHQUAKE, MOVE_ROLLOUT, MOVE_ROCK_TOMB}
    },
    {
    .lvl = 40,
    .species = SPECIES_ROGGENROLA,
    .moves = {MOVE_MAGNITUDE, MOVE_EARTHQUAKE, MOVE_ROLLOUT, MOVE_ROCK_TOMB}
    },
    {
    .lvl = 42,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_MAGNITUDE, MOVE_EARTHQUAKE, MOVE_ROLLOUT, MOVE_ROCK_TOMB}
    },
    {
    .lvl = 44,
    .species = SPECIES_BOLDORE,
    .moves = {MOVE_MAGNITUDE, MOVE_EARTHQUAKE, MOVE_ROLLOUT, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMon sP_R17_TR7_HIKER2[] = {
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_BOLDORE,
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_CRYOGONAL,
    .moves = {MOVE_CONFUSE_RAY, MOVE_ICE_BEAM, MOVE_NIGHT_SLASH, MOVE_ANCIENT_POWER},
    },
};

static const struct TrainerMon sP_R17_TR8_COOLTRAINER[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_TORKOAL,
    .moves = {MOVE_SMOG, MOVE_FLAMETHROWER, MOVE_PROTECT, MOVE_LAVA_PLUME},
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_MAGMAR,
    },
};

static const struct TrainerMon sP_BTUN_TR1_HIKER1[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_ONIX,
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_HEATMOR,
    },
};

static const struct TrainerMon sP_BTUN_TR2_BLACKBELT[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_HERACROSS,
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_TOXICROAK,
    },
};

static const struct TrainerMon sP_BTUN_TR3_PICNICKER[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_NUMEL,
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    },
};

static const struct TrainerMon sP_BTUN_TR4_FIREBREATHER[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_MAGMAR,
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_MAGCARGO,
    },
};

static const struct TrainerMon sP_BTUN_TR5_BLACKBELT2[] = {
    {
    IVS_ALL(9),
    .lvl = 45,
    .species = SPECIES_LUCARIO,
    .moves = {MOVE_WORK_UP, MOVE_QUICK_GUARD, MOVE_BONE_RUSH, MOVE_AURA_SPHERE}
    },
};

static const struct TrainerMon sP_BTUN_TR6_CAMPERM[] = { //basaltunnel wild encounters
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_KOFFING,
    },
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_ONIX,
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_HEATMOR,
    },
};

static const struct TrainerMon sP_BTUN_TR7_PICNICKER2[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_MAGCARGO,
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_CLODSIRE,
    },
};

static const struct TrainerMon sP_BTUN_TR8_HIKER2[] = { //self destructs
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_GEODUDE,
    .moves = {MOVE_EXPLOSION},
    },
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_EXPLOSION},
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_WEEZING,
    .moves = {MOVE_EXPLOSION},
    },
};

static const struct TrainerMon sP_BTUN_TR9_BEAUTY[] = {
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_TALONFLAME,
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_SALAZZLE,
    },
};

static const struct TrainerMon sP_BTUN_TR10_FIREBREATHER2[] = { // fire pokemon from tunnels
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_DARUMAKA,
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_HEATMOR,
    },
    {
    IVS_ALL(9),
    .lvl = 45,
    .species = SPECIES_DARMANITAN,
    },
};

static const struct TrainerMon sP_BTUN_TR11_HIKER3[] = {
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_STEELIX,
    },
    {
    IVS_ALL(9),
    .lvl = 45,
    .species = SPECIES_GIGALITH,
    },
};

static const struct TrainerMon sP_BTUN_TR12_BROCK[] = {
    {
    IVS_ALL(17),
    .lvl = 47,
    .species = SPECIES_ONIX,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SANDSTORM}
    },
    {
    IVS_ALL(17),
    .lvl = 48,
    .species = SPECIES_GIGALITH,
    .moves = {MOVE_STONE_EDGE, MOVE_STEALTH_ROCK, MOVE_STOMPING_TANTRUM, MOVE_ROCK_CLIMB}
    },
    {
    IVS_ALL(17),
    .lvl = 48,
    .species = SPECIES_RAMPARDOS,
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_STOMPING_TANTRUM, MOVE_ROCK_CLIMB, MOVE_DOUBLE_EDGE}
    },
    {
    IVS_ALL(17),
    .lvl = 51,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_AERODACTYLITE,
    .moves = {MOVE_IRON_HEAD, MOVE_SKY_DROP, MOVE_CRUNCH, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sP_R18_TR1_HIKER1[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_GRAVELER,
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_CRYOGONAL,
    .moves = {MOVE_CONFUSE_RAY, MOVE_ICE_BEAM, MOVE_NIGHT_SLASH, MOVE_ANCIENT_POWER},
    },
};

static const struct TrainerMon sP_R18_TR2_RANGER_M[] = {
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_RUFFLET,
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_BRAVIARY,
    .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_WHIRLWIND, MOVE_CRUSH_CLAW}
    },
};

static const struct TrainerMon sP_R18_TR3_KINDLER[] = { //one super op mon
    {
    IVS_ALL(31),
    EVS(252, 0, 120, 0, 0, 132),
    .lvl = 43,
    .species = SPECIES_MAGMORTAR,
    .moves = {MOVE_LAVA_PLUME, MOVE_CONFUSE_RAY, MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH},
    .nature = NATURE_SASSY,
    },
};

static const struct TrainerMon sP_R18_TR4_HIKER2[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_ONIX,
    },
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_TORKOAL,
    },
};

static const struct TrainerMon sP_R18_TR5_RANGER_F[] = {
    {
    IVS_ALL(9),
    .lvl = 39,
    .species = SPECIES_SNORUNT,
    },
    {
    IVS_ALL(9),
    .lvl = 40,
    .species = SPECIES_SEALEO,
    .moves = {MOVE_HAIL, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_ICE_BALL}
    },
    {
    IVS_ALL(9),
    .lvl = 41,
    .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sP_R18_TR6_SCIENTIST[] = {
    {
    IVS_ALL(9),
    .lvl = 44,
    .species = SPECIES_MAGNEZONE,
    },
};

static const struct TrainerMon sP_R18_TR7_POKEMANIAC[] = {
    {
    IVS_ALL(9),
    .lvl = 42,
    .species = SPECIES_GLALIE,
    .moves = {MOVE_FREEZE_DRY, MOVE_CRUNCH, MOVE_FROST_BREATH, MOVE_PROTECT}
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMon sP_R18_TR8_BREEDER_M[] = {
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_TORKOAL,
    },
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_JYNX,
    },
};

static const struct TrainerMon sP_R18_TR9_ACE_TRAINER_M[] = {
    {
    IVS_ALL(18),
    .lvl = 47,
    .species = SPECIES_CRYOGONAL,
    .moves = {MOVE_CONFUSE_RAY, MOVE_ANCIENT_POWER, MOVE_FREEZE_DRY, MOVE_SIGNAL_BEAM},
    },
    {
    IVS_ALL(18),
    .lvl = 48,
    .species = SPECIES_NINETALES_ALOLA,
    .ability = ABILITY_SNOW_CLOAK,
    .moves = {MOVE_BLIZZARD, MOVE_EXTRASENSORY, MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT},
    },
    {
    IVS_ALL(18),
    .lvl = 49,
    .species = SPECIES_CLOYSTER,
    .ability = ABILITY_SKILL_LINK,
    .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_SURF, MOVE_ROCK_BLAST},
    },
    {
    IVS_ALL(18),
    .lvl = 51,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_GLALITITE,
    .moves = {MOVE_FREEZE_DRY, MOVE_BLIZZARD, MOVE_CRUNCH, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sP_LEADER_PRYCE[] = {
    {
    IVS_ALL(20),
    .lvl = 51,
    .species = SPECIES_GLALIE,
    .moves = {MOVE_FREEZE_DRY, MOVE_ICE_BURN, MOVE_CRUNCH, MOVE_IRON_HEAD},
    EVS(0, 0, 100, 0, 0, 100)
    },
    {
    IVS_ALL(20),
    .lvl = 52,
    .species = SPECIES_MAMOSWINE,
    .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_ICE_FANG, MOVE_ANCIENT_POWER},
    EVS(0, 0, 100, 0, 0, 100)
    },
};

static const struct TrainerMon sP_LEADER_BLAINE[] = {
    {
    IVS_ALL(20),
    .lvl = 51,
    .species = SPECIES_NINETALES,
    .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_EXTRASENSORY, MOVE_HEX},
    EVS(0, 0, 100, 0, 0, 100)
    },
    {
    IVS_ALL(20),
    .lvl = 52,
    .species = SPECIES_DARMANITAN,
    .moves = {MOVE_THRASH, MOVE_BELLY_DRUM, MOVE_FIRE_PUNCH, MOVE_HAMMER_ARM},
    EVS(0, 0, 100, 0, 0, 100)
    },
    {
    IVS_ALL(20),
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_ERUPTION, MOVE_EARTHQUAKE, MOVE_LAVA_PLUME},
    EVS(0, 0, 100, 0, 0, 100)
    },
};

static const struct TrainerMon sP_FROSTGYM_TR1_HIKER1[] = {
    {
    IVS_ALL(12),
    .lvl = 43,
    .species = SPECIES_SWINUB,
    .moves = {MOVE_FLAIL, MOVE_EARTHQUAKE, MOVE_TAKE_DOWN, MOVE_ICE_SHARD}
    },
    {
    IVS_ALL(12),
    .lvl = 45,
    .species = SPECIES_PILOSWINE,
    .moves = {MOVE_FURY_ATTACK, MOVE_THRASH, MOVE_ICE_FANG, MOVE_MUD_BOMB}
    },
};

static const struct TrainerMon sP_FROSTGYM_TR2_KINDLER1[] = {
    {
    IVS_ALL(12),
    .lvl = 43,
    .species = SPECIES_DARUMAKA,
    },
    {
    IVS_ALL(12),
    .lvl = 45,
    .species = SPECIES_DARMANITAN,
    .moves = {MOVE_FLARE_BLITZ, MOVE_BELLY_DRUM, MOVE_THRASH, MOVE_HAMMER_ARM}
    },
};

static const struct TrainerMon sP_FROSTGYM_TR3_SENIOR[] = {
    {
    IVS_ALL(12),
    .lvl = 45,
    .species = SPECIES_NINETALES_ALOLA,
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_ICE_BURN, MOVE_ICE_BEAM, MOVE_EXTRASENSORY}
    },
};

static const struct TrainerMon sP_FROSTGYM_TR4_JUNIOR[] = {
    {
    IVS_ALL(12),
    .lvl = 41,
    .species = SPECIES_NINETALES,
    .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_EXTRASENSORY, MOVE_HEX}
    },
};

static const struct TrainerMon sP_FROSTGYM_TR5_RANGER_M[] = {
    {
    IVS_ALL(12),
    .lvl = 42,
    .species = SPECIES_TORKOAL,
    .moves = {MOVE_PROTECT, MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_SMOKESCREEN}
    },
    {
    IVS_ALL(12),
    .lvl = 44,
    .species = SPECIES_CRYOGONAL,
    .moves = {MOVE_RECOVER, MOVE_REFLECT, MOVE_FREEZE_DRY, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sP_FROSTGYM_TR6_RANGER_F[] = {
    {
    IVS_ALL(12),
    .lvl = 42,
    .species = SPECIES_FLAREON,
    .moves = {MOVE_FIRE_BLAST, MOVE_LAVA_PLUME, MOVE_BITE, MOVE_QUICK_ATTACK}
    },
    {
    IVS_ALL(12),
    .lvl = 44,
    .species = SPECIES_GLACEON,
    .moves = {MOVE_ICY_WIND, MOVE_MIRROR_COAT, MOVE_HAIL, MOVE_WATER_PULSE}
    },
};

static const struct TrainerMon sP_FROSTGYM_TR7_MANIAC[] = {
    {
    IVS_ALL(12),
    .lvl = 39,
    .species = SPECIES_SNORUNT,
    },
    {
    IVS_ALL(12),
    .lvl = 41,
    .species = SPECIES_SNEASEL,
    .moves = {MOVE_SLASH, MOVE_HONE_CLAWS, MOVE_METAL_CLAW, MOVE_ICE_SHARD}
    },
    {
    IVS_ALL(12),
    .lvl = 43,
    .species = SPECIES_GLALIE,
    },
};

static const struct TrainerMon sP_FROSTGYM_TR8_COLLECTOR[] = {
    {
    IVS_ALL(12),
    .lvl = 41,
    .species = SPECIES_MAGMAR,
    },
    {
    IVS_ALL(12),
    .lvl = 43,
    .species = SPECIES_ARCANINE,
    .moves = {MOVE_THUNDER_FANG, MOVE_EXTREME_SPEED, MOVE_OUTRAGE, MOVE_FIRE_FANG}
    },
};

static const struct TrainerMon sP_FROSTGYM_TR9_KINDLER2[] = {
    {
    IVS_ALL(12),
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    },
    {
    IVS_ALL(12),
    .lvl = 45,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_EARTH_POWER, MOVE_LAVA_PLUME}
    },
};

static const struct TrainerMon sP_FROSTGYM_TR10_RANGER_F2[] = {
    {
    IVS_ALL(12),
    .lvl = 43,
    .species = SPECIES_GLALIE,
    },
    {
    IVS_ALL(12),
    .lvl = 45,
    .species = SPECIES_CLOYSTER,
    .moves = {MOVE_BRINE, MOVE_AURORA_BEAM, MOVE_RAZOR_SHELL, MOVE_ICICLE_SPEAR},
    .ability = ABILITY_SKILL_LINK
    },
};

static const struct TrainerMon sP_AZURETIDE_CELEBI_TR1[] = {
    {
    IVS_ALL(12),
    .lvl = 51,
    .species = SPECIES_GIRAFARIG,
    .ability = ABILITY_EARLY_BIRD,
    .moves = {MOVE_FLASH, MOVE_CRUNCH, MOVE_ZEN_HEADBUTT, MOVE_FUTURE_SIGHT}
    },
    {
    IVS_ALL(12),
    .lvl = 52,
    .species = SPECIES_BRAVIARY,
    .moves = {MOVE_HURRICANE, MOVE_TAILWIND, MOVE_CRUSH_CLAW, MOVE_FUTURE_SIGHT}
    },
    {
    IVS_ALL(12),
    .lvl = 53,
    .species = SPECIES_BRONZONG,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_GYRO_BALL, MOVE_CONFUSE_RAY, MOVE_EARTHQUAKE}
    },
    {
    IVS_ALL(12),
    .lvl = 54,
    .species = SPECIES_AZUMARILL,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_AQUA_TAIL}
    },
    {
    IVS_ALL(12),
    .lvl = 55,
    .species = SPECIES_ABSOL,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_X_SCISSOR}
    },
};

static const struct TrainerMon sP_KAOLISLE_CELEBI_TR2[] = {
    {
    IVS_ALL(12),
    .lvl = 51,
    .species = SPECIES_MALAMAR,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_SUPERPOWER, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT}
    },
    {
    IVS_ALL(12),
    .lvl = 52,
    .species = SPECIES_JYNX,
    .moves = {MOVE_FLASH, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_FUTURE_SIGHT}
    },
    {
    IVS_ALL(12),
    .lvl = 53,
    .species = SPECIES_TOGEKISS,
    .ability = ABILITY_SERENE_GRACE,
    .moves = {MOVE_EXTREME_SPEED, MOVE_AURA_SPHERE, MOVE_AIR_SLASH, MOVE_FUTURE_SIGHT}
    },
    {
    IVS_ALL(12),
    .lvl = 54,
    .species = SPECIES_GOLDUCK,
    .ability = ABILITY_CLOUD_NINE,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_HYDRO_PUMP, MOVE_ZEN_HEADBUTT, MOVE_SCREECH}
    },
    {
    IVS_ALL(12),
    .lvl = 55,
    .species = SPECIES_REUNICLUS,
    .moves = {MOVE_FUTURE_SIGHT, MOVE_DIZZY_PUNCH, MOVE_PSYCHIC, MOVE_RECOVER}
    },
};

static const struct TrainerMon sP_R19_TR1_SWIMMER_F[] = {
    {
    IVS_ALL(10),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    .moves = {MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_BRINE, MOVE_CONFUSE_RAY}
    }
};

static const struct TrainerMon sP_R19_TR2_SWIMMER_M[] = {
    {
    IVS_ALL(12),
    .lvl = 46,
    .species = SPECIES_OCTILLERY,
    .moves = {MOVE_OCTAZOOKA, MOVE_ROCK_BLAST, MOVE_AURORA_BEAM, MOVE_FOCUS_ENERGY}
    }
};

static const struct TrainerMon sP_R19_TR3_SWIMMER_M[] = {
    {
    IVS_ALL(10),
    .lvl = 45,
    .species = SPECIES_BUIZEL,
    .moves = {MOVE_SONIC_BOOM, MOVE_PURSUIT, MOVE_AQUA_JET}
    },
    {
    IVS_ALL(12),
    .lvl = 45,
    .species = SPECIES_FLOATZEL,
    .moves = {MOVE_SONIC_BOOM, MOVE_DOUBLE_HIT, MOVE_AQUA_JET, MOVE_RAZOR_WIND}
    }
};

static const struct TrainerMon sP_R19_TR4_SWIMMER_COUPLE[] = {
    {
    IVS_ALL(10),
    .lvl = 46,
    .species = SPECIES_EMPOLEON,
    .moves = {MOVE_RAZOR_GALE, MOVE_PECK, MOVE_AQUA_JET, MOVE_SWAGGER}
    },
    {
    IVS_ALL(12),
    .lvl = 46,
    .species = SPECIES_BLASTOISE,
    .moves = {MOVE_FLASH_CANNON, MOVE_WITHDRAW, MOVE_PROTECT, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sP_R19_TR5_SWIMMER_F[] = {
    {
    IVS_ALL(8),
    .lvl = 42,
    .species = SPECIES_AZURILL,
    .moves = {MOVE_CHARM, MOVE_BOUNCE}
    },
    {
    IVS_ALL(10),
    .lvl = 44,
    .species = SPECIES_MARILL,
    .moves = {MOVE_ROLLOUT, MOVE_AQUA_RING, MOVE_PLAY_ROUGH, MOVE_BUBBLE_BEAM}
    },
    {
    IVS_ALL(12),
    .lvl = 46,
    .species = SPECIES_AZUMARILL,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_AQUA_RING}
    },
};

static const struct TrainerMon sP_R19_TR6_SWIMMER_M[] = {
    {
    IVS_ALL(9),
    .lvl = 45,
    .species = SPECIES_CARVANHA,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_AQUA_JET, MOVE_SCREECH, MOVE_BITE}
    },
    {
    IVS_ALL(12),
    .lvl = 47,
    .species = SPECIES_SHARPEDO,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_AQUA_JET, MOVE_SLASH, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sP_R19_TR7_BLACKBELT[] = {
    {
    IVS_ALL(15),
    .lvl = 49,
    .species = SPECIES_LUCARIO,
    .moves = {MOVE_CALM_MIND, MOVE_AURA_SPHERE, MOVE_DETECT}
    }
};

static const struct TrainerMon sP_R19_TR8_HIKER[] = {
    {
    IVS_ALL(9),
    .lvl = 43,
    .species = SPECIES_BERGMITE,
    },
    {
    IVS_ALL(9),
    .lvl = 45,
    .species = SPECIES_BERGMITE,
    },
    {
    IVS_ALL(9),
    .lvl = 47,
    .species = SPECIES_AVALUGG,
    },
};

static const struct TrainerMon sP_R19_TR9_PICNICKER[] = {
    {
    IVS_ALL(9),
    .lvl = 47,
    .species = SPECIES_GLACEON,
    }
};

static const struct TrainerMon sP_R19_TR10_SWIMMER_M[] = {
    {
    IVS_ALL(12),
    .lvl = 49,
    .species = SPECIES_WAILORD,
    .moves = {MOVE_ROLLOUT, MOVE_ASTONISH, MOVE_REST, MOVE_DIVE}
    },
};

static const struct TrainerMon sP_Clarissa[] = {
    {
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 28,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Angelica[] = {
    {
    IVS_ALL(6),
    .lvl = 30,
    .species = SPECIES_CASTFORM_NORMAL,
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sP_Madeline2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sP_Madeline3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sP_Madeline4[] = {
    {
    IVS_ALL(3),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    IVS_ALL(3),
    .lvl = 34,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sP_Madeline5[] = {
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sP_Beverly[] = {
    {
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Imani[] = {
    {
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_Kyla[] = {
    {
    .lvl = 26,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Denise[] = {
    {
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Beth[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Tara[] = {
    {
    .lvl = 25,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 25,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_Missy[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Alice[] = {
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

static const struct TrainerMon sP_Jenny1[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Grace[] = {
    {
    .lvl = 34,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_Tanya[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sP_Sharon[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sP_Nikki[] = {
    {
    .lvl = 33,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sP_Brenda[] = {
    {
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Katie[] = {
    {
    .lvl = 33,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sP_Susie[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sP_Kara[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sP_Dana[] = {
    {
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sP_Sienna[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sP_Debra[] = {
    {
    .lvl = 30,
    .species = SPECIES_BEWEAR,
    .moves = {MOVE_GIGA_DRAIN}
    }
};

static const struct TrainerMon sP_Linda[] = {
    {
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sP_Kaylee[] = {
    {
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sP_Laurel[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sP_Carlee[] = {
    {
    .lvl = 35,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sP_Jenny2[] = {
    {
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Jenny3[] = {
    {
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Jenny4[] = {
    {
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Jenny5[] = {
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

static const struct TrainerMon sP_Heidi[] = {
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

static const struct TrainerMon sP_Becky[] = {
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

static const struct TrainerMon sP_Carol[] = {
    {
    .lvl = 17,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 17,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sP_Nancy[] = {
    {
    .lvl = 18,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sP_Martha[] = {
    {
    .lvl = 23,
    .species = SPECIES_SKITTY,
    },
    {
    .lvl = 23,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sP_Diana1[] = {
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

static const struct TrainerMon sP_Cedric[] = {
    {
    .lvl = 32,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sP_Irene[] = {
    {
    .lvl = 17,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 17,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_Diana2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GLOOM,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sP_Diana3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sP_Diana4[] = {
    {
    IVS_ALL(3),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    IVS_ALL(3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    IVS_ALL(3),
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sP_Diana5[] = {
    {
    IVS_ALL(4),
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    IVS_ALL(4),
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    IVS_ALL(4),
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sP_AmyAndLiv1[] = {
    {
    .lvl = 15,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 15,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sP_AmyAndLiv2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_PLUSLE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sP_GinaAndMia1[] = {
    {
    .lvl = 6,
    .species = SPECIES_SEEDOT,
    },
    {
    .lvl = 6,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sP_MiuAndYuki[] = {
    {
    .lvl = 26,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .lvl = 26,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sP_AmyAndLiv3[] = {
    {
    .lvl = 9,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 9,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sP_GinaAndMia2[] = {
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

static const struct TrainerMon sP_AmyAndLiv4[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_PLUSLE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sP_AmyAndLiv5[] = {
    {
    IVS_ALL(3),
    .lvl = 33,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    IVS_ALL(3),
    .lvl = 33,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sP_AmyAndLiv6[] = {
    {
    IVS_ALL(4),
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    IVS_ALL(4),
    .lvl = 36,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sP_Huey[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 12,
    .species = SPECIES_WINGULL,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 12,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sP_Edmond[] = {
    {
    .lvl = 13,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sP_Ernest1[] = {
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Dwayne[] = {
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

static const struct TrainerMon sP_Phillip[] = {
    {
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Leonard[] = {
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

static const struct TrainerMon sP_Duncan[] = {
    {
    .lvl = 25,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 25,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Ernest2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Ernest3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Ernest4[] = {
    {
    IVS_ALL(3),
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS_ALL(3),
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    IVS_ALL(3),
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Ernest5[] = {
    {
    IVS_ALL(4),
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS_ALL(4),
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    IVS_ALL(4),
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sP_Eli[] = {
    {
    IVS_ALL(12),
    .lvl = 23,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_Annika[] = {
    {
    IVS_ALL(12),
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    IVS_ALL(12),
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sP_Jazmyn[] = {
    {
    .lvl = 27,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sP_Jonas[] = {
    {
    .lvl = 31,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    }
};

static const struct TrainerMon sP_Kayley[] = {
    {
    .lvl = 31,
    .species = SPECIES_CASTFORM_NORMAL,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};

static const struct TrainerMon sP_Auron[] = {
    {
    .lvl = 33,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sP_Kelvin[] = {
    {
    IVS_ALL(18),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    IVS_ALL(18),
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sP_Marley[] = {
    {
    IVS_ALL(31),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sP_Reyna[] = {
    {
    IVS_ALL(6),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    },
    {
    IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sP_Hudson[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Conor[] = {
    {
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    },
    {
    IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sP_Edwin1[] = {
    {
    .lvl = 14,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 14,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sP_Hector[] = {
    {
    .lvl = 18,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 18,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sP_TabithaMossdeep[] = {
    {
    IVS_ALL(18),
    .lvl = 5,
    .species = SPECIES_GASTLY,
    },
    {
    IVS_ALL(18),
    .lvl = 5,
    .species = SPECIES_GASTLY,
    },
    {
    IVS_ALL(18),
    .lvl = 5,
    .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sP_Edwin2[] = {
    {
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sP_Edwin3[] = {
    {
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sP_Edwin4[] = {
    {
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sP_Edwin5[] = {
    {
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sP_WallyVR1[] = {
    {
    IVS_ALL(18),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    IVS_ALL(18),
    .lvl = 43,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(18),
    .lvl = 44,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    IVS_ALL(18),
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    IVS_ALL(30),
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sP_BRENDAN_PRIMROSE_MEADOW_GRASS[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROWLET,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_TACKLE, MOVE_GROWL},
    }
};

static const struct TrainerMon sP_BRENDAN_CORALGROVE_ELEVATOR_GRASS[] = {
    // {
    // IVS_ALL(6),
    // .lvl = 12,
    // .species = SPECIES_BUNNELBY,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // IVS_ALL(9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    IVS_ALL(6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    IVS_ALL(6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    },
    {
    IVS_ALL(6),
    .lvl = 14,
    .species = SPECIES_ROWLET,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_PECK, MOVE_ASTONISH, MOVE_RAZOR_LEAF, MOVE_TACKLE}
    }
};

static const struct TrainerMon sP_BRENDAN_PRIMROSE_MEADOW_FIRE[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SCRATCH, MOVE_GROWL},
    }
};

static const struct TrainerMon sP_BRENDAN_CORALGROVE_ELEVATOR_FIRE[] = {
    // {
    // IVS_ALL(6),
    // .lvl = 12,
    // .species = SPECIES_BUNNELBY,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // IVS_ALL(9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    IVS_ALL(6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    IVS_ALL(6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    },
    {
    IVS_ALL(6),
    .lvl = 14,
    .species = SPECIES_TORCHIC,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_PECK, MOVE_SCRATCH, MOVE_EMBER, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sP_BRENDAN_PRIMROSE_MEADOW_WATER[] = {
    {
    .lvl = 5,
    .species = SPECIES_PIPLUP,
    .moves = {MOVE_POUND, MOVE_GROWL},
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_SERIOUS,
    }
};

static const struct TrainerMon sP_BRENDAN_CORALGROVE_ELEVATOR_WATER[] = {
    // {
    // IVS_ALL(6),
    // .lvl = 12,
    // .species = SPECIES_BUNNELBY,
    // .gender = TRAINER_MON_MALE,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // IVS_ALL(9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    IVS_ALL(6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    IVS_ALL(6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_FEMALE,
    .nature = NATURE_MILD,
    },
    {
    IVS_ALL(6),
    .lvl = 14,
    .species = SPECIES_PIPLUP,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    }
};

static const struct TrainerMon sP_MAY_PRIMROSE_MEADOW_GRASS[] = {
    {
    .lvl = 5,
    .species = SPECIES_ROWLET,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_TACKLE, MOVE_GROWL},
    }
};

static const struct TrainerMon sP_MAY_CORALGROVE_ELEVATOR_GRASS[] = {
    // {
    // IVS_ALL(6),
    // .lvl = 12,
    // .species = SPECIES_BUNEARY,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // IVS_ALL(9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    IVS_ALL(6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    IVS_ALL(6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    },
    {
    IVS_ALL(6),
    .lvl = 14,
    .species = SPECIES_ROWLET,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_PECK, MOVE_ASTONISH, MOVE_RAZOR_LEAF, MOVE_TACKLE}
    }
};

static const struct TrainerMon sP_MAY_PRIMROSE_MEADOW_FIRE[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_SCRATCH, MOVE_GROWL},
    }
};

static const struct TrainerMon sP_MAY_CORALGROVE_ELEVATOR_FIRE[] = {
    // {
    // IVS_ALL(6),
    // .lvl = 12,
    // .species = SPECIES_BUNEARY,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // IVS_ALL(9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    IVS_ALL(6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    IVS_ALL(6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    },
    {
    IVS_ALL(6),
    .lvl = 14,
    .species = SPECIES_TORCHIC,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_PECK, MOVE_SCRATCH, MOVE_EMBER, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sP_MAY_PRIMROSE_MEADOW_WATER[] = {
    {
    .lvl = 5,
    .species = SPECIES_PIPLUP,
    .nature = NATURE_SERIOUS,
    .moves = {MOVE_POUND, MOVE_GROWL},
    }
};

static const struct TrainerMon sP_MAY_CORALGROVE_ELEVATOR_WATER[] = {
    // {
    // IVS_ALL(6),
    // .lvl = 12,
    // .species = SPECIES_BUNEARY,
    // .nature = NATURE_IMPISH,
    // },
    // {
    // IVS_ALL(9),
    // .lvl = 14,
    // .species = SPECIES_RIOLU,
    // .nature = NATURE_IMPISH,
    // },
    {
    IVS_ALL(6),
    .lvl = 11,
    .species = SPECIES_STARLY,
    .nature = NATURE_IMPISH,
    },
    {
    IVS_ALL(6),
    .lvl = 12,
    .species = SPECIES_RALTS,
    .gender = TRAINER_MON_MALE,
    .nature = NATURE_MILD,
    },
    {
    IVS_ALL(6),
    .lvl = 14,
    .species = SPECIES_PIPLUP,
    .nature = NATURE_SERIOUS,
    .heldItem = ITEM_ORAN_BERRY,
    }
};

static const struct TrainerMon sP_Isaac1[] = {
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

static const struct TrainerMon sP_Davis[] = {
    {
    .lvl = 27,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sP_Mitchell[] = {
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

static const struct TrainerMon sP_Isaac2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LOUDRED,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LINOONE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ARON,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SWELLOW,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sP_Isaac3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LOUDRED,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LINOONE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ARON,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sP_Isaac4[] = {
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sP_Isaac5[] = {
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sP_Lydia1[] = {
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

static const struct TrainerMon sP_Halle[] = {
    {
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 43,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sP_Garrison[] = {
    {
    .lvl = 26,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sP_Lydia2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_WINGULL,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SHROOMISH,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SKITTY,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Lydia3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ROSELIA,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Lydia4[] = {
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    IVS_ALL(3),
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Lydia5[] = {
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    IVS_ALL(4),
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sP_Jackson1[] = {
    {
    IVS_ALL(6),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Lorenzo[] = {
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_SEEDOT,
    },
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    },
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sP_Sebastian[] = {
    {
    IVS_ALL(6),
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sP_Jackson2[] = {
    {
    IVS_ALL(7),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Jackson3[] = {
    {
    IVS(8, 8, 8, 8, 8, 8),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Jackson4[] = {
    {
    IVS_ALL(9),
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Jackson5[] = {
    {
    IVS_ALL(10),
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    IVS_ALL(10),
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Catherine1[] = {
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_GLOOM,
    },
    {
    IVS_ALL(6),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sP_Jenna[] = {
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_LOTAD,
    },
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_LOMBRE,
    },
    {
    IVS_ALL(6),
    .lvl = 28,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sP_Sophia[] = {
    {
    IVS_ALL(6),
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    IVS_ALL(6),
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sP_Catherine2[] = {
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    IVS_ALL(7),
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sP_Catherine3[] = {
    {
    IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sP_Catherine4[] = {
    {
    IVS_ALL(9),
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    IVS_ALL(9),
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sP_Catherine5[] = {
    {
    IVS_ALL(10),
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    IVS_ALL(10),
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sP_Julio[] = {
    {
    .lvl = 21,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sP_GruntSeafloorCavern5[] = {
    {
    IVS_ALL(6),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS_ALL(6),
    .lvl = 35,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sP_GruntUnused[] = {
    {
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_GruntMtPyre4[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_GruntJaggedPass[] = {
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_POOCHYENA,
    },
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_Marc[] = {
    {
    IVS_ALL(14),
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS(15, 15, 15, 15, 15, 15),
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sP_Brenden[] = {
    {
    IVS_ALL(12),
    .lvl = 13,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sP_Lilith[] = {
    {
    IVS_ALL(18),
    .lvl = 13,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sP_Cristian[] = {
    {
    IVS(24, 24, 24, 24, 24, 24),
    .lvl = 13,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sP_Sylvia[] = {
    {
    IVS_ALL(12),
    .lvl = 36,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sP_Leonardo[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sP_Athena[] = {
    {
    IVS_ALL(12),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    IVS_ALL(12),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sP_Harrison[] = {
    {
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sP_GruntMtChimney2[] = {
    {
    .lvl = 20,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_Clarence[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sP_Terry[] = {
    {
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sP_Nate[] = {
    {
    IVS_ALL(12),
    .lvl = 36,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sP_Kathleen[] = {
    {
    IVS_ALL(12),
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sP_Clifford[] = {
    {
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sP_Nicholas[] = {
    {
    .lvl = 36,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sP_GruntSpaceCenter3[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sP_GruntSpaceCenter4[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sP_GruntSpaceCenter5[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_GruntSpaceCenter6[] = {
    {
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sP_GruntSpaceCenter7[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sP_Macey[] = {
    {
    .lvl = 36,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMon sP_Paxton[] = {
    {
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Isabella[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sP_GruntWeatherInst5[] = {
    {
    .lvl = 27,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 27,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sP_TabithaMtChimney[] = {
    {
    IVS_ALL(6),
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    IVS_ALL(6),
    .lvl = 20,
    .species = SPECIES_POOCHYENA,
    },
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_NUMEL,
    },
    {
    IVS_ALL(6),
    .lvl = 22,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_Jonathan[] = {
    {
    .lvl = 33,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sP_MaxieMagmaHideout[] = {
    {
    IVS_ALL(18),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS_ALL(18),
    .lvl = 38,
    .species = SPECIES_CROBAT,
    },
    {
    IVS_ALL(18),
    .lvl = 39,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sP_MaxieMtChimney[] = {
    {
    IVS_ALL(18),
    .lvl = 24,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS_ALL(18),
    .lvl = 24,
    .species = SPECIES_ZUBAT,
    },
    {
    IVS_ALL(18),
    .lvl = 25,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sP_Tiana[] = {
    {
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 4,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sP_Haley1[] = {
    {
    .lvl = 6,
    .species = SPECIES_LOTAD,
    },
    {
    .lvl = 6,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sP_Janice[] = {
    {
    .lvl = 9,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_Vivi[] = {
    {
    IVS_ALL(12),
    .lvl = 15,
    .species = SPECIES_MARILL,
    },
    {
    IVS_ALL(12),
    .lvl = 15,
    .species = SPECIES_SHROOMISH,
    },
    {
    IVS_ALL(12),
    .lvl = 15,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_Haley2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sP_Haley3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Haley4[] = {
    {
    IVS_ALL(3),
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    IVS_ALL(3),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Haley5[] = {
    {
    IVS_ALL(4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    IVS_ALL(4),
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    IVS_ALL(4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sP_Sally[] = {
    {
    .lvl = 16,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sP_Robin[] = {
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

static const struct TrainerMon sP_Andrea[] = {
    {
    IVS_ALL(12),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sP_Crissy[] = {
    {
    IVS_ALL(12),
    .lvl = 39,
    .species = SPECIES_GOLDEEN,
    },
    {
    IVS_ALL(12),
    .lvl = 39,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sP_Rick[] = {
    {
    .lvl = 4,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 4,
    .species = SPECIES_WURMPLE,
    }
};

static const struct TrainerMon sP_Lyle[] = {
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

static const struct TrainerMon sP_Jose[] = {
    {
    IVS_ALL(6),
    .lvl = 8,
    .species = SPECIES_WURMPLE,
    },
    {
    IVS_ALL(6),
    .lvl = 8,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sP_Doug[] = {
    {
    .lvl = 28,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 28,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sP_Greg[] = {
    {
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sP_Kent[] = {
    {
    .lvl = 25,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sP_James1[] = {
    {
    .lvl = 6,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 6,
    .species = SPECIES_NINCADA,
    }
};

static const struct TrainerMon sP_James2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sP_James3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sP_James4[] = {
    {
    IVS_ALL(3),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    IVS_ALL(3),
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    IVS_ALL(3),
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sP_James5[] = {
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sP_Brice[] = {
    {
    .lvl = 17,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 17,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sP_Trent1[] = {
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

static const struct TrainerMon sP_Lenny[] = {
    {
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sP_Lucas1[] = {
    {
    .lvl = 18,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_Alan[] = {
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

static const struct TrainerMon sP_Clark[] = {
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sP_Eric[] = {
    {
    .lvl = 20,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 20,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sP_Lucas2[] = {
    {
    .lvl = 9,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sP_Mike1[] = {
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

static const struct TrainerMon sP_Mike2[] = {
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

static const struct TrainerMon sP_Trent2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sP_Trent3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sP_Trent4[] = {
    {
    IVS_ALL(3),
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS_ALL(3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    IVS_ALL(3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    IVS_ALL(3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sP_Trent5[] = {
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sP_DezAndLuke[] = {
    {
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 31,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sP_LeaAndJed[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sP_KiraAndDan1[] = {
    {
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sP_KiraAndDan2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sP_KiraAndDan3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sP_KiraAndDan4[] = {
    {
    IVS_ALL(3),
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    IVS_ALL(3),
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sP_KiraAndDan5[] = {
    {
    IVS_ALL(4),
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    IVS_ALL(4),
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sP_Johanna[] = {
    {
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Gerald[] = {
    {
    IVS_ALL(12),
    .lvl = 23,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    }
};

static const struct TrainerMon sP_Vivian[] = {
    {
    IVS_ALL(12),
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_THUNDER_PUNCH}
    },
    {
    IVS_ALL(12),
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DETECT, MOVE_CONFUSION, MOVE_MEDITATE}
    }
};

static const struct TrainerMon sP_Danielle[] = {
    {
    IVS_ALL(12),
    .lvl = 23,
    .species = SPECIES_MEDITITE,
    .moves = {MOVE_BIDE, MOVE_DETECT, MOVE_CONFUSION, MOVE_FIRE_PUNCH}
    }
};

static const struct TrainerMon sP_Hideo[] = {
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

static const struct TrainerMon sP_Keigo[] = {
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

static const struct TrainerMon sP_Riley[] = {
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

static const struct TrainerMon sP_Flint[] = {
    {
    IVS_ALL(18),
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    },
    {
    IVS_ALL(18),
    .lvl = 29,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sP_Ashley[] = {
    {
    IVS_ALL(12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    IVS_ALL(12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    },
    {
    IVS_ALL(12),
    .lvl = 27,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sP_WallyMauville[] = {
    {
    IVS_ALL(3),
    .lvl = 16,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sP_WallyVR2[] = {
    {
    IVS_ALL(18),
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    IVS_ALL(18),
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(18),
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    IVS_ALL(18),
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    IVS_ALL(30),
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sP_WallyVR3[] = {
    {
    IVS_ALL(18),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    IVS_ALL(18),
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(18),
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    IVS_ALL(18),
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    IVS_ALL(30),
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sP_WallyVR4[] = {
    {
    IVS_ALL(18),
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    IVS_ALL(18),
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(18),
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    IVS_ALL(18),
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    IVS_ALL(30),
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sP_WallyVR5[] = {
    {
    IVS_ALL(18),
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    IVS_ALL(18),
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    IVS_ALL(18),
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    IVS_ALL(18),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    IVS_ALL(30),
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sP_Jonah[] = {
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

static const struct TrainerMon sP_Henry[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sP_Roger[] = {
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

static const struct TrainerMon sP_Alexa[] = {
    {
    IVS_ALL(12),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    IVS_ALL(12),
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sP_Ruben[] = {
    {
    IVS_ALL(12),
    .lvl = 34,
    .species = SPECIES_SHIFTRY,
    },
    {
    IVS_ALL(12),
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sP_Koji1[] = {
    {
    .lvl = 34,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Wayne[] = {
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

static const struct TrainerMon sP_Aidan[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 32,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sP_Reed[] = {
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sP_Tisha[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sP_ToriAndTia[] = {
    {
    .lvl = 19,
    .species = SPECIES_SPINDA,
    },
    {
    .lvl = 19,
    .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMon sP_KimAndIris[] = {
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

static const struct TrainerMon sP_TyraAndIvy[] = {
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

static const struct TrainerMon sP_MelAndPaul[] = {
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

static const struct TrainerMon sP_JohnAndJay1[] = {
    {
    IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sP_JohnAndJay2[] = {
    {
    IVS_ALL(25),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    IVS_ALL(25),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sP_JohnAndJay3[] = {
    {
    IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sP_JohnAndJay4[] = {
    {
    IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sP_JohnAndJay5[] = {
    {
    IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sP_ReliAndIan[] = {
    {
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sP_LilaAndRoy1[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 33,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sP_LilaAndRoy2[] = {
    {
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sP_LilaAndRoy3[] = {
    {
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sP_LilaAndRoy4[] = {
    {
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sP_LilaAndRoy5[] = {
    {
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sP_LisaAndRay[] = {
    {
    .lvl = 27,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 25,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sP_Chris[] = {
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

static const struct TrainerMon sP_Dawson[] = {
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

static const struct TrainerMon sP_Sarah[] = {
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

static const struct TrainerMon sP_Darian[] = {
    {
    .lvl = 9,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sP_Hailey[] = {
    {
    .lvl = 13,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_Chandler[] = {
    {
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 12,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sP_Kaleb[] = {
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

static const struct TrainerMon sP_Joseph[] = {
    {
    .lvl = 14,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .lvl = 14,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sP_Alyssa[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sP_Marcos[] = {
    {
    IVS_ALL(12),
    .lvl = 15,
    .species = SPECIES_VOLTORB,
    }
};

static const struct TrainerMon sP_Rhett[] = {
    {
    IVS_ALL(12),
    .lvl = 15,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sP_Tyron[] = {
    {
    .lvl = 19,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sP_Celina[] = {
    {
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sP_Bianca[] = {
    {
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sP_Hayden[] = {
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_Sophie[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 19,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sP_Coby[] = {
    {
    .lvl = 17,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 19,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sP_Lawrence[] = {
    {
    .lvl = 18,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 18,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sP_Wyatt[] = {
    {
    .lvl = 18,
    .species = SPECIES_ARON,
    },
    {
    .lvl = 18,
    .species = SPECIES_ARON,
    }
};

static const struct TrainerMon sP_Angelina[] = {
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_Kai[] = {
    {
    .lvl = 19,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMon sP_Charlotte[] = {
    {
    .lvl = 19,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sP_Deandre[] = {
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

static const struct TrainerMon sP_GruntMagmaHideout1[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout2[] = {
    {
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout3[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout4[] = {
    {
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 28,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout5[] = {
    {
    .lvl = 28,
    .species = SPECIES_BALTOY,
    },
    {
    .lvl = 28,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout6[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout7[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout8[] = {
    {
    .lvl = 29,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout9[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout10[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout11[] = {
    {
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout12[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout13[] = {
    {
    .lvl = 29,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout14[] = {
    {
    .lvl = 29,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout15[] = {
    {
    .lvl = 29,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_GruntMagmaHideout16[] = {
    {
    .lvl = 29,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sP_TabithaMagmaHideout[] = {
    {
    IVS_ALL(9),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    IVS_ALL(9),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS_ALL(9),
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    },
    {
    IVS_ALL(9),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sP_Darcy[] = {
    {
    .lvl = 33,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sP_MaxieMossdeep[] = {
    {
    IVS_ALL(18),
    .lvl = 5,
    .species = SPECIES_GASTLY,
    },
    {
    IVS_ALL(18),
    .lvl = 5,
    .species = SPECIES_GASTLY,
    },
    {
    IVS_ALL(18),
    .lvl = 5,
    .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sP_Pete[] = {
    {
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sP_Isabelle[] = {
    {
    .lvl = 15,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sP_Andres1[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sP_Josue[] = {
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_TAILLOW,
    },
    {
    IVS_ALL(6),
    .lvl = 25,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sP_Camron[] = {
    {
    .lvl = 26,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sP_Cory1[] = {
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

static const struct TrainerMon sP_Carolina[] = {
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    },
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_SWELLOW,
    },
    {
    IVS_ALL(6),
    .lvl = 24,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sP_Elijah[] = {
    {
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    },
    {
    .lvl = 25,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sP_Celia[] = {
    {
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 22,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMon sP_Bryan[] = {
    {
    .lvl = 22,
    .species = SPECIES_SANDSHREW,
    },
    {
    .lvl = 22,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sP_Branden[] = {
    {
    .lvl = 22,
    .species = SPECIES_TAILLOW,
    },
    {
    .lvl = 22,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sP_Bryant[] = {
    {
    .lvl = 18,
    .species = SPECIES_NUMEL,
    },
    {
    .lvl = 18,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMon sP_Shayla[] = {
    {
    .lvl = 18,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 18,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sP_Kyra[] = {
    {
    .lvl = 26,
    .species = SPECIES_DODUO,
    },
    {
    .lvl = 26,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sP_Jaiden[] = {
    {
    .lvl = 26,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 26,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sP_Alix[] = {
    {
    .lvl = 26,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 26,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sP_Helene[] = {
    {
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sP_Marlene[] = {
    {
    .lvl = 18,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 18,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sP_Devan[] = {
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 8,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sP_Johnson[] = {
    {
    .lvl = 8,
    .species = SPECIES_SHROOMISH,
    },
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    }
};

static const struct TrainerMon sP_Melina[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sP_Brandi[] = {
    {
    .lvl = 17,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sP_Aisha[] = {
    {
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sP_Makayla[] = {
    {
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sP_Fabian[] = {
    {
    .lvl = 26,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sP_Dayton[] = {
    {
    .lvl = 25,
    .species = SPECIES_SLUGMA,
    },
    {
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_Rachel[] = {
    {
    .lvl = 26,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sP_Leonel[] = {
    {
    IVS_ALL(12),
    .lvl = 30,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_NONE}
    }
};

static const struct TrainerMon sP_Callie[] = {
    {
    .lvl = 28,
    .species = SPECIES_MEDITITE,
    },
    {
    .lvl = 28,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sP_Cale[] = {
    {
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 29,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sP_Myles[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAKUHITA,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WINGULL,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_TROPIUS,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_Pat[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_POOCHYENA,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SANDSHREW,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMon sP_Cristin1[] = {
    {
    IVS_ALL(12),
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    },
    {
    IVS_ALL(12),
    .lvl = 29,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sP_Roxanne2[] = {
    {
    IVS_ALL(31),
    .lvl = 32,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    IVS_ALL(31),
    .lvl = 35,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 35,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sP_Roxanne3[] = {
    {
    IVS_ALL(31),
    .lvl = 37,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    IVS_ALL(31),
    .lvl = 37,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    IVS_ALL(31),
    .lvl = 40,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 40,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sP_Roxanne4[] = {
    {
    IVS_ALL(31),
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    IVS_ALL(31),
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sP_Roxanne5[] = {
    {
    IVS_ALL(31),
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    IVS_ALL(31),
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sP_Brawly2[] = {
    {
    IVS_ALL(31),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    IVS_ALL(31),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    IVS_ALL(31),
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    IVS_ALL(31),
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_Brawly3[] = {
    {
    IVS_ALL(31),
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    IVS_ALL(31),
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    IVS_ALL(31),
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    IVS_ALL(31),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_Brawly4[] = {
    {
    IVS_ALL(31),
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    IVS_ALL(31),
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_Brawly5[] = {
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    IVS_ALL(31),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_Wattson2[] = {
    {
    IVS_ALL(31),
    .lvl = 36,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    IVS_ALL(31),
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    IVS_ALL(31),
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sP_Wattson3[] = {
    {
    IVS_ALL(31),
    .lvl = 39,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    IVS_ALL(31),
    .lvl = 41,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sP_Wattson4[] = {
    {
    IVS_ALL(31),
    .lvl = 44,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sP_Wattson5[] = {
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sP_Flannery2[] = {
    {
    IVS_ALL(31),
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    IVS_ALL(31),
    .lvl = 38,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    IVS_ALL(31),
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sP_Flannery3[] = {
    {
    IVS_ALL(31),
    .lvl = 41,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 41,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sP_Flannery4[] = {
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sP_Flannery5[] = {
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sP_Norman2[] = {
    {
    IVS_ALL(31),
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    IVS_ALL(31),
    .lvl = 42,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sP_Norman3[] = {
    {
    IVS_ALL(31),
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    IVS_ALL(31),
    .lvl = 47,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sP_Norman4[] = {
    {
    IVS_ALL(31),
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    IVS_ALL(31),
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sP_Norman5[] = {
    {
    IVS_ALL(31),
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    IVS_ALL(31),
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    IVS_ALL(31),
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    IVS_ALL(31),
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    IVS_ALL(31),
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sP_Winona2[] = {
    {
    IVS_ALL(31),
    .lvl = 40,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 38,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    IVS_ALL(31),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_Winona3[] = {
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    IVS_ALL(31),
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    IVS_ALL(31),
    .lvl = 45,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_Winona4[] = {
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    IVS_ALL(31),
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_Winona5[] = {
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    IVS_ALL(31),
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    IVS_ALL(31),
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sP_TateAndLiza2[] = {
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sP_TateAndLiza3[] = {
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    IVS_ALL(31),
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sP_TateAndLiza4[] = {
    {
    IVS_ALL(31),
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    IVS_ALL(31),
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    IVS_ALL(31),
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sP_TateAndLiza5[] = {
    {
    IVS_ALL(31),
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    IVS_ALL(31),
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    IVS_ALL(31),
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    IVS_ALL(31),
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    IVS_ALL(31),
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sP_Juan2[] = {
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    IVS_ALL(31),
    .lvl = 46,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sP_Juan3[] = {
    {
    IVS_ALL(31),
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    IVS_ALL(31),
    .lvl = 51,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sP_Juan4[] = {
    {
    IVS_ALL(31),
    .lvl = 56,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    IVS_ALL(31),
    .lvl = 58,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    IVS_ALL(31),
    .lvl = 56,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    IVS_ALL(31),
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sP_Juan5[] = {
    {
    IVS_ALL(31),
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    IVS_ALL(31),
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    IVS_ALL(31),
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    IVS_ALL(31),
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    IVS_ALL(31),
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    IVS_ALL(31),
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sP_CASUAL_IRIS[] = {
    {
    IVS_ALL(18),
    EVS(80, 0, 80, 0, 0, 80),
    .lvl = 44,
    .species = SPECIES_GABITE,
    .gender = TRAINER_MON_MALE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SAND_TOMB, MOVE_SLASH, MOVE_DIG, MOVE_DRAGON_CLAW}
    },
    {
    IVS_ALL(18),
    EVS(80, 0, 80, 0, 0, 80),
    .lvl = 45,
    .species = SPECIES_FRAXURE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_CRUNCH, MOVE_FOCUS_ENERGY, MOVE_SWORDS_DANCE, MOVE_OUTRAGE}
    },
    {
    IVS_ALL(18),
    EVS(80, 0, 80, 0, 0, 80),
    .lvl = 46,
    .species = SPECIES_ARCHEOPS,
    .gender = TRAINER_MON_MALE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_U_TURN, MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_DOUBLE_TEAM}
    },
    {
    IVS_ALL(18),
    EVS(80, 0, 80, 0, 0, 80),
    .lvl = 49,
    .species = SPECIES_AGGRON,
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM}
    }
};

static const struct TrainerMon sP_Darius[] = {
    {
    IVS(24, 24, 24, 24, 24, 24),
    .lvl = 30,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sP_Steven[] = {
    {
    IVS_ALL(12),
    .lvl = 50,
    .species = SPECIES_COFAGRIGUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TACKLE}
    }
};

static const struct TrainerMon sP_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sP_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sP_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sP_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sP_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sP_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sP_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sP_Andres2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sP_Andres3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sP_Andres4[] = {
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sP_Andres5[] = {
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sP_Cory2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sP_Cory3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sP_Cory4[] = {
    {
    IVS_ALL(3),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS_ALL(3),
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    IVS_ALL(3),
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sP_Cory5[] = {
    {
    IVS_ALL(4),
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS_ALL(4),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    IVS_ALL(4),
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sP_Pablo2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sP_Pablo3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sP_Pablo4[] = {
    {
    IVS_ALL(3),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS_ALL(3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    IVS_ALL(3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sP_Pablo5[] = {
    {
    IVS_ALL(4),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    IVS_ALL(4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    IVS_ALL(4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sP_Koji2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Koji3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Koji4[] = {
    {
    IVS_ALL(3),
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    IVS_ALL(3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    IVS_ALL(3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sP_Koji5[] = {
    {
    IVS_ALL(4),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    IVS_ALL(4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    IVS_ALL(4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sP_Cristin2[] = {
    {
    IVS_ALL(13),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    IVS_ALL(13),
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sP_Cristin3[] = {
    {
    IVS_ALL(14),
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    IVS_ALL(14),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    IVS_ALL(14),
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sP_Cristin4[] = {
    {
    IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    IVS_ALL(12),
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sP_Cristin5[] = {
    {
    IVS_ALL(17),
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    IVS_ALL(17),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    IVS_ALL(17),
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sP_Fernando2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sP_Fernando3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sP_Fernando4[] = {
    {
    IVS_ALL(3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    IVS_ALL(3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    IVS_ALL(3),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sP_Fernando5[] = {
    {
    IVS_ALL(4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    IVS_ALL(4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    IVS_ALL(4),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sP_Sawyer2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sP_Sawyer3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MACHOP,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_NUMEL,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sP_Sawyer4[] = {
    {
    IVS_ALL(3),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    IVS_ALL(3),
    .lvl = 30,
    .species = SPECIES_NUMEL,
    },
    {
    IVS_ALL(3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sP_Sawyer5[] = {
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    },
    {
    IVS_ALL(4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sP_Gabrielle2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sP_Gabrielle3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sP_Gabrielle4[] = {
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    IVS_ALL(3),
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sP_Gabrielle5[] = {
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    IVS_ALL(4),
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sP_Thalia2[] = {
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sP_Thalia3[] = {
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sP_Thalia4[] = {
    {
    IVS_ALL(3),
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    IVS_ALL(3),
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    IVS_ALL(3),
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sP_Thalia5[] = {
    {
    IVS_ALL(4),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    IVS_ALL(4),
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    IVS_ALL(4),
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sP_Mariela[] = {
    {
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sP_Alvaro[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sP_Everett[] = {
    {
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sP_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sP_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sP_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sP_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

