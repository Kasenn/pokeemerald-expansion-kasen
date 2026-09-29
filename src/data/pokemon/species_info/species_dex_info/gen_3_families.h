#ifdef __INTELLISENSE__
const struct SpeciesDexInfo gSpeciesDexInfoGen3[] =
{
#endif

#if P_FAMILY_TREECKO
    [SPECIES_TREECKO] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Treecko"),
        .cryId = CRY_TREECKO,
        .natDexNum = NATIONAL_DEX_TREECKO,
        .categoryName = _("Wood Gecko"),
        .height = 5,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It makes its nest in a giant tree in the\n"
            "forest. It ferociously guards against\n"
            "anything nearing its territory. It is said\n"
            "to be the protector of the forest's trees."),
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GROVYLE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grovyle"),
        .cryId = CRY_GROVYLE,
        .natDexNum = NATIONAL_DEX_GROVYLE,
        .categoryName = _("Wood Gecko"),
        .height = 9,
        .weight = 216,
        .description = COMPOUND_STRING(
            "Leaves grow out of this Pokémon's body.\n"
            "They help obscure a Grovyle from the eyes\n"
            "of its enemies while it is in a thickly\n"
            "overgrown forest."),
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SCEPTILE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sceptile"),
        .cryId = CRY_SCEPTILE,
        .natDexNum = NATIONAL_DEX_SCEPTILE,
        .categoryName = _("Forest"),
        .height = 17,
        .weight = 522,
        .description = COMPOUND_STRING(
            "In the jungle, its power is without equal.\n"
            "This Pokémon carefully grows trees and\n"
            "plants. It regulates its body temperature\n"
            "by basking in sunlight."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SCEPTILE_MEGA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sceptile"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_SCEPTILE_MEGA,
    #else
        .cryId = CRY_SCEPTILE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_SCEPTILE,
        .categoryName = _("Forest"),
        .height = 19,
        .weight = 552,
        .description = COMPOUND_STRING(
            "Thanks to the power in its quick legs,\n"
            "Mega Sceptile can be on its opponent in a\n"
            "flash. It can cut off a portion of its tail\n"
            "to fire it like a missile at an opponent."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TREECKO

#if P_FAMILY_TORCHIC
    [SPECIES_TORCHIC] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Torchic"),
        .cryId = CRY_TORCHIC,
        .natDexNum = NATIONAL_DEX_TORCHIC,
        .categoryName = _("Chick"),
        .height = 4,
        .weight = 25,
        .description = COMPOUND_STRING(
            "If attacked, it strikes back by spitting\n"
            "balls of fire it forms in its stomach.\n"
            "A Torchic dislikes darkness because it\n"
            "can't see its surroundings."),
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_COMBUSKEN] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Combusken"),
        .cryId = CRY_COMBUSKEN,
        .natDexNum = NATIONAL_DEX_COMBUSKEN,
        .categoryName = _("Young Fowl"),
        .height = 9,
        .weight = 195,
        .description = COMPOUND_STRING(
            "It lashes out with 10 kicks per second.\n"
            "Its strong fighting instinct compels it\n"
            "to keep up its offensive until the\n"
            "opponent gives up."),
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BLAZIKEN] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Blaziken"),
        .cryId = CRY_BLAZIKEN,
        .natDexNum = NATIONAL_DEX_BLAZIKEN,
        .categoryName = _("Blaze"),
        .height = 19,
        .weight = 520,
        .description = COMPOUND_STRING(
            "It learns martial arts that use punches\n"
            "and kicks. Every several years, its old\n"
            "feathers burn off, and new, supple\n"
            "feathers grow back in their place."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLAZIKEN_MEGA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Blaziken"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_BLAZIKEN_MEGA,
    #else
        .cryId = CRY_BLAZIKEN,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_BLAZIKEN,
        .categoryName = _("Blaze"),
        .height = 19,
        .weight = 520,
        .description = COMPOUND_STRING(
            "As it unleashes a flurry of savage kicks,\n"
            "its legs can begin to burn from the\n"
            "friction of the surrounding atmosphere.\n"
            "They're always a source of pride to it."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_TORCHIC

#if P_FAMILY_MUDKIP
    [SPECIES_MUDKIP] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Mudkip"),
        .cryId = CRY_MUDKIP,
        .natDexNum = NATIONAL_DEX_MUDKIP,
        .categoryName = _("Mud Fish"),
        .height = 4,
        .weight = 76,
        .description = COMPOUND_STRING(
            "On land, it can powerfully lift large\n"
            "boulders by planting its four feet and\n"
            "heaving. It sleeps by burying itself in soil\n"
            "at the water's edge."),
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MARSHTOMP] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Marshtomp"),
        .cryId = CRY_MARSHTOMP,
        .natDexNum = NATIONAL_DEX_MARSHTOMP,
        .categoryName = _("Mud Fish"),
        .height = 7,
        .weight = 280,
        .description = COMPOUND_STRING(
            "Its toughened hind legs enable it to stand\n"
            "upright. Because it weakens if its skin\n"
            "dries out, it replenishes fluids by playing\n"
            "in mud."),
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SWAMPERT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swampert"),
        .cryId = CRY_SWAMPERT,
        .natDexNum = NATIONAL_DEX_SWAMPERT,
        .categoryName = _("Mud Fish"),
        .height = 15,
        .weight = 819,
        .description = COMPOUND_STRING(
            "If it senses the approach of a storm and\n"
            "a tidal wave, it protects its seaside nest\n"
            "by piling up boulders. It swims as fast as\n"
            "a jet ski."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SWAMPERT_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swampert"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_SWAMPERT_MEGA,
    #else
        .cryId = CRY_SWAMPERT,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_SWAMPERT,
        .categoryName = _("Mud Fish"),
        .height = 19,
        .weight = 1020,
        .description = COMPOUND_STRING(
            "When it Mega Evolves, the strength that it\n"
            "needs to act in the water is increased.\n"
            "It can use its tenacious power\n"
            "both on land and in the water."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MUDKIP

#if P_FAMILY_POOCHYENA
    [SPECIES_POOCHYENA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Poochyena"),
        .cryId = CRY_POOCHYENA,
        .natDexNum = NATIONAL_DEX_POOCHYENA,
        .categoryName = _("Bite"),
        .height = 5,
        .weight = 136,
        .description = COMPOUND_STRING(
            "It savagely threatens foes with bared\n"
            "fangs. It chases after fleeing targets\n"
            "tenaciously. It turns tail and runs,\n"
            "however, if the foe strikes back."),
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MIGHTYENA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Mightyena"),
        .cryId = CRY_MIGHTYENA,
        .natDexNum = NATIONAL_DEX_MIGHTYENA,
        .categoryName = _("Bite"),
        .height = 10,
        .weight = 370,
        .description = COMPOUND_STRING(
            "In the wild, Mightyena live in a pack.\n"
            "They never defy their leader's orders.\n"
            "They defeat foes with perfectly\n"
            "coordinated teamwork."),
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_POOCHYENA

#if P_FAMILY_ZIGZAGOON
    [SPECIES_ZIGZAGOON] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Zigzagoon"),
        .cryId = CRY_ZIGZAGOON,
        .natDexNum = NATIONAL_DEX_ZIGZAGOON,
        .categoryName = _("Tiny Raccoon"),
        .height = 4,
        .weight = 175,
        .description = COMPOUND_STRING(
            "Rubbing its nose against the ground, it\n"
            "always wanders about back and forth in\n"
            "search of something. It is distinguished\n"
            "by the zigzag footprints it leaves."),
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LINOONE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Linoone"),
        .cryId = CRY_LINOONE,
        .natDexNum = NATIONAL_DEX_LINOONE,
        .categoryName = _("Rushing"),
        .height = 5,
        .weight = 325,
        .description = COMPOUND_STRING(
            "It is exceedingly fast if it only has to run\n"
            "in a straight line. When it spots pond-\n"
            "dwelling prey underwater, it quickly leaps\n"
            "in and catches it with its sharp claws."),
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZIGZAGOON_GALAR] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Zigzagoon"),
        .cryId = CRY_ZIGZAGOON,
        .natDexNum = NATIONAL_DEX_ZIGZAGOON,
        .categoryName = _("Tiny Raccoon"),
        .height = 4,
        .weight = 175,
        .description = COMPOUND_STRING(
            "Its restlessness has it constantly moving\n"
            "in zigzags. It will purposely run into other\n"
            "Pokémon to start fights. It's thought to\n"
            "be the oldest form of Zigzagoon."),
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LINOONE_GALAR] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Linoone"),
        .cryId = CRY_LINOONE,
        .natDexNum = NATIONAL_DEX_LINOONE,
        .categoryName = _("Rushing"),
        .height = 5,
        .weight = 325,
        .description = COMPOUND_STRING(
            "This very aggressive Pokémon will\n"
            "recklessly challenge opponents stronger\n"
            "than itself. It uses its long tongue to\n"
            "taunt them to then tackle forcefully."),
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_OBSTAGOON] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Obstagoon"),
        .cryId = CRY_OBSTAGOON,
        .natDexNum = NATIONAL_DEX_OBSTAGOON,
        .categoryName = _("Blocking"),
        .height = 16,
        .weight = 460,
        .description = COMPOUND_STRING(
            "Its voice is staggering in volume.\n"
            "Obstagoon has a tendency to take on a\n"
            "threatening posture and shout--this move\n"
            "is known as Obstruct."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZIGZAGOON

#if P_FAMILY_WURMPLE
    [SPECIES_WURMPLE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Wurmple"),
        .cryId = CRY_WURMPLE,
        .natDexNum = NATIONAL_DEX_WURMPLE,
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 36,
        .description = COMPOUND_STRING(
            "It sticks to tree branches and eats\n"
            "leaves. The thread it spits from its mouth,\n"
            "which becomes gooey when it touches\n"
            "air, slows the movement of its foes."),
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SILCOON] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Silcoon"),
        .cryId = CRY_SILCOON,
        .natDexNum = NATIONAL_DEX_SILCOON,
        .categoryName = _("Cocoon"),
        .height = 6,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It prepares for evolution using the\n"
            "energy it stored while it was a Wurmple.\n"
            "It keeps watch over the surroundings with\n"
            "its two eyes."),
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BEAUTIFLY] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Beautifly"),
        .cryId = CRY_BEAUTIFLY,
        .natDexNum = NATIONAL_DEX_BEAUTIFLY,
        .categoryName = _("Butterfly"),
        .height = 10,
        .weight = 284,
        .description = COMPOUND_STRING(
            "Its colorfully patterned wings are its\n"
            "most prominent feature. It flies through\n"
            "flower-covered fields collecting pollen.\n"
            "It attacks ferociously when angered."),
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CASCOON] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Cascoon"),
        .cryId = CRY_CASCOON,
        .natDexNum = NATIONAL_DEX_CASCOON,
        .categoryName = _("Cocoon"),
        .height = 7,
        .weight = 115,
        .description = COMPOUND_STRING(
            "To avoid detection by its enemies, it hides\n"
            "motionlessly beneath large leaves and in\n"
            "the gaps of branches. It also attaches\n"
            "dead leaves to its body for camouflage."),
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DUSTOX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dustox"),
        .cryId = CRY_DUSTOX,
        .natDexNum = NATIONAL_DEX_DUSTOX,
        .categoryName = _("Poison Moth"),
        .height = 12,
        .weight = 316,
        .description = COMPOUND_STRING(
            "It is a nocturnal Pokémon that flies from\n"
            "fields and mountains to the attraction of\n"
            "streetlights at night. It looses highly\n"
            "toxic powder from its wings."),
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_WURMPLE

#if P_FAMILY_LOTAD
    [SPECIES_LOTAD] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Lotad"),
        .cryId = CRY_LOTAD,
        .natDexNum = NATIONAL_DEX_LOTAD,
        .categoryName = _("Water Weed"),
        .height = 5,
        .weight = 26,
        .description = COMPOUND_STRING(
            "This Pokémon lives in ponds with clean\n"
            "water. It is known to ferry small Pokémon\n"
            "across ponds by carrying them on the\n"
            "broad leaf on its head."),
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LOMBRE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Lombre"),
        .cryId = CRY_LOMBRE,
        .natDexNum = NATIONAL_DEX_LOMBRE,
        .categoryName = _("Jolly"),
        .height = 12,
        .weight = 325,
        .description = COMPOUND_STRING(
            "In the evening, it takes great delight in\n"
            "popping out of rivers and startling people.\n"
            "It feeds on aquatic moss that grows on\n"
            "rocks in the riverbed."),
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LUDICOLO] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Ludicolo"),
        .cryId = CRY_LUDICOLO,
        .natDexNum = NATIONAL_DEX_LUDICOLO,
        .categoryName = _("Carefree"),
        .height = 15,
        .weight = 550,
        .description = COMPOUND_STRING(
            "When it hears festive music, all the cells\n"
            "in its body become stimulated, and it\n"
            "begins moving in rhythm. It does not\n"
            "quail even when it faces a tough opponent."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },
#endif //P_FAMILY_LOTAD

#if P_FAMILY_SEEDOT
    [SPECIES_SEEDOT] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Seedot"),
        .cryId = CRY_SEEDOT,
        .natDexNum = NATIONAL_DEX_SEEDOT,
        .categoryName = _("Acorn"),
        .height = 5,
        .weight = 40,
        .description = COMPOUND_STRING(
            "It hangs off branches and absorbs\n"
            "nutrients. When it finishes eating, its\n"
            "body becomes so heavy that it drops to\n"
            "the ground with a thump."),
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_NUZLEAF] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Nuzleaf"),
        .cryId = CRY_NUZLEAF,
        .natDexNum = NATIONAL_DEX_NUZLEAF,
        .categoryName = _("Wily"),
        .height = 10,
        .weight = 280,
        .description = COMPOUND_STRING(
            "A forest-dwelling Pokémon that is skilled\n"
            "at climbing trees. Its long and pointed\n"
            "nose is its weak point. It loses power if\n"
            "the nose is gripped."),
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SHIFTRY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Shiftry"),
        .cryId = CRY_SHIFTRY,
        .natDexNum = NATIONAL_DEX_SHIFTRY,
        .categoryName = _("Wicked"),
        .height = 13,
        .weight = 596,
        .description = COMPOUND_STRING(
            "It is said to arrive on chilly, wintry winds.\n"
            "Feared from long ago as the guardian of\n"
            "forests, this Pokémon lives in a deep\n"
            "forest where people do not venture."),
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SEEDOT

#if P_FAMILY_TAILLOW
    [SPECIES_TAILLOW] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Taillow"),
        .cryId = CRY_TAILLOW,
        .natDexNum = NATIONAL_DEX_TAILLOW,
        .categoryName = _("Tiny Swallow"),
        .height = 3,
        .weight = 23,
        .description = COMPOUND_STRING(
            "Although it is small, it is very courageous.\n"
            "It will take on a larger Skarmory on an\n"
            "equal footing. However, its will weakens if\n"
            "it becomes hungry."),
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SWELLOW] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swellow"),
        .cryId = CRY_SWELLOW,
        .natDexNum = NATIONAL_DEX_SWELLOW,
        .categoryName = _("Swallow"),
        .height = 7,
        .weight = 198,
        .description = COMPOUND_STRING(
            "A Swellow dives upon prey from far above.\n"
            "It never misses its targets. It takes to\n"
            "the skies in search of lands with a warm\n"
            "climate."),
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TAILLOW

#if P_FAMILY_WINGULL
    [SPECIES_WINGULL] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Wingull"),
        .cryId = CRY_WINGULL,
        .natDexNum = NATIONAL_DEX_WINGULL,
        .categoryName = _("Seagull"),
        .height = 6,
        .weight = 95,
        .description = COMPOUND_STRING(
            "It makes its nest on a sheer cliff at the\n"
            "edge of the sea. It has trouble keeping\n"
            "its wings flapping in flight. Instead, it\n"
            "soars on updrafts."),
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PELIPPER] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pelipper"),
        .cryId = CRY_PELIPPER,
        .natDexNum = NATIONAL_DEX_PELIPPER,
        .categoryName = _("Water Bird"),
        .height = 12,
        .weight = 280,
        .description = COMPOUND_STRING(
            "It skims the tops of waves as it flies.\n"
            "When it spots prey, it uses its large beak\n"
            "to scoop up the victim with water.\n"
            "It protects its eggs in its beak."),
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_WINGULL

#if P_FAMILY_RALTS
    [SPECIES_RALTS] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Ralts"),
        .cryId = CRY_RALTS,
        .natDexNum = NATIONAL_DEX_RALTS,
        .categoryName = _("Feeling"),
        .height = 4,
        .weight = 66,
        .description = COMPOUND_STRING(
            "A Ralts has the power to sense the\n"
            "emotions of people and Pokémon with the\n"
            "horns on its head. It takes cover if it\n"
            "senses any hostility."),
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_KIRLIA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kirlia"),
        .cryId = CRY_KIRLIA,
        .natDexNum = NATIONAL_DEX_KIRLIA,
        .categoryName = _("Emotion"),
        .height = 8,
        .weight = 202,
        .description = COMPOUND_STRING(
            "A Kirlia has the psychic power to create \n"
            "a rip in the dimensions and see into the\n"
            "future. It is said to dance with pleasure\n"
            "on sunny mornings."),
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GARDEVOIR] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gardevoir"),
        .cryId = CRY_GARDEVOIR,
        .natDexNum = NATIONAL_DEX_GARDEVOIR,
        .categoryName = _("Embrace"),
        .height = 16,
        .weight = 484,
        .description = COMPOUND_STRING(
            "It apparently does not feel the pull of\n"
            "gravity because it supports itself with\n"
            "psychic power. It will give its life to\n"
            "protect its Trainer."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARDEVOIR_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gardevoir"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GARDEVOIR_MEGA,
    #else
        .cryId = CRY_GARDEVOIR,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GARDEVOIR,
        .categoryName = _("Embrace"),
        .height = 16,
        .weight = 484,
        .description = COMPOUND_STRING(
            "By opening its heart, Mega Gardevoir\n"
            "becomes able to use tremendous psychic\n"
            "power. The red plate in its chest is said to\n"
            "be a physical manifestation of its heart."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_GALLADE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gallade"),
        .cryId = CRY_GALLADE,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 520,
        .description = COMPOUND_STRING(
            "A master of courtesy and swordsmanship,\n"
            "it fights using extending swords on its\n"
            "elbows when trying to protect someone.\n"
            "It can sense what its foe is thinking."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GALLADE_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gallade"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GALLADE_MEGA,
    #else
        .cryId = CRY_GALLADE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 564,
        .description = COMPOUND_STRING(
            "Mega Gallade has a knightly appearance.\n"
            "It can use its psychic power to reshape\n"
            "both arms into blades simultaneously and\n"
            "fight using a dual-wielding style."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS

#if P_FAMILY_SURSKIT
    [SPECIES_SURSKIT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Surskit"),
        .cryId = CRY_SURSKIT,
        .natDexNum = NATIONAL_DEX_SURSKIT,
        .categoryName = _("Pond Skater"),
        .height = 5,
        .weight = 17,
        .description = COMPOUND_STRING(
            "They gather on puddles after evening\n"
            "downpours, gliding across the surface\n"
            "of water as if sliding. It secretes honey\n"
            "with a sweet aroma from its head."),
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MASQUERAIN] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Masquerain"),
        .cryId = CRY_MASQUERAIN,
        .natDexNum = NATIONAL_DEX_MASQUERAIN,
        .categoryName = _("Eyeball"),
        .height = 8,
        .weight = 36,
        .description = COMPOUND_STRING(
            "It intimidates foes with the large eyelike\n"
            "patterns on its antennae. Because it can't\n"
            "fly if its wings get wet, it shelters itself\n"
            "from rain under large trees and eaves."),
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SURSKIT

#if P_FAMILY_SHROOMISH
    [SPECIES_SHROOMISH] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Shroomish"),
        .cryId = CRY_SHROOMISH,
        .natDexNum = NATIONAL_DEX_SHROOMISH,
        .categoryName = _("Mushroom"),
        .height = 4,
        .weight = 45,
        .description = COMPOUND_STRING(
            "It loves to eat damp, composted soil in\n"
            "forests. If you enter a forest after a\n"
            "long rain, you can see many Shroomish\n"
            "feasting on composted soil."),
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BRELOOM] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Breloom"),
        .cryId = CRY_BRELOOM,
        .natDexNum = NATIONAL_DEX_BRELOOM,
        .categoryName = _("Mushroom"),
        .height = 12,
        .weight = 392,
        .description = COMPOUND_STRING(
            "It scatters spores from holes in the cap\n"
            "on its head. It loves warm and humid\n"
            "climates. It feeds on trees and plants in\n"
            "fields and forests."),
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SHROOMISH

#if P_FAMILY_SLAKOTH
    [SPECIES_SLAKOTH] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Slakoth"),
        .cryId = CRY_SLAKOTH,
        .natDexNum = NATIONAL_DEX_SLAKOTH,
        .categoryName = _("Slacker"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING(
            "It sleeps virtually all day and night long.\n"
            "It doesn't change its nest its entire life,\n"
            "but it sometimes travels great distances\n"
            "by swimming in rivers."),
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_VIGOROTH] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vigoroth"),
        .cryId = CRY_VIGOROTH,
        .natDexNum = NATIONAL_DEX_VIGOROTH,
        .categoryName = _("Wild Monkey"),
        .height = 14,
        .weight = 465,
        .description = COMPOUND_STRING(
            "It can't keep still because its blood boils\n"
            "with energy. It runs through the fields\n"
            "and mountains all day to calm itself. If it\n"
            "doesn't, it can't sleep at night."),
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SLAKING] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Slaking"),
        .cryId = CRY_SLAKING,
        .natDexNum = NATIONAL_DEX_SLAKING,
        .categoryName = _("Lazy"),
        .height = 20,
        .weight = 1305,
        .description = COMPOUND_STRING(
            "Hordes of Slaking gather around trees\n"
            "when fruits come into season. They wait\n"
            "around patiently for ripened fruits to fall\n"
            "out of the trees."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_SLAKOTH

#if P_FAMILY_NINCADA
    [SPECIES_NINCADA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Nincada"),
        .cryId = CRY_NINCADA,
        .natDexNum = NATIONAL_DEX_NINCADA,
        .categoryName = _("Trainee"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING(
            "It makes its nest at the roots of a mighty\n"
            "tree. Using its whiskerlike antennae, it\n"
            "probes its surroundings in the\n"
            "pitch-black darkness of soil."),
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_NINJASK] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ninjask"),
        .cryId = CRY_NINJASK,
        .natDexNum = NATIONAL_DEX_NINJASK,
        .categoryName = _("Ninja"),
        .height = 8,
        .weight = 120,
        .description = COMPOUND_STRING(
            "Because it darts about vigorously at high\n"
            "speed, it is very difficult to see. Hearing\n"
            "its distinctive cries for too long induces\n"
            "a headache."),
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SHEDINJA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Shedinja"),
        .cryId = CRY_SHEDINJA,
        .natDexNum = NATIONAL_DEX_SHEDINJA,
        .categoryName = _("Shed"),
        .height = 8,
        .weight = 12,
        .description = COMPOUND_STRING(
            "A peculiar Pokémon that floats in air even\n"
            "though its wings remain completely still.\n"
            "The inside of its body is hollow and\n"
            "utterly dark."),
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_NINCADA

#if P_FAMILY_WHISMUR
    [SPECIES_WHISMUR] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Whismur"),
        .cryId = CRY_WHISMUR,
        .natDexNum = NATIONAL_DEX_WHISMUR,
        .categoryName = _("Whisper"),
        .height = 6,
        .weight = 163,
        .description = COMPOUND_STRING(
            "Its cries equal a jet plane in volume.\n"
            "It inhales through its ear canals. Because\n"
            "of this system, it can cry continually\n"
            "without having to catch its breath."),
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LOUDRED] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Loudred"),
        .cryId = CRY_LOUDRED,
        .natDexNum = NATIONAL_DEX_LOUDRED,
        .categoryName = _("Big Voice"),
        .height = 10,
        .weight = 405,
        .description = COMPOUND_STRING(
            "It positions the round speakers on its\n"
            "head to assail foes with ultrasonic waves\n"
            "at massive volume. It builds power by\n"
            "stomping the ground."),
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_EXPLOUD] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Exploud"),
        .cryId = CRY_EXPLOUD,
        .natDexNum = NATIONAL_DEX_EXPLOUD,
        .categoryName = _("Loud Noise"),
        .height = 15,
        .weight = 840,
        .description = COMPOUND_STRING(
            "It has sound-generating organs all over\n"
            "its body. It communicates with others by\n"
            "adjusting the tone and volume of the cries\n"
            "it emits."),
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_WHISMUR

#if P_FAMILY_MAKUHITA
    [SPECIES_MAKUHITA] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Makuhita"),
        .cryId = CRY_MAKUHITA,
        .natDexNum = NATIONAL_DEX_MAKUHITA,
        .categoryName = _("Guts"),
        .height = 10,
        .weight = 864,
        .description = COMPOUND_STRING(
            "It loves to toughen up its body above all\n"
            "else. If you hear quaking rumbles in a cave,\n"
            "it is the sound of Makuhita undertaking\n"
            "strenuous training."),
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HARIYAMA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hariyama"),
        .cryId = CRY_HARIYAMA,
        .natDexNum = NATIONAL_DEX_HARIYAMA,
        .categoryName = _("Arm Thrust"),
        .height = 23,
        .weight = 2538,
        .description = COMPOUND_STRING(
            "It has the habit of challenging others\n"
            "without hesitation to tests of strength.\n"
            "It's been known to stand on train tracks\n"
            "and stop trains using forearm thrusts."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_MAKUHITA

#if P_FAMILY_NOSEPASS
    [SPECIES_NOSEPASS] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Nosepass"),
        .cryId = CRY_NOSEPASS,
        .natDexNum = NATIONAL_DEX_NOSEPASS,
        .categoryName = _("Compass"),
        .height = 10,
        .weight = 970,
        .description = COMPOUND_STRING(
            "Its body emits a powerful magnetism.\n"
            "It feeds on prey that is pulled in by the\n"
            "force. Its magnetism is stronger in cold\n"
            "seasons."),
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PROBOPASS] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Probopass"),
        .cryId = CRY_PROBOPASS,
        .natDexNum = NATIONAL_DEX_PROBOPASS,
        .categoryName = _("Compass"),
        .height = 14,
        .weight = 3400,
        .description = COMPOUND_STRING(
            "It freely controls three units called\n"
            "Mini-Noses using magnetic force.\n"
            "With them, it can attack its foes from\n"
            "three directions."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS

#if P_FAMILY_SKITTY
    [SPECIES_SKITTY] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Skitty"),
        .cryId = CRY_SKITTY,
        .natDexNum = NATIONAL_DEX_SKITTY,
        .categoryName = _("Kitten"),
        .height = 6,
        .weight = 110,
        .description = COMPOUND_STRING(
            "A Skitty's adorably cute behavior makes it\n"
            "highly popular. In battle, it makes its tail\n"
            "puff out. It threatens foes with a sharp\n"
            "growl."),
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DELCATTY] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Delcatty"),
        .cryId = CRY_DELCATTY,
        .natDexNum = NATIONAL_DEX_DELCATTY,
        .categoryName = _("Prim"),
        .height = 11,
        .weight = 326,
        .description = COMPOUND_STRING(
            "Rather than keeping a permanent lair,\n"
            "it habitually seeks comfortable spots and\n"
            "sleeps there. It is nocturnal and becomes\n"
            "active at dusk."),
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SKITTY

#if P_FAMILY_SABLEYE
    [SPECIES_SABLEYE] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sableye"),
        .cryId = CRY_SABLEYE,
        .natDexNum = NATIONAL_DEX_SABLEYE,
        .categoryName = _("Darkness"),
        .height = 5,
        .weight = 110,
        .description = COMPOUND_STRING(
            "It digs branching holes in caves using its\n"
            "sharp claws in search of food--raw gems.\n"
            "A Sableye lurks in darkness and is seen\n"
            "only rarely."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SABLEYE_MEGA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sableye"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_SABLEYE_MEGA,
    #else
        .cryId = CRY_SABLEYE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_SABLEYE,
        .categoryName = _("Darkness"),
        .height = 5,
        .weight = 1610,
        .description = COMPOUND_STRING(
            "Bathed in the energy of Mega Evolution,\n"
            "the gemstone on its chest expands, rips\n"
            "through its skin, and falls out."),
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SABLEYE

#if P_FAMILY_MAWILE
    [SPECIES_MAWILE] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mawile"),
        .cryId = CRY_MAWILE,
        .natDexNum = NATIONAL_DEX_MAWILE,
        .categoryName = _("Deceiver"),
        .height = 6,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Its giant jaws are actually steel horns\n"
            "that transformed. It fools foes into\n"
            "complacency with its adorable gestures,\n"
            "then chomps them with its huge jaws."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MAWILE_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Mawile"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MAWILE_MEGA,
    #else
        .cryId = CRY_MAWILE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MAWILE,
        .categoryName = _("Deceiver"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING(
            "Its two sets of jaws thrash about\n"
            "violently as if they each had a will of\n"
            "their own. One gnash from them can turn a\n"
            "boulder to dust."),
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAWILE

#if P_FAMILY_ARON
    [SPECIES_ARON] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Aron"),
        .cryId = CRY_ARON,
        .natDexNum = NATIONAL_DEX_ARON,
        .categoryName = _("Iron Armor"),
        .height = 4,
        .weight = 600,
        .description = COMPOUND_STRING(
            "A Pokémon that is clad in steel armor.\n"
            "A new suit of armor is made when it evolves.\n"
            "The old, discarded armor is salvaged as\n"
            "metal for making iron products."),
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LAIRON] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Lairon"),
        .cryId = CRY_LAIRON,
        .natDexNum = NATIONAL_DEX_LAIRON,
        .categoryName = _("Iron Armor"),
        .height = 9,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "When two Lairon meet in the wild, they\n"
            "fight for territory by bashing into each\n"
            "other with their steel bodies. The sound\n"
            "of their collision carries for miles."),
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_AGGRON] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Aggron"),
        .cryId = CRY_AGGRON,
        .natDexNum = NATIONAL_DEX_AGGRON,
        .categoryName = _("Iron Armor"),
        .height = 21,
        .weight = 3600,
        .description = COMPOUND_STRING(
            "Its iron horns grow longer a little at\n"
            "a time. They are used to determine the\n"
            "Aggron's age. The gouges in its armor are\n"
            "worn with pride as mementos from battles."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AGGRON_MEGA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Aggron"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_AGGRON_MEGA,
    #else
        .cryId = CRY_AGGRON,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_AGGRON,
        .categoryName = _("Iron Armor"),
        .height = 22,
        .weight = 3950,
        .description = COMPOUND_STRING(
            "When Aggron Mega Evolves into\n"
            "Mega Aggron, the destructive ability of\n"
            "its fearsome horns can turn a steel-clad\n"
            "tank into so much scrap metal."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ARON

#if P_FAMILY_MEDITITE
    [SPECIES_MEDITITE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Meditite"),
        .cryId = CRY_MEDITITE,
        .natDexNum = NATIONAL_DEX_MEDITITE,
        .categoryName = _("Meditate"),
        .height = 6,
        .weight = 112,
        .description = COMPOUND_STRING(
            "It continually meditates for hours every\n"
            "day. As a result of rigorous and dedicated\n"
            "yoga training, it has tempered its\n"
            "spiritual power so much it can fly."),
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MEDICHAM] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Medicham"),
        .cryId = CRY_MEDICHAM,
        .natDexNum = NATIONAL_DEX_MEDICHAM,
        .categoryName = _("Meditate"),
        .height = 13,
        .weight = 315,
        .description = COMPOUND_STRING(
            "Through crushingly harsh yoga training, it\n"
            "gained the power to foretell its foe's\n"
            "actions. It battles with elegant, dance-\n"
            "like movement."),
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEDICHAM_MEGA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Medicham"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MEDICHAM_MEGA,
    #else
        .cryId = CRY_MEDICHAM,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MEDICHAM,
        .categoryName = _("Meditate"),
        .height = 13,
        .weight = 315,
        .description = COMPOUND_STRING(
            "It uses its amped-up willpower to create\n"
            "additional arms for itself. The more it\n"
            "has trained its spirit, the more realistic\n"
            "and dexterous these arms become."),
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEDITITE

#if P_FAMILY_ELECTRIKE
    [SPECIES_ELECTRIKE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Electrike"),
        .cryId = CRY_ELECTRIKE,
        .natDexNum = NATIONAL_DEX_ELECTRIKE,
        .categoryName = _("Lightning"),
        .height = 6,
        .weight = 152,
        .description = COMPOUND_STRING(
            "It generates electricity using friction\n"
            "from the atmosphere. In seasons with\n"
            "especially arid air, its entire body blazes\n"
            "with violent showers of sparks."),
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MANECTRIC] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Manectric"),
        .cryId = CRY_MANECTRIC,
        .natDexNum = NATIONAL_DEX_MANECTRIC,
        .categoryName = _("Discharge"),
        .height = 15,
        .weight = 402,
        .description = COMPOUND_STRING(
            "Because lightning falls in their vicinities,\n"
            "Manectric were thought to have been born\n"
            "from lightning. In battle, they create\n"
            "thunderclouds."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MANECTRIC_MEGA] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Manectric"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MANECTRIC_MEGA,
    #else
        .cryId = CRY_MANECTRIC,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MANECTRIC,
        .categoryName = _("Discharge"),
        .height = 18,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Too much electricity has built up in its\n"
            "body, irritating Manectric. Its explosive\n"
            "speed is equal to that of a lightning bolt."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ELECTRIKE

#if P_FAMILY_PLUSLE
    [SPECIES_PLUSLE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Plusle"),
        .cryId = CRY_PLUSLE,
        .natDexNum = NATIONAL_DEX_PLUSLE,
        .categoryName = _("Cheering"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "It has the trait of cheering on its fellow\n"
            "Pokémon. By shorting out the electricity\n"
            "it releases from its paws, it creates\n"
            "pom-poms for cheering."),
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PLUSLE

#if P_FAMILY_MINUN
    [SPECIES_MINUN] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Minun"),
        .cryId = CRY_MINUN,
        .natDexNum = NATIONAL_DEX_MINUN,
        .categoryName = _("Cheering"),
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING(
            "At a meeting of Pokémon academics, it was\n"
            "announced that simultaneous exposure to\n"
            "electricity from a Plusle and Minun will\n"
            "promote circulation and boost vitality."),
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MINUN

#if P_FAMILY_VOLBEAT_ILLUMISE
    [SPECIES_VOLBEAT] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Volbeat"),
        .cryId = CRY_VOLBEAT,
        .natDexNum = NATIONAL_DEX_VOLBEAT,
        .categoryName = _("Firefly"),
        .height = 7,
        .weight = 177,
        .description = COMPOUND_STRING(
            "With their taillights lit, Volbeat fly in\n"
            "a swarm, drawing geometric designs in the\n"
            "night sky. They move their nests if their\n"
            "pond water becomes dirty."),
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ILLUMISE] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Illumise"),
        .cryId = CRY_ILLUMISE,
        .natDexNum = NATIONAL_DEX_ILLUMISE,
        .categoryName = _("Firefly"),
        .height = 6,
        .weight = 177,
        .description = COMPOUND_STRING(
            "A nocturnal Pokémon that becomes active\n"
            "upon nightfall. It leads a Volbeat swarm\n"
            "to draw patterns in the night sky. Over 200\n"
            "different patterns have been confirmed."),
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_VOLBEAT_ILLUMISE

#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BUDEW] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Budew"),
        .cryId = CRY_BUDEW,
        .natDexNum = NATIONAL_DEX_BUDEW,
        .categoryName = _("Bud"),
        .height = 2,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Over the winter, it closes its bud and\n"
            "endures the cold. Sensitive to changing\n"
            "temperature, the bud is said to bloom\n"
            "when it feels the sun's warm touch."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_ROSELIA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Roselia"),
        .cryId = CRY_ROSELIA,
        .natDexNum = NATIONAL_DEX_ROSELIA,
        .categoryName = _("Thorn"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "A Roselia that drinks nutritionally rich\n"
            "springwater blooms with lovely flowers.\n"
            "The fragrance of its flowers has the\n"
            "effect of making its foes careless."),
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ROSERADE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Roserade"),
        .cryId = CRY_ROSERADE,
        .natDexNum = NATIONAL_DEX_ROSERADE,
        .categoryName = _("Bouquet"),
        .height = 9,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Its sweet aroma attracts prey.\n"
            "With the movements of a dancer,\n"
            "it strikes with whips that are densely\n"
            "lined with poison thorns."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA

#if P_FAMILY_GULPIN
    [SPECIES_GULPIN] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Gulpin"),
        .cryId = CRY_GULPIN,
        .natDexNum = NATIONAL_DEX_GULPIN,
        .categoryName = _("Stomach"),
        .height = 4,
        .weight = 103,
        .description = COMPOUND_STRING(
            "This Pokémon's stomach fluid can even\n"
            "digest scrap iron. In one gulp, it can\n"
            "swallow something that is as large as\n"
            "itself."),
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SWALOT] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Swalot"),
        .cryId = CRY_SWALOT,
        .natDexNum = NATIONAL_DEX_SWALOT,
        .categoryName = _("Poison Bag"),
        .height = 17,
        .weight = 800,
        .description = COMPOUND_STRING(
            "Its powerful stomach acid is capable of\n"
            "digesting almost anything. The one thing\n"
            "in the whole world a Swalot can't digest is\n"
            "its own stomach."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },
#endif //P_FAMILY_GULPIN

#if P_FAMILY_CARVANHA
    [SPECIES_CARVANHA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Carvanha"),
        .cryId = CRY_CARVANHA,
        .natDexNum = NATIONAL_DEX_CARVANHA,
        .categoryName = _("Savage"),
        .height = 8,
        .weight = 208,
        .description = COMPOUND_STRING(
            "Carvanha attack ships in swarms, making\n"
            "them sink. Although it is said to be a very\n"
            "vicious Pokémon, it timidly flees as soon\n"
            "as it finds itself alone."),
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SHARPEDO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sharpedo"),
        .cryId = CRY_SHARPEDO,
        .natDexNum = NATIONAL_DEX_SHARPEDO,
        .categoryName = _("Brutal"),
        .height = 18,
        .weight = 888,
        .description = COMPOUND_STRING(
            "The vicious and sly gangster of the sea.\n"
            "Its skin is specially textured to minimize\n"
            "drag in water. Its speed tops out at over\n"
            "75 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SHARPEDO_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sharpedo"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_SHARPEDO_MEGA,
    #else
        .cryId = CRY_SHARPEDO,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_SHARPEDO,
        .categoryName = _("Brutal"),
        .height = 25,
        .weight = 1303,
        .description = COMPOUND_STRING(
            "The yellow patterns it bears are old scars.\n"
            "The energy from Mega Evolution runs\n"
            "through them, causing it sharp pain and\n"
            "suffering."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_CARVANHA

#if P_FAMILY_WAILMER
    [SPECIES_WAILMER] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wailmer"),
        .cryId = CRY_WAILMER,
        .natDexNum = NATIONAL_DEX_WAILMER,
        .categoryName = _("Ball Whale"),
        .height = 20,
        .weight = 1300,
        .description = COMPOUND_STRING(
            "While this Pokémon usually lives in the sea,\n"
            "it can survive on land, although not too\n"
            "long. It loses vitality if its body becomes\n"
            "dried out."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [SPECIES_WAILORD] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wailord"),
        .cryId = CRY_WAILORD,
        .natDexNum = NATIONAL_DEX_WAILORD,
        .categoryName = _("Float Whale"),
        .height = 145,
        .weight = 3980,
        .description = COMPOUND_STRING(
            "It breathes through nostrils that it\n"
            "raises above the sea. By inhaling to its\n"
            "maximum capacity, a Wailord can dive close\n"
            "to 10,000 feet beneath the waves."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },
#endif //P_FAMILY_WAILMER

#if P_FAMILY_NUMEL
    [SPECIES_NUMEL] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Numel"),
        .cryId = CRY_NUMEL,
        .natDexNum = NATIONAL_DEX_NUMEL,
        .categoryName = _("Numb"),
        .height = 7,
        .weight = 240,
        .description = COMPOUND_STRING(
            "A Numel stores boiling magma in the hump\n"
            "on its back. It is a hardy Pokémon that can\n"
            "transport a 220-pound load. It has served\n"
            "humans at work since long ago."),
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CAMERUPT] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Camerupt"),
        .cryId = CRY_CAMERUPT,
        .natDexNum = NATIONAL_DEX_CAMERUPT,
        .categoryName = _("Eruption"),
        .height = 19,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "A Pokémon that lives in the crater of\n"
            "a volcano. Every 10 years, the volcanoes\n"
            "on its back erupt violently. Research is\n"
            "under way on the cause of eruption."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CAMERUPT_MEGA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Camerupt"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_CAMERUPT_MEGA,
    #else
        .cryId = CRY_CAMERUPT,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_CAMERUPT,
        .categoryName = _("Eruption"),
        .height = 25,
        .weight = 3205,
        .description = COMPOUND_STRING(
            "The humps on its back have transformed\n"
            "into one large and very active volcano. It\n"
            "has a deep hatred of water or any moisture\n"
            "and has an explosive personality."),
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_NUMEL

#if P_FAMILY_TORKOAL
    [SPECIES_TORKOAL] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Torkoal"),
        .cryId = CRY_TORKOAL,
        .natDexNum = NATIONAL_DEX_TORKOAL,
        .categoryName = _("Coal"),
        .height = 5,
        .weight = 804,
        .description = COMPOUND_STRING(
            "It battles using energy it gets from\n"
            "burning coal. When loosing smoke from its\n"
            "nostrils, it lets off a sound that is\n"
            "similar to a locomotive's horn."),
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TORKOAL

#if P_FAMILY_SPOINK
    [SPECIES_SPOINK] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Spoink"),
        .cryId = CRY_SPOINK,
        .natDexNum = NATIONAL_DEX_SPOINK,
        .categoryName = _("Bounce"),
        .height = 7,
        .weight = 306,
        .description = COMPOUND_STRING(
            "A Pokémon that manipulates psychic power\n"
            "at will. It doesn't stop bouncing even when\n"
            "it is asleep. It loves eating mushrooms\n"
            "that grow underground."),
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GRUMPIG] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Grumpig"),
        .cryId = CRY_GRUMPIG,
        .natDexNum = NATIONAL_DEX_GRUMPIG,
        .categoryName = _("Manipulate"),
        .height = 9,
        .weight = 715,
        .description = COMPOUND_STRING(
            "It stores power in the black pearls on its\n"
            "forehead. When it uses psychic power, it\n"
            "performs an odd dance step. Its style of\n"
            "dancing became hugely popular overseas."),
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SPOINK

#if P_FAMILY_SPINDA
    [SPECIES_SPINDA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Spinda"),
        .cryId = CRY_SPINDA,
        .natDexNum = NATIONAL_DEX_SPINDA,
        .categoryName = _("Spot Panda"),
        .height = 11,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It is distinguished by a pattern of\n"
            "spots that is always different. Its\n"
            "unsteady, tottering walk has the\n"
            "effect of fouling its foe's aim."),
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SPINDA

#if P_FAMILY_TRAPINCH
    [SPECIES_TRAPINCH] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Trapinch"),
        .cryId = CRY_TRAPINCH,
        .natDexNum = NATIONAL_DEX_TRAPINCH,
        .categoryName = _("Ant Pit"),
        .height = 7,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Its big jaws crunch through boulders.\n"
            "Because its head is so big, it has a hard\n"
            "time getting back upright if it tips over\n"
            "onto its back."),
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_VIBRAVA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Vibrava"),
        .cryId = CRY_VIBRAVA,
        .natDexNum = NATIONAL_DEX_VIBRAVA,
        .categoryName = _("Vibration"),
        .height = 11,
        .weight = 153,
        .description = COMPOUND_STRING(
            "It looses ultrasonic waves by rubbing its\n"
            "wings together. Since a Vibrava's wings\n"
            "are still in the process of growing, it can\n"
            "only fly short distances."),
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_FLYGON] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Flygon"),
        .cryId = CRY_FLYGON,
        .natDexNum = NATIONAL_DEX_FLYGON,
        .categoryName = _("Mystic"),
        .height = 20,
        .weight = 820,
        .description = COMPOUND_STRING(
            "The flapping of its wings sounds like\n"
            "singing. To prevent detection by enemies,\n"
            "it hides itself by flapping up a cloud of\n"
            "desert sand."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_TRAPINCH

#if P_FAMILY_CACNEA
    [SPECIES_CACNEA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cacnea"),
        .cryId = CRY_CACNEA,
        .natDexNum = NATIONAL_DEX_CACNEA,
        .categoryName = _("Cactus"),
        .height = 4,
        .weight = 513,
        .description = COMPOUND_STRING(
            "Cacnea live in deserts with virtually no\n"
            "rainfall. It battles by swinging its thick,\n"
            "spiked arms. Once a year, a yellow flower\n"
            "blooms."),
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CACTURNE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cacturne"),
        .cryId = CRY_CACTURNE,
        .natDexNum = NATIONAL_DEX_CACTURNE,
        .categoryName = _("Scarecrow"),
        .height = 13,
        .weight = 774,
        .description = COMPOUND_STRING(
            "After spending thousands of years in\n"
            "harsh deserts, its blood transformed into\n"
            "the same substances as sand. It is\n"
            "nocturnal, so it hunts at night."),
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CACNEA

#if P_FAMILY_SWABLU
    [SPECIES_SWABLU] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swablu"),
        .cryId = CRY_SWABLU,
        .natDexNum = NATIONAL_DEX_SWABLU,
        .categoryName = _("Cotton Bird"),
        .height = 4,
        .weight = 12,
        .description = COMPOUND_STRING(
            "A Pokémon that has wings like cottony\n"
            "clouds. After enduring winter, in which\n"
            "little food is available, Swablu flocks\n"
            "move closer to towns in the spring."),
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ALTARIA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Altaria"),
        .cryId = CRY_ALTARIA,
        .natDexNum = NATIONAL_DEX_ALTARIA,
        .categoryName = _("Humming"),
        .height = 11,
        .weight = 206,
        .description = COMPOUND_STRING(
            "It hums in a beautiful soprano voice.\n"
            "It flies among white clouds in the blue\n"
            "sky. It launches intensely hot fireballs\n"
            "from its mouth."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ALTARIA_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Altaria"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_ALTARIA_MEGA,
    #else
        .cryId = CRY_ALTARIA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_ALTARIA,
        .categoryName = _("Humming"),
        .height = 15,
        .weight = 206,
        .description = COMPOUND_STRING(
            "It sings with a voice that is even more\n"
            "beautiful than before it Mega Evolved.\n"
            "Its feathers became larger for protection\n"
            "and glimmer with an iridescent sheen."),
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SWABLU

#if P_FAMILY_ZANGOOSE
    [SPECIES_ZANGOOSE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Zangoose"),
        .cryId = CRY_ZANGOOSE,
        .natDexNum = NATIONAL_DEX_ZANGOOSE,
        .categoryName = _("Cat Ferret"),
        .height = 13,
        .weight = 403,
        .description = COMPOUND_STRING(
            "When it battles, it stands on its hind legs\n"
            "and attacks with its sharply clawed\n"
            "forelegs. Its fur bristles if it encounters\n"
            "any Seviper."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ZANGOOSE

#if P_FAMILY_SEVIPER
    [SPECIES_SEVIPER] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Seviper"),
        .cryId = CRY_SEVIPER,
        .natDexNum = NATIONAL_DEX_SEVIPER,
        .categoryName = _("Fang Snake"),
        .height = 27,
        .weight = 525,
        .description = COMPOUND_STRING(
            "Seviper and Zangoose are eternal rivals.\n"
            "It counters a Zangoose's dazzling agility\n"
            "with its swordlike tail, which also oozes\n"
            "a horrible poison."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SEVIPER

#if P_FAMILY_LUNATONE
    [SPECIES_LUNATONE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Lunatone"),
        .cryId = CRY_LUNATONE,
        .natDexNum = NATIONAL_DEX_LUNATONE,
        .categoryName = _("Meteorite"),
        .height = 10,
        .weight = 1680,
        .description = COMPOUND_STRING(
            "It becomes very active on the night of\n"
            "a full moon. This Pokémon was first\n"
            "discovered 40 years ago at the site of\n"
            "a meteor strike."),
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_LUNATONE

#if P_FAMILY_SOLROCK
    [SPECIES_SOLROCK] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Solrock"),
        .cryId = CRY_SOLROCK,
        .natDexNum = NATIONAL_DEX_SOLROCK,
        .categoryName = _("Meteorite"),
        .height = 12,
        .weight = 1540,
        .description = COMPOUND_STRING(
            "Solar energy is the source of this \n"
            "Pokémon's power. On sunny days, groups of\n"
            "Solrock line up facing the sun and absorb\n"
            "its light."),
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SOLROCK

#if P_FAMILY_BARBOACH
    [SPECIES_BARBOACH] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Barboach"),
        .cryId = CRY_BARBOACH,
        .natDexNum = NATIONAL_DEX_BARBOACH,
        .categoryName = _("Whiskers"),
        .height = 4,
        .weight = 19,
        .description = COMPOUND_STRING(
            "Its body is covered with a slimy film.\n"
            "The film acts as a barrier to prevent germs\n"
            "in muddy water from entering the\n"
            "Barboach's body."),
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WHISCASH] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Whiscash"),
        .cryId = CRY_WHISCASH,
        .natDexNum = NATIONAL_DEX_WHISCASH,
        .categoryName = _("Whiskers"),
        .height = 9,
        .weight = 236,
        .description = COMPOUND_STRING(
            "Mysteriously, it can foretell earthquakes.\n"
            "In the daytime, it sleeps in mud at the\n"
            "bottom of a pond. When it awakens, it\n"
            "continually feeds throughout the night."),
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_BARBOACH

#if P_FAMILY_CORPHISH
    [SPECIES_CORPHISH] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Corphish"),
        .cryId = CRY_CORPHISH,
        .natDexNum = NATIONAL_DEX_CORPHISH,
        .categoryName = _("Ruffian"),
        .height = 6,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Once it grips prey with its large pincers,\n"
            "it will never let go, no matter what.\n"
            "It is a hardy Pokémon that can thrive\n"
            "in any environment."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CRAWDAUNT] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Crawdaunt"),
        .cryId = CRY_CRAWDAUNT,
        .natDexNum = NATIONAL_DEX_CRAWDAUNT,
        .categoryName = _("Rogue"),
        .height = 11,
        .weight = 328,
        .description = COMPOUND_STRING(
            "A brutish Pokémon that loves to battle.\n"
            "A veteran Crawdaunt that has prevailed in\n"
            "hundreds of battles has giant pincers\n"
            "marked with countless scars."),
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CORPHISH

#if P_FAMILY_BALTOY
    [SPECIES_BALTOY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Baltoy"),
        .cryId = CRY_BALTOY,
        .natDexNum = NATIONAL_DEX_BALTOY,
        .categoryName = _("Clay Doll"),
        .height = 5,
        .weight = 215,
        .description = COMPOUND_STRING(
            "A Baltoy moves by spinning on its single\n"
            "foot. It has been depicted in murals \n"
            "adorning the walls of a once-bustling city\n"
            "in an ancient age."),
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CLAYDOL] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Claydol"),
        .cryId = CRY_CLAYDOL,
        .natDexNum = NATIONAL_DEX_CLAYDOL,
        .categoryName = _("Clay Doll"),
        .height = 15,
        .weight = 1080,
        .description = COMPOUND_STRING(
            "A Claydol sleeps while hovering in midair.\n"
            "Its arms are separate from its body.\n"
            "They are kept floating by the Pokémon's\n"
            "manipulation of psychic power."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_BALTOY

#if P_FAMILY_LILEEP
    [SPECIES_LILEEP] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Lileep"),
        .cryId = CRY_LILEEP,
        .natDexNum = NATIONAL_DEX_LILEEP,
        .categoryName = _("Sea Lily"),
        .height = 10,
        .weight = 238,
        .description = COMPOUND_STRING(
            "It disguises itself as seaweed by making\n"
            "its tentacles sway. Unsuspecting prey\n"
            "that come too close are swallowed whole.\n"
            "It became extinct 100 million years ago."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CRADILY] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cradily"),
        .cryId = CRY_CRADILY,
        .natDexNum = NATIONAL_DEX_CRADILY,
        .categoryName = _("Barnacle"),
        .height = 15,
        .weight = 604,
        .description = COMPOUND_STRING(
            "It drags its heavy body along the\n"
            "seafloor. It makes its nest in the shallows\n"
            "of warm seas. Cradily can be seen on\n"
            "beaches when the tide goes out."),
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_LILEEP

#if P_FAMILY_ANORITH
    [SPECIES_ANORITH] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Anorith"),
        .cryId = CRY_ANORITH,
        .natDexNum = NATIONAL_DEX_ANORITH,
        .categoryName = _("Old Shrimp"),
        .height = 7,
        .weight = 125,
        .description = COMPOUND_STRING(
            "It was resurrected from a fossil using the\n"
            "power of science. It swims by undulating\n"
            "the eight wings at its sides. They were\n"
            "feet that adapted to life in the sea."),
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ARMALDO] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Armaldo"),
        .cryId = CRY_ARMALDO,
        .natDexNum = NATIONAL_DEX_ARMALDO,
        .categoryName = _("Plate"),
        .height = 15,
        .weight = 682,
        .description = COMPOUND_STRING(
            "Armaldo usually lives on land. However,\n"
            "when it hunts for prey, it dives beneath\n"
            "the ocean. It swims around using its two\n"
            "large wings."),
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ANORITH

#if P_FAMILY_FEEBAS
    [SPECIES_FEEBAS] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Feebas"),
        .cryId = CRY_FEEBAS,
        .natDexNum = NATIONAL_DEX_FEEBAS,
        .categoryName = _("Fish"),
        .height = 6,
        .weight = 74,
        .description = COMPOUND_STRING(
            "Feebas live in ponds that are heavily\n"
            "infested with weeds. Because of its\n"
            "hopelessly shabby appearance, it\n"
            "seems as if few Trainers raise it."),
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MILOTIC] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Milotic"),
        .cryId = CRY_MILOTIC,
        .natDexNum = NATIONAL_DEX_MILOTIC,
        .categoryName = _("Tender"),
        .height = 62,
        .weight = 1620,
        .description = COMPOUND_STRING(
            "It is said to live at the bottom of\n"
            "large lakes. Considered to be the most\n"
            "beautiful of all Pokémon, it has been\n"
            "depicted in paintings and statues."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_FEEBAS

#if P_FAMILY_CASTFORM
    [SPECIES_CASTFORM_NORMAL] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Castform"),
        .cryId = CRY_CASTFORM,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "It alters its form depending on the\n"
            "weather. Changes in the climate such as\n"
            "the temperature and humidity appear to\n"
            "affect its cellular structure."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CASTFORM_SUNNY] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Castform"),
        .cryId = CRY_CASTFORM,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "Castform takes this form on bright days.\n"
            "In an experiment where is was placed in\n"
            "front of a heater, it didn't change to this\n"
            "form. Its body is warm and toasty."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CASTFORM_RAINY] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Castform"),
        .cryId = CRY_CASTFORM,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "This is Castform's form while it's raining.\n"
            "In an experiment where it was placed in a\n"
            "shower, it didn't change to this form. Its\n"
            "body is soft, slightly swollen with water."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CASTFORM_SNOWY] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Castform"),
        .cryId = CRY_CASTFORM,
        .natDexNum = NATIONAL_DEX_CASTFORM,
        .categoryName = _("Weather"),
        .height = 3,
        .weight = 8,
        .description = COMPOUND_STRING(
            "This is Castform's form in a hailstorm.\n"
            "In an experiment where it was placed\n"
            "in a freezer, it didn't change to this form.\n"
            "Its cold skin is as smooth as ice."),
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CASTFORM

#if P_FAMILY_KECLEON
    [SPECIES_KECLEON] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Kecleon"),
        .cryId = CRY_KECLEON,
        .natDexNum = NATIONAL_DEX_KECLEON,
        .categoryName = _("Color Swap"),
        .height = 10,
        .weight = 220,
        .description = COMPOUND_STRING(
            "A Pokémon that has the ability to alter its\n"
            "body colors to match its surroundings.\n"
            "A Kecleon reverts to its original colors if\n"
            "it is startled."),
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_KECLEON

#if P_FAMILY_SHUPPET
    [SPECIES_SHUPPET] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Shuppet"),
        .cryId = CRY_SHUPPET,
        .natDexNum = NATIONAL_DEX_SHUPPET,
        .categoryName = _("Puppet"),
        .height = 6,
        .weight = 23,
        .description = COMPOUND_STRING(
            "This Pokémon roams about deep in the\n"
            "night seeking such negative emotions as\n"
            "grudges and envy. It retreats to its nest\n"
            "when the sun begins to rise."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BANETTE] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Banette"),
        .cryId = CRY_BANETTE,
        .natDexNum = NATIONAL_DEX_BANETTE,
        .categoryName = _("Marionette"),
        .height = 11,
        .weight = 125,
        .description = COMPOUND_STRING(
            "An abandoned plush doll became this\n"
            "Pokémon. They are said to live in garbage\n"
            "dumps and wander about in search of the\n"
            "children that threw them away."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BANETTE_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Banette"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_BANETTE_MEGA,
    #else
        .cryId = CRY_BANETTE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_BANETTE,
        .categoryName = _("Marionette"),
        .height = 12,
        .weight = 130,
        .description = COMPOUND_STRING(
            "Extraordinary energy amplifies its\n"
            "cursing power to such an extent that it\n"
            "can't help but curse its own Trainer."),
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SHUPPET

#if P_FAMILY_DUSKULL
    [SPECIES_DUSKULL] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Duskull"),
        .cryId = CRY_DUSKULL,
        .natDexNum = NATIONAL_DEX_DUSKULL,
        .categoryName = _("Requiem"),
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
            "A glare from its single scarlet eye makes\n"
            "even burly grown-ups freeze in utter fear.\n"
            "It is a nocturnal Pokémon that roams\n"
            "about under the cloak of darkness."),
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DUSCLOPS] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dusclops"),
        .cryId = CRY_DUSCLOPS,
        .natDexNum = NATIONAL_DEX_DUSCLOPS,
        .categoryName = _("Beckon"),
        .height = 16,
        .weight = 306,
        .description = COMPOUND_STRING(
            "It is thought that its body is hollow with\n"
            "only a spectral ball of fire burning inside.\n"
            "However, no one has been able to\n"
            "confirm this theory as fact."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_DUSKNOIR] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Dusknoir"),
        .cryId = CRY_DUSKNOIR,
        .natDexNum = NATIONAL_DEX_DUSKNOIR,
        .categoryName = _("Gripper"),
        .height = 22,
        .weight = 1066,
        .description = COMPOUND_STRING(
            "This feared Pokémon is said to travel to\n"
            "worlds unknown. Some even believe that\n"
            "it takes lost spirits into its pliant body\n"
            "and guides them home."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL

#if P_FAMILY_TROPIUS
    [SPECIES_TROPIUS] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tropius"),
        .cryId = CRY_TROPIUS,
        .natDexNum = NATIONAL_DEX_TROPIUS,
        .categoryName = _("Fruit"),
        .height = 20,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "It flies by flapping its broad leaves.\n"
            "The bunch of fruit that grows around its\n"
            "neck is deliciously sweet. In the spring,\n"
            "it scatters pollen from its neck."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_TROPIUS

#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_CHINGLING] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Chingling"),
        .cryId = CRY_CHINGLING,
        .natDexNum = NATIONAL_DEX_CHINGLING,
        .categoryName = _("Bell"),
        .height = 2,
        .weight = 6,
        .description = COMPOUND_STRING(
            "There is an orb inside its mouth.\n"
            "When it hops, the orb bounces all\n"
            "over and makes a ringing sound.\n"
            "It can cry for an awfully long time."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_CHIMECHO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Chimecho"),
        .cryId = CRY_CHIMECHO,
        .natDexNum = NATIONAL_DEX_CHIMECHO,
        .categoryName = _("Wind Chime"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING(
            "They fly about very actively when the hot\n"
            "season arrives. They communicate among\n"
            "themselves using seven different and\n"
            "distinguishing cries."),
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CHIMECHO_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Chimecho"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_CHIMECHO_MEGA,
    #else
        .cryId = CRY_CHIMECHO,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_CHIMECHO,
        .categoryName = _("Wind Chime"),
        .height = 12,
        .weight = 80,
        .description = COMPOUND_STRING(
            "It vibrates its entire body to attack in\n"
            "all directions using sound waves. Any who\n"
            "hear the vibrations get so confused, they\n"
            "forget who they are."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CHIMECHO

#if P_FAMILY_ABSOL
    [SPECIES_ABSOL] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Absol"),
        .cryId = CRY_ABSOL,
        .natDexNum = NATIONAL_DEX_ABSOL,
        .categoryName = _("Disaster"),
        .height = 12,
        .weight = 470,
        .description = COMPOUND_STRING(
            "It sharply senses even subtle changes in\n"
            "the sky and the land to predict natural\n"
            "disasters. It is a long-lived Pokémon that\n"
            "has a life-span of 100 years."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ABSOL_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Absol"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_ABSOL_MEGA,
    #else
        .cryId = CRY_ABSOL,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_ABSOL,
        .categoryName = _("Disaster"),
        .height = 12,
        .weight = 490,
        .description = COMPOUND_STRING(
            "As the energy of Mega Evolution fills it,\n"
            "its fur bristles. What you see on its back\n"
            "are not true wings, and this Pokémon isn't\n"
            "able to fly."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_ABSOL_MEGA_Z] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Absol"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_ABSOL_MEGA_Z,
    #else
        .cryId = CRY_ABSOL,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_ABSOL,
        .categoryName = _("Disaster"),
        .height = 12,
        .weight = 490,
        .description = COMPOUND_STRING(
            "Using fur that it has made into sharp,\n"
            "clawlike shapes, it cuts down foes with\n"
            "a single blow. This is an act of kindness\n"
            "to keep them from suffering."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABSOL

#if P_FAMILY_SNORUNT
    [SPECIES_SNORUNT] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Snorunt"),
        .cryId = CRY_SNORUNT,
        .natDexNum = NATIONAL_DEX_SNORUNT,
        .categoryName = _("Snow Hat"),
        .height = 7,
        .weight = 168,
        .description = COMPOUND_STRING(
            "They tend to move about in groups of\n"
            "around five Snorunt. In snowy regions,\n"
            "it is said that when they are seen late at\n"
            "night, snowfall will arrive by morning."),
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GLALIE] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Glalie"),
        .cryId = CRY_GLALIE,
        .natDexNum = NATIONAL_DEX_GLALIE,
        .categoryName = _("Face"),
        .height = 15,
        .weight = 2565,
        .description = COMPOUND_STRING(
            "A Glalie has the power to instantaneously\n"
            "freeze moisture in the atmosphere.\n"
            "A dazzling cloud of diamondlike ice\n"
            "crystals forms around its body."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GLALIE_MEGA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Glalie"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GLALIE_MEGA,
    #else
        .cryId = CRY_GLALIE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GLALIE,
        .categoryName = _("Face"),
        .height = 21,
        .weight = 3502,
        .description = COMPOUND_STRING(
            "The power of Mega Evolution was so strong\n"
            "that it smashed Glalie's jaw. Its inability\n"
            "to eat very well leaves Glalie irritated."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_FROSLASS] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Froslass"),
        .cryId = CRY_FROSLASS,
        .natDexNum = NATIONAL_DEX_FROSLASS,
        .categoryName = _("Snow Land"),
        .height = 13,
        .weight = 266,
        .description = COMPOUND_STRING(
            "When it finds people or Pokémon it likes,\n"
            "it freezes them and takes them to its\n"
            "chilly den, where they become its\n"
            "decorations."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FROSLASS_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Froslass"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_FROSLASS_MEGA,
    #else
        .cryId = CRY_FROSLASS,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_FROSLASS,
        .categoryName = _("Snow Land"),
        .height = 26,
        .weight = 296,
        .description = COMPOUND_STRING(
            "This Pokémon can use eerie cold\n"
            "air imbued with ghost energy to\n"
            "freeze even insubstantial things,\n"
            "such as flames or the wind."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT

#if P_FAMILY_SPHEAL
    [SPECIES_SPHEAL] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Spheal"),
        .cryId = CRY_SPHEAL,
        .natDexNum = NATIONAL_DEX_SPHEAL,
        .categoryName = _("Clap"),
        .height = 8,
        .weight = 395,
        .description = COMPOUND_STRING(
            "It is completely covered with plushy fur.\n"
            "As a result, it never feels the cold even\n"
            "when it is rolling about on ice floes or\n"
            "diving in the sea."),
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SEALEO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sealeo"),
        .cryId = CRY_SEALEO,
        .natDexNum = NATIONAL_DEX_SEALEO,
        .categoryName = _("Ball Roll"),
        .height = 11,
        .weight = 876,
        .description = COMPOUND_STRING(
            "Sealeo live in herds on ice floes. Using its\n"
            "powerful flippers, it shatters ice.\n"
            "It dives into the sea to hunt prey five\n"
            "times a day."),
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WALREIN] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Walrein"),
        .cryId = CRY_WALREIN,
        .natDexNum = NATIONAL_DEX_WALREIN,
        .categoryName = _("Ice Break"),
        .height = 14,
        .weight = 1506,
        .description = COMPOUND_STRING(
            "To protect its herd, the leader battles\n"
            "anything that invades its territory, even\n"
            "at the cost of its life. Its tusks may snap\n"
            "off in battle."),
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SPHEAL

#if P_FAMILY_CLAMPERL
    [SPECIES_CLAMPERL] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Clamperl"),
        .cryId = CRY_CLAMPERL,
        .natDexNum = NATIONAL_DEX_CLAMPERL,
        .categoryName = _("Bivalve"),
        .height = 4,
        .weight = 525,
        .description = COMPOUND_STRING(
            "A Clamperl slams its shell closed on prey\n"
            "to prevent escape. The pearl it creates\n"
            "upon evolution is said to be infused with\n"
            "a mysterious energy."),
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HUNTAIL] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Huntail"),
        .cryId = CRY_HUNTAIL,
        .natDexNum = NATIONAL_DEX_HUNTAIL,
        .categoryName = _("Deep Sea"),
        .height = 17,
        .weight = 270,
        .description = COMPOUND_STRING(
            "To withstand the crushing pressure of\n"
            "water deep under the sea, its spine is very\n"
            "thick and sturdy. Its tail, which is shaped\n"
            "like a small fish, has eyes that light up."),
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOREBYSS] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Gorebyss"),
        .cryId = CRY_GOREBYSS,
        .natDexNum = NATIONAL_DEX_GOREBYSS,
        .categoryName = _("South Sea"),
        .height = 18,
        .weight = 226,
        .description = COMPOUND_STRING(
            "A Gorebyss siphons the body fluids of prey\n"
            "through its thin, tubular mouth. Its light\n"
            "pink body color turns vivid when it\n"
            "finishes feeding."),
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CLAMPERL

#if P_FAMILY_RELICANTH
    [SPECIES_RELICANTH] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Relicanth"),
        .cryId = CRY_RELICANTH,
        .natDexNum = NATIONAL_DEX_RELICANTH,
        .categoryName = _("Longevity"),
        .height = 10,
        .weight = 234,
        .description = COMPOUND_STRING(
            "A Pokémon that was once believed to have\n"
            "been extinct. The species has not changed\n"
            "its form for 100 million years. It walks on\n"
            "the seafloor using its pectoral fins."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_RELICANTH

#if P_FAMILY_LUVDISC
    [SPECIES_LUVDISC] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Luvdisc"),
        .cryId = CRY_LUVDISC,
        .natDexNum = NATIONAL_DEX_LUVDISC,
        .categoryName = _("Rendezvous"),
        .height = 6,
        .weight = 87,
        .description = COMPOUND_STRING(
            "Luvdisc make the branches of Corsola\n"
            "their nests. There is a custom from long\n"
            "ago of giving a Luvdisc as a gift to\n"
            "express one's feelings of love."),
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_BAGON
    [SPECIES_BAGON] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bagon"),
        .cryId = CRY_BAGON,
        .natDexNum = NATIONAL_DEX_BAGON,
        .categoryName = _("Rock Head"),
        .height = 6,
        .weight = 421,
        .description = COMPOUND_STRING(
            "Although it is small, this Pokémon is very\n"
            "powerful because its body is a bundle of\n"
            "muscles. It launches head-butts with its\n"
            "ironlike skull."),
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SHELGON] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Shelgon"),
        .cryId = CRY_SHELGON,
        .natDexNum = NATIONAL_DEX_SHELGON,
        .categoryName = _("Endurance"),
        .height = 11,
        .weight = 1105,
        .description = COMPOUND_STRING(
            "It hardly eats while it awaits evolution.\n"
            "It becomes hardier by enduring hunger.\n"
            "Its shell peels off the instant it begins\n"
            "to evolve."),
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SALAMENCE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Salamence"),
        .cryId = CRY_SALAMENCE,
        .natDexNum = NATIONAL_DEX_SALAMENCE,
        .categoryName = _("Dragon"),
        .height = 15,
        .weight = 1026,
        .description = COMPOUND_STRING(
            "After many long years, its cellular\n"
            "structure underwent a sudden mutation to\n"
            "grow wings. When angered, it loses all\n"
            "thought and rampages out of control."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SALAMENCE_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Salamence"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_SALAMENCE_MEGA,
    #else
        .cryId = CRY_SALAMENCE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_SALAMENCE,
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 1126,
        .description = COMPOUND_STRING(
            "Mega Evolution fuels its brutality, and it\n"
            "may even turn on the Trainer who raised it.\n"
            "It's been dubbed the blood-soaked.\n"
            "crescent."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BAGON

#if P_FAMILY_BELDUM
    [SPECIES_BELDUM] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Beldum"),
        .cryId = CRY_BELDUM,
        .natDexNum = NATIONAL_DEX_BELDUM,
        .categoryName = _("Iron Ball"),
        .height = 6,
        .weight = 952,
        .description = COMPOUND_STRING(
            "When Beldum gather in a swarm, they move\n"
            "in perfect unison as if they were but one\n"
            "Pokémon. They communicate with each other\n"
            "using brain waves."),
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_METANG] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Metang"),
        .cryId = CRY_METANG,
        .natDexNum = NATIONAL_DEX_METANG,
        .categoryName = _("Iron Claw"),
        .height = 12,
        .weight = 2025,
        .description = COMPOUND_STRING(
            "The claws tipping its arms pack the\n"
            "destructive power to tear through thick\n"
            "iron sheets as if they were silk. It flies\n"
            "at over 60 miles per hour."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_METAGROSS] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Metagross"),
        .cryId = CRY_METAGROSS,
        .natDexNum = NATIONAL_DEX_METAGROSS,
        .categoryName = _("Iron Leg"),
        .height = 16,
        .weight = 5500,
        .description = COMPOUND_STRING(
            "Metagross has four brains that are joined\n"
            "by a complex neural network. As a result of\n"
            "integration, this Pokémon is smarter than\n"
            "a supercomputer."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_METAGROSS_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Metagross"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_METAGROSS_MEGA,
    #else
        .cryId = CRY_METAGROSS,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_METAGROSS,
        .categoryName = _("Iron Leg"),
        .height = 25,
        .weight = 9429,
        .description = COMPOUND_STRING(
            "When it knows it can't win, it digs the\n"
            "claws on its legs into its opponent and\n"
            "starts the countdown to a big explosion."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BELDUM

#if P_FAMILY_REGIROCK
    [SPECIES_REGIROCK] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Regirock"),
        .cryId = CRY_REGIROCK,
        .natDexNum = NATIONAL_DEX_REGIROCK,
        .categoryName = _("Rock Peak"),
        .height = 17,
        .weight = 2300,
        .description = COMPOUND_STRING(
            "A Pokémon that is made entirely of rocks\n"
            "and boulders. If parts of its body chip off\n"
            "in battle, Regirock repairs itself by\n"
            "adding new rocks."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_REGIROCK

#if P_FAMILY_REGICE
    [SPECIES_REGICE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Regice"),
        .cryId = CRY_REGICE,
        .natDexNum = NATIONAL_DEX_REGICE,
        .categoryName = _("Iceberg"),
        .height = 18,
        .weight = 1750,
        .description = COMPOUND_STRING(
            "Its entire body is made of Antarctic ice.\n"
            "After extensive studies, researchers\n"
            "believe the ice was formed during an\n"
            "ice age."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },
#endif //P_FAMILY_REGICE

#if P_FAMILY_REGISTEEL
    [SPECIES_REGISTEEL] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Registeel"),
        .cryId = CRY_REGISTEEL,
        .natDexNum = NATIONAL_DEX_REGISTEEL,
        .categoryName = _("Iron"),
        .height = 19,
        .weight = 2050,
        .description = COMPOUND_STRING(
            "Its body is harder than any other kind of\n"
            "metal. The body metal is composed of a\n"
            "mysterious substance. Not only is it hard,\n"
            "it shrinks and stretches flexibly."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },
#endif //P_FAMILY_REGISTEEL

#if P_FAMILY_LATIAS
    [SPECIES_LATIAS] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Latias"),
        .cryId = CRY_LATIAS,
        .natDexNum = NATIONAL_DEX_LATIAS,
        .categoryName = _("Eon"),
        .height = 14,
        .weight = 400,
        .description = COMPOUND_STRING(
            "They make a small herd of only several\n"
            "members. They rarely make contact with\n"
            "people or other Pokémon. They disappear\n"
            "if they sense enemies."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIAS_MEGA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Latias"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_LATIAS_MEGA,
    #else
        .cryId = CRY_LATIAS,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_LATIAS,
        .categoryName = _("Eon"),
        .height = 18,
        .weight = 520,
        .description = COMPOUND_STRING(
            "Its body is smaller than Mega Latios's\n"
            "body. It is more agile and can make very\n"
            "sharp turns. When it Mega Evolves, its\n"
            "defensive strength grows substantially."),
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIAS

#if P_FAMILY_LATIOS
    [SPECIES_LATIOS] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Latios"),
        .cryId = CRY_LATIOS,
        .natDexNum = NATIONAL_DEX_LATIOS,
        .categoryName = _("Eon"),
        .height = 20,
        .weight = 600,
        .description = COMPOUND_STRING(
            "Even in hiding, it can detect the locations\n"
            "of others and sense their emotions since\n"
            "it has telepathy. Its intelligence allows\n"
            "it to understand human languages."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LATIOS_MEGA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Latios"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_LATIOS_MEGA,
    #else
        .cryId = CRY_LATIOS,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_LATIOS,
        .categoryName = _("Eon"),
        .height = 23,
        .weight = 700,
        .description = COMPOUND_STRING(
            "It's larger than Mega Latias, and can\n"
            "achieve higher speeds in flight.\n"
            "This Pokémon can use its speed in battle\n"
            "to unleash a flurry of attacks."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LATIOS

#if P_FAMILY_KYOGRE
    [SPECIES_KYOGRE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Kyogre"),
        .cryId = CRY_KYOGRE,
        .natDexNum = NATIONAL_DEX_KYOGRE,
        .categoryName = _("Sea Basin"),
        .height = 45,
        .weight = 3520,
        .description = COMPOUND_STRING(
            "Kyogre has appeared in mythology as the\n"
            "creator of the sea. After long years of\n"
            "feuding with Groudon, it took to sleep at\n"
            "the bottom of the sea."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },
#if P_PRIMAL_REVERSIONS
    [SPECIES_KYOGRE_PRIMAL] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Kyogre"),
        .cryId = CRY_KYOGRE_PRIMAL,
        .natDexNum = NATIONAL_DEX_KYOGRE,
        .categoryName = _("Sea Basin"),
        .height = 98,
        .weight = 4300,
        .description = COMPOUND_STRING(
            "When Kyogre roared, water poured forth\n"
            "and the seas spread outward.\n"
            "Dark clouds enshrouded the world,\n"
            "and the deluge fell upon all…"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE

#if P_FAMILY_GROUDON
    [SPECIES_GROUDON] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Groudon"),
        .cryId = CRY_GROUDON,
        .natDexNum = NATIONAL_DEX_GROUDON,
        .categoryName = _("Continent"),
        .height = 35,
        .weight = 9500,
        .description = COMPOUND_STRING(
            "Groudon has appeared in mythology as the\n"
            "creator of the land. It sleeps in magma\n"
            "underground and is said to make volcanoes\n"
            "erupt on awakening."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

#if P_PRIMAL_REVERSIONS
    [SPECIES_GROUDON_PRIMAL] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Groudon"),
        .cryId = CRY_GROUDON_PRIMAL,
        .natDexNum = NATIONAL_DEX_GROUDON,
        .categoryName = _("Continent"),
        .height = 50,
        .weight = 9997,
        .description = COMPOUND_STRING(
            "When Groudon howled, the earth swelled and\n"
            "the land grew wide. The sun blazed atop\n"
            "and all the world around the creature\n"
            "was enveloped in incandescent heat."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON

#if P_FAMILY_RAYQUAZA
    [SPECIES_RAYQUAZA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rayquaza"),
        .cryId = CRY_RAYQUAZA,
        .natDexNum = NATIONAL_DEX_RAYQUAZA,
        .categoryName = _("Sky High"),
        .height = 70,
        .weight = 2065,
        .description = COMPOUND_STRING(
            "A Pokémon that flies endlessly in the\n"
            "ozone layer. It is said it would descend\n"
            "to the ground if Kyogre and Groudon\n"
            "were to fight."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_RAYQUAZA_MEGA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rayquaza"),
        .cryId = CRY_RAYQUAZA,
        .natDexNum = NATIONAL_DEX_RAYQUAZA,
        .categoryName = _("Sky High"),
        .height = 108,
        .weight = 3920,
        .description = COMPOUND_STRING(
            "Particles stream from the filaments that\n"
            "extend from its jaw. They can control the\n"
            "density and humidity of the air, allowing\n"
            "Rayquaza to manipulate the weather."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_RAYQUAZA

#if P_FAMILY_JIRACHI
    [SPECIES_JIRACHI] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Jirachi"),
        .cryId = CRY_JIRACHI,
        .natDexNum = NATIONAL_DEX_JIRACHI,
        .categoryName = _("Wish"),
        .height = 3,
        .weight = 11,
        .description = COMPOUND_STRING(
            "Jirachi is said to make wishes come true.\n"
            "While it sleeps, a tough crystalline shell\n"
            "envelops the body to protect it from\n"
            "enemies."),
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_JIRACHI

#if P_FAMILY_DEOXYS
    [SPECIES_DEOXYS_NORMAL] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deoxys"),
        .cryId = CRY_DEOXYS,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = COMPOUND_STRING(
            "Deoxys emerged from a virus that came\n"
            "from space. It is highly intelligent and\n"
            "can shoot lasers from the crystalline\n"
            "organ on its chest."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [SPECIES_DEOXYS_ATTACK] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deoxys"),
        .cryId = CRY_DEOXYS,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = COMPOUND_STRING(
            "This Deoxys has transformed into its\n"
            "aggressive guise. It can fool enemies\n"
            "by altering its appearance."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [SPECIES_DEOXYS_DEFENSE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deoxys"),
        .cryId = CRY_DEOXYS,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = COMPOUND_STRING(
            "When it changes form, an aurora\n"
            "appears. It absorbs attacks by\n"
            "altering its cellular structure."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [SPECIES_DEOXYS_SPEED] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deoxys"),
        .cryId = CRY_DEOXYS,
        .natDexNum = NATIONAL_DEX_DEOXYS,
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = COMPOUND_STRING(
            "A Pokémon that mutated from an\n"
            "extraterrestrial virus exposed to a laser\n"
            "beam. Its body is configured for superior \n"
            "agility and speed."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },
#endif //P_FAMILY_DEOXYS

#ifdef __INTELLISENSE__
};
#endif
