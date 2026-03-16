#define BROTHER                                                 \
    .trainerClass = TRAINER_CLASS_BROTHER,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_BROTHER,                          \
    NAME("Thomas"),                                             \
    .mugshotColor = MUGSHOT_COLOR_BROTHER,                      \
    .isRival = TRUE

#define MALE_RIVAL                                              \
    .trainerClass = TRAINER_CLASS_RIVAL,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_BRENDAN,                          \
    NAME("Brendan"),                                            \
    .mugshotColor = MUGSHOT_COLOR_BRENDAN,                      \
    .isRival = TRUE

#define FEMALE_RIVAL                                            \
    .trainerClass = TRAINER_CLASS_RIVAL,                        \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                         TRAINER_ENCOUNTER_MUSIC_FEMALE,        \
    .trainerPic = TRAINER_PIC_MAY,                              \
    NAME("May"),                                                \
    .mugshotColor = MUGSHOT_COLOR_MAY,                          \
    .isRival = TRUE

#define LEAF                                                                    \
    .trainerClass = TRAINER_CLASS_RIVAL,                                        \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,   \
    .trainerPic = TRAINER_PIC_LEAF,                                             \
    NAME("LEAF"),                                                               \
    .items = {},                                                                \
    .battleType = TRAINER_BATTLE_TYPE_SINGLES,                                  \
    .aiFlags = 0,                                                               \
    TPARTY(sParty_Leaf),

#define LEADER(class, musicGender, pic, mugshot)   .trainerClass = class,.encounterMusic_gender = musicGender,.trainerPic = pic,.mugshotColor = mugshot

#define NAME(name)      .trainerName = _(name)
#define EBP             .extendedBpCap = TRUE
#define NO_AI           .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SEQUENCE_SWITCHING
#define DUMB_AI         .aiFlags = AI_FLAG_CHECK_BAD_MOVE
#define SEQ_AI          .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SEQUENCE_SWITCHING
#define BASIC_AI        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT
#define BASIC_SMART     .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES
#define ADV_AI          .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY
#define EXPERT_AI       .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES
#define SMART           AI_FLAG_SMART_SWITCHING | AI_FLAG_SMART_MON_CHOICES
#define GYM             .isGymTrainer = TRUE,
#define BAT             AI_FLAG_PREFER_BATON_PASS
#define ACE             AI_FLAG_ACE_POKEMON
#define SEQ             AI_FLAG_SEQUENCE_SWITCHING
#define BAD             AI_FLAG_CHECK_BAD_MOVE
#define HPA             AI_FLAG_HP_AWARE
#define SUI             AI_FLAG_WILL_SUICIDE
#define ITEMS(...)      .items = { __VA_ARGS__ }

#define YOUNGSTER                                               \
    .trainerClass = TRAINER_CLASS_YOUNGSTER,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_YOUNGSTER

#define FISHERMAN                                               \
    .trainerClass = TRAINER_CLASS_FISHERMAN,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_FISHERMAN

#define BUG_CATCHER                                             \
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_BUG_CATCHER

#define TUBER_F                                                 \
    .trainerClass = TRAINER_CLASS_TUBER_F,                      \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_TUBER_F

#define TUBER_M                                                 \
    .trainerClass = TRAINER_CLASS_TUBER_M,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_TUBER_M

#define BW_ACE_M                                                \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_M

#define BW_ACE_F                                                \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_F

#define LASS                                                    \
    .trainerClass = TRAINER_CLASS_LASS,                         \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_LASS

#define BLACK_BELT                                              \
    .trainerClass = TRAINER_CLASS_BLACK_BELT,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_BLACK_BELT

#define CAMPER                                                  \
    .trainerClass = TRAINER_CLASS_CAMPER,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_CAMPER

#define SCHOOL_GIRL                                            \
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F

#define LADY                                                    \
    .trainerClass = TRAINER_CLASS_LADY,                         \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_LADY

#define TEAM_ROCKET_M                                           \
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,      \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,                     \
    NAME("Grunt")

#define SCIENTIST_R                                        \
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,      \
    .trainerPic = TRAINER_PIC_SCIENTIST,                        \
    NAME("Scientist")


#define TEAM_ROCKET_F                                           \
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_AQUA,      \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,                     \
    NAME("Grunt")

#define DARK_ROCKET_M                                       \
    .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,              \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,      \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M

#define DARK_ROCKET_F                                       \
    .trainerClass = TRAINER_CLASS_DARKNESS_ROCKET,              \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_AQUA,      \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F

#define SCHOOL_BOY                                            \
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M

#define NURSE                                                   \
    .trainerClass = TRAINER_CLASS_NURSE,                        \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_AROMA_LADY,                       \
    NAME("Tutor"),                                              \
    .aiFlags = AI_FLAG_ACE_POKEMON | AI_FLAG_WILL_SUICIDE |     \
    AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SEQUENCE_SWITCHING

#define EV_NURSE                                                \
    .trainerClass = TRAINER_CLASS_EV_NURSE,                     \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_AROMA_LADY,                       \
    NAME("Tutor"),                                              \
    .aiFlags = AI_FLAG_ACE_POKEMON | AI_FLAG_WILL_SUICIDE |     \
    AI_FLAG_PREFER_STATUS_MOVES | AI_FLAG_SEQUENCE_SWITCHING

#define HIKER                                                   \
    .trainerClass = TRAINER_CLASS_HIKER,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_HIKER                        

#define NINJA_BOY                                               \
    .trainerClass = TRAINER_CLASS_NINJA_BOY,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_NINJA_BOY          

#define RUNNER_M                                        \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M

#define RUNNER_F                                        \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                         TRAINER_ENCOUNTER_MUSIC_FEMALE,        \
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F

#define CYCLER_M                                                \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M

#define CYCLER_F                                                \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F

#define SWIMMING_TRIATHLETE_M                                   \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M

#define SWIMMING_TRIATHLETE_F                                   \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F

#define BIRD_KEEPER                                             \
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_BIRD_KEEPER

#define BATTLE_GIRL                                             \
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_BATTLE_GIRL

#define PSYCHIC_M                                               \
    .trainerClass = TRAINER_CLASS_PSYCHIC,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_PSYCHIC_M

#define PSYCHIC_F                                               \
    .trainerClass = TRAINER_CLASS_PSYCHIC,                      \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_PSYCHIC_F

#define BEAUTY                                                  \
    .trainerClass = TRAINER_CLASS_BEAUTY,                       \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_BEAUTY

#define POKEFAN_F                                               \
    .trainerClass = TRAINER_CLASS_POKEFAN,                      \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_POKEFAN_F

#define POKEFAN_M                                               \
    .trainerClass = TRAINER_CLASS_POKEFAN,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_POKEFAN_M

#define GENTLEMAN                                               \
    .trainerClass = TRAINER_CLASS_GENTLEMAN,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,      \
    .trainerPic = TRAINER_PIC_GENTLEMAN

#define ENTHUSIAST_M                                            \
    .trainerClass = TRAINER_CLASS_ENTHUSIAST,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_AFICIONADO_M,                     \
    EBP

#define ENTHUSIAST_F                                            \
    .trainerClass = TRAINER_CLASS_ENTHUSIAST,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_AFICIONADO_F,                     \
    EBP

#define OLD_COUPLE                                              \
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_OLD_COUPLE,                       \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define RANGER_M                                                \
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M

#define RANGER_F                                                \
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F

#define RUIN_MANIAC                                             \
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_RUIN_MANIAC

#define PICNICKER                                               \
    .trainerClass = TRAINER_CLASS_PICNICKER,                    \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_PICNICKER

#define JUNIOR                                                  \
    .trainerClass = TRAINER_CLASS_GYMMEMBER_DOUBLE,             \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_JUNIOR
#define SENIOR                                                  \
    .trainerClass = TRAINER_CLASS_GYMMEMBER_DOUBLE,             \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_SENIOR


#define KINDLER                                                 \
    .trainerClass = TRAINER_CLASS_KINDLER,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_KINDLER

#define PARASOL_LADY                                            \
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,                 \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_PARASOL_LADY

#define HEX_MANIAC                                              \
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_HEX_MANIAC

#define ARTIST                                                  \
    .trainerClass = TRAINER_CLASS_ARTIST,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,     \
    .trainerPic = TRAINER_PIC_ARTIST

#define DANCER                                                  \
    .trainerClass = TRAINER_CLASS_DANCER,                       \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE                 \

#define BUG_MANIAC                                              \
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_BUG_MANIAC

#define BREEDER_F                                               \
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,                 \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F

#define BREEDER_M                                               \
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,                 \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M

#define POKEMANIAC                                              \
    .trainerClass = TRAINER_CLASS_POKEMANIAC,                   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_POKEMANIAC

#define TWINS                                                   \
    .trainerClass = TRAINER_CLASS_TWINS,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_TWINS,                            \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define SWIMMER_M                                               \
    .trainerClass = TRAINER_CLASS_SWIMMER_M,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMER_M

#define SWIMMER_F                                               \
    .trainerClass = TRAINER_CLASS_SWIMMER_F,                    \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_SWIMMER_F

#define ACE_M                                                   \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_COOLTRAINER_M


#define ACE_F                                                   \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_COOLTRAINER_F

#define COOLSWIMMER_F                                           \
    .trainerClass = TRAINER_CLASS_COOLTRAINER,                  \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_COOL,      \
    .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_F_SWIMMER


#define GUITARIST                                               \
    .trainerClass = TRAINER_CLASS_GUITARIST,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_GUITARIST

#define YOUNG_COUPLE                                            \
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,                 \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,      \
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,                     \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define RICH_BOY                                                \
    .trainerClass = TRAINER_CLASS_RICH_BOY,                     \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,      \
    .trainerPic = TRAINER_PIC_RICH_BOY

#define SR_AND_JR                                               \
    .trainerClass = TRAINER_CLASS_SR_AND_JR,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,     \
    .trainerPic = TRAINER_PIC_SR_AND_JR,                        \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define AROMA_LADY                                              \
    .trainerClass = TRAINER_CLASS_AROMA_LADY,                   \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_FEMALE,    \
    .trainerPic = TRAINER_PIC_AROMA_LADY

#define EXPERT_M                                                \
    .trainerClass = TRAINER_CLASS_EXPERT,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_EXPERT_M

#define EXPERT_F                                                \
    .trainerClass = TRAINER_CLASS_EXPERT,                       \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_INTENSE,   \
    .trainerPic = TRAINER_PIC_EXPERT_F

#define SCIENTIST                                               \
    .trainerClass = TRAINER_CLASS_SCIENTIST,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_SCIENTIST

#define GEN4_SWIMMER                                            \
    .trainerClass = TRAINER_CLASS_SWIMMER_F,                    \
    .encounterMusic_gender = F_TRAINER_FEMALE |                 \
                             TRAINER_ENCOUNTER_MUSIC_SWIMMER,   \
    .trainerPic = TRAINER_PIC_GEN4_SWIMMER_F

#define SAILOR                                                  \
    .trainerClass = TRAINER_CLASS_SAILOR,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,      \
    .trainerPic = TRAINER_PIC_SAILOR

#define COLLECTOR                                               \
    .trainerClass = TRAINER_CLASS_COLLECTOR,                    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,\
    .trainerPic = TRAINER_PIC_COLLECTOR

#define SWIMMERS                                                \
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
    [TRAINER_BROTHER_1_PEARLWOOD] = { I_LEAF },
    [TRAINER_BROTHER_2_ROUTE28] = { I_LEAF },
    [TRAINER_BROTHER_3_ROUTE28] = { I_LEAF },
    [TRAINER_BROTHER_4_ROUTE28] = { I_LEAF },
    [TRAINER_BROTHER_5_FISHINGVILLAGE] = { I_LEAF },
    [TRAINER_BROTHER_6_ROUTE20] = { I_LEAF },
    [TRAINER_UNUSED_7_] = { I_LEAF },
    [TRAINER_UNUSED_8_] = { I_LEAF },
    [TRAINER_UNUSED_9_] = { I_LEAF },
    [TRAINER_UNUSED_10_] = { I_LEAF },
    [TRAINER_UNUSED_11_] = { I_LEAF },
    [TRAINER_UNUSED_12_] = { I_LEAF },
    [TRAINER_UNUSED_13_] = { I_LEAF },
    [TRAINER_UNUSED_14_] = { I_LEAF },
#else
    [TRAINER_BROTHER_1_PEARLWOOD] =
    {
        BROTHER, BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother1_Bulbasaur),
        .partyGrass = sParty_Brother1_Bulbasaur,
        .partyFire = sParty_Brother1_Charmander,
        .partyWater = sParty_Brother1_Squirtle,
    },

    [TRAINER_BROTHER_2_ROUTE28] =
    {
        BROTHER, BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother2_Bulbasaur),
        .partyGrass = sParty_Brother2_Bulbasaur,
        .partyFire = sParty_Brother2_Charmander,
        .partyWater = sParty_Brother2_Squirtle,
    },

    [TRAINER_BROTHER_3_ROUTE28] =
    {
        BROTHER, BASIC_AI,
        .partySize = ARRAY_COUNT(sParty_Brother3_Bulbasaur),
        .partyGrass = sParty_Brother3_Bulbasaur,
        .partyFire = sParty_Brother3_Charmander,
        .partyWater = sParty_Brother3_Squirtle,
    },

    [TRAINER_BROTHER_4_ROUTE28] =
    {
        BROTHER, BASIC_AI,
        .items = {ITEM_SUPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother4_Bulbasaur),
        .partyGrass = sParty_Brother4_Bulbasaur,
        .partyFire = sParty_Brother4_Charmander,
        .partyWater = sParty_Brother4_Squirtle,
    },

    [TRAINER_BROTHER_5_FISHINGVILLAGE] =
    {
        BROTHER, BASIC_AI,
        .items = {ITEM_HYPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother5_Bulbasaur),
        .partyGrass = sParty_Brother5_Bulbasaur,
        .partyFire = sParty_Brother5_Charmander,
        .partyWater = sParty_Brother5_Squirtle,
    },

    [TRAINER_BROTHER_6_ROUTE20] =
    {
        BROTHER, ADV_AI,
        .items = {ITEM_HYPER_POTION},
        .partySize = ARRAY_COUNT(sParty_Brother6_Bulbasaur),
        .partyGrass = sParty_Brother6_Bulbasaur,
        .partyFire = sParty_Brother6_Charmander,
        .partyWater = sParty_Brother6_Squirtle,
    },
    [TRAINER_UNUSED_7_] = {},
    [TRAINER_UNUSED_8_] = {},
    [TRAINER_UNUSED_9_] = {},
    [TRAINER_UNUSED_10_] = {},
    [TRAINER_UNUSED_11_] = {},
    [TRAINER_UNUSED_12_] = {},
    [TRAINER_UNUSED_13_] = {},
    [TRAINER_UNUSED_14_] = {},
#endif

    // Leaders & Elites
    [TRAINER_LEADER_AARON] =
    {
        LEADER(TRAINER_CLASS_LEADER, TRAINER_ENCOUNTER_MUSIC_MALE, TRAINER_PIC_LEADER_AARON, MUGSHOT_COLOR_BUG),
        NAME("Aaron"), BASIC_AI | ACE, TPARTY(sParty_GabbyAndTy1), ITEMS(ITEM_POTION),
    },
    [TRAINER_LEADER_VOLKNER] =
    {
        LEADER(TRAINER_CLASS_LEADER, TRAINER_ENCOUNTER_MUSIC_MALE, TRAINER_PIC_LEADER_VOLKNER, MUGSHOT_COLOR_ELECTRIC),
        NAME("Volkner"), BASIC_AI | ACE, TPARTY(sParty_Mary), ITEMS(ITEM_SUPER_POTION, ITEM_SUPER_POTION),
    },
    [TRAINER_WPV_TR14_SKYLA] =
    {
        LEADER(TRAINER_CLASS_ELITE, F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL, TRAINER_PIC_ELITE_SKYLA, MUGSHOT_COLOR_FLYING),
        NAME("Skyla"), ADV_AI, TPARTY(sParty_WpvTr14Skyla),
    },
    [TRAINER_DC3F_ROCKET_PROTON] =
    {
        LEADER(TRAINER_CLASS_ROCKET_ADMIN, TRAINER_ENCOUNTER_MUSIC_AQUA, TRAINER_PIC_AQUA_ADMIN_M, 0),
        NAME("Proton"), BASIC_AI, TPARTY(sParty_DC3F_Rocket_Proton), ITEMS(ITEM_SUPER_POTION),
    },
    [TRAINER_KAOLGYM_CLAY] =
    {
        LEADER(TRAINER_CLASS_LEADER, TRAINER_ENCOUNTER_MUSIC_INTENSE, TRAINER_PIC_CLAY, MUGSHOT_COLOR_GROUND),
        NAME("Clay"), ADV_AI, TPARTY(sParty_KG_Clay), ITEMS(ITEM_HYPER_POTION, ITEM_FULL_HEAL),
    },
    [TRAINER_CASUAL_IRIS] =
    {
        LEADER(TRAINER_CLASS_ELITE, TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE, TRAINER_PIC_IRIS_CASUAL, MUGSHOT_COLOR_BLUE),
        NAME("Iris"), EXPERT_AI | AI_FLAG_RISKY, TPARTY(sParty_CASUAL_IRIS), ITEMS(ITEM_FULL_HEAL, ITEM_HYPER_POTION),
    },
    [TRAINER_LEADER_KORRINA] =
    {
        LEADER(TRAINER_CLASS_LEADER, TRAINER_ENCOUNTER_MUSIC_HIKER, TRAINER_PIC_KORRINA, MUGSHOT_COLOR_FIGHTING),
        NAME("Korrina"), ADV_AI | ACE, TPARTY(sParty_LeaderKorrina), ITEMS(ITEM_FULL_RESTORE, ITEM_FULL_RESTORE),
    },
    [TRAINER_KASEN] =
    {
        LEADER(TRAINER_CLASS_KASEN, TRAINER_ENCOUNTER_MUSIC_MALE, TRAINER_PIC_KASEN, MUGSHOT_COLOR_FLYING),
        NAME("Kasen"), ADV_AI | ACE, TPARTY(sParty_Kasen),
    },
    [TRAINER_LEADER_ACEROLA] =
    {
        LEADER(TRAINER_CLASS_LEADER, F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS, TRAINER_PIC_ACEROLA, MUGSHOT_COLOR_GHOST),
        NAME("Acerola"), ADV_AI | AI_FLAG_ACE_POKEMON, TPARTY(sParty_LEADER_ACEROLA), ITEMS(ITEM_FULL_RESTORE),
    },
    [TRAINER_FACTORY_ROCKET_PETREL] =
    {
        LEADER(TRAINER_CLASS_DARKNESS_ROCKET_ADMIN, TRAINER_ENCOUNTER_MUSIC_AQUA, TRAINER_PIC_PETREL, 0),
        NAME("Petrel"), ADV_AI | ACE, TPARTY(sParty_FACTORY_ROCKET_PETREL), ITEMS(ITEM_HYPER_POTION),
    },
    [TRAINER_BTUN_BROCK] =
    {
        LEADER(TRAINER_CLASS_ELITE, TRAINER_ENCOUNTER_MUSIC_COOL, TRAINER_PIC_BROCK, MUGSHOT_COLOR_GROUND),
        NAME("Brock"), ADV_AI, TPARTY(sParty_BTUN_TR12_BROCK), ITEMS(ITEM_HYPER_POTION, ITEM_FULL_HEAL)
    },
    [TRAINER_LEADER_PRYCE] =
    {
        LEADER(TRAINER_CLASS_LEADER, TRAINER_ENCOUNTER_MUSIC_HIKER, TRAINER_PIC_PRYCE, MUGSHOT_COLOR_BROTHER),
        NAME("Pryce"), ADV_AI, TPARTY(sParty_LEADER_PRYCE), ITEMS(ITEM_HYPER_POTION, ITEM_FULL_HEAL)
    },
    [TRAINER_LEADER_BLAINE] =
    {
        LEADER(TRAINER_CLASS_LEADER, TRAINER_ENCOUNTER_MUSIC_HIKER, TRAINER_PIC_BLAINE, MUGSHOT_COLOR_BROTHER),
        NAME("Blaine"), ADV_AI | ACE, TPARTY(sParty_LEADER_BLAINE), ITEMS(ITEM_HYPER_POTION, ITEM_FULL_HEAL)
    },
    [TRAINER_LEADER_JASMINE] =
    {
        LEADER(TRAINER_CLASS_LEADER, F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE, TRAINER_PIC_JASMINE, 0),
        NAME("Jasmine"), ADV_AI | ACE, TPARTY(sParty_LeaderJasmine),
    },
    [TRAINER_LEADER_JASMINE_2] =
    {
        LEADER(TRAINER_CLASS_LEADER, F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE, TRAINER_PIC_JASMINE, 0),
        NAME("Jasmine"), ADV_AI | ACE, TPARTY(sParty_LeaderJasmine2),
    },
    //// Training Bots ////
    [TRAINER_AZURETIDE_CELEBI] =    {EBP, EXPERT_F,     ADV_AI,         NAME("Aino"),           TPARTY(sParty_AZURETIDE_CELEBI_TR1),    ITEMS(ITEM_FULL_RESTORE)},
    [TRAINER_KAOLISLE_CELEBI] =     {EBP, EXPERT_M,     ADV_AI,         NAME("Pentti"),         TPARTY(sParty_KAOLISLE_CELEBI_TR2),     ITEMS(ITEM_FULL_RESTORE)},
    [TRAINER_EV_TRAINING_HP] =      {EV_NURSE,                                                  TPARTY(sParty_Felix)},
    [TRAINER_EV_TRAINING_ATK] =     {EV_NURSE,                                                  TPARTY(sParty_Violet)},
    [TRAINER_EV_TRAINING_DEF] =     {EV_NURSE,                                                  TPARTY(sParty_Rose2)},
    [TRAINER_EV_TRAINING_SPATK] =   {EV_NURSE,                                                  TPARTY(sParty_Rose3)},
    [TRAINER_EV_TRAINING_SPDEF] =   {EV_NURSE,                                                  TPARTY(sParty_Rose4)},
    [TRAINER_EV_TRAINING_SPEED] =   {EV_NURSE,                                                  TPARTY(sParty_Rose5)},
    [TRAINER_PRIMROSE_NURSE] =      {NURSE,                                                     TPARTY(sParty_Dusty1)},
    [TRAINER_CORALGROVE_NURSE] =    {NURSE,                                                     TPARTY(sParty_GabbyAndTy2)},
    [TRAINER_ALDELEAF_NURSE] =      {NURSE,                                                     TPARTY(sParty_Randall)},
    [TRAINER_SHORESLATE_NURSE] =    {NURSE,                                                     TPARTY(sParty_Shoreslate_Nurse)},
    [TRAINER_MARIGORGE_NURSE] =     {NURSE,                                                     TPARTY(sParty_MarigorgeNurse)},
    [TRAINER_ROCKLIFFE_NURSE] =     {NURSE,                                                     TPARTY(sParty_RockliffeNurse)},
    [TRAINER_FROSTHEARTH_NURSE] =   {NURSE,                                                     TPARTY(sParty_FROSTHEARTH_NURSE)},
    [TRAINER_DRISLEDGE_NURSE] =     {NURSE,                                                     TPARTY(sParty_DRISLEDGE_NURSE)},
    [TRAINER_SANDSTONE_NURSE] =     {NURSE,                                                     TPARTY(sParty_Sandstone_Nurse)},
    /////// Route 1 ///////
    [TRAINER_R1_YOUNGSTER] =        {YOUNGSTER,         DUMB_AI,        NAME("Calvin"),         TPARTY(sParty_GruntRusturfTunnel)},
    [TRAINER_R1_FISHER] =           {FISHERMAN,         DUMB_AI,        NAME("Phil"),           TPARTY(sParty_GruntWeatherInst1)},
    [TRAINER_R1_BUG_CATCHER] =      {BUG_CATCHER,       DUMB_AI,        NAME("Dave"),           TPARTY(sParty_GruntWeatherInst2)},
    [TRAINER_R1_TUBER] =            {TUBER_F,           DUMB_AI,        NAME("Lola"),           TPARTY(sParty_GruntWeatherInst3)},
    [TRAINER_R1_COOLTRAINER] =      {BW_ACE_M,          ADV_AI,         NAME("Tom"),            TPARTY(sParty_GruntMuseum1)},
    /////// Route 2 ///////
    [TRAINER_R2_FISHER] =           {FISHERMAN,         DUMB_AI,        NAME("Andrew"),         TPARTY(sParty_GruntMuseum2)},
    [TRAINER_R2_LASS] =             {LASS,              DUMB_AI,        NAME("Tiana"),          TPARTY(sParty_GruntSpaceCenter1)},
    [TRAINER_R2_BLACKBELT] =        {BLACK_BELT,        DUMB_AI,        NAME("Zander"),         TPARTY(sParty_GruntMtPyre1)},
    [TRAINER_R2_YOUNGSTER] =        {YOUNGSTER,         DUMB_AI,        NAME("Billy"),          TPARTY(sParty_GruntMtPyre2)},
    [TRAINER_R2_SCHOOL_KID_F] =     {SCHOOL_GIRL,       DUMB_AI,        NAME("Karen"),          TPARTY(sParty_GruntMtPyre3)},
    ////// Windy Woods //////
    [TRAINER_WW_BUGCATCHER] =       {BUG_CATCHER,       DUMB_AI,        NAME("Trevor"),         TPARTY(sParty_GruntWeatherInst4)},
    [TRAINER_WW_LADY] =             {LADY,              DUMB_AI,        NAME("Cindy"),          TPARTY(sParty_GruntAquaHideout5),       ITEMS(ITEM_FULL_RESTORE)},
    [TRAINER_WW_BUGCATCHER_2] =     {BUG_CATCHER,       DUMB_AI,        NAME("Rick"),           TPARTY(sParty_GruntAquaHideout6)},
    [TRAINER_WW_CAMPER] =           {CAMPER,            DUMB_AI,        NAME("Drew"),           TPARTY(sParty_WW_CAMPER)},
    [TRAINER_WW_LASS] =             {LASS,              DUMB_AI,        NAME("Haley"),          TPARTY(sParty_Matt)},
    [TRAINER_WW_YOUNGSTER] =        {YOUNGSTER,         DUMB_AI,        NAME("Josh"),           TPARTY(sParty_Zander)},
    [TRAINER_WW_ROCKET] =           {TEAM_ROCKET_M,     DUMB_AI,                                TPARTY(sParty_ShellySeafloorCavern)},
    [TRAINER_WW_ACE_TRAINER] =      {BW_ACE_F,          ADV_AI,         NAME("Whitney"),        TPARTY(sParty_ShellyWeatherInstitute),  ITEMS(ITEM_SUPER_POTION)},
    ////// Coralgrove //////
    [TRAINER_SCHOOLHALL_1] =        {SCHOOL_GIRL,       ADV_AI | BAT,   NAME("Robin"),          TPARTY(sParty_Archie)},
    [TRAINER_SCHOOLHALL_2] =        {SCHOOL_BOY,        ADV_AI,         NAME("Jerry"),          TPARTY(sParty_Leah)},
    [TRAINER_SCHOOLHALL_3] =        {SCHOOL_BOY,        ADV_AI,         NAME("Ted"),            TPARTY(sParty_Daisy)},
    [TRAINER_SCHOOLHALL_4] =        {SCHOOL_GIRL,       ADV_AI,         NAME("Vicky"),          TPARTY(sParty_Rose1)},
    [TRAINER_CORALGYM_1] =          {GYM BUG_MANIAC,    DUMB_AI,        NAME("Brent"),          TPARTY(sParty_Chip)},
    [TRAINER_CORALGYM_2] =          {GYM NINJA_BOY,     BASIC_AI,       NAME("Yasu"),           TPARTY(sParty_Foster)},
    [TRAINER_CORALGYM_3] =          {GYM LASS,          DUMB_AI,        NAME("Janice"),         TPARTY(sParty_Dusty2)},
    [TRAINER_CORALGYM_4] =          {GYM BUG_CATCHER,   DUMB_AI,        NAME("Joey"),           TPARTY(sParty_Dusty3)},
    [TRAINER_CORALGYM_5] =          {GYM BUG_CATCHER,   DUMB_AI,        NAME("Jack"),           TPARTY(sParty_Dusty4)},
    [TRAINER_CORALGYM_6] =          {GYM BUG_CATCHER,   DUMB_AI,        NAME("Jeremy"),         TPARTY(sParty_Dusty5)},
    /////// Route 3 ///////
    [TRAINER_R3_SWIMMER_F] =        {SWIMMER_F,         BASIC_AI,       NAME("Ellen"),          TPARTY(sParty_R3_SWIMMER_F)},
    [TRAINER_R3_SWIMMER_M] =        {SWIMMER_M,         BASIC_AI,       NAME("Floyd"),          TPARTY(sParty_R3_SWIMMER_M)},
    [TRAINER_R3_SWIMMER_OLDSIS] =   {SWIMMER_F,         BASIC_AI,       NAME("Lila"),           TPARTY(sParty_R3_SWIMMER_OLDSIS)},
    [TRAINER_R3_TUBER] =            {TUBER_M,           DUMB_AI,        NAME("Roy"),            TPARTY(sParty_R3_TUBER)},
    [TRAINER_R3_FISHERMAN] =        {FISHERMAN,         BASIC_AI,       NAME("Clancy"),         TPARTY(sParty_R3_FISHERMAN)},
    [TRAINER_R3_LANDSWIMMER_1] =    {GEN4_SWIMMER,      BASIC_AI,       NAME("Bernice"),        TPARTY(sParty_R3_LANDSWIMMER_1)},
    [TRAINER_R3_LANDSWIMMER_2] =    {GEN4_SWIMMER,      BASIC_AI,       NAME("Hilda"),          TPARTY(sParty_R3_LANDSWIMMER_2)},
    [TRAINER_R3_SAILOR] =           {SAILOR,            BASIC_AI,       NAME("Mick"),           TPARTY(sParty_R3_SAILOR)},
    [TRAINER_R3_SWIMMER_M1] =       {SWIMMER_M,         BASIC_AI,       NAME("Anthony"),        TPARTY(sParty_R3_SWIMMER_M1)},
    [TRAINER_R3_SWIMMER_M2] =       {SWIMMER_M,         BASIC_AI,       NAME("Samuel"),         TPARTY(sParty_R3_SWIMMER_M2)},
    [TRAINER_R3_SWIMMER_F1] =       {SWIMMER_F,         BASIC_AI,       NAME("Nina"),           TPARTY(sParty_R3_SWIMMER_F1)},
    /////// Route 4 ///////
    [TRAINER_R4_HIKER] =            {HIKER,             DUMB_AI,        NAME("Flint"),          TPARTY(sParty_GabbyAndTy3)},
    [TRAINER_R4_POKEMANIAC] =       {POKEMANIAC,        DUMB_AI,        NAME("Ross"),           TPARTY(sParty_GabbyAndTy5)},
    [TRAINER_R4_BUGCATCHER] =       {BUG_CATCHER,       DUMB_AI,        NAME("Lewis"),          TPARTY(sParty_GabbyAndTy6)},
    [TRAINER_R4_TWINS] =            {TWINS,             DUMB_AI,        NAME("Gina & Mia"),     TPARTY(sParty_Lola1)},
    [TRAINER_R4_TRIATHLETE] =       {RUNNER_F,          DUMB_AI,        NAME("Ashley"),         TPARTY(sParty_Gwen)},
    [TRAINER_R4_CAMPER] =           {CAMPER,            DUMB_AI,        NAME("Vincent"),        TPARTY(sParty_Lola2)},
    [TRAINER_R4_COOL_F] =           {BATTLE_GIRL,       DUMB_AI,        NAME("Serena"),         TPARTY(sParty_Lola3)},
    [TRAINER_R4_COOL_M] =           {ACE_M,             ADV_AI,         NAME("Marcus"),         TPARTY(sParty_Lola4)},
    [TRAINER_R4_BIRDKEEPER] =       {BIRD_KEEPER,       DUMB_AI,        NAME("Cole"),           TPARTY(sParty_Lola5)},
    [TRAINER_R4_YOUNGSTER] =        {YOUNGSTER,         DUMB_AI,        NAME("Zack"),           TPARTY(sParty_Ricky1)},
    [TRAINER_R4_BIRDKEEPER2] =      {BIRD_KEEPER,       DUMB_AI,        NAME("Simon"),          TPARTY(sParty_Simon)},
    [TRAINER_R4_LASS] =             {LASS,              DUMB_AI,        NAME("Rose"),           TPARTY(sParty_Charlie)},
    [TRAINER_R4_YOUNGSTER2] =       {YOUNGSTER,         DUMB_AI,        NAME("Duncan"),         TPARTY(sParty_Ricky2)},
    [TRAINER_R4_TRIATHLETE2] =      {RUNNER_F,          DUMB_AI,        NAME("Hannah"),         TPARTY(sParty_Ricky3)},
    [TRAINER_RANCH_ROCKET] =        {TEAM_ROCKET_M,     DUMB_AI,                                TPARTY(sParty_Ricky4)},
    [TRAINER_RANCH_ROCKET2] =       {TEAM_ROCKET_F,     DUMB_AI,                                TPARTY(sParty_Ricky5)},
    /////// Aldeleaf ///////
    [TRAINER_ALDELEAF_MANIAC] =     {POKEMANIAC,        BASIC_AI,       NAME("Vito"),           TPARTY(sParty_Vito)},
    [TRAINER_ALDEGYM_1] =           {GYM ACE_M,         BASIC_AI,       NAME("Parker"),         TPARTY(sParty_Parker)},
    [TRAINER_ALDEGYM_2] =           {GYM GUITARIST,     BASIC_AI,       NAME("George"),         TPARTY(sParty_George)},
    [TRAINER_ALDEGYM_3] =           {GYM BREEDER_F,     BASIC_AI,       NAME("Alice"),          TPARTY(sParty_Berke)},
    [TRAINER_ALDEGYM_4] =           {GYM POKEMANIAC,    BASIC_AI,       NAME("Braxton"),        TPARTY(sParty_Braxton)},
    [TRAINER_ALDEGYM_5] =           {GYM LASS,          BASIC_AI,       NAME("Anya"),           TPARTY(sParty_Vincent)},
    [TRAINER_ALDEGYM_6] =           {GYM GUITARIST,     BASIC_AI,       NAME("Leroy"),          TPARTY(sParty_Leroy)},
    [TRAINER_ALDEGYM_7] =           {GYM BATTLE_GIRL,   BASIC_AI,       NAME("Emma"),           TPARTY(sParty_Wilton1)},
    [TRAINER_ALDEGYM_8] =           {GYM BREEDER_F,     BASIC_AI,       NAME("Sofia"),          TPARTY(sParty_Edgar)},
    [TRAINER_ALDEGYM_9] =           {GYM SCHOOL_GIRL,   BASIC_AI,       NAME("Avery"),          TPARTY(sParty_Albert)},
    [TRAINER_ALDEGYM_10] =          {GYM TWINS,         BASIC_AI,       NAME("Teri & Tia"),     TPARTY(sParty_Samuel)},
    [TRAINER_ALDEGYM_11] =          {GYM CAMPER,        BASIC_AI,       NAME("Owen"),           TPARTY(sParty_Owen)},
    [TRAINER_ALDEGYM_12] =          {GYM LASS,          BASIC_AI,       NAME("Naomi"),          TPARTY(sParty_Wilton2)},
    [TRAINER_ALDEGYM_13] =          {GYM LASS,          BASIC_AI,       NAME("Ruby"),           TPARTY(sParty_Wilton3)},
    [TRAINER_ALDEGYM_14] =          {GYM SCHOOL_BOY,    BASIC_AI,       NAME("Donald"),         TPARTY(sParty_Wilton4)},
    [TRAINER_ALDEGYM_15] =          {GYM GUITARIST,     BASIC_AI,       NAME("Wilton"),         TPARTY(sParty_Wilton5)},
    [TRAINER_ALDEGYM_16] =          {GYM RANGER_M,      BASIC_AI,       NAME("Warren"),         TPARTY(sParty_Warren)},
    ////// Windplume Valley //////
    [TRAINER_WPV_BIRDKEEPER] =      {BIRD_KEEPER,       BASIC_AI,       NAME("Daniel"),         TPARTY(sParty_WpvTr1Birdkeeper)},
    [TRAINER_WPV_TRIATH] =          {RUNNER_M,          BASIC_AI,       NAME("Richard"),        TPARTY(sParty_WpvTr2Triath)},
    [TRAINER_WPV_BATTLEGIRL] =      {BATTLE_GIRL,       BASIC_AI,       NAME("Elizabeth"),      TPARTY(sParty_WpvTr3Battlegirl)},
    [TRAINER_WPV_CAMPER] =          {PICNICKER,         BASIC_AI,       NAME("Samantha"),       TPARTY(sParty_WpvTr4Camper)},
    [TRAINER_WPV_BIRDKEEPER2] =     {BIRD_KEEPER,       BASIC_AI,       NAME("Matthew"),        TPARTY(sParty_WpvTr5Birdkeeper)},
    [TRAINER_WPV_MANIAC] =          {POKEMANIAC,        BASIC_AI,       NAME("Rodney"),         TPARTY(sParty_WpvTr6Maniac)},
    [TRAINER_WPV_BIRDKEEPER3] =     {BIRD_KEEPER,       BASIC_AI,       NAME("Cameron"),        TPARTY(sParty_WpvTr7Birdkeeper)},
    [TRAINER_WPV_NINJABOY] =        {NINJA_BOY,         BASIC_AI,       NAME("Eli"),            TPARTY(sParty_WpvTr8Ninjaboy)},
    [TRAINER_WPV_LASS] =            {LASS,              BASIC_AI,       NAME("Jennifer"),       TPARTY(sParty_WpvTr9Lass)},
    [TRAINER_WPV_TRIATH2] =         {RUNNER_F,          BASIC_AI,       NAME("Chloe"),          TPARTY(sParty_WpvTr10Triath)},
    [TRAINER_WPV_BIRDKEEPER4] =     {BIRD_KEEPER,       BASIC_AI,       NAME("Nicholas"),       TPARTY(sParty_WpvTr11Birdkeeper)},
    [TRAINER_WPV_BATTLEGIRL2] =     {BATTLE_GIRL,       BASIC_AI,       NAME("Camille"),        TPARTY(sParty_WpvTr12Battlegirl)},
    [TRAINER_WPV_BIRDKEEPER5] =     {BIRD_KEEPER,       BASIC_AI,       NAME("Jonas"),          TPARTY(sParty_WpvTr13Birdkeeper)},
    /////// Route 30 ///////
    [TRAINER_R30_BUGCATCHER] =      {BUG_CATCHER,       NO_AI | ACE,    NAME("Dylan"),          TPARTY(sParty_R30_BugCatcher)},
    [TRAINER_R30_HIKER] =           {HIKER,             BASIC_AI,       NAME("Bruce"),          TPARTY(sParty_R30_Hiker)},
    [TRAINER_R30_NINJABOY] =        {NINJA_BOY,         DUMB_AI,        NAME("Grant"),          TPARTY(sParty_R30_NinjaBoy)},
    [TRAINER_R30_PSYCHIC] =         {PSYCHIC_M,         BASIC_AI,       NAME("Joseph"),         TPARTY(sParty_R30_Psychic)},
    /////// Route 5 ///////
    [TRAINER_R5_FISHER] =           {FISHERMAN,         DUMB_AI,        NAME("Don"),            TPARTY(sParty_R5_Fisher)},
    [TRAINER_R5_BEAUTY] =           {BEAUTY,            DUMB_AI,        NAME("Natasha"),        TPARTY(sParty_R5_Beauty)},
    [TRAINER_R5_YOUNGCOUPLE] =      {YOUNG_COUPLE,      BASIC_AI,       NAME("Ella & Evan"),    TPARTY(sParty_R5_YoungCouple)},
    [TRAINER_R5_LASS1] =            {LASS,              DUMB_AI,        NAME("Valerie"),        TPARTY(sParty_R5_Lass1)},
    [TRAINER_R5_POKEFAN_F] =        {POKEFAN_F,         BASIC_AI,       NAME("Carol"),          TPARTY(sParty_R5_PokeFanF)},
    [TRAINER_R5_LASS2] =            {LASS,              DUMB_AI,        NAME("Vera"),           TPARTY(sParty_R5_Lass2)},
    [TRAINER_R5_GENTLEMAN] =        {GENTLEMAN,         BASIC_AI,       NAME("Sebastian"),      TPARTY(sParty_R5_Gentleman)},
    [TRAINER_R5_YOUNGSTER] =        {YOUNGSTER,         DUMB_AI,        NAME("Marty"),          TPARTY(sParty_R5_Youngster)},
    [TRAINER_R5_TRIATHLETE] =       {CYCLER_F,          BASIC_AI,       NAME("Sara"),           TPARTY(sParty_R5_Triathlete)},
    [TRAINER_R5_RICHBOY] =          {RICH_BOY,          DUMB_AI,        NAME("Tobias"),         TPARTY(sParty_R5_RichBoy)},
    [TRAINER_R5_KINDLER] =          {KINDLER,           SEQ_AI,         NAME("Kurt"),           TPARTY(sParty_R5_Man5)},
    [TRAINER_R5_BUGCATCHER] =       {BUG_CATCHER,       NO_AI,          NAME("Bill"),           TPARTY(sParty_R5_BugCatcher)},
    [TRAINER_R5_NINJABOY] =         {NINJA_BOY,         DUMB_AI,        NAME("Kenji"),          TPARTY(sParty_R5_NinjaBoy)},
    [TRAINER_R5_HIKER] =            {HIKER,             SEQ_AI,         NAME("Paul"),           TPARTY(sParty_R5_Hiker)},
    [TRAINER_R5_ACETRAINER] =       {BW_ACE_M,          EXPERT_AI,      NAME("Alex"),           TPARTY(sParty_R5_CoolTrainer),          ITEMS(ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL)},
    /////// Route 6 ///////
    [TRAINER_R6_RANGER_M] =         {RANGER_M,          BASIC_AI,       NAME("Lawrence"),       TPARTY(sParty_R6_RangerM)},
    [TRAINER_R6_CAMPER_F] =         {PICNICKER,         BASIC_AI,       NAME("Sheila"),         TPARTY(sParty_R6_CamperF)},
    [TRAINER_R6_HIKER] =            {HIKER,             BASIC_AI,       NAME("Randy"),          TPARTY(sParty_R6_Hiker)},
    [TRAINER_R6_CAMPER_M2] =        {CAMPER,            BASIC_AI,       NAME("Conner"),         TPARTY(sParty_R6_CamperM2)},
    [TRAINER_R6_KINDLER] =          {KINDLER,           BASIC_AI,       NAME("Erick"),          TPARTY(sParty_R6_Kindler)},
    /////// Scorched Desert ///////
    [TRAINER_DESERT_CAMPER] =       {CAMPER,            BASIC_AI,       NAME("Jerome"),         TPARTY(sParty_DesertTrCamper)},
    [TRAINER_DESERT_CAMPER2] =      {RANGER_M,          BASIC_AI,       NAME("Smith"),          TPARTY(sParty_DesertTrCamper2)},
    [TRAINER_DESERT_PICNICKER] =    {RANGER_F,          BASIC_AI,       NAME("Aria"),           TPARTY(sParty_DesertTrPicnicker)},
    [TRAINER_DESERT_PICNICKER2] =   {RANGER_F,          BASIC_AI,       NAME("Clarissa"),       TPARTY(sParty_DesertTrPicnicker2)},
    [TRAINER_DESERT_HIKER] =        {RUIN_MANIAC,       BASIC_AI,       NAME("Roland"),         TPARTY(sParty_DesertTrHiker)},
    [TRAINER_DESERT_BLACKBELT] =    {BLACK_BELT,        BASIC_AI,       NAME("Ryan"),           TPARTY(sParty_DesertTrBlackbelt)},
    [TRAINER_DESERT_PICNICKER3] =   {PICNICKER,         BASIC_AI,       NAME("Nelly"),          TPARTY(sParty_DesertTrPicnicker3)},
    [TRAINER_DESERT_HIKER2] =       {RUIN_MANIAC,       BASIC_AI,       NAME("Stan"),           TPARTY(sParty_DesertTrHiker2)},
    [TRAINER_DESERT_HIKER3] =       {HIKER,             BASIC_AI,       NAME("Dean"),           TPARTY(sParty_DesertTrHiker3)},
    [TRAINER_DESERT_KINDLER] =      {KINDLER,           DUMB_AI,        NAME("Brad"),           TPARTY(sParty_Desert_Kindler)},
    [TRAINER_DESERT_BLACKBELT2] =   {BLACK_BELT,        BASIC_AI,       NAME("Steven"),         TPARTY(sParty_Desert_Blackbelt2)},
    [TRAINER_DESERT_HIKER4] =       {RUIN_MANIAC,       BASIC_AI,       NAME("Herman"),         TPARTY(sParty_Desert_Hiker4)},
    [TRAINER_DESERT_PSYCHIC_F] =    {PSYCHIC_F,         BASIC_AI,       NAME("Wendy"),          TPARTY(sParty_Desert_Psychic_F)},
    [TRAINER_DESERT_ACETRAINER] =   {BW_ACE_F,          EXPERT_AI,      NAME("Olivia"),         TPARTY(sParty_Desert_Ace),              ITEMS(ITEM_HYPER_POTION, ITEM_FULL_HEAL)},
    /////// Route 7 ///////
    [TRAINER_R7_CAMPER] =           {RANGER_M,          BASIC_AI,       NAME("Franklin"),       TPARTY(sParty_R7_Camper)},
    [TRAINER_R7_PICNICKER] =        {RANGER_F,          BASIC_AI,       NAME("Gemma"),          TPARTY(sParty_R7_Picnicker)},
    [TRAINER_R7_BIRDKEEPER] =       {BIRD_KEEPER,       BASIC_AI,       NAME("Dudley"),         TPARTY(sParty_R7_Birdkeeper)},
    [TRAINER_R7_BLACKBELT] =        {BLACK_BELT,        BASIC_AI,       NAME("Nob"),            TPARTY(sParty_R7_Blackbelt)},
    [TRAINER_R7_PICNICKER2] =       {RANGER_F,          BASIC_AI,       NAME("Tina"),           TPARTY(sParty_R7_Picnicker2)},
    [TRAINER_R7_FISHERMAN] =        {FISHERMAN,         DUMB_AI,        NAME("Tony"),           TPARTY(sParty_R7_Fisherman)},
    [TRAINER_R7_HIKER] =            {HIKER,             BASIC_AI,       NAME("Clive"),          TPARTY(sParty_R7_Hiker)},
    [TRAINER_R7_PARASOLLADY] =      {PARASOL_LADY,      DUMB_AI,        NAME("Fiona"),          TPARTY(sParty_R7_Parasollady)},
    [TRAINER_R7_NINJABOY] =         {NINJA_BOY,         DUMB_AI,        NAME("Goro"),           TPARTY(sParty_R7_NinjaBoy)},
    /////// Route 8 ///////
    [TRAINER_R8_PARASOLLADY] =      {PARASOL_LADY,      DUMB_AI,        NAME("Genna"),          TPARTY(sParty_R8_ParasolLady)},
    [TRAINER_R8_SRJR] =             {SR_AND_JR,         BASIC_AI,       NAME("Kate & Joy"),     TPARTY(sParty_R8_SrJr)},
    [TRAINER_R8_AROMALADY] =        {AROMA_LADY,        BASIC_AI,       NAME("Jessica"),        TPARTY(sParty_R8_AromaLady)},
    [TRAINER_R8_YOUNGSTER] =        {SCHOOL_BOY,        DUMB_AI,        NAME("Lucas"),          TPARTY(sParty_R8_Youngster)},
    [TRAINER_R8_PSYCHIC_F] =        {PSYCHIC_F,         BASIC_AI,       NAME("Briony"),         TPARTY(sParty_R8_PsychicF)},
    [TRAINER_R8_ENTHUSIAST] =       {ENTHUSIAST_M,      BASIC_AI,       NAME("Henry"),          TPARTY(sParty_R8_CamperM)},
    [TRAINER_R8_TRIATHLETE_M] =     {RUNNER_M,          BASIC_AI,       NAME("Winston"),        TPARTY(sParty_R8_TriathleteM)},
    [TRAINER_R8_GENTLEMAN] =        {GENTLEMAN,         BASIC_AI,       NAME("Phileas"),        TPARTY(sParty_R8_Gentleman)},
    [TRAINER_R8_HIKER] =            {HIKER,             BASIC_AI,       NAME("Garret"),         TPARTY(sParty_R8_Hiker)},
    [TRAINER_R8_OLDCOUPLE] =        {OLD_COUPLE,        BASIC_AI,       NAME("John & Jay"),     TPARTY(sParty_R8_OldCouple)},
    [TRAINER_R8_BIRDKEEPER] =       {BIRD_KEEPER,       SEQ_AI,         NAME("Martin"),         TPARTY(sParty_R8_BirdKeeper)},
    /////// Shoreslate ///////
    [TRAINER_DC1F_ROCKET_1] =       {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_DC1F_Rocket1)},
    [TRAINER_DC1F_ROCKET_2] =       {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_DC1F_Rocket2)},
    [TRAINER_DC_BASEROCKET_1] =     {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_DC_BaseRocket1)},
    [TRAINER_DC_BASEROCKET_2] =     {TEAM_ROCKET_F,     BASIC_AI,                               TPARTY(sParty_DC_BaseRocket2)},
    [TRAINER_DC_BASEROCKET_3] =     {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_DC_BaseRocket3)},
    [TRAINER_DC2F_ROCKET_1] =       {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_DC2F_Rocket1)},
    [TRAINER_DC2F_ROCKET_2] =       {TEAM_ROCKET_F,     BASIC_AI,                               TPARTY(sParty_DC2F_Rocket2)},
    [TRAINER_DC2F_ROCKET_3] =       {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_DC2F_Rocket3)},
    [TRAINER_DC2F_ROCKET_4] =       {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_DC2F_Rocket4)},
    [TRAINER_DC2F_ROCKET_5] =       {TEAM_ROCKET_F,     BASIC_AI,                               TPARTY(sParty_DC2F_Rocket5)},
    [TRAINER_DC3F_ROCKET_1] =       {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_DC3F_Rocket1)},
    [TRAINER_SHORESLATE_ROCKET] =   {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_Shoreslate_Rocket)},
    [TRAINER_DC_BASEROCKET_4] =     {SCIENTIST_R,       BASIC_AI,                               TPARTY(sParty_DC_BaseRocket4)},
    /////// Route 9 ///////
    [TRAINER_R9_SWIMMER_M] =        {SWIMMER_M,         SEQ_AI,         NAME("Elliot"),         TPARTY(sParty_R9_TR1_SWIMMER_M)},
    [TRAINER_R9_BLACKBELT] =        {BLACK_BELT,        BASIC_AI,       NAME("Francis"),        TPARTY(sParty_R9_TR2_BLACKBELT)},
    [TRAINER_R9_BIRDKEEPER] =       {BIRD_KEEPER,       BASIC_AI,       NAME("Dwayne"),         TPARTY(sParty_R9_TR3_BIRDKEEPER)},
    [TRAINER_R9_BATTLEGIRL] =       {BATTLE_GIRL,       BASIC_AI,       NAME("April"),          TPARTY(sParty_R9_TR4_BATTLEGIRL)},
    [TRAINER_R9_SWIMMER_F] =        {SWIMMER_F,         BASIC_AI,       NAME("Melody"),         TPARTY(sParty_R9_TR5_SWIMMER_F)},
    [TRAINER_R9_FISHERMAN] =        {FISHERMAN,         BASIC_AI,       NAME("Saul"),           TPARTY(sParty_R9_TR6_FISHERMAN)},
    [TRAINER_R9_HIKER] =            {HIKER,             BASIC_AI,       NAME("Damon"),          TPARTY(sParty_R9_TR7_HIKER)},
    [TRAINER_R9_COLLECTOR] =        {COLLECTOR,         BASIC_AI,       NAME("Louis"),          TPARTY(sParty_R9_TR8_COLLECTOR)},
    [TRAINER_R9_SWIMMER_M2] =       {SWIMMER_M,         BASIC_AI,       NAME("Hector"),         TPARTY(sParty_R9_TR9_SWIMMER_M2)},
    [TRAINER_R9_LANDSWIMMER] =      {GEN4_SWIMMER,      BASIC_AI,       NAME("Carla"),          TPARTY(sParty_R9_TR10_LANDSWIMMER)},
    /////// Kaolisle Gym ///////
    [TRAINER_KAOLGYM_CAMPER1] =     {GYM CAMPER,        BASIC_AI,       NAME("Mike"),           TPARTY(sParty_KG_Tr1_Camper1)},
    [TRAINER_KAOLGYM_PICNICKER1] =  {GYM PICNICKER,     BASIC_AI,       NAME("Sophie"),         TPARTY(sParty_KG_Tr2_Picnicker1)},
    [TRAINER_KAOLGYM_HIKER1] =      {GYM HIKER,         BASIC_AI,       NAME("Ralph"),          TPARTY(sParty_KG_Tr3_Hiker1)},
    [TRAINER_KAOLGYM_CAMPER2] =     {GYM CAMPER,        BASIC_AI,       NAME("Dan"),            TPARTY(sParty_KG_Tr4_Camper2)},
    [TRAINER_KAOLGYM_HIKER2] =      {GYM HIKER,         SEQ_AI,         NAME("Mark"),           TPARTY(sParty_KG_Tr5_Hiker2)},
    [TRAINER_KAOLGYM_HIKER3] =      {GYM HIKER,         BASIC_AI,       NAME("Brett"),          TPARTY(sParty_KG_Tr6_Hiker3)},
    [TRAINER_KAOLGYM_PICNICKER2] =  {GYM PICNICKER,     BASIC_AI,       NAME("Mila"),           TPARTY(sParty_KG_Tr7_Picnicker2)},
    [TRAINER_KAOLGYM_CAMPER3] =     {GYM RANGER_M,      BASIC_AI,       NAME("Axel"),           TPARTY(sParty_KG_Tr8_Camper3)},
    [TRAINER_KAOLGYM_PICNICKER3] =  {GYM PICNICKER,     BASIC_AI,       NAME("Anna"),           TPARTY(sParty_KG_Tr9_Picnicker3)},
    [TRAINER_KAOLGYM_HIKER4] =      {GYM HIKER,         BASIC_AI,       NAME("Kevin"),          TPARTY(sParty_KG_Tr10_Hiker4)},
    /////// Kaolisle ///////
    [TRAINER_KM_PICNICKER] =        {PICNICKER,         BASIC_AI,       NAME("Bella"),          TPARTY(sParty_KM_Tr1_Picnicker)},
    [TRAINER_KM_BLACKBELT] =        {BLACK_BELT,        BASIC_AI,       NAME("Wyatt"),          TPARTY(sParty_KM_Tr2_Blackbelt)},
    [TRAINER_KM_CAMPER] =           {CAMPER,            BASIC_AI,       NAME("Ike"),            TPARTY(sParty_KM_Tr3_Camper)},
    [TRAINER_KM_HIKER] =            {HIKER,             BASIC_AI,       NAME("Wilson"),         TPARTY(sParty_KM_Tr4_Hiker)},
    [TRAINER_KM_HIKER2] =           {HIKER,             SEQ_AI,         NAME("Luke"),           TPARTY(sParty_KM_Tr5_Hiker)},
    [TRAINER_KM_HIKER3] =           {HIKER,             BASIC_AI,       NAME("Isaac"),          TPARTY(sParty_KM_Tr6_Hiker)},
    [TRAINER_KM_CAMPER2] =          {CAMPER,            BASIC_AI,       NAME("Caleb"),          TPARTY(sParty_KM_Tr7_Camper)},
    [TRAINER_KM_PICNICKER2] =       {PICNICKER,         BASIC_AI,       NAME("Maria"),          TPARTY(sParty_KM_Tr8_Picnicker)},
    [TRAINER_KM_BLACKBELT2] =       {BLACK_BELT,        BASIC_AI,       NAME("Koji"),           TPARTY(sParty_KM_Tr9_Blackbelt)},
    [TRAINER_KM_HIKER4] =           {HIKER,             BASIC_AI,       NAME("Everett"),        TPARTY(sParty_KM_Tr10_Hiker)},
    [TRAINER_HOTEL_KID1] =          {TUBER_F,           DUMB_AI,        NAME("Lucy"),           TPARTY(sParty_HotelKid1)},
    [TRAINER_HOTEL_KID2] =          {TUBER_M,           DUMB_AI,        NAME("Sam"),            TPARTY(sParty_HotelKid2)},
    [TRAINER_HOTEL_BIRDKEEPER] =    {BEAUTY,            BASIC_SMART,    NAME("Kiara"),          TPARTY(sParty_HotelBirdKeeper)},
    [TRAINER_BUFFET_1] =            {HEX_MANIAC,        ADV_AI,         NAME("Tarja"),          TPARTY(sParty_BuffetTrainer1)},
    [TRAINER_BUFFET_2] =            {GEN4_SWIMMER,      ADV_AI,         NAME("Gwendolyn"),      TPARTY(sParty_BuffetTrainer2)},
    [TRAINER_BUFFET_3] =            {ARTIST,            ADV_AI,         NAME("Pan"),            TPARTY(sParty_BuffetTrainer3)},
    [TRAINER_BUFFET_4] =            {DANCER,            ADV_AI,         NAME("Anna"),           TPARTY(sParty_BuffetTrainer4)},
    /////// Route 10 ///////
    [TRAINER_R10_SWIMMER_F1] =      {SWIMMER_F,         BASIC_AI,       NAME("Layla"),          TPARTY(sParty_R10_TR2_SWIMMER_F1)},
    [TRAINER_R10_FISHERMAN] =       {FISHERMAN,         DUMB_AI,        NAME("Logan"),          TPARTY(sParty_R10_TR3_FISHERMAN)},
    [TRAINER_R10_SWIMMER_M1] =      {SWIMMER_M,         BASIC_AI,       NAME("Derek"),          TPARTY(sParty_R10_TR4_SWIMMER_M1)},
    [TRAINER_R10_BLACKBELT] =       {BLACK_BELT,        BASIC_AI,       NAME("Daisuke"),        TPARTY(sParty_R10_TR5_BLACKBELT)},
    [TRAINER_R10_HIKER] =           {HIKER,             BASIC_AI,       NAME("Wright"),         TPARTY(sParty_R10_TR6_HIKER)},
    [TRAINER_R10_SWIMMER_F2] =      {SWIMMER_F,         BASIC_AI,       NAME("Coral"),          TPARTY(sParty_R10_TR7_SWIMMER_F2)},
    [TRAINER_R10_SWIMMER_M2] =      {SWIMMER_M,         BASIC_AI,       NAME("Kieran"),         TPARTY(sParty_R10_TR8_SWIMMER_M2)},
    [TRAINER_R10_BATTLEGIRL] =      {BATTLE_GIRL,       BASIC_AI,       NAME("Marissa"),        TPARTY(sParty_R10_TR9_BATTLEGIRL)},
    [TRAINER_R10_TUBER_M] =         {TUBER_M,           DUMB_AI,        NAME("Dillon"),         TPARTY(sParty_R10_TR10_TUBER_M)},
    [TRAINER_R10_ACESWIMMER] =      {COOLSWIMMER_F,     ADV_AI,         NAME("Ida"),            TPARTY(sParty_R10_TR1_ACESWIMMER),      ITEMS(ITEM_HYPER_POTION, ITEM_HYPER_POTION)},
    /////// Route 11 ///////
    [TRAINER_R11_LASS] =            {LASS,              DUMB_AI,        NAME("Sally"),          TPARTY(sParty_R11Tr1_Lass)},
    [TRAINER_R11_BIRDKEEPER] =      {BIRD_KEEPER,       BASIC_AI,       NAME("Rudy"),           TPARTY(sParty_R11Tr2_Birdkeeper)},
    [TRAINER_R11_BUGCATCHER] =      {BUG_MANIAC,        DUMB_AI,        NAME("Larry"),          TPARTY(sParty_R11Tr3_Bugcatcher)},
    [TRAINER_R11_NINJABOY] =        {NINJA_BOY,         DUMB_AI,        NAME("Takashi"),        TPARTY(sParty_R11Tr4_Ninjaboy)},
    [TRAINER_R11_POKEMANIAC] =      {POKEMANIAC,        BASIC_AI,       NAME("Justin"),         TPARTY(sParty_R11Tr5_Pokemaniac)},
    [TRAINER_R11_TRIATHLETE_F] =    {RUNNER_F,          BASIC_AI,       NAME("Autumn"),         TPARTY(sParty_R11Tr6_Triathlete_F)},
    [TRAINER_R11_HIKER] =           {HIKER,             BASIC_AI,       NAME("Ethan"),          TPARTY(sParty_R11Tr7_Hiker)},
    [TRAINER_R11_NINJABOY_2] =      {NINJA_BOY,         DUMB_AI,        NAME("Hideo"),          TPARTY(sParty_R11Tr8_Ninjaboy_2)},
    [TRAINER_R11_NINJABOY_3] =      {NINJA_BOY,         DUMB_AI,        NAME("Keigo"),          TPARTY(sParty_R11Tr9_Ninjaboy_3)},
    [TRAINER_R11_CYCLER_M] =        {CYCLER_M,          BASIC_AI,       NAME("Gavin"),          TPARTY(sParty_R11Tr10_Cycler_M)},
    [TRAINER_R11_BLACKBELT] =       {BLACK_BELT,        BASIC_AI,       NAME("Cristian"),       TPARTY(sParty_R11Tr11_Blackbelt)},
    [TRAINER_R11_EXPERT] =          {EXPERT_M,          ADV_AI,         NAME("Timothy"),        TPARTY(sParty_R11Tr12_Expert)},
    [TRAINER_R11_PSYCHIC_F] =       {PSYCHIC_F,         BASIC_AI,       NAME("Kayla"),          TPARTY(sParty_R11Tr13_Psychic_F)},
    [TRAINER_R11_ACETRAINER_F] =    {BW_ACE_F,          EXPERT_AI,      NAME("Kathrine"),       TPARTY(sParty_R11Tr14_Acetrainer_F),    ITEMS(ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL)},
    /////// Route 12 ///////
    [TRAINER_R12_TRIATHLETE_F] =    {CYCLER_F,          BASIC_AI,       NAME("Claire"),         TPARTY(sParty_R12Tr1_Triath)},
    [TRAINER_R12_TRIATHLETE_M] =    {CYCLER_M,          BASIC_AI,       NAME("Doug"),           TPARTY(sParty_R12Tr2_Triath)},
    [TRAINER_R12_TRIATHLETE_F2] =   {CYCLER_F,          BASIC_AI,       NAME("Christina"),      TPARTY(sParty_R12Tr3_Triath)},
    [TRAINER_R12_TRIATHLETE_M2] =   {CYCLER_M,          BASIC_AI,       NAME("Eric"),           TPARTY(sParty_R12Tr4_Triath)},
    [TRAINER_R12_TRIATHLETE_M3] =   {CYCLER_M,          BASIC_AI,       NAME("Clark"),          TPARTY(sParty_R12Tr5_Triath)},
    [TRAINER_R12_TRIATHLETE_F3] =   {CYCLER_F,          BASIC_AI,       NAME("Nora"),           TPARTY(sParty_R12Tr6_Triath)},
    [TRAINER_R12_PSYCHIC_M] =       {PSYCHIC_M,         BASIC_AI,       NAME("Cedric"),         TPARTY(sParty_R12Tr9_Psychic)},
    [TRAINER_R12_HIKER] =           {HIKER,             BASIC_AI,       NAME("Trent"),          TPARTY(sParty_R12Tr10_Hiker)},
    [TRAINER_R12_LASS] =            {LASS,              DUMB_AI,        NAME("Leah"),           TPARTY(sParty_R12Tr11_Lass)},
    [TRAINER_R12_BUGMANIAC] =       {ENTHUSIAST_F,      DUMB_AI,        NAME("Vivian"),         TPARTY(sParty_R12Tr12_BugMan)},
    [TRAINER_R12_NINJABOY] =        {NINJA_BOY,         DUMB_AI,        NAME("Riley"),          TPARTY(sParty_R12Tr13_Ninja)},
    /////// Flooded Cave ///////
    [TRAINER_FC_BLACKBELT] =        {BLACK_BELT,        BASIC_AI,       NAME("Terry"),          TPARTY(sParty_FcTr1_Blackbelt)},
    [TRAINER_FC_BATTLEGIRL] =       {BATTLE_GIRL,       BASIC_AI,       NAME("Hailey"),         TPARTY(sParty_FcTr2_Battlegirl)},
    [TRAINER_FC_CAMPER] =           {CAMPER,            BASIC_AI,       NAME("Barton"),         TPARTY(sParty_FcTr3_Camper)},
    [TRAINER_FC_HIKER] =            {HIKER,             BASIC_AI,       NAME("Gordon"),         TPARTY(sParty_FcTr4_Hiker)},
    /////// Sandstone ///////
    [TRAINER_SANDGYM_CYCLISTM1] =   {GYM CYCLER_M,      BASIC_AI,       NAME("Lloyd"),          TPARTY(sParty_SGTr1_CyclistM1)},
    [TRAINER_SANDGYM_CYCLISTF1] =   {GYM CYCLER_F,      BASIC_AI,       NAME("Sophia"),         TPARTY(sParty_SGTr2_CyclistF1)},
    [TRAINER_SANDGYM_CYCLISTF2] =   {GYM CYCLER_F,      BASIC_AI,       NAME("Jenna"),          TPARTY(sParty_SGTr3_CyclistF2)},
    [TRAINER_SANDGYM_CYCLISTM2] =   {GYM CYCLER_M,      BASIC_AI,       NAME("Greg"),           TPARTY(sParty_SGTr4_CyclistM2)},
    [TRAINER_SANDGYM_CYCLISTF3] =   {GYM CYCLER_F,      BASIC_AI,       NAME("Emilia"),         TPARTY(sParty_SGTr5_CyclistF3)},
    [TRAINER_SANDGYM_CYCLISTM3] =   {GYM CYCLER_M,      BASIC_AI,       NAME("Dennis"),         TPARTY(sParty_SGTr6_CyclistM3)},
    [TRAINER_SANDGYM_CYCLISTM4] =   {GYM CYCLER_M,      BASIC_AI,       NAME("Harry"),          TPARTY(sParty_SGTr7_CyclistM4)},
    /////// Adamant Tower ///////
    [TRAINER_AT_2F_PSYCHIC] =       {PSYCHIC_M,         ADV_AI,         NAME("Gerard"),         TPARTY(sParty_AT2F_Tr1_Psychic)},
    [TRAINER_AT_2F_MAN5] =          {GUITARIST,         ADV_AI,         NAME("Shaun"),          TPARTY(sParty_AT2F_Tr1_Man5)},
    [TRAINER_AT_2F_MAN3] =          {ACE_M,             ADV_AI,         NAME("Liam"),           TPARTY(sParty_AT2F_Tr2_Man3)},
    [TRAINER_AT_2F_WOMAN5] =        {ACE_F,             ADV_AI,         NAME("Luna"),           TPARTY(sParty_AT2F_Tr2_Woman5)},
    [TRAINER_AT_3F_EXPERT_M] =      {EXPERT_M,          ADV_AI,         NAME("Theodore"),       TPARTY(sParty_AT3F_Tr1_Expert_M)},
    [TRAINER_AT_3F_EXPERT_F] =      {EXPERT_F,          ADV_AI,         NAME("Shelby"),         TPARTY(sParty_AT3F_Tr1_Expert_F)},
    [TRAINER_AT_3F_HEXMANIAC] =     {HEX_MANIAC,        ADV_AI,         NAME("Osanna"),         TPARTY(sParty_AT3F_Tr2_HexManiac)},
    [TRAINER_AT_3F_PSYCHICF] =      {PSYCHIC_F,         ADV_AI,         NAME("Lynette"),        TPARTY(sParty_AT3F_Tr2_PsychicF)},
    [TRAINER_AT_4F_BLACKBELT] =     {BLACK_BELT,        ADV_AI,         NAME("Junichi"),        TPARTY(sParty_AT4F_Tr1_BlackBelt)},
    [TRAINER_AT_4F_HEXMANIAC] =     {HEX_MANIAC,        ADV_AI,         NAME("Anina"),          TPARTY(sParty_AT4F_Tr1_HexManiac)},
    [TRAINER_AT_4F_LASS] =          {LASS,              DUMB_AI,        NAME("Isabella"),       TPARTY(sParty_AT4F_Tr2_Lass)},
    [TRAINER_AT_4F_YOUNGSTER] =     {YOUNGSTER,         DUMB_AI,        NAME("Timmy"),          TPARTY(sParty_AT4F_Tr2_Youngster)},
    [TRAINER_AT_4F_BATTLEGIRL] =    {BATTLE_GIRL,       ADV_AI,         NAME("Andrea"),         TPARTY(sParty_AT4F_Tr3_BattleGirl)},
    [TRAINER_AT_4F_BLACKBELT2] =    {BLACK_BELT,        ADV_AI,         NAME("Roy"),            TPARTY(sParty_AT4F_Tr3_BlackBelt)},
    [TRAINER_AT_5F_COOLTRAINER_M] = {BW_ACE_M,          ADV_AI,         NAME("Beckett"),        TPARTY(sParty_AT5F_CoolTrainer_M)},
    [TRAINER_AT_5F_COOLTRAINER_F] = {BW_ACE_F,          ADV_AI,         NAME("Jamie"),          TPARTY(sParty_AT5F_CoolTrainer_F)},
    /////// Route 14 ///////
    [TRAINER_R14_RUNNING_F] =       {RUNNER_F,          BASIC_AI,       NAME("Penelope"),       TPARTY(sParty_R14Tr1_RunnerF)},
    [TRAINER_R14_HIKER] =           {HIKER,             BASIC_AI,       NAME("Walter"),         TPARTY(sParty_R14Tr2_Hiker)},
    [TRAINER_R14_PARASOLLADY] =     {PARASOL_LADY,      DUMB_AI,        NAME("Alexa"),          TPARTY(sParty_R14Tr3_ParasolLady)},
    [TRAINER_R14_FISHER] =          {FISHERMAN,         DUMB_AI,        NAME("Ernest"),         TPARTY(sParty_R14Tr4_FisherMan)},
    [TRAINER_R14_PARASOLLADY2] =    {PARASOL_LADY,      DUMB_AI,        NAME("Madeline"),       TPARTY(sParty_R14Tr5_ParasolLady)},
    [TRAINER_R14_NINJABOY] =        {NINJA_BOY,         BASIC_AI,       NAME("Nick"),           TPARTY(sParty_R14Tr6_NinjaBoy)},
    [TRAINER_R14_ROCKER] =          {BIRD_KEEPER,       BASIC_AI,       NAME("James"),          TPARTY(sParty_R14Tr7_Birdkeeper)},
    [TRAINER_R14_MANIAC] =          {POKEMANIAC,        BASIC_AI,       NAME("Cooper"),         TPARTY(sParty_R14Tr8_Maniac)},
    /////// Route 15 ///////
    [TRAINER_R15_BIRDKEEPER] =      {BIRD_KEEPER,       SEQ_AI,         NAME("Colton"),         TPARTY(sParty_R15Tr1_Birdkeeper)},
    [TRAINER_R15_RANGERF] =         {RANGER_F,          BASIC_AI,       NAME("Ashlee"),         TPARTY(sParty_R15Tr2_RangerF)},
    [TRAINER_R15_RANGERM] =         {RANGER_M,          BASIC_AI,       NAME("Miguel"),         TPARTY(sParty_R15Tr3_RangerM)},
    [TRAINER_R15_GENTLEMAN] =       {GENTLEMAN,         BASIC_AI,       NAME("Robert"),         TPARTY(sParty_R15Tr4_Gentleman)},
    [TRAINER_R15_NINJABOY1] =       {NINJA_BOY,         SEQ_AI,         NAME("Yoshi"),          TPARTY(sParty_R15Tr5_Ninjaboy)},
    [TRAINER_R15_NINJABOY2] =       {NINJA_BOY,         BASIC_AI,       NAME("Saki"),           TPARTY(sParty_R15Tr6_Ninjaboy)},
    [TRAINER_R15_BUGCATCHER] =      {BUG_CATCHER,       NO_AI,          NAME("Tim"),            TPARTY(sParty_R15Tr7_Bugcatcher)},
    [TRAINER_R15_BUGCATCHER2] =     {BUG_MANIAC,        BASIC_AI,       NAME("Fernando"),       TPARTY(sParty_R15Tr8_Bugmaniac)},
    [TRAINER_R15_BEAUTY] =          {BEAUTY,            BASIC_AI,       NAME("Isabel"),         TPARTY(sParty_R15Tr9_Beauty)},
    [TRAINER_R15_FISHER] =          {FISHERMAN,         ADV_AI,         NAME("Kenneth"),        TPARTY(sParty_R15Tr10_Fisherman)},
    [TRAINER_R15_ACETRAINER_M] =    {BW_ACE_M,          ADV_AI,         NAME("Camden"),         TPARTY(sParty_R15Tr11_AceM)},
    [TRAINER_R15_ACETRAINER_F] =    {BW_ACE_F,          ADV_AI | HPA,   NAME("Donny"),          TPARTY(sParty_R15Tr11_AceF)},
    [TRAINER_R15_COOLTRAINER] =     {ACE_M,             ADV_AI,         NAME("Jacob"),          TPARTY(sParty_R15Tr13_Cooltrainer)},
    [TRAINER_R15_LASS] =            {LASS,              DUMB_AI,        NAME("Kaitlin"),        TPARTY(sParty_R15Tr14_Lass)},
    [TRAINER_R15_SCIENTIST] =       {SCIENTIST,         BASIC_AI,       NAME("Stephen"),        TPARTY(sParty_R15Tr15_Scientist)},
    [TRAINER_R15_AROMALADY] =       {AROMA_LADY,        DUMB_AI,        NAME("Daisy"),          TPARTY(sParty_R15Tr16_Aromalady)},
    [TRAINER_R15_NINJABOY3] =       {RUNNER_F,          BASIC_AI,       NAME("Ava"),            TPARTY(sParty_R15Tr17_RunnerF)},
    [TRAINER_R15_BERRYROCKET] =     {TEAM_ROCKET_M,     BASIC_AI,                               TPARTY(sParty_R15Tr18_RocketGrunt)},
    /////// Route 23 ///////
    [TRAINER_R23_BREEDER_M] =       {BREEDER_M,         SEQ_AI,         NAME("Galen"),          TPARTY(sParty_R23_TR1_BREEDER_M)},
    [TRAINER_R23_MANIAC] =          {POKEMANIAC,        BASIC_AI,       NAME("Shane"),          TPARTY(sParty_R23_TR2_MANIAC)},
    [TRAINER_R23_TWINS] =           {TWINS,             DUMB_AI,        NAME("Bella & Belle"),  TPARTY(sParty_R23_TR3_TWINS)},
    [TRAINER_R23_BREEDER_F] =       {BREEDER_F,         BASIC_AI,       NAME("Brooke"),         TPARTY(sParty_R23_TR4_BREEDER_F)},
    [TRAINER_R23_HEXMANIAC_1] =     {HEX_MANIAC,        BASIC_AI,       NAME("Patricia"),       TPARTY(sParty_R23_TR5_HEXMANIAC_1)},
    [TRAINER_R23_PSYCHIC_M] =       {PSYCHIC_M,         BASIC_AI,       NAME("Deandre"),        TPARTY(sParty_R23_TR6_PSYCHIC_M)},
    [TRAINER_R23_HEXMANIAC_2] =     {HEX_MANIAC,        NO_AI,          NAME("Melanie"),        TPARTY(sParty_R23_TR7_HEXMANIAC_2)},
    [TRAINER_R23_TRIATHLETE_F] =    {RUNNER_F,          BASIC_AI,       NAME("Jean"),           TPARTY(sParty_R23_TR8_TRIATHLETE_F)},
    [TRAINER_R23_FISHERMAN] =       {FISHERMAN,         BASIC_AI,       NAME("Preston"),        TPARTY(sParty_R23_TR9_FISHERMAN)},
    [TRAINER_R23_BATTLEGIRL] =      {BATTLE_GIRL,       BASIC_AI,       NAME("Helen"),          TPARTY(sParty_R23_TR10_BATTLEGIRL)},
    [TRAINER_R23_NINJABOY] =        {NINJA_BOY,         BASIC_AI,       NAME("Sasuke"),         TPARTY(sParty_R23_TR11_NINJABOY)},
    [TRAINER_R23_ACETRAINER] =      {BW_ACE_M,          ADV_AI,         NAME("Ben"),            TPARTY(sParty_R23_TR12_ACETRAINER),     ITEMS(ITEM_HYPER_POTION)},
    /////// Drisledge ///////
    [TRAINER_DRISGYM_1] =           {GYM HEX_MANIAC,    BASIC_AI,       NAME("???"),            TPARTY(sParty_DRISLEDGEGYM_TRAINER1)},
    [TRAINER_DRISGYM_2] =           {GYM HEX_MANIAC,    BASIC_AI,       NAME("???"),            TPARTY(sParty_DRISLEDGEGYM_TRAINER2)},
    [TRAINER_DRISGYM_3] =           {GYM HEX_MANIAC,    BASIC_AI,       NAME("???"),            TPARTY(sParty_DRISLEDGEGYM_TRAINER3)},
    [TRAINER_DRISGYM_4] =           {GYM HEX_MANIAC,    BASIC_AI,       NAME("???"),            TPARTY(sParty_DRISLEDGEGYM_TRAINER4)},
    [TRAINER_DRISGYM_5] =           {GYM HEX_MANIAC,    BASIC_AI,       NAME("???"),            TPARTY(sParty_DRISLEDGEGYM_TRAINER5)},
    [TRAINER_DRISGYM_6] =           {GYM HEX_MANIAC,    BASIC_AI,       NAME("???"),            TPARTY(sParty_DRISLEDGEGYM_TRAINER6)},
    /////// Amberock ///////
    [TRAINER_FACTORY_ROCKET_1] =    {DARK_ROCKET_M,     BASIC_AI,       NAME("Grunt"),          TPARTY(sParty_FACTORY_ROCKET_1)},
    [TRAINER_FACTORY_ROCKET_2] =    {DARK_ROCKET_F,     BASIC_AI,       NAME("Grunt"),          TPARTY(sParty_FACTORY_ROCKET_2)},
    [TRAINER_FACTORY_ROCKET_3] =    {DARK_ROCKET_F,     BASIC_AI,       NAME("“Grunt”"),        TPARTY(sParty_FACTORY_ROCKET_3)},
    [TRAINER_FACTORY_ROCKET_4] =    {DARK_ROCKET_M,     BASIC_AI,       NAME("Grunt"),          TPARTY(sParty_FACTORY_ROCKET_4)},
    [TRAINER_FACTORY_ROCKET_5] =    {DARK_ROCKET_M,     BASIC_AI,       NAME("Grunt"),          TPARTY(sParty_FACTORY_ROCKET_5)},
    /////// Route 16 ///////
    [TRAINER_R16_SWIMMER_M] =       {SWIMMER_M,         BASIC_AI,       NAME("Howard"),         TPARTY(sParty_R16_TR1_SWIMMER_M)},
    [TRAINER_R16_SWIMMER_F2] =      {SWIMMER_F,         BASIC_AI,       NAME("Melissa"),        TPARTY(sParty_R16_TR2_SWIMMER_F)},
    [TRAINER_R16_SWIMMER_F] =       {SWIMMER_F,         BASIC_AI,       NAME("Henna"),          TPARTY(sParty_R16_TR3_SWIMMER_F)},
    [TRAINER_R16_SWIMMER_F3] =      {SWIMMER_F,         BASIC_AI,       NAME("Miranda"),        TPARTY(sParty_R16_TR4_SWIMMER_F)},
    [TRAINER_R16_GUITARIST] =       {GUITARIST,         BASIC_AI,       NAME("Marco"),          TPARTY(sParty_R16_TR5_GUITARIST)},
    [TRAINER_R16_HIKER] =           {HIKER,             BASIC_AI,       NAME("Clayton"),        TPARTY(sParty_R16_TR6_HIKER)},
    [TRAINER_R16_BEAUTY] =          {BEAUTY,            BASIC_AI,       NAME("Vera"),           TPARTY(sParty_R16_TR7_BEAUTY)},
    [TRAINER_R16_NINJABOY] =        {NINJA_BOY,         BASIC_AI,       NAME("Hokuto"),         TPARTY(sParty_R16_TR8_NINJABOY)},
    [TRAINER_R16_EXPERT_F] =        {EXPERT_F,          ADV_AI,         NAME("Bryn"),           TPARTY(sParty_R16_TR9_EXPERT_F)},
    [TRAINER_R16_NINJABOY2] =       {NINJA_BOY,         BASIC_AI,       NAME("Fabian"),         TPARTY(sParty_R16_TR10_NINJABOY2)},
    /////// Basalek ///////
    [TRAINER_BTUN_HIKER1] =         {HIKER,             ADV_AI,         NAME("Lenny"),          TPARTY(sParty_BTUN_TR1_HIKER1)},
    [TRAINER_BTUN_BLACKBELT] =      {BLACK_BELT,        ADV_AI,         NAME("Shinobu"),        TPARTY(sParty_BTUN_TR2_BLACKBELT)},
    [TRAINER_BTUN_PICNICKER] =      {RANGER_F,          ADV_AI,         NAME("Nicolas"),        TPARTY(sParty_BTUN_TR3_PICNICKER)},
    [TRAINER_BTUN_FIREBREATHER] =   {KINDLER,           ADV_AI,         NAME("Pedro"),          TPARTY(sParty_BTUN_TR4_FIREBREATHER)},
    [TRAINER_BTUN_BLACKBELT2] =     {BLACK_BELT,        ADV_AI,         NAME("Silas"),          TPARTY(sParty_BTUN_TR5_BLACKBELT2)},
    [TRAINER_BTUN_CAMPERM] =        {RANGER_M,          ADV_AI,         NAME("Kyler"),          TPARTY(sParty_BTUN_TR6_CAMPERM)},
    [TRAINER_BTUN_PICNICKER2] =     {RANGER_F,          ADV_AI,         NAME("Allison"),        TPARTY(sParty_BTUN_TR7_PICNICKER2)},
    [TRAINER_BTUN_BEAUTY] =         {BEAUTY,            ADV_AI,         NAME("Laura"),          TPARTY(sParty_BTUN_TR9_BEAUTY)},
    [TRAINER_BTUN_FIREBREATHER2] =  {KINDLER,           ADV_AI,         NAME("Hugh"),           TPARTY(sParty_BTUN_TR10_FIREBREATHER2)},
    [TRAINER_BTUN_HIKER3] =         {HIKER,             ADV_AI,         NAME("Perry"),          TPARTY(sParty_BTUN_TR11_HIKER3)},
    [TRAINER_BTUN_HIKER2] =         {HIKER,             ADV_AI | SUI,   NAME("Cole"),           TPARTY(sParty_BTUN_TR8_HIKER2)},
    /////// Route 17 ///////
    [TRAINER_R17_CAMPER_M] =        {RANGER_M,          BASIC_AI,       NAME("Isaiah"),         TPARTY(sParty_R17_TR1_CAMPER_M)},
    [TRAINER_R17_PICNICKER1] =      {RANGER_F,          BASIC_AI,       NAME("Isobel"),         TPARTY(sParty_R17_TR2_PICNICKER1)},
    [TRAINER_R17_PICNICKER2] =      {RANGER_F,          BASIC_AI,       NAME("Janine"),         TPARTY(sParty_R17_TR3_PICNICKER2)},
    [TRAINER_R17_MANIAC] =          {POKEMANIAC,        BASIC_AI,       NAME("Gregory"),        TPARTY(sParty_R17_TR4_MANIAC)},
    [TRAINER_R17_SCIENTIST] =       {SCIENTIST,         BASIC_AI,       NAME("Alan"),           TPARTY(sParty_R17_TR5_SCIENTIST)},
    [TRAINER_R17_HIKER1] =          {HIKER,             SEQ_AI,         NAME("Gus"),            TPARTY(sParty_R17_TR6_HIKER1)},
    [TRAINER_R17_HIKER2] =          {HIKER,             BASIC_AI,       NAME("Ron"),            TPARTY(sParty_R17_TR7_HIKER2)},
    [TRAINER_R17_COOLTRAINER] =     {KINDLER,           BASIC_AI,       NAME("Theo"),           TPARTY(sParty_R17_TR8_COOLTRAINER)},
    /////// Route 18 ///////
    [TRAINER_R18_HIKER1] =          {HIKER,             BASIC_AI,       NAME("Presley"),        TPARTY(sParty_R18_TR1_HIKER1)},
    [TRAINER_R18_RANGER_M] =        {RANGER_M,          ADV_AI,         NAME("Humberto"),       TPARTY(sParty_R18_TR2_RANGER_M)},
    [TRAINER_R18_KINDLER] =         {KINDLER,           BASIC_AI,       NAME("Edwardo"),        TPARTY(sParty_R18_TR3_KINDLER)},
    [TRAINER_R18_HIKER2] =          {HIKER,             BASIC_AI,       NAME("Benny"),          TPARTY(sParty_R18_TR4_HIKER2)},
    [TRAINER_R18_RANGER_F] =        {RANGER_F,          ADV_AI,         NAME("Alana"),          TPARTY(sParty_R18_TR5_RANGER_F)},
    [TRAINER_R18_SCIENTIST] =       {SCIENTIST,         BASIC_AI,       NAME("Chester"),        TPARTY(sParty_R18_TR6_SCIENTIST)},
    [TRAINER_R18_POKEMANIAC] =      {POKEMANIAC,        BASIC_AI,       NAME("Morgan"),         TPARTY(sParty_R18_TR7_POKEMANIAC)},
    [TRAINER_R18_BREEDER_M] =       {ENTHUSIAST_M,      BASIC_AI,       NAME("Glenn"),          TPARTY(sParty_R18_TR8_BREEDER_M)},
    [TRAINER_R18_ACE_TRAINER_M] =   {BW_ACE_M,          ADV_AI,         NAME("Tyrone"),         TPARTY(sParty_R18_TR9_ACE_TRAINER_M),   ITEMS(ITEM_HYPER_POTION, ITEM_HYPER_POTION)},
    ///////////////////////////
    [TRAINER_FROSTGYM_HIKER1] =     {GYM HIKER,         BASIC_AI,       NAME("Matti"),          TPARTY(sParty_FROSTGYM_TR1_HIKER1)},
    [TRAINER_FROSTGYM_KINDLER1] =   {GYM KINDLER,       BASIC_AI,       NAME("Beck"),           TPARTY(sParty_FROSTGYM_TR2_KINDLER1)},
    [TRAINER_FROSTGYM_RANGER_M] =   {GYM RANGER_M,      ADV_AI,         NAME("Mika"),           TPARTY(sParty_FROSTGYM_TR5_RANGER_M)},
    [TRAINER_FROSTGYM_RANGER_F] =   {GYM RANGER_F,      ADV_AI,         NAME("Suzanne"),        TPARTY(sParty_FROSTGYM_TR6_RANGER_F)},
    [TRAINER_FROSTGYM_MANIAC] =     {GYM RUIN_MANIAC,   BASIC_AI,       NAME("Oscar"),          TPARTY(sParty_FROSTGYM_TR7_MANIAC)},
    [TRAINER_FROSTGYM_COLLECTOR] =  {GYM COLLECTOR,     BASIC_AI,       NAME("Laurence"),       TPARTY(sParty_FROSTGYM_TR8_COLLECTOR)},
    [TRAINER_FROSTGYM_KINDLER2] =   {GYM KINDLER,       BASIC_AI,       NAME("Emil"),           TPARTY(sParty_FROSTGYM_TR9_KINDLER2)},
    [TRAINER_FROSTGYM_RANGER_F2] =  {GYM RANGER_F,      ADV_AI,         NAME("Elsa"),           TPARTY(sParty_FROSTGYM_TR10_RANGER_F2)},
    [TRAINER_FROSTGYM_SENIOR] =     {GYM JUNIOR,        BASIC_AI,       NAME("Helena"),         TPARTY(sParty_FROSTGYM_TR3_SENIOR)},
    [TRAINER_FROSTGYM_JUNIOR] =     {GYM SENIOR,        BASIC_AI,       NAME("Irene"),          TPARTY(sParty_FROSTGYM_TR4_JUNIOR)},
    /////// Route 19 ///////
    [TRAINER_R19_SWIMMER_F] =       {EBP, SWIMMER_F,    BASIC_AI,       NAME("Jocelyn"),        TPARTY(sParty_R19_TR1_SWIMMER_F)},
    [TRAINER_R19_SWIMMER_M] =       {EBP, SWIMMER_M,    BASIC_AI,       NAME("Harold"),         TPARTY(sParty_R19_TR2_SWIMMER_M)},
    [TRAINER_R19_SWIMMER_M2] =      {EBP, SWIMMER_M,    BASIC_AI,       NAME("Jeffery"),        TPARTY(sParty_R19_TR3_SWIMMER_M)},
    [TRAINER_R19_SWIMMER_COUPLE] =  {EBP, SWIMMERS,     BASIC_AI,       NAME("Heidi & Jesse"),  TPARTY(sParty_R19_TR4_SWIMMER_COUPLE)},
    [TRAINER_R19_SWIMMER_F2] =      {EBP, SWIMMER_F,    BASIC_AI,       NAME("Paula"),          TPARTY(sParty_R19_TR5_SWIMMER_F)},
    [TRAINER_R19_SWIMMER_M3] =      {EBP, SWIMMER_M,    BASIC_AI,       NAME("Casey"),          TPARTY(sParty_R19_TR6_SWIMMER_M)},
    [TRAINER_R19_BLACKBELT] =       {EBP, BLACK_BELT,   BASIC_AI,       NAME("Duane"),          TPARTY(sParty_R19_TR7_BLACKBELT)},
    [TRAINER_R19_HIKER] =           {EBP, HIKER,        BASIC_AI,       NAME("Travis"),         TPARTY(sParty_R19_TR8_HIKER)},
    [TRAINER_R19_PICNICKER] =       {EBP, PICNICKER,    BASIC_AI,       NAME("Cyndy"),          TPARTY(sParty_R19_TR9_PICNICKER)},
    [TRAINER_R19_SWIMMER_M4] =      {EBP, SWIMMER_M,    BASIC_AI,       NAME("Jared"),          TPARTY(sParty_R19_TR10_SWIMMER_M)},

    [TRAINER_UNUSED_15_] = {},
    [TRAINER_UNUSED_54_] = {},
    [TRAINER_UNUSED_225_] = {},
    [TRAINER_UNUSED_226_] = {},
    [TRAINER_UNUSED_227_] = {},
    [TRAINER_UNUSED_228_] = {},
    [TRAINER_UNUSED_229_] = {},
    [TRAINER_UNUSED_230_] = {},
    [TRAINER_UNUSED_231_] = {},
    [TRAINER_UNUSED_232_] = {},
    [TRAINER_UNUSED_233_] = {},
    [TRAINER_UNUSED_234_] = {},
    [TRAINER_UNUSED_235_] = {},
    [TRAINER_UNUSED_236_] = {},
    [TRAINER_UNUSED_172_] = {NINJA_BOY, DUMB_AI, NAME("Kazuma"),TPARTY(sParty_R7_Ninjaboy)},
    [TRAINER_UNUSED_373] = {},
    [TRAINER_UNUSED_374] = {},
    [TRAINER_UNUSED_376_] = {},
    [TRAINER_UNUSED_377_] = {},
    [TRAINER_UNUSED_378_] = {},
    [TRAINER_UNUSED_379_] = {},
    [TRAINER_UNUSED_380_] = {},
    [TRAINER_UNUSED_381_] = {},

    [TRAINER_CLARISSA] =
    {
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("CLARISSA"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    TPARTY(sParty_Clarissa),
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
    TPARTY(sParty_Angelica),
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
    TPARTY(sParty_Madeline2),
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
    TPARTY(sParty_Madeline3),
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
    TPARTY(sParty_Madeline4),
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
    TPARTY(sParty_Madeline5),
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
    TPARTY(sParty_Beverly),
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
    TPARTY(sParty_Imani),
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
    TPARTY(sParty_Kyla),
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
    TPARTY(sParty_Denise),
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
    TPARTY(sParty_Beth),
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
    TPARTY(sParty_Tara),
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
    TPARTY(sParty_Missy),
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
    TPARTY(sParty_Alice),
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
    TPARTY(sParty_Jenny1),
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
    TPARTY(sParty_Grace),
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
    TPARTY(sParty_Tanya),
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
    TPARTY(sParty_Sharon),
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
    TPARTY(sParty_Nikki),
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
    TPARTY(sParty_Brenda),
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
    TPARTY(sParty_Katie),
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
    TPARTY(sParty_Susie),
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
    TPARTY(sParty_Kara),
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
    TPARTY(sParty_Dana),
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
    TPARTY(sParty_Sienna),
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
    TPARTY(sParty_Debra),
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
    TPARTY(sParty_Linda),
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
    TPARTY(sParty_Kaylee),
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
    TPARTY(sParty_Laurel),
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
    TPARTY(sParty_Carlee),
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
    TPARTY(sParty_Jenny2),
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
    TPARTY(sParty_Jenny3),
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
    TPARTY(sParty_Jenny4),
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
    TPARTY(sParty_Jenny5),
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
    TPARTY(sParty_Heidi),
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
    TPARTY(sParty_Becky),
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
    TPARTY(sParty_Carol),
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
    TPARTY(sParty_Nancy),
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
    TPARTY(sParty_Martha),
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
    TPARTY(sParty_Diana1),
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
    TPARTY(sParty_Cedric),
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
    TPARTY(sParty_Irene),
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
    TPARTY(sParty_Diana2),
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
    TPARTY(sParty_Diana3),
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
    TPARTY(sParty_Diana4),
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
    TPARTY(sParty_Diana5),
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
    TPARTY(sParty_AmyAndLiv1),
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
    TPARTY(sParty_AmyAndLiv2),
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
    TPARTY(sParty_GinaAndMia1),
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
    TPARTY(sParty_MiuAndYuki),
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
    TPARTY(sParty_AmyAndLiv3),
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
    TPARTY(sParty_GinaAndMia2),
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
    TPARTY(sParty_AmyAndLiv4),
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
    TPARTY(sParty_AmyAndLiv5),
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
    TPARTY(sParty_AmyAndLiv6),
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
    TPARTY(sParty_Huey),
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
    TPARTY(sParty_Edmond),
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
    TPARTY(sParty_Ernest1),
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
    TPARTY(sParty_Dwayne),
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
    TPARTY(sParty_Phillip),
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
    TPARTY(sParty_Leonard),
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
    TPARTY(sParty_Duncan),
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
    TPARTY(sParty_Ernest2),
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
    TPARTY(sParty_Ernest3),
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
    TPARTY(sParty_Ernest4),
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
    TPARTY(sParty_Ernest5),
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
    TPARTY(sParty_Eli),
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
    TPARTY(sParty_Annika),
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
    TPARTY(sParty_Jazmyn),
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
    TPARTY(sParty_Jonas),
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
    TPARTY(sParty_Kayley),
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
    TPARTY(sParty_Auron),
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
    TPARTY(sParty_Kelvin),
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
    TPARTY(sParty_Marley),
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
    TPARTY(sParty_Reyna),
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
    TPARTY(sParty_Hudson),
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
    TPARTY(sParty_Conor),
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
    TPARTY(sParty_Edwin1),
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
    TPARTY(sParty_Hector),
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
    TPARTY(sParty_TabithaMossdeep),
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
    TPARTY(sParty_Edwin2),
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
    TPARTY(sParty_Edwin3),
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
    TPARTY(sParty_Edwin4),
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
    TPARTY(sParty_Edwin5),
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
    TPARTY(sParty_WallyVR1),
    },
    [TRAINER_BRENDAN_PRIMROSE_MEADOW] =
    {
        MALE_RIVAL, ADV_AI,
        .partySize = ARRAY_COUNT(sParty_BRENDAN_PRIMROSE_MEADOW_GRASS),
        .partyGrass = sParty_BRENDAN_PRIMROSE_MEADOW_GRASS,
        .partyFire = sParty_BRENDAN_PRIMROSE_MEADOW_FIRE,
        .partyWater = sParty_BRENDAN_PRIMROSE_MEADOW_WATER,
    },
    [TRAINER_BRENDAN_CORALGROVE_ELEVATOR] =
    {
        MALE_RIVAL, ADV_AI,
        .partySize = ARRAY_COUNT(sParty_BRENDAN_CORALGROVE_ELEVATOR_GRASS),
        .partyGrass = sParty_BRENDAN_CORALGROVE_ELEVATOR_GRASS,
        .partyFire = sParty_BRENDAN_CORALGROVE_ELEVATOR_FIRE,
        .partyWater = sParty_BRENDAN_CORALGROVE_ELEVATOR_WATER,
    },
    [TRAINER_BRENDAN_ROUTE_11_NORMAL] =
    {
    MALE_RIVAL,
        ADV_AI,
        .partySize = ARRAY_COUNT(sParty_BRENDAN_ROUTE_11_NORMAL_GRASS),
        .partyGrass = sParty_BRENDAN_ROUTE_11_NORMAL_GRASS,
        .partyFire = sParty_BRENDAN_ROUTE_11_NORMAL_FIRE,
        .partyWater = sParty_BRENDAN_ROUTE_11_NORMAL_WATER,
    },
    [TRAINER_BRENDAN_ROUTE_11_ANGRY] =
    {
    MALE_RIVAL,
        ADV_AI,
        .partySize = ARRAY_COUNT(sParty_BRENDAN_ROUTE_11_ANGRY_GRASS),
        .partyGrass = sParty_BRENDAN_ROUTE_11_ANGRY_GRASS,
        .partyFire = sParty_BRENDAN_ROUTE_11_ANGRY_FIRE,
        .partyWater = sParty_BRENDAN_ROUTE_11_ANGRY_WATER,
    },
    [TRAINER_BRENDAN_BASALEK_TOWN] =
    {
    MALE_RIVAL,
        ADV_AI,
        .partySize = ARRAY_COUNT(sParty_BRENDAN_BASALEK_TOWN_GRASS),
        .partyGrass = sParty_BRENDAN_BASALEK_TOWN_GRASS,
        .partyFire = sParty_BRENDAN_BASALEK_TOWN_FIRE,
        .partyWater = sParty_BRENDAN_BASALEK_TOWN_WATER,
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
    FEMALE_RIVAL,
        ADV_AI,
        .partySize = ARRAY_COUNT(sParty_MAY_PRIMROSE_MEADOW_GRASS),
        .partyGrass = sParty_MAY_PRIMROSE_MEADOW_GRASS,
        .partyFire = sParty_MAY_PRIMROSE_MEADOW_FIRE,
        .partyWater = sParty_MAY_PRIMROSE_MEADOW_WATER,
    },
    [TRAINER_MAY_CORALGROVE_ELEVATOR] =
    {
    FEMALE_RIVAL,
        ADV_AI,
        .partySize = ARRAY_COUNT(sParty_MAY_CORALGROVE_ELEVATOR_GRASS),
        .partyGrass = sParty_MAY_CORALGROVE_ELEVATOR_GRASS,
        .partyFire = sParty_MAY_CORALGROVE_ELEVATOR_FIRE,
        .partyWater = sParty_MAY_CORALGROVE_ELEVATOR_WATER,
    },
    [TRAINER_MAY_ROUTE_11_NORMAL] =
    {
    FEMALE_RIVAL,
        ADV_AI,
        .partySize = ARRAY_COUNT(sParty_MAY_ROUTE_11_NORMAL_GRASS),
        .partyGrass = sParty_MAY_ROUTE_11_NORMAL_GRASS,
        .partyFire = sParty_MAY_ROUTE_11_NORMAL_FIRE,
        .partyWater = sParty_MAY_ROUTE_11_NORMAL_WATER,
    },
    [TRAINER_MAY_ROUTE_11_ANGRY] =
    {
    FEMALE_RIVAL,
        ADV_AI,
        .partySize = ARRAY_COUNT(sParty_MAY_ROUTE_11_ANGRY_GRASS),
        .partyGrass = sParty_MAY_ROUTE_11_ANGRY_GRASS,
        .partyFire = sParty_MAY_ROUTE_11_ANGRY_FIRE,
        .partyWater = sParty_MAY_ROUTE_11_ANGRY_WATER,
    },
    [TRAINER_MAY_BASALEK_TOWN] =
    {
    FEMALE_RIVAL,
        ADV_AI,
        .partySize = ARRAY_COUNT(sParty_MAY_BASALEK_TOWN_GRASS),
        .partyGrass = sParty_MAY_BASALEK_TOWN_GRASS,
        .partyFire = sParty_MAY_BASALEK_TOWN_FIRE,
        .partyWater = sParty_MAY_BASALEK_TOWN_WATER,
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
    TPARTY(sParty_Isaac1),
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
    TPARTY(sParty_Davis),
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
    TPARTY(sParty_Mitchell),
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
    TPARTY(sParty_Isaac2),
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
    TPARTY(sParty_Isaac3),
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
    TPARTY(sParty_Isaac4),
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
    TPARTY(sParty_Isaac5),
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
    TPARTY(sParty_Lydia1),
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
    TPARTY(sParty_Halle),
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
    TPARTY(sParty_Garrison),
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
    TPARTY(sParty_Lydia2),
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
    TPARTY(sParty_Lydia3),
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
    TPARTY(sParty_Lydia4),
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
    TPARTY(sParty_Lydia5),
    },

    [TRAINER_R7_NINJABOYSON_1] =
    {
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    TPARTY(sParty_Jackson1),
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
    TPARTY(sParty_Lorenzo),
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
    TPARTY(sParty_Sebastian),
    },

    [TRAINER_R7_NINJABOYSON_2] =
    {
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
    TPARTY(sParty_Jackson2),
    },

    [TRAINER_R7_NINJABOYSON_3] =
    {
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    TPARTY(sParty_Jackson3),
    },

    [TRAINER_R7_NINJABOYSON_4] =
    {
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
    TPARTY(sParty_Jackson4),
    },

    [TRAINER_R7_NINJABOYSON_5] =
    {
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("JACKSON"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    TPARTY(sParty_Jackson5),
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
    TPARTY(sParty_Catherine1),
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
    TPARTY(sParty_Jenna),
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
    TPARTY(sParty_Sophia),
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
    TPARTY(sParty_Catherine2),
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
    TPARTY(sParty_Catherine3),
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
    TPARTY(sParty_Catherine4),
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
    TPARTY(sParty_Catherine5),
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
    TPARTY(sParty_Julio),
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
    TPARTY(sParty_GruntSeafloorCavern5),
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
    TPARTY(sParty_GruntUnused),
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
    TPARTY(sParty_GruntMtPyre4),
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
    TPARTY(sParty_GruntJaggedPass),
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
    TPARTY(sParty_Marc),
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
    TPARTY(sParty_Brenden),
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
    TPARTY(sParty_Lilith),
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
    TPARTY(sParty_Cristian),
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
    TPARTY(sParty_Sylvia),
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
    TPARTY(sParty_Leonardo),
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
    TPARTY(sParty_Athena),
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
    TPARTY(sParty_Harrison),
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
    TPARTY(sParty_GruntMtChimney2),
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
    TPARTY(sParty_Clarence),
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
    TPARTY(sParty_Terry),
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
    TPARTY(sParty_Nate),
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
    TPARTY(sParty_Kathleen),
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
    TPARTY(sParty_Clifford),
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
    TPARTY(sParty_Nicholas),
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
    TPARTY(sParty_GruntSpaceCenter3),
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
    TPARTY(sParty_GruntSpaceCenter4),
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
    TPARTY(sParty_GruntSpaceCenter5),
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
    TPARTY(sParty_GruntSpaceCenter6),
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
    TPARTY(sParty_GruntSpaceCenter7),
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
    TPARTY(sParty_Macey),
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
    TPARTY(sParty_Paxton),
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
    TPARTY(sParty_Isabella),
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
    TPARTY(sParty_GruntWeatherInst5),
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
    TPARTY(sParty_TabithaMtChimney),
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
    TPARTY(sParty_Jonathan),
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
    TPARTY(sParty_MaxieMagmaHideout),
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
    TPARTY(sParty_MaxieMtChimney),
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
    TPARTY(sParty_Tiana),
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
    TPARTY(sParty_Haley1),
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
    TPARTY(sParty_Janice),
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
    TPARTY(sParty_Vivi),
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
    TPARTY(sParty_Haley2),
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
    TPARTY(sParty_Haley3),
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
    TPARTY(sParty_Haley4),
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
    TPARTY(sParty_Haley5),
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
    TPARTY(sParty_Sally),
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
    TPARTY(sParty_Robin),
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
    TPARTY(sParty_Andrea),
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
    TPARTY(sParty_Crissy),
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
    TPARTY(sParty_Rick),
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
    TPARTY(sParty_Lyle),
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
    TPARTY(sParty_Jose),
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
    TPARTY(sParty_Doug),
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
    TPARTY(sParty_Greg),
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
    TPARTY(sParty_Kent),
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
    TPARTY(sParty_James1),
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
    TPARTY(sParty_James2),
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
    TPARTY(sParty_James3),
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
    TPARTY(sParty_James4),
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
    TPARTY(sParty_James5),
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
    TPARTY(sParty_Brice),
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
    TPARTY(sParty_Trent1),
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
    TPARTY(sParty_Lenny),
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
    TPARTY(sParty_Lucas1),
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
    TPARTY(sParty_Alan),
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
    TPARTY(sParty_Clark),
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
    TPARTY(sParty_Eric),
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
    TPARTY(sParty_Lucas2),
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
    TPARTY(sParty_Mike1),
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
    TPARTY(sParty_Mike2),
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
    TPARTY(sParty_Trent2),
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
    TPARTY(sParty_Trent3),
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
    TPARTY(sParty_Trent4),
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
    TPARTY(sParty_Trent5),
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
    TPARTY(sParty_DezAndLuke),
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
    TPARTY(sParty_LeaAndJed),
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
    TPARTY(sParty_KiraAndDan1),
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
    TPARTY(sParty_KiraAndDan2),
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
    TPARTY(sParty_KiraAndDan3),
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
    TPARTY(sParty_KiraAndDan4),
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
    TPARTY(sParty_KiraAndDan5),
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
    TPARTY(sParty_Johanna),
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
    TPARTY(sParty_Gerald),
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
    TPARTY(sParty_Vivian),
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
    TPARTY(sParty_Danielle),
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
    TPARTY(sParty_Hideo),
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
    TPARTY(sParty_Keigo),
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
    TPARTY(sParty_Riley),
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
    TPARTY(sParty_Flint),
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
    TPARTY(sParty_Ashley),
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
    TPARTY(sParty_WallyMauville),
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
    TPARTY(sParty_WallyVR2),
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
    TPARTY(sParty_WallyVR3),
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
    TPARTY(sParty_WallyVR4),
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
    TPARTY(sParty_WallyVR5),
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
    TPARTY(sParty_Jonah),
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
    TPARTY(sParty_Henry),
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
    TPARTY(sParty_Roger),
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
    TPARTY(sParty_Alexa),
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
    TPARTY(sParty_Ruben),
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
    TPARTY(sParty_Koji1),
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
    TPARTY(sParty_Wayne),
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
    TPARTY(sParty_Aidan),
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
    TPARTY(sParty_Reed),
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
    TPARTY(sParty_Tisha),
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
    TPARTY(sParty_ToriAndTia),
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
    TPARTY(sParty_KimAndIris),
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
    TPARTY(sParty_TyraAndIvy),
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
    TPARTY(sParty_MelAndPaul),
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
    TPARTY(sParty_JohnAndJay1),
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
    TPARTY(sParty_JohnAndJay2),
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
    TPARTY(sParty_JohnAndJay3),
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
    TPARTY(sParty_JohnAndJay4),
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
    TPARTY(sParty_JohnAndJay5),
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
    TPARTY(sParty_ReliAndIan),
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
    TPARTY(sParty_LilaAndRoy1),
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
    TPARTY(sParty_LilaAndRoy2),
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
    TPARTY(sParty_LilaAndRoy3),
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
    TPARTY(sParty_LilaAndRoy4),
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
    TPARTY(sParty_LilaAndRoy5),
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
    TPARTY(sParty_LisaAndRay),
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
    TPARTY(sParty_Chris),
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
    TPARTY(sParty_Dawson),
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
    TPARTY(sParty_Sarah),
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
    TPARTY(sParty_Darian),
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
    TPARTY(sParty_Hailey),
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
    TPARTY(sParty_Chandler),
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
    TPARTY(sParty_Kaleb),
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
    TPARTY(sParty_Joseph),
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
    TPARTY(sParty_Alyssa),
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
    TPARTY(sParty_Marcos),
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
    TPARTY(sParty_Rhett),
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
    TPARTY(sParty_Tyron),
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
    TPARTY(sParty_Celina),
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
    TPARTY(sParty_Bianca),
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
    TPARTY(sParty_Hayden),
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
    TPARTY(sParty_Sophie),
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
    TPARTY(sParty_Coby),
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
    TPARTY(sParty_Lawrence),
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
    TPARTY(sParty_Wyatt),
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
    TPARTY(sParty_Angelina),
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
    TPARTY(sParty_Kai),
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
    TPARTY(sParty_Charlotte),
    },

    [TRAINER_DESERT_HIKER3DRE] =
    {
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("DEANDRE"),
        .items = {},
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    TPARTY(sParty_Deandre),
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
    TPARTY(sParty_GruntMagmaHideout1),
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
    TPARTY(sParty_GruntMagmaHideout2),
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
    TPARTY(sParty_GruntMagmaHideout3),
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
    TPARTY(sParty_GruntMagmaHideout4),
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
    TPARTY(sParty_GruntMagmaHideout5),
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
    TPARTY(sParty_GruntMagmaHideout6),
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
    TPARTY(sParty_GruntMagmaHideout7),
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
    TPARTY(sParty_GruntMagmaHideout8),
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
    TPARTY(sParty_GruntMagmaHideout9),
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
    TPARTY(sParty_GruntMagmaHideout10),
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
    TPARTY(sParty_GruntMagmaHideout11),
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
    TPARTY(sParty_GruntMagmaHideout12),
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
    TPARTY(sParty_GruntMagmaHideout13),
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
    TPARTY(sParty_GruntMagmaHideout14),
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
    TPARTY(sParty_GruntMagmaHideout15),
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
    TPARTY(sParty_GruntMagmaHideout16),
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
    TPARTY(sParty_TabithaMagmaHideout),
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
    TPARTY(sParty_Darcy),
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
    TPARTY(sParty_MaxieMossdeep),
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
    TPARTY(sParty_Pete),
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
    TPARTY(sParty_Isabelle),
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
    TPARTY(sParty_Andres1),
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
    TPARTY(sParty_Josue),
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
    TPARTY(sParty_Camron),
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
    TPARTY(sParty_Cory1),
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
    TPARTY(sParty_Carolina),
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
    TPARTY(sParty_Elijah),
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
    TPARTY(sParty_Celia),
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
    TPARTY(sParty_Bryan),
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
    TPARTY(sParty_Branden),
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
    TPARTY(sParty_Bryant),
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
    TPARTY(sParty_Shayla),
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
    TPARTY(sParty_Kyra),
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
    TPARTY(sParty_Jaiden),
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
    TPARTY(sParty_Alix),
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
    TPARTY(sParty_Helene),
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
    TPARTY(sParty_Marlene),
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
    TPARTY(sParty_Devan),
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
    TPARTY(sParty_Johnson),
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
    TPARTY(sParty_Melina),
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
    TPARTY(sParty_Brandi),
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
    TPARTY(sParty_Aisha),
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
    TPARTY(sParty_Makayla),
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
    TPARTY(sParty_Fabian),
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
    TPARTY(sParty_Dayton),
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
    TPARTY(sParty_Rachel),
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
    TPARTY(sParty_Leonel),
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
    TPARTY(sParty_Callie),
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
    TPARTY(sParty_Cale),
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
    TPARTY(sParty_Myles),
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
    TPARTY(sParty_Pat),
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
    TPARTY(sParty_Cristin1),
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
    TPARTY(sParty_Roxanne2),
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
    TPARTY(sParty_Roxanne3),
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
    TPARTY(sParty_Roxanne4),
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
    TPARTY(sParty_Roxanne5),
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
    TPARTY(sParty_Brawly2),
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
    TPARTY(sParty_Brawly3),
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
    TPARTY(sParty_Brawly4),
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
    TPARTY(sParty_Brawly5),
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
    TPARTY(sParty_Wattson2),
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
    TPARTY(sParty_Wattson3),
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
    TPARTY(sParty_Wattson4),
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
    TPARTY(sParty_Wattson5),
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
    TPARTY(sParty_Flannery2),
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
    TPARTY(sParty_Flannery3),
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
    TPARTY(sParty_Flannery4),
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
    TPARTY(sParty_Flannery5),
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
    TPARTY(sParty_Norman2),
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
    TPARTY(sParty_Norman3),
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
    TPARTY(sParty_Norman4),
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
    TPARTY(sParty_Norman5),
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
    TPARTY(sParty_Winona2),
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
    TPARTY(sParty_Winona3),
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
    TPARTY(sParty_Winona4),
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
    TPARTY(sParty_Winona5),
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
    TPARTY(sParty_TateAndLiza2),
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
    TPARTY(sParty_TateAndLiza3),
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
    TPARTY(sParty_TateAndLiza4),
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
    TPARTY(sParty_TateAndLiza5),
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
    TPARTY(sParty_Juan2),
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
    TPARTY(sParty_Juan3),
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
    TPARTY(sParty_Juan4),
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
    TPARTY(sParty_Juan5),
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
    TPARTY(sParty_Darius),
    },
    [TRAINER_ELITE_FOUR_MINA] =
    {
    .trainerClass = TRAINER_CLASS_ARTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BW_ACE_TRAINER_F_SWIMMER,
        .trainerName = _("Mina"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    TPARTY(sParty_Steven),
    },
    [TRAINER_UNUSED_SIDNEY] =
    {
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
    NAME("SIDNEY"),
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .mugshotColor = MUGSHOT_COLOR_PURPLE,
    ADV_AI | AI_FLAG_FORCE_SETUP_FIRST_TURN,
    TPARTY(sParty_Sidney),
    },
    [TRAINER_UNUSED_PHOEBE] =
    {
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
    NAME("PHOEBE"),
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .mugshotColor = MUGSHOT_COLOR_GREEN,
    ADV_AI,
    TPARTY(sParty_Phoebe),
    },
    [TRAINER_UNUSED_GLACIA] =
    {
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
    NAME("GLACIA"),
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .mugshotColor = MUGSHOT_COLOR_PINK,
    ADV_AI,
    TPARTY(sParty_Glacia),
    },
    [TRAINER_UNUSED_DRAKE] =
    {
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
    NAME("DRAKE"),
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .mugshotColor = MUGSHOT_COLOR_BLUE,
    ADV_AI,
    TPARTY(sParty_Drake),
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
    TPARTY(sParty_Anabel),
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
    TPARTY(sParty_Tucker),
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
    TPARTY(sParty_Spenser),
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
    TPARTY(sParty_Greta),
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
    TPARTY(sParty_Noland),
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
    TPARTY(sParty_Lucy),
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
    TPARTY(sParty_Brandon),
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
    TPARTY(sParty_Andres2),
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
    TPARTY(sParty_Andres3),
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
    TPARTY(sParty_Andres4),
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
    TPARTY(sParty_Andres5),
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
    TPARTY(sParty_Cory2),
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
    TPARTY(sParty_Cory3),
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
    TPARTY(sParty_Cory4),
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
    TPARTY(sParty_Cory5),
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
    TPARTY(sParty_Pablo2),
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
    TPARTY(sParty_Pablo3),
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
    TPARTY(sParty_Pablo4),
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
    TPARTY(sParty_Pablo5),
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
    TPARTY(sParty_Koji2),
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
    TPARTY(sParty_Koji3),
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
    TPARTY(sParty_Koji4),
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
    TPARTY(sParty_Koji5),
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
    TPARTY(sParty_Cristin2),
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
    TPARTY(sParty_Cristin3),
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
    TPARTY(sParty_Cristin4),
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
    TPARTY(sParty_Cristin5),
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
    TPARTY(sParty_Fernando2),
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
    TPARTY(sParty_Fernando3),
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
    TPARTY(sParty_Fernando4),
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
    TPARTY(sParty_Fernando5),
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
    TPARTY(sParty_Sawyer2),
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
    TPARTY(sParty_Sawyer3),
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
    TPARTY(sParty_Sawyer4),
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
    TPARTY(sParty_Sawyer5),
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
    TPARTY(sParty_Gabrielle2),
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
    TPARTY(sParty_Gabrielle3),
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
    TPARTY(sParty_Gabrielle4),
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
    TPARTY(sParty_Gabrielle5),
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
    TPARTY(sParty_Thalia2),
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
    TPARTY(sParty_Thalia3),
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
    TPARTY(sParty_Thalia4),
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
    TPARTY(sParty_Thalia5),
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
    TPARTY(sParty_Mariela),
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
    TPARTY(sParty_Alvaro),
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
    TPARTY(sParty_Everett),
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
    TPARTY(sParty_Red),
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
    TPARTY(sParty_Leaf),
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
    TPARTY(sParty_BrendanLinkPlaceholder),
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
    TPARTY(sParty_MayLinkPlaceholder),
    },
};

#undef NAME
#undef DUMB_AI
#undef SEQ_AI
#undef BASIC_AI
#undef ADV_AI
#undef EXPERT_AI
#undef GYM
#undef BAT
#undef EBP
#undef ACE
#undef SEQ
#undef BAD
#undef SMART
#undef HPA
#undef SUI