#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_FORESTS_CURSE) == EFFECT_FORESTS_CURSE);
}

SINGLE_BATTLE_TEST("Forest's Curse only works for ghosts")
{
    u16 species;
    PARAMETRIZE {species = SPECIES_TREVENANT;}
    PARAMETRIZE {species = SPECIES_WOBBUFFET;}

    GIVEN {
        PLAYER(species);
        OPPONENT(SPECIES_WOBBUFFET);
    }
    WHEN {
        TURN { MOVE(player, MOVE_FORESTS_CURSE); }
    }
    SCENE {
        if (species == SPECIES_TREVENANT)
        {
            MESSAGE("Trevenant used Forest's Curse!");
            HP_BAR(player);
            MESSAGE("Trevenant laid the forest's curse on The opposing Wobbuffet!");
            HP_BAR(opponent);
        }
        else
        {
            MESSAGE("Wobbuffet used Forest's Curse!");
            NONE_OF {
                HP_BAR(player);
                MESSAGE("Wobbuffet laid the forest's curse on The opposing Wobbuffet!");
                HP_BAR(opponent);    
            }
            MESSAGE("But it failed!");
        }
    }
    THEN {
        if (species == SPECIES_TREVENANT)
            EXPECT_EQ(opponent->types[2], TYPE_GRASS);
        else
            EXPECT_EQ(opponent->types[2], TYPE_MYSTERY);
    }
}

SINGLE_BATTLE_TEST("Forest's Curse will curse even if target is grass-type")
{
    GIVEN {
        PLAYER(SPECIES_TREVENANT);
        OPPONENT(SPECIES_ODDISH);
    }
    WHEN {
        TURN { MOVE(player, MOVE_FORESTS_CURSE); }
    }
    SCENE {
        MESSAGE("Trevenant used Forest's Curse!");
        HP_BAR(player);
        MESSAGE("Trevenant laid the forest's curse on The opposing Oddish!");
        HP_BAR(opponent);
    }
    THEN {
        EXPECT_EQ(opponent->types[2], TYPE_MYSTERY);
    }
}

SINGLE_BATTLE_TEST("Forest's Curse will set third type even if target is cursed")
{
    GIVEN {
        PLAYER(SPECIES_TREVENANT);
        OPPONENT(SPECIES_WOBBUFFET);
    }
    WHEN {
        TURN { MOVE(player, MOVE_CURSE); }
        TURN { MOVE(player, MOVE_FORESTS_CURSE); }
    }
    SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
        HP_BAR(player);
        MESSAGE("Trevenant cut its own HP and put a curse on the opposing Wobbuffet!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_FORESTS_CURSE, player);
        NONE_OF {
            s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
            HP_BAR(player, hp: maxHP / 3);
            MESSAGE("But it failed!");
        }
        MESSAGE("Trevenant laid the forest's curse on The opposing Wobbuffet!");
    }
    THEN {
        EXPECT_EQ(opponent->types[2], TYPE_GRASS);
    }
}