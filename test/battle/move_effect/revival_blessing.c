#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_REVIVAL_BLESSING) == EFFECT_REVIVAL_BLESSING);
}

SINGLE_BATTLE_TEST("Revival Blessing revives a chosen fainted party member for the player")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET) { HP(0); }
        PLAYER(SPECIES_WYNAUT) { HP(0); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING, partyIndex:2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVIVAL_BLESSING, player);
        MESSAGE("Wynaut was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing revives a fainted party member for an opponent")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_RAICHU);
        OPPONENT(SPECIES_PICHU) { HP(0); }
        OPPONENT(SPECIES_PIKACHU) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_REVIVAL_BLESSING, partyIndex:1); }
    } SCENE {
        MESSAGE("The foe Raichu used Revival Blessing!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVIVAL_BLESSING, opponent);
        MESSAGE("Pichu was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing fails if no party members are fainted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        MESSAGE("Wobbuffet used Revival Blessing!");
        MESSAGE("But it failed!");
    }
}

AI_MULTI_BATTLE_TEST("AI will not revive a partner's party member with Revival Blessing")
{
    struct BattlePokemon *user = NULL;
    enum Move move1, move2, move3;
    PARAMETRIZE { user = opponentLeft, move1 = MOVE_REVIVAL_BLESSING, move2 = MOVE_CELEBRATE, move3 = MOVE_CELEBRATE; }
    PARAMETRIZE { user = playerRight, move1 = MOVE_CELEBRATE, move2 = MOVE_REVIVAL_BLESSING, move3 = MOVE_CELEBRATE; }
    PARAMETRIZE { user = opponentRight, move1 = MOVE_CELEBRATE, move2 = MOVE_CELEBRATE, move3 = MOVE_REVIVAL_BLESSING; }
    GIVEN {
        PLAYER(SPECIES_CLEFABLE);
        PLAYER(SPECIES_CLEFABLE) { HP(0); }
        PLAYER(SPECIES_CLEFABLE);
        PARTNER(SPECIES_CLEFAIRY) { Moves(move2); }
        PARTNER(SPECIES_CLEFAIRY);
        PARTNER(SPECIES_CLEFAIRY);
        OPPONENT_A(SPECIES_WOBBUFFET) { Moves(move1); }
        OPPONENT_A(SPECIES_WOBBUFFET);
        OPPONENT_A(SPECIES_WOBBUFFET);
        OPPONENT_B(SPECIES_WYNAUT) { Moves(move3); }
        OPPONENT_B(SPECIES_WYNAUT) { HP(0); }
        OPPONENT_B(SPECIES_WYNAUT);
    } WHEN {
        TURN { EXPECT_MOVE(playerRight, move2); } // EXPECT_MOVE makes battler2 AI-controlled
    } SCENE {
        if (user == opponentLeft) {
            MESSAGE("The foe Wobbuffet used Revival Blessing!");
            MESSAGE("But it failed!");
        } else if (user == playerRight) {
            MESSAGE("Clefairy used Revival Blessing!");
            MESSAGE("But it failed!");
        } else {
            MESSAGE("The foe Wynaut used Revival Blessing!");
            MESSAGE("Wynaut was revived and is ready to fight again!");
        }
    }
}

DOUBLE_BATTLE_TEST("Revival Blessing doesn't prevent revived battlers from losing their turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT) { HP(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SCRATCH, target: opponentRight);
               MOVE(opponentLeft, MOVE_REVIVAL_BLESSING, partyIndex: 1); }
    } SCENE {
        MESSAGE("Wobbuffet used Scratch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, playerLeft);
        MESSAGE("The foe Wynaut fainted!");
        MESSAGE("The foe Wobbuffet used Revival Blessing!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVIVAL_BLESSING, opponentLeft);
        MESSAGE("Wynaut was revived and is ready to fight again!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Revival Blessing correctly updates battler absent flags")
{
    GIVEN {
        PLAYER(SPECIES_SALAMENCE) { Level(40); }
        PLAYER(SPECIES_PIDGEOT) { Level(40); }
        OPPONENT(SPECIES_GEODUDE) { Level(5); Ability(ABILITY_ROCK_HEAD); }
        OPPONENT(SPECIES_STARLY) { Level(5); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE);
               MOVE(opponentRight, MOVE_REVIVAL_BLESSING, partyIndex: 0); }
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE); }
    } SCENE {
        MESSAGE("Salamence used Earthquake!");
        MESSAGE("It doesn't affect Pidgeot…");
        MESSAGE("It doesn't affect the foe Starly…");
        HP_BAR(opponentLeft);
        MESSAGE("The foe Geodude fainted!");
        MESSAGE("The foe Starly used Revival Blessing!");
        MESSAGE("Geodude was revived and is ready to fight again!"); // Should have prefix but it doesn't currently.
        // Turn 2
        MESSAGE("Salamence used Earthquake!");
        MESSAGE("It doesn't affect Pidgeot…");
        MESSAGE("It doesn't affect the foe Starly…");
        HP_BAR(opponentLeft);
        MESSAGE("The foe Geodude fainted!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing keeps Mimikyu Busted forms and Eiscue Noice in their current forms")
{
    enum Species species;
    enum Ability ability;

    PARAMETRIZE { species = SPECIES_MIMIKYU_BUSTED;       ability = ABILITY_DISGUISE; }
    PARAMETRIZE { species = SPECIES_MIMIKYU_BUSTED_TOTEM; ability = ABILITY_DISGUISE; }
    PARAMETRIZE { species = SPECIES_EISCUE_NOICE;         ability = ABILITY_ICE_FACE; }

    GIVEN {
        ASSUME(GetMoveCategory(MOVE_CRUNCH) == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(species) { HP(1); Ability(ability); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CRUNCH); SEND_OUT(player, 1); }
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING, partyIndex: 0); }
        TURN { SWITCH(player, 0); MOVE(opponent, MOVE_CRUNCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CRUNCH, opponent);
        HP_BAR(player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REVIVAL_BLESSING, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CRUNCH, opponent);
        NOT ABILITY_POPUP(player, ability);
        HP_BAR(player);
    }
}
