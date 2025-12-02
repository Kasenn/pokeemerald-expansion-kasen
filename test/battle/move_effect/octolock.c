#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Octolock decreases Defense and Sp. Def by at the end of the turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The foe Wobbuffet can no longer escape!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Wobbuffet's Defense fell!");
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Wobbuffet's Sp. Def fell!");
    }
}

SINGLE_BATTLE_TEST("Octolock reduction is prevented by Clear Body, White Smoke and Full Metal Body")
{
    u32 species;
    enum Ability ability;

    PARAMETRIZE { species = SPECIES_BELDUM; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE { species = SPECIES_TORKOAL; ability = ABILITY_WHITE_SMOKE; }
    PARAMETRIZE { species = SPECIES_SOLGALEO; ability = ABILITY_FULL_METAL_BODY; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(species) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        if (species == SPECIES_BELDUM)
        {
            MESSAGE("The foe Beldum can no longer escape!");
            ABILITY_POPUP(opponent, ABILITY_CLEAR_BODY);
            MESSAGE("The foe Beldum's stats were not lowered!");
            NONE_OF {
                MESSAGE("The foe Beldum's Defense fell!");
                MESSAGE("The foe Beldum's Sp. Def fell!");
            }
        }
        else if (species == SPECIES_TORKOAL)
        {
            MESSAGE("The foe Torkoal can no longer escape!");
            ABILITY_POPUP(opponent, ABILITY_WHITE_SMOKE);
            MESSAGE("The foe Torkoal's stats were not lowered!");
            NONE_OF {
                MESSAGE("The foe Torkoal's Defense fell!");
                MESSAGE("The foe Torkoal's Sp. Def fell!");
            }
        }
        else if (species == SPECIES_SOLGALEO)
        {
            MESSAGE("The foe Solgaleo can no longer escape!");
            ABILITY_POPUP(opponent, ABILITY_FULL_METAL_BODY);
            MESSAGE("The foe Solgaleo's stats were not lowered!");
            NONE_OF {
                MESSAGE("The foe Solgaleo's Defense fell!");
                MESSAGE("The foe Solgaleo's Sp. Def fell!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Octolock Defense reduction is prevented by Big Pecks")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIDGEY) { Ability(ABILITY_BIG_PECKS); }
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The foe Pidgey can no longer escape!");
        NOT MESSAGE("The foe Pidgey's Defense fell!");
        ABILITY_POPUP(opponent, ABILITY_BIG_PECKS);
        MESSAGE("The foe Pidgey's Defense was not lowered!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Pidgey's Sp. Def fell!");
    }
}

SINGLE_BATTLE_TEST("Octolock reduction is prevented by Clear Amulet")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_CLEAR_AMULET); }
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The foe Wobbuffet can no longer escape!");
        MESSAGE("The foe Wobbuffet's Clear Amulet prevents its stats from being lowered!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The foe Wobbuffet's Defense fell!");
            MESSAGE("The foe Wobbuffet's Sp. Def fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Octolock will not decrease Defense and Sp. Def further then minus six")
{
    u8 j;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
        for (j = 0; j < 6; j++)
            TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        for (j = 0; j < 5; j++) {
            MESSAGE("The foe Wobbuffet's Defense fell!");
            MESSAGE("The foe Wobbuffet's Sp. Def fell!");
        }
        MESSAGE("The foe Wobbuffet's Defense won't go any lower!");
        MESSAGE("The foe Wobbuffet's Sp. Def won't go any lower!");
        NONE_OF {
            MESSAGE("The foe Wobbuffet's Defense fell!");
            MESSAGE("The foe Wobbuffet's Sp. Def fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Octolock triggers Defiant for both stat reductions")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BISHARP) { Ability(ABILITY_DEFIANT); }
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The foe Bisharp can no longer escape!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Bisharp's Defense fell!");
        ABILITY_POPUP(opponent, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Bisharp's Attack rose sharply!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Bisharp's Sp. Def fell!");
        ABILITY_POPUP(opponent, ABILITY_DEFIANT);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Bisharp's Attack rose sharply!");
    }
}

SINGLE_BATTLE_TEST("Octolock ends after user that set the lock switches out")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_OCTOLOCK); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OCTOLOCK, player);
        MESSAGE("The foe Wobbuffet can no longer escape!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Wobbuffet's Defense fell!");
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The foe Wobbuffet's Sp. Def fell!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The foe Wobbuffet's Defense fell!");
            MESSAGE("The foe Wobbuffet's Sp. Def fell!");
        }

    }
}
