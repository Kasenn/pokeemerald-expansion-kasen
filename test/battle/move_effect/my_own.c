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

SINGLE_BATTLE_TEST("My own: Data Breach ignores target's defense and damage reductions when using normal-type moves 1")
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
SINGLE_BATTLE_TEST("My own: Data Breach ignores target's defense and damage reductions when using normal-type moves 2")
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
SINGLE_BATTLE_TEST("My own: Data Breach ignores target's defense and damage reductions when using normal-type moves 3")
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
SINGLE_BATTLE_TEST("My own: Data Breach ignores target's defense and damage reductions when using normal-type moves 4")
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

SINGLE_BATTLE_TEST("My own: Hive Leader activates properly on contact 1")
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
SINGLE_BATTLE_TEST("My own: Hive Leader activates properly on contact 2")
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
SINGLE_BATTLE_TEST("My own: Hive Leader activates properly on contact 3")
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
SINGLE_BATTLE_TEST("My own: Hive Leader activates properly on contact 4")
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
SINGLE_BATTLE_TEST("My own: Hive Leader does not activate if the target is wearing Protective Pads 1")
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
SINGLE_BATTLE_TEST("My own: Hive Leader does not activate if the target is wearing Protective Pads 2")
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
SINGLE_BATTLE_TEST("My own: Hive Leader reduces damage taken from Fire-type moves")
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

SINGLE_BATTLE_TEST("My own: Screens print the correct text")
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
        MESSAGE("Aurora Veil raised your team's Special Defense! Aurora Veil raised your team's Defense!");
        MESSAGE("Aurora Veil raised the opposing team's Special Defense! Aurora Veil raised the opposing team's Defense!");
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

SINGLE_BATTLE_TEST("My own: screen breakers print the correct text 1")
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

SINGLE_BATTLE_TEST("My own: screen breakers print the correct text 2")
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

SINGLE_BATTLE_TEST("My own: screen breakers print the correct text 3")
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

SINGLE_BATTLE_TEST("My own: Lum Berry prints the correct text 1")
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
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_BERRY, opponent);
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

SINGLE_BATTLE_TEST("My own: Lum Berry prints the correct text 2")
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
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_BERRY, opponent);
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

#define TEST_HP 1000

SINGLE_BATTLE_TEST("My own: Mega Exhaustion deals damage correctly 1")
{
    s16 damage[2];
    
    ASSUME(gSpeciesInfo[SPECIES_GENGAR_MEGA].baseSpAttack == 170);
    ASSUME(gSpeciesInfo[SPECIES_GENGAR_MEGA].baseSpDefense == 95);
    ASSUME(GetMovePower(MOVE_WATER_GUN) == 40);
    
    FlagSet(FLAG_OBTAINED_MEGA_RING);

    GIVEN {
        PLAYER(SPECIES_GENGAR)
        {
            MaxHP(TEST_HP);
            HP(TEST_HP);
            Item(ITEM_GENGARITE);
        }
        OPPONENT(SPECIES_LICKILICKY)
        {
            MaxHP(TEST_HP);
            HP(TEST_HP);
        }
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN, gimmick: GIMMICK_MEGA, WITH_RNG(RNG_DAMAGE_MODIFIER, 0)); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Gengar's Gengarite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Gengar has Mega Evolved into Mega Gengar!");
        HP_BAR(opponent, captureDamage: &damage[1]);
        MESSAGE("The strain caused by Mega Evolution is draining Gengar's stamina!");
        HP_BAR(player, captureDamage: &damage[0]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
    }
}

SINGLE_BATTLE_TEST("My own: Mega Exhaustion deals damage correctly 2")
{
    s16 damage[1];
    
    ASSUME(gSpeciesInfo[SPECIES_BEEDRILL_MEGA].baseAttack == 150);
    ASSUME(gSpeciesInfo[SPECIES_BEEDRILL_MEGA].baseDefense == 40);
    
    FlagSet(FLAG_OBTAINED_MEGA_RING);

    GIVEN {
        PLAYER(SPECIES_BEEDRILL)
        {
            MaxHP(120);
            HP(120);
            Item(ITEM_BEEDRILLITE);
        }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_MEGA); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Beedrill's Beedrillite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Beedrill has Mega Evolved into Mega Beedrill!");
        MESSAGE("The strain caused by Mega Evolution is draining Beedrill's stamina!");
        HP_BAR(player, captureDamage: &damage[0]);
    } THEN {
        EXPECT_EQ(damage[0], player->maxHP / 6);
    }
}

SINGLE_BATTLE_TEST("My own: Mega Exhaustion deals damage correctly 3")
{
    s16 damage[3];
    
    ASSUME(gSpeciesInfo[SPECIES_HERACROSS_MEGA].baseAttack == 185);
    ASSUME(gSpeciesInfo[SPECIES_HERACROSS_MEGA].baseDefense == 115);
    ASSUME(GetMovePower(MOVE_SCRATCH) == 40);
    
    FlagSet(FLAG_OBTAINED_MEGA_RING);

    GIVEN {
        PLAYER(SPECIES_HERACROSS)
        {
            MaxHP(500);
            HP(500);
            Item(ITEM_HERACRONITE);
        }
        OPPONENT(SPECIES_SUICUNE);
    } WHEN {
        TURN { MOVE(player, MOVE_SCRATCH, gimmick: GIMMICK_MEGA, WITH_RNG(RNG_DAMAGE_MODIFIER, 0)); MOVE(opponent, MOVE_CELEBRATE); }
        TURN { MOVE(player, MOVE_SWORDS_DANCE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Heracross's Heracronite is reacting to 1's Mega Ring!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, player);
        MESSAGE("Heracross has Mega Evolved into Mega Heracross!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        MESSAGE("The strain caused by Mega Evolution is draining Heracross's stamina!");
        HP_BAR(player, captureDamage: &damage[1]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWORDS_DANCE, player);
        MESSAGE("The strain caused by Mega Evolution is draining Heracross's stamina!");
        HP_BAR(player, captureDamage: &damage[2]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
        EXPECT_EQ(damage[2], player->maxHP / 6);
        EXPECT_GT(damage[2], damage[1]);
    }
}

SINGLE_BATTLE_TEST("My own: Forest's Curse only works for ghosts")
{
    ASSUME(GetMoveEffect(MOVE_FORESTS_CURSE) == EFFECT_FORESTS_CURSE);

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
            MESSAGE("Trevenant laid the forest's curse on the foe Wobbuffet!");
            HP_BAR(opponent);
        }
        else
        {
            MESSAGE("Wobbuffet used Forest's Curse!");
            NONE_OF {
                HP_BAR(player);
                MESSAGE("Wobbuffet laid the forest's curse on the foe Wobbuffet!");
                HP_BAR(opponent);    
            }
        }
    }
    THEN {
        EXPECT_EQ(opponent->types[2], TYPE_GRASS);
    }
}

SINGLE_BATTLE_TEST("My own: Forest's Curse will curse even if target is grass-type")
{
    ASSUME(GetMoveEffect(MOVE_FORESTS_CURSE) == EFFECT_FORESTS_CURSE);

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
        MESSAGE("Trevenant laid the forest's curse on the foe Oddish!");
        HP_BAR(opponent);
    }
    THEN {
        EXPECT_EQ(opponent->types[2], TYPE_MYSTERY);
    }
}

SINGLE_BATTLE_TEST("My own: Forest's Curse will set third type even if target is cursed")
{
    ASSUME(GetMoveEffect(MOVE_FORESTS_CURSE) == EFFECT_FORESTS_CURSE);

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
        MESSAGE("Trevenant cut its own HP and laid a curse on the foe Wobbuffet!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_FORESTS_CURSE, player);
        NONE_OF {
            s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
            HP_BAR(player, hp: maxHP / 3);
            MESSAGE("But it failed!");
        }
        MESSAGE("Trevenant laid the forest's curse on the foe Wobbuffet!");
    }
    THEN {
        EXPECT_EQ(opponent->types[2], TYPE_GRASS);
    }
}

SINGLE_BATTLE_TEST("My own: Training Bots do nothing but explode")
{    
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(20); Attack(300); Ability(ABILITY_SPEED_BOOST); }
        OPPONENT(SPECIES_EXPBOT) { Speed(25); }
        OPPONENT(SPECIES_EXPBOT) { Speed(25); }
        OPPONENT(SPECIES_EXPBOT) { Speed(25); }
        OPPONENT(SPECIES_EXPBOT) { Speed(25); }
    }
    WHEN {
        TURN { MOVE(player, MOVE_SCRATCH); MOVE(opponent, MOVE_IDLE_AROUND); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_SPIKES); MOVE(opponent, MOVE_IDLE_AROUND); }
        TURN { MOVE(player, MOVE_FALSE_SWIPE); MOVE(opponent, MOVE_IDLE_AROUND); SEND_OUT(opponent, 2); SEND_OUT(opponent, 3);} // 2 mons down here
    }
    SCENE {
        // Turn 1
        MESSAGE("The foe F-00 is struggling to keep itself together!");
        MESSAGE("Wobbuffet used Scratch!");
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_FICKLE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_EXPLODE, opponent);
            ABILITY_POPUP(opponent, ABILITY_FICKLE);
        }
        HP_BAR(opponent);
        // Turn 2
        MESSAGE("2 sent out F-00!");
        MESSAGE("Wobbuffet used Spikes!");
        NONE_OF { ABILITY_POPUP(opponent, ABILITY_FICKLE); }
        MESSAGE("The foe F-00 is struggling to keep itself together!");
        // Turn 3
        MESSAGE("Wobbuffet used False Swipe!");
        NOT MESSAGE("The foe F-00 is struggling to keep itself together!");
        ABILITY_POPUP(opponent, ABILITY_FICKLE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_EXPLODE, opponent);
        // Turn 4
        MESSAGE("2 sent out F-00!"); // 3rd Exp Bot
        NONE_OF {
            MESSAGE("Wobbuffet used Scratch!");
            MESSAGE("The foe F-00 is struggling to keep itself together!");
        }
        ABILITY_POPUP(opponent, ABILITY_FICKLE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_EXPLODE, opponent);
        // Turn 5
        MESSAGE("2 sent out F-00!"); // 4th Exp Bot
        NONE_OF {
            MESSAGE("Wobbuffet used Scratch!");
            MESSAGE("The foe F-00 is struggling to keep itself together!");
        }
        ABILITY_POPUP(opponent, ABILITY_FICKLE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_EXPLODE, opponent);

        MESSAGE("Player defeated {PKMN} Trainer 2!");
    }
}

SINGLE_BATTLE_TEST("My own: Roste Berry heals and induces sleep")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_STURDY); Item(ITEM_ROSTE_BERRY); Defense(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Attack(300); }
    }
    WHEN {
        TURN { MOVE(opponent, MOVE_FALSE_SWIPE); MOVE(player, MOVE_CELEBRATE); }
    }
    SCENE {
        HP_BAR(player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_BERRY, player);
        MESSAGE("Wobbuffet restored its health using its Roste Berry!");
        MESSAGE("Wobbuffet fell asleep!");
    }
    THEN {
        EXPECT_EQ(player->hp, player->maxHP);
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT(player->status1 & STATUS1_SLEEP);
    }
}

SINGLE_BATTLE_TEST("My own: Roste Berry heals, doesn't sleep 1")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_STURDY); Item(ITEM_ROSTE_BERRY); SpDefense(1); }
        OPPONENT(SPECIES_WOBBUFFET) { SpAttack(300); }
    }
    WHEN {
        TURN { MOVE(opponent, MOVE_UPROAR); MOVE(player, MOVE_CELEBRATE); }
    }
    SCENE {
        HP_BAR(player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_BERRY, player);
        MESSAGE("Wobbuffet restored its health using its Roste Berry!");
        NOT MESSAGE("Wobbuffet fell asleep!");
    }
    THEN {
        EXPECT_EQ(player->hp, player->maxHP);
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT(!(player->status1 & STATUS1_SLEEP));
    }
}

SINGLE_BATTLE_TEST("My own: Roste Berry heals, doesn't sleep 2")
{
    enum Ability ability;
    PARAMETRIZE(ability = ABILITY_COMATOSE);
    PARAMETRIZE(ability = ABILITY_INSOMNIA);

    GIVEN {
        PLAYER(SPECIES_KOMALA) { Ability(ability); Item(ITEM_ROSTE_BERRY); Defense(1); }
        OPPONENT(SPECIES_WOBBUFFET) { Attack(300); }
    }
    WHEN {
        TURN { MOVE(opponent, MOVE_FALSE_SWIPE); MOVE(player, MOVE_CELEBRATE); }
    }
    SCENE {
        HP_BAR(player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_BERRY, player);
        MESSAGE("Komala restored its health using its Roste Berry!");
        NOT MESSAGE("Komala fell asleep!");
    }
    THEN {
        EXPECT_EQ(player->hp, player->maxHP);
        EXPECT_EQ(player->item, ITEM_NONE);
        EXPECT(!(player->status1 & STATUS1_SLEEP));
    }
}

WILD_BATTLE_TEST("My own: Dire Ball guaranteed chance to capture on low health")
{
    u16 health;

    PARAMETRIZE(health = 41);
    PARAMETRIZE(health = 40);
    PARAMETRIZE(health = 39);

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET)
        {
            MaxHP(200);
            HP(health);
        }
    } WHEN {
        TURN { USE_ITEM(player, ITEM_DIRE_BALL, WITH_RNG(RNG_BALLTHROW_SHAKE, MAX_u16)); }
    } SCENE {
        if (health <= 40)
            MESSAGE("Gotcha! Wobbuffet was caught!{WAIT_SE}{PLAY_BGM MUS_CAUGHT}");
        else
            MESSAGE("Oh, no! The Pokémon broke free!");
    }
}