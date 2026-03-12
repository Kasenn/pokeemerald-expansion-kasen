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

SINGLE_BATTLE_TEST("Custom - (Z-MOVE) Genesis Supernova sets up psychic terrain when the target is behind a Substitute")
{
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_GENESIS_SUPERNOVA, MOVE_EFFECT_PSYCHIC_TERRAIN));
        PLAYER(SPECIES_MEW) { Item(ITEM_MEWNIUM_Z); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_PSYCHIC, gimmick: GIMMICK_Z_MOVE); }
        TURN { MOVE(player, MOVE_QUICK_ATTACK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GENESIS_SUPERNOVA, player);
        SUB_HIT(opponent);
        NOT { ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player); }
        MESSAGE("The foe Wobbuffet is protected by the Psychic Terrain!");
    }
}

SINGLE_BATTLE_TEST("Custom - (Z-MOVE) Splintered Stormshards removes terrain when the target is behind a Substitute")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_SPLINTERED_STORMSHARDS) == EFFECT_ICE_SPINNER);
        PLAYER(SPECIES_LYCANROC_DUSK) { Item(ITEM_LYCANIUM_Z); }
        OPPONENT(SPECIES_TAPU_LELE) { Ability(ABILITY_PSYCHIC_SURGE); HP(1000); MaxHP(1000); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_STONE_EDGE, gimmick: GIMMICK_Z_MOVE); }
        TURN { MOVE(player, MOVE_QUICK_ATTACK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ZMOVE_ACTIVATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLINTERED_STORMSHARDS, player);
        SUB_HIT(opponent);
        MESSAGE("The weirdness disappeared from the battlefield.");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
    }
}

SINGLE_BATTLE_TEST("Custom - Absorb recovers 50% of the damage dealt to a Substitute")
{
    u16 damage;
    s16 healing;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_ABSORB); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ABSORB, opponent);
        SUB_HIT(player, captureDamage: &damage);
        HP_BAR(opponent, captureDamage: &healing);
    } THEN {
        EXPECT_MUL_EQ(damage, Q_4_12(-0.5), healing);
    }
}

SINGLE_BATTLE_TEST("Custom - Ceaseless Edge will set up rocks if the target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_CEASELESS_EDGE); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CEASELESS_EDGE, opponent);
        SUB_HIT(player);
        HP_BAR(player);
    }
}


SINGLE_BATTLE_TEST("Custom - Chloroblast has recoil if the target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { HP(400); MaxHP(400); }
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_CHLOROBLAST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHLOROBLAST, opponent);
        SUB_HIT(player);
        HP_BAR(opponent, damage: 200);
    }
}

SINGLE_BATTLE_TEST("Custom - Core Enforcer suppresses the ability of targets that have already acted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WEEZING) { Ability(ABILITY_LEVITATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_CORE_ENFORCER); }
        TURN { MOVE(player, MOVE_EARTHQUAKE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CORE_ENFORCER, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Custom - Core Enforcer doesn't suppresses the ability of targets that haven't acted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WEEZING) { Ability(ABILITY_LEVITATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_CORE_ENFORCER); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_EARTHQUAKE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CORE_ENFORCER, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, player);
            HP_BAR(opponent);
        }
    }
}

SINGLE_BATTLE_TEST("Custom - Core Enforcer suppresses the ability of targets that have already acted that are behind Substitutes")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WEEZING) { Ability(ABILITY_LEVITATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_CORE_ENFORCER); }
        TURN { MOVE(player, MOVE_EARTHQUAKE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CORE_ENFORCER, player);
        SUB_HIT(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, player);
        SUB_HIT(opponent);
    }
}

SINGLE_BATTLE_TEST("Custom - Hit Escape: U-turn will switch if the target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_U_TURN); SEND_OUT(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, opponent);
    }
}

SINGLE_BATTLE_TEST("Custom - Ice Spinner will remove terrain if target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_GRASSY_TERRAIN); }
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_ICE_SPINNER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GRASSY_TERRAIN, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ICE_SPINNER, opponent);
        SUB_HIT(player);
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Custom - Steel Beam inflicts recoil if it hits a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(400); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_STEEL_BEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_BEAM, player);
        SUB_HIT(opponent);
        HP_BAR(player, damage: 200);
    }
}

SINGLE_BATTLE_TEST("Custom - Rapid Spin and Mortal Spin will remove hazards if the target is behind a Substitute")
{
    u32 move;

    PARAMETRIZE { move = MOVE_RAPID_SPIN; }
    PARAMETRIZE { move = MOVE_MORTAL_SPIN; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_STEALTH_ROCK); }
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, move); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEALTH_ROCK, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        SUB_HIT(player);
        NOT HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Custom - Steel Roller will remove terrain if target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_GRASSY_TERRAIN); }
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_STEEL_ROLLER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GRASSY_TERRAIN, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STEEL_ROLLER, opponent);
        NOT HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Custom - Stone Axe will set up rocks if the target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_STONE_AXE); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, opponent);
        SUB_HIT(player);
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Custom - Brick Break and Psychic Fangs can remove screens when the target is behind a Substitute")
{
    u32 move;

    PARAMETRIZE { move = MOVE_BRICK_BREAK; }
    PARAMETRIZE { move = MOVE_PSYCHIC_FANGS; }

    GIVEN {

        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_REFLECT); }
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REFLECT, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        MESSAGE("Your team's Reflect wore off!");
        SUB_HIT(player);
    }
}

SINGLE_BATTLE_TEST("Custom - Plasma Fists turns normal moves into electric moves even if it hits a substitute")
{
    GIVEN {
        PLAYER(SPECIES_JOLTEON) { Ability(ABILITY_VOLT_ABSORB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); }
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        SUB_HIT(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Custom - Recoil: Hitting substitutes inflicts recoil")
{
    u16 damage;
    s16 recoil;
    GIVEN {
        ASSUME(GetMoveRecoil(MOVE_TAKE_DOWN) == 25);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_TAKE_DOWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TAKE_DOWN, opponent);
        SUB_HIT(player, captureDamage: &damage);
        HP_BAR(opponent, captureDamage: &recoil);
    } THEN {
        EXPECT_MUL_EQ(damage, Q_4_12(0.25), recoil);
    }
}