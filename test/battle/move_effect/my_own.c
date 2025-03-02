#include "global.h"
#include "test/battle.h"

// SINGLE_BATTLE_TEST("Flying-type gets speed boost during strong winds and hasten certain 2-turn moves")
// {
//     u32 species = 0;
//     u32 move = 0;
//     u32 j = 0;

//     static const u32 sMoves[][2] = {
//         {MOVE_SKY_ATTACK,    SPECIES_WOBBUFFET},
//         {MOVE_RAZOR_WIND,    SPECIES_WOBBUFFET},
//         {MOVE_BOUNCE,        SPECIES_WOBBUFFET},
//         {MOVE_FLY,           SPECIES_WOBBUFFET},
//         {MOVE_SKY_ATTACK,    SPECIES_DODUO},
//         {MOVE_RAZOR_WIND,    SPECIES_DODUO},
//         {MOVE_BOUNCE,        SPECIES_DODUO},
//         {MOVE_FLY,           SPECIES_DODUO},
//     };

//     for (j = 0; j < ARRAY_COUNT(sMoves); j++)
//     {
//         PARAMETRIZE {species = sMoves[j][1]; move = sMoves[j][0]; }
//     }
//     GIVEN {
//         PLAYER(SPECIES_WOBBUFFET) {MaxHP(1); HP(1); Speed(59); }
//         if (species == SPECIES_WOBBUFFET)
//             OPPONENT(species) {MaxHP(1); HP(1); Speed(30);}
//         else
//             OPPONENT(species) {MaxHP(1); HP(1); Speed(30); Ability(ABILITY_DELTA_STREAM);}
//     }
//     WHEN {
//         TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, move); }
//     }
//     SCENE {
//         if (species == SPECIES_WOBBUFFET)
//             HP_BAR(opponent);
//         else
//             HP_BAR(player);
//     }
// }