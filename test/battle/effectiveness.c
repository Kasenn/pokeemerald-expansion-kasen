#include "global.h"
#include "test/battle.h"

ASSUMPTIONS {
    ASSUME(GetMoveType(MOVE_POUND) == TYPE_NORMAL);
    ASSUME(GetMoveType(MOVE_ROCK_THROW) == TYPE_ROCK);
    ASSUME(GetMoveType(MOVE_WATER_GUN) == TYPE_WATER);
    ASSUME(GetMoveType(MOVE_KARATE_CHOP) == TYPE_FIGHTING);
}

SINGLE_BATTLE_TEST("Effectiveness strings are correct in Single Battles")
{
    enum Move move;
    PARAMETRIZE { move = MOVE_POUND; } // It's mostly ineffective…
    PARAMETRIZE { move = MOVE_ROCK_THROW; } // It's not very effective…
    PARAMETRIZE { move = MOVE_WATER_GUN; } // It's super effective!
    PARAMETRIZE { move = MOVE_KARATE_CHOP; } // It's extremely effective!
    GIVEN {
        PLAYER(SPECIES_AGGRON);
        OPPONENT(SPECIES_AGGRON);
    } WHEN {
        TURN { MOVE(player, move); MOVE(opponent, move); }
    } SCENE {
        switch (move)
        {
            case MOVE_POUND:
            case MOVE_ROCK_THROW:
                MESSAGE("It's not very effective…");
                break;
            case MOVE_WATER_GUN:
            case MOVE_KARATE_CHOP:
                MESSAGE("It's super effective!");
                break;
            default:
                break;
        }
    }
}

DOUBLE_BATTLE_TEST("Effectiveness strings are correct in Double Battles")
{
    enum Move move;
    PARAMETRIZE { move = MOVE_BOOMBURST; } // It's mostly ineffective…
    PARAMETRIZE { move = MOVE_SYNCHRONOISE; } // It's not very effective…
    PARAMETRIZE { move = MOVE_SURF; } // It's super effective!
    PARAMETRIZE { move = MOVE_EARTHQUAKE; } // It's extremely effective!
    GIVEN {
        ASSUME(GetMoveTarget(move) == TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_AGGRON) { Attack(1); SpAttack(1); }
        PLAYER(SPECIES_AGGRON) { Attack(1); SpAttack(1); }
        OPPONENT(SPECIES_AGGRON) { Attack(1); SpAttack(1); }
        OPPONENT(SPECIES_AGGRON) { Attack(1); SpAttack(1); }
    } WHEN {
        TURN { MOVE(playerLeft, move); MOVE(opponentLeft, move); }
    } SCENE {
        switch (move)
        {
            case MOVE_SYNCHRONOISE:
            case MOVE_BOOMBURST:
                MESSAGE("It's not very effective on the foe Aggron. It's not very effective on the foe Aggron.");
                MESSAGE("It's not very effective on Aggron.");
                break;
            case MOVE_EARTHQUAKE:
            case MOVE_SURF:
                MESSAGE("It's super effective on the foe Aggron! It's super effective on the foe Aggron!");
                MESSAGE("It's super effective on Aggron!");
                break;
            default:
                break;
        }
    }
}
