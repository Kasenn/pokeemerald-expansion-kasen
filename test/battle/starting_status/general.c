#include "global.h"
#include "event_data.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Electric Terrain")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_ELECTRIC_TERRAIN_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("An electric current runs across the battlefield!");
        MESSAGE("The electricity disappeared from the battlefield.");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Misty Terrain")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_MISTY_TERRAIN_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Mist swirls around the battlefield!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Grassy Terrain")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_GRASSY_TERRAIN_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The battlefield is covered with grass!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Psychic Terrain")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_PSYCHIC_TERRAIN_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The battlefield got weird!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Trick Room")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_TRICK_ROOM_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The dimensions were twisted!");
        MESSAGE("The twisted dimensions returned to normal!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Magic Room")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_MAGIC_ROOM_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("A bizarre area was created! Hold items lost their effects!");
        MESSAGE("Magic Room wore off, and held items' effects returned to normal!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Wonder Room")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_WONDER_ROOM_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("A bizarre area was created in which the Defense and Sp. Def stats are swapped!");
        MESSAGE("Wonder Room wore off, and the Defense and Sp. Def stats returned to normal!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Tailwind (Opponent)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_TAILWIND_OPPONENT_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The tailwind blew from behind the foe's team!");
        MESSAGE("The foe's team's Tailwind petered out!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Rainbow (Opponent)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_RAINBOW_OPPONENT_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("A rainbow appeared in the sky on the foe's team's side!");
        MESSAGE("The rainbow on the foe's side disappeared!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Sea of Fire (Opponent)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_SEA_OF_FIRE_OPPONENT_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("A sea of fire enveloped the foe's team!");
        MESSAGE("The foe Wobbuffet is hurt by the sea of fire!");
        MESSAGE("The sea of fire around the foe's team disappeared!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Swamp (Opponent)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_SWAMP_OPPONENT_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("A swamp enveloped the foe's team!");
        MESSAGE("The swamp around the foe's team disappeared!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Spikes (Opponent, L3)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_SPIKES_OPPONENT_L3);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_DEFOG); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Spikes were scattered all around the feet of the foe's team!");
        MESSAGE("The foe Wobbuffet is hurt by spikes!");
        MESSAGE("The spikes disappeared from around the foe's team's feet!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Toxic Spikes (Opponent, L2)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_TOXIC_SPIKES_OPPONENT_L2);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_DEFOG); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Poison spikes were scattered all around the feet of the foe's team!");
        MESSAGE("The foe Wobbuffet is badly poisoned!");
        MESSAGE("The poison spikes disappeared from around the foe's team's feet!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Sticky Web (Opponent)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_STICKY_WEB_OPPONENT);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_DEFOG); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("A sticky web spreads out all around the feet of the foe's team!");
        MESSAGE("The foe Wobbuffet was caught in a Sticky Web!");
        MESSAGE("The sticky web disappeared from around the foe's team's feet!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Stealth Rock (Opponent)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_STEALTH_ROCK_OPPONENT);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_DEFOG); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Pointed stones float in the air around your foe's team!");
        MESSAGE("Pointed stones dug into the foe Wobbuffet!");
        MESSAGE("The pointed stones disappeared from around your foe's team!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Sharp Steel (Opponent)")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_SHARP_STEEL_OPPONENT);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_DEFOG); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Sharp-pointed steel floats in the air around the opposing team!");
        MESSAGE("Sharp steel bit into the foe Wobbuffet!");
        MESSAGE("The sharp steel disappeared from around the opposing team!");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Weather: Sun")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_WEATHER_SUN_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("The sunlight turned harsh!");
        MESSAGE("The sunlight is strong.");
        MESSAGE("The sunlight faded.");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Weather: Rain")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_WEATHER_RAIN_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("It started to rain!");
        MESSAGE("Rain continues to fall.");
        MESSAGE("The rain stopped.");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Weather: Sandstorm")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_WEATHER_SANDSTORM_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("A sandstorm kicked up!");
        MESSAGE("The sandstorm rages.");
        MESSAGE("The sandstorm subsided.");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Weather: Hail")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_WEATHER_HAIL_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("It started to hail!");
        MESSAGE("Hail continues to fall.");
        MESSAGE("The hail stopped.");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Weather: Snow")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_WEATHER_SNOW_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("It started to snow!");
        MESSAGE("Snow continues to fall.");
        MESSAGE("The snow stopped.");
    } THEN {
        ResetStartingStatuses();
    }
}

SINGLE_BATTLE_TEST("SetStartingStatus messages work as intended - Weather: Fog")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_DEFOG) == EFFECT_DEFOG);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        SetStartingStatus(STARTING_STATUS_WEATHER_FOG_TEMPORARY);
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_CELEBRATE); }
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Fog crept up as thick as soup!");
        MESSAGE("The fog is deep…");
        MESSAGE("The fog lifted.");
    } THEN {
        ResetStartingStatuses();
    }
}
