#ifndef GUARD_CONSTANTS_VARS_H
#define GUARD_CONSTANTS_VARS_H

#include "constants/vars_frlg.h"

#define VARS_START 0x4000

// temporary vars
// The first 0x10 vars are temporary--they are cleared every time a map is loaded.
#define TEMP_VARS_START            VARS_START
#define VAR_TEMP_0                 (TEMP_VARS_START + 0)
#define VAR_TEMP_1                 (TEMP_VARS_START + 1)
#define VAR_TEMP_2                 (TEMP_VARS_START + 2)
#define VAR_TEMP_3                 (TEMP_VARS_START + 3) // Note: Used when the player checks a TV
#define VAR_TEMP_4                 (TEMP_VARS_START + 4)
#define VAR_TEMP_5                 (TEMP_VARS_START + 5)
#define VAR_TEMP_6                 (TEMP_VARS_START + 6)
#define VAR_TEMP_7                 (TEMP_VARS_START + 7)
#define VAR_TEMP_8                 (TEMP_VARS_START + 8)
#define VAR_TEMP_9                 (TEMP_VARS_START + 9)
#define VAR_TEMP_A                 (TEMP_VARS_START + 10)
#define VAR_TEMP_B                 (TEMP_VARS_START + 11)
#define VAR_TEMP_C                 (TEMP_VARS_START + 12)
#define VAR_TEMP_D                 (TEMP_VARS_START + 13)
#define VAR_TEMP_E                 (TEMP_VARS_START + 14)
#define VAR_TEMP_F                 (TEMP_VARS_START + 15)
#define TEMP_VARS_END              VAR_TEMP_F
#define NUM_TEMP_VARS              (TEMP_VARS_END - TEMP_VARS_START + 1)

// object gfx id vars
// These 0x10 vars are used to dynamically control a map object's sprite.
// For example, the rival's sprite id is dynamically set based on the player's gender.
// See VarGetObjectEventGraphicsId().
#define VAR_OBJ_GFX_ID_0                                    VARS_START + 16
#define VAR_OBJ_GFX_ID_1                                    VARS_START + 17
#define VAR_OBJ_GFX_ID_2                                    VARS_START + 18

// general purpose vars
#define VAR_REPEL_STEP_COUNT                                VARS_START + 19
#define VAR_FRIENDSHIP_STEP_COUNTER                         VARS_START + 20
#define VAR_POISON_STEP_COUNTER                             VARS_START + 21
#define VAR_RESET_RTC_ENABLE                                VARS_START + 22
#define VAR_DAYS                                            VARS_START + 23
#define VAR_AI_FLAGS                                        VARS_START + 24 // mine
#define VAR_FORCE_ENCOUNTER                                 VARS_START + 25 // mine
#define VAR_ENCOUNTER_TABLE                                 VARS_START + 26 // mine
#define VAR_MUSHROOM_X                                      VARS_START + 27 // mine
#define VAR_MUSHROOM_Y                                      VARS_START + 28 // mine
#define VAR_MUSHROOM_COUNT                                  VARS_START + 29 // mine
#define VAR_MUSHROOM_LOCATION                               VARS_START + 30 // mine
#define VAR_OLDWORLD_VAR                                    VARS_START + 31 // do not change
#define VAR_OPPONENT_LEVEL                                  VARS_START + 32 // mine
#define VAR_ROCKPLATE_1                                     VARS_START + 33 // mine
#define VAR_ROCKPLATE_2                                     VARS_START + 34 // mine
#define VAR_ROCKPLATE_3                                     VARS_START + 35 // mine
#define VAR_ROCKPLATE_4                                     VARS_START + 36 // mine
#define VAR_ROCKPLATE_5                                     VARS_START + 37 // mine
#define VAR_ROCKPLATE_6                                     VARS_START + 38 // mine
#define VAR_ROCKPLATE_7                                     VARS_START + 39 // mine
#define VAR_ROCKPLATE_8                                     VARS_START + 40 // mine
#define VAR_ROCKPLATE_9                                     VARS_START + 41 // mine
#define VAR_STORY                                           VARS_START + 42 // mine
#define VAR_FADEOUT_SPEED                                   VARS_START + 43 // mine
#define VAR_ROUTE126_STATE                                  VARS_START + 44 // Unused Var
#define VAR_ROUTE127_STATE                                  VARS_START + 45 // Unused Var
#define VAR_ROUTE128_STATE                                  VARS_START + 46
#define VAR_ROUTE129_STATE                                  VARS_START + 47 // Unused Var
#define VAR_ROUTE130_STATE                                  VARS_START + 48 // Unused Var
#define VAR_ROUTE131_STATE                                  VARS_START + 49 // Unused Var
#define VAR_ROUTE132_STATE                                  VARS_START + 50 // Unused Var
#define VAR_ROUTE133_STATE                                  VARS_START + 51 // Unused Var
#define VAR_ROUTE134_STATE                                  VARS_START + 52 // Unused Var
#define VAR_LITTLEROOT_HOUSES_STATE_MAY                     VARS_START + 53
#define VAR_UNUSED_0x4083                                   VARS_START + 54 // Unused Var
#define VAR_BIRCH_LAB_STATE                                 VARS_START + 55
#define VAR_PETALBURG_GYM_STATE                             VARS_START + 56 // 0-1: Wally tutorial, 2-6: 0-4 badges, 7: Defeated Norman, 8: Rematch Norman
#define VAR_CONTEST_HALL_STATE                              VARS_START + 57
#define VAR_CABLE_CLUB_STATE                                VARS_START + 58
#define VAR_UNUSED_0x408B                                   VARS_START + 59 // Unused Var
#define VAR_LITTLEROOT_HOUSES_STATE_BRENDAN                 VARS_START + 60
#define VAR_LITTLEROOT_RIVAL_STATE                          VARS_START + 61
#define VAR_BOARD_BRINEY_BOAT_STATE                         VARS_START + 62
#define VAR_DEVON_CORP_3F_STATE                             VARS_START + 63
#define VAR_BRINEY_HOUSE_STATE                              VARS_START + 64
#define VAR_UNUSED_0x4091                                   VARS_START + 65 // Unused Var
#define VAR_LITTLEROOT_INTRO_STATE                          VARS_START + 66
#define VAR_MAUVILLE_GYM_STATE                              VARS_START + 67
#define VAR_LILYCOVE_MUSEUM_2F_STATE                        VARS_START + 68
#define VAR_LILYCOVE_FAN_CLUB_STATE                         VARS_START + 69
#define VAR_BRINEY_LOCATION                                 VARS_START + 70
#define VAR_INIT_SECRET_BASE                                VARS_START + 71
#define VAR_PETALBURG_WOODS_STATE                           VARS_START + 72
#define VAR_LILYCOVE_CONTEST_LOBBY_STATE                    VARS_START + 73
#define VAR_RUSTURF_TUNNEL_STATE                            VARS_START + 74
#define VAR_UNUSED_0x409B                                   VARS_START + 75 // Unused Var
#define VAR_ELITE_4_STATE                                   VARS_START + 76
#define VAR_UNUSED_0x409D                                   VARS_START + 77 // Unused Var
#define VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE         VARS_START + 78
#define VAR_MOSSDEEP_SPACE_CENTER_STATE                     VARS_START + 79
#define VAR_SLATEPORT_HARBOR_STATE                          VARS_START + 80
#define VAR_UNUSED_0x40A1                                   VARS_START + 81 // Unused var
#define VAR_SEAFLOOR_CAVERN_STATE                           VARS_START + 82
#define VAR_CABLE_CAR_STATION_STATE                         VARS_START + 83
#define VAR_SAFARI_ZONE_STATE                               VARS_START + 84  // 0: In or out of SZ, 1: Player exiting SZ, 2: Player entering SZ
#define VAR_TRICK_HOUSE_BEING_WATCHED_STATE                 VARS_START + 85
#define VAR_TRICK_HOUSE_FOUND_TRICK_MASTER                  VARS_START + 86
#define VAR_TRICK_HOUSE_ENTRANCE_STATE                      VARS_START + 87
#define VAR_UNUSED_0x40A8                                   VARS_START + 88 // Unused Var
#define VAR_CYCLING_CHALLENGE_STATE                         VARS_START + 89
#define VAR_SLATEPORT_MUSEUM_1F_STATE                       VARS_START + 90
#define VAR_TRICK_HOUSE_PUZZLE_1_STATE                      VARS_START + 91
#define VAR_TRICK_HOUSE_PUZZLE_2_STATE                      VARS_START + 92
#define VAR_TRICK_HOUSE_PUZZLE_3_STATE                      VARS_START + 93
#define VAR_TRICK_HOUSE_PUZZLE_4_STATE                      VARS_START + 94
#define VAR_TRICK_HOUSE_PUZZLE_5_STATE                      VARS_START + 95
#define VAR_TRICK_HOUSE_PUZZLE_6_STATE                      VARS_START + 96
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE                      VARS_START + 97
#define VAR_TRICK_HOUSE_PUZZLE_8_STATE                      VARS_START + 98
#define VAR_WEATHER_INSTITUTE_STATE                         VARS_START + 99
#define VAR_SS_TIDAL_STATE                                  VARS_START + 100
#define VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR                 VARS_START + 101
#define VAR_TRICK_HOUSE_PUZZLE_7_STATE_2                    VARS_START + 102 // Leftover from RS, never set
#define VAR_SLATEPORT_FAN_CLUB_STATE                        VARS_START + 103
#define VAR_UNUSED_0x40B8                                   VARS_START + 104 // Unused Var
#define VAR_MT_PYRE_STATE                                   VARS_START + 105
#define VAR_NEW_MAUVILLE_STATE                              VARS_START + 106
#define VAR_UNUSED_0x40BB                                   VARS_START + 107 // Unused Var
#define VAR_BRAVO_TRAINER_BATTLE_TOWER_ON                   VARS_START + 108
#define VAR_JAGGED_PASS_ASH_WEATHER                         VARS_START + 109
#define VAR_GLASS_WORKSHOP_STATE                            VARS_START + 110
#define VAR_METEOR_FALLS_STATE                              VARS_START + 111
#define VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE                 VARS_START + 112
#define VAR_TRICK_HOUSE_PRIZE_PICKUP                        VARS_START + 113
#define VAR_PACIFIDLOG_TM_RECEIVED_DAY                      VARS_START + 114
#define VAR_VICTORY_ROAD_1F_STATE                           VARS_START + 115
#define VAR_FOSSIL_RESURRECTION_STATE                       VARS_START + 116
#define VAR_WHICH_FOSSIL_REVIVED                            VARS_START + 117
#define VAR_STEVENS_HOUSE_STATE                             VARS_START + 118
#define VAR_OLDALE_RIVAL_STATE                              VARS_START + 119
#define VAR_JAGGED_PASS_STATE                               VARS_START + 120
#define VAR_SCOTT_PETALBURG_ENCOUNTER                       VARS_START + 121
#define VAR_SKY_PILLAR_STATE                                VARS_START + 122
#define VAR_MIRAGE_TOWER_STATE                              VARS_START + 123
#define VAR_FOSSIL_MANIAC_STATE                             VARS_START + 124
#define VAR_CABLE_CLUB_TUTORIAL_STATE                       VARS_START + 125
#define VAR_FRONTIER_BATTLE_MODE                            VARS_START + 126
#define VAR_FRONTIER_FACILITY                               VARS_START + 127
#define VAR_HAS_ENTERED_BATTLE_FRONTIER                     VARS_START + 128 // Var is used like a flag.
#define VAR_SCOTT_STATE                                     VARS_START + 129
#define VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE                  VARS_START + 130
#define VAR_DEX_UPGRADE_JOHTO_STARTER_STATE                 VARS_START + 131
#define VAR_SS_TIDAL_SCOTT_STATE                            VARS_START + 132 // Always equal to FLAG_MET_SCOTT_ON_SS_TIDAL
#define VAR_ROAMER_POKEMON                                  VARS_START + 133 // 0 = Latias, 1 = Latios
#define VAR_TRAINER_HILL_IS_ACTIVE                          VARS_START + 134
#define VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE                    VARS_START + 135
#define VAR_SOOTOPOLIS_WALLACE_STATE                        VARS_START + 136
#define VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT    VARS_START + 137
#define VAR_REGISTER_BIRCH_STATE                            VARS_START + 138
#define VAR_UNUSED_0x40DB                                   VARS_START + 139// Unused Var
#define VAR_UNUSED_0x40DC                                   VARS_START + 140 // Unused Var
#define VAR_GIFT_PICHU_SLOT                                 VARS_START + 141
#define VAR_GIFT_UNUSED_1                                   VARS_START + 142 // Var is written to, but never read
#define VAR_GIFT_UNUSED_2                                   VARS_START + 143 // Var is written to, but never read
#define VAR_GIFT_UNUSED_3                                   VARS_START + 144 // Var is written to, but never read
#define VAR_GIFT_UNUSED_4                                   VARS_START + 145 // Var is written to, but never read
#define VAR_GIFT_UNUSED_5                                   VARS_START + 146 // Var is written to, but never read
#define VAR_GIFT_UNUSED_6                                   VARS_START + 147 // Var is written to, but never read
#define VAR_GIFT_UNUSED_7                                   VARS_START + 148 // var is written to, but never read
#define VAR_UNUSED_0x40E5                                   VARS_START + 149 // Unused Var
#define VAR_DAILY_SLOTS                                     VARS_START + 150
#define VAR_DAILY_WILDS                                     VARS_START + 151
#define VAR_DAILY_BLENDER                                   VARS_START + 152
#define VAR_DAILY_PLANTED_BERRIES                           VARS_START + 153
#define VAR_DAILY_PICKED_BERRIES                            VARS_START + 154
#define VAR_DAILY_ROULETTE                                  VARS_START + 155
#define VAR_SECRET_BASE_STEP_COUNTER                        VARS_START + 156 // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LAST_ITEM_USED                      VARS_START + 157 // Used by Secret Base TV programs
#define VAR_SECRET_BASE_LOW_TV_FLAGS                        VARS_START + 158 // Used by Secret Base TV programs

#define VARS_END                                            VAR_SECRET_BASE_LOW_TV_FLAGS
#define VARS_COUNT                                          (VARS_END - VARS_START + 1)

#define VAR_OBJ_GFX_ID_3                                 0
#define VAR_OBJ_GFX_ID_4                                 0
#define VAR_OBJ_GFX_ID_5                                 0
#define VAR_OBJ_GFX_ID_6                                 0
#define VAR_OBJ_GFX_ID_7                                 0
#define VAR_OBJ_GFX_ID_8                                 0
#define VAR_OBJ_GFX_ID_9                                 0
#define VAR_OBJ_GFX_ID_A                                 0
#define VAR_OBJ_GFX_ID_B                                 0
#define VAR_OBJ_GFX_ID_C                                 0
#define VAR_OBJ_GFX_ID_D                                 0
#define VAR_OBJ_GFX_ID_E                                 0
#define VAR_OBJ_GFX_ID_F                                 0
#define VAR_RECYCLE_GOODS                                0
#define VAR_ICE_STEP_COUNT                               0
#define VAR_STARTER_MON                                  0
#define VAR_MIRAGE_RND_H                                 0
#define VAR_MIRAGE_RND_L                                 0
#define VAR_SECRET_BASE_MAP                              0
#define VAR_CYCLING_ROAD_RECORD_COLLISIONS               0
#define VAR_CYCLING_ROAD_RECORD_TIME_L                   0
#define VAR_CYCLING_ROAD_RECORD_TIME_H                   0
#define VAR_ENIGMA_BERRY_AVAILABLE                       0
#define VAR_WONDER_NEWS_STEP_COUNTER                     0
#define VAR_FRONTIER_MANIAC_FACILITY                     0
#define VAR_FRONTIER_GAMBLER_CHALLENGE                   0
#define VAR_FRONTIER_GAMBLER_SET_CHALLENGE               0
#define VAR_FRONTIER_GAMBLER_AMOUNT_BET                  0
#define VAR_FRONTIER_GAMBLER_STATE                       0
#define VAR_DEOXYS_ROCK_STEP_COUNT                       0
#define VAR_DEOXYS_ROCK_LEVEL                            0
#define VAR_PC_BOX_TO_SEND_MON                           0
#define VAR_ABNORMAL_WEATHER_LOCATION                    0
#define VAR_ABNORMAL_WEATHER_STEP_COUNTER                0
#define VAR_SHOULD_END_ABNORMAL_WEATHER                  0
#define VAR_FARAWAY_ISLAND_STEP_COUNTER                  0
#define VAR_REGICE_STEPS_1                               0
#define VAR_REGICE_STEPS_2                               0
#define VAR_REGICE_STEPS_3                               0
#define VAR_ALTERING_CAVE_WILD_SET                       0
#define VAR_DISTRIBUTE_EON_TICKET                        0
#define VAR_FANCLUB_FAN_COUNTER                          0
#define VAR_FANCLUB_LOSE_FAN_TIMER                       0
#define VAR_DEPT_STORE_FLOOR                             0
#define VAR_TRICK_HOUSE_LEVEL                            0
#define VAR_POKELOT_PRIZE_ITEM                           0
#define VAR_NATIONAL_DEX                                 0
#define VAR_SEEDOT_SIZE_RECORD                           0
#define VAR_ASH_GATHER_COUNT                             0
#define VAR_BIRCH_STATE                                  0
#define VAR_CRUISE_STEP_COUNT                            0
#define VAR_POKELOT_RND1                                 0
#define VAR_POKELOT_RND2                                 0
#define VAR_POKELOT_PRIZE_PLACE                          0
#define VAR_LOTAD_SIZE_RECORD                            0
#define VAR_LITTLEROOT_TOWN_STATE                        0
#define VAR_OLDALE_TOWN_STATE                            0
#define VAR_LAVARIDGE_TOWN_STATE                         0
#define VAR_CURRENT_SECRET_BASE                          0
#define VAR_PETALBURG_CITY_STATE                         0
#define VAR_SLATEPORT_CITY_STATE                         0
#define VAR_RUSTBORO_CITY_STATE                          0
#define VAR_MOSSDEEP_CITY_STATE                          0
#define VAR_ROUTE112_STATE                               0 // Unused Var
#define VAR_ROUTE113_STATE                               0 // Unused Var
#define VAR_ROUTE114_STATE                               0 // Unused Var
#define VAR_ROUTE115_STATE                               0 // Unused Var
#define VAR_ROUTE116_STATE                               0
#define VAR_ROUTE117_STATE                               0 // Unused Var
#define VAR_ROUTE118_STATE                               0
#define VAR_ROUTE119_STATE                               0
#define VAR_ROUTE120_STATE                               0 // Unused Var
#define VAR_ROUTE121_STATE                               0
#define VAR_ROUTE122_STATE                               0 // Unused Var
#define VAR_ROUTE123_STATE                               0 // Unused Var
#define VAR_ROUTE124_STATE                               0 // Unused Var
#define VAR_ROUTE125_STATE                               0 // Unused Var
#define VAR_CONTEST_TYPE                                 0
#define VAR_SECRET_BASE_INITIALIZED                      0
#define VAR_CONTEST_PRIZE_PICKUP                         0
#define VAR_SECRET_BASE_HIGH_TV_FLAGS                    0 // Used by Secret Base TV programs
#define VAR_SECRET_BASE_IS_NOT_LOCAL                     0 // Set to TRUE while in another player's secret base.
#define VAR_DAILY_BP                                     0
#define VAR_WALLY_CALL_STEP_COUNTER                      0
#define VAR_SCOTT_FORTREE_CALL_STEP_COUNTER              0
#define VAR_ROXANNE_CALL_STEP_COUNTER                    0
#define VAR_SCOTT_BF_CALL_STEP_COUNTER                   0
#define VAR_RIVAL_RAYQUAZA_CALL_STEP_COUNTER             0
#define VAR_UNUSED_0x40F7                                0 // Unused Var
#define VAR_UNUSED_0x40F8                                0 // Unused Var
#define VAR_UNUSED_0x40F9                                0 // Unused Var
#define VAR_UNUSED_0x40FA                                0 // Unused Var
#define VAR_UNUSED_0x40FB                                0 // Unused Var
#define VAR_UNUSED_0x40FC                                0 // Unused Var
#define VAR_UNUSED_0x40FD                                0 // Unused Var
#define VAR_UNUSED_0x40FE                                0 // Unused Var
#define VAR_UNUSED_0x40FF                                0 // Unused Var

#define SPECIAL_VARS_START            0x8000
// special vars
// They are commonly used as parameters to commands, or return values from commands.
#define VAR_0x8000                    0x8000
#define VAR_0x8001                    0x8001
#define VAR_0x8002                    0x8002
#define VAR_0x8003                    0x8003
#define VAR_0x8004                    0x8004
#define VAR_0x8005                    0x8005
#define VAR_0x8006                    0x8006
#define VAR_0x8007                    0x8007
#define VAR_0x8008                    0x8008
#define VAR_0x8009                    0x8009
#define VAR_0x800A                    0x800A
#define VAR_0x800B                    0x800B
#define VAR_FACING                    0x800C
#define VAR_RESULT                    0x800D
#define VAR_ITEM_ID                   0x800E
#define VAR_LAST_TALKED               0x800F
#define VAR_CONTEST_RANK              0x8010
#define VAR_CONTEST_CATEGORY          0x8011
#define VAR_MON_BOX_ID                0x8012
#define VAR_MON_BOX_POS               0x8013
#define VAR_UNUSED_0x8014             0x8014
#define VAR_TRAINER_BATTLE_OPPONENT_A 0x8015 // Alias of TRAINER_BATTLE_PARAM.opponentA

#define SPECIAL_VARS_END              0x8015

// If an overworld trigger uses this pseudo-variable as the trigger check,
// then the script will be run using RunScriptImmediately instead of in the
// global script context. This means it will run faster, but cannot do any
// cutscenes nor call a wait command. Used for weather effects in vanilla.
#define TRIGGER_RUN_IMMEDIATELY   0

// Temp var aliases
#define VAR_TEMP_CHALLENGE_STATUS  VAR_TEMP_0

#define VAR_TEMP_MIXED_RECORDS         VAR_TEMP_0
#define VAR_TEMP_RECORD_MIX_GIFT_ITEM  VAR_TEMP_1

#define VAR_TEMP_PLAYING_PYRAMID_MUSIC  VAR_TEMP_E

#define VAR_TEMP_FRONTIER_TUTOR_SELECTION  VAR_TEMP_D
#define VAR_TEMP_FRONTIER_TUTOR_ID         VAR_TEMP_E

#define VAR_TEMP_TRANSFERRED_SPECIES  VAR_TEMP_1

#if TESTING
#define TESTING_VARS_START                  0x9000
#define TESTING_VAR_DIFFICULTY              (TESTING_VARS_START + 0x0)
#define TESTING_VAR_TRAINER_SLIDES          (TESTING_VARS_START + 0x1)
#define TESTING_VAR_UNUSED_2                (TESTING_VARS_START + 0x2)
#define TESTING_VAR_UNUSED_3                (TESTING_VARS_START + 0x3)
#define TESTING_VAR_UNUSED_4                (TESTING_VARS_START + 0x4)
#define TESTING_VAR_UNUSED_5                (TESTING_VARS_START + 0x5)
#define TESTING_VAR_UNUSED_6                (TESTING_VARS_START + 0x6)
#define TESTING_VAR_UNUSED_7                (TESTING_VARS_START + 0x7)
#endif // TESTING

#endif // GUARD_CONSTANTS_VARS_H
