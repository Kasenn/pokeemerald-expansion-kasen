#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("My own: Flying-type gets speed boost during strong winds and hastens certain 2-turn moves")
{
    u32 species = 0;
    u32 move = 0;
    u32 j = 0;

    static const u32 sMoves[][2] = {
        {MOVE_SKY_ATTACK,    SPECIES_WOBBUFFET},
        {MOVE_RAZOR_WIND,    SPECIES_WOBBUFFET},
        {MOVE_BOUNCE,        SPECIES_WOBBUFFET},
        {MOVE_FLY,           SPECIES_WOBBUFFET},
        {MOVE_SKY_ATTACK,    SPECIES_DODUO},
        {MOVE_RAZOR_WIND,    SPECIES_DODUO},
        {MOVE_BOUNCE,        SPECIES_DODUO},
        {MOVE_FLY,           SPECIES_DODUO},
    };

    for (j = 0; j < ARRAY_COUNT(sMoves); j++)
    {
        PARAMETRIZE {species = sMoves[j][1]; move = sMoves[j][0]; }
    }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {
            MaxHP(1);
            HP(1);
            Speed(59);
        }
        if (species == SPECIES_WOBBUFFET)
            OPPONENT(species) {
                MaxHP(1);
                HP(1);
                Speed(30);
            }
        else
            OPPONENT(species) {
                MaxHP(1);
                HP(1);
                Speed(30);
                Item(ITEM_POWER_HERB);
            }
    }
    WHEN {
        TURN { MOVE(opponent, MOVE_WIND_STARTER); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, move); }
    }
    SCENE {
        if (species == SPECIES_WOBBUFFET)
            HP_BAR(opponent);
        else
            HP_BAR(player);
    }
    THEN {
        if (species == SPECIES_DODUO)
        {
            EXPECT_EQ(opponent->item, ITEM_POWER_HERB);
        }
    }
}

SINGLE_BATTLE_TEST("Data Breach ignores target's defense and damage reductions when using normal-type moves 1")
{
    s16 damage[4] = {0};
    
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_DATA_BREACH); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) {Speed(1); }
    } WHEN {
        // player attacks with no defenses up
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_ACID_ARMOR); }
        // player attacks against +2 Def/Sp.Def
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_REFLECT); }
        // player attacks against +2 Def/Sp.Def + Screen
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_SUBSTITUTE); }
        // player attacks against +2 Def/Sp.Def + Screen + Substitute
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &damage[0]);
        HP_BAR(opponent, captureDamage: &damage[1]);
        HP_BAR(opponent, captureDamage: &damage[2]);
        HP_BAR(opponent, captureDamage: &damage[3]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
        EXPECT_EQ(damage[1], damage[2]);
        EXPECT_EQ(damage[2], damage[3]);    
        DebugPrintf("%d, %d, %d, %d", damage[0], damage[1], damage[2], damage[3]);
    }
}
SINGLE_BATTLE_TEST("Data Breach ignores target's defense and damage reductions when using normal-type moves 2")
{
    s16 damage[4] = {0};

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_DATA_BREACH); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) {Speed(1); }
    } WHEN {
        // player attacks with no defenses up
        TURN { MOVE(player, MOVE_SWIFT); MOVE(opponent, MOVE_AMNESIA); }
        // player attacks against +2 Def/Sp.Def
        TURN { MOVE(player, MOVE_SWIFT); MOVE(opponent, MOVE_LIGHT_SCREEN); }
        // player attacks against +2 Def/Sp.Def + Screen
        TURN { MOVE(player, MOVE_SWIFT); MOVE(opponent, MOVE_SUBSTITUTE); }
        // player attacks against +2 Def/Sp.Def + Screen + Substitute
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &damage[0]);
        HP_BAR(opponent, captureDamage: &damage[1]);
        HP_BAR(opponent, captureDamage: &damage[2]);
        HP_BAR(opponent, captureDamage: &damage[3]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
        EXPECT_EQ(damage[1], damage[2]);
        EXPECT_EQ(damage[2], damage[3]);    
        DebugPrintf("%d, %d, %d, %d", damage[0], damage[1], damage[2], damage[3]);
    }
}
SINGLE_BATTLE_TEST("Data Breach ignores target's defense and damage reductions when using normal-type moves 3")
{
    s16 damage[3];
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_DATA_BREACH); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) {Speed(1); }
    } WHEN {
        // player attacks with no defenses up
        TURN { MOVE(player, MOVE_AQUA_JET); MOVE(opponent, MOVE_ACID_ARMOR); }
        // player attacks against +2 Def/Sp.Def
        TURN { MOVE(player, MOVE_AQUA_JET); MOVE(opponent, MOVE_REFLECT); }
        // player attacks against +2 Def/Sp.Def + Screen
        TURN { MOVE(player, MOVE_AQUA_JET); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &damage[0]);
        HP_BAR(opponent, captureDamage: &damage[1]);
        HP_BAR(opponent, captureDamage: &damage[2]);
    } THEN {
        EXPECT_GT(damage[0], damage[1]);
        EXPECT_GT(damage[1], damage[2]);
        DebugPrintf("%d, %d, %d,", damage[0], damage[1], damage[2]);
    }
}
SINGLE_BATTLE_TEST("Data Breach ignores target's defense and damage reductions when using normal-type moves 4")
{
    s16 damage[3];
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_DATA_BREACH); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) {Speed(1); }
    } WHEN {
        // player attacks with no defenses up
        TURN { MOVE(player, MOVE_WATER_GUN); MOVE(opponent, MOVE_AMNESIA); }
        // player attacks against +2 Def/Sp.Def
        TURN { MOVE(player, MOVE_WATER_GUN); MOVE(opponent, MOVE_LIGHT_SCREEN); }
        // player attacks against +2 Def/Sp.Def + Screen
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &damage[0]);
        HP_BAR(opponent, captureDamage: &damage[1]);
        HP_BAR(opponent, captureDamage: &damage[2]);
    } THEN {
        EXPECT_GT(damage[0], damage[1]);
        EXPECT_GT(damage[1], damage[2]);
        DebugPrintf("%d, %d, %d,", damage[0], damage[1], damage[2]);
    }
}