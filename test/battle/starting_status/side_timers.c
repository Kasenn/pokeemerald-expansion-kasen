#include "global.h"
#include "event_data.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Starting Status Tailwind names Tailwind as the trigger in the Wind Power activation message")
{
    u16 status = 0;

    PARAMETRIZE { status = STARTING_STATUS_TAILWIND_OPPONENT;           }
    PARAMETRIZE { status = STARTING_STATUS_TAILWIND_PLAYER;             }

    SetStartingStatus(status);

    GIVEN {
        PLAYER(SPECIES_WATTREL) { Ability(ABILITY_WIND_POWER); }
        PLAYER(SPECIES_KILOWATTREL) { Ability(ABILITY_WIND_POWER); }
        OPPONENT(SPECIES_WATTREL) { Ability(ABILITY_WIND_POWER); }
        OPPONENT(SPECIES_KILOWATTREL) { Ability(ABILITY_WIND_POWER); }
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_COPYCAT);
            MOVE(opponentLeft, MOVE_COPYCAT);
            MOVE(playerRight, MOVE_COPYCAT);
            MOVE(opponentRight, MOVE_COPYCAT);
        }
    } SCENE {
        switch (status)
        {
        case STARTING_STATUS_TAILWIND_OPPONENT:
            MESSAGE("The tailwind blew from behind the foe's team!");
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged Wattrel with power!");
                ABILITY_POPUP(playerRight, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged Kilowattrel with power!");
            }
            ABILITY_POPUP(opponentLeft, ABILITY_WIND_POWER);
            MESSAGE("Being hit by Tailwind charged the foe Wattrel with power!");
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged Wattrel with power!");
                ABILITY_POPUP(playerRight, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged Kilowattrel with power!");
            }
            ABILITY_POPUP(opponentRight, ABILITY_WIND_POWER);
            MESSAGE("Being hit by Tailwind charged the foe Kilowattrel with power!");
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged Wattrel with power!");
                ABILITY_POPUP(playerRight, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged Kilowattrel with power!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, playerLeft);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponentLeft);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, playerRight);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponentRight);
            }
            break;
        case STARTING_STATUS_TAILWIND_PLAYER:
            MESSAGE("The tailwind blew from behind your team!");
            NONE_OF {
                ABILITY_POPUP(opponentLeft, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged the foe Wattrel with power!");
                ABILITY_POPUP(opponentRight, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged the foe Kilowattrel with power!");
            }
            ABILITY_POPUP(playerLeft, ABILITY_WIND_POWER);
            MESSAGE("Being hit by Tailwind charged Wattrel with power!");
            NONE_OF {
                ABILITY_POPUP(opponentLeft, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged the foe Wattrel with power!");
                ABILITY_POPUP(opponentRight, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged the foe Kilowattrel with power!");
            }
            ABILITY_POPUP(playerRight, ABILITY_WIND_POWER);
            MESSAGE("Being hit by Tailwind charged Kilowattrel with power!");
            NONE_OF {
                ABILITY_POPUP(opponentLeft, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged the foe Wattrel with power!");
                ABILITY_POPUP(opponentRight, ABILITY_WIND_POWER);
                MESSAGE("Being hit by Tailwind charged the foe Kilowattrel with power!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, playerLeft);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponentLeft);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, playerRight);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponentRight);
            }
            break;
        default:
            break;
        }
    } THEN {
        ResetStartingStatuses();
    }
}

DOUBLE_BATTLE_TEST("Starting Status Tailwind only triggers Wind Rider once per battler")
{
    u16 status = 0;

    PARAMETRIZE { status = STARTING_STATUS_TAILWIND_OPPONENT;           }
    PARAMETRIZE { status = STARTING_STATUS_TAILWIND_PLAYER;             }

    SetStartingStatus(status);

    GIVEN {
        PLAYER(SPECIES_BRAMBLIN) { Ability(ABILITY_WIND_RIDER); }
        PLAYER(SPECIES_BRAMBLEGHAST) { Ability(ABILITY_WIND_RIDER); }
        OPPONENT(SPECIES_BRAMBLIN) { Ability(ABILITY_WIND_RIDER); }
        OPPONENT(SPECIES_BRAMBLEGHAST) { Ability(ABILITY_WIND_RIDER); }
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_COPYCAT);
            MOVE(opponentLeft, MOVE_COPYCAT);
            MOVE(playerRight, MOVE_COPYCAT);
            MOVE(opponentRight, MOVE_COPYCAT);
        }
    } SCENE {
        switch (status)
        {
        case STARTING_STATUS_TAILWIND_OPPONENT:
            MESSAGE("The tailwind blew from behind the foe's team!");
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_WIND_RIDER);
                MESSAGE("Bramblin's Attack rose!");
                ABILITY_POPUP(playerRight, ABILITY_WIND_RIDER);
                MESSAGE("Brambleghast's Attack rose!");
            }
            ABILITY_POPUP(opponentLeft, ABILITY_WIND_RIDER);
            MESSAGE("The foe Bramblin's Attack rose!");
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_WIND_RIDER);
                MESSAGE("Bramblin's Attack rose!");
                ABILITY_POPUP(playerRight, ABILITY_WIND_RIDER);
                MESSAGE("Brambleghast's Attack rose!");
                ABILITY_POPUP(opponentLeft, ABILITY_WIND_RIDER);
                MESSAGE("The foe Bramblin's Attack rose!");
            }
            ABILITY_POPUP(opponentRight, ABILITY_WIND_RIDER);
            MESSAGE("The foe Brambleghast's Attack rose!");
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_WIND_RIDER);
                MESSAGE("Bramblin's Attack rose!");
                ABILITY_POPUP(playerRight, ABILITY_WIND_RIDER);
                MESSAGE("Brambleghast's Attack rose!");
                ABILITY_POPUP(opponentLeft, ABILITY_WIND_RIDER);
                MESSAGE("The foe Bramblin's Attack rose!");
                ABILITY_POPUP(opponentRight, ABILITY_WIND_RIDER);
                MESSAGE("The foe Brambleghast's Attack rose!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, playerLeft);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponentLeft);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, playerRight);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponentRight);
            }
            break;
        case STARTING_STATUS_TAILWIND_PLAYER:
            MESSAGE("The tailwind blew from behind your team!");
            NONE_OF {
                ABILITY_POPUP(opponentLeft, ABILITY_WIND_RIDER);
                MESSAGE("The foe Bramblin's Attack rose!");
                ABILITY_POPUP(opponentRight, ABILITY_WIND_RIDER);
                MESSAGE("The foe Brambleghast's Attack rose!");
            }
            ABILITY_POPUP(playerLeft, ABILITY_WIND_RIDER);
            MESSAGE("Bramblin's Attack rose!");
            NONE_OF {
                ABILITY_POPUP(opponentLeft, ABILITY_WIND_RIDER);
                MESSAGE("The foe Bramblin's Attack rose!");
                ABILITY_POPUP(opponentRight, ABILITY_WIND_RIDER);
                MESSAGE("The foe Brambleghast's Attack rose!");
                ABILITY_POPUP(playerLeft, ABILITY_WIND_RIDER);
                MESSAGE("Bramblin's Attack rose!");
            }
            ABILITY_POPUP(playerRight, ABILITY_WIND_RIDER);
            MESSAGE("Brambleghast's Attack rose!");
            NONE_OF {
                ABILITY_POPUP(opponentLeft, ABILITY_WIND_RIDER);
                MESSAGE("The foe Bramblin's Attack rose!");
                ABILITY_POPUP(opponentRight, ABILITY_WIND_RIDER);
                MESSAGE("The foe Brambleghast's Attack rose!");
                ABILITY_POPUP(playerLeft, ABILITY_WIND_RIDER);
                MESSAGE("Bramblin's Attack rose!");
                ABILITY_POPUP(playerRight, ABILITY_WIND_RIDER);
                MESSAGE("Brambleghast's Attack rose!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, playerLeft);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponentLeft);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, playerRight);
                ANIMATION(ANIM_TYPE_MOVE, MOVE_TAILWIND, opponentRight);
            }
            break;
        default:
            break;
        }
    } THEN {
        ResetStartingStatuses();
    }
}
