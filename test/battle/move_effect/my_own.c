#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("My own Flying-type gets speed boost during strong winds and hastens certain 2-turn moves")
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

SINGLE_BATTLE_TEST("My own Data Breach ignores target's defense and damage reductions when using normal-type moves 1")
{
    s16 damage1;
    s16 damage2;
    s16 damage3;
    s16 damage4;
    s16 damage5;
    
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
        HP_BAR(opponent, captureDamage: &damage1);
        HP_BAR(opponent, captureDamage: &damage2);
        HP_BAR(opponent, captureDamage: &damage3);
        HP_BAR(opponent, captureDamage: &damage4);
        HP_BAR(opponent, captureDamage: &damage5);
    } THEN {
        EXPECT_EQ(damage1, damage2);
        EXPECT_EQ(damage2, damage3);
        EXPECT_EQ(damage3, damage5);    
    }
}
SINGLE_BATTLE_TEST("My own Data Breach ignores target's defense and damage reductions when using normal-type moves 2")
{
    s16 damage1;
    s16 damage2;
    s16 damage3;
    s16 damage4;
    s16 damage5;

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
        HP_BAR(opponent, captureDamage: &damage1);
        HP_BAR(opponent, captureDamage: &damage2);
        HP_BAR(opponent, captureDamage: &damage3);
        HP_BAR(opponent, captureDamage: &damage4);
        HP_BAR(opponent, captureDamage: &damage5);
    } THEN {
        EXPECT_EQ(damage1, damage2);
        EXPECT_EQ(damage2, damage3);
        EXPECT_EQ(damage3, damage5);    
    }
}
SINGLE_BATTLE_TEST("My own Data Breach ignores target's defense and damage reductions when using normal-type moves 3")
{
    s16 damage1;
    s16 damage2;
    s16 damage3;

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
        HP_BAR(opponent, captureDamage: &damage1);
        HP_BAR(opponent, captureDamage: &damage2);
        HP_BAR(opponent, captureDamage: &damage3);
    } THEN {
        EXPECT_GT(damage1, damage2);
        EXPECT_GT(damage2, damage3);
    }
}
SINGLE_BATTLE_TEST("My own Data Breach ignores target's defense and damage reductions when using normal-type moves 4")
{
    s16 damage1;
    s16 damage2;
    s16 damage3;

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
        HP_BAR(opponent, captureDamage: &damage1);
        HP_BAR(opponent, captureDamage: &damage2);
        HP_BAR(opponent, captureDamage: &damage3);
    } THEN {
        EXPECT_GT(damage1, damage2);
        EXPECT_GT(damage2, damage3);
    }
}

SINGLE_BATTLE_TEST("My own Hive Leader activates properly on contact 1")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_HIVE_LEADER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HIVE_LEADER);
    }
}
SINGLE_BATTLE_TEST("My own Hive Leader activates properly on contact 2")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_HIVE_LEADER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HIVE_LEADER);
    }
}
SINGLE_BATTLE_TEST("My own Hive Leader activates properly on contact 3")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_HIVE_LEADER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SWIFT); }
    } SCENE {
        NONE_OF{ ABILITY_POPUP(player, ABILITY_HIVE_LEADER); }
    }
}
SINGLE_BATTLE_TEST("My own Hive Leader activates properly on contact 4")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_HIVE_LEADER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SWIFT); }
    } SCENE {
        NONE_OF{ ABILITY_POPUP(player, ABILITY_HIVE_LEADER); }
    }
}
SINGLE_BATTLE_TEST("My own Hive Leader does not activate if the target is wearing Protective Pads 1")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_HIVE_LEADER);}
        OPPONENT(SPECIES_WOBBUFFET) {Item(ITEM_PROTECTIVE_PADS);}
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        NONE_OF{ ABILITY_POPUP(player, ABILITY_HIVE_LEADER); }
    }
}
SINGLE_BATTLE_TEST("My own Hive Leader does not activate if the target is wearing Protective Pads 2")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_HIVE_LEADER);}
        OPPONENT(SPECIES_WOBBUFFET) {Item(ITEM_PROTECTIVE_PADS);}
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HIVE_LEADER);
    }
}
SINGLE_BATTLE_TEST("My own Hive Leader reduces damage taken from Fire-type moves")
{
    s16 damage1;
    s16 damage2;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Speed(1); }
        OPPONENT(SPECIES_WOBBUFFET) {Ability(ABILITY_HIVE_LEADER); Speed(2); }
    } WHEN {
        // player attacks with no defenses up
        TURN { MOVE(opponent, MOVE_FLAME_CHARGE); MOVE(player, MOVE_SKILL_SWAP); }
        // player attacks against +2 Def/Sp.Def
        TURN { MOVE(opponent, MOVE_FLAME_CHARGE); }
    } SCENE {
        HP_BAR(player, captureDamage: &damage1);
        HP_BAR(player, captureDamage: &damage2);
    } THEN {
        EXPECT_GT(damage1, damage2);
    }
}

SINGLE_BATTLE_TEST("My own Screens print the correct text")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Ability(ABILITY_SNOW_WARNING); Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) {Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SAFEGUARD); MOVE(opponent, MOVE_SAFEGUARD); }
        TURN { MOVE(player, MOVE_LIGHT_SCREEN); MOVE(opponent, MOVE_LIGHT_SCREEN); }
        TURN { MOVE(player, MOVE_MIST); MOVE(opponent, MOVE_MIST); }
        TURN { MOVE(player, MOVE_AURORA_VEIL); MOVE(opponent, MOVE_AURORA_VEIL);}
        TURN { MOVE(player, MOVE_AURORA_VEIL); MOVE(opponent, MOVE_AURORA_VEIL);}
        TURN { MOVE(player, MOVE_AURORA_VEIL); MOVE(opponent, MOVE_AURORA_VEIL);}
        TURN { MOVE(player, MOVE_AURORA_VEIL); MOVE(opponent, MOVE_AURORA_VEIL);}
        TURN { MOVE(player, MOVE_AURORA_VEIL); MOVE(opponent, MOVE_AURORA_VEIL);}
    } SCENE {
        // Safeguard
        MESSAGE("Your team became cloaked in a mystical veil!");
        MESSAGE("The foe's team became cloaked in a mystical veil!");
        // Light Screen
        MESSAGE("Light Screen raised your team's Special Defense!");
        MESSAGE("Light Screen raised the opposing team's Special Defense!");
        // Mist
        MESSAGE("Your team became shrouded in mist!");
        MESSAGE("The foe's team became shrouded in mist!");
        // Aurora Veil
        MESSAGE("Your team became cloaked in a mystical veil!");
        MESSAGE("The foe's team became cloaked in a mystical veil!");
        // Safeguard END
        MESSAGE("Your team is no longer protected by Safeguard!");
        MESSAGE("The foe's team is no longer protected by Safeguard!");
        // Light Screen END
        MESSAGE("Your team's Light Screen wore off!");
        MESSAGE("The opposing team's Light Screen wore off!");
        // Mist END
        MESSAGE("Your team is no longer protected by mist!");
        MESSAGE("The foe's team is no longer protected by mist!");
        // Aurora Veil END
        MESSAGE("Your team is no longer protected by Aurora Veil!");
        MESSAGE("The foe's team is no longer protected by Aurora Veil!");
    }
}

SINGLE_BATTLE_TEST("My own screen breakers print the correct text 1")
{
    u32 move;
    u32 breakingMove;

    PARAMETRIZE { move = MOVE_LIGHT_SCREEN; breakingMove = MOVE_BRICK_BREAK; }
    PARAMETRIZE { move = MOVE_REFLECT;      breakingMove = MOVE_BRICK_BREAK; }
    PARAMETRIZE { move = MOVE_AURORA_VEIL;  breakingMove = MOVE_BRICK_BREAK; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SNOWSCAPE); }
        TURN { MOVE(opponent, move); MOVE(player, breakingMove); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ANIMATION(ANIM_TYPE_MOVE, breakingMove, player);
        switch (move)
        {
        case MOVE_LIGHT_SCREEN:
            MESSAGE("The opposing team's Light Screen wore off!");
            NONE_OF {
                MESSAGE("The opposing team's Aurora Veil wore off!");
                MESSAGE("The opposing team's Reflect wore off!");
            }
            break;
        case MOVE_REFLECT:
            MESSAGE("The opposing team's Reflect wore off!");
            NONE_OF {
                MESSAGE("The opposing team's Aurora Veil wore off!");
                MESSAGE("The opposing team's Light Screen wore off!");
            }
            break;
        case MOVE_AURORA_VEIL:
            MESSAGE("The opposing team's Aurora Veil wore off!");
            NONE_OF {
                MESSAGE("The opposing team's Light Screen wore off!");
                MESSAGE("The opposing team's Reflect wore off!");
            }
            break;
  
        }
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("My own screen breakers print the correct text 2")
{
    u32 move1;
    u32 move2;
    u32 breakingMove;

    PARAMETRIZE { move1 = MOVE_LIGHT_SCREEN; move2 = MOVE_REFLECT;      breakingMove = MOVE_BRICK_BREAK; }
    PARAMETRIZE { move1 = MOVE_LIGHT_SCREEN; move2 = MOVE_AURORA_VEIL;  breakingMove = MOVE_BRICK_BREAK; }
    PARAMETRIZE { move1 = MOVE_REFLECT;      move2 = MOVE_AURORA_VEIL;  breakingMove = MOVE_BRICK_BREAK; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SNOWSCAPE); }
        TURN { MOVE(opponent, move1); }
        TURN { MOVE(opponent, move2); MOVE(player, breakingMove); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move1, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move2, opponent);
        ANIMATION(ANIM_TYPE_MOVE, breakingMove, player);

        if ((move1 == MOVE_LIGHT_SCREEN && move2 == MOVE_REFLECT) ||
            (move1 == MOVE_REFLECT && move2 == MOVE_LIGHT_SCREEN))
        {
            MESSAGE("The opposing team's Reflect wore off!");
            MESSAGE("The opposing team's Light Screen wore off!");
            NONE_OF {
                MESSAGE("The opposing team's Aurora Veil wore off!");
            }
        }
        else if ((move1 == MOVE_LIGHT_SCREEN && move2 == MOVE_AURORA_VEIL) ||
                 (move1 == MOVE_AURORA_VEIL && move2 == MOVE_LIGHT_SCREEN))
        {
            MESSAGE("The opposing team's Light Screen wore off!");
            MESSAGE("The opposing team's Aurora Veil wore off!");
            NONE_OF {
                MESSAGE("The opposing team's Reflect wore off!");
            }
        }
        else if ((move1 == MOVE_REFLECT && move2 == MOVE_AURORA_VEIL) ||
                 (move1 == MOVE_AURORA_VEIL && move2 == MOVE_REFLECT))
        {
            MESSAGE("The opposing team's Reflect wore off!");
            MESSAGE("The opposing team's Aurora Veil wore off!");
            NONE_OF {
                MESSAGE("The opposing team's Light Screen wore off!");
            }
        }
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("My own screen breakers print the correct text 3")
{
    u32 move1;
    u32 move2;
    u32 move3;
    u32 breakingMove;

    PARAMETRIZE { move1 = MOVE_LIGHT_SCREEN; move2 = MOVE_REFLECT;  move3 = MOVE_AURORA_VEIL;   breakingMove = MOVE_BRICK_BREAK; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SNOWSCAPE); }
        TURN { MOVE(opponent, move1); }
        TURN { MOVE(opponent, move2); }
        TURN { MOVE(opponent, move3); MOVE(player, breakingMove); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNOWSCAPE, player);
        ANIMATION(ANIM_TYPE_MOVE, move1, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move2, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move3, opponent);
        ANIMATION(ANIM_TYPE_MOVE, breakingMove, player);

        MESSAGE("The opposing team's Reflect wore off!");
        MESSAGE("The opposing team's Light Screen wore off!");
        MESSAGE("The opposing team's Aurora Veil wore off!");

        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("My own Lum Berry prints the correct text 1")
{
    u32 j = 0;
    u32 move = 0;

    static const u32 sMoves[] = {
        MOVE_POISON_GAS,
        MOVE_SLEEP_POWDER,
        MOVE_THUNDER_WAVE,
        MOVE_WILL_O_WISP,
        MOVE_POWDER_SNOW,
        MOVE_CONFUSE_RAY,
    };

    for (j = 0; j < ARRAY_COUNT(sMoves); j++)
    {
        PARAMETRIZE { move = sMoves[j]; }
    }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Speed(2); Item(ITEM_LUM_BERRY); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN { MOVE(player, move); MOVE(opponent, MOVE_CELEBRATE, WITH_RNG(RNG_FROZEN, 0)); }
        TURN { MOVE(player, MOVE_BESTOW); MOVE(opponent, MOVE_CELEBRATE, WITH_RNG(RNG_FROZEN, 0)); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BESTOW, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        switch (move)
        {
        case MOVE_POISON_GAS:
            MESSAGE("The foe Wobbuffet's Lum Berry cured its poison!");
            NONE_OF { MESSAGE("The foe Wobbuffet's Lum Berry snapped it out of its confusion!"); }
            break;
        case MOVE_SLEEP_POWDER:
            MESSAGE("The foe Wobbuffet's Lum Berry woke it up!");
            NONE_OF { MESSAGE("The foe Wobbuffet's Lum Berry snapped it out of its confusion!"); }
            break;
        case MOVE_THUNDER_WAVE:
            MESSAGE("The foe Wobbuffet's Lum Berry cured its paralysis!");
            NONE_OF { MESSAGE("The foe Wobbuffet's Lum Berry snapped it out of its confusion!"); }
            break;
        case MOVE_WILL_O_WISP:
            MESSAGE("The foe Wobbuffet's Lum Berry healed its burn!");
            NONE_OF { MESSAGE("The foe Wobbuffet's Lum Berry snapped it out of its confusion!"); }
            break;
        case MOVE_POWDER_SNOW:
            MESSAGE("The foe Wobbuffet's Lum Berry defrosted it!");
            NONE_OF { MESSAGE("The foe Wobbuffet's Lum Berry snapped it out of its confusion!"); }
            break;
        case MOVE_CONFUSE_RAY:
            MESSAGE("The foe Wobbuffet's Lum Berry snapped it out of its confusion!");
            break;
        }
    }
}

SINGLE_BATTLE_TEST("My own Lum Berry prints the correct text 2")
{
    u32 j = 0;
    u32 move = 0;

    static const u32 sMoves[] = {
        MOVE_POISON_GAS,
        MOVE_SLEEP_POWDER,
        MOVE_THUNDER_WAVE,
        MOVE_WILL_O_WISP,
        MOVE_POWDER_SNOW,
    };

    for (j = 0; j < ARRAY_COUNT(sMoves); j++)
    {
        PARAMETRIZE { move = sMoves[j]; }
    }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) {Speed(2); Item(ITEM_LUM_BERRY); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(1); }
    } WHEN {
        TURN { MOVE(player, move); MOVE(opponent, MOVE_CELEBRATE, WITH_RNG(RNG_FROZEN, 0)); }
        TURN { MOVE(player, MOVE_CONFUSE_RAY); MOVE(opponent, MOVE_CELEBRATE, WITH_RNG(RNG_FROZEN, 0)); }
        TURN { MOVE(player, MOVE_BESTOW); MOVE(opponent, MOVE_CELEBRATE, WITH_RNG(RNG_FROZEN, 0)); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BESTOW, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        switch (move)
        {
        case MOVE_POISON_GAS:
            MESSAGE("The foe Wobbuffet's Lum Berry cured its poison! The foe Wobbuffet's Lum Berry snapped it out of its confusion!");
            break;
        case MOVE_SLEEP_POWDER:
            MESSAGE("The foe Wobbuffet's Lum Berry woke it up! The foe Wobbuffet's Lum Berry snapped it out of its confusion!");
            break;
        case MOVE_THUNDER_WAVE:
            MESSAGE("The foe Wobbuffet's Lum Berry cured its paralysis! The foe Wobbuffet's Lum Berry snapped it out of its confusion!");
            break;
        case MOVE_WILL_O_WISP:
            MESSAGE("The foe Wobbuffet's Lum Berry healed its burn! The foe Wobbuffet's Lum Berry snapped it out of its confusion!");
            break;
        case MOVE_POWDER_SNOW:
            MESSAGE("The foe Wobbuffet's Lum Berry defrosted it! The foe Wobbuffet's Lum Berry snapped it out of its confusion!");
            break;
        }
        NONE_OF { MESSAGE("The foe Wobbuffet's Lum Berry snapped it out of its confusion!"); }
    }
}