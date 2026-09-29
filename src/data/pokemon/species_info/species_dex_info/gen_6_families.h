#ifdef __INTELLISENSE__
const struct SpeciesDexInfo gSpeciesDexInfoGen6[] =
{
#endif

#if P_FAMILY_CHESPIN
    [SPECIES_CHESPIN] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chespin"),
        .cryId = CRY_CHESPIN,
        .natDexNum = NATIONAL_DEX_CHESPIN,
        .categoryName = _("Spiny Nut"),
        .height = 4,
        .weight = 90,
        .description = COMPOUND_STRING(
            "The quills on its head are usually soft.\n"
            "When it flexes them, the points become\n"
            "so hard and sharp that they can pierce\n"
            "rock without any effort."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_QUILLADIN] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Quilladin"),
        .cryId = CRY_QUILLADIN,
        .natDexNum = NATIONAL_DEX_QUILLADIN,
        .categoryName = _("Spiny Armor"),
        .height = 7,
        .weight = 290,
        .description = COMPOUND_STRING(
            "They strengthen the sturdy shell covering\n"
            "their bodies by running into one another.\n"
            "They are very kind and won't start fights,\n"
            "but will counterattack with sharp quills."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CHESNAUGHT] =
    {
        .bodyColor = BODY_COLOR_GREEN,                      
        .speciesName = _("Chesnaught"),                     
        .natDexNum = NATIONAL_DEX_CHESNAUGHT,               
        .categoryName = _("Spiny Armor"),                   
        .height = 16,                                       
        .weight = 900,                                      
        .description = COMPOUND_STRING(                     
            "It shields its allies from danger with\n"      
            "its own body. When it takes a defensive\n"     
            "posture with its fists guarding its face,\n"   
            "it can withstand a bomb blast."),              
        .pokemonScale = 259,                                
        .pokemonOffset = 1,                                 
        .trainerScale = 296,                                
        .trainerOffset = 1,                                 
        .cryId = CRY_CHESNAUGHT,
    },
    [SPECIES_CHESNAUGHT_MEGA] =
    {
        .bodyColor = BODY_COLOR_GREEN,                      
        .speciesName = _("Chesnaught"),                     
        .natDexNum = NATIONAL_DEX_CHESNAUGHT,               
        .categoryName = _("Spiny Armor"),                   
        .height = 16,                                       
        .weight = 900,                                      
        .description = COMPOUND_STRING(                     
            "It shields its allies from danger with\n"      
            "its own body. When it takes a defensive\n"     
            "posture with its fists guarding its face,\n"   
            "it can withstand a bomb blast."),              
        .pokemonScale = 259,                                
        .pokemonOffset = 1,                                 
        .trainerScale = 296,                                
        .trainerOffset = 1,                                 
        .cryId = CRY_CHESNAUGHT,
    },
#endif //P_FAMILY_CHESPIN

#if P_FAMILY_FENNEKIN
    [SPECIES_FENNEKIN] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fennekin"),
        .cryId = CRY_FENNEKIN,
        .natDexNum = NATIONAL_DEX_FENNEKIN,
        .categoryName = _("Fox"),
        .height = 4,
        .weight = 94,
        .description = COMPOUND_STRING(
            "As it walks, it munches on a twig to fill\n"
            "itself with energy in place of a snack.\n"
            "It intimidates opponents by puffing hot\n"
            "air out of its roomy ears."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BRAIXEN] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Braixen"),
        .cryId = CRY_BRAIXEN,
        .natDexNum = NATIONAL_DEX_BRAIXEN,
        .categoryName = _("Fox"),
        .height = 10,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Braixen has a twig stuck in its tail.\n"
            "When the twig is plucked from its tail,\n"
            "friction sets the twig alight. The flame\n"
            "is used to send signals to its allies."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_DELPHOX] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Delphox"),
        .cryId = CRY_DELPHOX,
        .natDexNum = NATIONAL_DEX_DELPHOX,
        .categoryName = _("Fox"),
        .height = 15,
        .weight = 390,
        .description = COMPOUND_STRING(
            "It gazes into the flame at the tip of its\n"
            "branch to achieve a focused state, which\n"
            "allows it to see into the future. It uses\n"
            "psychic power to incinerate its foes."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DELPHOX_MEGA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Delphox"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_DELPHOX_MEGA,
    #else
        .cryId = CRY_DELPHOX,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_DELPHOX,
        .categoryName = _("Fox"),
        .height = 15,
        .weight = 390,
        .description = COMPOUND_STRING(
            "It wields flaming branches to\n"
            "dazzle its opponents before\n"
            "incinerating them with a\n"
            "huge fireball."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FENNEKIN

#if P_FAMILY_FROAKIE
    [SPECIES_FROAKIE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Froakie"),
        .cryId = CRY_FROAKIE,
        .natDexNum = NATIONAL_DEX_FROAKIE,
        .categoryName = _("Bubble Frog"),
        .height = 3,
        .weight = 70,
        .description = COMPOUND_STRING(
            "It protects its skin by covering its body\n"
            "in bubbles it secretes from its chest and\n"
            "back. Beneath its happy-go-lucky air, it\n"
            "keeps a watchful eye on its surroundings."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_FROGADIER] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Frogadier"),
        .cryId = CRY_FROGADIER,
        .natDexNum = NATIONAL_DEX_FROGADIER,
        .categoryName = _("Bubble Frog"),
        .height = 6,
        .weight = 109,
        .description = COMPOUND_STRING(
            "It can throw bubble-covered pebbles with\n"
            "precise control, hitting empty cans up to\n"
            "a hundred feet away. Frogadier's swiftness\n"
            "is unparalleled."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GRENINJA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Greninja"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [SPECIES_GRENINJA_BATTLE_BOND] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Greninja"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [SPECIES_GRENINJA_ASH] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Greninja"),
        .cryId = CRY_GRENINJA,
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GRENINJA_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Greninja"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GRENINJA_MEGA,
    #else
        .cryId = CRY_GRENINJA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GRENINJA,
        .categoryName = _("Ninja"),
        .height = 15,
        .weight = 400,
        .description = COMPOUND_STRING(
            "This Pokémon spins a giant\n"
            "shuriken at high speed to make it\n"
            "float, then clings to it upside\n"
            "down to catch opponents unawares."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FROAKIE

#if P_FAMILY_BUNNELBY
    [SPECIES_BUNNELBY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bunnelby"),
        .cryId = CRY_BUNNELBY,
        .natDexNum = NATIONAL_DEX_BUNNELBY,
        .categoryName = _("Digging"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It has ears like shovels. Digging holes\n"
            "strengthens its ears so much that they\n"
            "can sever thick roots effortlessly.\n"
            "Bunnelby dig the whole night through."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DIGGERSBY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Diggersby"),
        .cryId = CRY_DIGGERSBY,
        .natDexNum = NATIONAL_DEX_DIGGERSBY,
        .categoryName = _("Digging"),
        .height = 10,
        .weight = 424,
        .description = COMPOUND_STRING(
            "With its powerful ears it reduces dense\n"
            "bedrock to rubble. It can be a big help\n"
            "at construction sites. When it's finished\n"
            "digging, it lounges about lazily."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_BUNNELBY

#if P_FAMILY_FLETCHLING
    [SPECIES_FLETCHLING] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fletchling"),
        .cryId = CRY_FLETCHLING,
        .natDexNum = NATIONAL_DEX_FLETCHLING,
        .categoryName = _("Tiny Robin"),
        .height = 3,
        .weight = 17,
        .description = COMPOUND_STRING(
            "This amiable Pokémon is easy to train.\n"
            "But when battle is joined, it shows its\n"
            "ferocious side. It's merciless to\n"
            "intruders that enter its territory."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_FLETCHINDER] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Fletchinder"),
        .cryId = CRY_FLETCHINDER,
        .natDexNum = NATIONAL_DEX_FLETCHINDER,
        .categoryName = _("Ember"),
        .height = 7,
        .weight = 160,
        .description = COMPOUND_STRING(
            "From its beak, it expels embers that set\n"
            "the tall grass on fire. Then it pounces on\n"
            "any bewildered Pokémon that pop out of\n"
            "the grass."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TALONFLAME] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Talonflame"),
        .cryId = CRY_TALONFLAME,
        .natDexNum = NATIONAL_DEX_TALONFLAME,
        .categoryName = _("Scorching"),
        .height = 12,
        .weight = 245,
        .description = COMPOUND_STRING(
            "In the fever of an exciting battle, it\n"
            "showers embers from the gaps between its\n"
            "feathers and takes to the air. It finishes\n"
            "its prey off with a colossal kick."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_FLETCHLING

#if P_FAMILY_SCATTERBUG
#define SCATTERBUG_SPECIES_INFO_DEX(evolution)                                                  \
    {                                                                                       \
        .bodyColor = BODY_COLOR_BLACK,                                                      \
        .speciesName = _("Scatterbug"),                                                     \
        .cryId = CRY_SCATTERBUG,                                                            \
        .natDexNum = NATIONAL_DEX_SCATTERBUG,                                               \
        .categoryName = _("Scatterdust"),                                                   \
        .height = 3,                                                                        \
        .weight = 25,                                                                       \
        .description = gScatterbugPokedexText,                                              \
        .pokemonScale = 530,                                                                \
        .pokemonOffset = 13,                                                                \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,                                                                 \
    }                                                                                       \

    [SPECIES_SCATTERBUG_ICY_SNOW]    = SCATTERBUG_SPECIES_INFO_DEX(ICY_SNOW),
    [SPECIES_SCATTERBUG_POLAR]       = SCATTERBUG_SPECIES_INFO_DEX(POLAR),
    [SPECIES_SCATTERBUG_TUNDRA]      = SCATTERBUG_SPECIES_INFO_DEX(TUNDRA),
    [SPECIES_SCATTERBUG_CONTINENTAL] = SCATTERBUG_SPECIES_INFO_DEX(CONTINENTAL),
    [SPECIES_SCATTERBUG_GARDEN]      = SCATTERBUG_SPECIES_INFO_DEX(GARDEN),
    [SPECIES_SCATTERBUG_ELEGANT]     = SCATTERBUG_SPECIES_INFO_DEX(ELEGANT),
    [SPECIES_SCATTERBUG_MEADOW]      = SCATTERBUG_SPECIES_INFO_DEX(MEADOW),
    [SPECIES_SCATTERBUG_MODERN]      = SCATTERBUG_SPECIES_INFO_DEX(MODERN),
    [SPECIES_SCATTERBUG_MARINE]      = SCATTERBUG_SPECIES_INFO_DEX(MARINE),
    [SPECIES_SCATTERBUG_ARCHIPELAGO] = SCATTERBUG_SPECIES_INFO_DEX(ARCHIPELAGO),
    [SPECIES_SCATTERBUG_HIGH_PLAINS] = SCATTERBUG_SPECIES_INFO_DEX(HIGH_PLAINS),
    [SPECIES_SCATTERBUG_SANDSTORM]   = SCATTERBUG_SPECIES_INFO_DEX(SANDSTORM),
    [SPECIES_SCATTERBUG_RIVER]       = SCATTERBUG_SPECIES_INFO_DEX(RIVER),
    [SPECIES_SCATTERBUG_MONSOON]     = SCATTERBUG_SPECIES_INFO_DEX(MONSOON),
    [SPECIES_SCATTERBUG_SAVANNA]     = SCATTERBUG_SPECIES_INFO_DEX(SAVANNA),
    [SPECIES_SCATTERBUG_SUN]         = SCATTERBUG_SPECIES_INFO_DEX(SUN),
    [SPECIES_SCATTERBUG_OCEAN]       = SCATTERBUG_SPECIES_INFO_DEX(OCEAN),
    [SPECIES_SCATTERBUG_JUNGLE]      = SCATTERBUG_SPECIES_INFO_DEX(JUNGLE),
    [SPECIES_SCATTERBUG_FANCY]       = SCATTERBUG_SPECIES_INFO_DEX(FANCY),
    [SPECIES_SCATTERBUG_POKEBALL]    = SCATTERBUG_SPECIES_INFO_DEX(POKEBALL),

#define SPEWPA_SPECIES_INFO_DEX(evolution)                                          \
    {                                                                           \
        .bodyColor = BODY_COLOR_BLACK,                                          \
        .speciesName = _("Spewpa"),                                             \
        .cryId = CRY_SPEWPA,                                                    \
        .natDexNum = NATIONAL_DEX_SPEWPA,                                       \
        .categoryName = _("Scatterdust"),                                       \
        .height = 3,                                                            \
        .weight = 84,                                                           \
        .description = gSpewpaPokedexText,                                      \
        .pokemonScale = 530,                                                    \
        .pokemonOffset = 13,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
    }

    [SPECIES_SPEWPA_ICY_SNOW]    = SPEWPA_SPECIES_INFO_DEX(ICY_SNOW),
    [SPECIES_SPEWPA_POLAR]       = SPEWPA_SPECIES_INFO_DEX(POLAR),
    [SPECIES_SPEWPA_TUNDRA]      = SPEWPA_SPECIES_INFO_DEX(TUNDRA),
    [SPECIES_SPEWPA_CONTINENTAL] = SPEWPA_SPECIES_INFO_DEX(CONTINENTAL),
    [SPECIES_SPEWPA_GARDEN]      = SPEWPA_SPECIES_INFO_DEX(GARDEN),
    [SPECIES_SPEWPA_ELEGANT]     = SPEWPA_SPECIES_INFO_DEX(ELEGANT),
    [SPECIES_SPEWPA_MEADOW]      = SPEWPA_SPECIES_INFO_DEX(MEADOW),
    [SPECIES_SPEWPA_MODERN]      = SPEWPA_SPECIES_INFO_DEX(MODERN),
    [SPECIES_SPEWPA_MARINE]      = SPEWPA_SPECIES_INFO_DEX(MARINE),
    [SPECIES_SPEWPA_ARCHIPELAGO] = SPEWPA_SPECIES_INFO_DEX(ARCHIPELAGO),
    [SPECIES_SPEWPA_HIGH_PLAINS] = SPEWPA_SPECIES_INFO_DEX(HIGH_PLAINS),
    [SPECIES_SPEWPA_SANDSTORM]   = SPEWPA_SPECIES_INFO_DEX(SANDSTORM),
    [SPECIES_SPEWPA_RIVER]       = SPEWPA_SPECIES_INFO_DEX(RIVER),
    [SPECIES_SPEWPA_MONSOON]     = SPEWPA_SPECIES_INFO_DEX(MONSOON),
    [SPECIES_SPEWPA_SAVANNA]     = SPEWPA_SPECIES_INFO_DEX(SAVANNA),
    [SPECIES_SPEWPA_SUN]         = SPEWPA_SPECIES_INFO_DEX(SUN),
    [SPECIES_SPEWPA_OCEAN]       = SPEWPA_SPECIES_INFO_DEX(OCEAN),
    [SPECIES_SPEWPA_JUNGLE]      = SPEWPA_SPECIES_INFO_DEX(JUNGLE),
    [SPECIES_SPEWPA_FANCY]       = SPEWPA_SPECIES_INFO_DEX(FANCY),
    [SPECIES_SPEWPA_POKEBALL]   = SPEWPA_SPECIES_INFO_DEX(POKEBALL),

#define VIVILLON_MISC_INFO_DEX(form, color, iconPal)                                            \
        .bodyColor = color,                                                                 \
        .speciesName = _("Vivillon"),                                                       \
        .cryId = CRY_VIVILLON,                                                              \
        .natDexNum = NATIONAL_DEX_VIVILLON,                                                 \
        .categoryName = _("Scale"),                                                         \
        .height = 12,                                                                       \
        .weight = 170,                                                                      \
        .pokemonScale = 282,                                                                \
        .pokemonOffset = 4,                                                                 \
        .trainerScale = 256,                                                                \
        .trainerOffset = 0,

    [SPECIES_VIVILLON_ICY_SNOW] =
    {
        VIVILLON_MISC_INFO_DEX(IcySnow, BODY_COLOR_WHITE, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from frigid lands.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_POLAR] =
    {
        VIVILLON_MISC_INFO_DEX(Polar, BODY_COLOR_BLUE, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from snowy lands.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_TUNDRA] =
    {
        VIVILLON_MISC_INFO_DEX(Tundra, BODY_COLOR_BLUE, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from lands of severe cold.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_CONTINENTAL] =
    {
        VIVILLON_MISC_INFO_DEX(Continental, BODY_COLOR_YELLOW, 2)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from lands of vast space.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_GARDEN] =
    {
        VIVILLON_MISC_INFO_DEX(Garden, BODY_COLOR_GREEN, 1)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from verdant lands.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_ELEGANT] =
    {
        VIVILLON_MISC_INFO_DEX(Elegant, BODY_COLOR_PURPLE, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in. This\n"
            "form is from lands with distinct seasons.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_MEADOW] =
    {
        VIVILLON_MISC_INFO_DEX(Meadow, BODY_COLOR_PINK, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in. This\n"
            "form is from lands where flowers bloom.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_MODERN] =
    {
        VIVILLON_MISC_INFO_DEX(Modern, BODY_COLOR_RED, 2)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from sun-drenched lands.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_MARINE] =
    {
        VIVILLON_MISC_INFO_DEX(Marine, BODY_COLOR_BLUE, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in. This\n"
            "form is from lands with ocean breezes.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_ARCHIPELAGO] =
    {
        VIVILLON_MISC_INFO_DEX(Archipelago, BODY_COLOR_BROWN, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from places with many islands.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_HIGH_PLAINS] =
    {
        VIVILLON_MISC_INFO_DEX(HighPlains, BODY_COLOR_BROWN, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from lands with little rain.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_SANDSTORM] =
    {
        VIVILLON_MISC_INFO_DEX(Sandstorm, BODY_COLOR_BROWN, 1)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from parched lands.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_RIVER] =
    {
        VIVILLON_MISC_INFO_DEX(River, BODY_COLOR_BROWN, 2)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in. This\n"
            "form is from lands where large rivers flow.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_MONSOON] =
    {
        VIVILLON_MISC_INFO_DEX(Monsoon, BODY_COLOR_GRAY, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in. This\n"
            "form is from lands with intense rainfall.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_SAVANNA] =
    {
        VIVILLON_MISC_INFO_DEX(Savanna, BODY_COLOR_GREEN, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in. This\n"
            "form is from lands with a tropical climate.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_SUN] =
    {
        VIVILLON_MISC_INFO_DEX(Sun, BODY_COLOR_RED, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from lands bathed in light.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_OCEAN] =
    {
        VIVILLON_MISC_INFO_DEX(Ocean, BODY_COLOR_RED, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in. This\n"
            "form is from lands of perpetual summer.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_JUNGLE] =
    {
        VIVILLON_MISC_INFO_DEX(Jungle, BODY_COLOR_GREEN, 0)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in. This\n"
            "form is from lands of tropical rainforests.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_FANCY] =
    {
        VIVILLON_MISC_INFO_DEX(Fancy, BODY_COLOR_PINK, 1)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from a mysterious land.\n"
            "It scatters toxic color scales in battle."),
    },

    [SPECIES_VIVILLON_POKEBALL] =
    {
        VIVILLON_MISC_INFO_DEX(PokeBall, BODY_COLOR_RED, 2)
        .description = COMPOUND_STRING(
            "Its pattern depends on the climate and\n"
            "topography of the land it was born in.\n"
            "This form is from a special land.\n"
            "It scatters toxic color scales in battle."),
    },
#endif //P_FAMILY_SCATTERBUG

#if P_FAMILY_LITLEO
    [SPECIES_LITLEO] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Litleo"),
        .cryId = CRY_LITLEO,
        .natDexNum = NATIONAL_DEX_LITLEO,
        .categoryName = _("Lion Cub"),
        .height = 6,
        .weight = 135,
        .description = COMPOUND_STRING(
            "They set off on their own from their pride\n"
            "and live by themselves to become stronger.\n"
            "These hot-blooded Pokémon are quick\n"
            "to start a fight."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PYROAR] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pyroar"),
        .cryId = CRY_PYROAR,
        .natDexNum = NATIONAL_DEX_PYROAR,
        .categoryName = _("Royal"),
        .height = 15,
        .weight = 815,
        .description = COMPOUND_STRING(
            "The male with the largest mane of fire\n"
            "is the leader of the pride. The females\n"
            "protect the pride's cubs. They viciously\n"
            "threaten any challenger."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_PYROAR_MEGA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pyroar"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_PYROAR_MEGA,
    #else
        .cryId = CRY_PYROAR,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_PYROAR,
        .categoryName = _("Royal"),
        .height = 15,
        .weight = 933,
        .description = COMPOUND_STRING(
            "This Pokémon spews flames hotter\n"
            "than 18,000 degrees Fahrenheit.\n"
            "It swings around its grand, blazing\n"
            "mane as it protects its allies."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_LITLEO

#if P_FAMILY_FLABEBE
#define FLABEBE_MISC_INFO_DEX(Form, FORM, iconPal)                                  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Flabébé"),                                            \
        .cryId = CRY_FLABEBE,                                                   \
        .natDexNum = NATIONAL_DEX_FLABEBE,                                      \
        .categoryName = _("Single Bloom"),                                      \
        .height = 1,                                                            \
        .weight = 1,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,

    [SPECIES_FLABEBE_RED] =
    {
        FLABEBE_MISC_INFO_DEX(Red, RED, 1)
        .description = COMPOUND_STRING(
            "This Flabébé rides a red flower.\n"
            "Immediately after birth, this Pokémon\n"
            "begins flying around in search of a\n"
            "flower it likes."),
    },

    [SPECIES_FLABEBE_YELLOW] =
    {
        FLABEBE_MISC_INFO_DEX(Yellow, YELLOW, 1)
        .description = COMPOUND_STRING(
            "It unleashes a variety of moves by\n"
            "drawing forth the power hidden\n"
            "within flowers. This Pokémon is\n"
            "particularly fond of yellow flowers."),
    },

    [SPECIES_FLABEBE_ORANGE] =
    {
        FLABEBE_MISC_INFO_DEX(Orange, ORANGE, 0)
        .description = COMPOUND_STRING(
            "It receives strength from flowers\n"
            "and gives them some of its energy in\n"
            "return. This Pokémon likes orange\n"
            "flowers best of all."),
    },

    [SPECIES_FLABEBE_BLUE]   =
    {
        FLABEBE_MISC_INFO_DEX(Blue, BLUE, 0)
        .description = COMPOUND_STRING(
            "This Pokémon likes blue flowers\n"
            "best of all. It floats upward using the\n"
            "power emanating from its flower\n"
            "and bobs along lightly through the air."),
    },

    [SPECIES_FLABEBE_WHITE]  =
    {
        FLABEBE_MISC_INFO_DEX(White, WHITE, 1)
        .description = COMPOUND_STRING(
            "When evening falls, it searches out\n"
            "a place blooming with flowers of\n"
            "the same white color as itself, and\n"
            "then it goes to sleep."),
    },

#define FLOETTE_MISC_INFO_DEX(form, FORM, iconPal)                                  \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Floette"),                                            \
        .natDexNum = NATIONAL_DEX_FLOETTE,                                      \
        .categoryName = _("Single Bloom"),                                      \
        .height = 2,                                                            \
        .weight = 9,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,

#define FLOETTE_NORMAL_INFO_DEX(form, FORM, iconPal)                                                \
        .cryId = CRY_FLOETTE,                                                                   \
        FLOETTE_MISC_INFO_DEX(form, FORM, iconPal)

    [SPECIES_FLOETTE_RED] =
    {
        FLOETTE_NORMAL_INFO_DEX(Red, RED, 1)
        .description = COMPOUND_STRING(
            "This Pokémon uses red wavelengths\n"
            "of light to pour its own energy\n"
            "into flowers and draw forth their\n"
            "latent potential."),
    },

    [SPECIES_FLOETTE_YELLOW] =
    {
        FLOETTE_NORMAL_INFO_DEX(Yellow, YELLOW, 1)
        .description = COMPOUND_STRING(
            "This Pokémon can draw forth the\n"
            "power hidden within yellow flowers.\n"
            "This power then becomes the moves\n"
            "Floette uses to protect itself."),
    },

    [SPECIES_FLOETTE_ORANGE] =
    {
        FLOETTE_NORMAL_INFO_DEX(Orange, ORANGE, 0)
        .description = COMPOUND_STRING(
            "This Pokémon can draw forth the\n"
            "most power when in sync with orange\n"
            "flowers, compared to flowers of other\n"
            "colors."),
    },

    [SPECIES_FLOETTE_BLUE] =
    {
        FLOETTE_NORMAL_INFO_DEX(Blue, BLUE, 0)
        .description = COMPOUND_STRING(
            "Whenever this Pokémon finds\n"
            "flowering plants that are withering, it\n"
            "will bring them back to its territory\n"
            "and care for them."),
    },

    [SPECIES_FLOETTE_WHITE] =
    {
        FLOETTE_NORMAL_INFO_DEX(White, WHITE, 1)
        .description = COMPOUND_STRING(
            "If it finds someone messing up a\n"
            "flower bed, it will attack them\n"
            "without mercy. This Floette takes\n"
            "particularly good care of white flowers."),
    },

    [SPECIES_FLOETTE_ETERNAL] =
    {
        FLOETTE_MISC_INFO_DEX(Eternal, ETERNAL, 0)
        .cryId = CRY_FLOETTE_ETERNAL,
        .description = COMPOUND_STRING(
            "The flower it's holding can no\n"
            "longer be found blooming anywhere. It's\n"
            "also thought to contain terrifying\n"
            "power."),
    },

#define FLORGES_MISC_INFO_DEX(Form, iconPal)                                        \
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .speciesName = _("Florges"),                                            \
        .cryId = CRY_FLORGES,                                                   \
        .natDexNum = NATIONAL_DEX_FLORGES,                                      \
        .categoryName = _("Garden"),                                            \
        .height = 11,                                                           \
        .weight = 100,                                                          \
        .pokemonScale = 320,                                                    \
        .pokemonOffset = 7,                                                     \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,

    [SPECIES_FLORGES_RED] =
    {
        FLORGES_MISC_INFO_DEX(Red, 0)
        .description = COMPOUND_STRING(
            "This Pokémon creates an impressive\n"
            "flower garden in its territory. It\n"
            "draws forth the power of the red\n"
            "flowers around its neck."),
    },

    [SPECIES_FLORGES_YELLOW] =
    {
        FLORGES_MISC_INFO_DEX(Yellow, 1)
        .description = COMPOUND_STRING(
            "This Pokémon battles by drawing\n"
            "forth the power of yellow flowers. It\n"
            "ruthlessly punishes anyone who\n"
            "tramples on flowering plants."),
    },

    [SPECIES_FLORGES_ORANGE] =
    {
        FLORGES_MISC_INFO_DEX(Orange, 0)
        .description = COMPOUND_STRING(
            "In times long past, castle\n"
            "governors would lovingly raise Florges to\n"
            "care for their castles' exquisite\n"
            "gardens."),
    },

    [SPECIES_FLORGES_BLUE] =
    {
        FLORGES_MISC_INFO_DEX(Blue, 0)
        .description = COMPOUND_STRING(
            "Blue pigments were tremendously\n"
            "expensive in the past, so paintings\n"
            "of blue Florges are highly valuable."),
    },

    [SPECIES_FLORGES_WHITE] =
    {
        FLORGES_MISC_INFO_DEX(White, 0)
        .description = COMPOUND_STRING(
            "A flower garden made by a white-\n"
            "flowered Florges will be beautifully\n"
            "decorated with flowering plants of\n"
            "many different colors."),
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FLOETTE_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Floette"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_FLOETTE_MEGA,
    #else
        .cryId = CRY_FLOETTE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_FLOETTE,
        .categoryName = _("Single Bloom"),
        // height
        // weight
        .description = COMPOUND_STRING(
            "The Eternal Flower has absorbed\n"
            "all the energy from Mega\n"
            "Evolution. The flower now attacks\n"
            "enemies on its own."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FLABEBE

#if P_FAMILY_SKIDDO
    [SPECIES_SKIDDO] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Skiddo"),
        .cryId = CRY_SKIDDO,
        .natDexNum = NATIONAL_DEX_SKIDDO,
        .categoryName = _("Mount"),
        .height = 9,
        .weight = 310,
        .description = COMPOUND_STRING(
            "If it has sunshine and water, it doesn't\n"
            "need to eat, because it can generate\n"
            "energy from the leaves on its back.\n"
            "It has a placid disposition."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOGOAT] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gogoat"),
        .cryId = CRY_GOGOAT,
        .natDexNum = NATIONAL_DEX_GOGOAT,
        .categoryName = _("Mount"),
        .height = 17,
        .weight = 910,
        .description = COMPOUND_STRING(
            "It can tell how its trainer is feeling by\n"
            "subtle shifts in the grip on its horns. This\n"
            "empathetic sense lets them run as if one\n"
            "being. They inhabit mountainous regions."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_SKIDDO

#if P_FAMILY_PANCHAM
    [SPECIES_PANCHAM] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pancham"),
        .cryId = CRY_PANCHAM,
        .natDexNum = NATIONAL_DEX_PANCHAM,
        .categoryName = _("Playful"),
        .height = 6,
        .weight = 80,
        .description = COMPOUND_STRING(
            "There's no point to the leaf in its mouth,\n"
            "aside from an effort to look cool. It's\n"
            "mischievous, so it's not well suited to\n"
            "inexperienced Trainers."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PANGORO] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pangoro"),
        .cryId = CRY_PANGORO,
        .natDexNum = NATIONAL_DEX_PANGORO,
        .categoryName = _("Daunting"),
        .height = 21,
        .weight = 1360,
        .description = COMPOUND_STRING(
            "It boasts superb physical strength.\n"
            "Those who wish to become Pangoro's\n"
            "Trainer have no choice but to converse\n"
            "with their fists."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_PANCHAM

#if P_FAMILY_FURFROU
#define FURFROU_MISC_INFO_DEX(_form, _noFlip, frontWidth, frontYOffset, backWidth, backYOffset, _iconIdx, _overworldAnim)   \
    {                                                                                                                   \
        .bodyColor = BODY_COLOR_WHITE,                                                                                  \
        .speciesName = _("Furfrou"),                                                                                    \
        .cryId = CRY_FURFROU,                                                                                           \
        .natDexNum = NATIONAL_DEX_FURFROU,                                                                              \
        .categoryName = _("Poodle"),                                                                                    \
        .height = 12,                                                                                                   \
        .weight = 280,                                                                                                  \
        .description = gFurfrouPokedexText,                                                                             \
        .pokemonScale = 282,                                                                                            \
        .pokemonOffset = 4,                                                                                             \
        .trainerScale = 256,                                                                                            \
        .trainerOffset = 0,                                                                                             \
    }

    [SPECIES_FURFROU_NATURAL]   = FURFROU_MISC_INFO_DEX(Natural,   FALSE, 48, 3, 56, 0, 0, sAnimTable_Following),
    [SPECIES_FURFROU_HEART]     = FURFROU_MISC_INFO_DEX(Heart,     FALSE, 56, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_STAR]      = FURFROU_MISC_INFO_DEX(Star,      FALSE, 56, 2, 64, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_DIAMOND]   = FURFROU_MISC_INFO_DEX(Diamond,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_DEBUTANTE] = FURFROU_MISC_INFO_DEX(Debutante, TRUE,  48, 2, 56, 1, 2, sAnimTable_Following_Asym),
    [SPECIES_FURFROU_MATRON]    = FURFROU_MISC_INFO_DEX(Matron,    FALSE, 48, 2, 56, 1, 2, sAnimTable_Following),
    [SPECIES_FURFROU_DANDY]     = FURFROU_MISC_INFO_DEX(Dandy,     FALSE, 48, 2, 56, 1, 1, sAnimTable_Following),
    [SPECIES_FURFROU_LA_REINE]  = FURFROU_MISC_INFO_DEX(LaReine,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_KABUKI]    = FURFROU_MISC_INFO_DEX(Kabuki,    FALSE, 56, 2, 56, 1, 0, sAnimTable_Following),
    [SPECIES_FURFROU_PHARAOH]   = FURFROU_MISC_INFO_DEX(Pharaoh,   FALSE, 48, 2, 56, 1, 0, sAnimTable_Following),
#endif //P_FAMILY_FURFROU

#if P_FAMILY_ESPURR
    [SPECIES_ESPURR] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Espurr"),
        .cryId = CRY_ESPURR,
        .natDexNum = NATIONAL_DEX_ESPURR,
        .categoryName = _("Restraint"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "It has enough psychic energy to blast\n"
            "everything within 300 feet of itself.\n"
            "The organ that emits its intense psychic\n"
            "power is sheltered by its ears."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MEOWSTIC_M] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Meowstic"),
        .cryId = CRY_MEOWSTIC,
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Constraint"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "The defensive instinct of the\n"
            "males is strong. It's when they're\n"
            "protecting themselves or their partners\n"
            "that they unleash their full power."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MEOWSTIC_F] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Meowstic"),
        .cryId = CRY_MEOWSTIC,
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Constraint"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Females are a bit more selfish and\n"
            "aggressive than males. If they\n"
            "don't get what they want, they will\n"
            "torment you with their psychic abilities."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MEOWSTIC_M_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Meowstic"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MEOWSTIC_MEGA,
    #else
        .cryId = CRY_MEOWSTIC,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Constraint"),
        .height = 8,
        .weight = 101,
        .description = COMPOUND_STRING(
            "Mega Meowstic can use its psychic power\n"
            "to compress or expand anything. It\n"
            "overwhelms foes by contorting space\n"
            "itself."),
    },

    [SPECIES_MEOWSTIC_F_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Meowstic"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MEOWSTIC_MEGA,
    #else
        .cryId = CRY_MEOWSTIC,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MEOWSTIC,
        .categoryName = _("Constraint"),
        .height = 8,
        .weight = 101,
        .description = COMPOUND_STRING(
            "Mega Meowstic can use its psychic power\n"
            "to compress or expand anything. It\n"
            "overwhelms foes by contorting space\n"
            "itself."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ESPURR

#if P_FAMILY_HONEDGE
    [SPECIES_HONEDGE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Honedge"),
        .cryId = CRY_HONEDGE,
        .natDexNum = NATIONAL_DEX_HONEDGE,
        .categoryName = _("Sword"),
        .height = 8,
        .weight = 20,
        .description = COMPOUND_STRING(
            "If anyone dares to grab its hilt, it\n"
            "wraps a blue cloth around that person's\n"
            "arm and drains that person's life\n"
            "energy completely."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_DOUBLADE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Doublade"),
        .cryId = CRY_DOUBLADE,
        .natDexNum = NATIONAL_DEX_DOUBLADE,
        .categoryName = _("Sword"),
        .height = 8,
        .weight = 45,
        .description = COMPOUND_STRING(
            "When Honedge evolves, it divides into\n"
            "two swords. The complex attack patterns\n"
            "of its two swords are unstoppable, even\n"
            "against those skilled at swordplay."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_AEGISLASH_SHIELD] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Aegislash"),
        .cryId = CRY_AEGISLASH,
        .natDexNum = NATIONAL_DEX_AEGISLASH,
        .categoryName = _("Royal Sword"),
        .height = 17,
        .weight = 530,
        .description = COMPOUND_STRING(
            "In this defensive stance,\n"
            "Aegislash uses its steel body and a force\n"
            "field of spectral power to reduce the\n"
            "damage of any attack."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
    },

    [SPECIES_AEGISLASH_BLADE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Aegislash"),
        .cryId = CRY_AEGISLASH,
        .natDexNum = NATIONAL_DEX_AEGISLASH,
        .categoryName = _("Royal Sword"),
        .height = 17,
        .weight = 530,
        .description = COMPOUND_STRING(
            "Once upon a time, a king with an\n"
            "Aegislash reigned over the land. His\n"
            "Pokémon eventually drained him of\n"
            "life, and his kingdom fell with him."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_HONEDGE

#if P_FAMILY_SPRITZEE
    [SPECIES_SPRITZEE] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Spritzee"),
        .cryId = CRY_SPRITZEE,
        .natDexNum = NATIONAL_DEX_SPRITZEE,
        .categoryName = _("Perfume"),
        .height = 2,
        .weight = 5,
        .description = COMPOUND_STRING(
            "In the past, rather than using perfume,\n"
            "royal ladies carried a Spritzee that would\n"
            "waft a fragrance they liked. Its fragrance\n"
            "changes depending on what it has eaten."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_AROMATISSE] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Aromatisse"),
        .cryId = CRY_AROMATISSE,
        .natDexNum = NATIONAL_DEX_AROMATISSE,
        .categoryName = _("Fragrance"),
        .height = 8,
        .weight = 155,
        .description = COMPOUND_STRING(
            "Its scent is so overpowering that,\n"
            "unless a Trainer happens to really enjoy\n"
            "the smell, he or she will have a hard time\n"
            "walking alongside it."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SPRITZEE

#if P_FAMILY_SWIRLIX
    [SPECIES_SWIRLIX] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Swirlix"),
        .cryId = CRY_SWIRLIX,
        .natDexNum = NATIONAL_DEX_SWIRLIX,
        .categoryName = _("Cotton Candy"),
        .height = 4,
        .weight = 35,
        .description = COMPOUND_STRING(
            "Because it eats nothing but sweets, its\n"
            "fur is as sticky sweet as cotton candy.\n"
            "To entangle its opponents in battle, it\n"
            "extrudes sticky white threads."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SLURPUFF] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Slurpuff"),
        .cryId = CRY_SLURPUFF,
        .natDexNum = NATIONAL_DEX_SLURPUFF,
        .categoryName = _("Meringue"),
        .height = 8,
        .weight = 50,
        .description = COMPOUND_STRING(
            "Slurpuff can distinguish even the\n"
            "faintest of scents. It puts its sensitive\n"
            "sense of smell to use by helping pastry\n"
            "chefs in their work."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SWIRLIX

#if P_FAMILY_INKAY
    [SPECIES_INKAY] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Inkay"),
        .cryId = CRY_INKAY,
        .natDexNum = NATIONAL_DEX_INKAY,
        .categoryName = _("Revolving"),
        .height = 4,
        .weight = 35,
        .description = COMPOUND_STRING(
            "It flashes the light-emitting spots on its\n"
            "body, which drains its opponent's will\n"
            "to fight. It takes the opportunity to\n"
            "scuttle away and hide."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_INKAY_FLIPPED] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Inkay"),
        .cryId = CRY_INKAY,
        .natDexNum = NATIONAL_DEX_INKAY,
        .categoryName = _("Revolving"),
        .height = 4,
        .weight = 35,
        .description = COMPOUND_STRING(
            "It flashes the light-emitting spots on its\n"
            "body, which drains its opponent's will\n"
            "to fight. It takes the opportunity to\n"
            "scuttle away and hide."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MALAMAR] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Malamar"),
        .cryId = CRY_MALAMAR,
        .natDexNum = NATIONAL_DEX_MALAMAR,
        .categoryName = _("Overturning"),
        .height = 15,
        .weight = 470,
        .description = COMPOUND_STRING(
            "It lures prey close with hypnotic motions,\n"
            "then wraps its tentacles around it before\n"
            "finishing it off with digestive fluids. It\n"
            "forces others to do whatever it wants."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MALAMAR_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Malamar"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MALAMAR_MEGA,
    #else
        .cryId = CRY_MALAMAR,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MALAMAR,
        .categoryName = _("Overturning"),
        .height = 29,
        .weight = 698,
        .description = COMPOUND_STRING(
            "It uses its colorful lights to\n"
            "overwrite the personality and\n"
            "memories of others-and to\n"
            "control them."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_INKAY

#if P_FAMILY_BINACLE
    [SPECIES_BINACLE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Binacle"),
        .cryId = CRY_BINACLE,
        .natDexNum = NATIONAL_DEX_BINACLE,
        .categoryName = _("Two-Handed"),
        .height = 5,
        .weight = 310,
        .description = COMPOUND_STRING(
            "They stretch and then contract, yanking\n"
            "their rocks along with them in bold hops.\n"
            "They eat seaweed that washes up on\n"
            "the shoreline."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BARBARACLE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Barbaracle"),
        .cryId = CRY_BARBARACLE,
        .natDexNum = NATIONAL_DEX_BARBARACLE,
        .categoryName = _("Collective"),
        .height = 13,
        .weight = 960,
        .description = COMPOUND_STRING(
            "Barbaracle's legs and hands have minds\n"
            "of their own, and they will move\n"
            "independently. But they usually follow\n"
            "the head's orders."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_BARBARACLE_MEGA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Barbaracle"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_BARBARACLE_MEGA,
    #else
        .cryId = CRY_BARBARACLE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_BARBARACLE,
        .categoryName = _("Collective"),
        .height = 22,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "It uses its many arms to toy\n"
            "with its opponents. This\n"
            "keeps the head extremely busy."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_BINACLE

#if P_FAMILY_SKRELP
    [SPECIES_SKRELP] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Skrelp"),
        .cryId = CRY_SKRELP,
        .natDexNum = NATIONAL_DEX_SKRELP,
        .categoryName = _("Mock Kelp"),
        .height = 5,
        .weight = 73,
        .description = COMPOUND_STRING(
            "Camouflaged as rotten kelp, it hides\n"
            "from foes while storing up power for its\n"
            "evolution. They spray liquid poison on\n"
            "prey that approach unawares."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DRAGALGE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dragalge"),
        .cryId = CRY_DRAGALGE,
        .natDexNum = NATIONAL_DEX_DRAGALGE,
        .categoryName = _("Mock Kelp"),
        .height = 18,
        .weight = 815,
        .description = COMPOUND_STRING(
            "Their poison is strong enough to eat\n"
            "through the hull of a tanker. Tales are\n"
            "told of ships that wander into seas where\n"
            "Dragalge live, never to return."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DRAGALGE_MEGA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dragalge"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_DRAGALGE_MEGA,
    #else
        .cryId = CRY_DRAGALGE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_DRAGALGE,
        .categoryName = _("Mock Kelp"),
        .height = 21,
        .weight = 1003,
        .description = COMPOUND_STRING(
            "It spits a liquid that causes the\n"
            "regenerative power of cells to run\n"
            "wild. The liquid is deadly poison\n"
            "to everything other than itself."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SKRELP

#if P_FAMILY_CLAUNCHER
    [SPECIES_CLAUNCHER] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Clauncher"),
        .cryId = CRY_CLAUNCHER,
        .natDexNum = NATIONAL_DEX_CLAUNCHER,
        .categoryName = _("Water Gun"),
        .height = 5,
        .weight = 83,
        .description = COMPOUND_STRING(
            "Through controlled expulsions of internal\n"
            "gas, it can expel water like a pistol shot.\n"
            "At close distances, it can even shatter\n"
            "large rocks."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CLAWITZER] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Clawitzer"),
        .cryId = CRY_CLAWITZER,
        .natDexNum = NATIONAL_DEX_CLAWITZER,
        .categoryName = _("Howitzer"),
        .height = 13,
        .weight = 353,
        .description = COMPOUND_STRING(
            "By expelling water from the nozzle in the\n"
            "back of its enormous claw, it can move\n"
            "at a speed of 60 knots. They launch\n"
            "cannonballs made of water."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CLAUNCHER

#if P_FAMILY_HELIOPTILE
    [SPECIES_HELIOPTILE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Helioptile"),
        .cryId = CRY_HELIOPTILE,
        .natDexNum = NATIONAL_DEX_HELIOPTILE,
        .categoryName = _("Generator"),
        .height = 5,
        .weight = 60,
        .description = COMPOUND_STRING(
            "They make their home in deserts.\n"
            "They can generate their own energy from\n"
            "basking in the sun, so eating food is not\n"
            "a requirement."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HELIOLISK] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Heliolisk"),
        .cryId = CRY_HELIOLISK,
        .natDexNum = NATIONAL_DEX_HELIOLISK,
        .categoryName = _("Generator"),
        .height = 10,
        .weight = 210,
        .description = COMPOUND_STRING(
            "A single Heliolisk can generate sufficient\n"
            "electricity to power a skyscraper. It can\n"
            "stimulate its muscles with electricity,\n"
            "boosting the strength in its legs."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_HELIOPTILE

#if P_FAMILY_TYRUNT
    [SPECIES_TYRUNT] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Tyrunt"),
        .cryId = CRY_TYRUNT,
        .natDexNum = NATIONAL_DEX_TYRUNT,
        .categoryName = _("Royal Heir"),
        .height = 8,
        .weight = 260,
        .description = COMPOUND_STRING(
            "Its immense jaws have enough destructive\n"
            "force that it can chew up a car. If\n"
            "something happens that it doesn't like,\n"
            "it throws a tantrum and runs wild."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_TYRANTRUM] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tyrantrum"),
        .cryId = CRY_TYRANTRUM,
        .natDexNum = NATIONAL_DEX_TYRANTRUM,
        .categoryName = _("Despot"),
        .height = 25,
        .weight = 2700,
        .description = COMPOUND_STRING(
            "Thanks to its gargantuan jaws, which could\n"
            "shred thick metal plates as if they were\n"
            "paper, it was invincible in the ancient\n"
            "world it once inhabited."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },
#endif //P_FAMILY_TYRUNT

#if P_FAMILY_AMAURA
    [SPECIES_AMAURA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Amaura"),
        .cryId = CRY_AMAURA,
        .natDexNum = NATIONAL_DEX_AMAURA,
        .categoryName = _("Tundra"),
        .height = 13,
        .weight = 252,
        .description = COMPOUND_STRING(
            "This ancient Pokémon was restored from\n"
            "part of its body that had been frozen in\n"
            "ice for over 100 million years. It lived in a\n"
            "cold land where there were no predators."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_AURORUS] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Aurorus"),
        .cryId = CRY_AURORUS,
        .natDexNum = NATIONAL_DEX_AURORUS,
        .categoryName = _("Tundra"),
        .height = 27,
        .weight = 2250,
        .description = COMPOUND_STRING(
            "Using the diamond-shaped crystals on its\n"
            "body it can instantly create a wall of ice\n"
            "to block an opponent's attack, or encase\n"
            "them in ice."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_AMAURA

#if P_FAMILY_HAWLUCHA
    [SPECIES_HAWLUCHA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Hawlucha"),
        .cryId = CRY_HAWLUCHA,
        .natDexNum = NATIONAL_DEX_HAWLUCHA,
        .categoryName = _("Wrestling"),
        .height = 8,
        .weight = 215,
        .description = COMPOUND_STRING(
            "With its wings, it controls its position in\n"
            "the air. Its proficient fighting skills\n"
            "enable it to keep up with big bruisers\n"
            "like Machamp and Hariyama."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_HAWLUCHA_MEGA] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Hawlucha"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_HAWLUCHA_MEGA,
    #else
        .cryId = CRY_HAWLUCHA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_HAWLUCHA,
        .categoryName = _("Wrestling"),
        .height = 10,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Mega Evolution has pumped up all\n"
            "its muscles. Hawlucha flexes to\n"
            "show off its strength."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_HAWLUCHA

#if P_FAMILY_DEDENNE
    [SPECIES_DEDENNE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dedenne"),
        .cryId = CRY_DEDENNE,
        .natDexNum = NATIONAL_DEX_DEDENNE,
        .categoryName = _("Antenna"),
        .height = 2,
        .weight = 22,
        .description = COMPOUND_STRING(
            "Its whiskers serve as antennas.\n"
            "By sending and receiving electrical\n"
            "waves, it can communicate with others\n"
            "over vast distances."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_DEDENNE

#if P_FAMILY_CARBINK
    [SPECIES_CARBINK] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Carbink"),
        .cryId = CRY_CARBINK,
        .natDexNum = NATIONAL_DEX_CARBINK,
        .categoryName = _("Jewel"),
        .height = 3,
        .weight = 57,
        .description = COMPOUND_STRING(
            "Born from the high temperatures and\n"
            "pressures deep underground, it defends\n"
            "itself by firing beams from the jewel part\n"
            "of its body."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CARBINK

#if P_FAMILY_GOOMY
    [SPECIES_GOOMY] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goomy"),
        .cryId = CRY_GOOMY,
        .natDexNum = NATIONAL_DEX_GOOMY,
        .categoryName = _("Soft Tissue"),
        .height = 3,
        .weight = 28,
        .description = COMPOUND_STRING(
            "Its source of protection is its slimy,\n"
            "germ-laden mucous membrane. Anyone\n"
            "who touches it will need some thorough\n"
            "hand-washing."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SLIGGOO] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sliggoo"),
        .cryId = CRY_SLIGGOO,
        .natDexNum = NATIONAL_DEX_SLIGGOO,
        .categoryName = _("Soft Tissue"),
        .height = 8,
        .weight = 175,
        .description = COMPOUND_STRING(
            "This Pokémon's mucous can dissolve\n"
            "anything. Toothless, it sprays mucous\n"
            "on its prey. Once they're nicely dissolved,\n"
            "it slurps them up."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_GOODRA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goodra"),
        .cryId = CRY_GOODRA,
        .natDexNum = NATIONAL_DEX_GOODRA,
        .categoryName = _("Dragon"),
        .height = 20,
        .weight = 1505,
        .description = COMPOUND_STRING(
            "It gets picked on because it's meek.\n"
            "But then, whoever teased it gets to feel\n"
            "the full force of its horns and a good\n"
            "swatting from its thick tail."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },

#if P_HISUIAN_FORMS
    [SPECIES_SLIGGOO_HISUI] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sliggoo"),
        .cryId = CRY_SLIGGOO,
        .natDexNum = NATIONAL_DEX_SLIGGOO,
        .categoryName = _("Snail"),
        .height = 7,
        .weight = 685,
        .description = COMPOUND_STRING(
            "A creature given to melancholy.\n"
            "Its metallic shell developed as a\n"
            "result of the mucus on its skin reacting\n"
            "with the iron in Hisui's water."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,

    },

    [SPECIES_GOODRA_HISUI] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Goodra"),
        .cryId = CRY_GOODRA,
        .natDexNum = NATIONAL_DEX_GOODRA,
        .categoryName = _("Shell Bunker"),
        .height = 17,
        .weight = 3341,
        .description = COMPOUND_STRING(
            "It loathes solitude and is extremely\n"
            "clingy--it will fume and run riot if\n"
            "those dearest to it ever leave its\n"
            "side."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GOOMY

#if P_FAMILY_KLEFKI
    [SPECIES_KLEFKI] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Klefki"),
        .cryId = CRY_KLEFKI,
        .natDexNum = NATIONAL_DEX_KLEFKI,
        .categoryName = _("Key Ring"),
        .height = 2,
        .weight = 30,
        .description = COMPOUND_STRING(
            "These key collectors threaten any\n"
            "attackers by fiercely jingling their keys\n"
            "at them. It will sneak into people's homes\n"
            "to steal their keys."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_KLEFKI

#if P_FAMILY_PHANTUMP
    [SPECIES_PHANTUMP] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Phantump"),
        .cryId = CRY_PHANTUMP,
        .natDexNum = NATIONAL_DEX_PHANTUMP,
        .categoryName = _("Stump"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "According to legend, medicine to cure\n"
            "any illness can be made by plucking the\n"
            "green leaves on its head, brewing them,\n"
            "and boiling down the liquid."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TREVENANT] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Trevenant"),
        .cryId = CRY_TREVENANT,
        .natDexNum = NATIONAL_DEX_TREVENANT,
        .categoryName = _("Elder Tree"),
        .height = 15,
        .weight = 710,
        .description = COMPOUND_STRING(
            "Through its roots, it exerts control over\n"
            "other trees. A deadly curse falls upon\n"
            "anyone cutting down trees in forests\n"
            "where Trevenant dwell."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PHANTUMP

#if P_FAMILY_PUMPKABOO
    [SPECIES_PUMPKABOO_AVERAGE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Pumpkin"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
            "The light that streams out from\n"
            "the holes in the pumpkin can\n"
            "hypnotize and control the people and\n"
            "Pokémon that see it."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PUMPKABOO_SMALL] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Pumpkin"),
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING(
            "When taking spirits to the\n"
            "afterlife, small Pumpkaboo prefer the\n"
            "spirits of children to those of adults."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PUMPKABOO_LARGE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Pumpkin"),
        .height = 5,
        .weight = 75,
        .description = COMPOUND_STRING(
            "When taking spirits to the\n"
            "afterlife, large Pumpkaboo prefer the\n"
            "spirits of adults to those of children."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PUMPKABOO_SUPER] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Pumpkaboo"),
        .cryId = CRY_PUMPKABOO_SUPER,
        .natDexNum = NATIONAL_DEX_PUMPKABOO,
        .categoryName = _("Pumpkin"),
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Supersized Pumpkaboo are very\n"
            "partial to the spirits of people who\n"
            "were of similarly superior proportions."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOURGEIST_AVERAGE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Pumpkin"),
        .height = 9,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Eerie cries emanate from its body\n"
            "in the dead of night. The sounds are\n"
            "said to be the wails of spirits who\n"
            "are suffering in the afterlife."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Pumpkin"),
        .height = 7,
        .weight = 95,
        .description = COMPOUND_STRING(
            "A small-sized Pumpkaboo evolves\n"
            "into a small-sized Gourgeist. Its\n"
            "bodily proportions also get passed on\n"
            "to its descendants."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Pumpkin"),
        .height = 11,
        .weight = 140,
        .description = COMPOUND_STRING(
            "A large-sized Pumpkaboo evolves\n"
            "into a large-sized Gourgeist. Its\n"
            "bodily proportions also get passed on\n"
            "to its descendants."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gourgeist"),
        .cryId = CRY_GOURGEIST_SUPER,
        .natDexNum = NATIONAL_DEX_GOURGEIST,
        .categoryName = _("Pumpkin"),
        .height = 17,
        .weight = 390,
        .description = COMPOUND_STRING(
            "A supersized Pumpkaboo evolves\n"
            "into a supersized Gourgeist. Its\n"
            "bodily proportions also get passed on to\n"
            "its descendants."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PUMPKABOO

#if P_FAMILY_BERGMITE
    [SPECIES_BERGMITE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Bergmite"),
        .cryId = CRY_BERGMITE,
        .natDexNum = NATIONAL_DEX_BERGMITE,
        .categoryName = _("Ice Chunk"),
        .height = 10,
        .weight = 995,
        .description = COMPOUND_STRING(
            "It blocks opponents' attacks with the ice\n"
            "that shields its body. It uses cold air to\n"
            "repair any cracks with new ice. They live\n"
            "in herds on snowy mountains."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_AVALUGG] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Avalugg"),
        .cryId = CRY_AVALUGG,
        .natDexNum = NATIONAL_DEX_AVALUGG,
        .categoryName = _("Iceberg"),
        .height = 20,
        .weight = 5050,
        .description = COMPOUND_STRING(
            "The way several Bergmite huddle on its\n"
            "back make it look like an aircraft carrier\n"
            "made of ice. Its cumbersome frame crushes\n"
            "anything that stands in its way."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },

#if P_HISUIAN_FORMS
    [SPECIES_AVALUGG_HISUI] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Avalugg"),
        .cryId = CRY_AVALUGG,
        .natDexNum = NATIONAL_DEX_AVALUGG,
        .categoryName = _("Iceberg"),
        .height = 14,
        .weight = 2624,
        .description = COMPOUND_STRING(
            "The armor of ice covering its lower\n"
            "jaw puts steel to shame and can\n"
            "shatter rocks with ease."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BERGMITE

#if P_FAMILY_NOIBAT
    [SPECIES_NOIBAT] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Noibat"),
        .cryId = CRY_NOIBAT,
        .natDexNum = NATIONAL_DEX_NOIBAT,
        .categoryName = _("Sound Wave"),
        .height = 5,
        .weight = 80,
        .description = COMPOUND_STRING(
            "They live in pitch-black caves. Even a\n"
            "robust wrestler will become dizzy and\n"
            "unable to stand when exposed to its\n"
            "200,000-hertz ultrasonic waves."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_NOIVERN] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Noivern"),
        .cryId = CRY_NOIVERN,
        .natDexNum = NATIONAL_DEX_NOIVERN,
        .categoryName = _("Sound Wave"),
        .height = 15,
        .weight = 850,
        .description = COMPOUND_STRING(
            "They fly around on moonless nights and\n"
            "attack careless prey. The ultrasonic\n"
            "waves it emits from its ears can reduce\n"
            "a large boulder to pebbles."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_NOIBAT

#if P_FAMILY_XERNEAS
    [SPECIES_XERNEAS_NEUTRAL] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Xerneas"),
        .cryId = CRY_XERNEAS,
        .natDexNum = NATIONAL_DEX_XERNEAS,
        .categoryName = _("Life"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_XERNEAS_ACTIVE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Xerneas"),
        .cryId = CRY_XERNEAS,
        .natDexNum = NATIONAL_DEX_XERNEAS,
        .categoryName = _("Life"),
        .height = 30,
        .weight = 2150,
        .description = gXerneasPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_XERNEAS

#if P_FAMILY_YVELTAL
    [SPECIES_YVELTAL] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Yveltal"),
        .cryId = CRY_YVELTAL,
        .natDexNum = NATIONAL_DEX_YVELTAL,
        .categoryName = _("Destruction"),
        .height = 58,
        .weight = 2030,
        .description = COMPOUND_STRING(
            "When its life comes to an end, its wings\n"
            "and tail spread wide and glow red, and\n"
            "it absorbs the life energy of every living\n"
            "thing and turns into a cocoon."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_YVELTAL

#if P_FAMILY_ZYGARDE
    [SPECIES_ZYGARDE_50] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_50,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 50,
        .weight = 3050,
        .description = gZygarde50PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_50,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 50,
        .weight = 3050,
        .description = gZygarde50PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [SPECIES_ZYGARDE_10_AURA_BREAK] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_10,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 12,
        .weight = 335,
        .description = gZygarde10PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_10,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 12,
        .weight = 335,
        .description = gZygarde10PokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Zygarde"),
        .cryId = CRY_ZYGARDE_COMPLETE,
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 45,
        .weight = 6100,
        .description = COMPOUND_STRING(
            "This is Zygarde's perfected form.\n"
            "From the orifice on its chest, it\n"
            "radiates high-powered energy that\n"
            "eliminates everything."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_ZYGARDE_MEGA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Zygarde"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_ZYGARDE_MEGA,
    #else
        .cryId = CRY_ZYGARDE_COMPLETE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_ZYGARDE,
        .categoryName = _("Order"),
        .height = 77,
        .weight = 6100,
        .description = COMPOUND_STRING(
            "In response to people's emotions\n"
            "during an unprecedented crisis,\n"
            "Zygarde Mega Evolves and calms the\n"
            "situation with its unmatched power."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ZYGARDE

#if P_FAMILY_DIANCIE
    [SPECIES_DIANCIE] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Diancie"),
        .cryId = CRY_DIANCIE,
        .natDexNum = NATIONAL_DEX_DIANCIE,
        .categoryName = _("Jewel"),
        .height = 7,
        .weight = 88,
        .description = COMPOUND_STRING(
            "A sudden transformation of Carbink,\n"
            "its pink, glimmering body is said to be\n"
            "the loveliest sight in the whole world.\n"
            "It creates diamonds between its hands."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_DIANCIE_MEGA] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Diancie"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_DIANCIE_MEGA,
    #else
        .cryId = CRY_DIANCIE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_DIANCIE,
        .categoryName = _("Jewel"),
        .height = 11,
        .weight = 278,
        .description = COMPOUND_STRING(
            "The impurities upon its body's surface\n"
            "have fallen away, sparkling so brilliantly\n"
            "that cannot be observed directly.\n"
            "It is known as “the Royal Pink Princess”."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_DIANCIE

#if P_FAMILY_HOOPA
    [SPECIES_HOOPA_CONFINED] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hoopa"),
        .cryId = CRY_HOOPA_CONFINED,
        .natDexNum = NATIONAL_DEX_HOOPA,
        .categoryName = _("Mischief"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "In its true form, it possess a huge amount\n"
            "of power. When its powers are sealed away,\n"
            "it is transformed into a much smaller form.\n"
            "It teleports things to a secret place."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HOOPA_UNBOUND] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Hoopa"),
        .cryId = CRY_HOOPA_UNBOUND,
        .natDexNum = NATIONAL_DEX_HOOPA,
        .categoryName = _("Djinn"),
        .height = 65,
        .weight = 490,
        .description = COMPOUND_STRING(
            "It is the true form of Hoopa, which has had\n"
            "its power sealed away. The rings it carries\n"
            "have the power to bend dimensions and are\n"
            "able to seize anything in the world."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_HOOPA

#if P_FAMILY_VOLCANION
    [SPECIES_VOLCANION] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Volcanion"),
        .cryId = CRY_VOLCANION,
        .natDexNum = NATIONAL_DEX_VOLCANION,
        .categoryName = _("Steam"),
        .height = 17,
        .weight = 1950,
        .description = COMPOUND_STRING(
            "It lets out billows of steam from the arms\n"
            "on its back and disappears into the dense\n"
            "fog. It's said to live in mountains where\n"
            "humans do not tread."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_VOLCANION

#ifdef __INTELLISENSE__
};
#endif
