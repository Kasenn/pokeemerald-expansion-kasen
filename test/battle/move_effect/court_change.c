#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_COURT_CHANGE) == EFFECT_COURT_CHANGE);
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the opponent")
{
    GIVEN {
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STICKY_WEB); MOVE(opponentRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(opponentLeft, MOVE_SPIKES); MOVE(opponentRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(playerLeft, 2); SWITCH(opponentLeft, 2); }
    } SCENE {
        MESSAGE("Foe Wobbuffet used Sticky Web!");
        MESSAGE("Foe Wobbuffet used Stealth Rock!");
        MESSAGE("Foe Wobbuffet used Spikes!");
        MESSAGE("Foe Wobbuffet used Toxic Spikes!");
        MESSAGE("Wynaut used Court Change!");
        MESSAGE("Wynaut swapped the battle effects affecting each side!");
        SEND_IN_MESSAGE("Wynaut");
        NONE_OF {
            MESSAGE("Wynaut was caught in a Sticky Web!");
            MESSAGE("Pointed stones dug into Wynaut!");
            MESSAGE("Wynaut is hurt by spikes!");
            MESSAGE("Wynaut was poisoned!");
        }
        MESSAGE("2 sent out Wobbuffet!");
        MESSAGE("Foe Wobbuffet was caught in a Sticky Web!");
        MESSAGE("Pointed stones dug into Foe Wobbuffet!");
        MESSAGE("Foe Wobbuffet is hurt by spikes!");
        MESSAGE("Foe Wobbuffet was poisoned!");
    }
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the player")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB); MOVE(playerRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(playerLeft, MOVE_SPIKES); MOVE(playerRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(opponentLeft, 2); SWITCH(playerLeft, 2); }
    } SCENE {
        MESSAGE("Wobbuffet used Sticky Web!");
        MESSAGE("Wobbuffet used Stealth Rock!");
        MESSAGE("Wobbuffet used Spikes!");
        MESSAGE("Wobbuffet used Toxic Spikes!");
        MESSAGE("Foe Wynaut used Court Change!");
        MESSAGE("Foe Wynaut swapped the battle effects affecting each side!");
        SEND_IN_MESSAGE("Wobbuffet");
        MESSAGE("Wobbuffet was caught in a Sticky Web!");
        MESSAGE("Pointed stones dug into Wobbuffet!");
        MESSAGE("Wobbuffet is hurt by spikes!");
        MESSAGE("Wobbuffet was poisoned!");
        MESSAGE("2 sent out Wynaut!");
        NONE_OF {
            MESSAGE("Foe Wynaut was caught in a Sticky Web!");
            MESSAGE("Pointed stones dug into Foe Wynaut!");
            MESSAGE("Foe Wynaut is hurt by spikes!");
            MESSAGE("Foe Wynaut was poisoned!");
        }
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the player swaps Mist, Safeguard, Aurora Veil, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SNOWSCAPE); MOVE(opponentLeft, MOVE_MIST); MOVE(opponentRight, MOVE_SAFEGUARD); }
        TURN { MOVE(opponentLeft, MOVE_AURORA_VEIL); MOVE(opponentRight, MOVE_REFLECT); }
        TURN { MOVE(opponentLeft, MOVE_LIGHT_SCREEN); MOVE(opponentRight, MOVE_TAILWIND); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Wynaut used Snowscape!");
        MESSAGE("Foe Wobbuffet used Mist!");
        MESSAGE("Foe Wobbuffet used Safeguard!");
        MESSAGE("Foe Wobbuffet used Aurora Veil!");
        MESSAGE("Foe Wobbuffet used Reflect!");
        MESSAGE("Foe Wobbuffet used Light Screen!");
        MESSAGE("Foe Wobbuffet used Tailwind!");
        MESSAGE("Wynaut used Court Change!");
        MESSAGE("Wynaut swapped the battle effects affecting each side!");
        // The effects now end for the player side.
        MESSAGE("Ally's party is no longer protected by Safeguard!");
        MESSAGE("Ally's Mist wore off!");
        MESSAGE("Ally's Reflect wore off!");
        MESSAGE("Your team's Tailwind petered out!");
        MESSAGE("Ally's Aurora Veil wore off!");
        MESSAGE("Ally's Light Screen wore off!");
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the opponent swaps Mist, Safeguard, Aurora Veil, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SNOWSCAPE); MOVE(playerLeft, MOVE_MIST); MOVE(playerRight, MOVE_SAFEGUARD); }
        TURN { MOVE(playerLeft, MOVE_AURORA_VEIL); MOVE(playerRight, MOVE_REFLECT); }
        TURN { MOVE(playerLeft, MOVE_LIGHT_SCREEN); MOVE(playerRight, MOVE_TAILWIND); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Wobbuffet used Mist!");
        MESSAGE("Wobbuffet used Safeguard!");
        MESSAGE("Wobbuffet used Aurora Veil!");
        MESSAGE("Wobbuffet used Reflect!");
        MESSAGE("Wobbuffet used Light Screen!");
        MESSAGE("Wobbuffet used Tailwind!");
        MESSAGE("Foe Wynaut used Court Change!");
        MESSAGE("Foe Wynaut swapped the battle effects affecting each side!");
        // The effects now end for the player side.
        MESSAGE("The snow stopped.");
        MESSAGE("Foe's party is no longer protected by Safeguard!");
        MESSAGE("Foe's Mist wore off!");
        MESSAGE("Foe's Reflect wore off!");
        MESSAGE("The opposing team's Tailwind petered out!");
        MESSAGE("Foe's Aurora Veil wore off!");
        MESSAGE("Foe's Light Screen wore off!");
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the player swaps G-Max Steelsurge")
{
    GIVEN {
        PLAYER(SPECIES_COPPERAJAH) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_IRON_HEAD, target: opponentRight, gimmick: GIMMICK_DYNAMAX); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(opponentLeft, 2); SWITCH(playerLeft, 2); }
    } SCENE {
        MESSAGE("Copperajah used G-Max Steelsurge!");
        SEND_IN_MESSAGE("Wobbuffet");
        MESSAGE("Sharp steel bit into Wobbuffet!");
        NONE_OF {
            MESSAGE("Sharp steel bit into Foe Wynaut!");
        }
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the player swaps G-Max Vine Lash, G-Max Wildfire, G-Max Cannonade")
{
    u32 species, move;
    PARAMETRIZE { species = SPECIES_VENUSAUR;  move = MOVE_VINE_WHIP; }
    PARAMETRIZE { species = SPECIES_CHARIZARD; move = MOVE_EMBER; }
    PARAMETRIZE { species = SPECIES_BLASTOISE; move = MOVE_WATER_GUN; }
    GIVEN {
        PLAYER(species) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN {
            MOVE(playerLeft, move, target: opponentRight, gimmick: GIMMICK_DYNAMAX);
            MOVE(opponentLeft, MOVE_COURT_CHANGE);
        }
    } SCENE {
        switch (species) {
            case SPECIES_VENUSAUR:
                MESSAGE("Venusaur used G-Max Vine Lash!");
                MESSAGE("Wobbuffet is hurt by G-Max Vine Lash's ferocious beating!");
                break;
            case SPECIES_CHARIZARD:
                MESSAGE("Charizard used G-Max Wildfire!");
                MESSAGE("Wobbuffet is burning up within G-Max Wildfire's flames!");
                break;
            case SPECIES_BLASTOISE:
                MESSAGE("Blastoise used G-Max Cannonade!");
                MESSAGE("Wobbuffet is hurt by G-Max Cannonade's vortex!");
                break;
        }
        NONE_OF {
            MESSAGE("Foe Wynaut is hurt by G-Max Vine Lash's ferocious beating!");
            MESSAGE("Foe Wynaut is burning up within G-Max Wildfire's flames!");
            MESSAGE("Foe Wynaut is hurt by G-Max Cannonade's vortex!");
        }
    }
}

AI_SINGLE_BATTLE_TEST("AI uses Court Change")
{
    u32 move;

    PARAMETRIZE { move = MOVE_HEADBUTT; }
    PARAMETRIZE { move = MOVE_REFLECT; }
    PARAMETRIZE { move = MOVE_LIGHT_SCREEN; }
    PARAMETRIZE { move = MOVE_SAFEGUARD; }
    PARAMETRIZE { move = MOVE_SPIKES; }
    PARAMETRIZE { move = MOVE_STEALTH_ROCK; }
    PARAMETRIZE { move = MOVE_TOXIC_SPIKES; }
    PARAMETRIZE { move = MOVE_TAILWIND; }
    PARAMETRIZE { move = MOVE_STICKY_WEB; }
    PARAMETRIZE { move = MOVE_MIST; }
    PARAMETRIZE { move = MOVE_LUCKY_CHANT; }

    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_ZIGZAGOON) { Moves(move, MOVE_CELEBRATE); }
        PLAYER(SPECIES_ZIGZAGOON) { Moves(move, MOVE_CELEBRATE); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_COURT_CHANGE, MOVE_HEADBUTT); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_COURT_CHANGE, MOVE_HEADBUTT); }
    } WHEN {
        TURN { MOVE(player, move); EXPECT_MOVE(opponent, MOVE_HEADBUTT); }
        if (move == MOVE_HEADBUTT)
            TURN { MOVE(player, MOVE_CELEBRATE); NOT_EXPECT_MOVE(opponent, MOVE_COURT_CHANGE); }
        else
            TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_COURT_CHANGE); }
    }
}

