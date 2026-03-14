#define BROTHER_INFO                                            \
    .trainerClass = TRAINER_CLASS_BROTHER,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_BROTHER,                          \
    .trainerName = _("Thomas"),                                 \
    .mugshotColor = MUGSHOT_COLOR_BROTHER,                      \
    .isRival = TRUE

#define MALE_RIVAL_INFO                                         \
    .trainerClass = TRAINER_CLASS_RIVAL,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_BRENDAN,                          \
    .trainerName = _("Brendan"),                                \
    .mugshotColor = MUGSHOT_COLOR_BRENDAN,                      \
    .isRival = TRUE

#define FEMALE_RIVAL_INFO                                       \
    .trainerClass = TRAINER_CLASS_RIVAL,                        \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_MAY,                              \
    .trainerName = _("May"),                                    \
    .mugshotColor = MUGSHOT_COLOR_MAY,                          \
    .isRival = TRUE

#define LEAF_INFO                                                               \
    .trainerClass = TRAINER_CLASS_RIVAL,                                        \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,   \
    .trainerPic = TRAINER_PIC_LEAF,                                             \
    .trainerName = _("LEAF"),                                                   \
    .items = {},                                                                \
    .battleType = TRAINER_BATTLE_TYPE_SINGLES,                                  \
    .aiFlags = 0,                                                               \
    TRAINER_PARTY(sParty_Leaf),

#define DUMB_AI         .aiFlags = AI_FLAG_CHECK_BAD_MOVE
#define BASIC_AI        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT
#define ADVANCED_AI     .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define MOREBP          .extendedBpCap = TRUE

#define YOUNGSTER_INFO                                          \
    .trainerClass = TRAINER_CLASS_YOUNGSTER,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_YOUNGSTER

#define FISHERMAN_INFO                                          \
    .trainerClass = TRAINER_CLASS_FISHERMAN,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_FISHERMAN

#define BUG_CATCHER_INFO                                        \
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_BUG_CATCHER

#define TUBER_F_INFO                                            \
    .trainerClass = TRAINER_CLASS_TUBER_F,                      \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_TUBER_F

#define TUBER_M_INFO                                            \
    .trainerClass = TRAINER_CLASS_TUBER_M,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_TUBER_M

#define BW_ACE_M_INFO                                           \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_M

#define BW_ACE_F_INFO                                           \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_F

#define LASS_INFO                                               \
    .trainerClass = TRAINER_CLASS_LASS,                         \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_LASS

#define BLACK_BELT_INFO                                         \
    .trainerClass = TRAINER_CLASS_BLACK_BELT,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_BLACK_BELT

#define CAMPER_INFO                                             \
    .trainerClass = TRAINER_CLASS_CAMPER,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_CAMPER

#define SCHOOL_KID_F_INFO                                       \
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F

#define LADY_INFO                                               \
    .trainerClass = TRAINER_CLASS_LADY,                         \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_LADY

#define TEAM_ROCKET_M_INFO                                      \
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,      \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,                     \
    .trainerName = _("Grunt")

#define TEAM_ROCKET_F_INFO                                      \
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_AQUA,      \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,                     \
    .trainerName = _("Grunt")

#define SCHOOL_KID_M_INFO                                       \
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M

#define NURSE_INFO                                              \
    .trainerClass = TRAINER_CLASS_NURSE,                        \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_AROMA_LADY,                       \
    .trainerName = _("Tutor"),                                  \
    .aiFlags = AI_FLAG_ACE_POKEMON | AI_FLAG_WILL_SUICIDE |     \
    AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SEQUENCE_SWITCHING

#define EV_NURSE_INFO                                           \
    .trainerClass = TRAINER_CLASS_EV_NURSE,                     \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_AROMA_LADY,                       \
    .trainerName = _("Tutor"),                                  \
    .aiFlags = AI_FLAG_ACE_POKEMON | AI_FLAG_WILL_SUICIDE |     \
    AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SEQUENCE_SWITCHING

#define HIKER_INFO                                              \
    .trainerClass = TRAINER_CLASS_HIKER,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_HIKER                        

#define NINJA_BOY_INFO                                          \
    .trainerClass = TRAINER_CLASS_NINJA_BOY,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_NINJA_BOY          

#define RUNNING_TRIATHLETE_M_INFO                               \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M

#define RUNNING_TRIATHLETE_F_INFO                               \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F

#define CYCLING_TRIATHLETE_M_INFO                               \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M

#define CYCLING_TRIATHLETE_F_INFO                               \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F

#define SWIMMING_TRIATHLETE_M_INFO                              \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M

#define SWIMMING_TRIATHLETE_F_INFO                              \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F

#define BIRD_KEEPER_INFO                                        \
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_BIRD_KEEPER

#define BATTLE_GIRL_INFO                                        \
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_BATTLE_GIRL

#define PSYCHIC_M_INFO                                          \
    .trainerClass = TRAINER_CLASS_PSYCHIC,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_PSYCHIC_M

#define PSYCHIC_F_INFO                                          \
    .trainerClass = TRAINER_CLASS_PSYCHIC,                      \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_PSYCHIC_F

#define BEAUTY_INFO                                             \
    .trainerClass = TRAINER_CLASS_BEAUTY,                       \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_BEAUTY

#define POKEFAN_F_INFO                                          \
    .trainerClass = TRAINER_CLASS_POKEFAN,                      \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_POKEFAN_F

#define POKEFAN_M_INFO                                          \
    .trainerClass = TRAINER_CLASS_POKEFAN,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_POKEFAN_M

#define GENTLEMAN_INFO                                          \
    .trainerClass = TRAINER_CLASS_GENTLEMAN,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,      \
    .trainerPic = TRAINER_PIC_GENTLEMAN

#define ENTHUSIAST_M_INFO                                       \
    .trainerClass = TRAINER_CLASS_ENTHUSIAST,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_AFICIONADO_M,                     \
    MOREBP

#define ENTHUSIAST_F_INFO                                       \
    .trainerClass = TRAINER_CLASS_ENTHUSIAST,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_AFICIONADO_F,                     \
    MOREBP

#define OLD_COUPLE_INFO                                         \
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_OLD_COUPLE,                       \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define PKMN_RANGER_M_INFO                                      \
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M

#define PKMN_RANGER_F_INFO                                      \
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F

#define RUIN_MANIAC_INFO                                        \
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_RUIN_MANIAC

#define PICNICKER_INFO                                          \
    .trainerClass = TRAINER_CLASS_PICNICKER,                    \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_PICNICKER

#define KINDLER_INFO                                            \
    .trainerClass = TRAINER_CLASS_KINDLER,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_KINDLER

#define PARASOL_LADY_INFO                                       \
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,                 \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_PARASOL_LADY

#define HEX_MANIAC_INFO                                         \
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_HEX_MANIAC

#define BUG_MANIAC_INFO                                         \
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_BUG_MANIAC

#define PKMN_BREEDER_F_INFO                                     \
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,                 \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F

#define PKMN_BREEDER_M_INFO                                     \
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,                 \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M

#define POKEMANIAC_INFO                                         \
    .trainerClass = TRAINER_CLASS_POKEMANIAC,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_POKEMANIAC

#define TWINS_INFO                                              \
    .trainerClass = TRAINER_CLASS_TWINS,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_TWINS,                            \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define SWIMMER_M_INFO                                          \
    .trainerClass = TRAINER_CLASS_SWIMMER_M,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMER_M

#define SWIMMER_F_INFO                                          \
    .trainerClass = TRAINER_CLASS_SWIMMER_F,                    \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMER_F

#define COOLTRAINER_M_INFO                                      \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_COOLTRAINER_M


#define COOLTRAINER_F_INFO                                      \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_COOLTRAINER_F

#define GUITARIST_INFO                                          \
    .trainerClass = TRAINER_CLASS_GUITARIST,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_GUITARIST

#define YOUNG_COUPLE_INFO                                       \
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,                 \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,                     \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define RICH_BOY_INFO                                           \
    .trainerClass = TRAINER_CLASS_RICH_BOY,                     \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,      \
    .trainerPic = TRAINER_PIC_RICH_BOY

#define SR_AND_JR_INFO                                          \
    .trainerClass = TRAINER_CLASS_SR_AND_JR,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_SR_AND_JR,                        \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define AROMA_LADY_INFO                                         \
    .trainerClass = TRAINER_CLASS_AROMA_LADY,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_AROMA_LADY

#define EXPERT_M_INFO                                           \
    .trainerClass = TRAINER_CLASS_EXPERT,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_EXPERT_M

#define EXPERT_F_INFO                                           \
    .trainerClass = TRAINER_CLASS_EXPERT,                       \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_EXPERT_F

#define SCIENTIST_INFO                                          \
    .trainerClass = TRAINER_CLASS_SCIENTIST,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_SCIENTIST

#define GEN4_SWIMMER_INFO                                       \
    .trainerClass = TRAINER_CLASS_SWIMMER_F,                    \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_GEN4_SWIMMER_F

#define SAILOR_INFO                                             \
    .trainerClass = TRAINER_CLASS_SAILOR,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_SAILOR

#define COLLECTOR_INFO                                          \
    .trainerClass = TRAINER_CLASS_COLLECTOR,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_COLLECTOR

#define SWIMMERS_INFO                                           \
    .trainerClass = TRAINER_CLASS_SWIMMERS,                     \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMERS,                         \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

const struct Trainer gTrainers[TRAINERS_COUNT] =
{
    [TRAINER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        .partySize = 0,
        .party = NULL,
    },

#if TESTING
    [TRAINER_BROTHER_1_PEARLWOOD] = { LEAF_INFO },
    [TRAINER_BROTHER_2_ROUTE28] = { LEAF_INFO },
    [TRAINER_BROTHER_3_ROUTE28] = { LEAF_INFO },
    [TRAINER_BROTHER_4_ROUTE28] = { LEAF_INFO },
    [TRAINER_BROTHER_5_FISHINGVILLAGE] = { LEAF_INFO },
    [TRAINER_BROTHER_6_ROUTE20] = { LEAF_INFO },
    [TRAINER_UNUSED_7_] = { LEAF_INFO },
    [TRAINER_UNUSED_8_] = { LEAF_INFO },
    [TRAINER_UNUSED_9_] = { LEAF_INFO },
    [TRAINER_UNUSED_10_] = { LEAF_INFO },
    [TRAINER_UNUSED_11_] = { LEAF_INFO },
    [TRAINER_UNUSED_12_] = { LEAF_INFO },
    [TRAINER_UNUSED_13_] = { LEAF_INFO },
    [TRAINER_UNUSED_14_] = { LEAF_INFO },
#else
    [TRAINER_BROTHER_1_PEARLWOOD] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother1_Bulbasaur),
        .partyGrass = sParty_Brother1_Bulbasaur,
        .partyFire = sParty_Brother1_Charmander,
        .partyWater = sParty_Brother1_Squirtle,
    },

    [TRAINER_BROTHER_2_ROUTE28] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother2_Bulbasaur),
        .partyGrass = sParty_Brother2_Bulbasaur,
        .partyFire = sParty_Brother2_Charmander,
        .partyWater = sParty_Brother2_Squirtle,
    },

    [TRAINER_BROTHER_3_ROUTE28] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother3_Bulbasaur),
        .partyGrass = sParty_Brother3_Bulbasaur,
        .partyFire = sParty_Brother3_Charmander,
        .partyWater = sParty_Brother3_Squirtle,
    },

    [TRAINER_BROTHER_4_ROUTE28] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .items = {ITEM_SUPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother4_Bulbasaur),
        .partyGrass = sParty_Brother4_Bulbasaur,
        .partyFire = sParty_Brother4_Charmander,
        .partyWater = sParty_Brother4_Squirtle,
    },

    [TRAINER_BROTHER_5_FISHINGVILLAGE] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .items = {ITEM_HYPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother5_Bulbasaur),
        .partyGrass = sParty_Brother5_Bulbasaur,
        .partyFire = sParty_Brother5_Charmander,
        .partyWater = sParty_Brother5_Squirtle,
    },

    [TRAINER_BROTHER_6_ROUTE20] =
    {
        BROTHER_INFO,
        ADVANCED_AI,
        .items = {ITEM_HYPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother6_Bulbasaur),
        .partyGrass = sParty_Brother6_Bulbasaur,
        .partyFire = sParty_Brother6_Charmander,
        .partyWater = sParty_Brother6_Squirtle,
    },

    [TRAINER_UNUSED_7_] =
    {},

    [TRAINER_UNUSED_8_] =
    {},

    [TRAINER_UNUSED_9_] =
    {},

    [TRAINER_UNUSED_10_] =
    {},

    [TRAINER_UNUSED_11_] =
    {},

    [TRAINER_UNUSED_12_] =
    {},

    [TRAINER_UNUSED_13_] =
    {},

    [TRAINER_UNUSED_14_] =
    {},
#endif

    [TRAINER_UNUSED_15_] =
    {},

    [TRAINER_R1_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Calvin"),
        TRAINER_PARTY(sParty_GruntRusturfTunnel),
    },
    [TRAINER_R1_FISHER] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Phil"),
        TRAINER_PARTY(sParty_GruntWeatherInst1),
    },
    [TRAINER_R1_BUG_CATCHER] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .trainerName = _("Dave"),
        TRAINER_PARTY(sParty_GruntWeatherInst2),
    },
    [TRAINER_R1_TUBER] =
    {
        TUBER_F_INFO,
        DUMB_AI,
        .trainerName = _("Lola"),
        TRAINER_PARTY(sParty_GruntWeatherInst3),
    },
    [TRAINER_R1_COOLTRAINER] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Tom"),
        .items = {ITEM_POTION},
        TRAINER_PARTY(sParty_GruntMuseum1),
    },
    [TRAINER_R2_FISHER] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Andrew"),
        TRAINER_PARTY(sParty_GruntMuseum2),
    },
    [TRAINER_R2_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Tiana"),
        TRAINER_PARTY(sParty_GruntSpaceCenter1),
    },
    [TRAINER_R2_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        DUMB_AI,
        .trainerName = _("Zander"),
        TRAINER_PARTY(sParty_GruntMtPyre1),
    },
    [TRAINER_R2_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Billy"),
        TRAINER_PARTY(sParty_GruntMtPyre2),
    },
    [TRAINER_R2_SCHOOL_KID_F] =
    {
        SCHOOL_KID_F_INFO,
        DUMB_AI,
        .trainerName = _("Karen"),
        TRAINER_PARTY(sParty_GruntMtPyre3),
    },
    [TRAINER_WW_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .trainerName = _("Trevor"),
        TRAINER_PARTY(sParty_GruntWeatherInst4),
    },
    [TRAINER_WW_LADY] =
    {
        LADY_INFO,
        DUMB_AI,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE},
        TRAINER_PARTY(sParty_GruntAquaHideout5),
    },
    [TRAINER_WW_BUGCATCHER_2] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .trainerName = _("Rick"),
        TRAINER_PARTY(sParty_GruntAquaHideout6),
    },

    [TRAINER_WW_CAMPER] =
    {
        CAMPER_INFO,
        DUMB_AI,
        .trainerName = _("Drew"),
        TRAINER_PARTY(sParty_TRAINER_WW_CAMPER),
    },

    [TRAINER_WW_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Haley"),
        TRAINER_PARTY(sParty_Matt),
    },

    [TRAINER_WW_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Josh"),
        TRAINER_PARTY(sParty_Zander),
    },

    [TRAINER_WW_ACE_TRAINER] =
    {
        BW_ACE_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Whitney"),
        .items = {ITEM_SUPER_POTION},
        TRAINER_PARTY(sParty_ShellyWeatherInstitute),
    },

    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
        TEAM_ROCKET_M_INFO,
        DUMB_AI,
        TRAINER_PARTY(sParty_ShellySeafloorCavern),
    },

    [TRAINER_SCHOOLHALL_1] =
    {
        SCHOOL_KID_F_INFO,
        .trainerName = _("Robin"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_BATON_PASS,
        TRAINER_PARTY(sParty_Archie),
    },

    [TRAINER_SCHOOLHALL_2] =
    {
        SCHOOL_KID_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Jerry"),
        TRAINER_PARTY(sParty_Leah),
    },

    [TRAINER_SCHOOLHALL_3] =
    {
        SCHOOL_KID_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Ted"),
        TRAINER_PARTY(sParty_Daisy),
    },

    [TRAINER_SCHOOLHALL_4] =
    {
        SCHOOL_KID_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Vicky"),
        TRAINER_PARTY(sParty_Rose1),
    },

    [TRAINER_EV_TRAINING_HP] =
    {
        EV_NURSE_INFO,
        TRAINER_PARTY(sParty_Felix),
    },
    [TRAINER_EV_TRAINING_ATK] =
    {
        EV_NURSE_INFO,
        TRAINER_PARTY(sParty_Violet),
    },
    [TRAINER_EV_TRAINING_DEF] =
    {
        EV_NURSE_INFO,
        TRAINER_PARTY(sParty_Rose2),
    },
    [TRAINER_EV_TRAINING_SPATK] =
    {
        EV_NURSE_INFO,
        TRAINER_PARTY(sParty_Rose3),
    },
    [TRAINER_EV_TRAINING_SPDEF] =
    {
        EV_NURSE_INFO,
        TRAINER_PARTY(sParty_Rose4),
    },
    [TRAINER_EV_TRAINING_SPEED] =
    {
        EV_NURSE_INFO,
        TRAINER_PARTY(sParty_Rose5),
    },
    [TRAINER_EXPBOT_1] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_Dusty1),
    },
    [TRAINER_CHIP] =
    {
        BUG_MANIAC_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Brent"),
        TRAINER_PARTY(sParty_Chip),
    },
    [TRAINER_FOSTER] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Yasu"),
        TRAINER_PARTY(sParty_Foster),
    },
    [TRAINER_DUSTY_2] =
    {
        LASS_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Janice"),
        TRAINER_PARTY(sParty_Dusty2),
    },
    [TRAINER_DUSTY_3] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Joey"),
        TRAINER_PARTY(sParty_Dusty3),
    },
    [TRAINER_DUSTY_4] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Jack"),
        TRAINER_PARTY(sParty_Dusty4),
    },
    [TRAINER_DUSTY_5] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Jeremy"),
        TRAINER_PARTY(sParty_Dusty5),
    },
    [TRAINER_LEADER_AARON] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_AARON,
        .trainerName = _("Aaron"),
        .items = {ITEM_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_BUG,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_GabbyAndTy1),
    },
    [TRAINER_EXPBOT_2] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_GabbyAndTy2),
    },
    [TRAINER_R4_HIKER] =
    {
        HIKER_INFO,
        DUMB_AI,
        .trainerName = _("Flint"),
        TRAINER_PARTY(sParty_GabbyAndTy3),
    },
    [TRAINER_UNUSED_54_] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Sydney"),
        TRAINER_PARTY(sParty_GabbyAndTy4),
    },
    [TRAINER_R4_POKEMANIAC] =
    {
        POKEMANIAC_INFO,
        DUMB_AI,
        .trainerName = _("Ross"),
        TRAINER_PARTY(sParty_GabbyAndTy5),
    },
    [TRAINER_R4_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .trainerName = _("Lewis"),
        TRAINER_PARTY(sParty_GabbyAndTy6),
    },
    [TRAINER_R4_TWINS] =
    {
        TWINS_INFO,
        DUMB_AI,
        .trainerName = _("Gina & Mia"),
        TRAINER_PARTY(sParty_Lola1),
    },
    [TRAINER_R16_TR1_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Howard"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR1_SWIMMER_M),
    },
    [TRAINER_R4_TRIATHLETE] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        DUMB_AI,
        .trainerName = _("Ashley"),
        TRAINER_PARTY(sParty_Gwen),
    },
    [TRAINER_R4_CAMPER] =
    {
        CAMPER_INFO,
        DUMB_AI,
        .trainerName = _("Vincent"),
        TRAINER_PARTY(sParty_Lola2),
    },
    [TRAINER_R4_COOL_F] =
    {
        BATTLE_GIRL_INFO,
        DUMB_AI,
        .trainerName = _("Serena"),
        TRAINER_PARTY(sParty_Lola3),
    },
    [TRAINER_R4_COOL_M] =
    {
        COOLTRAINER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Marcus"),
        TRAINER_PARTY(sParty_Lola4),
    },
    [TRAINER_R4_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        DUMB_AI,
        .trainerName = _("Cole"),
        TRAINER_PARTY(sParty_Lola5),
    },
    [TRAINER_R4_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Zack"),
        TRAINER_PARTY(sParty_Ricky1),
    },
    [TRAINER_R4_BIRDKEEPER_2] =
    {
        BIRD_KEEPER_INFO,
        DUMB_AI,
        .trainerName = _("Simon"),
        TRAINER_PARTY(sParty_Simon),
    },
    [TRAINER_R4_DOUBLE_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Rose"),
        TRAINER_PARTY(sParty_Charlie),
    },
    [TRAINER_R4_DOUBLE_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Duncan"),
        TRAINER_PARTY(sParty_Ricky2),
    },
    [TRAINER_R4_TRIATHLETE_2] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        DUMB_AI,
        .trainerName = _("Hannah"),
        TRAINER_PARTY(sParty_Ricky3),
    },
    [TRAINER_RICKY_4] =
    {
        TEAM_ROCKET_M_INFO,
        DUMB_AI,
        TRAINER_PARTY(sParty_Ricky4),
    },
    [TRAINER_RICKY_5] =
    {
        TEAM_ROCKET_F_INFO,
        DUMB_AI,
        TRAINER_PARTY(sParty_Ricky5),
    },
    [TRAINER_RANDALL] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_Randall),
    },
    [TRAINER_PARKER] =
    {
        COOLTRAINER_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Parker"),
        TRAINER_PARTY(sParty_Parker),
    },
    [TRAINER_GEORGE] =
    {
        GUITARIST_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("George"),
        TRAINER_PARTY(sParty_George),
    },
    [TRAINER_BERKE] =
    {
        PKMN_BREEDER_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Alice"),
        TRAINER_PARTY(sParty_Berke),
    },
    [TRAINER_BRAXTON] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Braxton"),
        TRAINER_PARTY(sParty_Braxton),
    },
    [TRAINER_VINCENT] =
    {
        LASS_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Anya"),
        TRAINER_PARTY(sParty_Vincent),
    },
    [TRAINER_LEROY] =
    {
        GUITARIST_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Leroy"),
        TRAINER_PARTY(sParty_Leroy),
    },
    [TRAINER_WILTON_1] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Emma"),
        TRAINER_PARTY(sParty_Wilton1),
    },
    [TRAINER_EDGAR] =
    {
        PKMN_BREEDER_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Sofia"),
        TRAINER_PARTY(sParty_Edgar),
    },
    [TRAINER_ALBERT] =
    {
        SCHOOL_KID_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Avery"),
        TRAINER_PARTY(sParty_Albert),
    },
    [TRAINER_SAMUEL] =
    {
        TWINS_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Teri & Tia"),
        TRAINER_PARTY(sParty_Samuel),
    },
    [TRAINER_VITO] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Vito"),
        TRAINER_PARTY(sParty_Vito),
    },
    [TRAINER_OWEN] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Owen"),
        TRAINER_PARTY(sParty_Owen),
    },
    [TRAINER_WILTON_2] =
    {
        LASS_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Naomi"),
        TRAINER_PARTY(sParty_Wilton2),
    },
    [TRAINER_WILTON_3] =
    {
        LASS_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Ruby"),
        TRAINER_PARTY(sParty_Wilton3),
    },
    [TRAINER_WILTON_4] =
    {
        SCHOOL_KID_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Donald"),
        TRAINER_PARTY(sParty_Wilton4),
    },
    [TRAINER_WILTON_5] =
    {
        GUITARIST_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Wilton"),
        TRAINER_PARTY(sParty_Wilton5),
    },
    [TRAINER_WARREN] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Warren"),
        TRAINER_PARTY(sParty_Warren),
    },
    [TRAINER_LEADER_VOLKNER] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("Volkner"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_ELECTRIC,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_Mary),
    },

    [TRAINER_WPV_TR1_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Daniel"),
        TRAINER_PARTY(sParty_WpvTr1Birdkeeper),
    },

    [TRAINER_WPV_TR2_TRIATH] =
    {
        RUNNING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Richard"),
        TRAINER_PARTY(sParty_WpvTr2Triath),
    },

    [TRAINER_WPV_TR3_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Elizabeth"),
        TRAINER_PARTY(sParty_WpvTr3Battlegirl),
    },

    [TRAINER_WPV_TR4_CAMPER] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Samantha"),
        TRAINER_PARTY(sParty_WpvTr4Camper),
    },

    [TRAINER_WPV_TR5_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Matthew"),
        TRAINER_PARTY(sParty_WpvTr5Birdkeeper),
    },

    [TRAINER_WPV_TR6_MANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Rodney"),
        TRAINER_PARTY(sParty_WpvTr6Maniac),
    },

    [TRAINER_WPV_TR7_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Cameron"),
        TRAINER_PARTY(sParty_WpvTr7Birdkeeper),
    },

    [TRAINER_WPV_TR8_NINJABOY] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Eli"),
        TRAINER_PARTY(sParty_WpvTr8Ninjaboy),
    },

    [TRAINER_WPV_TR9_LASS] =
    {
        LASS_INFO,
        BASIC_AI,
        .trainerName = _("Jennifer"),
        TRAINER_PARTY(sParty_WpvTr9Lass),
    },

    [TRAINER_WPV_TR10_TRIATH] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Chloe"),
        TRAINER_PARTY(sParty_WpvTr10Triath),
    },

    [TRAINER_WPV_TR11_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Nicholas"),
        TRAINER_PARTY(sParty_WpvTr11Birdkeeper),
    },

    [TRAINER_WPV_TR12_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Camille"),
        TRAINER_PARTY(sParty_WpvTr12Battlegirl),
    },

    [TRAINER_WPV_TR13_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Jonas"),
        TRAINER_PARTY(sParty_WpvTr13Birdkeeper),
    },

    [TRAINER_WPV_TR14_SKYLA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("Skyla"),
        .mugshotColor = MUGSHOT_COLOR_FLYING,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_WpvTr14Skyla),
    },

    [TRAINER_R28_TR1_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        .trainerName = _("Dylan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_R28_Tr1_BugCatcher),
    },

    [TRAINER_R28_TR2_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Bruce"),
        TRAINER_PARTY(sParty_R28_Tr2_Hiker),
    },

    [TRAINER_R28_TR3_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Grant"),
        TRAINER_PARTY(sParty_R28_Tr3_NinjaBoy),
    },

    [TRAINER_R28_TR4_PSYCHIC] =
    {
        PSYCHIC_M_INFO,
        BASIC_AI,
        .trainerName = _("Joseph"),
        TRAINER_PARTY(sParty_R28_Tr4_Psychic),
    },

    [TRAINER_R5_TR1_FISHER] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Don"),
        TRAINER_PARTY(sParty_R5Tr1_Fisher),
    },

    [TRAINER_R5_TR2_BEAUTY] =
    {
        BEAUTY_INFO,
        DUMB_AI,
        .trainerName = _("Natasha"),
        TRAINER_PARTY(sParty_R5Tr2_Beauty),
    },

    [TRAINER_R5_TR3_YOUNGCOUPLE] =
    {
        YOUNG_COUPLE_INFO,
        BASIC_AI,
        .trainerName = _("Ella & Evan"),
        TRAINER_PARTY(sParty_R5Tr3_YoungCouple),
    },

    [TRAINER_R5_TR4_LASS1] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Valerie"),
        TRAINER_PARTY(sParty_R5Tr4_Lass1),
    },

    [TRAINER_R5_TR5_POKEFAN_F] =
    {
        POKEFAN_F_INFO,
        BASIC_AI,
        .trainerName = _("Carol"),
        TRAINER_PARTY(sParty_R5Tr5_PokeFanF),
    },

    [TRAINER_R5_TR6_LASS2] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Vera"),
        TRAINER_PARTY(sParty_R5Tr6_Lass2),
    },

    [TRAINER_R5_TR7_GENTLEMAN] =
    {
        GENTLEMAN_INFO,
        BASIC_AI,
        .trainerName = _("Sebastian"),
        TRAINER_PARTY(sParty_R5Tr7_Gentleman),
    },

    [TRAINER_R5_TR8_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Marty"),
        TRAINER_PARTY(sParty_R5Tr8_Youngster),
    },

    [TRAINER_R5_TR9_TRIATHLETE] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Sara"),
        TRAINER_PARTY(sParty_R5Tr9_Triathlete),
    },

    [TRAINER_R5_TR10_RICHBOY] =
    {
        RICH_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Tobias"),
        TRAINER_PARTY(sParty_R5Tr10_RichBoy),
    },

    [TRAINER_R5_TR11_MAN_5] =
    {
        KINDLER_INFO,
        .trainerName = _("Kurt"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_R5Tr11_Man5),
    },

    [TRAINER_R5_TR12_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        .trainerName = _("Bill"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SEQUENCE_SWITCHING, 
        TRAINER_PARTY(sParty_R5Tr12_BugCatcher),
    },

    [TRAINER_R5_TR13_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Kenji"),
        TRAINER_PARTY(sParty_R5Tr13_NinjaBoy),
    },

    [TRAINER_R5_TR14_HIKER] =
    {
        HIKER_INFO,
        .trainerName = _("Paul"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_R5Tr14_Hiker),
    },

    [TRAINER_R5_TR15_COOLTRAINER] =
    {
        BW_ACE_M_INFO,
        .trainerName = _("Alex"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES,
        TRAINER_PARTY(sParty_R5Tr15_CoolTrainer),
    },

    [TRAINER_R6_TR1_RANGER_M] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Lawrence"),
        TRAINER_PARTY(sParty_R6Tr1_RangerM),
    },

    [TRAINER_R16_TR2_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Melissa"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR2_SWIMMER_F),
    },

    [TRAINER_R6_TR3_CAMPER_F] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Sheila"),
        TRAINER_PARTY(sParty_R6Tr3_CamperF),
    },

    [TRAINER_R16_TR12_NINJABOY2] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Fabian"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR12_NINJABOY2),
    },

    [TRAINER_R6_TR5_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Randy"),
        TRAINER_PARTY(sParty_R6Tr5_Hiker),
    },

    [TRAINER_R6_TR6_CAMPER_M2] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Conner"),
        TRAINER_PARTY(sParty_R6Tr6_CamperM2),
    },

    [TRAINER_R6_TR7_KINDLER] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .trainerName = _("Erick"),
        TRAINER_PARTY(sParty_R6Tr7_Kindler),
    },

    [TRAINER_R8_TR1_PARASOLLADY] =
    {
        PARASOL_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Genna"),
        TRAINER_PARTY(sParty_R8Tr1_ParasolLady),
    },

    [TRAINER_R8_TR2_SRJR] =
    {
        SR_AND_JR_INFO,
        BASIC_AI,
        .trainerName = _("Kate & Joy"),
        TRAINER_PARTY(sParty_R8Tr2_SrJr),
    },

    [TRAINER_R8_TR3_AROMALADY] =
    {
        AROMA_LADY_INFO,
        BASIC_AI,
        .trainerName = _("Jessica"),
        TRAINER_PARTY(sParty_R8Tr3_AromaLady),
    },

    [TRAINER_R8_TR4_YOUNGSTER] =
    {
        SCHOOL_KID_M_INFO,
        DUMB_AI,
        .trainerName = _("Lucas"),
        TRAINER_PARTY(sParty_R8Tr4_Youngster),
    },

    [TRAINER_R8_TR5_PSYCHIC_F] =
    {
        PSYCHIC_F_INFO,
        BASIC_AI,
        .trainerName = _("Briony"),
        TRAINER_PARTY(sParty_R8Tr5_PsychicF),
    },

    [TRAINER_R8_TR6_ENTHUSIAST] =
    {
        ENTHUSIAST_M_INFO,
        BASIC_AI,
        .trainerName = _("Henry"),
        TRAINER_PARTY(sParty_R8Tr6_CamperM),
    },

    [TRAINER_R8_TR7_TRIATHLETE_M] =
    {
        RUNNING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Winston"),
        TRAINER_PARTY(sParty_R8Tr7_TriathleteM),
    },

    [TRAINER_R8_TR8_GENTLEMAN] =
    {
        GENTLEMAN_INFO,
        BASIC_AI,
        .trainerName = _("Phileas"),
        TRAINER_PARTY(sParty_R8Tr8_Gentleman),
    },

    [TRAINER_R8_TR9_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Garret"),
        TRAINER_PARTY(sParty_R8Tr9_Hiker),
    },

    [TRAINER_R8_TR10_OLDCOUPLE] =
    {
        OLD_COUPLE_INFO,
        BASIC_AI,
        .trainerName = _("John & Jay"),
        TRAINER_PARTY(sParty_R8Tr10_OldCouple),
    },

    [TRAINER_R8_TR11_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        .trainerName = _("Martin"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_R8Tr11_BirdKeeper),
    },

    [TRAINER_SHORESLATE_NURSE] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_Shoreslate_Nurse),
    },

    [TRAINER_DC1F_ROCKET_1] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC1F_Rocket1),
    },

    [TRAINER_DC1F_ROCKET_2] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC1F_Rocket2),
    },

    [TRAINER_DC_BASEROCKET_1] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC_BaseRocket1),
    },

    [TRAINER_DC_BASEROCKET_2] =
    {
        TEAM_ROCKET_F_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC_BaseRocket2),
    },

    [TRAINER_DC_BASEROCKET_3] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC_BaseRocket3),
    },

    [TRAINER_DC_BASEROCKET_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("Scientist"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_DC_BaseRocket4),
    },

    [TRAINER_DC2F_ROCKET_1] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC2F_Rocket1),
    },

    [TRAINER_DC2F_ROCKET_2] =
    {
        TEAM_ROCKET_F_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC2F_Rocket2),
    },

    [TRAINER_DC2F_ROCKET_3] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC2F_Rocket3),
    },

    [TRAINER_DC2F_ROCKET_4] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC2F_Rocket4),
    },

    [TRAINER_DC2F_ROCKET_5] =
    {
        TEAM_ROCKET_F_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC2F_Rocket5),
    },

    [TRAINER_DC3F_ROCKET_1] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_DC3F_Rocket1),
    },

    [TRAINER_DC3F_ROCKET_PROTON] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .trainerName = _("Proton"),
        .items = {ITEM_SUPER_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_DC3F_Rocket_Proton),
    },

    [TRAINER_SHORESLATE_ROCKET] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_Shoreslate_Rocket),
    },

    [TRAINER_DESERT_TR1_CAMPER] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Jerome"),
        TRAINER_PARTY(sParty_DesertTr1_Camper),
    },

    [TRAINER_DESERT_TR2_CAMPER2] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Smith"),
        TRAINER_PARTY(sParty_DesertTr2_Camper2),
    },

    [TRAINER_DESERT_TR3_PICNICKER] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Aria"),
        TRAINER_PARTY(sParty_DesertTr3_Picnicker),
    },

    [TRAINER_DESERT_TR4_PICNICKER2] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Clarissa"),
        TRAINER_PARTY(sParty_DesertTr4_Picnicker2),
    },

    [TRAINER_DESERT_TR5_HIKER] =
    {
        RUIN_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Roland"),
        TRAINER_PARTY(sParty_DesertTr5_Hiker),
    },

    [TRAINER_DESERT_TR6_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Ryan"),
        TRAINER_PARTY(sParty_DesertTr6_Blackbelt),
    },

    [TRAINER_DESERT_TR7_PICNICKER3] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Nelly"),
        TRAINER_PARTY(sParty_DesertTr7_Picnicker3),
    },

    [TRAINER_DESERT_TR8_HIKER2] =
    {
        RUIN_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Stan"),
        TRAINER_PARTY(sParty_DesertTr8_Hiker2),
    },

    [TRAINER_DESERT_TR9_HIKER3] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Dean"),
        TRAINER_PARTY(sParty_DesertTr9_Hiker3),
    },

    [TRAINER_DESERT_TR10_FIREBREATHER] =
    {
        KINDLER_INFO,
        DUMB_AI,
        .trainerName = _("Brad"),
        TRAINER_PARTY(sParty_DesertTr10_Firebreather),
    },

    [TRAINER_DESERT_TR11_BLACKBELT2] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Steven"),
        TRAINER_PARTY(sParty_DesertTr11_Blackbelt2),
    },

    [TRAINER_DESERT_TR12_HIKER4] =
    {
        RUIN_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Herman"),
        TRAINER_PARTY(sParty_DesertTr12_Hiker4),
    },

    [TRAINER_DESERT_TR13_PSYCHIC_F] =
    {
        PSYCHIC_F_INFO,
        BASIC_AI,
        .trainerName = _("Wendy"),
        TRAINER_PARTY(sParty_DesertTr13_Psychic_F),
    },

    [TRAINER_DESERT_TR14_COOLTRAINER] =
    {
        BW_ACE_F_INFO,
        .trainerName = _("Olivia"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING,
        TRAINER_PARTY(sParty_DesertTr14_Cooltrainer),
    },

    [TRAINER_R7_TR1_CAMPER] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Franklin"),
        TRAINER_PARTY(sParty_Route7Tr1_Camper),
    },

    [TRAINER_R7_TR2_PICNICKER] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Gemma"),
        TRAINER_PARTY(sParty_Route7Tr2_Picnicker),
    },

    [TRAINER_UNUSED_172_] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Kazuma"),
        TRAINER_PARTY(sParty_Route7Tr3_Ninjaboy),
    },

    [TRAINER_R7_TR4_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Dudley"),
        TRAINER_PARTY(sParty_Route7Tr4_Birdkeeper),
    },

    [TRAINER_R7_TR5_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Nob"),
        TRAINER_PARTY(sParty_Route7Tr5_Blackbelt),
    },

    [TRAINER_R7_TR6_PICNICKER2] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Tina"),
        TRAINER_PARTY(sParty_Route7Tr6_Picnicker2),
    },

    [TRAINER_R7_TR7_FISHERMAN] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Tony"),
        TRAINER_PARTY(sParty_Route7Tr7_Fisherman),
    },

    [TRAINER_R7_TR8_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Clive"),
        TRAINER_PARTY(sParty_Route7Tr8_Hiker),
    },

    [TRAINER_R7_TR9_PARASOLLADY] =
    {
        PARASOL_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Fiona"),
        TRAINER_PARTY(sParty_Route7Tr9_Parasollady),
    },

    [TRAINER_R7_TR10_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Goro"),
        TRAINER_PARTY(sParty_Route7Tr10_NinjaBoy),
    },

    [TRAINER_MARIGORGE_NURSE] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_MarigorgeNurse),
    },

    [TRAINER_KAOLGYM_TR1_CAMPER1] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Mike"),
        TRAINER_PARTY(sParty_KG_Tr1_Camper1),
    },

    [TRAINER_KAOLGYM_TR2_PICNICKER1] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Sophie"),
        TRAINER_PARTY(sParty_KG_Tr2_Picnicker1),
    },

    [TRAINER_KAOLGYM_TR3_HIKER1] =
    {
        HIKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Ralph"),
        TRAINER_PARTY(sParty_KG_Tr3_Hiker1),
    },

    [TRAINER_KAOLGYM_TR4_CAMPER2] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Dan"),
        TRAINER_PARTY(sParty_KG_Tr4_Camper2),
    },

    [TRAINER_KAOLGYM_TR5_HIKER2] =
    {
        HIKER_INFO,
        .isGymTrainer = TRUE,
        .trainerName = _("Mark"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_KG_Tr5_Hiker2),
    },

    [TRAINER_KAOLGYM_TR6_HIKER3] =
    {
        HIKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Brett"),
        TRAINER_PARTY(sParty_KG_Tr6_Hiker3),
    },

    [TRAINER_KAOLGYM_TR7_PICNICKER2] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Mila"),
        TRAINER_PARTY(sParty_KG_Tr7_Picnicker2),
    },

    [TRAINER_KAOLGYM_TR8_CAMPER3] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Axel"),
        TRAINER_PARTY(sParty_KG_Tr8_Camper3),
    },

    [TRAINER_KAOLGYM_TR9_PICNICKER3] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Anna"),
        TRAINER_PARTY(sParty_KG_Tr9_Picnicker3),
    },

    [TRAINER_KAOLGYM_TR10_HIKER4] =
    {
        HIKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Kevin"),
        TRAINER_PARTY(sParty_KG_Tr10_Hiker4),
    },

    [TRAINER_KAOLGYM_CLAY] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CLAY,
        .trainerName = _("Clay"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_GROUND,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_KG_Clay),
    },

    [TRAINER_KM_TR1_PICNICKER] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Bella"),
        TRAINER_PARTY(sParty_KM_Tr1_Picnicker),
    },

    [TRAINER_KM_TR2_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Wyatt"),
        TRAINER_PARTY(sParty_KM_Tr2_Blackbelt),
    },

    [TRAINER_KM_TR3_CAMPER] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Ike"),
        TRAINER_PARTY(sParty_KM_Tr3_Camper),
    },

    [TRAINER_KM_TR4_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Wilson"),
        TRAINER_PARTY(sParty_KM_Tr4_Hiker),
    },

    [TRAINER_KM_TR5_HIKER] =
    {
        HIKER_INFO,
        .trainerName = _("Luke"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_KM_Tr5_Hiker),
    },

    [TRAINER_KM_TR6_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Isaac"),
        TRAINER_PARTY(sParty_KM_Tr6_Hiker),
    },

    [TRAINER_KM_TR7_CAMPER] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Caleb"),
        TRAINER_PARTY(sParty_KM_Tr7_Camper),
    },

    [TRAINER_KM_TR8_PICNICKER] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Maria"),
        TRAINER_PARTY(sParty_KM_Tr8_Picnicker),
    },

    [TRAINER_KM_TR9_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Koji"),
        TRAINER_PARTY(sParty_KM_Tr9_Blackbelt),
    },

    [TRAINER_KM_TR10_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Everett"),
        TRAINER_PARTY(sParty_KM_Tr10_Hiker),
    },

    [TRAINER_BUFFET_1] =
    {
        HEX_MANIAC_INFO,
        ADVANCED_AI,
        .trainerName = _("Tarja"),
        TRAINER_PARTY(sParty_BuffetTrainer1),
    },

    [TRAINER_BUFFET_2] =
    {
        GEN4_SWIMMER_INFO,
        ADVANCED_AI,
        .trainerName = _("Gwendolyn"),
        TRAINER_PARTY(sParty_BuffetTrainer2),
    },

    [TRAINER_BUFFET_3] =
    {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_ROCKER,
        .trainerName = _("Pan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_BuffetTrainer3),
    },

    [TRAINER_BUFFET_4] =
    {
        .trainerClass = TRAINER_CLASS_DANCER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("Anna"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_BuffetTrainer4),
    },

    [TRAINER_HOTEL_BIRDKEEPER] =
    {
        BEAUTY_INFO,
        .trainerName = _("Kiara"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES,
        TRAINER_PARTY(sParty_HotelBirdKeeper),
    },

    [TRAINER_HOTEL_KID1] =
    {
        TUBER_F_INFO,
        DUMB_AI,
        .trainerName = _("Lucy"),
        TRAINER_PARTY(sParty_HotelKid1),
    },

    [TRAINER_HOTEL_KID2] =
    {
        TUBER_M_INFO,
        DUMB_AI,
        .trainerName = _("Sam"),
        TRAINER_PARTY(sParty_HotelKid2),
    },

    [TRAINER_LEADER_KORRINA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KORRINA,
        .trainerName = _("Korrina"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_FIGHTING,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_LeaderKorrina),
    },

    [TRAINER_ROCKLIFFE_NURSE] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_RockliffeNurse),
    },

    [TRAINER_R11_TR1_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Sally"),
        TRAINER_PARTY(sParty_Route11Tr1_Lass),
    },

    [TRAINER_R11_TR2_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Rudy"),
        TRAINER_PARTY(sParty_Route11Tr2_Birdkeeper),
    },

    [TRAINER_R11_TR3_BUGCATCHER] =
    {
        BUG_MANIAC_INFO,
        DUMB_AI,
        .trainerName = _("Larry"),
        TRAINER_PARTY(sParty_Route11Tr3_Bugcatcher),
    },

    [TRAINER_R11_TR4_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Takashi"),
        TRAINER_PARTY(sParty_Route11Tr4_Ninjaboy),
    },

    [TRAINER_R11_TR5_POKEMANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Justin"),
        TRAINER_PARTY(sParty_Route11Tr5_Pokemaniac),
    },

    [TRAINER_R11_TR6_TRIATHLETE_F] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Autumn"),
        TRAINER_PARTY(sParty_Route11Tr6_Triathlete_F),
    },

    [TRAINER_R11_TR7_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Ethan"),
        TRAINER_PARTY(sParty_Route11Tr7_Hiker),
    },

    [TRAINER_R11_TR8_NINJABOY_2] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Hideo"),
        TRAINER_PARTY(sParty_Route11Tr8_Ninjaboy_2),
    },

    [TRAINER_R11_TR9_NINJABOY_3] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Keigo"),
        TRAINER_PARTY(sParty_Route11Tr9_Ninjaboy_3),
    },

    [TRAINER_R11_TR10_CYCLER_M] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Gavin"),
        TRAINER_PARTY(sParty_Route11Tr10_Cycler_M),
    },

    [TRAINER_R11_TR11_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Cristian"),
        TRAINER_PARTY(sParty_Route11Tr11_Blackbelt),
    },

    [TRAINER_R11_TR12_EXPERT] =
    {
        EXPERT_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Timothy"),
        .items = {},
        TRAINER_PARTY(sParty_Route11Tr12_Expert),
    },

    [TRAINER_R11_TR13_PSYCHIC_F] =
    {
        PSYCHIC_F_INFO,
        BASIC_AI,
        .trainerName = _("Kayla"),
        TRAINER_PARTY(sParty_Route11Tr13_Psychic_F),
    },

    [TRAINER_R11_TR14_ACETRAINER_F] =
    {
        BW_ACE_F_INFO,
        .trainerName = _("Kathrine"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Route11Tr14_Acetrainer_F),
    },

    [TRAINER_UNUSED_225_] =
    {},

    [TRAINER_UNUSED_226_] =
    {},

    [TRAINER_UNUSED_227_] =
    {},

    [TRAINER_UNUSED_228_] =
    {},

    [TRAINER_UNUSED_229_] =
    {},

    [TRAINER_UNUSED_230_] =
    {},

    [TRAINER_UNUSED_231_] =
    {},

    [TRAINER_UNUSED_232_] =
    {},

    [TRAINER_UNUSED_233_] =
    {},

    [TRAINER_UNUSED_234_] =
    {},

    [TRAINER_UNUSED_235_] =
    {},

    [TRAINER_UNUSED_236_] =
    {},

    [TRAINER_R12_TR1_TRIATHLETE_F] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Claire"),
        TRAINER_PARTY(sParty_R12Tr1_Triath),
    },

    [TRAINER_R12_TR2_TRIATHLETE_M] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Doug"),
        TRAINER_PARTY(sParty_R12Tr2_Triath),
    },

    [TRAINER_R12_TR3_TRIATHLETE_F2] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Christina"),
        TRAINER_PARTY(sParty_R12Tr3_Triath),
    },

    [TRAINER_R12_TR4_TRIATHLETE_M2] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Eric"),
        TRAINER_PARTY(sParty_R12Tr4_Triath),
    },

    [TRAINER_R12_TR5_TRIATHLETE_M3] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Clark"),
        .items = {},
        TRAINER_PARTY(sParty_R12Tr5_Triath),
    },

    [TRAINER_R12_TR6_TRIATHLETE_F3] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Nora"),
        TRAINER_PARTY(sParty_R12Tr6_Triath),
    },

    [TRAINER_FROSTHEARTH_NURSE] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_FROSTHEARTH_NURSE),
    },

    [TRAINER_R16_TR5_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Henna"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR5_SWIMMER_F),
    },

    [TRAINER_R12_TR9_PSYCHIC_M] =
    {
        PSYCHIC_M_INFO,
        BASIC_AI,
        .trainerName = _("Cedric"),
        TRAINER_PARTY(sParty_R12Tr9_Psychic),
    },

    [TRAINER_R12_TR10_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Trent"),
        TRAINER_PARTY(sParty_R12Tr10_Hiker),
    },

    [TRAINER_R12_TR11_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Leah"),
        TRAINER_PARTY(sParty_R12Tr11_Lass),
    },

    [TRAINER_R12_TR12_BUGMANIAC] =
    {
        ENTHUSIAST_F_INFO,
        DUMB_AI,
        .trainerName = _("Vivian"),
        TRAINER_PARTY(sParty_R12Tr12_BugMan),
    },

    [TRAINER_R12_TR13_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Riley"),
        TRAINER_PARTY(sParty_R12Tr13_Ninja),
    },

    [TRAINER_SANDSTONE_NURSE] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_Sandstone_Nurse),
    },

    [TRAINER_R16_TR6_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Miranda"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR6_SWIMMER_F),
    },

    [TRAINER_R16_TR7_GUITARIST] =
    {
        GUITARIST_INFO,
        BASIC_AI,
        .trainerName = _("Marco"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR7_GUITARIST),
    },

    [TRAINER_R16_TR8_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Clayton"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR8_HIKER),
    },

    [TRAINER_R16_TR9_BEAUTY] =
    {
        BEAUTY_INFO,
        BASIC_AI,
        .trainerName = _("Vera"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR9_BEAUTY),
    },

    [TRAINER_FC_TR1_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Terry"),
        TRAINER_PARTY(sParty_FcTr1_Blackbelt),
    },

    [TRAINER_FC_TR2_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Hailey"),
        TRAINER_PARTY(sParty_FcTr2_Battlegirl),
    },

    [TRAINER_FC_TR3_CAMPER] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Barton"),
        TRAINER_PARTY(sParty_FcTr3_Camper),
    },

    [TRAINER_FC_TR4_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Gordon"),
        TRAINER_PARTY(sParty_FcTr4_Hiker),
    },

    [TRAINER_R14_TR1_RUNNING_F] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Penelope"),
        TRAINER_PARTY(sParty_R14Tr1_RunnerF),
    },

    [TRAINER_R14_TR2_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Walter"),
        TRAINER_PARTY(sParty_R14Tr2_Hiker),
    },
    [TRAINER_UNUSED_SIDNEY] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = _("SIDNEY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_Sidney),
    },
    [TRAINER_UNUSED_PHOEBE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("PHOEBE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Phoebe),
    },
    [TRAINER_UNUSED_GLACIA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .trainerName = _("GLACIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Glacia),
    },
    [TRAINER_UNUSED_DRAKE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .trainerName = _("DRAKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Drake),
    },

    [TRAINER_SANDGYM_TR1_CYCLISTM1] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Lloyd"),
        TRAINER_PARTY(sParty_SGTr1_CyclistM1),
    },

    [TRAINER_SANDGYM_TR2_CYCLISTF1] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Sophia"),
        TRAINER_PARTY(sParty_SGTr2_CyclistF1),
    },

    [TRAINER_SANDGYM_TR3_CYCLISTF2] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Jenna"),
        TRAINER_PARTY(sParty_SGTr3_CyclistF2),
    },

    [TRAINER_SANDGYM_TR4_CYCLISTM2] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Greg"),
        TRAINER_PARTY(sParty_SGTr4_CyclistM2),
    },

    [TRAINER_SANDGYM_TR5_CYCLISTF3] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Emilia"),
        TRAINER_PARTY(sParty_SGTr5_CyclistF3),
    },

    [TRAINER_SANDGYM_TR6_CYCLISTM3] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Dennis"),
        TRAINER_PARTY(sParty_SGTr6_CyclistM3),
    },

    [TRAINER_SANDGYM_TR7_CYCLISTM4] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Harry"),
        TRAINER_PARTY(sParty_SGTr7_CyclistM4),
    },

    [TRAINER_AT_2F_TR2_MAN3] =
    {
        COOLTRAINER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Liam"),
        TRAINER_PARTY(sParty_AT2F_Tr2_Man3),
    },

    [TRAINER_AT_2F_TR2_WOMAN5] =
    {
        COOLTRAINER_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Luna"),
        TRAINER_PARTY(sParty_AT2F_Tr2_Woman5),
    },

    [TRAINER_AT_2F_TR1_PSYCHIC] =
    {
        PSYCHIC_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Gerard"),
        TRAINER_PARTY(sParty_AT2F_Tr1_Psychic),
    },

    [TRAINER_AT_2F_TR1_MAN5] =
    {
        GUITARIST_INFO,
        ADVANCED_AI,
        .trainerName = _("Shaun"),
        TRAINER_PARTY(sParty_AT2F_Tr1_Man5),
    },

    [TRAINER_AT_3F_TR1_EXPERT_M] =
    {
        EXPERT_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Theodore"),
        TRAINER_PARTY(sParty_AT3F_Tr1_Expert_M),
    },

    [TRAINER_AT_3F_TR1_EXPERT_F] =
    {
        EXPERT_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Shelby"),
        TRAINER_PARTY(sParty_AT3F_Tr1_Expert_F),
    },

    [TRAINER_AT_3F_TR2_HEXMANIAC] =
    {
        HEX_MANIAC_INFO,
        ADVANCED_AI,
        .trainerName = _("Osanna"),
        TRAINER_PARTY(sParty_AT3F_Tr2_HexManiac),
    },

    [TRAINER_AT_3F_TR2_PSYCHICF] =
    {
        PSYCHIC_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Lynette"),
        TRAINER_PARTY(sParty_AT3F_Tr2_PsychicF),
    },

    [TRAINER_AT_4F_TR1_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        ADVANCED_AI,
        .trainerName = _("Junichi"),
        TRAINER_PARTY(sParty_AT4F_Tr1_BlackBelt),
    },

    [TRAINER_AT_4F_TR1_HEXMANIAC] =
    {
        HEX_MANIAC_INFO,
        ADVANCED_AI,
        .trainerName = _("Anina"),
        TRAINER_PARTY(sParty_AT4F_Tr1_HexManiac),
    },

    [TRAINER_AT_4F_TR2_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Isabella"),
        TRAINER_PARTY(sParty_AT4F_Tr2_Lass),
    },

    [TRAINER_AT_4F_TR2_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Timmy"),
        TRAINER_PARTY(sParty_AT4F_Tr2_Youngster),
    },

    [TRAINER_AT_4F_TR3_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        ADVANCED_AI,
        .trainerName = _("Andrea"),
        TRAINER_PARTY(sParty_AT4F_Tr3_BattleGirl),
    },

    [TRAINER_AT_4F_TR3_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        ADVANCED_AI,
        .trainerName = _("Roy"),
        TRAINER_PARTY(sParty_AT4F_Tr3_BlackBelt),
    },

    [TRAINER_AT_5F_COOLTRAINER_M] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Beckett"),
        TRAINER_PARTY(sParty_AT5F_CoolTrainer_M),
    },

    [TRAINER_AT_5F_COOLTRAINER_F] =
    {
        BW_ACE_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Jamie"),
        TRAINER_PARTY(sParty_AT5F_CoolTrainer_F),
    },

    [TRAINER_R14_TR3_PARASOLLADY] =
    {
        PARASOL_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Alexa"),
        TRAINER_PARTY(sParty_R14Tr3_ParasolLady),
    },

    [TRAINER_R14_TR4_FISHER] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Ernest"),
        TRAINER_PARTY(sParty_R14Tr4_FisherMan),
    },

    [TRAINER_R14_TR5_PARASOLLADY2] =
    {
        PARASOL_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Madeline"),
        TRAINER_PARTY(sParty_R14Tr5_ParasolLady),
    },

    [TRAINER_R14_TR6_NINJABOY] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Nick"),
        TRAINER_PARTY(sParty_R14Tr6_NinjaBoy),
    },

    [TRAINER_R14_TR7_ROCKER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("James"),
        TRAINER_PARTY(sParty_R14Tr7_Birdkeeper),
    },

    [TRAINER_R14_TR8_MANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Cooper"),
        TRAINER_PARTY(sParty_R14Tr8_Maniac),
    },

    [TRAINER_R15_TR1_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        .trainerName = _("Colton"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_R15Tr1_Birdkeeper),
    },

    [TRAINER_R15_TR2_RANGERF] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Ashlee"),
        TRAINER_PARTY(sParty_R15Tr2_RangerF),
    },

    [TRAINER_R15_TR3_RANGERM] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Miguel"),
        TRAINER_PARTY(sParty_R15Tr3_RangerM),
    },

    [TRAINER_R15_TR4_GENTLEMAN] =
    {
        GENTLEMAN_INFO,
        BASIC_AI,
        .trainerName = _("Robert"),
        TRAINER_PARTY(sParty_R15Tr4_Gentleman),
    },

    [TRAINER_R15_TR5_NINJABOY1] =
    {
        NINJA_BOY_INFO,
        .trainerName = _("Yoshi"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_R15Tr5_Ninjaboy),
    },

    [TRAINER_R15_TR6_NINJABOY2] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Saki"),
        TRAINER_PARTY(sParty_R15Tr6_Ninjaboy),
    },

    [TRAINER_R15_TR7_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        .trainerName = _("Tim"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_R15Tr7_Bugcatcher),
    },

    [TRAINER_R15_TR8_BUGCATCHER2] =
    {
        BUG_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Fernando"),
        TRAINER_PARTY(sParty_R15Tr8_Bugmaniac),
    },

    [TRAINER_R15_TR9_BEAUTY] =
    {
        BEAUTY_INFO,
        BASIC_AI,
        .trainerName = _("Isabel"),
        TRAINER_PARTY(sParty_R15Tr9_Beauty),
    },

    [TRAINER_R15_TR10_FISHER] =
    {
        FISHERMAN_INFO,
        ADVANCED_AI,
        .trainerName = _("Kenneth"),
        TRAINER_PARTY(sParty_R15Tr10_Fisherman),
    },

    [TRAINER_R15_ACETRAINER_M] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Camden"),
        TRAINER_PARTY(sParty_R15Tr11_AceM),
    },

    [TRAINER_R15_ACETRAINER_F] =
    {
        BW_ACE_F_INFO,
        .trainerName = _("Donny"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_HP_AWARE,
        TRAINER_PARTY(sParty_R15Tr11_AceF),
    },

    [TRAINER_R15_TR13_COOLTRAINER] =
    {
        COOLTRAINER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Jacob"),
        TRAINER_PARTY(sParty_R15Tr13_Cooltrainer),
    },

    [TRAINER_R15_TR14_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Kaitlin"),
        TRAINER_PARTY(sParty_R15Tr14_Lass),
    },

    [TRAINER_R15_TR15_SCIENTIST] =
    {
        SCIENTIST_INFO,
        BASIC_AI,
        .trainerName = _("Stephen"),
        TRAINER_PARTY(sParty_R15Tr15_Scientist),
    },

    [TRAINER_R15_TR16_AROMALADY] =
    {
        AROMA_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Daisy"),
        TRAINER_PARTY(sParty_R15Tr16_Aromalady),
    },

    [TRAINER_R15_TR17_NINJABOY3] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Ava"),
        TRAINER_PARTY(sParty_R15Tr17_RunnerF),
    },

    [TRAINER_R15_TR18_BERRYROCKET] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        TRAINER_PARTY(sParty_R15Tr18_RocketGrunt),
    },

    [TRAINER_R23_TR1_BREEDER_M] =
    {
        PKMN_BREEDER_M_INFO,
        .trainerName = _("Galen"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_TRAINER_R23_TR1_BREEDER_M),
    },

    [TRAINER_R23_TR2_MANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Shane"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR2_MANIAC),
    },

    [TRAINER_R23_TR3_TWINS] =
    {
        TWINS_INFO,
        DUMB_AI,
        .trainerName = _("Bella & Belle"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR3_TWINS),
    },

    [TRAINER_R23_TR4_BREEDER_F] =
    {
        PKMN_BREEDER_F_INFO,
        BASIC_AI,
        .trainerName = _("Brooke"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR4_BREEDER_F),
    },

    [TRAINER_R23_TR5_HEXMANIAC_1] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Patricia"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR5_HEXMANIAC_1),
    },

    [TRAINER_R23_TR6_PSYCHIC_M] =
    {
        PSYCHIC_M_INFO,
        BASIC_AI,
        .trainerName = _("Deandre"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR6_PSYCHIC_M),
    },

    [TRAINER_R23_TR7_HEXMANIAC_2] =
    {
        HEX_MANIAC_INFO,
        .trainerName = _("Melanie"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_TRAINER_R23_TR7_HEXMANIAC_2),
    },

    [TRAINER_R23_TR8_TRIATHLETE_F] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Jean"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR8_TRIATHLETE_F),
    },

    [TRAINER_R23_TR9_FISHERMAN] =
    {
        FISHERMAN_INFO,
        BASIC_AI,
        .trainerName = _("Preston"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR9_FISHERMAN),
    },

    [TRAINER_R23_TR10_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Helen"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR10_BATTLEGIRL),
    },

    [TRAINER_R23_TR11_NINJABOY] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Sasuke"),
        TRAINER_PARTY(sParty_TRAINER_R23_TR11_NINJABOY),
    },

    [TRAINER_R23_TR12_ACETRAINER] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Ben"),
        .items = {ITEM_HYPER_POTION},
        TRAINER_PARTY(sParty_TRAINER_R23_TR12_ACETRAINER),
    },

    [TRAINER_DRISLEDGE_NURSE] =
    {
        NURSE_INFO,
        TRAINER_PARTY(sParty_DRISLEDGE_NURSE),
    },

    [TRAINER_DRISLEDGEGYM_TRAINER1] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER1),
    },

    [TRAINER_DRISLEDGEGYM_TRAINER2] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER2),
    },

    [TRAINER_DRISLEDGEGYM_TRAINER3] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER3),
    },

    [TRAINER_DRISLEDGEGYM_TRAINER4] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER4),
    },

    [TRAINER_DRISLEDGEGYM_TRAINER5] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER5),
    },

    [TRAINER_DRISLEDGEGYM_TRAINER6] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER6),
    },

    [TRAINER_LEADER_ACEROLA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_ACEROLA,
        .trainerName = _("Acerola"),
        .items = {ITEM_FULL_RESTORE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_GHOST,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_TRAINER_LEADER_ACEROLA),
    },

    [TRAINER_LEADER_JASMINE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE |TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JASMINE,
        .trainerName = _("Jasmine"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_LeaderJasmine),
    },

    [TRAINER_LEADER_JASMINE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JASMINE,
        .trainerName = _("Jasmine"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_LeaderJasmine2),
    },
    [TRAINER_KASEN] =
    {
        .trainerClass = TRAINER_CLASS_KASEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_KASEN,
        .trainerName = _("Kasen"),
        .mugshotColor = MUGSHOT_COLOR_FLYING,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_Kasen),
    },
    [TRAINER_R3_TR1_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Ellen"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR1_SWIMMER_F),
    },
    [TRAINER_R3_TR2_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Floyd"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR2_SWIMMER_M),
    },
    [TRAINER_R3_TR3_SWIMMER_OLDSISTER] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Lila"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR3_SWIMMER_OLDSISTER),
    },
    [TRAINER_R3_TR4_TUBER] =
    {
        TUBER_M_INFO,
        DUMB_AI,
        .trainerName = _("Roy"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR4_TUBER),
    },
    [TRAINER_R3_TR5_FISHERMAN] =
    {
        FISHERMAN_INFO,
        BASIC_AI,
        .trainerName = _("Clancy"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR5_FISHERMAN),
    },
    [TRAINER_R3_TR6_LANDSWIMMER_1] =
    {
        GEN4_SWIMMER_INFO,
        BASIC_AI,
        .trainerName = _("Bernice"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR6_LANDSWIMMER_1),
    },
    [TRAINER_R3_TR7_LANDSWIMMER_2] =
    {
        GEN4_SWIMMER_INFO,
        BASIC_AI,
        .trainerName = _("Hilda"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR7_LANDSWIMMER_2),
    },
    [TRAINER_R3_TR8_SAILOR] =
    {
        SAILOR_INFO,
        BASIC_AI,
        .trainerName = _("Mick"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR8_SAILOR),
    },
    [TRAINER_R3_TR9_SWIMMER_M1] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Anthony"),
        .items = {},
        TRAINER_PARTY(sParty_TRAINER_R3_TR9_SWIMMER_M1),
    },
    [TRAINER_R3_TR10_SWIMMER_M2] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Samuel"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR10_SWIMMER_M2),
    },
    [TRAINER_R3_TR11_SWIMMER_F1] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Nina"),
        TRAINER_PARTY(sParty_TRAINER_R3_TR11_SWIMMER_F1),
    },
    [TRAINER_R9_TR1_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        .trainerName = _("Elliot"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_TRAINER_R9_TR1_SWIMMER_M),
    },
    [TRAINER_R9_TR2_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Francis"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR2_BLACKBELT),
    },
    [TRAINER_R9_TR3_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Dwayne"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR3_BIRDKEEPER),
    },
    [TRAINER_R9_TR4_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("April"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR4_BATTLEGIRL),
    },
    [TRAINER_R9_TR5_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Melody"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR5_SWIMMER_F),
    },
    [TRAINER_R9_TR6_FISHERMAN] =
    {
        FISHERMAN_INFO,
        BASIC_AI,
        .trainerName = _("Saul"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR6_FISHERMAN),
    },
    [TRAINER_R9_TR7_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Damon"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR7_HIKER),
    },

    [TRAINER_R9_TR8_COLLECTOR] =
    {
        COLLECTOR_INFO,
        BASIC_AI,
        .trainerName = _("Louis"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR8_COLLECTOR),
    },

    [TRAINER_R9_TR9_SWIMMER_M2] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Hector"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR9_SWIMMER_M2),
    },

    [TRAINER_R9_TR10_LANDSWIMMER] =
    {
        GEN4_SWIMMER_INFO,
        BASIC_AI,
        .trainerName = _("Carla"),
        TRAINER_PARTY(sParty_TRAINER_R9_TR10_LANDSWIMMER),
    },

    [TRAINER_R10_TR1_ACESWIMMER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_F_SWIMMER,
        .trainerName = _("Ida"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_TRAINER_R10_TR1_ACESWIMMER),
    },

    [TRAINER_R10_TR2_SWIMMER_F1] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Layla"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR2_SWIMMER_F1),
    },

    [TRAINER_R10_TR3_FISHERMAN] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Logan"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR3_FISHERMAN),
    },

    [TRAINER_R10_TR4_SWIMMER_M1] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Derek"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR4_SWIMMER_M1),
    },
    [TRAINER_R10_TR5_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Daisuke"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR5_BLACKBELT),
    },

    [TRAINER_R10_TR6_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Wright"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR6_HIKER),
    },

    [TRAINER_R10_TR7_SWIMMER_F2] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Coral"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR7_SWIMMER_F2),
    },

    [TRAINER_R10_TR8_SWIMMER_M2] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Kieran"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR8_SWIMMER_M2),
    },

    [TRAINER_R10_TR9_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Marissa"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR9_BATTLEGIRL),
    },

    [TRAINER_R10_TR10_TUBER_M] =
    {
        TUBER_M_INFO,
        DUMB_AI,
        .trainerName = _("Dillon"),
        TRAINER_PARTY(sParty_TRAINER_R10_TR10_TUBER_M),
    },

    [TRAINER_R16_TR10_NINJABOY] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Hokuto"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR10_NINJABOY),
    },

    [TRAINER_FACTORY_ROCKET_1] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_1),
    },

    [TRAINER_R16_TR11_EXPERT_F] =
    {
        EXPERT_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Bryn"),
        TRAINER_PARTY(sParty_TRAINER_R16_TR11_EXPERT_F),
    },

    [TRAINER_FACTORY_ROCKET_2] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_2),
    },

    [TRAINER_FACTORY_ROCKET_3] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("“Grunt”"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_3),
    },

    [TRAINER_FACTORY_ROCKET_4] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_4),
    },

    [TRAINER_FACTORY_ROCKET_5] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_5),
    },

    [TRAINER_UNUSED_373] =
    {},

    [TRAINER_UNUSED_374] =
    {},

    [TRAINER_FACTORY_ROCKET_PETREL] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = _("Petrel"),
        .items = {ITEM_HYPER_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_PETREL),
    },

    [TRAINER_UNUSED_376_] =
    {},

    [TRAINER_UNUSED_377_] =
    {},

    [TRAINER_UNUSED_378_] =
    {},

    [TRAINER_UNUSED_379_] =
    {},

    [TRAINER_UNUSED_380_] =
    {},

    [TRAINER_UNUSED_381_] =
    {},

    [TRAINER_R17_TR1_CAMPER_M] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Isaiah"),
        TRAINER_PARTY(sParty_TRAINER_R17_TR1_CAMPER_M),
    },

    [TRAINER_R17_TR2_PICNICKER1] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Isobel"),
        TRAINER_PARTY(sParty_TRAINER_R17_TR2_PICNICKER1),
    },

    [TRAINER_R17_TR3_PICNICKER2] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Janine"),
        TRAINER_PARTY(sParty_TRAINER_R17_TR3_PICNICKER2),
    },

    [TRAINER_R17_TR4_MANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Gregory"),
        TRAINER_PARTY(sParty_TRAINER_R17_TR4_MANIAC),
    },

    [TRAINER_R17_TR5_SCIENTIST] =
    {
        SCIENTIST_INFO,
        BASIC_AI,
        .trainerName = _("Alan"),
        TRAINER_PARTY(sParty_TRAINER_R17_TR5_SCIENTIST),
    },

    [TRAINER_R17_TR6_HIKER1] =
    {
        HIKER_INFO,
        .trainerName = _("Gus"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        TRAINER_PARTY(sParty_TRAINER_R17_TR6_HIKER1),
    },

    [TRAINER_R17_TR7_HIKER2] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Ron"),
        TRAINER_PARTY(sParty_TRAINER_R17_TR7_HIKER2),
    },

    [TRAINER_R17_TR8_COOLTRAINER] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .trainerName = _("Theo"),
        TRAINER_PARTY(sParty_TRAINER_R17_TR8_COOLTRAINER),
    },

    [TRAINER_BASALTUNNEL_TR1_HIKER1] =
    {
        HIKER_INFO,
        ADVANCED_AI,
        .trainerName = _("Lenny"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR1_HIKER1),
    },

    [TRAINER_BASALTUNNEL_TR2_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        ADVANCED_AI,
        .trainerName = _("Shinobu"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR2_BLACKBELT),
    },

    [TRAINER_BASALTUNNEL_TR3_PICNICKER] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Nicolas"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR3_PICNICKER),
    },

    [TRAINER_BASALTUNNEL_TR4_FIREBREATHER] =
    {
        KINDLER_INFO,
        ADVANCED_AI,
        .trainerName = _("Pedro"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR4_FIREBREATHER),
    },

    [TRAINER_BASALTUNNEL_TR5_BLACKBELT2] =
    {
        BLACK_BELT_INFO,
        ADVANCED_AI,
        .trainerName = _("Silas"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR5_BLACKBELT2),
    },

    [TRAINER_BASALTUNNEL_TR6_CAMPERM] =
    {
        PKMN_RANGER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Kyler"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR6_CAMPERM),
    },

    [TRAINER_BASALTUNNEL_TR7_PICNICKER2] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Allison"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR7_PICNICKER2),
    },

    [TRAINER_BASALTUNNEL_TR8_HIKER2] =
    {
        HIKER_INFO,
        .trainerName = _("Cole"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_WILL_SUICIDE,
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR8_HIKER2),
    },
    [TRAINER_BASALTUNNEL_TR9_BEAUTY] =
    {
        BEAUTY_INFO,
        ADVANCED_AI,
        .trainerName = _("Laura"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR9_BEAUTY),
    },
    [TRAINER_BASALTUNNEL_TR10_FIREBREATHER2] =
    {
        KINDLER_INFO,
        ADVANCED_AI,
        .trainerName = _("Hugh"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR10_FIREBREATHER2),
    },
    [TRAINER_BASALTUNNEL_TR11_HIKER3] =
    {
        HIKER_INFO,
        ADVANCED_AI,
        .trainerName = _("Perry"),
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR11_HIKER3),
    },
    [TRAINER_BASALTUNNEL_TR12_BROCK] =
    {
        .trainerClass = TRAINER_CLASS_ELITE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BROCK,
        .trainerName = _("Brock"),
        .mugshotColor = MUGSHOT_COLOR_GROUND,
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR12_BROCK),
    },
    [TRAINER_R18_TR1_HIKER1] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Presley"),
        TRAINER_PARTY(sParty_TRAINER_R18_TR1_HIKER1),
    },
    [TRAINER_R18_TR2_RANGER_M] =
    {
        PKMN_RANGER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Humberto"),
        TRAINER_PARTY(sParty_TRAINER_R18_TR2_RANGER_M),
    },
    [TRAINER_R18_TR3_KINDLER] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .trainerName = _("Edwardo"),
        TRAINER_PARTY(sParty_TRAINER_R18_TR3_KINDLER),
    },
    [TRAINER_R18_TR4_HIKER2] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Benny"),
        TRAINER_PARTY(sParty_TRAINER_R18_TR4_HIKER2),
    },
    [TRAINER_R18_TR5_RANGER_F] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Alana"),
        TRAINER_PARTY(sParty_TRAINER_R18_TR5_RANGER_F),
    },
    [TRAINER_R18_TR6_SCIENTIST] =
    {
        SCIENTIST_INFO,
        BASIC_AI,
        .trainerName = _("Chester"),
        TRAINER_PARTY(sParty_TRAINER_R18_TR6_SCIENTIST),
    },
    [TRAINER_R18_TR7_POKEMANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Morgan"),
        TRAINER_PARTY(sParty_TRAINER_R18_TR7_POKEMANIAC),
    },
    [TRAINER_R18_TR8_BREEDER_M] =
    {
        ENTHUSIAST_M_INFO,
        BASIC_AI,
        .trainerName = _("Glenn"),
        TRAINER_PARTY(sParty_TRAINER_R18_TR8_BREEDER_M),
    },
    [TRAINER_R18_TR9_ACE_TRAINER_M] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Tyrone"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        TRAINER_PARTY(sParty_TRAINER_R18_TR9_ACE_TRAINER_M),
    },
    [TRAINER_LEADER_PRYCE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_PRYCE,
        .trainerName = _("Pryce"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_BROTHER,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_TRAINER_LEADER_PRYCE),
    },
    [TRAINER_LEADER_BLAINE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BLAINE,
        .trainerName = _("Blaine"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_BROTHER,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        TRAINER_PARTY(sParty_TRAINER_LEADER_BLAINE),
    },
    [TRAINER_FROSTGYM_TR1_HIKER1] =
    {
        HIKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Matti"),
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR1_HIKER1),
    },
    [TRAINER_FROSTGYM_TR2_KINDLER1] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Beck"),
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR2_KINDLER1),
    },
    [TRAINER_FROSTGYM_TR3_SENIOR] =
    {
        .trainerClass = TRAINER_CLASS_GYMMEMBER_DOUBLE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_JUNIOR,
        .trainerName = _("Helena"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR3_SENIOR),
    },
    [TRAINER_FROSTGYM_TR4_JUNIOR] =
    {
        .trainerClass = TRAINER_CLASS_GYMMEMBER_DOUBLE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SENIOR,
        .trainerName = _("Irene"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR4_JUNIOR),
    },
    [TRAINER_FROSTGYM_TR5_RANGER_M] =
    {
        PKMN_RANGER_M_INFO,
        ADVANCED_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Mika"),
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR5_RANGER_M),
    },
    [TRAINER_FROSTGYM_TR6_RANGER_F] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Suzanne"),
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR6_RANGER_F),
    },
    [TRAINER_FROSTGYM_TR7_MANIAC] =
    {
        RUIN_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Oscar"),
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR7_MANIAC),
    },
    [TRAINER_FROSTGYM_TR8_COLLECTOR] =
    {
        COLLECTOR_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Laurence"),
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR8_COLLECTOR),
    },

    [TRAINER_FROSTGYM_TR9_KINDLER2] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Emil"),
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR9_KINDLER2),
    },

    [TRAINER_FROSTGYM_TR10_RANGER_F2] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Elsa"),
        TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR10_RANGER_F2),
    },

    [TRAINER_AZURETIDE_CELEBI_TR1] =
    {
        EXPERT_F_INFO,
        ADVANCED_AI,
        MOREBP,
        .trainerName = _("Aino"),
        .items = {ITEM_FULL_RESTORE},
        TRAINER_PARTY(sParty_TRAINER_AZURETIDE_CELEBI_TR1),
    },

    [TRAINER_KAOLISLE_CELEBI_TR2] =
    {
        EXPERT_M_INFO,
        ADVANCED_AI,
        MOREBP,
        .trainerName = _("Pentti"),
        .items = {ITEM_FULL_RESTORE},
        TRAINER_PARTY(sParty_TRAINER_KAOLISLE_CELEBI_TR2),
    },

    [TRAINER_R19_TR1_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Jocelyn"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR1_SWIMMER_F),
    },

    [TRAINER_R19_TR2_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Harold"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR2_SWIMMER_M),
    },
    [TRAINER_R19_TR3_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Jeffery"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR3_SWIMMER_M),
    },
    [TRAINER_R19_TR4_SWIMMER_COUPLE] =
    {
        SWIMMERS_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Heidi & Jesse"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR4_SWIMMER_COUPLE),
    },
    [TRAINER_R19_TR5_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Paula"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR5_SWIMMER_F),
    },
    [TRAINER_R19_TR6_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Casey"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR6_SWIMMER_M),
    },
    [TRAINER_R19_TR7_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Duane"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR7_BLACKBELT),
    },
    [TRAINER_R19_TR8_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Travis"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR8_HIKER),
    },
    [TRAINER_R19_TR9_PICNICKER] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Cyndy"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR9_PICNICKER),
    },
    [TRAINER_R19_TR10_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Jared"),
        TRAINER_PARTY(sParty_TRAINER_R19_TR10_SWIMMER_M),
    },
    [TRAINER_CLARISSA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("CLARISSA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Clarissa),
    },
    [TRAINER_ANGELICA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("ANGELICA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Angelica),
    },
    [TRAINER_MADELINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Madeline2),
    },
    [TRAINER_MADELINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Madeline3),
    },
    [TRAINER_MADELINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Madeline4),
    },
    [TRAINER_MADELINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Madeline5),
    },
    [TRAINER_BEVERLY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BEVERLY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Beverly),
    },
    [TRAINER_IMANI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("IMANI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Imani),
    },
    [TRAINER_KYLA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KYLA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kyla),
    },
    [TRAINER_DENISE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DENISE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Denise),
    },
    [TRAINER_BETH] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BETH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Beth),
    },
    [TRAINER_TARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TARA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Tara),
    },
    [TRAINER_MISSY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("MISSY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Missy),
    },
    [TRAINER_ALICE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ALICE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Alice),
    },

    [TRAINER_JENNY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Jenny1),
    },

    [TRAINER_GRACE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("GRACE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Grace),
    },

    [TRAINER_TANYA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TANYA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Tanya),
    },

    [TRAINER_SHARON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SHARON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Sharon),
    },

    [TRAINER_NIKKI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("NIKKI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Nikki),
    },
    [TRAINER_BRENDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BRENDA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Brenda),
    },
    [TRAINER_KATIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KATIE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Katie),
    },
    [TRAINER_SUSIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SUSIE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Susie),
    },
    [TRAINER_KARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KARA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kara),
    },
    [TRAINER_DANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Dana),
    },
    [TRAINER_SIENNA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SIENNA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Sienna),
    },
    [TRAINER_DEBRA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DEBRA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Debra),
    },
    [TRAINER_LINDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LINDA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Linda),
    },
    [TRAINER_KAYLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KAYLEE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kaylee),
    },
    [TRAINER_LAUREL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LAUREL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Laurel),
    },
    [TRAINER_CARLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("CARLEE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Carlee),
    },
    [TRAINER_JENNY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Jenny2),
    },
    [TRAINER_JENNY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Jenny3),
    },
    [TRAINER_JENNY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Jenny4),
    },
    [TRAINER_JENNY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Jenny5),
    },
    [TRAINER_HEIDI] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("HEIDI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Heidi),
    },
    [TRAINER_BECKY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BECKY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Becky),
    },
    [TRAINER_CAROL] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CAROL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Carol),
    },
    [TRAINER_NANCY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("NANCY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Nancy),
    },
    [TRAINER_MARTHA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("MARTHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Martha),
    },
    [TRAINER_DIANA_1] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Diana1),
    },
    [TRAINER_CEDRIC] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CEDRIC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Cedric),
    },
    [TRAINER_IRENE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("IRENE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Irene),
    },
    [TRAINER_DIANA_2] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Diana2),
    },
    [TRAINER_DIANA_3] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Diana3),
    },
    [TRAINER_DIANA_4] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Diana4),
    },
    [TRAINER_DIANA_5] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Diana5),
    },
    [TRAINER_AMY_AND_LIV_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_AmyAndLiv1),
    },
    [TRAINER_AMY_AND_LIV_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_AmyAndLiv2),
    },
    [TRAINER_GINA_AND_MIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GinaAndMia1),
    },
    [TRAINER_MIU_AND_YUKI] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("MIU & YUKI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_MiuAndYuki),
    },
    [TRAINER_AMY_AND_LIV_3] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_AmyAndLiv3),
    },
    [TRAINER_GINA_AND_MIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GinaAndMia2),
    },
    [TRAINER_AMY_AND_LIV_4] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_AmyAndLiv4),
    },
    [TRAINER_AMY_AND_LIV_5] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_AmyAndLiv5),
    },
    [TRAINER_AMY_AND_LIV_6] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_AmyAndLiv6),
    },
    [TRAINER_HUEY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Huey),
    },
    [TRAINER_EDMOND] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("EDMOND"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Edmond),
    },
    [TRAINER_ERNEST_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Ernest1),
    },
    [TRAINER_DWAYNE] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DWAYNE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Dwayne),
    },
    [TRAINER_PHILLIP] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("PHILLIP"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Phillip),
    },
    [TRAINER_LEONARD] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("LEONARD"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Leonard),
    },
    [TRAINER_DUNCAN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DUNCAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Duncan),
    },
    [TRAINER_ERNEST_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Ernest2),
    },
    [TRAINER_ERNEST_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Ernest3),
    },
    [TRAINER_ERNEST_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Ernest4),
    },
    [TRAINER_ERNEST_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Ernest5),
    },
    [TRAINER_ELI] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ELI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Eli),
    },
    [TRAINER_ANNIKA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ANNIKA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Annika),
    },
    [TRAINER_JAZMYN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JAZMYN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Jazmyn),
    },
    [TRAINER_JONAS] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JONAS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Jonas),
    },
    [TRAINER_KAYLEY] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("KAYLEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kayley),
    },
    [TRAINER_AURON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("AURON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Auron),
    },

    [TRAINER_KELVIN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("KELVIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kelvin),
    },

    [TRAINER_MARLEY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MARLEY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Marley),
    },

    [TRAINER_REYNA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("REYNA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Reyna),
    },

    [TRAINER_HUDSON] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUDSON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Hudson),
    },

    [TRAINER_CONOR] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("CONOR"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Conor),
    },

    [TRAINER_EDWIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Edwin1),
    },

    [TRAINER_HECTOR] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("HECTOR"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Hector),
    },
    [TRAINER_TABITHA_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_TabithaMossdeep),
    },
    [TRAINER_EDWIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Edwin2),
    },
    [TRAINER_EDWIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Edwin3),
    },
    [TRAINER_EDWIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Edwin4),
    },
    [TRAINER_EDWIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Edwin5),
    },
    [TRAINER_WALLY_VR_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_WallyVR1),
    },
    [TRAINER_BRENDAN_PRIMROSE_MEADOW] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_PRIMROSE_MEADOW_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_PRIMROSE_MEADOW_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_PRIMROSE_MEADOW_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_PRIMROSE_MEADOW_WATER,
    },
    [TRAINER_BRENDAN_CORALGROVE_ELEVATOR] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_CORALGROVE_ELEVATOR_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_CORALGROVE_ELEVATOR_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_CORALGROVE_ELEVATOR_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_CORALGROVE_ELEVATOR_WATER,
    },
    [TRAINER_BRENDAN_ROUTE_11_NORMAL] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_ROUTE_11_NORMAL_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_ROUTE_11_NORMAL_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_ROUTE_11_NORMAL_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_ROUTE_11_NORMAL_WATER,
    },
    [TRAINER_BRENDAN_ROUTE_11_ANGRY] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_ROUTE_11_ANGRY_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_ROUTE_11_ANGRY_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_ROUTE_11_ANGRY_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_ROUTE_11_ANGRY_WATER,
    },
    [TRAINER_BRENDAN_BASALEK_TOWN] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_BASALEK_TOWN_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_BASALEK_TOWN_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_BASALEK_TOWN_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_BASALEK_TOWN_WATER,
    },
    [TRAINER_UNUSED_525_] =
    {},
    [TRAINER_UNUSED_526_] =
    {},
    [TRAINER_UNUSED_527_] =
    {},
    [TRAINER_UNUSED_528_] =
    {},
    [TRAINER_MAY_PRIMROSE_MEADOW] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_PRIMROSE_MEADOW_GRASS),
        .partyGrass = sParty_TRAINER_MAY_PRIMROSE_MEADOW_GRASS,
        .partyFire = sParty_TRAINER_MAY_PRIMROSE_MEADOW_FIRE,
        .partyWater = sParty_TRAINER_MAY_PRIMROSE_MEADOW_WATER,
    },
    [TRAINER_MAY_CORALGROVE_ELEVATOR] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_CORALGROVE_ELEVATOR_GRASS),
        .partyGrass = sParty_TRAINER_MAY_CORALGROVE_ELEVATOR_GRASS,
        .partyFire = sParty_TRAINER_MAY_CORALGROVE_ELEVATOR_FIRE,
        .partyWater = sParty_TRAINER_MAY_CORALGROVE_ELEVATOR_WATER,
    },
    [TRAINER_MAY_ROUTE_11_NORMAL] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_ROUTE_11_NORMAL_GRASS),
        .partyGrass = sParty_TRAINER_MAY_ROUTE_11_NORMAL_GRASS,
        .partyFire = sParty_TRAINER_MAY_ROUTE_11_NORMAL_FIRE,
        .partyWater = sParty_TRAINER_MAY_ROUTE_11_NORMAL_WATER,
    },
    [TRAINER_MAY_ROUTE_11_ANGRY] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_ROUTE_11_ANGRY_GRASS),
        .partyGrass = sParty_TRAINER_MAY_ROUTE_11_ANGRY_GRASS,
        .partyFire = sParty_TRAINER_MAY_ROUTE_11_ANGRY_FIRE,
        .partyWater = sParty_TRAINER_MAY_ROUTE_11_ANGRY_WATER,
    },
    [TRAINER_MAY_BASALEK_TOWN] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_BASALEK_TOWN_GRASS),
        .partyGrass = sParty_TRAINER_MAY_BASALEK_TOWN_GRASS,
        .partyFire = sParty_TRAINER_MAY_BASALEK_TOWN_FIRE,
        .partyWater = sParty_TRAINER_MAY_BASALEK_TOWN_WATER,
    },
    [TRAINER_UNUSED_534_] =
    {},
    [TRAINER_UNUSED_535_] =
    {},
    [TRAINER_UNUSED_536_] =
    {},
    [TRAINER_UNUSED_537_] =
    {},
    [TRAINER_ISAAC_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Isaac1),
    },
    [TRAINER_DAVIS] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DAVIS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Davis),
    },
    [TRAINER_MITCHELL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("MITCHELL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Mitchell),
    },
    [TRAINER_ISAAC_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Isaac2),
    },
    [TRAINER_ISAAC_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Isaac3),
    },
    [TRAINER_ISAAC_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Isaac4),
    },

    [TRAINER_ISAAC_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Isaac5),
    },

    [TRAINER_LYDIA_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lydia1),
    },
    [TRAINER_HALLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("HALLE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Halle),
    },
    [TRAINER_GARRISON] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("GARRISON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Garrison),
    },
    [TRAINER_LYDIA_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lydia2),
    },
    [TRAINER_LYDIA_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lydia3),
    },
    [TRAINER_LYDIA_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lydia4),
    },

    [TRAINER_LYDIA_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lydia5),
    },

    [TRAINER_R7_TR3_NINJABOYSON_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Jackson1),
    },

    [TRAINER_LORENZO] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("LORENZO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Lorenzo),
    },

    [TRAINER_SEBASTIAN] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("SEBASTIAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Sebastian),
    },

    [TRAINER_R7_TR3_NINJABOYSON_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_Jackson2),
    },

    [TRAINER_R7_TR3_NINJABOYSON_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Jackson3),
    },

    [TRAINER_R7_TR3_NINJABOYSON_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_Jackson4),
    },

    [TRAINER_R7_TR3_NINJABOYSON_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Jackson5),
    },
    [TRAINER_CATHERINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_Catherine1),
    },
    [TRAINER_JENNA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("JENNA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_Jenna),
    },
    [TRAINER_SOPHIA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("SOPHIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Sophia),
    },
    [TRAINER_CATHERINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_Catherine2),
    },
    [TRAINER_CATHERINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Catherine3),
    },
    [TRAINER_CATHERINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_Catherine4),
    },

    [TRAINER_CATHERINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Catherine5),
    },

    [TRAINER_JULIO] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("JULIO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Julio),
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntSeafloorCavern5),
    },

    [TRAINER_GRUNT_UNUSED] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntUnused),
    },

    [TRAINER_GRUNT_MT_PYRE_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMtPyre4),
    },

    [TRAINER_GRUNT_JAGGED_PASS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntJaggedPass),
    },

    [TRAINER_MARC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MARC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Marc),
    },

    [TRAINER_BRENDEN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("BRENDEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Brenden),
    },

    [TRAINER_LILITH] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("LILITH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lilith),
    },

    [TRAINER_CRISTIAN] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("CRISTIAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Cristian),
    },

    [TRAINER_SYLVIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("SYLVIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Sylvia),
    },

    [TRAINER_LEONARDO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("LEONARDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Leonardo),
    },

    [TRAINER_ATHENA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ATHENA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Athena),
    },

    [TRAINER_HARRISON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HARRISON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Harrison),
    },

    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMtChimney2),
    },

    [TRAINER_CLARENCE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CLARENCE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Clarence),
    },

    [TRAINER_TERRY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("TERRY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Terry),
    },

    [TRAINER_NATE] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("NATE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Nate),
    },

    [TRAINER_KATHLEEN] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KATHLEEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kathleen),
    },

    [TRAINER_CLIFFORD] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("CLIFFORD"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Clifford),
    },

    [TRAINER_NICHOLAS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("NICHOLAS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Nicholas),
    },

    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntSpaceCenter3),
    },

    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntSpaceCenter4),
    },

    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntSpaceCenter5),
    },

    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntSpaceCenter6),
    },

    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntSpaceCenter7),
    },

    [TRAINER_MACEY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MACEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Macey),
    },

    [TRAINER_UNUSED_592_] =
    {},

    [TRAINER_UNUSED_593_] =
    {},

    [TRAINER_PAXTON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("PAXTON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Paxton),
    },

    [TRAINER_ISABELLA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ISABELLA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Isabella),
    },
    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntWeatherInst5),
    },
    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_TabithaMtChimney),
    },
    [TRAINER_JONATHAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("JONATHAN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_Jonathan),
    },
    [TRAINER_UNUSED_599_] =
    {},
    [TRAINER_UNUSED_600_] =
    {},
    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_MaxieMagmaHideout),
    },
    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_MaxieMtChimney),
    },
    [TRAINER_TIANA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("TIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Tiana),
    },
    [TRAINER_HALEY_1] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Haley1),
    },
    [TRAINER_JANICE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("JANICE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Janice),
    },
    [TRAINER_VIVI] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("VIVI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Vivi),
    },
    [TRAINER_HALEY_2] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Haley2),
    },
    [TRAINER_HALEY_3] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Haley3),
    },
    [TRAINER_HALEY_4] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Haley4),
    },
    [TRAINER_HALEY_5] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Haley5),
    },
    [TRAINER_SALLY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("SALLY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Sally),
    },
    [TRAINER_ROBIN] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ROBIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Robin),
    },
    [TRAINER_ANDREA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ANDREA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Andrea),
    },
    [TRAINER_CRISSY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("CRISSY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Crissy),
    },
    [TRAINER_RICK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("RICK"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Rick),
    },
    [TRAINER_LYLE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("LYLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lyle),
    },
    [TRAINER_JOSE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JOSE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Jose),
    },
    [TRAINER_DOUG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DOUG"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Doug),
    },
    [TRAINER_GREG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("GREG"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Greg),
    },
    [TRAINER_KENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("KENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kent),
    },
    [TRAINER_JAMES_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_James1),
    },
    [TRAINER_JAMES_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_James2),
    },
    [TRAINER_JAMES_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_James3),
    },
    [TRAINER_JAMES_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_James4),
    },
    [TRAINER_JAMES_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_James5),
    },
    [TRAINER_BRICE] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("BRICE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Brice),
    },
    [TRAINER_TRENT_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Trent1),
    },
    [TRAINER_LENNY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lenny),
    },
    [TRAINER_LUCAS_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lucas1),
    },
    [TRAINER_ALAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ALAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Alan),
    },
    [TRAINER_CLARK] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("CLARK"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Clark),
    },
    [TRAINER_ERIC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ERIC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Eric),
    },
    [TRAINER_LUCAS_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lucas2),
    },
    [TRAINER_MIKE_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Mike1),
    },
    [TRAINER_MIKE_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Mike2),
    },
    [TRAINER_TRENT_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Trent2),
    },
    [TRAINER_TRENT_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Trent3),
    },
    [TRAINER_TRENT_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Trent4),
    },
    [TRAINER_TRENT_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Trent5),
    },
    [TRAINER_DEZ_AND_LUKE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("DEZ & LUKE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_DezAndLuke),
    },
    [TRAINER_LEA_AND_JED] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("LEA & JED"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_LeaAndJed),
    },
    [TRAINER_KIRA_AND_DAN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_KiraAndDan1),
    },
    [TRAINER_KIRA_AND_DAN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_KiraAndDan2),
    },
    [TRAINER_KIRA_AND_DAN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_KiraAndDan3),
    },
    [TRAINER_KIRA_AND_DAN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_KiraAndDan4),
    },
    [TRAINER_KIRA_AND_DAN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_KiraAndDan5),
    },
    [TRAINER_JOHANNA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JOHANNA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Johanna),
    },
    [TRAINER_GERALD] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("GERALD"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Gerald),
    },
    [TRAINER_VIVIAN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("VIVIAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Vivian),
    },
    [TRAINER_DANIELLE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("DANIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Danielle),
    },
    [TRAINER_HIDEO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("HIDEO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_Hideo),
    },
    [TRAINER_KEIGO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("KEIGO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_Keigo),
    },
    [TRAINER_RILEY] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("RILEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        TRAINER_PARTY(sParty_Riley),
    },
    [TRAINER_FLINT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("FLINT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Flint),
    },
    [TRAINER_ASHLEY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ASHLEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Ashley),
    },
    [TRAINER_WALLY_MAUVILLE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_WallyMauville),
    },
    [TRAINER_WALLY_VR_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_WallyVR2),
    },
    [TRAINER_WALLY_VR_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_WallyVR3),
    },
    [TRAINER_WALLY_VR_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_WallyVR4),
    },
    [TRAINER_WALLY_VR_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_WallyVR5),
    },
    [TRAINER_UNUSED_661_] =
    {},
    [TRAINER_UNUSED_662_] =
    {},
    [TRAINER_UNUSED_663_] =
    {},
    [TRAINER_UNUSED_664_] =
    {},
    [TRAINER_UNUSED_665_] =
    {},
    [TRAINER_UNUSED_666_] =
    {},
    [TRAINER_JONAH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JONAH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Jonah),
    },
    [TRAINER_HENRY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("HENRY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Henry),
    },
    [TRAINER_ROGER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ROGER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Roger),
    },
    [TRAINER_ALEXA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ALEXA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Alexa),
    },
    [TRAINER_RUBEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("RUBEN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Ruben),
    },
    [TRAINER_KOJI_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Koji1),
    },
    [TRAINER_WAYNE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("WAYNE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Wayne),
    },
    [TRAINER_AIDAN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("AIDAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Aidan),
    },
    [TRAINER_REED] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("REED"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Reed),
    },
    [TRAINER_TISHA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TISHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Tisha),
    },
    [TRAINER_TORI_AND_TIA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("TORI & TIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_ToriAndTia),
    },
    [TRAINER_KIM_AND_IRIS] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("KIM & IRIS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_KimAndIris),
    },
    [TRAINER_TYRA_AND_IVY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("TYRA & IVY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_TyraAndIvy),
    },
    [TRAINER_MEL_AND_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("MEL & PAUL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_MelAndPaul),
    },
    [TRAINER_JOHN_AND_JAY_1] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_JohnAndJay1),
    },
    [TRAINER_JOHN_AND_JAY_2] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_JohnAndJay2),
    },
    [TRAINER_JOHN_AND_JAY_3] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_JohnAndJay3),
    },
    [TRAINER_JOHN_AND_JAY_4] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        TRAINER_PARTY(sParty_JohnAndJay4),
    },
    [TRAINER_JOHN_AND_JAY_5] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_JohnAndJay5),
    },
    [TRAINER_RELI_AND_IAN] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("RELI & IAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_ReliAndIan),
    },
    [TRAINER_LILA_AND_ROY_1] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_LilaAndRoy1),
    },
    [TRAINER_LILA_AND_ROY_2] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_LilaAndRoy2),
    },
    [TRAINER_LILA_AND_ROY_3] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_LilaAndRoy3),
    },
    [TRAINER_LILA_AND_ROY_4] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_LilaAndRoy4),
    },
    [TRAINER_LILA_AND_ROY_5] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_LilaAndRoy5),
    },
    [TRAINER_LISA_AND_RAY] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LISA & RAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_LisaAndRay),
    },
    [TRAINER_CHRIS] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CHRIS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Chris),
    },
    [TRAINER_DAWSON] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("DAWSON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Dawson),
    },
    [TRAINER_SARAH] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("SARAH"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Sarah),
    },
    [TRAINER_DARIAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("DARIAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Darian),
    },
    [TRAINER_HAILEY] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("HAILEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Hailey),
    },
    [TRAINER_CHANDLER] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("CHANDLER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Chandler),
    },
    [TRAINER_KALEB] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("KALEB"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kaleb),
    },
    [TRAINER_JOSEPH] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("JOSEPH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Joseph),
    },

    [TRAINER_ALYSSA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ALYSSA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Alyssa),
    },

    [TRAINER_MARCOS] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("MARCOS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Marcos),
    },

    [TRAINER_RHETT] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("RHETT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Rhett),
    },

    [TRAINER_TYRON] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("TYRON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Tyron),
    },

    [TRAINER_CELINA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("CELINA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Celina),
    },

    [TRAINER_BIANCA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BIANCA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Bianca),
    },

    [TRAINER_HAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("HAYDEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Hayden),
    },

    [TRAINER_SOPHIE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("SOPHIE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Sophie),
    },

    [TRAINER_COBY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("COBY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Coby),
    },

    [TRAINER_LAWRENCE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LAWRENCE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Lawrence),
    },

    [TRAINER_WYATT] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("WYATT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Wyatt),
    },

    [TRAINER_ANGELINA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ANGELINA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Angelina),
    },

    [TRAINER_KAI] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("KAI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kai),
    },

    [TRAINER_CHARLOTTE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CHARLOTTE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Charlotte),
    },

    [TRAINER_DESERT_TR9_HIKER3DRE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DEANDRE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Deandre),
    },
    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout1),
    },
    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout2),
    },
    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout3),
    },
    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout4),
    },
    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout5),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout6),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout7),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout8),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout9),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout10),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout11),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout12),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout13),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout14),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout15),
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_GruntMagmaHideout16),
    },

    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_TabithaMagmaHideout),
    },

    [TRAINER_DARCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DARCY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Darcy),
    },

    [TRAINER_MAXIE_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_MaxieMossdeep),
    },

    [TRAINER_PETE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("PETE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Pete),
    },

    [TRAINER_ISABELLE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ISABELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Isabelle),
    },

    [TRAINER_ANDRES_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Andres1),
    },

    [TRAINER_JOSUE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("JOSUE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Josue),
    },

    [TRAINER_CAMRON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CAMRON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Camron),
    },

    [TRAINER_CORY_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Cory1),
    },

    [TRAINER_CAROLINA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CAROLINA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Carolina),
    },

    [TRAINER_ELIJAH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ELIJAH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Elijah),
    },

    [TRAINER_CELIA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CELIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Celia),
    },

    [TRAINER_BRYAN] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("BRYAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Bryan),
    },

    [TRAINER_BRANDEN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BRANDEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Branden),
    },
    [TRAINER_BRYANT] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BRYANT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Bryant),
    },
    [TRAINER_SHAYLA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("SHAYLA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Shayla),
    },
    [TRAINER_KYRA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("KYRA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Kyra),
    },
    [TRAINER_JAIDEN] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JAIDEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Jaiden),
    },
    [TRAINER_ALIX] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("ALIX"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Alix),
    },
    [TRAINER_HELENE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("HELENE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Helene),
    },
    [TRAINER_MARLENE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARLENE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Marlene),
    },
    [TRAINER_DEVAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DEVAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Devan),
    },
    [TRAINER_JOHNSON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOHNSON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Johnson),
    },
    [TRAINER_MELINA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MELINA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Melina),
    },
    [TRAINER_BRANDI] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("BRANDI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Brandi),
    },
    [TRAINER_AISHA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AISHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Aisha),
    },
    [TRAINER_MAKAYLA] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("MAKAYLA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Makayla),
    },
    [TRAINER_FABIAN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FABIAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Fabian),
    },
    [TRAINER_DAYTON] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("DAYTON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Dayton),
    },
    [TRAINER_RACHEL] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("RACHEL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Rachel),
    },
    [TRAINER_LEONEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("LEONEL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Leonel),
    },
    [TRAINER_CALLIE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CALLIE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Callie),
    },
    [TRAINER_CALE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("CALE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Cale),
    },
    [TRAINER_MYLES] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("MYLES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Myles),
    },
    [TRAINER_PAT] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("PAT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Pat),
    },
    [TRAINER_CRISTIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Cristin1),
    },
    [TRAINER_UNUSED_768_] =
    {},
    [TRAINER_UNUSED_769_] =
    {},
    [TRAINER_ROXANNE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Roxanne2),
    },
    [TRAINER_ROXANNE_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Roxanne3),
    },
    [TRAINER_ROXANNE_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Roxanne4),
    },
    [TRAINER_ROXANNE_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Roxanne5),
    },
    [TRAINER_BRAWLY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Brawly2),
    },
    [TRAINER_BRAWLY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Brawly3),
    },
    [TRAINER_BRAWLY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Brawly4),
    },
    [TRAINER_BRAWLY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Brawly5),
    },
    [TRAINER_WATTSON_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Wattson2),
    },
    [TRAINER_WATTSON_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Wattson3),
    },
    [TRAINER_WATTSON_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Wattson4),
    },
    [TRAINER_WATTSON_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Wattson5),
    },
    [TRAINER_FLANNERY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Flannery2),
    },
    [TRAINER_FLANNERY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Flannery3),
    },
    [TRAINER_FLANNERY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Flannery4),
    },
    [TRAINER_FLANNERY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Flannery5),
    },
    [TRAINER_NORMAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Norman2),
    },
    [TRAINER_NORMAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Norman3),
    },
    [TRAINER_NORMAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Norman4),
    },
    [TRAINER_NORMAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Norman5),
    },
    [TRAINER_WINONA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        TRAINER_PARTY(sParty_Winona2),
    },
    [TRAINER_WINONA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        TRAINER_PARTY(sParty_Winona3),
    },
    [TRAINER_WINONA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        TRAINER_PARTY(sParty_Winona4),
    },
    [TRAINER_WINONA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        TRAINER_PARTY(sParty_Winona5),
    },
    [TRAINER_TATE_AND_LIZA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_TateAndLiza2),
    },
    [TRAINER_TATE_AND_LIZA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_TateAndLiza3),
    },
    [TRAINER_TATE_AND_LIZA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_TateAndLiza4),
    },
    [TRAINER_TATE_AND_LIZA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_TateAndLiza5),
    },
    [TRAINER_JUAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Juan2),
    },
    [TRAINER_JUAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Juan3),
    },
    [TRAINER_JUAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Juan4),
    },
    [TRAINER_JUAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Juan5),
    },
    [TRAINER_CASUAL_IRIS] =
    {
        .trainerClass = TRAINER_CLASS_ELITE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_IRIS_CASUAL,
        .trainerName = _("Iris"),
        .items = {ITEM_FULL_HEAL, ITEM_HYPER_POTION},
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY | AI_FLAG_SMART_MON_CHOICES,
        TRAINER_PARTY(sParty_TRAINER_CASUAL_IRIS),
    },
    [TRAINER_LEADER_DRAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_DRAYDEN,
        .trainerName = _("Drayden"),
        .items = {},
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Darius),
    },
    [TRAINER_ELITE_FOUR_MINA] =
    {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_F_SWIMMER,
        .trainerName = _("Mina"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Steven),
    },
    [TRAINER_ANABEL] =
    {
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BROTHER,
        .trainerName = _("ANABEL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Anabel),
    },

    [TRAINER_TUCKER] =
    {
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("TUCKER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Tucker),
    },

    [TRAINER_SPENSER] =
    {
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_AARON,
        .trainerName = _("SPENSER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Spenser),
    },

    [TRAINER_GRETA] =
    {
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("GRETA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Greta),
    },

    [TRAINER_NOLAND] =
    {
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("NOLAND"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Noland),
    },

    [TRAINER_LUCY] =
    {
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("LUCY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Lucy),
    },

    [TRAINER_BRANDON] =
    {
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("BRANDON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Brandon),
    },

    [TRAINER_ANDRES_2] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Andres2),
    },

    [TRAINER_ANDRES_3] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Andres3),
    },

    [TRAINER_ANDRES_4] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Andres4),
    },

    [TRAINER_ANDRES_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Andres5),
    },
    [TRAINER_CORY_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Cory2),
    },
    [TRAINER_CORY_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Cory3),
    },
    [TRAINER_CORY_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Cory4),
    },
    [TRAINER_CORY_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Cory5),
    },
    [TRAINER_PABLO_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Pablo2),
    },
    [TRAINER_PABLO_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Pablo3),
    },
    [TRAINER_PABLO_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Pablo4),
    },
    [TRAINER_PABLO_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Pablo5),
    },
    [TRAINER_KOJI_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Koji2),
    },
    [TRAINER_KOJI_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Koji3),
    },
    [TRAINER_KOJI_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Koji4),
    },

    [TRAINER_KOJI_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Koji5),
    },

    [TRAINER_CRISTIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Cristin2),
    },

    [TRAINER_CRISTIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Cristin3),
    },

    [TRAINER_CRISTIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Cristin4),
    },

    [TRAINER_CRISTIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Cristin5),
    },

    [TRAINER_FERNANDO_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Fernando2),
    },

    [TRAINER_FERNANDO_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Fernando3),
    },

    [TRAINER_FERNANDO_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Fernando4),
    },

    [TRAINER_FERNANDO_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Fernando5),
    },
    [TRAINER_SAWYER_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Sawyer2),
    },
    [TRAINER_SAWYER_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Sawyer3),
    },
    [TRAINER_SAWYER_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Sawyer4),
    },
    [TRAINER_SAWYER_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        TRAINER_PARTY(sParty_Sawyer5),
    },
    [TRAINER_GABRIELLE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Gabrielle2),
    },
    [TRAINER_GABRIELLE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Gabrielle3),
    },
    [TRAINER_GABRIELLE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Gabrielle4),
    },
    [TRAINER_GABRIELLE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Gabrielle5),
    },
    [TRAINER_THALIA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Thalia2),
    },
    [TRAINER_THALIA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Thalia3),
    },
    [TRAINER_THALIA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Thalia4),
    },
    [TRAINER_THALIA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        TRAINER_PARTY(sParty_Thalia5),
    },
    [TRAINER_MARIELA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARIELA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        TRAINER_PARTY(sParty_Mariela),
    },
    [TRAINER_ALVARO] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("ALVARO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        TRAINER_PARTY(sParty_Alvaro),
    },
    [TRAINER_EVERETT] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("EVERETT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        TRAINER_PARTY(sParty_Everett),
    },
    [TRAINER_RED] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("RED"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        TRAINER_PARTY(sParty_Red),
    },
    [TRAINER_LEAF] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEAF,
        .trainerName = _("LEAF"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        TRAINER_PARTY(sParty_Leaf),
    },
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .trainerName = _("Brendan"),
        .mugshotColor = MUGSHOT_COLOR_BRENDAN,
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        TRAINER_PARTY(sParty_BrendanLinkPlaceholder),
    },
    [TRAINER_MAY_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("May"),
        .mugshotColor = MUGSHOT_COLOR_MAY,
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        TRAINER_PARTY(sParty_MayLinkPlaceholder),
    },
};