#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E) // When set, follower pokemon won't be spawned
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F) // reserved for item balls. DO NOT USE FOR ANYTHING ELSE!
#define TEMP_FLAGS_END   FLAG_TEMP_1F
#define NUM_TEMP_FLAGS   (TEMP_FLAGS_END - TEMP_FLAGS_START + 1)

#define FLAG_HIDE_LAB_RIVAL                     0x20 // Used to show/hide rival in prof's lab
#define FLAG_INTRO_TO_BP                        0x21 // Introduction to battle points
#define FLAG_GLADE_PUZZLE                       0x22 // Sets the lost glade flag so the camper changes dialogue
#define FLAG_DEFEATED_RIVAL_HARBOR              0x23 // Flag for defeating rival at coralgrove harbor. Also used to define whether the itemfinder has already been obtained
#define FLAG_AZURETIDE_HONEY                    0x24 // Flag for getting honey in azuretide town
#define FLAG_SYSTEM_NO_CATCHING                 0x25 // STOPS CATCHING WILD POKEMON
#define FLAG_SYSTEM_NO_WILD_RUNNING             0x26 // Stops running from wild pokemon
#define FLAG_SYSTEM_TOGGLE_DOUBLE_WILDS         0x27 // Forces double wild battles
#define FLAG_OBTAINED_PAINTBRUSH                0x28 // 
#define FLAG_MET_MOVE_TUTOR                     0x29 // Introduction to BP Shop Move Tutor
#define FLAG_ROUTE5_ITEM1                       0x2A // Route 5 item flags start
#define FLAG_ROUTE5_ITEM2                       0x2B // 
#define FLAG_ROUTE5_ITEM3                       0x2C // 
#define FLAG_ROUTE5_ITEM4                       0x2D // 
#define FLAG_ROUTE5_HIDDENITEM1                 0x2E // 
#define FLAG_ROUTE5_HIDDENITEM2                 0x2F // 
#define FLAG_ROUTE5_HIDDENITEM3                 0x30 // 
#define FLAG_ROUTE5_HIDDENITEM4                 0x31 //
#define FLAG_ROUTE5_HIDDENITEM5                 0x32 // Route 5 item flags end
#define FLAG_INCREASED_SHINY_ODDS               0x33 // increase shiny odds
#define FLAG_SKYLOCH_JUICE                      0x34 // 
#define FLAG_SKYLOCH_CASTELIACONE               0x35 // 
#define FLAG_SHOWED_BADGE                       0x36 // Showed badge to gain entry to adamant tower
#define FLAG_PARTNER_HEALS                        0x37 // disable switching while followed by a partner
#define FLAG_ROUTE8_ITEM1                       0x38 // Route 8 item flags
#define FLAG_ROUTE8_ITEM2                       0x39 // 
#define FLAG_ROUTE8_ITEM3                       0x3A // 
#define FLAG_ROUTE8_ITEM4                       0x3B // 
#define FLAG_ROUTE8_ITEM5                       0x3C // 
#define FLAG_ROUTE8_ITEM6                       0x3D // 
#define FLAG_HIDE_SHORESLATE_BOAT               0x3E // Hides shoreslate ferry until devon story is completed
#define FLAG_HELPED_DEVON_CORP                  0x3F // End flag for the shoreslate devon quest
#define FLAG_SHORESLATE_ITEM1                   0x40 // 
#define FLAG_GIVEN_CASTELIATOGIRL               0x41 // 
#define FLAG_RECEIVED_SHORESLATE_POTION         0x42 // 
#define FLAG_DEVON_UNDER_ATTACK                 0x43 // 
#define FLAG_DEVON_RESCUED                      0x44 // 
#define FLAG_DEVONCORP_BASEMENT_BALL            0x45 // 
#define FLAG_BASEMENT_SUPERPOTION               0x46 // 
#define FLAG_VISITED_MARIGORGE                  0x47 // 
#define FLAG_DESERT_STEPS                       0x48 // Used to measure steps taken in the desert
#define FLAG_DESERT_RUINS_OPENED                0x49 // 
#define FLAG_KAOLISLE_GYM_SWITCH1               0x4A // 
#define FLAG_KAOLISLE_GYM_SWITCH2               0x4B // 
#define FLAG_KAOLISLE_GYM_SWITCH3               0x4C // 
#define FLAG_KAOLISLE_GYM_SWITCH4               0x4D // 
#define FLAG_KAOLISLE_PLAYINGPIANO              0x4E // 
#define FLAG_PIANOREWARD                        0x4F // 

// Scripts
#define FLAG_SYSTEM_NOREWARDBATTLES             0x50 // NO EXP OR MONEY FROM BATTLES, used in hotel battle buffet
#define FLAG_SET_WALL_CLOCK                     0x51
#define FLAG_RECEIVED_METAL_COAT                0x52
#define FLAG_SANDSTONE_LAVACOOKIE               0x53
#define FLAG_RECEIVED_LIGHTBALL                 0x54  // Received light ball after showing 2 raichus in skyloch village
#define FLAG_BUFFET_COMPLETE                    0x55

#define FLAG_TRADED_SMEARGLE                    0x56  // HAS BEEN SET IN NEW GAME, CLEAR BEFORE USING!
#define FLAG_MET_RIVAL_MOM                      0x57
#define FLAG_BIRCH_AIDE_MET                     0x58
#define FLAG_DECLINED_BIKE                      0x59
#define FLAG_RECEIVED_BIKE                      0x5A
#define FLAG_WATTSON_REMATCH_AVAILABLE          0x5B
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS       0x5C
#define FLAG_GOOD_LUCK_SAFARI_ZONE              0x5D // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL              0x5E
#define FLAG_RECEIVED_POKEBLOCK_CASE            0x5F
#define FLAG_RECEIVED_SECRET_POWER              0x60
#define FLAG_POKECENTER_ITEM               0x61
#define FLAG_TV_EXPLAINED                       0x62
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE        0x63
#define FLAG_MOSSDEEP_GYM_SWITCH_1              0x64 // Leftover from the RS version of Mossdeep Gym, functionally unused
#define FLAG_MOSSDEEP_GYM_SWITCH_2              0x65 //
#define FLAG_MOSSDEEP_GYM_SWITCH_3              0x66 //
#define FLAG_MOSSDEEP_GYM_SWITCH_4              0x67 //
#define FLAG_OBTAINED_TROPICALSTONE             0x68  // Tropical stone from kaolisle hotel

#define FLAG_OBTAINED_GENGARITE     0x69   
#define FLAG_RECEIVED_HM_STRENGTH            0x6A
#define FLAG_RECEIVED_HM_ROCK_SMASH          0x6B
#define FLAG_WHITEOUT_TO_LAVARIDGE           0x6C // Set after defeating Flannery, so the player cant white out from poison before receiving Go Goggles
#define FLAG_RECEIVED_HM_FLASH               0x6D
#define FLAG_RECEIVED_HM_FLY                 0x6E
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  0x6F
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  0x70
#define FLAG_OBTAINED_ECHOEDVOICE            0x71 // obtained hm for echoed voice on kaolisle hotel
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      0x72 // Used in order to activate a phone call from Scott, inviting the player to the SS Tidal.
#define FLAG_RECEIVED_METEORITE              0x73
#define FLAG_R14_ITEM3                       0x74
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER     0x75 // Set when Team Magma is defeated at Mossdeep's Space Center.
#define FLAG_MET_HIDDEN_POWER_GIVER          0x76

#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x77

#define FLAG_LANDMARK_MIRAGE_TOWER           0x78
#define FLAG_RECEIVED_TM_BRICK_BREAK         0x79
#define FLAG_RECEIVED_HM_SURF                0x7A
#define FLAG_RECEIVED_HM_DIVE                0x7B
#define FLAG_REGISTER_RIVAL_POKENAV          0x7C
#define FLAG_DEFEATED_RIVAL_ROUTE_104        0x7D
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x7E
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     0x7F
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       0x80 // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x81
#define FLAG_DEFEATED_RIVAL_ROUTE103         0x82
#define FLAG_MUD_REWARD_WAITING           0x83 
#define FLAG_RECEIVED_POTION_OLDALE          0x84
#define FLAG_RECEIVED_AMULET_COIN            0x85
#define FLAG_PENDING_DAYCARE_EGG             0x86
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  0x87
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x88 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_RECEIVED_HM_CUT                 0x89
#define FLAG_SCOTT_CALL_FORTREE_GYM          0x8A // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x8B
#define FLAG_RECEIVED_6_SODA_POP             0x8C
#define FLAG_DEFEATED_SEASHORE_HOUSE         0x8D
#define FLAG_DEVON_GOODS_STOLEN              0x8E
#define FLAG_RECOVERED_DEVON_GOODS           0x8F
#define FLAG_RETURNED_DEVON_GOODS            0x90
#define FLAG_CAUGHT_LUGIA                    0x91
#define FLAG_CAUGHT_HO_OH                    0x92
#define FLAG_MR_BRINEY_SAILING_INTRO         0x93
#define FLAG_SANDSTONE_BALLOON       0x94
#define FLAG_DELIVERED_DEVON_GOODS           0x95
#define FLAG_HIDEJASMINE_HOTEL           0x96 // Shows Jasmine at hotel after gym badge 3
#define FLAG_RECEIVED_CASTFORM               0x97
#define FLAG_RECEIVED_SUPER_ROD              0x98
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED    0x99
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED  0x9A
#define FLAG_FORTREE_NPC_TRADE_COMPLETED     0x9B
#define FLAG_BATTLE_FRONTIER_TRADE_DONE      0x9C
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE      0x9D
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE   0x9E
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN 0x9F
#define FLAG_COOL_PAINTING_MADE              0xA0
#define FLAG_BEAUTY_PAINTING_MADE            0xA1
#define FLAG_CUTE_PAINTING_MADE              0xA2
#define FLAG_SMART_PAINTING_MADE             0xA3
#define FLAG_TOUGH_PAINTING_MADE             0xA4
#define FLAG_RECEIVED_TM_ROCK_TOMB           0xA5
#define FLAG_RECEIVED_TM_BULK_UP             0xA6
#define FLAG_RECEIVED_TM_SHOCK_WAVE          0xA7
#define FLAG_RECEIVED_TM_OVERHEAT            0xA8
#define FLAG_RECEIVED_TM_FACADE              0xA9
#define FLAG_RECEIVED_TM_AERIAL_ACE          0xAA
#define FLAG_RECEIVED_TM_CALM_MIND           0xAB
#define FLAG_RECEIVED_TM_WATER_PULSE         0xAC
#define FLAG_HIDE_SECRET_BASE_TRAINER        0xAD
#define FLAG_RUINS_4F_ITEM1                  0xAE
#define FLAG_RUINS_4F_ITEM2                  0xAF
#define FLAG_RUINS_4F_ITEM3                  0xB0
#define FLAG_RUINS_4F_ITEM4                  0xB1
#define FLAG_RUINS_4F_ITEM5                  0xB2
#define FLAG_RUINS_4F_ITEM6                  0xB3
#define FLAG_OBTAINED_STARTER_STONE                     0xB4       
#define FLAG_COLLISION_OFF                     0xB5
#define FLAG_RECEIVED_CAPSULE                     0xB6       
#define FLAG_DAD_INTRO                     0xB7
#define FLAG_STEELSPHERE_CLUE                     0xB8
#define FLAG_CORALGROVE_CUTSCENE                     0xB9
#define FLAG_OBTAINED_PIDGEOTITE                     0xBA
#define FLAG_R14_ITEM4                     0xBB   
#define FLAG_RECEIVED_POKENAV                0xBC
#define FLAG_DELIVERED_STEVEN_LETTER         0xBD
#define FLAG_DEFEATED_WALLY_MAUVILLE         0xBE
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F  0xBF
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP     0xC0
#define FLAG_WALLY_SPEECH                    0xC1
#define FLAG_OBTAINED_ROSTEBERRIES   0xC2 // 
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2   0xC3 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3   0xC4 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4   0xC5 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5   0xC6 //
#define FLAG_RUSTURF_TUNNEL_OPENED           0xC7
#define FLAG_RECEIVED_RED_SCARF              0xC8
#define FLAG_RECEIVED_BLUE_SCARF             0xC9
#define FLAG_RECEIVED_PINK_SCARF             0xCA
#define FLAG_RECEIVED_GREEN_SCARF            0xCB
#define FLAG_RECEIVED_YELLOW_SCARF           0xCC
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER    0xCD
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS    0xCE
#define FLAG_MET_ARCHIE_METEOR_FALLS         0xCF
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON   0xD0
#define FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON 0xD1
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0xD2 // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO         0xD3
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0xD4
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO  0xD5
#define FLAG_ENABLE_WALLY_MATCH_CALL         0xD6
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0xD7
#define FLAG_ENABLE_MOM_MATCH_CALL           0xD8
#define FLAG_MET_DIVING_TREASURE_HUNTER      0xD9
#define FLAG_MET_WAILMER_TRAINER             0xDA
#define FLAG_EVIL_LEADER_PLEASE_STOP         0xDB

#define FLAG_NEVER_SET_0x0DC                 0xDC // This flag is read, but never written to

#define FLAG_RECEIVED_GO_GOGGLES             0xDD
#define FLAG_WINGULL_SENT_ON_ERRAND          0xDE
#define FLAG_RECEIVED_MENTAL_HERB            0xDF
#define FLAG_WINGULL_DELIVERED_MAIL          0xE0
#define FLAG_RECEIVED_20_COINS               0xE1
#define FLAG_RECEIVED_STARTER_DOLL           0xE2
#define FLAG_RECEIVED_GOOD_ROD               0xE3
#define FLAG_REGI_DOORS_OPENED               0xE4
#define FLAG_RECEIVED_TM_RETURN              0xE5
#define FLAG_RECEIVED_TM_SLUDGE_BOMB         0xE6
#define FLAG_RECEIVED_TM_ROAR                0xE7
#define FLAG_RECEIVED_TM_GIGA_DRAIN          0xE8

#define FLAG_TALKED_TO_JASMINE_AT_HOTEL                    0xE9 // changes dialogue after gym if set

#define FLAG_RECEIVED_TM_REST                0xEA
#define FLAG_RECEIVED_TM_ATTRACT             0xEB
#define FLAG_RECEIVED_GLASS_ORNAMENT         0xEC
#define FLAG_PURCHASED_OUTFIT          0xED
#define FLAG_SANDSTONE_DUSKBALLS            0xEE
#define FLAG_SANDSTONE_ULTRABALL                0xEF
#define FLAG_USED_ROOM_1_KEY                 0xF0
#define FLAG_USED_ROOM_2_KEY                 0xF1
#define FLAG_USED_ROOM_4_KEY                 0xF2
#define FLAG_USED_ROOM_6_KEY                 0xF3
#define FLAG_MET_PROF_COZMO                  0xF4
#define FLAG_RECEIVED_WAILMER_DOLL           0xF5
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 0xF6
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0xF7
#define FLAG_RECEIVED_SPELON_BERRY           0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY           0xF9
#define FLAG_RECEIVED_WATMEL_BERRY           0xFA
#define FLAG_RECEIVED_DURIN_BERRY            0xFB
#define FLAG_RECEIVED_BELUE_BERRY            0xFC
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0xFD
#define FLAG_RECEIVED_CHARCOAL               0xFE
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0xFF
#define FLAG_RECEIVED_REPEAT_BALL            0x100
#define FLAG_RECEIVED_OLD_ROD                0x101
#define FLAG_RECEIVED_COIN_CASE              0x102
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x103
#define FLAG_RECEIVED_TM_SNATCH              0x104
#define FLAG_RECEIVED_TM_DIG                 0x105
#define FLAG_RECEIVED_TM_BULLET_SEED         0x106
#define FLAG_ENTERED_ELITE_FOUR              0x107
#define FLAG_RECEIVED_TM_HIDDEN_POWER        0x108
#define FLAG_RECEIVED_TM_TORMENT             0x109
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x10A
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     0x10B
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x10C
#define FLAG_RECEIVED_TM_THIEF               0x10D
#define FLAG_CONTEST_SKETCH_CREATED          0x10E  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   0x10F
#define FLAG_RECEIVED_EXP_SHARE              0x110
#define FLAG_POKERUS_EXPLAINED               0x111
#define FLAG_RECEIVED_RUNNING_SHOES          0x112
#define FLAG_RECEIVED_QUICK_CLAW             0x113
#define FLAG_RECEIVED_KINGS_ROCK             0x114
#define FLAG_RECEIVED_MACHO_BRACE            0x115
#define FLAG_RECEIVED_SOOTHE_BELL            0x116
#define FLAG_RECEIVED_WHITE_HERB             0x117
#define FLAG_RECEIVED_SOFT_SAND              0x118
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x119
#define FLAG_RECEIVED_CLEANSE_TAG            0x11A
#define FLAG_RECEIVED_FOCUS_BAND             0x11B
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  0x11C
#define FLAG_RECEIVED_DEVON_SCOPE            0x11D
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  0x11E
#define FLAG_MET_DEVON_EMPLOYEE              0x11F
#define FLAG_MET_RIVAL_RUSTBORO              0x120
#define FLAG_RECEIVED_SILK_SCARF             0x121
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  0x122
#define FLAG_RECEIVED_SS_TICKET              0x123
#define FLAG_MET_RIVAL_LILYCOVE              0x124
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x125
#define FLAG_EXCHANGED_SCANNER               0x126
#define FLAG_KECLEON_FLED_FORTREE            0x127
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   0x128
#define FLAG_RECEIVED_MIRACLE_SEED           0x129
#define FLAG_RECEIVED_BELDUM                 0x12A
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x12C
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         0x12D
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    0x12E
#define FLAG_HAS_MATCH_CALL                  0x12F
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x130
#define FLAG_REGISTERED_STEVEN_POKENAV       0x131
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x132
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN 0x133 // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           0x134
#define FLAG_MET_MAXIE_SOOTOPOLIS            0x135
#define FLAG_MET_SCOTT_RUSTBORO              0x136
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x137 // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM_WATERFALL           0x138
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x139
#define FLAG_RECEIVED_AURORA_TICKET          0x13A
#define FLAG_RECEIVED_MYSTIC_TICKET          0x13B
#define FLAG_RECEIVED_OLD_SEA_MAP            0x13C
#define FLAG_KAOLISLE_ITEM1            0x13D // These Wonder Card flags are referenced but never set
#define FLAG_KAOLISLE_ITEM2            0x13E
#define FLAG_KAOLISLE_ITEM3            0x13F
#define FLAG_KAOLISLE_ITEM4            0x140
#define FLAG_KAOLISLE_ITEM5            0x141
#define FLAG_KAOLISLE_ITEM6            0x142
#define FLAG_KAOLISLE_ITEM7            0x143
#define FLAG_OBTAINED_AMPHAROSITE            0x144
#define FLAG_R12_XSPEED            0x145
#define FLAG_MUD_INTRO           0x146
#define FLAG_FISHINGVILLAGE_GYARADOS_REWARD           0x147
#define FLAG_RECEIVED_GYARADOSITE           0x148 
#define FLAG_ROUTE23_ITEM1           0x149
#define FLAG_ROUTE23_ITEM2           0x14A
#define FLAG_OBTAINED_AERODACTYLITE           0x14B
#define FLAG_ROUTE23_ITEM3           0x14C
#define FLAG_WONDER_CARD_UNUSED_17           0x14D
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_WONDER_CARD_UNUSED_17 - FLAG_RECEIVED_AURORA_TICKET)

#define FLAG_MIRAGE_TOWER_VISIBLE            0x14E
#define FLAG_CHOSE_ROOT_FOSSIL               0x14F
#define FLAG_CHOSE_CLAW_FOSSIL               0x150
#define FLAG_RECEIVED_POWDER_JAR             0x151

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x152

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x153
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x154
#define FLAG_ENTERED_CONTEST                 0x155
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x156
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x157
#define FLAG_ENABLE_MR_STONE_POKENAV         0x158
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x159
#define FLAG_MET_MOVE_REMINDER  0x15A
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x15B

// Trainer Rematch Flags
#define FLAG_MATCH_CALL_REGISTERED           0x15C
#define FLAG_REMATCH_ROSE                    0x15D
#define FLAG_REMATCH_ANDRES                  0x15E
#define FLAG_REMATCH_DUSTY                   0x15F
#define FLAG_REMATCH_LOLA                    0x160
#define FLAG_REMATCH_RICKY                   0x161
#define FLAG_REMATCH_LILA_AND_ROY            0x162
#define FLAG_REMATCH_CRISTIN                 0x163
#define FLAG_REMATCH_BROOKE                  0x164
#define FLAG_REMATCH_WILTON                  0x165
#define FLAG_REMATCH_VALERIE                 0x166
#define FLAG_REMATCH_CINDY                   0x167
#define FLAG_REMATCH_THALIA                  0x168
#define FLAG_REMATCH_JESSICA                 0x169
#define FLAG_REMATCH_WINSTON                 0x16A
#define FLAG_REMATCH_STEVE                   0x16B
#define FLAG_REMATCH_TONY                    0x16C
#define FLAG_REMATCH_NOB                     0x16D
#define FLAG_REMATCH_KOJI                    0x16E
#define FLAG_REMATCH_FERNANDO                0x16F
#define FLAG_REMATCH_DALTON                  0x170
#define FLAG_REMATCH_BERNIE                  0x171
#define FLAG_REMATCH_ETHAN                   0x172
#define FLAG_REMATCH_JOHN_AND_JAY            0x173
#define FLAG_REMATCH_JEFFREY                 0x174
#define FLAG_REMATCH_CAMERON                 0x175
#define FLAG_REMATCH_JACKI                   0x176
#define FLAG_REMATCH_WALTER                  0x177
#define FLAG_REMATCH_KAREN                   0x178
#define FLAG_REMATCH_JERRY                   0x179
#define FLAG_REMATCH_ANNA_AND_MEG            0x17A
#define FLAG_REMATCH_ISABEL                  0x17B
#define FLAG_REMATCH_MIGUEL                  0x17C
#define FLAG_REMATCH_TIMOTHY                 0x17D
#define FLAG_REMATCH_SHELBY                  0x17E
#define FLAG_REMATCH_CALVIN                  0x17F
#define FLAG_REMATCH_ELLIOT                  0x180
#define FLAG_REMATCH_ISAIAH                  0x181
#define FLAG_REMATCH_MARIA                   0x182
#define FLAG_REMATCH_ABIGAIL                 0x183
#define FLAG_REMATCH_DYLAN                   0x184
#define FLAG_REMATCH_KATELYN                 0x185
#define FLAG_REMATCH_BENJAMIN                0x186
#define FLAG_REMATCH_PABLO                   0x187
#define FLAG_REMATCH_NICOLAS                 0x188
#define FLAG_REMATCH_ROBERT                  0x189
#define FLAG_REMATCH_LAO                     0x18A
#define FLAG_REMATCH_CYNDY                   0x18B
#define FLAG_REMATCH_MADELINE                0x18C
#define FLAG_REMATCH_JENNY                   0x18D
#define FLAG_REMATCH_DIANA                   0x18E
#define FLAG_REMATCH_AMY_AND_LIV             0x18F
#define FLAG_REMATCH_ERNEST                  0x190
#define FLAG_REMATCH_CORY                    0x191
#define FLAG_REMATCH_EDWIN                   0x192
#define FLAG_REMATCH_LYDIA                   0x193
#define FLAG_REMATCH_ISAAC                   0x194
#define FLAG_REMATCH_GABRIELLE               0x195
#define FLAG_REMATCH_CATHERINE               0x196
#define FLAG_REMATCH_JACKSON                 0x197
#define FLAG_REMATCH_HALEY                   0x198
#define FLAG_REMATCH_JAMES                   0x199
#define FLAG_REMATCH_TRENT                   0x19A
#define FLAG_REMATCH_SAWYER                  0x19B
#define FLAG_REMATCH_KIRA_AND_DAN            0x19C
#define FLAG_REMATCH_WALLY                   0x19D
#define FLAG_REMATCH_ROXANNE                 0x19E
#define FLAG_REMATCH_BRAWLY                  0x19F
#define FLAG_REMATCH_WATTSON                 0x1A0
#define FLAG_REMATCH_FLANNERY                0x1A1
#define FLAG_REMATCH_NORMAN                  0x1A2
#define FLAG_REMATCH_WINONA                  0x1A3
#define FLAG_REMATCH_TATE_AND_LIZA           0x1A4
// Note: FLAG_REMATCH_JUAN is handled by FLAG_ENABLE_JUAN_MATCH_CALL instead.
#define FLAG_REMATCH_SIDNEY                  0x1A5
#define FLAG_REMATCH_PHOEBE                  0x1A6
#define FLAG_REMATCH_GLACIA                  0x1A7
#define FLAG_REMATCH_DRAKE                   0x1A8
#define FLAG_REMATCH_WALLACE                 0x1A9

#define FLAG_OLDMAN_PEARLSTRING                    0x1AA // 
#define FLAG_REVEAL_PEARLSTRING                    0x1AB // 

#define FLAG_DEFEATED_DEOXYS                 0x1AC
#define FLAG_BATTLED_DEOXYS                  0x1AD
#define FLAG_SHOWN_EON_TICKET                0x1AE
#define FLAG_SHOWN_AURORA_TICKET             0x1AF
#define FLAG_SHOWN_OLD_SEA_MAP               0x1B0
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1B1
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1B2
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1B3
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1B4
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1B5
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1B6
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1B7
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1B8
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1B9
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x1BA
#define FLAG_DEFEATED_REGIROCK               0x1BB
#define FLAG_DEFEATED_REGICE                 0x1BC
#define FLAG_DEFEATED_REGISTEEL              0x1BD
#define FLAG_DEFEATED_KYOGRE                 0x1BE
#define FLAG_DEFEATED_GROUDON                0x1BF
#define FLAG_DEFEATED_RAYQUAZA               0x1C0
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x1C1
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x1C2
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x1C3
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x1C4
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x1C5
#define FLAG_DEFEATED_SUDOWOODO              0x1C6
#define FLAG_DEFEATED_MEW                    0x1C7
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x1C8
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x1C9
#define FLAG_CAUGHT_MEW                      0x1CA
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE 0x1CB
#define FLAG_MET_SCOTT_IN_VERDANTURF         0x1CC
#define FLAG_MET_SCOTT_IN_FALLARBOR          0x1CD
#define FLAG_MET_SCOTT_IN_LILYCOVE           0x1CE
#define FLAG_MET_SCOTT_IN_EVERGRANDE         0x1CF
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x1D0
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x1D1
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x1D2
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x1D3
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x1D4
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x1D5
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x1D6
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x1D7
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x1D8
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x1D9

#define FLAG_OBTAINED_BEACHBALL                    0x1DA // 

#define FLAG_SHOWN_MYSTIC_TICKET             0x1DB
#define FLAG_DEFEATED_HO_OH                  0x1DC
#define FLAG_DEFEATED_LUGIA                  0x1DD

#define FLAG_QUEST_FOR_GOOD_ROD                    0x1DE // 
#define FLAG_KAOLISLE_BROTHER_INTRO                    0x1DF // 
#define FLAG_VISITED_KAOLISLE                    0x1E0 // 
#define FLAG_AT_ITEM1                    0x1E1
#define FLAG_AT_ITEM2                    0x1E2
#define FLAG_AT_ITEM3                    0x1E3

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x1E4
#define FLAG_MYSTERY_GIFT_1                  0x1E5
#define FLAG_MYSTERY_GIFT_2                  0x1E6
#define FLAG_MYSTERY_GIFT_3                  0x1E7
#define FLAG_MYSTERY_GIFT_4                  0x1E8
#define FLAG_MYSTERY_GIFT_5                  0x1E9
#define FLAG_MYSTERY_GIFT_6                  0x1EA
#define FLAG_MYSTERY_GIFT_7                  0x1EB
#define FLAG_MYSTERY_GIFT_8                  0x1EC
#define FLAG_MYSTERY_GIFT_9                  0x1ED
#define FLAG_MYSTERY_GIFT_10                 0x1EE
#define FLAG_MYSTERY_GIFT_11                 0x1EF
#define FLAG_MYSTERY_GIFT_12                 0x1F0
#define FLAG_MYSTERY_GIFT_13                 0x1F1
#define FLAG_MYSTERY_GIFT_14                 0x1F2
#define FLAG_MYSTERY_GIFT_15                 0x1F3

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                                                         0x1F4
#define FLAG_ACEROLA_TALKED_TO                    (FLAG_HIDDEN_ITEMS_START + 0x00) 
#define FLAG_HIDDEN_ITEM_ROUTE1_SUPERPOTION                  (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_ROUTE2_HARDSTONE                    (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_ROUTE2_PEARL1                       (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_ROUTE2_PEARL2                       (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL                     (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL                   (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_WW_DAMP_ROCK                        (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_WW_RARE_CANDY                       (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_WW_ETHER                            (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY                (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_MEADOW_TINY_MUSHROOM            (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL           (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_ROUTE3_REVIVE        (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_ROUTE3_ETHER          (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL           (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_RANCH             (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_UNDERGROUNDRUINS_ITEM1                (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_UNDERGROUNDRUINS_ITEM2         (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_UNDERGROUNDRUINS_ITEM3                 (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_UNDERGROUNDRUINS_ITEM4            (FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_UNDERGROUNDRUINS_ITEM5           (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_UNDERGROUNDRUINS_ITEM6                (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_UNDERGROUNDRUINS_ITEM7          (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_UNDERGROUNDRUINS_ITEM8            (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_UNDERGROUNDRUINS_ITEM9              (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_UNDERGROUNDRUINS_ITEM10                (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_UNDERGROUNDRUINS_ITEM11           (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_UNDERGROUNDRUINS_ITEM12               (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_UNDERGROUNDRUINS_ITEM13         (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_UNDERGROUNDRUINS_ITEM14            (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_UNDERGROUNDRUINS_ITEM15             (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_UNDERGROUNDRUINS_ITEM16             (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_OLD_WORLD_FLAG             (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_ROUTE11_HONEY             (FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_ROUTE11_GREATBALL       (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_ROUTE11_RARECANDY              (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_R12_ITEM1                    (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_R12_ITEM2         (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_R12_ITEM3                      (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ROUTE_114_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_PP_UP                 (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_ROCKLIFFE_ITEM2              (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_ROCKLIFFE_ITEM3              (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_ROUTE_106_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_1        (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_2        (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ROUTE_110_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_ROUTE_111_PROTEIN                   (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POTION              (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_1     (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_2     (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POKE_BALL           (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_ROUTE_109_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ROUTE_110_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                      (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2              (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                      (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1              (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                     (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL             (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL              (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL               (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER          (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_ZINC                 (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL          (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_ELIXIR             (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_MAX_REPEL          (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE                  (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                 (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES             (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM            (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC               (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN            (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON               (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY   (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC         (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP        (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH           (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                 (FLAG_HIDDEN_ITEMS_START + 0x6F)

#define FLAG_PEARLWOOD_MOM_TALKED_TO             0x264 // Intro, mom comes to your room
#define FLAG_CORAL_FLAG_1                   0x265 // UNLOCKS POKECENTER TRAINING
#define FLAG_SCHOOL_DONE                    0x266 // TRAINER SCHOOL DONE
#define FLAG_0x267_CG_HIDEGHOST      0x267 // Used to hide the ghost in Coralgrove City
#define FLAG_OBTAINED_A_FOSSIL  0x268 // 
#define FLAG_RECEIVED_TM_U_TURN             0x269 // TM for first gym
#define FLAG_NECTARQUESTDONE                0x26A // set this flag if oricorio shown to nectar maniac
#define FLAG_SAFARI_NW_ITEM1  0x26B // 
#define FLAG_SAFARI_NW_ITEM2  0x26C // 
#define FLAG_SAFARI_NW_ITEM3  0x26D // 
#define FLAG_SAFARI_NW_ITEM4  0x26E // 
#define FLAG_JASMINE_HELPED                 0x26F // START OF POKE RANCH EVENT FLAGS
#define FLAG_JASMINE_TALKED_TO_FIRST        0x270 // 
#define FLAG_VOLKNER_TALKED_TO_FIRST        0x271 // 
#define FLAG_VOLKNER_INFORMED               0x272 // 
#define FLAG_HIDE_VOLKNER_2                 0x273 // 
#define FLAG_RANCH_EVENT_NPC                0x274 // 
#define FLAG_MAREEP_NOT_RETURNED            0x275 // 
#define FLAG_HIDE_VOLKNER_1                 0x276 // 
#define FLAG_HIDE_RANCH_OWNER               0x277 //  
#define FLAG_RANCH_HELPED                   0x278 //  
#define FLAG_VOLKNER_HELPED                 0x279 //  
#define FLAG_JASMINE_MET                    0x27A //  
#define FLAG_JASMINE_QUEST_STARTED          0x27B //  
#define FLAG_VISITED_HERB_SHOP              0x27C //  
#define FLAG_VISITED_HERB_SHOP_2            0x27D //  
#define FLAG_VOLKNER_MET                    0x27E // END OF POKE RANCH EVENT FLAGS
#define FLAG_HIDE3FMAN                      0x27F // Used to hide the man in Aldeleaf House 3, 3F
#define FLAG_ANGEREDGUYINALDELEAF           0x280 // Used to stop player going back upstairs after event
#define FLAG_TOUCHPOKEBALL                  0x281 // Interacted once with the poke ball in Aldeleaf House 3, 3F
#define FLAG_ALDELEAF_MUSHROOM              0x282 // Hidden item in Aldeleaf
#define FLAG_ALDELEAF_MUSHROOM2             0x283 // Hidden item in Aldeleaf
#define FLAG_ALDELEAF_LOST_KEY              0x284 // Hidden key item in Aldeleaf
#define FLAG_KEY_RETURNED                   0x285 // Key returned in Aldeleaf, despawns npc
#define FLAG_WPV_FEATHER1                   0x286 // Start of Windplume Valley items
#define FLAG_WPV_FEATHER2                   0x287 //  
#define FLAG_WPV_FEATHER3                   0x288 //  
#define FLAG_WPV_FEATHER4                   0x289 //  
#define FLAG_WPV_FEATHER5                   0x28A //  
#define FLAG_WPV_FEATHER6                   0x28B //  
#define FLAG_WPV_HYPER_POTION               0x28C //  
#define FLAG_WPV_ELIXIR                     0x28D //  
#define FLAG_WPV_IRON_BALL                  0x28E // End of Windplume Valley items
#define FLAG_LANDMARK_POKE_RANCH  0x28F // 
#define FLAG_LANDMARK_WINDPLUME_VALLEY  0x290 // 
#define FLAG_VISITED_SHORESLATE  0x291 // 
#define FLAG_SHORESLATE_MART_SECRET  0x292 // 
#define FLAG_SHOWN_GRASS  0x293 // 
#define FLAG_SHOWN_FIRE  0x294 // 
#define FLAG_SHOWN_WATER  0x295 // 
#define FLAG_RECEIVED_CYNDAQUIL  0x296 // 
#define FLAG_RECEIVED_TOTODILE  0x297 // 
#define FLAG_RECEIVED_CHIKORITA  0x298 // 
#define FLAG_VOLCARONA_FOUGHT  0x299 // 
#define FLAG_OBTAINED_HELIX_FOSSIL  0x29A // 
#define FLAG_OBTAINED_DOME_FOSSIL  0x29B // 
#define FLAG_OBTAINED_OLDAMBER_FOSSIL  0x29C // 
#define FLAG_OBTAINED_ROOT_FOSSIL  0x29D // 
#define FLAG_OBTAINED_CLAW_FOSSIL  0x29E // 
#define FLAG_OBTAINED_SKULL_FOSSIL  0x29F // 
#define FLAG_OBTAINED_ARMOR_FOSSIL  0x2A0 // 
#define FLAG_OBTAINED_COVER_FOSSIL  0x2A1 // 
#define FLAG_OBTAINED_PLUME_FOSSIL  0x2A2 // 
#define FLAG_OBTAINED_JAW_FOSSIL  0x2A3 // 
#define FLAG_OBTAINED_SAIL_FOSSIL  0x2A4 // 
#define FLAG_DESERT_ITEM1  0x2A5 // 
#define FLAG_DESERT_ITEM2  0x2A6 // 
#define FLAG_DESERT_ITEM3  0x2A7 // 
#define FLAG_DESERT_ITEM4  0x2A8 // 
#define FLAG_DESERT_ITEM5  0x2A9 // 
#define FLAG_DESERT_ITEM6  0x2AA // 
#define FLAG_DESERT_ITEM7  0x2AB // 
#define FLAG_DESERT_ITEM8  0x2AC // 
#define FLAG_DESERT_ITEM9  0x2AD // 
#define FLAG_DESERT_ITEM10  0x2AE // 
#define FLAG_ROUTE7_ITEM1  0x2AF // 
#define FLAG_ROUTE7_ITEM2  0x2B0 // 
#define FLAG_ROUTE7_ITEM3  0x2B1 // 
#define FLAG_ROUTE7_ITEM4  0x2B2 // 
#define FLAG_ROUTE7_ITEM5  0x2B3 // 
#define FLAG_RECOMMEND_LIBRARY  0x2B4 // 
#define FLAG_ARCHEOLOGIST_TALKED_TO  0x2B5 // 
#define FLAG_MARIGORGE_ITEM1  0x2B6 // 
#define FLAG_MARIGORGE_ITEM2  0x2B7 // 
#define FLAG_MARIGORGE_ITEM3  0x2B8 // 
#define FLAG_ROCKLIFFE_ITEM1  0x2B9 // 
#define FLAG_OBTAINED_MEGA_RING  0x2BA // 
#define FLAG_OBTAINED_BEEDRILLITE  0x2BB // 

// Event Flags
#define FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG                      0x2BC
#define FLAG_HIDE_APPRENTICE                                        0x2BD
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x2BE
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               0x2BF
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x2C0
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x2C1
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x2C2
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               0x2C3
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x2C4
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x2C5
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x2C6
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x2C7
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x2C8
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x2C9
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x2CA
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x2CB
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               0x2CC
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS            0x2CD
#define FLAG_HIDE_MEW                                               0x2CE
#define FLAG_HIDE_ROUTE_104_RIVAL                                   0x2CF
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                  0x2D0
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                  0x2D1
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM          0x2D2
#define FLAG_HIDE_ROUTE_103_RIVAL                                   0x2D3
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                    0x2D4
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                        0x2D5
#define FLAG_HIDE_PETALBURG_CITY_WALLY                              0x2D6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY   0x2D7
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                         0x2D8

#define FLAG_ROUTE23_ITEM4                                           0x2D9 // 

#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     0x2DA
#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                          0x2DB
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                    0x2DC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP              0x2DD
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                 0x2DE
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING      0x2DF
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING          0x2E0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE             0x2E1
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               0x2E2
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           0x2E3
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                            0x2E4
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                               0x2E5
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                          0x2E6
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                       0x2E7
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                          0x2E8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN            0x2E9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                    0x2EA
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION                  0x2EB
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                0x2EC
#define FLAG_HIDE_SANDSTONE_CITY_RIVAL                              0x2ED
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                               0x2EE
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                           0x2EF
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                       0x2F0
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN              0x2F1
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1          0x2F2
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2          0x2F3
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA          0x2F4
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM               0x2F5
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                0x2F6
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    0x2F7
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      0x2F8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              0x2F9
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                  0x2FA
#define FLAG_HIDE_DEOXYS                                            0x2FB
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x2FC
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                               0x2FD
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                             0x2FE
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                  0x2FF
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        0x300
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                      0x301
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                          0x302
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                         0x303
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                              0x304
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                           0x305
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         0x306
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           0x307
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          0x308
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          0x309
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          0x30A
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          0x30B
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          0x30C
#define FLAG_HIDE_PETALBURG_GYM_GREETER                             0x30D
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                0x30E
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                0x30F
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          0x310
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              0x311
#define FLAG_HIDE_ROUTE_119_SCOTT                                   0x312
#define FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                              0x313
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                               0x314
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  0x315
#define FLAG_HIDE_FANCLUB_BOY                                       0x316
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                0x317
#define FLAG_HIDE_FANCLUB_LADY                                      0x318
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               0x319
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             0x31A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             0x31B
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x31C
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          0x31D
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          0x31E
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          0x31F
#define FLAG_HIDE_LUGIA                                             0x320
#define FLAG_HIDE_HO_OH                                             0x321
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    0x322
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   0x323
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               0x324
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        0x325
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                0x326
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   0x327
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     0x328
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         0x329
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           0x32A
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     0x32B
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      0x32C
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     0x32D
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                               0x32E
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     0x32F
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           0x330
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       0x331
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           0x332
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              0x333
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        0x334
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         0x335
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         0x336
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                          0x337
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                          0x338
#define FLAG_OBTAINED_CHOICE_SCARF                         0x339
#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                            0x33A
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                             0x33B
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                     0x33C
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                      0x33D
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                         0x33E
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS               0x33F
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                0x340
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                               0x341
#define FLAG_HIDE_ROUTE_128_STEVEN                                  0x342
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                       0x343
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              0x344
#define FLAG_HIDE_ROUTE_110_BIRCH                                   0x345
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA     0x346
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                             0x347
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                      0x348
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN               0x349
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         0x34A
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                      0x34B
#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                           0x34C
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                  0x34D
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                      0x34E
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                           0x34F
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW            0x350
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL          0x351
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                   0x352
#define FLAG_HIDE_ROUTE_119_RIVAL                                   0x353
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                         0x354
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                          0x355
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                         0x356
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                0x357
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                              0x358
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                              0x359
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       0x35A
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                     0x35B
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                    0x35C
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                           0x35D
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA          0x35E
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN              0x35F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x360
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x361
#define FLAG_HIDE_PETALBURG_GYM_WALLY                               0x362
#define FLAG_DAD_GIFT                                          0x363 // Set, however has no purpose.
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                           0x364
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY          0x365
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                            0x366
#define FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE                  0x367
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          0x368
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    0x369
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           0x36A
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          0x36B
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           0x36C
#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                               0x36D
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                         0x36E
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                             0x36F
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                              0x370
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               0x371
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                          0x372
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS         0x373
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1     0x374
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2     0x375
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE           0x376
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN    0x377
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x378
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  0x379
#define FLAG_HIDE_ROUTE_119_TEAM_AQUA                               0x37A
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                               0x37B
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                      0x37C
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                      0x37D
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                        0x37E
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         0x37F
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          0x380
#define FLAG_HIDE_ROUTE_101_BIRCH                                   0x381
#define FLAG_HIDE_ROUTE_103_BIRCH                                   0x382
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               0x383
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                               0x384
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x385
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x386
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          0x387
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          0x388
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                     0x389
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                      0x38A
#define FLAG_HIDE_FALLARBOR_AZURILL                                 0x38B
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                   0x38C
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                      0x38D
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         0x38E
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              0x38F
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                             0x390
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                              0x391
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                        0x392
#define FLAG_UNKNOWN_0x393                                          0x393 // Set, however has no purpose.
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                             0x394
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                          0x395
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             0x396
#define FLAG_HIDE_ROUTE_110_RIVAL                                   0x397
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                              0x398
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                              0x399
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                           0x39A
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                           0x39B
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                               0x39C
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                     0x39D
#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                              0x39E
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                             0x39F
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                        0x3A0
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                              0x3A1
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                      0x3A2
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             0x3A3
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             0x3A4
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      0x3A5
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     0x3A6
#define FLAG_HIDE_REGIROCK                                          0x3A7
#define FLAG_HIDE_REGICE                                            0x3A8
#define FLAG_HIDE_REGISTEEL                                         0x3A9
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                            0x3AA
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                           0x3AB
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                      0x3AC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT               0x3AD
#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                          0x3AE
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                 0x3AF
#define FLAG_HIDE_ROUTE_128_ARCHIE                                  0x3B0
#define FLAG_HIDE_ROUTE_128_MAXIE                                   0x3B1
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                       0x3B2
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                          0x3B3
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                        0x3B4
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE              0x3B5
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                       0x3B6
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                       0x3B7
#define FLAG_RECEIVED_SHOAL_SALT_1                                  0x3B8
#define FLAG_RECEIVED_SHOAL_SALT_2                                  0x3B9
#define FLAG_RECEIVED_SHOAL_SALT_3                                  0x3BA
#define FLAG_RECEIVED_SHOAL_SALT_4                                  0x3BB
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 0x3BC
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 0x3BD
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 0x3BE
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 0x3BF
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                        0x3C0
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                       0x3C1
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      0x3C2
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                          0x3C3
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                          0x3C4
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT 0x3C5
#define FLAG_HIDE_ROUTE_118_STEVEN                                  0x3C6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                0x3C7
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL       0x3C8
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              0x3C9
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE                          0x3CA
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                               0x3CB
#define FLAG_HIDE_ROUTE_120_STEVEN                                  0x3CC
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                            0x3CD
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            0x3CE
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            0x3CF
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            0x3D0
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                      0x3D1
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                      0x3D2
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                 0x3D3
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE      0x3D4
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW                   0x3D5
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               0x3D6
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                              0x3D7
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                0x3D8
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               0x3D9
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               0x3DA
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               0x3DB
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               0x3DC
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               0x3DD
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               0x3DE
#define FLAG_HIDE_ROUTE_101_BOY                                     0x3DF
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                 0x3E0
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON          0x3E1
#define FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY                       0x3E2
#define FLAG_HIDE_PETALBURG_CITY_SCOTT                              0x3E3
#define FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA                          0x3E4
#define FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE                            0x3E5
#define FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON                           0x3E6
#define FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT                0x3E7

// Item Ball Flags
#define FLAG_DRISLEDGE_ITEM5                                  0x3E8
#define FLAG_ITEM_ROUTE3_GIGADRAIN                               0x3E9
#define FLAG_ITEM_ROUTE3_ANTIDOTE                                   0x3EA
#define FLAG_DRISLEDGE_ITEM2                                    0x3EB
#define FLAG_DRISLEDGE_ITEM3                                 0x3EC
#define FLAG_DRISLEDGE_ITEM4                                   0x3ED
#define FLAG_ITEM_ROUTE_110_RARE_CANDY                              0x3EE
#define FLAG_ITEM_ROUTE_110_DIRE_HIT                                0x3EF
#define FLAG_ITEM_UNDERGROUNDRUINS_TM_SANDSTORM                            0x3F0
#define FLAG_ITEM_ROUTE_111_STARDUST                                0x3F1
#define FLAG_ITEM_ROUTE_111_HP_UP                                   0x3F2
#define FLAG_ITEM_ROUTE_112_NUGGET                                  0x3F3
#define FLAG_ITEM_ROUTE_113_MAX_ETHER                               0x3F4
#define FLAG_ITEM_ROUTE_113_SUPER_REPEL                             0x3F5
#define FLAG_ITEM_SAFARI_SOUTH_RARE_CANDY                              0x3F6
#define FLAG_ITEM_ROUTE_114_PROTEIN                                 0x3F7
#define FLAG_ITEM_ROUTE_115_SUPER_POTION                            0x3F8
#define FLAG_ITEM_ROUTE_115_TM_FOCUS_PUNCH                          0x3F9
#define FLAG_ITEM_ROUTE_115_IRON                                    0x3FA
#define FLAG_ITEM_ROUTE_116_ETHER                                   0x3FB
#define FLAG_ITEM_ROUTE_116_REPEL                                   0x3FC
#define FLAG_ITEM_ROUTE_116_HP_UP                                   0x3FD
#define FLAG_ITEM_ROUTE_117_GREAT_BALL                              0x3FE
#define FLAG_ITEM_ROUTE_117_REVIVE                                  0x3FF
#define FLAG_ITEM_ROUTE_11_SUPER_REPEL                             0x400
#define FLAG_ITEM_ROUTE_11_ZINC                                    0x401
#define FLAG_ITEM_ROUTE_11_ELIXIR                                0x402
#define FLAG_ITEM_ROUTE_11_TORMENT                              0x403
#define FLAG_ITEM_ROUTE_119_RARE_CANDY                              0x404
#define FLAG_ITEM_ROUTE_11_HYPER_POTION                          0x405
#define FLAG_ITEM_ROUTE_120_NUGGET                                  0x406
#define FLAG_ITEM_ROUTE_120_FULL_HEAL                               0x407
#define FLAG_ITEM_ROUTE_123_CALCIUM                                 0x408
#define FLAG_ITEM_ROUTE_123_RARE_CANDY                              0x409 // , leftover from R/S. In Emerald this is a hidden item and uses a different flag
#define FLAG_ITEM_ROUTE_127_ZINC                                    0x40A
#define FLAG_ITEM_ROUTE_127_CARBOS                                  0x40B
#define FLAG_ITEM_ROUTE_132_RARE_CANDY                              0x40C
#define FLAG_ITEM_ROUTE_133_BIG_PEARL                               0x40D
#define FLAG_ITEM_ROUTE_133_STAR_PIECE                              0x40E
#define FLAG_ITEM_PETALBURG_CITY_MAX_REVIVE                         0x40F
#define FLAG_ITEM_PETALBURG_CITY_ETHER                              0x410
#define FLAG_ITEM_PEARLWOOD_ANTIDOTE                                0x411 // USED
#define FLAG_ITEM_ROUTE1_TM03                                       0x412 // USED
#define FLAG_ITEM_ROUTE2_X_ATTACK                                   0x413 // USED
#define FLAG_ITEM_ROUTE2_REVIVE                   0x414 // USED
#define FLAG_ITEM_WW_CARBOS                      0x415 // USED
#define FLAG_ITEM_WW_PARLYZ                    0x416 // USED
#define FLAG_CORAL_GREATBALL                          0x417 // USED
#define FLAG_HARBOR_PEARL                          0x418
#define FLAG_HARBOR_GREATBALL                         0x419
#define FLAG_ITEM_GRANITE_CAVE_1F_ESCAPE_ROPE                       0x41A
#define FLAG_ITEM_GRANITE_CAVE_B1F_POKE_BALL                        0x41B
#define FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE                            0x41C
#define FLAG_ITEM_GRANITE_CAVE_B2F_REPEL                            0x41D
#define FLAG_ITEM_GRANITE_CAVE_B2F_RARE_CANDY                       0x41E
#define FLAG_ITEM_PETALBURG_WOODS_X_ATTACK                          0x41F
#define FLAG_ITEM_PETALBURG_WOODS_GREAT_BALL                        0x420
#define FLAG_ITEM_ROUTE_104_POKE_BALL                               0x421
#define FLAG_ITEM_PETALBURG_WOODS_ETHER                             0x422
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_3R_ECAPE_ROPE                    0x423
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL                  0x424
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL                  0x425
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL                    0x426
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL                  0x427
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL                    0x428
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL                    0x429
#define FLAG_ITEM_ROUTE_124_YELLOW_SHARD                            0x42A
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL                 0x42B
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_7_TROPIC_MAIL                  0x42C
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL                    0x42D
#define FLAG_ITEM_JAGGED_PASS_BURN_HEAL                             0x42E
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MAX_ELIXIR                       0x42F
#define FLAG_ITEM_AQUA_HIDEOUT_B2F_NEST_BALL                        0x430
#define FLAG_ITEM_MT_PYRE_EXTERIOR_MAX_POTION                       0x431
#define FLAG_ITEM_MT_PYRE_EXTERIOR_TM_SKILL_SWAP                    0x432
#define FLAG_ITEM_NEW_MAUVILLE_ULTRA_BALL                           0x433
#define FLAG_ITEM_NEW_MAUVILLE_ESCAPE_ROPE                          0x434
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_6_LUXURY_BALL    0x435
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER        0x436
#define FLAG_ITEM_SCORCHED_SLAB_TM_SUNNY_DAY                        0x437
#define FLAG_ITEM_METEOR_FALLS_B1F_2R_TM_DRAGON_CLAW                0x438
#define FLAG_ITEM_SHOAL_CAVE_ENTRANCE_BIG_PEARL                     0x439
#define FLAG_ITEM_SHOAL_CAVE_INNER_ROOM_RARE_CANDY                  0x43A
#define FLAG_ITEM_SHOAL_CAVE_STAIRS_ROOM_ICE_HEAL                   0x43B
#define FLAG_ITEM_VICTORY_ROAD_1F_MAX_ELIXIR                        0x43C
#define FLAG_ITEM_VICTORY_ROAD_1F_PP_UP                             0x43D
#define FLAG_ITEM_VICTORY_ROAD_B1F_TM_PSYCHIC                       0x43E
#define FLAG_ITEM_VICTORY_ROAD_B1F_FULL_RESTORE                     0x43F
#define FLAG_ITEM_VICTORY_ROAD_B2F_FULL_HEAL                        0x440
#define FLAG_ITEM_MT_PYRE_6F_TM_SHADOW_BALL                         0x441
#define FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_TM_EARTHQUAKE              0x442
#define FLAG_ITEM_FIERY_PATH_TM_TOXIC                               0x443
#define FLAG_ITEM_ROUTE_124_RED_SHARD                               0x444
#define FLAG_ITEM_ROUTE_124_BLUE_SHARD                              0x445
#define FLAG_ITEM_SAFARI_ZONE_NORTH_WEST_TM_SOLAR_BEAM              0x446
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL               0x447
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE              0x448
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_DIVE_BALL              0x449
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_TM_ICE_BEAM              0x44A
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE                  0x44B
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_STORAGE_KEY        0x44C
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_3_WATER_STONE    0x44D
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_1_TM_RAIN_DANCE  0x44E
#define FLAG_ITEM_ROUTE_121_CARBOS                                  0x44F
#define FLAG_ITEM_ROUTE_123_ULTRA_BALL                              0x450
#define FLAG_ITEM_ROUTE_126_GREEN_SHARD                             0x451
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_2                          0x452
#define FLAG_ITEM_ROUTE_120_HYPER_POTION                            0x453
#define FLAG_ITEM_ROUTE_120_NEST_BALL                               0x454
#define FLAG_ITEM_ROUTE_123_ELIXIR                                  0x455
#define FLAG_ITEM_NEW_MAUVILLE_THUNDER_STONE                        0x456
#define FLAG_ITEM_FIERY_PATH_FIRE_STONE                             0x457
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_TM_HAIL                       0x458
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_NEVER_MELT_ICE                0x459
#define FLAG_ITEM_ROUTE_103_GUARD_SPEC                              0x45A
#define FLAG_ITEM_ROUTE_104_X_ACCURACY                              0x45B
#define FLAG_ITEM_MAUVILLE_CITY_X_SPEED                             0x45C
#define FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL                     0x45D
#define FLAG_ITEM_ROUTE_115_GREAT_BALL                              0x45E
#define FLAG_ITEM_SAFARI_ZONE_NORTH_CALCIUM                         0x45F
#define FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL                            0x460
#define FLAG_ITEM_ROUTE_118_HYPER_POTION                            0x461
#define FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL                            0x462
#define FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL                        0x463
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL                      0x464
#define FLAG_RECEIVED_SOUP                 0x465 // , leftover from the Ruby Magma hideout
#define FLAG_HOTEL_FLYINGGEM                  0x466 // , leftover from the Ruby Magma hideout
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B2F_NEST_BALL                   0x467 // , leftover from the Ruby Magma hideout
#define FLAG_BERRYFIELDS_ITEM                                           0x468 // 
#define FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL                             0x469
#define FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE                            0x46A
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE                 0x46B
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET                           0x46C
#define FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08                       0x46D // , leftover from R/S. HM08 is given to the player directly in Emerald
#define FLAG_ITEM_ROUTE_119_NUGGET                                  0x46E
#define FLAG_ITEM_ROUTE_104_POTION                                  0x46F
#define FLAG_KORRINA_LEAVESGYM                                           0x470 // 
#define FLAG_ITEM_ROUTE_103_PP_UP                                   0x471
#define FLAG_HIDE_LIBRARY_BIRCH                                           0x472 // 
#define FLAG_ITEM_ROUTE_108_STAR_PIECE                              0x473
#define FLAG_ITEM_ROUTE_109_POTION                                  0x474
#define FLAG_ITEM_ROUTE_110_ELIXIR                                  0x475
#define FLAG_ITEM_ROUTE_111_ELIXIR                                  0x476
#define FLAG_ITEM_ROUTE_113_HYPER_POTION                            0x477
#define FLAG_ITEM_ROUTE_115_HEAL_POWDER                             0x478
#define FLAG_HIDE_AMPHAROS                                          0x479
#define FLAG_ITEM_ROUTE_116_POTION                                  0x47A
#define FLAG_ITEM_ROUTE_119_ELIXIR_2                                0x47B
#define FLAG_ITEM_ROUTE_120_REVIVE                                  0x47C
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                         0x47D
#define FLAG_ITEM_ROUTE_121_ZINC                                    0x47E
#define FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY                       0x47F
#define FLAG_ITEM_ROUTE_123_PP_UP                                   0x480
#define FLAG_ITEM_ROUTE_123_REVIVAL_HERB                            0x481
#define FLAG_ITEM_ROUTE_125_BIG_PEARL                               0x482
#define FLAG_ITEM_ROUTE_127_RARE_CANDY                              0x483
#define FLAG_ITEM_ROUTE_132_PROTEIN                                 0x484
#define FLAG_ITEM_ROUTE_133_MAX_REVIVE                              0x485
#define FLAG_ITEM_ROUTE_134_CARBOS                                  0x486
#define FLAG_ITEM_ROUTE_134_STAR_PIECE                              0x487
#define FLAG_ITEM_ROUTE_114_ENERGY_POWDER                           0x488
#define FLAG_ITEM_ROUTE_115_PP_UP                                   0x489
#define FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP                            0x48A
#define FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS                            0x48B
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR                    0x48C
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE                  0x48D
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET                        0x48E
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX                        0x48F
#define FLAG_ITEM_MAGMA_HIDEOUT_4F_MAX_REVIVE                       0x490
#define FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET                     0x491
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL                  0x492

#define FLAG_ROUTE15_ITEM1                                            0x493 // 
#define FLAG_ROUTE15_ITEM2                                           0x494 // 
#define FLAG_ROUTE15_ITEM3                                            0x495 // 
#define FLAG_ROUTE15_ITEM4                                             0x496 // 
#define FLAG_ROUTE15_ITEM5                                             0x497 // 
#define FLAG_BROTHER_PEARLFIGHT                                      0x498 // Sets the flag for the brother fight in the 1st town
#define FLAG_ROUTE15_ITEM6                                          0x499 // 
#define FLAG_PEARLWOOD_POTION_SAMPLE                                 0x49A // Potion given by the old guy in the 1st town
#define FLAG_ROUTE15_ITEM7                                             0x49B // 
#define FLAG_ROUTE1_STATE                                                   0x49C // Shows/Hides route 1 NPCs
#define FLAG_ROUTE1_COOLTRAINER                                      0x49D // Cooltrainer dialogue skip on route 1
#define FLAG_ROUTE1_COOLTRAINERREWARD                                0x49E // Reward from Cooltrainer in route 1
#define FLAG_WW_COOLTRAINER                                          0x49F // Cooltrainer dialogue skip in windy woods
#define FLAG_WW_COOLTRAINERREWARD                                    0x4A0 // Reward from Cooltrainer in windy woods
#define FLAG_I_EXP_SHARE_FLAG                                        0x4A1 // Can be used to toggle global Exp Share
#define FLAG_WW_ENDEVENT                                             0x4A2 // Used to hide event stuff at Windy Woods
#define FLAG_WW_HIDEROCKET                                           0x4A3 // Hide event rocket grunt in windy woods
#define FLAG_WW_HIDEDAD                                              0x4A4 // Hide event dad in windy woods
#define FLAG_CORALGROVE_TRADE_COMPLETED                                     0x4A5 // Starter trade in Coralgrove
#define FLAG_TALKEDTOSLEEPINGGUY                                     0x4A6 // TM rest in Coralgrove Harbor
#define FLAG_RIVAL_HARBOR_ANGRY                                             0x4A7 // makes rival angry if bailed on in the elevator
#define FLAG_DFTPC1F_MANSPOKENTO                                            0x4A8 // 1st time spoken to map seller
#define FLAG_DFTPC1F_MAPBOUGHT                                              0x4A9 // set if map is bought
#define FLAG_COASTTOWN_PEARL                                                0x4AA // Azuretide hidden item
#define FLAG_COASTTOWN_REDSHARD                                             0x4AB // Azuretide hidden item
#define FLAG_COASTTOWN_HEATROCK                                             0x4AC // Azuretide hidden item
#define FLAG_COASTTOWN_TREE1                                        0x4AD // 
#define FLAG_COASTTOWN_TREE2                                        0x4AE // 
#define FLAG_COASTTOWN_TREE3                                        0x4AF // 
#define FLAG_COASTTOWN_YESTREE1                                     0x4B0 // 
#define FLAG_COASTTOWN_YESTREE2                                     0x4B1 // 
#define FLAG_COASTTOWN_YESTREE3                                     0x4B2 // 
#define FLAG_VISITED_PEARLWOOD_POINT                                        0x4B3 // Visited Pearlwood
#define FLAG_VISITED_AZURETIDE                                              0x4B4 // Visited Azuretide
#define FLAG_VISITED_WIP_CITY1                                              0x4B5 // Visited Aldeleaf
#define FLAG_ALDELEAF_SWITCH1                                               0x4B6 // aldeleaf gym switches
#define FLAG_ALDELEAF_SWITCH2                                               0x4B7 // aldeleaf gym switches
#define FLAG_ALDELEAF_SWITCH3                                               0x4B8 // aldeleaf gym switches
#define FLAG_ALDELEAF_SWITCH_ALL                                            0x4B9 // aldeleaf gym switches
#define FLAG_BP_REWARD                                              0x4BA // 
#define FLAG_NO_BAG                                                         0x4BB // Disables bag
#define FLAG_DEFEATED_SUDOWOODO2                                            0x4BC // Hide girl after sudowoodo fight in aldeleaf
#define FLAG_SHELL_BELL_RECEIVED                                            0x4BD // Received shell bell in aldeleaf
#define FLAG_ALDELEAF_QUICK_BALL                                            0x4BE // Received quick ball in aldeleaf
#define FLAG_GHOST_MOVED                                                    0x4BF // Ghost moved in aldeleaf house
#define FLAG_WHITEFLUTE_RECEIVED                                           0x4C0 // 
#define FLAG_RECEIVED_LAVA_COOKIE                                           0x4C1 // 
#define FLAG_ROUTE28_DESPAWN_BROTHER                                           0x4C2 // 
#define FLAG_ROUTE28_TM                                           0x4C3 // 
#define FLAG_ROUTE28_HIDDENBALL                                           0x4C4 // 
#define FLAG_ROUTE28_ITEMBALL                                          0x4C5 // 
#define FLAG_VISITED_WIP_TOWN2                                           0x4C6 // 
#define FLAG_WEIRDCAVESOLVED                                           0x4C7 // opens the antechamber in weird cave
#define FLAG_WEIRDCAVE_STONE                                           0x4C8 // 
#define FLAG_INTRODUCED_TO_TELEPORT                                           0x4C9 // 
#define FLAG_RESTED_AT_SAFARI                                           0x4CA // 
#define FLAG_TRADED_GROWLITHE                                           0x4CB // 
#define FLAG_TRADED_VOLTORB                                           0x4CC // 
#define FLAG_TRADED_QWILFISH                                           0x4CD // 
#define FLAG_TRADED_SNEASEL                                           0x4CE // 
#define FLAG_TRADED_ZORUA                                           0x4CF // 
#define FLAG_TRADED_BULBASAUR                                           0x4D0 // 
#define FLAG_TRADED_CHARMANDER                                           0x4D1 // 
#define FLAG_TRADED_SQUIRTLE                                           0x4D2 // 
#define FLAG_FANCLUB_TRADESOVER                                           0x4D3 // 
#define FLAG_KAOLMINES_ITEM1                                           0x4D4 // Kaolisle Mines Item Flags Start
#define FLAG_KAOLMINES_ITEM2                                           0x4D5 // 
#define FLAG_KAOLMINES_ITEM3                                           0x4D6 // 
#define FLAG_KAOLMINES_ITEM4                                           0x4D7 // 
#define FLAG_KAOLMINES_ITEM5                                           0x4D8 // 
#define FLAG_KAOLMINES_ITEM6                                           0x4D9 // 
#define FLAG_KAOLMINES_ITEM7                                           0x4DA // 
#define FLAG_KAOLMINES_ITEM8                                           0x4DB // 
#define FLAG_KAOLMINES_ITEM9                                           0x4DC // 
#define FLAG_KAOLMINES_ITEM10                                           0x4DD // 
#define FLAG_KAOLMINES_ITEM11                                           0x4DE // 
#define FLAG_KAOLMINES_ITEM12                                           0x4DF // 
#define FLAG_KAOLMINES_ITEM13                                           0x4E0 // 
#define FLAG_KAOLMINES_ITEM14                                           0x4E1 // Kaolisle Mines Item Flags End
#define FLAG_VISITED_SANDSTONE_CITY                                           0x4E2 //
#define FLAG_VISITED_ROCKLIFFE                                           0x4E3 // 
#define FLAG_OBTAINED_LUCARIONITE                                           0x4E4 // 
#define FLAG_R13_ITEM1                                           0x4E5 // 
#define FLAG_UNUSED_0x4E6                                           0x4E6 // 
#define FLAG_UNUSED_0x4E7                                           0x4E7 // 
#define FLAG_UNUSED_0x4E8                                           0x4E8 // 
#define FLAG_FC_ITEM1                                           0x4E9 // 
#define FLAG_FC_ITEM2                                           0x4EA // 
#define FLAG_FC_ITEM3                                           0x4EB // 
#define FLAG_FC_ITEM4                                           0x4EC // 
#define FLAG_HIDE_STONE_SPHERE_FC                                           0x4ED // 
#define FLAG_FC_DOOR_OPEN                                           0x4EE // 
#define FLAG_FC_LOOTEDROCK                                           0x4EF // 

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4F0
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4F1
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4F2
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4F3
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4F4
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4F5
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4F6
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4F7
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           0x4F8

#define FLAG_R14_ITEM1                                           0x4F9 // 
#define FLAG_R14_ITEM2                                           0x4FA // 

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FB
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FD
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FE

#define FLAG_DRISLEDGE_ITEM1                                           0x4FF //  

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_RECEIVED_TITANIUM_LINE                            (SYSTEM_FLAGS + 0x3) // 
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_UNLOCKED_TRENDY_SAYINGS                 (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_MAY_COSTUME_CHANGE                           (SYSTEM_FLAGS + 0x21) // 
#define FLAG_BRENDAN_COSTUME_CHANGE                           (SYSTEM_FLAGS + 0x22) // 
#define FLAG_PC_CHANGE_COSTUME                           (SYSTEM_FLAGS + 0x23) // 
#define FLAG_VISITED_FLOODEDCAVE                           (SYSTEM_FLAGS + 0x24) // 
#define FLAG_VISITED_FISHING_VILLAGE                           (SYSTEM_FLAGS + 0x25) // 
#define FLAG_VISITED_DRISLEDGE                           (SYSTEM_FLAGS + 0x26) // 
#define FLAG_VISITED_AMBEROCK                           (SYSTEM_FLAGS + 0x27) // 

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_DISABLE_FOLLOWER                           (SYSTEM_FLAGS + 0x2E) // 
#define FLAG_HEAL_AFTER_BATTLE                           (SYSTEM_FLAGS + 0x2F) // 

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // , leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // , same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // , same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_LOST_GLADE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_WINDY_WOODS               (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)

#define FLAG_CONTINUE_AFTER_WHITEOUT                           (SYSTEM_FLAGS + 0x83) // 

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_VISITED_BASALPEAK                           (SYSTEM_FLAGS + 0x85) // 
#define FLAG_VISITED_FROSTFIRE                          (SYSTEM_FLAGS + 0x86) // 
#define FLAG_VISITED_CRYSTALPINE                           (SYSTEM_FLAGS + 0x87) // 
#define FLAG_VISITED_EVERFROST                           (SYSTEM_FLAGS + 0x88) // 
#define FLAG_VISITED_ICEPERCH                           (SYSTEM_FLAGS + 0x89) // 
#define FLAG_VISITED_SNOWCREST                           (SYSTEM_FLAGS + 0x8A) // 
#define FLAG_VISITED_GALEWIND                           (SYSTEM_FLAGS + 0x8B) // 
#define FLAG_LITWICK_TAG_COMPLETE                           (SYSTEM_FLAGS + 0x8C) // 
#define FLAG_LITWICK_CAUGHT                           (SYSTEM_FLAGS + 0x8D) // 
#define FLAG_ACEROLA_ITEM                           (SYSTEM_FLAGS + 0x8E) // 
#define FLAG_SYS_JOURNAL_GET                           (SYSTEM_FLAGS + 0x8F) // 
#define FLAG_DEV_REWARD                           (SYSTEM_FLAGS + 0x90) // 
#define FLAG_RECEIVED_SANDSTONE_BERRY                           (SYSTEM_FLAGS + 0x91) // 
#define FLAG_UNUSED_0x8F2                           (SYSTEM_FLAGS + 0x92) // 
#define FLAG_UNUSED_0x8F3                           (SYSTEM_FLAGS + 0x93) // 
#define FLAG_UNUSED_0x8F4                           (SYSTEM_FLAGS + 0x94) // 
#define FLAG_UNUSED_0x8F5                           (SYSTEM_FLAGS + 0x95) // 
#define FLAG_UNUSED_0x8F6                           (SYSTEM_FLAGS + 0x96) // 
#define FLAG_UNUSED_0x8F7                           (SYSTEM_FLAGS + 0x97) // 
#define FLAG_UNUSED_0x8F8                           (SYSTEM_FLAGS + 0x98) // 
#define FLAG_UNUSED_0x8F9                           (SYSTEM_FLAGS + 0x99) // 
#define FLAG_UNUSED_0x8FA                           (SYSTEM_FLAGS + 0x9A) // 
#define FLAG_UNUSED_0x8FB                           (SYSTEM_FLAGS + 0x9B) // 
#define FLAG_UNUSED_0x8FC                           (SYSTEM_FLAGS + 0x9C) // 
#define FLAG_UNUSED_0x8FD                           (SYSTEM_FLAGS + 0x9D) // 
#define FLAG_UNUSED_0x8FE                           (SYSTEM_FLAGS + 0x9E) // 
#define FLAG_UNUSED_0x8FF                           (SYSTEM_FLAGS + 0x9F) // 
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // 
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // 
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // 
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3) // 
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4) // 
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // 
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // 
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // 
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // 
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // 
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // 
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // 
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // 
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // 
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // 
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // 
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // 
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // 
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // 
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // 
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // 
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // 
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // 
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // 
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // 
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // 
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // 
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // 
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // 
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // 
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // 
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // 

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_DAILY_RESET_CASTELIACONE                           (DAILY_FLAGS_START + 0x0)  // 
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_DAILY_PRIMROSE_NECTAR1                 (DAILY_FLAGS_START + 0x3)  // 
#define FLAG_DAILY_PRIMROSE_NECTAR2                 (DAILY_FLAGS_START + 0x4)  // 
#define FLAG_DAILY_PRIMROSE_NECTAR3                 (DAILY_FLAGS_START + 0x5)  // 
#define FLAG_DAILY_PRIMROSE_NECTAR4                 (DAILY_FLAGS_START + 0x6)  // 
#define FLAG_DAILY_GROTTO_1                           (DAILY_FLAGS_START + 0x7)  // 
#define FLAG_DAILY_GROTTO_2                           (DAILY_FLAGS_START + 0x8)  // 
#define FLAG_DAILY_SAFARIBALL_BOUGHT                           (DAILY_FLAGS_START + 0x9)  // 
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_DAILY_FANCLUBTRADE                           (DAILY_FLAGS_START + 0x13) // 
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_DAILY_GROTTO_3                           (DAILY_FLAGS_START + 0x15) // 
#define FLAG_DAILY_GROTTO_4                           (DAILY_FLAGS_START + 0x16) // 
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // 
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // 
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // 
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // 
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // 
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // 
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // 
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // 
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // 
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // 
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // 
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // 
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // 
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // 
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // 
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // 
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // 
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // 
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // 
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // 
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // 
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // 
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // 
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // 
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // 
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // 
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // 
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // 
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // 
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // 
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // 
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // 
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // 
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // 
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // 
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // 
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // 
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // 
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // 
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // 
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // 
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))
#define NUM_DAILY_FLAGS                             (DAILY_FLAGS_END - DAILY_FLAGS_START + 1)

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // 
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
#define FLAG_SAFE_FOLLOWER_MOVEMENT             (SPECIAL_FLAGS_START + 0x5) // When set, applymovement does not put the follower inside a pokeball
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)
#define NUM_SPECIAL_FLAGS                       (SPECIAL_FLAGS_END - SPECIAL_FLAGS_START + 1)

// Temp flag aliases
#define FLAG_TEMP_SKIP_GABBY_INTERVIEW          FLAG_TEMP_1
#define FLAG_TEMP_REGICE_PUZZLE_STARTED         FLAG_TEMP_2
#define FLAG_TEMP_REGICE_PUZZLE_FAILED          FLAG_TEMP_3
#define FLAG_TEMP_HIDE_FOLLOWER                 FLAG_TEMP_1E
#define FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE FLAG_TEMP_11

#endif // GUARD_CONSTANTS_FLAGS_H
