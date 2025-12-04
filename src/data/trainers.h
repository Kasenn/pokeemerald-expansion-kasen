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

const struct Trainer gTrainers[DIFFICULTY_COUNT][TRAINERS_COUNT] =
{
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
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

    [DIFFICULTY_NORMAL][TRAINER_BROTHER_1_PEARLWOOD] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother1_Bulbasaur),
        .partyGrass = sParty_Brother1_Bulbasaur,
        .partyFire = sParty_Brother1_Charmander,
        .partyWater = sParty_Brother1_Squirtle,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROTHER_2_ROUTE28] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother2_Bulbasaur),
        .partyGrass = sParty_Brother2_Bulbasaur,
        .partyFire = sParty_Brother2_Charmander,
        .partyWater = sParty_Brother2_Squirtle,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROTHER_3_ROUTE28] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother3_Bulbasaur),
        .partyGrass = sParty_Brother3_Bulbasaur,
        .partyFire = sParty_Brother3_Charmander,
        .partyWater = sParty_Brother3_Squirtle,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROTHER_4_ROUTE28] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .items = {ITEM_SUPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother4_Bulbasaur),
        .partyGrass = sParty_Brother4_Bulbasaur,
        .partyFire = sParty_Brother4_Charmander,
        .partyWater = sParty_Brother4_Squirtle,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROTHER_5_FISHINGVILLAGE] =
    {
        BROTHER_INFO,
        BASIC_AI,
        .items = {ITEM_HYPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother5_Bulbasaur),
        .partyGrass = sParty_Brother5_Bulbasaur,
        .partyFire = sParty_Brother5_Charmander,
        .partyWater = sParty_Brother5_Squirtle,
    },

    [DIFFICULTY_NORMAL][TRAINER_BROTHER_6_ROUTE20] =
    {
        BROTHER_INFO,
        ADVANCED_AI,
        .items = {ITEM_HYPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother6_Bulbasaur),
        .partyGrass = sParty_Brother6_Bulbasaur,
        .partyFire = sParty_Brother6_Charmander,
        .partyWater = sParty_Brother6_Squirtle,
    },

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_7_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_8_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_9_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_10_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_11_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_12_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_13_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_14_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_15_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_R1_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Calvin"),
        .party = TRAINER_PARTY(sParty_GruntRusturfTunnel),
    },
    [DIFFICULTY_NORMAL][TRAINER_R1_FISHER] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Phil"),
        .party = TRAINER_PARTY(sParty_GruntWeatherInst1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R1_BUG_CATCHER] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .trainerName = _("Dave"),
        .party = TRAINER_PARTY(sParty_GruntWeatherInst2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R1_TUBER] =
    {
        TUBER_F_INFO,
        DUMB_AI,
        .trainerName = _("Lola"),
        .party = TRAINER_PARTY(sParty_GruntWeatherInst3),
    },
    [DIFFICULTY_NORMAL][TRAINER_R1_COOLTRAINER] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Tom"),
        .items = {ITEM_POTION},
        .party = TRAINER_PARTY(sParty_GruntMuseum1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R2_FISHER] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Andrew"),
        .party = TRAINER_PARTY(sParty_GruntMuseum2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R2_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Tiana"),
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R2_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        DUMB_AI,
        .trainerName = _("Zander"),
        .party = TRAINER_PARTY(sParty_GruntMtPyre1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R2_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Billy"),
        .party = TRAINER_PARTY(sParty_GruntMtPyre2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R2_SCHOOL_KID_F] =
    {
        SCHOOL_KID_F_INFO,
        DUMB_AI,
        .trainerName = _("Karen"),
        .party = TRAINER_PARTY(sParty_GruntMtPyre3),
    },
    [DIFFICULTY_NORMAL][TRAINER_WW_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .trainerName = _("Trevor"),
        .party = TRAINER_PARTY(sParty_GruntWeatherInst4),
    },
    [DIFFICULTY_NORMAL][TRAINER_WW_LADY] =
    {
        LADY_INFO,
        DUMB_AI,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE},
        .party = TRAINER_PARTY(sParty_GruntAquaHideout5),
    },
    [DIFFICULTY_NORMAL][TRAINER_WW_BUGCATCHER_2] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .trainerName = _("Rick"),
        .party = TRAINER_PARTY(sParty_GruntAquaHideout6),
    },

    [DIFFICULTY_NORMAL][TRAINER_WW_CAMPER] =
    {
        CAMPER_INFO,
        DUMB_AI,
        .trainerName = _("Drew"),
        .party = TRAINER_PARTY(sParty_TRAINER_WW_CAMPER),
    },

    [DIFFICULTY_NORMAL][TRAINER_WW_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Haley"),
        .party = TRAINER_PARTY(sParty_Matt),
    },

    [DIFFICULTY_NORMAL][TRAINER_WW_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Josh"),
        .party = TRAINER_PARTY(sParty_Zander),
    },

    [DIFFICULTY_NORMAL][TRAINER_WW_ACE_TRAINER] =
    {
        BW_ACE_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Whitney"),
        .items = {ITEM_SUPER_POTION},
        .party = TRAINER_PARTY(sParty_ShellyWeatherInstitute),
    },

    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
        TEAM_ROCKET_M_INFO,
        DUMB_AI,
        .party = TRAINER_PARTY(sParty_ShellySeafloorCavern),
    },

    [DIFFICULTY_NORMAL][TRAINER_SCHOOLHALL_1] =
    {
        SCHOOL_KID_F_INFO,
        .trainerName = _("Robin"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_PREFER_BATON_PASS,
        .party = TRAINER_PARTY(sParty_Archie),
    },

    [DIFFICULTY_NORMAL][TRAINER_SCHOOLHALL_2] =
    {
        SCHOOL_KID_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Jerry"),
        .party = TRAINER_PARTY(sParty_Leah),
    },

    [DIFFICULTY_NORMAL][TRAINER_SCHOOLHALL_3] =
    {
        SCHOOL_KID_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Ted"),
        .party = TRAINER_PARTY(sParty_Daisy),
    },

    [DIFFICULTY_NORMAL][TRAINER_SCHOOLHALL_4] =
    {
        SCHOOL_KID_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Vicky"),
        .party = TRAINER_PARTY(sParty_Rose1),
    },

    [DIFFICULTY_NORMAL][TRAINER_EV_TRAINING_HP] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Felix),
    },
    [DIFFICULTY_NORMAL][TRAINER_EV_TRAINING_ATK] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Violet),
    },
    [DIFFICULTY_NORMAL][TRAINER_EV_TRAINING_DEF] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Rose2),
    },
    [DIFFICULTY_NORMAL][TRAINER_EV_TRAINING_SPATK] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Rose3),
    },
    [DIFFICULTY_NORMAL][TRAINER_EV_TRAINING_SPDEF] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Rose4),
    },
    [DIFFICULTY_NORMAL][TRAINER_EV_TRAINING_SPEED] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Rose5),
    },
    [DIFFICULTY_NORMAL][TRAINER_EXPBOT_1] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Dusty1),
    },
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
        BUG_MANIAC_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Brent"),
        .party = TRAINER_PARTY(sParty_Chip),
    },
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Yasu"),
        .party = TRAINER_PARTY(sParty_Foster),
    },
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_2] =
    {
        LASS_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Janice"),
        .party = TRAINER_PARTY(sParty_Dusty2),
    },
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_3] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Joey"),
        .party = TRAINER_PARTY(sParty_Dusty3),
    },
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_4] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Jack"),
        .party = TRAINER_PARTY(sParty_Dusty4),
    },
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_5] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Jeremy"),
        .party = TRAINER_PARTY(sParty_Dusty5),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEADER_AARON] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_AARON,
        .trainerName = _("Aaron"),
        .items = {ITEM_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_BUG,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_GabbyAndTy1),
    },
    [DIFFICULTY_NORMAL][TRAINER_EXPBOT_2] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_GabbyAndTy2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_HIKER] =
    {
        HIKER_INFO,
        DUMB_AI,
        .trainerName = _("Flint"),
        .party = TRAINER_PARTY(sParty_GabbyAndTy3),
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_54_] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Sydney"),
        .party = TRAINER_PARTY(sParty_GabbyAndTy4),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_POKEMANIAC] =
    {
        POKEMANIAC_INFO,
        DUMB_AI,
        .trainerName = _("Ross"),
        .party = TRAINER_PARTY(sParty_GabbyAndTy5),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        DUMB_AI,
        .trainerName = _("Lewis"),
        .party = TRAINER_PARTY(sParty_GabbyAndTy6),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_TWINS] =
    {
        TWINS_INFO,
        DUMB_AI,
        .trainerName = _("Gina & Mia"),
        .party = TRAINER_PARTY(sParty_Lola1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R16_TR1_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Howard"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR1_SWIMMER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_TRIATHLETE] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        DUMB_AI,
        .trainerName = _("Ashley"),
        .party = TRAINER_PARTY(sParty_Gwen),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_CAMPER] =
    {
        CAMPER_INFO,
        DUMB_AI,
        .trainerName = _("Vincent"),
        .party = TRAINER_PARTY(sParty_Lola2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_COOL_F] =
    {
        BATTLE_GIRL_INFO,
        DUMB_AI,
        .trainerName = _("Serena"),
        .party = TRAINER_PARTY(sParty_Lola3),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_COOL_M] =
    {
        COOLTRAINER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Marcus"),
        .party = TRAINER_PARTY(sParty_Lola4),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        DUMB_AI,
        .trainerName = _("Cole"),
        .party = TRAINER_PARTY(sParty_Lola5),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Zack"),
        .party = TRAINER_PARTY(sParty_Ricky1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_BIRDKEEPER_2] =
    {
        BIRD_KEEPER_INFO,
        DUMB_AI,
        .trainerName = _("Simon"),
        .party = TRAINER_PARTY(sParty_Simon),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_DOUBLE_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Rose"),
        .party = TRAINER_PARTY(sParty_Charlie),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_DOUBLE_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Duncan"),
        .party = TRAINER_PARTY(sParty_Ricky2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R4_TRIATHLETE_2] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        DUMB_AI,
        .trainerName = _("Hannah"),
        .party = TRAINER_PARTY(sParty_Ricky3),
    },
    [DIFFICULTY_NORMAL][TRAINER_RICKY_4] =
    {
        TEAM_ROCKET_M_INFO,
        DUMB_AI,
        .party = TRAINER_PARTY(sParty_Ricky4),
    },
    [DIFFICULTY_NORMAL][TRAINER_RICKY_5] =
    {
        TEAM_ROCKET_F_INFO,
        DUMB_AI,
        .party = TRAINER_PARTY(sParty_Ricky5),
    },
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Randall),
    },
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
        COOLTRAINER_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Parker"),
        .party = TRAINER_PARTY(sParty_Parker),
    },
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
        GUITARIST_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("George"),
        .party = TRAINER_PARTY(sParty_George),
    },
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
        PKMN_BREEDER_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Alice"),
        .party = TRAINER_PARTY(sParty_Berke),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Braxton"),
        .party = TRAINER_PARTY(sParty_Braxton),
    },
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
        LASS_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Anya"),
        .party = TRAINER_PARTY(sParty_Vincent),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
        GUITARIST_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Leroy"),
        .party = TRAINER_PARTY(sParty_Leroy),
    },
    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Emma"),
        .party = TRAINER_PARTY(sParty_Wilton1),
    },
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
        PKMN_BREEDER_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Sofia"),
        .party = TRAINER_PARTY(sParty_Edgar),
    },
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
        SCHOOL_KID_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Avery"),
        .party = TRAINER_PARTY(sParty_Albert),
    },
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
        TWINS_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Teri & Tia"),
        .party = TRAINER_PARTY(sParty_Samuel),
    },
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Vito"),
        .party = TRAINER_PARTY(sParty_Vito),
    },
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Owen"),
        .party = TRAINER_PARTY(sParty_Owen),
    },
    [DIFFICULTY_NORMAL][TRAINER_WILTON_2] =
    {
        LASS_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Naomi"),
        .party = TRAINER_PARTY(sParty_Wilton2),
    },
    [DIFFICULTY_NORMAL][TRAINER_WILTON_3] =
    {
        LASS_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Ruby"),
        .party = TRAINER_PARTY(sParty_Wilton3),
    },
    [DIFFICULTY_NORMAL][TRAINER_WILTON_4] =
    {
        SCHOOL_KID_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Donald"),
        .party = TRAINER_PARTY(sParty_Wilton4),
    },
    [DIFFICULTY_NORMAL][TRAINER_WILTON_5] =
    {
        GUITARIST_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Wilton"),
        .party = TRAINER_PARTY(sParty_Wilton5),
    },
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Warren"),
        .party = TRAINER_PARTY(sParty_Warren),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEADER_VOLKNER] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("Volkner"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_ELECTRIC,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_Mary),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR1_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Daniel"),
        .party = TRAINER_PARTY(sParty_WpvTr1Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR2_TRIATH] =
    {
        RUNNING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Richard"),
        .party = TRAINER_PARTY(sParty_WpvTr2Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR3_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Elizabeth"),
        .party = TRAINER_PARTY(sParty_WpvTr3Battlegirl),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR4_CAMPER] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Samantha"),
        .party = TRAINER_PARTY(sParty_WpvTr4Camper),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR5_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Matthew"),
        .party = TRAINER_PARTY(sParty_WpvTr5Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR6_MANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Rodney"),
        .party = TRAINER_PARTY(sParty_WpvTr6Maniac),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR7_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Cameron"),
        .party = TRAINER_PARTY(sParty_WpvTr7Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR8_NINJABOY] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Eli"),
        .party = TRAINER_PARTY(sParty_WpvTr8Ninjaboy),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR9_LASS] =
    {
        LASS_INFO,
        BASIC_AI,
        .trainerName = _("Jennifer"),
        .party = TRAINER_PARTY(sParty_WpvTr9Lass),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR10_TRIATH] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Chloe"),
        .party = TRAINER_PARTY(sParty_WpvTr10Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR11_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Nicholas"),
        .party = TRAINER_PARTY(sParty_WpvTr11Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR12_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Camille"),
        .party = TRAINER_PARTY(sParty_WpvTr12Battlegirl),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR13_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Jonas"),
        .party = TRAINER_PARTY(sParty_WpvTr13Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_WPV_TR14_SKYLA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("Skyla"),
        .mugshotColor = MUGSHOT_COLOR_FLYING,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WpvTr14Skyla),
    },

    [DIFFICULTY_NORMAL][TRAINER_R28_TR1_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        .trainerName = _("Dylan"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_R28_Tr1_BugCatcher),
    },

    [DIFFICULTY_NORMAL][TRAINER_R28_TR2_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Bruce"),
        .party = TRAINER_PARTY(sParty_R28_Tr2_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_R28_TR3_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Grant"),
        .party = TRAINER_PARTY(sParty_R28_Tr3_NinjaBoy),
    },

    [DIFFICULTY_NORMAL][TRAINER_R28_TR4_PSYCHIC] =
    {
        PSYCHIC_M_INFO,
        BASIC_AI,
        .trainerName = _("Joseph"),
        .party = TRAINER_PARTY(sParty_R28_Tr4_Psychic),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR1_FISHER] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Don"),
        .party = TRAINER_PARTY(sParty_R5Tr1_Fisher),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR2_BEAUTY] =
    {
        BEAUTY_INFO,
        DUMB_AI,
        .trainerName = _("Natasha"),
        .party = TRAINER_PARTY(sParty_R5Tr2_Beauty),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR3_YOUNGCOUPLE] =
    {
        YOUNG_COUPLE_INFO,
        BASIC_AI,
        .trainerName = _("Ella & Evan"),
        .party = TRAINER_PARTY(sParty_R5Tr3_YoungCouple),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR4_LASS1] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Valerie"),
        .party = TRAINER_PARTY(sParty_R5Tr4_Lass1),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR5_POKEFAN_F] =
    {
        POKEFAN_F_INFO,
        BASIC_AI,
        .trainerName = _("Carol"),
        .party = TRAINER_PARTY(sParty_R5Tr5_PokeFanF),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR6_LASS2] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Vera"),
        .party = TRAINER_PARTY(sParty_R5Tr6_Lass2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR7_GENTLEMAN] =
    {
        GENTLEMAN_INFO,
        BASIC_AI,
        .trainerName = _("Sebastian"),
        .party = TRAINER_PARTY(sParty_R5Tr7_Gentleman),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR8_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Marty"),
        .party = TRAINER_PARTY(sParty_R5Tr8_Youngster),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR9_TRIATHLETE] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Sara"),
        .party = TRAINER_PARTY(sParty_R5Tr9_Triathlete),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR10_RICHBOY] =
    {
        RICH_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Tobias"),
        .party = TRAINER_PARTY(sParty_R5Tr10_RichBoy),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR11_MAN_5] =
    {
        KINDLER_INFO,
        .trainerName = _("Kurt"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_R5Tr11_Man5),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR12_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        .trainerName = _("Bill"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SEQUENCE_SWITCHING, 
        .party = TRAINER_PARTY(sParty_R5Tr12_BugCatcher),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR13_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Kenji"),
        .party = TRAINER_PARTY(sParty_R5Tr13_NinjaBoy),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR14_HIKER] =
    {
        HIKER_INFO,
        .trainerName = _("Paul"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_R5Tr14_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_R5_TR15_COOLTRAINER] =
    {
        BW_ACE_M_INFO,
        .trainerName = _("Alex"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES,
        .party = TRAINER_PARTY(sParty_R5Tr15_CoolTrainer),
    },

    [DIFFICULTY_NORMAL][TRAINER_R6_TR1_RANGER_M] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Lawrence"),
        .party = TRAINER_PARTY(sParty_R6Tr1_RangerM),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR2_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Melissa"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR2_SWIMMER_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R6_TR3_CAMPER_F] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Sheila"),
        .party = TRAINER_PARTY(sParty_R6Tr3_CamperF),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR12_NINJABOY2] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Fabian"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR12_NINJABOY2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R6_TR5_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Randy"),
        .party = TRAINER_PARTY(sParty_R6Tr5_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_R6_TR6_CAMPER_M2] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Conner"),
        .party = TRAINER_PARTY(sParty_R6Tr6_CamperM2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R6_TR7_KINDLER] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .trainerName = _("Erick"),
        .party = TRAINER_PARTY(sParty_R6Tr7_Kindler),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR1_PARASOLLADY] =
    {
        PARASOL_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Genna"),
        .party = TRAINER_PARTY(sParty_R8Tr1_ParasolLady),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR2_SRJR] =
    {
        SR_AND_JR_INFO,
        BASIC_AI,
        .trainerName = _("Kate & Joy"),
        .party = TRAINER_PARTY(sParty_R8Tr2_SrJr),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR3_AROMALADY] =
    {
        AROMA_LADY_INFO,
        BASIC_AI,
        .trainerName = _("Jessica"),
        .party = TRAINER_PARTY(sParty_R8Tr3_AromaLady),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR4_YOUNGSTER] =
    {
        SCHOOL_KID_M_INFO,
        DUMB_AI,
        .trainerName = _("Lucas"),
        .party = TRAINER_PARTY(sParty_R8Tr4_Youngster),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR5_PSYCHIC_F] =
    {
        PSYCHIC_F_INFO,
        BASIC_AI,
        .trainerName = _("Briony"),
        .party = TRAINER_PARTY(sParty_R8Tr5_PsychicF),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR6_ENTHUSIAST] =
    {
        ENTHUSIAST_M_INFO,
        BASIC_AI,
        .trainerName = _("Henry"),
        .party = TRAINER_PARTY(sParty_R8Tr6_CamperM),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR7_TRIATHLETE_M] =
    {
        RUNNING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Winston"),
        .party = TRAINER_PARTY(sParty_R8Tr7_TriathleteM),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR8_GENTLEMAN] =
    {
        GENTLEMAN_INFO,
        BASIC_AI,
        .trainerName = _("Phileas"),
        .party = TRAINER_PARTY(sParty_R8Tr8_Gentleman),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR9_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Garret"),
        .party = TRAINER_PARTY(sParty_R8Tr9_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR10_OLDCOUPLE] =
    {
        OLD_COUPLE_INFO,
        BASIC_AI,
        .trainerName = _("John & Jay"),
        .party = TRAINER_PARTY(sParty_R8Tr10_OldCouple),
    },

    [DIFFICULTY_NORMAL][TRAINER_R8_TR11_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        .trainerName = _("Martin"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_R8Tr11_BirdKeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_SHORESLATE_NURSE] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_Shoreslate_Nurse),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC1F_ROCKET_1] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC1F_Rocket1),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC1F_ROCKET_2] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC1F_Rocket2),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC_BASEROCKET_1] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC_BaseRocket1),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC_BASEROCKET_2] =
    {
        TEAM_ROCKET_F_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC_BaseRocket2),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC_BASEROCKET_3] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC_BaseRocket3),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC_BASEROCKET_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("Scientist"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_DC_BaseRocket4),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC2F_ROCKET_1] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC2F_Rocket1),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC2F_ROCKET_2] =
    {
        TEAM_ROCKET_F_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC2F_Rocket2),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC2F_ROCKET_3] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC2F_Rocket3),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC2F_ROCKET_4] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC2F_Rocket4),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC2F_ROCKET_5] =
    {
        TEAM_ROCKET_F_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC2F_Rocket5),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC3F_ROCKET_1] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_DC3F_Rocket1),
    },

    [DIFFICULTY_NORMAL][TRAINER_DC3F_ROCKET_PROTON] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .trainerName = _("Proton"),
        .items = {ITEM_SUPER_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_DC3F_Rocket_Proton),
    },

    [DIFFICULTY_NORMAL][TRAINER_SHORESLATE_ROCKET] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_Shoreslate_Rocket),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR1_CAMPER] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Jerome"),
        .party = TRAINER_PARTY(sParty_DesertTr1_Camper),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR2_CAMPER2] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Smith"),
        .party = TRAINER_PARTY(sParty_DesertTr2_Camper2),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR3_PICNICKER] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Aria"),
        .party = TRAINER_PARTY(sParty_DesertTr3_Picnicker),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR4_PICNICKER2] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Clarissa"),
        .party = TRAINER_PARTY(sParty_DesertTr4_Picnicker2),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR5_HIKER] =
    {
        RUIN_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Roland"),
        .party = TRAINER_PARTY(sParty_DesertTr5_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR6_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Ryan"),
        .party = TRAINER_PARTY(sParty_DesertTr6_Blackbelt),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR7_PICNICKER3] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Nelly"),
        .party = TRAINER_PARTY(sParty_DesertTr7_Picnicker3),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR8_HIKER2] =
    {
        RUIN_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Stan"),
        .party = TRAINER_PARTY(sParty_DesertTr8_Hiker2),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR9_HIKER3] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Dean"),
        .party = TRAINER_PARTY(sParty_DesertTr9_Hiker3),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR10_FIREBREATHER] =
    {
        KINDLER_INFO,
        DUMB_AI,
        .trainerName = _("Brad"),
        .party = TRAINER_PARTY(sParty_DesertTr10_Firebreather),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR11_BLACKBELT2] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Steven"),
        .party = TRAINER_PARTY(sParty_DesertTr11_Blackbelt2),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR12_HIKER4] =
    {
        RUIN_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Herman"),
        .party = TRAINER_PARTY(sParty_DesertTr12_Hiker4),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR13_PSYCHIC_F] =
    {
        PSYCHIC_F_INFO,
        BASIC_AI,
        .trainerName = _("Wendy"),
        .party = TRAINER_PARTY(sParty_DesertTr13_Psychic_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR14_COOLTRAINER] =
    {
        BW_ACE_F_INFO,
        .trainerName = _("Olivia"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING,
        .party = TRAINER_PARTY(sParty_DesertTr14_Cooltrainer),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR1_CAMPER] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Franklin"),
        .party = TRAINER_PARTY(sParty_Route7Tr1_Camper),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR2_PICNICKER] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Gemma"),
        .party = TRAINER_PARTY(sParty_Route7Tr2_Picnicker),
    },

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_172_] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Kazuma"),
        .party = TRAINER_PARTY(sParty_Route7Tr3_Ninjaboy),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR4_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Dudley"),
        .party = TRAINER_PARTY(sParty_Route7Tr4_Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR5_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Nob"),
        .party = TRAINER_PARTY(sParty_Route7Tr5_Blackbelt),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR6_PICNICKER2] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Tina"),
        .party = TRAINER_PARTY(sParty_Route7Tr6_Picnicker2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR7_FISHERMAN] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Tony"),
        .party = TRAINER_PARTY(sParty_Route7Tr7_Fisherman),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR8_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Clive"),
        .party = TRAINER_PARTY(sParty_Route7Tr8_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR9_PARASOLLADY] =
    {
        PARASOL_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Fiona"),
        .party = TRAINER_PARTY(sParty_Route7Tr9_Parasollady),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR10_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Goro"),
        .party = TRAINER_PARTY(sParty_Route7Tr10_NinjaBoy),
    },

    [DIFFICULTY_NORMAL][TRAINER_MARIGORGE_NURSE] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_MarigorgeNurse),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR1_CAMPER1] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Mike"),
        .party = TRAINER_PARTY(sParty_KG_Tr1_Camper1),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR2_PICNICKER1] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Sophie"),
        .party = TRAINER_PARTY(sParty_KG_Tr2_Picnicker1),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR3_HIKER1] =
    {
        HIKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Ralph"),
        .party = TRAINER_PARTY(sParty_KG_Tr3_Hiker1),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR4_CAMPER2] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Dan"),
        .party = TRAINER_PARTY(sParty_KG_Tr4_Camper2),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR5_HIKER2] =
    {
        HIKER_INFO,
        .isGymTrainer = TRUE,
        .trainerName = _("Mark"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_KG_Tr5_Hiker2),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR6_HIKER3] =
    {
        HIKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Brett"),
        .party = TRAINER_PARTY(sParty_KG_Tr6_Hiker3),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR7_PICNICKER2] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Mila"),
        .party = TRAINER_PARTY(sParty_KG_Tr7_Picnicker2),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR8_CAMPER3] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Axel"),
        .party = TRAINER_PARTY(sParty_KG_Tr8_Camper3),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR9_PICNICKER3] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Anna"),
        .party = TRAINER_PARTY(sParty_KG_Tr9_Picnicker3),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_TR10_HIKER4] =
    {
        HIKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Kevin"),
        .party = TRAINER_PARTY(sParty_KG_Tr10_Hiker4),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLGYM_CLAY] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CLAY,
        .trainerName = _("Clay"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_GROUND,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_KG_Clay),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR1_PICNICKER] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Bella"),
        .party = TRAINER_PARTY(sParty_KM_Tr1_Picnicker),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR2_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Wyatt"),
        .party = TRAINER_PARTY(sParty_KM_Tr2_Blackbelt),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR3_CAMPER] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Ike"),
        .party = TRAINER_PARTY(sParty_KM_Tr3_Camper),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR4_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Wilson"),
        .party = TRAINER_PARTY(sParty_KM_Tr4_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR5_HIKER] =
    {
        HIKER_INFO,
        .trainerName = _("Luke"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_KM_Tr5_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR6_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Isaac"),
        .party = TRAINER_PARTY(sParty_KM_Tr6_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR7_CAMPER] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Caleb"),
        .party = TRAINER_PARTY(sParty_KM_Tr7_Camper),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR8_PICNICKER] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        .trainerName = _("Maria"),
        .party = TRAINER_PARTY(sParty_KM_Tr8_Picnicker),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR9_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Koji"),
        .party = TRAINER_PARTY(sParty_KM_Tr9_Blackbelt),
    },

    [DIFFICULTY_NORMAL][TRAINER_KM_TR10_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Everett"),
        .party = TRAINER_PARTY(sParty_KM_Tr10_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_BUFFET_1] =
    {
        HEX_MANIAC_INFO,
        ADVANCED_AI,
        .trainerName = _("Tarja"),
        .party = TRAINER_PARTY(sParty_BuffetTrainer1),
    },

    [DIFFICULTY_NORMAL][TRAINER_BUFFET_2] =
    {
        GEN4_SWIMMER_INFO,
        ADVANCED_AI,
        .trainerName = _("Gwendolyn"),
        .party = TRAINER_PARTY(sParty_BuffetTrainer2),
    },

    [DIFFICULTY_NORMAL][TRAINER_BUFFET_3] =
    {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_ROCKER,
        .trainerName = _("Pan"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BuffetTrainer3),
    },

    [DIFFICULTY_NORMAL][TRAINER_BUFFET_4] =
    {
        .trainerClass = TRAINER_CLASS_DANCER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("Anna"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BuffetTrainer4),
    },

    [DIFFICULTY_NORMAL][TRAINER_HOTEL_BIRDKEEPER] =
    {
        BEAUTY_INFO,
        .trainerName = _("Kiara"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES,
        .party = TRAINER_PARTY(sParty_HotelBirdKeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_HOTEL_KID1] =
    {
        TUBER_F_INFO,
        DUMB_AI,
        .trainerName = _("Lucy"),
        .party = TRAINER_PARTY(sParty_HotelKid1),
    },

    [DIFFICULTY_NORMAL][TRAINER_HOTEL_KID2] =
    {
        TUBER_M_INFO,
        DUMB_AI,
        .trainerName = _("Sam"),
        .party = TRAINER_PARTY(sParty_HotelKid2),
    },

    [DIFFICULTY_NORMAL][TRAINER_LEADER_KORRINA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KORRINA,
        .trainerName = _("Korrina"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_FIGHTING,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_LeaderKorrina),
    },

    [DIFFICULTY_NORMAL][TRAINER_ROCKLIFFE_NURSE] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_RockliffeNurse),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR1_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Sally"),
        .party = TRAINER_PARTY(sParty_Route11Tr1_Lass),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR2_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Rudy"),
        .party = TRAINER_PARTY(sParty_Route11Tr2_Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR3_BUGCATCHER] =
    {
        BUG_MANIAC_INFO,
        DUMB_AI,
        .trainerName = _("Larry"),
        .party = TRAINER_PARTY(sParty_Route11Tr3_Bugcatcher),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR4_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Takashi"),
        .party = TRAINER_PARTY(sParty_Route11Tr4_Ninjaboy),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR5_POKEMANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Justin"),
        .party = TRAINER_PARTY(sParty_Route11Tr5_Pokemaniac),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR6_TRIATHLETE_F] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Autumn"),
        .party = TRAINER_PARTY(sParty_Route11Tr6_Triathlete_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR7_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Ethan"),
        .party = TRAINER_PARTY(sParty_Route11Tr7_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR8_NINJABOY_2] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Hideo"),
        .party = TRAINER_PARTY(sParty_Route11Tr8_Ninjaboy_2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR9_NINJABOY_3] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Keigo"),
        .party = TRAINER_PARTY(sParty_Route11Tr9_Ninjaboy_3),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR10_CYCLER_M] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Gavin"),
        .party = TRAINER_PARTY(sParty_Route11Tr10_Cycler_M),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR11_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Cristian"),
        .party = TRAINER_PARTY(sParty_Route11Tr11_Blackbelt),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR12_EXPERT] =
    {
        EXPERT_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Timothy"),
        .items = {},
        .party = TRAINER_PARTY(sParty_Route11Tr12_Expert),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR13_PSYCHIC_F] =
    {
        PSYCHIC_F_INFO,
        BASIC_AI,
        .trainerName = _("Kayla"),
        .party = TRAINER_PARTY(sParty_Route11Tr13_Psychic_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R11_TR14_ACETRAINER_F] =
    {
        BW_ACE_F_INFO,
        .trainerName = _("Kathrine"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Route11Tr14_Acetrainer_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_225_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_226_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_227_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_228_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_229_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_230_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_231_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_232_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_233_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_234_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_235_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_236_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_R12_TR1_TRIATHLETE_F] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Claire"),
        .party = TRAINER_PARTY(sParty_R12Tr1_Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR2_TRIATHLETE_M] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Doug"),
        .party = TRAINER_PARTY(sParty_R12Tr2_Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR3_TRIATHLETE_F2] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Christina"),
        .party = TRAINER_PARTY(sParty_R12Tr3_Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR4_TRIATHLETE_M2] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Eric"),
        .party = TRAINER_PARTY(sParty_R12Tr4_Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR5_TRIATHLETE_M3] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .trainerName = _("Clark"),
        .items = {},
        .party = TRAINER_PARTY(sParty_R12Tr5_Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR6_TRIATHLETE_F3] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Nora"),
        .party = TRAINER_PARTY(sParty_R12Tr6_Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_FROSTHEARTH_NURSE] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_R12Tr7_Triath),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR5_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Henna"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR5_SWIMMER_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR9_PSYCHIC_M] =
    {
        PSYCHIC_M_INFO,
        BASIC_AI,
        .trainerName = _("Cedric"),
        .party = TRAINER_PARTY(sParty_R12Tr9_Psychic),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR10_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Trent"),
        .party = TRAINER_PARTY(sParty_R12Tr10_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR11_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Leah"),
        .party = TRAINER_PARTY(sParty_R12Tr11_Lass),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR12_BUGMANIAC] =
    {
        ENTHUSIAST_F_INFO,
        DUMB_AI,
        .trainerName = _("Vivian"),
        .party = TRAINER_PARTY(sParty_R12Tr12_BugMan),
    },

    [DIFFICULTY_NORMAL][TRAINER_R12_TR13_NINJABOY] =
    {
        NINJA_BOY_INFO,
        DUMB_AI,
        .trainerName = _("Riley"),
        .party = TRAINER_PARTY(sParty_R12Tr13_Ninja),
    },

    [DIFFICULTY_NORMAL][TRAINER_SANDSTONE_NURSE] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(Party_Sandstone_Nurse),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR6_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Miranda"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR6_SWIMMER_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR7_GUITARIST] =
    {
        GUITARIST_INFO,
        BASIC_AI,
        .trainerName = _("Marco"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR7_GUITARIST),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR8_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Clayton"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR8_HIKER),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR9_BEAUTY] =
    {
        BEAUTY_INFO,
        BASIC_AI,
        .trainerName = _("Vera"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR9_BEAUTY),
    },

    [DIFFICULTY_NORMAL][TRAINER_FC_TR1_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Terry"),
        .party = TRAINER_PARTY(Party_FcTr1_Blackbelt),
    },

    [DIFFICULTY_NORMAL][TRAINER_FC_TR2_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Hailey"),
        .party = TRAINER_PARTY(Party_FcTr2_Battlegirl),
    },

    [DIFFICULTY_NORMAL][TRAINER_FC_TR3_CAMPER] =
    {
        CAMPER_INFO,
        BASIC_AI,
        .trainerName = _("Barton"),
        .party = TRAINER_PARTY(Party_FcTr3_Camper),
    },

    [DIFFICULTY_NORMAL][TRAINER_FC_TR4_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Gordon"),
        .party = TRAINER_PARTY(Party_FcTr4_Hiker),
    },

    [DIFFICULTY_NORMAL][TRAINER_R14_TR1_RUNNING_F] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Penelope"),
        .party = TRAINER_PARTY(Party_R14Tr1_RunnerF),
    },

    [DIFFICULTY_NORMAL][TRAINER_R14_TR2_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Walter"),
        .party = TRAINER_PARTY(Party_R14Tr2_Hiker),
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_SIDNEY] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName = _("SIDNEY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Sidney),
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_PHOEBE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName = _("PHOEBE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Phoebe),
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_GLACIA] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .trainerName = _("GLACIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Glacia),
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_DRAKE] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .trainerName = _("DRAKE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Drake),
    },

    [DIFFICULTY_NORMAL][TRAINER_SANDGYM_TR1_CYCLISTM1] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Lloyd"),
        .party = TRAINER_PARTY(sParty_SGTr1_CyclistM1),
    },

    [DIFFICULTY_NORMAL][TRAINER_SANDGYM_TR2_CYCLISTF1] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Sophia"),
        .party = TRAINER_PARTY(sParty_SGTr2_CyclistF1),
    },

    [DIFFICULTY_NORMAL][TRAINER_SANDGYM_TR3_CYCLISTF2] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Jenna"),
        .party = TRAINER_PARTY(sParty_SGTr3_CyclistF2),
    },

    [DIFFICULTY_NORMAL][TRAINER_SANDGYM_TR4_CYCLISTM2] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Greg"),
        .party = TRAINER_PARTY(sParty_SGTr4_CyclistM2),
    },

    [DIFFICULTY_NORMAL][TRAINER_SANDGYM_TR5_CYCLISTF3] =
    {
        CYCLING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Emilia"),
        .party = TRAINER_PARTY(sParty_SGTr5_CyclistF3),
    },

    [DIFFICULTY_NORMAL][TRAINER_SANDGYM_TR6_CYCLISTM3] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Dennis"),
        .party = TRAINER_PARTY(sParty_SGTr6_CyclistM3),
    },

    [DIFFICULTY_NORMAL][TRAINER_SANDGYM_TR7_CYCLISTM4] =
    {
        CYCLING_TRIATHLETE_M_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Harry"),
        .party = TRAINER_PARTY(sParty_SGTr7_CyclistM4),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_2F_TR2_MAN3] =
    {
        COOLTRAINER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Liam"),
        .party = TRAINER_PARTY(sParty_AT2F_Tr2_Man3),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_2F_TR2_WOMAN5] =
    {
        COOLTRAINER_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Luna"),
        .party = TRAINER_PARTY(sParty_AT2F_Tr2_Woman5),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_2F_TR1_PSYCHIC] =
    {
        PSYCHIC_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Gerard"),
        .party = TRAINER_PARTY(sParty_AT2F_Tr1_Psychic),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_2F_TR1_MAN5] =
    {
        GUITARIST_INFO,
        ADVANCED_AI,
        .trainerName = _("Shaun"),
        .party = TRAINER_PARTY(sParty_AT2F_Tr1_Man5),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_3F_TR1_EXPERT_M] =
    {
        EXPERT_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Theodore"),
        .party = TRAINER_PARTY(sParty_AT3F_Tr1_Expert_M),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_3F_TR1_EXPERT_F] =
    {
        EXPERT_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Shelby"),
        .party = TRAINER_PARTY(sParty_AT3F_Tr1_Expert_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_3F_TR2_HEXMANIAC] =
    {
        HEX_MANIAC_INFO,
        ADVANCED_AI,
        .trainerName = _("Osanna"),
        .party = TRAINER_PARTY(sParty_AT3F_Tr2_HexManiac),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_3F_TR2_PSYCHICF] =
    {
        PSYCHIC_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Lynette"),
        .party = TRAINER_PARTY(sParty_AT3F_Tr2_PsychicF),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_4F_TR1_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        ADVANCED_AI,
        .trainerName = _("Junichi"),
        .party = TRAINER_PARTY(sParty_AT4F_Tr1_BlackBelt),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_4F_TR1_HEXMANIAC] =
    {
        HEX_MANIAC_INFO,
        ADVANCED_AI,
        .trainerName = _("Anina"),
        .party = TRAINER_PARTY(sParty_AT4F_Tr1_HexManiac),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_4F_TR2_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Isabella"),
        .party = TRAINER_PARTY(sParty_AT4F_Tr2_Lass),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_4F_TR2_YOUNGSTER] =
    {
        YOUNGSTER_INFO,
        DUMB_AI,
        .trainerName = _("Timmy"),
        .party = TRAINER_PARTY(sParty_AT4F_Tr2_Youngster),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_4F_TR3_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        ADVANCED_AI,
        .trainerName = _("Andrea"),
        .party = TRAINER_PARTY(sParty_AT4F_Tr3_BattleGirl),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_4F_TR3_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        ADVANCED_AI,
        .trainerName = _("Roy"),
        .party = TRAINER_PARTY(sParty_AT4F_Tr3_BlackBelt),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_5F_COOLTRAINER_M] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Beckett"),
        .party = TRAINER_PARTY(sParty_AT5F_CoolTrainer_M),
    },

    [DIFFICULTY_NORMAL][TRAINER_AT_5F_COOLTRAINER_F] =
    {
        BW_ACE_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Jamie"),
        .party = TRAINER_PARTY(sParty_AT5F_CoolTrainer_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R14_TR3_PARASOLLADY] =
    {
        PARASOL_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Alexa"),
        .party = TRAINER_PARTY(sParty_R14Tr3_ParasolLady),
    },

    [DIFFICULTY_NORMAL][TRAINER_R14_TR4_FISHER] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Ernest"),
        .party = TRAINER_PARTY(sParty_R14Tr4_FisherMan),
    },

    [DIFFICULTY_NORMAL][TRAINER_R14_TR5_PARASOLLADY2] =
    {
        PARASOL_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Madeline"),
        .party = TRAINER_PARTY(sParty_R14Tr5_ParasolLady),
    },

    [DIFFICULTY_NORMAL][TRAINER_R14_TR6_NINJABOY] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Nick"),
        .party = TRAINER_PARTY(sParty_R14Tr6_NinjaBoy),
    },

    [DIFFICULTY_NORMAL][TRAINER_R14_TR7_ROCKER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("James"),
        .party = TRAINER_PARTY(sParty_R14Tr7_Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_R14_TR8_MANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Cooper"),
        .party = TRAINER_PARTY(sParty_R14Tr8_Maniac),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR1_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        .trainerName = _("Colton"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_R15Tr1_Birdkeeper),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR2_RANGERF] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Ashlee"),
        .party = TRAINER_PARTY(sParty_R15Tr2_RangerF),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR3_RANGERM] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Miguel"),
        .party = TRAINER_PARTY(sParty_R15Tr3_RangerM),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR4_GENTLEMAN] =
    {
        GENTLEMAN_INFO,
        BASIC_AI,
        .trainerName = _("Robert"),
        .party = TRAINER_PARTY(sParty_R15Tr4_Gentleman),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR5_NINJABOY1] =
    {
        NINJA_BOY_INFO,
        .trainerName = _("Yoshi"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_R15Tr5_Ninjaboy),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR6_NINJABOY2] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Saki"),
        .party = TRAINER_PARTY(sParty_R15Tr6_Ninjaboy),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR7_BUGCATCHER] =
    {
        BUG_CATCHER_INFO,
        .trainerName = _("Tim"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_R15Tr7_Bugcatcher),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR8_BUGCATCHER2] =
    {
        BUG_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Fernando"),
        .party = TRAINER_PARTY(sParty_R15Tr8_Bugmaniac),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR9_BEAUTY] =
    {
        BEAUTY_INFO,
        BASIC_AI,
        .trainerName = _("Isabel"),
        .party = TRAINER_PARTY(sParty_R15Tr9_Beauty),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR10_FISHER] =
    {
        FISHERMAN_INFO,
        ADVANCED_AI,
        .trainerName = _("Kenneth"),
        .party = TRAINER_PARTY(sParty_R15Tr10_Fisherman),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_ACETRAINER_M] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Camden"),
        .party = TRAINER_PARTY(sParty_R15Tr11_AceM),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_ACETRAINER_F] =
    {
        BW_ACE_F_INFO,
        .trainerName = _("Donny"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_HP_AWARE,
        .party = TRAINER_PARTY(sParty_R15Tr11_AceF),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR13_COOLTRAINER] =
    {
        COOLTRAINER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Jacob"),
        .party = TRAINER_PARTY(sParty_R15Tr13_Cooltrainer),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR14_LASS] =
    {
        LASS_INFO,
        DUMB_AI,
        .trainerName = _("Kaitlin"),
        .party = TRAINER_PARTY(sParty_R15Tr14_Lass),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR15_SCIENTIST] =
    {
        SCIENTIST_INFO,
        BASIC_AI,
        .trainerName = _("Stephen"),
        .party = TRAINER_PARTY(sParty_R15Tr15_Scientist),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR16_AROMALADY] =
    {
        AROMA_LADY_INFO,
        DUMB_AI,
        .trainerName = _("Daisy"),
        .party = TRAINER_PARTY(sParty_R15Tr16_Aromalady),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR17_NINJABOY3] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Ava"),
        .party = TRAINER_PARTY(sParty_R15Tr17_RunnerF),
    },

    [DIFFICULTY_NORMAL][TRAINER_R15_TR18_BERRYROCKET] =
    {
        TEAM_ROCKET_M_INFO,
        BASIC_AI,
        .party = TRAINER_PARTY(sParty_R15Tr18_RocketGrunt),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR1_BREEDER_M] =
    {
        PKMN_BREEDER_M_INFO,
        .trainerName = _("Galen"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR1_BREEDER_M),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR2_MANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Shane"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR2_MANIAC),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR3_TWINS] =
    {
        TWINS_INFO,
        DUMB_AI,
        .trainerName = _("Bella & Belle"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR3_TWINS),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR4_BREEDER_F] =
    {
        PKMN_BREEDER_F_INFO,
        BASIC_AI,
        .trainerName = _("Brooke"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR4_BREEDER_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR5_HEXMANIAC_1] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Patricia"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR5_HEXMANIAC_1),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR6_PSYCHIC_M] =
    {
        PSYCHIC_M_INFO,
        BASIC_AI,
        .trainerName = _("Deandre"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR6_PSYCHIC_M),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR7_HEXMANIAC_2] =
    {
        HEX_MANIAC_INFO,
        .trainerName = _("Melanie"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR7_HEXMANIAC_2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR8_TRIATHLETE_F] =
    {
        RUNNING_TRIATHLETE_F_INFO,
        BASIC_AI,
        .trainerName = _("Jean"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR8_TRIATHLETE_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR9_FISHERMAN] =
    {
        FISHERMAN_INFO,
        BASIC_AI,
        .trainerName = _("Preston"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR9_FISHERMAN),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR10_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Helen"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR10_BATTLEGIRL),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR11_NINJABOY] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Sasuke"),
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR11_NINJABOY),
    },

    [DIFFICULTY_NORMAL][TRAINER_R23_TR12_ACETRAINER] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Ben"),
        .items = {ITEM_HYPER_POTION},
        .party = TRAINER_PARTY(sParty_TRAINER_R23_TR12_ACETRAINER),
    },

    [DIFFICULTY_NORMAL][TRAINER_DRISLEDGE_NURSE] =
    {
        NURSE_INFO,
        .party = TRAINER_PARTY(sParty_DRISLEDGE_NURSE),
    },

    [DIFFICULTY_NORMAL][TRAINER_DRISLEDGEGYM_TRAINER1] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        .party = TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER1),
    },

    [DIFFICULTY_NORMAL][TRAINER_DRISLEDGEGYM_TRAINER2] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        .party = TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER2),
    },

    [DIFFICULTY_NORMAL][TRAINER_DRISLEDGEGYM_TRAINER3] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        .party = TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER3),
    },

    [DIFFICULTY_NORMAL][TRAINER_DRISLEDGEGYM_TRAINER4] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        .party = TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER4),
    },

    [DIFFICULTY_NORMAL][TRAINER_DRISLEDGEGYM_TRAINER5] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        .party = TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER5),
    },

    [DIFFICULTY_NORMAL][TRAINER_DRISLEDGEGYM_TRAINER6] =
    {
        HEX_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("???"),
        .party = TRAINER_PARTY(sParty_DRISLEDGEGYM_TRAINER6),
    },

    [DIFFICULTY_NORMAL][TRAINER_LEADER_ACEROLA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_ACEROLA,
        .trainerName = _("Acerola"),
        .items = {ITEM_FULL_RESTORE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_GHOST,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_TRAINER_LEADER_ACEROLA),
    },

    [DIFFICULTY_NORMAL][TRAINER_LEADER_JASMINE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE |TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JASMINE,
        .trainerName = _("Jasmine"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_LeaderJasmine),
    },

    [DIFFICULTY_NORMAL][TRAINER_LEADER_JASMINE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_JASMINE,
        .trainerName = _("Jasmine"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_LeaderJasmine2),
    },
    [DIFFICULTY_NORMAL][TRAINER_KASEN] =
    {
        .trainerClass = TRAINER_CLASS_KASEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_KASEN,
        .trainerName = _("Kasen"),
        .mugshotColor = MUGSHOT_COLOR_FLYING,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_Kasen),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR1_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Ellen"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR1_SWIMMER_F),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR2_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Floyd"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR2_SWIMMER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR3_SWIMMER_OLDSISTER] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Lila"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR3_SWIMMER_OLDSISTER),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR4_TUBER] =
    {
        TUBER_M_INFO,
        DUMB_AI,
        .trainerName = _("Roy"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR4_TUBER),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR5_FISHERMAN] =
    {
        FISHERMAN_INFO,
        BASIC_AI,
        .trainerName = _("Clancy"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR5_FISHERMAN),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR6_LANDSWIMMER_1] =
    {
        GEN4_SWIMMER_INFO,
        BASIC_AI,
        .trainerName = _("Bernice"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR6_LANDSWIMMER_1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR7_LANDSWIMMER_2] =
    {
        GEN4_SWIMMER_INFO,
        BASIC_AI,
        .trainerName = _("Hilda"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR7_LANDSWIMMER_2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR8_SAILOR] =
    {
        SAILOR_INFO,
        BASIC_AI,
        .trainerName = _("Mick"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR8_SAILOR),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR9_SWIMMER_M1] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Anthony"),
        .items = {},
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR9_SWIMMER_M1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR10_SWIMMER_M2] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Samuel"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR10_SWIMMER_M2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R3_TR11_SWIMMER_F1] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Nina"),
        .party = TRAINER_PARTY(sParty_TRAINER_R3_TR11_SWIMMER_F1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R9_TR1_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        .trainerName = _("Elliot"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR1_SWIMMER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_R9_TR2_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Francis"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR2_BLACKBELT),
    },
    [DIFFICULTY_NORMAL][TRAINER_R9_TR3_BIRDKEEPER] =
    {
        BIRD_KEEPER_INFO,
        BASIC_AI,
        .trainerName = _("Dwayne"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR3_BIRDKEEPER),
    },
    [DIFFICULTY_NORMAL][TRAINER_R9_TR4_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("April"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR4_BATTLEGIRL),
    },
    [DIFFICULTY_NORMAL][TRAINER_R9_TR5_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Melody"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR5_SWIMMER_F),
    },
    [DIFFICULTY_NORMAL][TRAINER_R9_TR6_FISHERMAN] =
    {
        FISHERMAN_INFO,
        BASIC_AI,
        .trainerName = _("Saul"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR6_FISHERMAN),
    },
    [DIFFICULTY_NORMAL][TRAINER_R9_TR7_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Damon"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR7_HIKER),
    },

    [DIFFICULTY_NORMAL][TRAINER_R9_TR8_COLLECTOR] =
    {
        COLLECTOR_INFO,
        BASIC_AI,
        .trainerName = _("Louis"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR8_COLLECTOR),
    },

    [DIFFICULTY_NORMAL][TRAINER_R9_TR9_SWIMMER_M2] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Hector"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR9_SWIMMER_M2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R9_TR10_LANDSWIMMER] =
    {
        GEN4_SWIMMER_INFO,
        BASIC_AI,
        .trainerName = _("Carla"),
        .party = TRAINER_PARTY(sParty_TRAINER_R9_TR10_LANDSWIMMER),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR1_ACESWIMMER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_F_SWIMMER,
        .trainerName = _("Ida"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR1_ACESWIMMER),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR2_SWIMMER_F1] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Layla"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR2_SWIMMER_F1),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR3_FISHERMAN] =
    {
        FISHERMAN_INFO,
        DUMB_AI,
        .trainerName = _("Logan"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR3_FISHERMAN),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR4_SWIMMER_M1] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Derek"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR4_SWIMMER_M1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R10_TR5_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        .trainerName = _("Daisuke"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR5_BLACKBELT),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR6_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Wright"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR6_HIKER),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR7_SWIMMER_F2] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        .trainerName = _("Coral"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR7_SWIMMER_F2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR8_SWIMMER_M2] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        .trainerName = _("Kieran"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR8_SWIMMER_M2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR9_BATTLEGIRL] =
    {
        BATTLE_GIRL_INFO,
        BASIC_AI,
        .trainerName = _("Marissa"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR9_BATTLEGIRL),
    },

    [DIFFICULTY_NORMAL][TRAINER_R10_TR10_TUBER_M] =
    {
        TUBER_M_INFO,
        DUMB_AI,
        .trainerName = _("Dillon"),
        .party = TRAINER_PARTY(sParty_TRAINER_R10_TR10_TUBER_M),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR10_NINJABOY] =
    {
        NINJA_BOY_INFO,
        BASIC_AI,
        .trainerName = _("Hokuto"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR10_NINJABOY),
    },

    [DIFFICULTY_NORMAL][TRAINER_FACTORY_ROCKET_1] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_1),
    },

    [DIFFICULTY_NORMAL][TRAINER_R16_TR11_EXPERT_F] =
    {
        EXPERT_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Bryn"),
        .party = TRAINER_PARTY(sParty_TRAINER_R16_TR11_EXPERT_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_FACTORY_ROCKET_2] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_2),
    },

    [DIFFICULTY_NORMAL][TRAINER_FACTORY_ROCKET_3] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("“Grunt”"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_3),
    },

    [DIFFICULTY_NORMAL][TRAINER_FACTORY_ROCKET_4] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_4),
    },

    [DIFFICULTY_NORMAL][TRAINER_FACTORY_ROCKET_5] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_5),
    },

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_373] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_374] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_FACTORY_ROCKET_PETREL] =
    {
        .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = _("Petrel"),
        .items = {ITEM_HYPER_POTION},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_TRAINER_FACTORY_ROCKET_PETREL),
    },

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_376_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_377_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_378_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_379_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_380_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_381_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_R17_TR1_CAMPER_M] =
    {
        PKMN_RANGER_M_INFO,
        BASIC_AI,
        .trainerName = _("Isaiah"),
        .party = TRAINER_PARTY(sParty_TRAINER_R17_TR1_CAMPER_M),
    },

    [DIFFICULTY_NORMAL][TRAINER_R17_TR2_PICNICKER1] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Isobel"),
        .party = TRAINER_PARTY(sParty_TRAINER_R17_TR2_PICNICKER1),
    },

    [DIFFICULTY_NORMAL][TRAINER_R17_TR3_PICNICKER2] =
    {
        PKMN_RANGER_F_INFO,
        BASIC_AI,
        .trainerName = _("Janine"),
        .party = TRAINER_PARTY(sParty_TRAINER_R17_TR3_PICNICKER2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R17_TR4_MANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Gregory"),
        .party = TRAINER_PARTY(sParty_TRAINER_R17_TR4_MANIAC),
    },

    [DIFFICULTY_NORMAL][TRAINER_R17_TR5_SCIENTIST] =
    {
        SCIENTIST_INFO,
        BASIC_AI,
        .trainerName = _("Alan"),
        .party = TRAINER_PARTY(sParty_TRAINER_R17_TR5_SCIENTIST),
    },

    [DIFFICULTY_NORMAL][TRAINER_R17_TR6_HIKER1] =
    {
        HIKER_INFO,
        .trainerName = _("Gus"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING,
        .party = TRAINER_PARTY(sParty_TRAINER_R17_TR6_HIKER1),
    },

    [DIFFICULTY_NORMAL][TRAINER_R17_TR7_HIKER2] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Ron"),
        .party = TRAINER_PARTY(sParty_TRAINER_R17_TR7_HIKER2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R17_TR8_COOLTRAINER] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .trainerName = _("Theo"),
        .party = TRAINER_PARTY(sParty_TRAINER_R17_TR8_COOLTRAINER),
    },

    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR1_HIKER1] =
    {
        HIKER_INFO,
        ADVANCED_AI,
        .trainerName = _("Lenny"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR1_HIKER1),
    },

    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR2_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        ADVANCED_AI,
        .trainerName = _("Shinobu"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR2_BLACKBELT),
    },

    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR3_PICNICKER] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Nicolas"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR3_PICNICKER),
    },

    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR4_FIREBREATHER] =
    {
        KINDLER_INFO,
        ADVANCED_AI,
        .trainerName = _("Pedro"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR4_FIREBREATHER),
    },

    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR5_BLACKBELT2] =
    {
        BLACK_BELT_INFO,
        ADVANCED_AI,
        .trainerName = _("Silas"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR5_BLACKBELT2),
    },

    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR6_CAMPERM] =
    {
        PKMN_RANGER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Kyler"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR6_CAMPERM),
    },

    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR7_PICNICKER2] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Allison"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR7_PICNICKER2),
    },

    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR8_HIKER2] =
    {
        HIKER_INFO,
        .trainerName = _("Cole"),
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_WILL_SUICIDE,
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR8_HIKER2),
    },
    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR9_BEAUTY] =
    {
        BEAUTY_INFO,
        ADVANCED_AI,
        .trainerName = _("Laura"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR9_BEAUTY),
    },
    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR10_FIREBREATHER2] =
    {
        KINDLER_INFO,
        ADVANCED_AI,
        .trainerName = _("Hugh"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR10_FIREBREATHER2),
    },
    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR11_HIKER3] =
    {
        HIKER_INFO,
        ADVANCED_AI,
        .trainerName = _("Perry"),
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR11_HIKER3),
    },
    [DIFFICULTY_NORMAL][TRAINER_BASALTUNNEL_TR12_BROCK] =
    {
        .trainerClass = TRAINER_CLASS_ELITE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BROCK,
        .trainerName = _("Brock"),
        .mugshotColor = MUGSHOT_COLOR_GROUND,
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TRAINER_BASALTUNNEL_TR12_BROCK),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR1_HIKER1] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Presley"),
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR1_HIKER1),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR2_RANGER_M] =
    {
        PKMN_RANGER_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Humberto"),
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR2_RANGER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR3_KINDLER] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .trainerName = _("Edwardo"),
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR3_KINDLER),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR4_HIKER2] =
    {
        HIKER_INFO,
        BASIC_AI,
        .trainerName = _("Benny"),
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR4_HIKER2),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR5_RANGER_F] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .trainerName = _("Alana"),
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR5_RANGER_F),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR6_SCIENTIST] =
    {
        SCIENTIST_INFO,
        BASIC_AI,
        .trainerName = _("Chester"),
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR6_SCIENTIST),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR7_POKEMANIAC] =
    {
        POKEMANIAC_INFO,
        BASIC_AI,
        .trainerName = _("Morgan"),
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR7_POKEMANIAC),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR8_BREEDER_M] =
    {
        ENTHUSIAST_M_INFO,
        BASIC_AI,
        .trainerName = _("Glenn"),
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR8_BREEDER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_R18_TR9_ACE_TRAINER_M] =
    {
        BW_ACE_M_INFO,
        ADVANCED_AI,
        .trainerName = _("Tyrone"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .party = TRAINER_PARTY(sParty_TRAINER_R18_TR9_ACE_TRAINER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEADER_PRYCE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_PRYCE,
        .trainerName = _("Pryce"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_BROTHER,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TRAINER_LEADER_PRYCE),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEADER_BLAINE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_BLAINE,
        .trainerName = _("Blaine"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .mugshotColor = MUGSHOT_COLOR_BROTHER,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
        .party = TRAINER_PARTY(sParty_TRAINER_LEADER_BLAINE),
    },
    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR1_HIKER1] =
    {
        HIKER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Matti"),
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR1_HIKER1),
    },
    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR2_KINDLER1] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Beck"),
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR2_KINDLER1),
    },
    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR3_SENIOR] =
    {
        .trainerClass = TRAINER_CLASS_GYMMEMBER_DOUBLE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_JUNIOR,
        .trainerName = _("Helena"),
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR3_SENIOR),
    },
    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR4_JUNIOR] =
    {
        .trainerClass = TRAINER_CLASS_GYMMEMBER_DOUBLE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SENIOR,
        .trainerName = _("Irene"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR4_JUNIOR),
    },
    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR5_RANGER_M] =
    {
        PKMN_RANGER_M_INFO,
        ADVANCED_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Mika"),
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR5_RANGER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR6_RANGER_F] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Suzanne"),
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR6_RANGER_F),
    },
    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR7_MANIAC] =
    {
        RUIN_MANIAC_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Oscar"),
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR7_MANIAC),
    },
    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR8_COLLECTOR] =
    {
        COLLECTOR_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Laurence"),
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR8_COLLECTOR),
    },

    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR9_KINDLER2] =
    {
        KINDLER_INFO,
        BASIC_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Emil"),
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR9_KINDLER2),
    },

    [DIFFICULTY_NORMAL][TRAINER_FROSTGYM_TR10_RANGER_F2] =
    {
        PKMN_RANGER_F_INFO,
        ADVANCED_AI,
        .isGymTrainer = TRUE,
        .trainerName = _("Elsa"),
        .party = TRAINER_PARTY(sParty_TRAINER_FROSTGYM_TR10_RANGER_F2),
    },

    [DIFFICULTY_NORMAL][TRAINER_AZURETIDE_CELEBI_TR1] =
    {
        EXPERT_F_INFO,
        ADVANCED_AI,
        MOREBP,
        .trainerName = _("Aino"),
        .items = {ITEM_FULL_RESTORE},
        .party = TRAINER_PARTY(s_Party_TRAINER_AZURETIDE_CELEBI_TR1),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAOLISLE_CELEBI_TR2] =
    {
        EXPERT_M_INFO,
        ADVANCED_AI,
        MOREBP,
        .trainerName = _("Pentti"),
        .items = {ITEM_FULL_RESTORE},
        .party = TRAINER_PARTY(s_Party_TRAINER_KAOLISLE_CELEBI_TR2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R19_TR1_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Jocelyn"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR1_SWIMMER_F),
    },

    [DIFFICULTY_NORMAL][TRAINER_R19_TR2_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Harold"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR2_SWIMMER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_R19_TR3_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Jeffery"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR3_SWIMMER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_R19_TR4_SWIMMER_COUPLE] =
    {
        SWIMMERS_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Heidi & Jesse"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR4_SWIMMER_COUPLE),
    },
    [DIFFICULTY_NORMAL][TRAINER_R19_TR5_SWIMMER_F] =
    {
        SWIMMER_F_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Paula"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR5_SWIMMER_F),
    },
    [DIFFICULTY_NORMAL][TRAINER_R19_TR6_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Casey"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR6_SWIMMER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_R19_TR7_BLACKBELT] =
    {
        BLACK_BELT_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Duane"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR7_BLACKBELT),
    },
    [DIFFICULTY_NORMAL][TRAINER_R19_TR8_HIKER] =
    {
        HIKER_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Travis"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR8_HIKER),
    },
    [DIFFICULTY_NORMAL][TRAINER_R19_TR9_PICNICKER] =
    {
        PICNICKER_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Cyndy"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR9_PICNICKER),
    },
    [DIFFICULTY_NORMAL][TRAINER_R19_TR10_SWIMMER_M] =
    {
        SWIMMER_M_INFO,
        BASIC_AI,
        MOREBP,
        .trainerName = _("Jared"),
        .party = TRAINER_PARTY(sParty_TRAINER_R19_TR10_SWIMMER_M),
    },
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("CLARISSA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clarissa),
    },
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("ANGELICA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Angelica),
    },
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline2),
    },
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline3),
    },
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline4),
    },
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("MADELINE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline5),
    },
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BEVERLY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beverly),
    },
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("IMANI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Imani),
    },
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KYLA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kyla),
    },
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DENISE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Denise),
    },
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BETH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beth),
    },
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TARA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tara),
    },
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("MISSY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Missy),
    },
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ALICE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alice),
    },

    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny1),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("GRACE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Grace),
    },

    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TANYA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tanya),
    },

    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SHARON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sharon),
    },

    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("NIKKI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nikki),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("BRENDA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brenda),
    },
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KATIE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katie),
    },
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SUSIE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Susie),
    },
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KARA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kara),
    },
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dana),
    },
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("SIENNA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sienna),
    },
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("DEBRA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Debra),
    },
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LINDA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Linda),
    },
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("KAYLEE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kaylee),
    },
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("LAUREL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Laurel),
    },
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("CARLEE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Carlee),
    },
    [DIFFICULTY_NORMAL][TRAINER_JENNY_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny2),
    },
    [DIFFICULTY_NORMAL][TRAINER_JENNY_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny3),
    },
    [DIFFICULTY_NORMAL][TRAINER_JENNY_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny4),
    },
    [DIFFICULTY_NORMAL][TRAINER_JENNY_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("JENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny5),
    },
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("HEIDI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Heidi),
    },
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BECKY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Becky),
    },
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CAROL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Carol),
    },
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("NANCY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nancy),
    },
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("MARTHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Martha),
    },
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana1),
    },
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("CEDRIC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cedric),
    },
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("IRENE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Irene),
    },
    [DIFFICULTY_NORMAL][TRAINER_DIANA_2] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana2),
    },
    [DIFFICULTY_NORMAL][TRAINER_DIANA_3] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana3),
    },
    [DIFFICULTY_NORMAL][TRAINER_DIANA_4] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana4),
    },
    [DIFFICULTY_NORMAL][TRAINER_DIANA_5] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("DIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana5),
    },
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv1),
    },
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv2),
    },
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GinaAndMia1),
    },
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("MIU & YUKI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MiuAndYuki),
    },
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_3] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv3),
    },
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("GINA & MIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GinaAndMia2),
    },
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_4] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv4),
    },
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_5] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv5),
    },
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_6] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("AMY & LIV"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv6),
    },
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Huey),
    },
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("EDMOND"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edmond),
    },
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest1),
    },
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DWAYNE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dwayne),
    },
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("PHILLIP"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Phillip),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("LEONARD"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Leonard),
    },
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("DUNCAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Duncan),
    },
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest2),
    },
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest3),
    },
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest4),
    },
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("ERNEST"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest5),
    },
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ELI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Eli),
    },
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("ANNIKA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Annika),
    },
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("JAZMYN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jazmyn),
    },
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JONAS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jonas),
    },
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("KAYLEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kayley),
    },
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("AURON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Auron),
    },

    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("KELVIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kelvin),
    },

    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("MARLEY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Marley),
    },

    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("REYNA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Reyna),
    },

    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("HUDSON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hudson),
    },

    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("CONOR"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Conor),
    },

    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin1),
    },

    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("HECTOR"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hector),
    },
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TabithaMossdeep),
    },
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin2),
    },
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin3),
    },
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin4),
    },
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("EDWIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin5),
    },
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR1),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PRIMROSE_MEADOW] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_PRIMROSE_MEADOW_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_PRIMROSE_MEADOW_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_PRIMROSE_MEADOW_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_PRIMROSE_MEADOW_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_CORALGROVE_ELEVATOR] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_CORALGROVE_ELEVATOR_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_CORALGROVE_ELEVATOR_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_CORALGROVE_ELEVATOR_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_CORALGROVE_ELEVATOR_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_11_NORMAL] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_ROUTE_11_NORMAL_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_ROUTE_11_NORMAL_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_ROUTE_11_NORMAL_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_ROUTE_11_NORMAL_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_11_ANGRY] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_ROUTE_11_ANGRY_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_ROUTE_11_ANGRY_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_ROUTE_11_ANGRY_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_ROUTE_11_ANGRY_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_BASALEK_TOWN] =
    {
        MALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_BRENDAN_BASALEK_TOWN_GRASS),
        .partyGrass = sParty_TRAINER_BRENDAN_BASALEK_TOWN_GRASS,
        .partyFire = sParty_TRAINER_BRENDAN_BASALEK_TOWN_FIRE,
        .partyWater = sParty_TRAINER_BRENDAN_BASALEK_TOWN_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_525_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_526_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_527_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_528_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_MAY_PRIMROSE_MEADOW] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_PRIMROSE_MEADOW_GRASS),
        .partyGrass = sParty_TRAINER_MAY_PRIMROSE_MEADOW_GRASS,
        .partyFire = sParty_TRAINER_MAY_PRIMROSE_MEADOW_FIRE,
        .partyWater = sParty_TRAINER_MAY_PRIMROSE_MEADOW_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_MAY_CORALGROVE_ELEVATOR] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_CORALGROVE_ELEVATOR_GRASS),
        .partyGrass = sParty_TRAINER_MAY_CORALGROVE_ELEVATOR_GRASS,
        .partyFire = sParty_TRAINER_MAY_CORALGROVE_ELEVATOR_FIRE,
        .partyWater = sParty_TRAINER_MAY_CORALGROVE_ELEVATOR_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_11_NORMAL] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_ROUTE_11_NORMAL_GRASS),
        .partyGrass = sParty_TRAINER_MAY_ROUTE_11_NORMAL_GRASS,
        .partyFire = sParty_TRAINER_MAY_ROUTE_11_NORMAL_FIRE,
        .partyWater = sParty_TRAINER_MAY_ROUTE_11_NORMAL_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_11_ANGRY] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_ROUTE_11_ANGRY_GRASS),
        .partyGrass = sParty_TRAINER_MAY_ROUTE_11_ANGRY_GRASS,
        .partyFire = sParty_TRAINER_MAY_ROUTE_11_ANGRY_FIRE,
        .partyWater = sParty_TRAINER_MAY_ROUTE_11_ANGRY_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_MAY_BASALEK_TOWN] =
    {
        FEMALE_RIVAL_INFO,
        ADVANCED_AI,
        .partySize = ARRAY_COUNT(sParty_TRAINER_MAY_BASALEK_TOWN_GRASS),
        .partyGrass = sParty_TRAINER_MAY_BASALEK_TOWN_GRASS,
        .partyFire = sParty_TRAINER_MAY_BASALEK_TOWN_FIRE,
        .partyWater = sParty_TRAINER_MAY_BASALEK_TOWN_WATER,
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_534_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_535_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_536_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_537_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac1),
    },
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DAVIS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Davis),
    },
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("MITCHELL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Mitchell),
    },
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac2),
    },
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac3),
    },
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac4),
    },

    [DIFFICULTY_NORMAL][TRAINER_ISAAC_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("ISAAC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac5),
    },

    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia1),
    },
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("HALLE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Halle),
    },
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("GARRISON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Garrison),
    },
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia2),
    },
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia3),
    },
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia4),
    },

    [DIFFICULTY_NORMAL][TRAINER_LYDIA_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("LYDIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia5),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR3_NINJABOYSON_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson1),
    },

    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("LORENZO"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Lorenzo),
    },

    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("SEBASTIAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sebastian),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR3_NINJABOYSON_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jackson2),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR3_NINJABOYSON_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson3),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR3_NINJABOYSON_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jackson4),
    },

    [DIFFICULTY_NORMAL][TRAINER_R7_TR3_NINJABOYSON_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson5),
    },
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine1),
    },
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("JENNA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jenna),
    },
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("SOPHIA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sophia),
    },
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine2),
    },
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Catherine3),
    },
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine4),
    },

    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("CATHERINE"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Catherine5),
    },

    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("JULIO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Julio),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern5),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntUnused),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre4),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntJaggedPass),
    },

    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MARC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marc),
    },

    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("BRENDEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brenden),
    },

    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("LILITH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lilith),
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("CRISTIAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cristian),
    },

    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("SYLVIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sylvia),
    },

    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("LEONARDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Leonardo),
    },

    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ATHENA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Athena),
    },

    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("HARRISON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Harrison),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtChimney2),
    },

    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("CLARENCE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clarence),
    },

    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("TERRY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Terry),
    },

    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("NATE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nate),
    },

    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("KATHLEEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kathleen),
    },

    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("CLIFFORD"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clifford),
    },

    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("NICHOLAS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicholas),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter3),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter4),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter5),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter6),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter7),
    },

    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MACEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Macey),
    },

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_592_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_UNUSED_593_] =
    {},

    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("PAXTON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Paxton),
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ISABELLA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabella),
    },
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst5),
    },
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TabithaMtChimney),
    },
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("JONATHAN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jonathan),
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_599_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_600_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MaxieMagmaHideout),
    },
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("MAXIE"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MaxieMtChimney),
    },
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("TIANA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tiana),
    },
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley1),
    },
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("JANICE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Janice),
    },
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("VIVI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vivi),
    },
    [DIFFICULTY_NORMAL][TRAINER_HALEY_2] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley2),
    },
    [DIFFICULTY_NORMAL][TRAINER_HALEY_3] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley3),
    },
    [DIFFICULTY_NORMAL][TRAINER_HALEY_4] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley4),
    },
    [DIFFICULTY_NORMAL][TRAINER_HALEY_5] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("HALEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley5),
    },
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("SALLY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sally),
    },
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ROBIN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robin),
    },
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("ANDREA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andrea),
    },
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("CRISSY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Crissy),
    },
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("RICK"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rick),
    },
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("LYLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lyle),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JOSE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jose),
    },
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("DOUG"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Doug),
    },
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("GREG"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Greg),
    },
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("KENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kent),
    },
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James1),
    },
    [DIFFICULTY_NORMAL][TRAINER_JAMES_2] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James2),
    },
    [DIFFICULTY_NORMAL][TRAINER_JAMES_3] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James3),
    },
    [DIFFICULTY_NORMAL][TRAINER_JAMES_4] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James4),
    },
    [DIFFICULTY_NORMAL][TRAINER_JAMES_5] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("JAMES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James5),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("BRICE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brice),
    },
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent1),
    },
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LENNY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lenny),
    },
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lucas1),
    },
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ALAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alan),
    },
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("CLARK"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clark),
    },
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("ERIC"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Eric),
    },
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("LUCAS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lucas2),
    },
    [DIFFICULTY_NORMAL][TRAINER_MIKE_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mike1),
    },
    [DIFFICULTY_NORMAL][TRAINER_MIKE_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("MIKE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mike2),
    },
    [DIFFICULTY_NORMAL][TRAINER_TRENT_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent2),
    },
    [DIFFICULTY_NORMAL][TRAINER_TRENT_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent3),
    },
    [DIFFICULTY_NORMAL][TRAINER_TRENT_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent4),
    },
    [DIFFICULTY_NORMAL][TRAINER_TRENT_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("TRENT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent5),
    },
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("DEZ & LUKE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DezAndLuke),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("LEA & JED"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LeaAndJed),
    },
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan1),
    },
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan2),
    },
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan3),
    },
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan4),
    },
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("KIRA & DAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan5),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("JOHANNA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Johanna),
    },
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("GERALD"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Gerald),
    },
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("VIVIAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Vivian),
    },
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("DANIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Danielle),
    },
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("HIDEO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Hideo),
    },
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("KEIGO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Keigo),
    },
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("RILEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Riley),
    },
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("FLINT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Flint),
    },
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ASHLEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ashley),
    },
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyMauville),
    },
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR2),
    },
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR3),
    },
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR4),
    },
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("WALLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR5),
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_661_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_662_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_663_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_664_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_665_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_666_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("JONAH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jonah),
    },
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("HENRY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Henry),
    },
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("ROGER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Roger),
    },
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("ALEXA"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Alexa),
    },
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("RUBEN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Ruben),
    },
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji1),
    },
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("WAYNE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Wayne),
    },
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("AIDAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aidan),
    },
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("REED"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Reed),
    },
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("TISHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tisha),
    },
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("TORI & TIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ToriAndTia),
    },
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("KIM & IRIS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KimAndIris),
    },
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("TYRA & IVY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TyraAndIvy),
    },
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("MEL & PAUL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MelAndPaul),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay1),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_2] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay2),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_3] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay3),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_4] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_JohnAndJay4),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_5] =
    {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("JOHN & JAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay5),
    },
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("RELI & IAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ReliAndIan),
    },
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy1),
    },
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_2] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy2),
    },
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_3] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy3),
    },
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_4] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy4),
    },
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_5] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LILA & ROY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy5),
    },
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("LISA & RAY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LisaAndRay),
    },
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("CHRIS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chris),
    },
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("DAWSON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dawson),
    },
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("SARAH"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sarah),
    },
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("DARIAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Darian),
    },
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("HAILEY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hailey),
    },
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("CHANDLER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chandler),
    },
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("KALEB"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kaleb),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("JOSEPH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Joseph),
    },

    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("ALYSSA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alyssa),
    },

    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("MARCOS"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marcos),
    },

    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("RHETT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rhett),
    },

    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("TYRON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tyron),
    },

    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("CELINA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Celina),
    },

    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("BIANCA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bianca),
    },

    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("HAYDEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hayden),
    },

    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("SOPHIE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sophie),
    },

    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("COBY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Coby),
    },

    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("LAWRENCE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lawrence),
    },

    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("WYATT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Wyatt),
    },

    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("ANGELINA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Angelina),
    },

    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("KAI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kai),
    },

    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CHARLOTTE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Charlotte),
    },

    [DIFFICULTY_NORMAL][TRAINER_DESERT_TR9_HIKER3DRE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DEANDRE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Deandre),
    },
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout1),
    },
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout2),
    },
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout3),
    },
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout4),
    },
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout5),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout6),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout7),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout8),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout9),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout10),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout11),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout12),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout13),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout14),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout15),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("GRUNT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout16),
    },

    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("TABITHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TabithaMagmaHideout),
    },

    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("DARCY"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Darcy),
    },

    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("grunt"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MaxieMossdeep),
    },

    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("PETE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pete),
    },

    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("ISABELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabelle),
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres1),
    },

    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("JOSUE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Josue),
    },

    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("CAMRON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Camron),
    },

    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory1),
    },

    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CAROLINA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Carolina),
    },

    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("ELIJAH"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elijah),
    },

    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("CELIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Celia),
    },

    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("BRYAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bryan),
    },

    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("BRANDEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Branden),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("BRYANT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bryant),
    },
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("SHAYLA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Shayla),
    },
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("KYRA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kyra),
    },
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("JAIDEN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jaiden),
    },
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("ALIX"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alix),
    },
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("HELENE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Helene),
    },
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARLENE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marlene),
    },
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("DEVAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Devan),
    },
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("JOHNSON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Johnson),
    },
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("MELINA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Melina),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("BRANDI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brandi),
    },
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("AISHA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aisha),
    },
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("MAKAYLA"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Makayla),
    },
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FABIAN"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fabian),
    },
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("DAYTON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dayton),
    },
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("RACHEL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rachel),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("LEONEL"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Leonel),
    },
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("CALLIE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Callie),
    },
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("CALE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cale),
    },
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("MYLES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Myles),
    },
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("PAT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pat),
    },
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin1),
    },
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_768_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_UNUSED_769_] =
    {},
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne2),
    },
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne3),
    },
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne4),
    },
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("ROXANNE"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne5),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly2),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly3),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly4),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("BRAWLY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly5),
    },
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson2),
    },
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson3),
    },
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson4),
    },
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_VOLKNER,
        .trainerName = _("WATTSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson5),
    },
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery2),
    },
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery3),
    },
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery4),
    },
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("FLANNERY"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery5),
    },
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman2),
    },
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman3),
    },
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman4),
    },
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("NORMAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman5),
    },
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = TRAINER_PARTY(sParty_Winona2),
    },
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = TRAINER_PARTY(sParty_Winona3),
    },
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = TRAINER_PARTY(sParty_Winona4),
    },
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_SKYLA,
        .trainerName = _("WINONA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .party = TRAINER_PARTY(sParty_Winona5),
    },
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza2),
    },
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza3),
    },
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza4),
    },
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("TATE&LIZA"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza5),
    },
    [DIFFICULTY_NORMAL][TRAINER_JUAN_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan2),
    },
    [DIFFICULTY_NORMAL][TRAINER_JUAN_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan3),
    },
    [DIFFICULTY_NORMAL][TRAINER_JUAN_4] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan4),
    },
    [DIFFICULTY_NORMAL][TRAINER_JUAN_5] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("JUAN"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan5),
    },
    [DIFFICULTY_NORMAL][TRAINER_CASUAL_IRIS] =
    {
        .trainerClass = TRAINER_CLASS_ELITE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_IRIS_CASUAL,
        .trainerName = _("Iris"),
        .items = {ITEM_FULL_HEAL, ITEM_HYPER_POTION},
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY | AI_FLAG_SMART_MON_CHOICES,
        .party = TRAINER_PARTY(sParty_TRAINER_CASUAL_IRIS),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEADER_DRAYDEN] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_DRAYDEN,
        .trainerName = _("Drayden"),
        .items = {},
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Darius),
    },
    [DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_MINA] =
    {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_F_SWIMMER,
        .trainerName = _("Mina"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Steven),
    },
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BROTHER,
        .trainerName = _("ANABEL"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Anabel),
    },

    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("TUCKER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Tucker),
    },

    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_AARON,
        .trainerName = _("SPENSER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Spenser),
    },

    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("GRETA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Greta),
    },

    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("NOLAND"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Noland),
    },

    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("LUCY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Lucy),
    },

    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("BRANDON"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brandon),
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres2),
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres3),
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres4),
    },

    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("ANDRES"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres5),
    },
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory2),
    },
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory3),
    },
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory4),
    },
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("CORY"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory5),
    },
    [DIFFICULTY_NORMAL][TRAINER_PABLO_2] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo2),
    },
    [DIFFICULTY_NORMAL][TRAINER_PABLO_3] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo3),
    },
    [DIFFICULTY_NORMAL][TRAINER_PABLO_4] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo4),
    },
    [DIFFICULTY_NORMAL][TRAINER_PABLO_5] =
    {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("PABLO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo5),
    },
    [DIFFICULTY_NORMAL][TRAINER_KOJI_2] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji2),
    },
    [DIFFICULTY_NORMAL][TRAINER_KOJI_3] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji3),
    },
    [DIFFICULTY_NORMAL][TRAINER_KOJI_4] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji4),
    },

    [DIFFICULTY_NORMAL][TRAINER_KOJI_5] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("KOJI"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji5),
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin2),
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin3),
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin4),
    },

    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("CRISTIN"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin5),
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_2] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando2),
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_3] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando3),
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_4] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando4),
    },

    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_5] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("FERNANDO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando5),
    },
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer2),
    },
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer3),
    },
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer4),
    },
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("SAWYER"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer5),
    },
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle2),
    },
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_3] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle3),
    },
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_4] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle4),
    },
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_5] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("GABRIELLE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle5),
    },
    [DIFFICULTY_NORMAL][TRAINER_THALIA_2] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia2),
    },
    [DIFFICULTY_NORMAL][TRAINER_THALIA_3] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia3),
    },
    [DIFFICULTY_NORMAL][TRAINER_THALIA_4] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia4),
    },
    [DIFFICULTY_NORMAL][TRAINER_THALIA_5] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("THALIA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia5),
    },
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("MARIELA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Mariela),
    },
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("ALVARO"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Alvaro),
    },
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("EVERETT"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Everett),
    },
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("RED"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Red),
    },
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEAF,
        .trainerName = _("LEAF"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Leaf),
    },
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .trainerName = _("Brendan"),
        .mugshotColor = MUGSHOT_COLOR_BRENDAN,
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_BrendanLinkPlaceholder),
    },
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        .trainerName = _("May"),
        .mugshotColor = MUGSHOT_COLOR_MAY,
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_MayLinkPlaceholder),
    },
};