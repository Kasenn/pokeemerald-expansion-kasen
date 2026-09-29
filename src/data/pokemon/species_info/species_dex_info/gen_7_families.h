#ifdef __INTELLISENSE__
const struct SpeciesDexInfo gSpeciesDexInfoGen7[] =
{
#endif

#if P_FAMILY_ROWLET
    [SPECIES_ROWLET] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rowlet"),
        .cryId = CRY_ROWLET,
        .natDexNum = NATIONAL_DEX_ROWLET,
        .categoryName = _("Grass Quill"),
        .height = 3,
        .weight = 15,
        .description = COMPOUND_STRING(
            "This wary Pokémon uses photosynthesis\n"
            "to store up energy during the day, while\n"
            "becoming active at night. Silently it\n"
            "glides, drawing near to its target."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DARTRIX] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Dartrix"),
        .cryId = CRY_DARTRIX,
        .natDexNum = NATIONAL_DEX_DARTRIX,
        .categoryName = _("Blade Quill"),
        .height = 7,
        .weight = 160,
        .description = COMPOUND_STRING(
            "A bit of a dandy, it spends its free time\n"
            "preening its wings. Its preoccupation\n"
            "with any dirt on its plumage can leave\n"
            "it unable to battle."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DECIDUEYE] =
    {                                                                                                                                                
        .pokemonScale = 259,                                
        .pokemonOffset = 1,                                 
        .trainerScale = 296,                                
        .trainerOffset = 1,                                          
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Decidueye"),
        .natDexNum = NATIONAL_DEX_DECIDUEYE,
        .categoryName = _("Arrow Quill"),
        .height = 16,
        .weight = 366,
        .cryId = CRY_DECIDUEYE,
        .description = COMPOUND_STRING(
            "Decidueye is cool and cautious.\n"
            "It fires arrow quills from its wings with\n"
            "such precision, they can pierce a pebble\n"
            "at distances of over a hundred yards."),
    },
    [SPECIES_DECIDUEYE_MEGA] =
    {
        .bodyColor = BODY_COLOR_BROWN,                      
        .speciesName = _("Decidueye"),                      
        .natDexNum = NATIONAL_DEX_DECIDUEYE,                
        .categoryName = _("Arrow Quill"),                   
        .height = 16,                                       
        .pokemonScale = 259,                                
        .pokemonOffset = 1,                                 
        .trainerScale = 296,                                
        .trainerOffset = 1,                                          
        .weight = 366,
        .cryId = CRY_DECIDUEYE,
        .description = COMPOUND_STRING(
            "Decidueye is cool and cautious.\n"
            "It fires arrow quills from its wings with\n"
            "such precision, they can pierce a pebble\n"
            "at distances of over a hundred yards."),
    },

#if P_HISUIAN_FORMS
    [SPECIES_DECIDUEYE_HISUI] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Decidueye"),
        .cryId = CRY_DECIDUEYE,
        .natDexNum = NATIONAL_DEX_DECIDUEYE,
        .categoryName = _("Arrow Quill"),
        .height = 16,
        .weight = 370,
        .description = COMPOUND_STRING(
            "The air stored inside the rachises\n"
            "of Decidueye's feathers insulates\n"
            "the Pokémon against Hisui's extreme\n"
            "cold."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ROWLET

#if P_FAMILY_LITTEN
    [SPECIES_LITTEN] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Litten"),
        .cryId = CRY_LITTEN,
        .natDexNum = NATIONAL_DEX_LITTEN,
        .categoryName = _("Fire Cat"),
        .height = 4,
        .weight = 43,
        .description = COMPOUND_STRING(
            "While grooming itself, it builds up fur\n"
            "inside its stomach. It sets the fur alight\n"
            "and spews fiery attacks, which change\n"
            "based on how it coughs."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TORRACAT] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Torracat"),
        .cryId = CRY_TORRACAT,
        .natDexNum = NATIONAL_DEX_TORRACAT,
        .categoryName = _("Fire Cat"),
        .height = 7,
        .weight = 250,
        .description = COMPOUND_STRING(
            "At its throat, it bears a bell of fire. The\n"
            "bell rings brightly whenever this Pokémon\n"
            "spits fire. With a single punch, it can bend\n"
            "an iron bar right over."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#define INCINEROAR_MISC_INFO_DEX    \
        .bodyColor = BODY_COLOR_RED,    \
        .speciesName = _("Incineroar"), \
        .natDexNum = NATIONAL_DEX_INCINEROAR,   \
        .categoryName = _("Heel"),  \
        .height = 18,   \
        .weight = 830,  \
        .description = COMPOUND_STRING( \
            "This Pokémon has a violent, selfish\n" \
            "disposition. If it's not in the mood to\n" \
            "listen, it will ignore its Trainer's orders\n" \
            "with complete nonchalance."),  \
        .pokemonScale = 267,    \
        .pokemonOffset = 2, \
        .trainerScale = 286,    \
        .trainerOffset = 1,

    [SPECIES_INCINEROAR] =
    {
        INCINEROAR_MISC_INFO_DEX
        .cryId = CRY_INCINEROAR,
    },
    [SPECIES_INCINEROAR_MEGA] =
    {
        INCINEROAR_MISC_INFO_DEX
        .cryId = CRY_INCINEROAR,
    },
#endif //P_FAMILY_LITTEN

#if P_FAMILY_POPPLIO
    [SPECIES_POPPLIO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Popplio"),
        .cryId = CRY_POPPLIO,
        .natDexNum = NATIONAL_DEX_POPPLIO,
        .categoryName = _("Sea Lion"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING(
            "This Pokémon snorts body fluids from\n"
            "its nose, blowing balloons to smash into\n"
            "its foes. It practices diligently so it can\n"
            "learn to make big bubbles."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BRIONNE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Brionne"),
        .cryId = CRY_BRIONNE,
        .natDexNum = NATIONAL_DEX_BRIONNE,
        .categoryName = _("Pop Star"),
        .height = 6,
        .weight = 175,
        .description = COMPOUND_STRING(
            "It cares deeply for its companions.\n"
            "When its Trainer is feeling down, it\n"
            "performs a cheery dance with a sequence\n"
            "of water balloons  to try and help."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PRIMARINA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Primarina"),
        .cryId = CRY_PRIMARINA,
        .natDexNum = NATIONAL_DEX_PRIMARINA,
        .categoryName = _("Soloist"),
        .height = 18,
        .weight = 440,
        .description = COMPOUND_STRING(
            "It controls its water balloons with song.\n"
            "The melody is learned from others of\n"
            "its kind and is passed down from one\n"
            "generation to the next."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_POPPLIO

#if P_FAMILY_PIKIPEK
    [SPECIES_PIKIPEK] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Pikipek"),
        .cryId = CRY_PIKIPEK,
        .natDexNum = NATIONAL_DEX_PIKIPEK,
        .categoryName = _("Woodpecker"),
        .height = 3,
        .weight = 12,
        .description = COMPOUND_STRING(
            "This Pokémon feeds on berries, whose\n"
            "leftover seeds become the ammunition for\n"
            "the attacks it fires off from its mouth.\n"
            "It uses holes in trees for nesting."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TRUMBEAK] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Trumbeak"),
        .cryId = CRY_TRUMBEAK,
        .natDexNum = NATIONAL_DEX_TRUMBEAK,
        .categoryName = _("Bugle Beak"),
        .height = 6,
        .weight = 148,
        .description = COMPOUND_STRING(
            "By bending its beak, it can produce a\n"
            "variety of calls and brand itself a noisy\n"
            "nuisance for its neighbors. It eats\n"
            "berries and stores their seeds in its beak."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TOUCANNON] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Toucannon"),
        .cryId = CRY_TOUCANNON,
        .natDexNum = NATIONAL_DEX_TOUCANNON,
        .categoryName = _("Cannon"),
        .height = 11,
        .weight = 260,
        .description = COMPOUND_STRING(
            "When it battles, within its beak, its\n"
            "internal gases ignite, explosively\n"
            "launching seeds with enough power to\n"
            "pulverize boulders."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PIKIPEK

#if P_FAMILY_YUNGOOS
    [SPECIES_YUNGOOS] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Yungoos"),
        .cryId = CRY_YUNGOOS,
        .natDexNum = NATIONAL_DEX_YUNGOOS,
        .categoryName = _("Loitering"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING(
            "With its sharp fangs, it will bite anything.\n"
            "It wanders around in a never-ending\n"
            "search for food. At dusk, it collapses\n"
            "and falls asleep on the spot."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GUMSHOOS] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gumshoos"),
        .cryId = CRY_GUMSHOOS,
        .natDexNum = NATIONAL_DEX_GUMSHOOS,
        .categoryName = _("Stakeout"),
        .height = 7,
        .weight = 142,
        .description = gGumshoosPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GUMSHOOS_TOTEM] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Gumshoos"),
        .cryId = CRY_GUMSHOOS,
        .natDexNum = NATIONAL_DEX_GUMSHOOS,
        .categoryName = _("Stakeout"),
        .height = 14,
        .weight = 600,
        .description = gGumshoosPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_YUNGOOS

#if P_FAMILY_GRUBBIN
    [SPECIES_GRUBBIN] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Grubbin"),
        .cryId = CRY_GRUBBIN,
        .natDexNum = NATIONAL_DEX_GRUBBIN,
        .categoryName = _("Larva"),
        .height = 4,
        .weight = 44,
        .description = COMPOUND_STRING(
            "They often gather near places frequented\n"
            "by electric Pokémon in order to avoid being\n"
            "attacked by bird Pokémon, though it\n"
            "normally lives underground."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CHARJABUG] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Charjabug"),
        .cryId = CRY_CHARJABUG,
        .natDexNum = NATIONAL_DEX_CHARJABUG,
        .categoryName = _("Battery"),
        .height = 5,
        .weight = 105,
        .description = COMPOUND_STRING(
            "From the food it digests, it generates\n"
            "electricity, and it stores this energy in\n"
            "its electric sac. On camping trips, people\n"
            "are grateful to have one around."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_VIKAVOLT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Vikavolt"),
        .cryId = CRY_VIKAVOLT,
        .natDexNum = NATIONAL_DEX_VIKAVOLT,
        .categoryName = _("Stag Beetle"),
        .height = 15,
        .weight = 450,
        .description = gVikavoltPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [SPECIES_VIKAVOLT_TOTEM] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Vikavolt"),
        .cryId = CRY_VIKAVOLT,
        .natDexNum = NATIONAL_DEX_VIKAVOLT,
        .categoryName = _("Stag Beetle"),
        .height = 26,
        .weight = 1475,
        .description = gVikavoltPokedexText,
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_GRUBBIN

#if P_FAMILY_CRABRAWLER
    [SPECIES_CRABRAWLER] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Crabrawler"),
        .cryId = CRY_CRABRAWLER,
        .natDexNum = NATIONAL_DEX_CRABRAWLER,
        .categoryName = _("Boxing"),
        .height = 6,
        .weight = 70,
        .description = COMPOUND_STRING(
            "While guarding its weak points with its\n"
            "pincers, it looks for an opening and\n"
            "unleashes punches. When it loses, it\n"
            "foams at the mouth and faints."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CRABOMINABLE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Crabominable"),
        .cryId = CRY_CRABOMINABLE,
        .natDexNum = NATIONAL_DEX_CRABOMINABLE,
        .categoryName = _("Woolly Crab"),
        .height = 17,
        .weight = 1800,
        .description = COMPOUND_STRING(
            "It aimed for the top but got lost and\n"
            "ended up on a snowy mountain. Being forced\n"
            "to endure the cold, this Pokémon evolved\n"
            "and grew thick fur."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CRABOMINABLE_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Crabominable"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_CRABOMINABLE_MEGA,
    #else
        .cryId = CRY_CRABOMINABLE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_CRABOMINABLE,
        .categoryName = _("Woolly Crab"),
        .height = 26,
        .weight = 2528,
        .description = COMPOUND_STRING(
            "It can pulverize reinforced concrete with\n"
            "a light swing of one of its fists, each of\n"
            "which is covered in a thick layer of ice."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_CRABRAWLER

#if P_FAMILY_ORICORIO
    [SPECIES_ORICORIO_BAILE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Oricorio"),
        .cryId = CRY_ORICORIO_BAILE,
        .natDexNum = NATIONAL_DEX_ORICORIO,
        .categoryName = _("Dancing"),
        .height = 6,
        .weight = 34,
        .description = COMPOUND_STRING(
            "It wins the hearts of its enemies\n"
            "with its passionate dancing and then\n"
            "uses the opening it creates to\n"
            "burn them up with blazing flames."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ORICORIO_POM_POM] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Oricorio"),
        .cryId = CRY_ORICORIO_POM_POM,
        .natDexNum = NATIONAL_DEX_ORICORIO,
        .categoryName = _("Dancing"),
        .height = 6,
        .weight = 34,
        .description = COMPOUND_STRING(
            "This form of Oricorio has sipped\n"
            "yellow nectar. It uses nimble steps to\n"
            "approach opponents, then knocks\n"
            "them out with electric punches."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ORICORIO_PAU] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Oricorio"),
        .cryId = CRY_ORICORIO_PAU,
        .natDexNum = NATIONAL_DEX_ORICORIO,
        .categoryName = _("Dancing"),
        .height = 6,
        .weight = 34,
        .description = COMPOUND_STRING(
            "This form of Oricorio has sipped\n"
            "pink nectar. It elevates its mind with\n"
            "the gentle steps of its dance, then\n"
            "unleashes its psychic energy."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ORICORIO_SENSU] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Oricorio"),
        .cryId = CRY_ORICORIO_SENSU,
        .natDexNum = NATIONAL_DEX_ORICORIO,
        .categoryName = _("Dancing"),
        .height = 6,
        .weight = 34,
        .description = COMPOUND_STRING(
            "It charms its opponents with its\n"
            "refined dancing. When they let their\n"
            "guard down, it places a curse on\n"
            "them that will bring on their demise."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ORICORIO

#if P_FAMILY_CUTIEFLY
    [SPECIES_CUTIEFLY] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cutiefly"),
        .cryId = CRY_CUTIEFLY,
        .natDexNum = NATIONAL_DEX_CUTIEFLY,
        .categoryName = _("Bee Fly"),
        .height = 1,
        .weight = 2,
        .description = COMPOUND_STRING(
            "Myriads of Cutiefly flutter above the\n"
            "heads of people who have auras resembling\n"
            "those of flowers. It can identify which\n"
            "flowers are about to bloom."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_RIBOMBEE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ribombee"),
        .cryId = CRY_RIBOMBEE,
        .natDexNum = NATIONAL_DEX_RIBOMBEE,
        .categoryName = _("Bee Fly"),
        .height = 2,
        .weight = 5,
        .description = gRibombeePokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_RIBOMBEE_TOTEM] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ribombee"),
        .cryId = CRY_RIBOMBEE,
        .natDexNum = NATIONAL_DEX_RIBOMBEE,
        .categoryName = _("Bee Fly"),
        .height = 4,
        .weight = 20,
        .description = gRibombeePokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CUTIEFLY

#if P_FAMILY_ROCKRUFF
    [SPECIES_ROCKRUFF] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rockruff"),
        .cryId = CRY_ROCKRUFF,
        .natDexNum = NATIONAL_DEX_ROCKRUFF,
        .categoryName = _("Puppy"),
        .height = 5,
        .weight = 92,
        .description = gRockruffPokedexText,
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ROCKRUFF_OWN_TEMPO] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Rockruff"),
        .cryId = CRY_ROCKRUFF,
        .natDexNum = NATIONAL_DEX_ROCKRUFF,
        .categoryName = _("Puppy"),
        .height = 5,
        .weight = 92,
        .description = gRockruffPokedexText,
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LYCANROC_MIDDAY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lycanroc"),
        .cryId = CRY_LYCANROC_MIDDAY,
        .natDexNum = NATIONAL_DEX_LYCANROC,
        .categoryName = _("Wolf"),
        .height = 8,
        .weight = 250,
        .description = COMPOUND_STRING(
            "It has a calm and collected\n"
            "demeanor. It swiftly closes in on its prey,\n"
            "then slices them with the rocks in\n"
            "its mane."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_LYCANROC_MIDNIGHT] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Lycanroc"),
        .cryId = CRY_LYCANROC_MIDNIGHT,
        .natDexNum = NATIONAL_DEX_LYCANROC,
        .categoryName = _("Wolf"),
        .height = 11,
        .weight = 250,
        .description = COMPOUND_STRING(
            "This Pokémon uses its rocky mane\n"
            "to slash any who approach. It will\n"
            "even disobey its Trainer if it dislikes\n"
            "the orders it was given."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_LYCANROC_DUSK] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lycanroc"),
        .cryId = CRY_LYCANROC_DUSK,
        .natDexNum = NATIONAL_DEX_LYCANROC,
        .categoryName = _("Wolf"),
        .height = 8,
        .weight = 250,
        .description = COMPOUND_STRING(
            "These Pokémon have both calm and\n"
            "ferocious qualities. It's said that\n"
            "this form of Lycanroc is the most\n"
            "troublesome to raise."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ROCKRUFF

#if P_FAMILY_WISHIWASHI
    [SPECIES_WISHIWASHI_SOLO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wishiwashi"),
        .cryId = CRY_WISHIWASHI_SOLO,
        .natDexNum = NATIONAL_DEX_WISHIWASHI,
        .categoryName = _("Small Fry"),
        .height = 2,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Individually, they're incredibly\n"
            "weak. It's by gathering up into\n"
            "schools that they're able to confront\n"
            "opponents."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WISHIWASHI_SCHOOL] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wishiwashi"),
        .cryId = CRY_WISHIWASHI_SCHOOL,
        .natDexNum = NATIONAL_DEX_WISHIWASHI,
        .categoryName = _("Small Fry"),
        .height = 82,
        .weight = 786,
        .description = COMPOUND_STRING(
            "When facing tough opponents, they\n"
            "get into formation. But if they get\n"
            "wounded in battle, they'll scatter\n"
            "and become solitary again."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_WISHIWASHI

#if P_FAMILY_MAREANIE
    [SPECIES_MAREANIE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Mareanie"),
        .cryId = CRY_MAREANIE,
        .natDexNum = NATIONAL_DEX_MAREANIE,
        .categoryName = _("Brutal Star"),
        .height = 4,
        .weight = 80,
        .description = COMPOUND_STRING(
            "It's found crawling on beaches and\n"
            "seafloors. The coral that grows on\n"
            "Corsola's head is as good as a five-star\n"
            "banquet to this Pokémon."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TOXAPEX] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Toxapex"),
        .cryId = CRY_TOXAPEX,
        .natDexNum = NATIONAL_DEX_TOXAPEX,
        .categoryName = _("Brutal Star"),
        .height = 7,
        .weight = 145,
        .description = COMPOUND_STRING(
            "Those attacked by Toxapex's poison will\n"
            "suffer intense pain for three days and\n"
            "three nights. Post-recovery, there will be\n"
            "some aftereffects."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MAREANIE

#if P_FAMILY_MUDBRAY
    [SPECIES_MUDBRAY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mudbray"),
        .cryId = CRY_MUDBRAY,
        .natDexNum = NATIONAL_DEX_MUDBRAY,
        .categoryName = _("Donkey"),
        .height = 10,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "The mud stuck to Mudbray's hooves\n"
            "enhances its grip and its powerful running\n"
            "gait. Eating dirt, making mud, and playing\n"
            "in the mire form its daily routine."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_MUDSDALE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mudsdale"),
        .cryId = CRY_MUDSDALE,
        .natDexNum = NATIONAL_DEX_MUDSDALE,
        .categoryName = _("Draft Horse"),
        .height = 25,
        .weight = 9200,
        .description = COMPOUND_STRING(
            "Its heavy, mud-covered kicks are its\n"
            "best means of attack, and it can reduce\n"
            "large trucks to scrap without breaking\n"
            "a sweat."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },
#endif //P_FAMILY_MUDBRAY

#if P_FAMILY_DEWPIDER
    [SPECIES_DEWPIDER] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dewpider"),
        .cryId = CRY_DEWPIDER,
        .natDexNum = NATIONAL_DEX_DEWPIDER,
        .categoryName = _("Water Bubble"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "It crawls onto the land in search of food.\n"
            "When it comes across enemies or potential\n"
            "prey, this Pokémon smashes its\n"
            "water-bubble-covered head into them."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ARAQUANID] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Araquanid"),
        .cryId = CRY_ARAQUANID,
        .natDexNum = NATIONAL_DEX_ARAQUANID,
        .categoryName = _("Water Bubble"),
        .height = 18,
        .weight = 820,
        .description = gAraquanidPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },

    [SPECIES_ARAQUANID_TOTEM] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Araquanid"),
        .cryId = CRY_ARAQUANID,
        .natDexNum = NATIONAL_DEX_ARAQUANID,
        .categoryName = _("Water Bubble"),
        .height = 31,
        .weight = 2175,
        .description = gAraquanidPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_DEWPIDER

#if P_FAMILY_FOMANTIS
    [SPECIES_FOMANTIS] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Fomantis"),
        .cryId = CRY_FOMANTIS,
        .natDexNum = NATIONAL_DEX_FOMANTIS,
        .categoryName = _("Sickle Grass"),
        .height = 3,
        .weight = 15,
        .description = COMPOUND_STRING(
            "During the day, it sleeps and soaks up\n"
            "light. They give off a sweet and refreshing\n"
            "scent. Cutiefly often gather near the tall\n"
            "grass where Fomantis are hiding."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LURANTIS] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lurantis"),
        .cryId = CRY_LURANTIS,
        .natDexNum = NATIONAL_DEX_LURANTIS,
        .categoryName = _("Bloom Sickle"),
        .height = 9,
        .weight = 185,
        .description = gLurantisPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LURANTIS_TOTEM] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Lurantis"),
        .cryId = CRY_LURANTIS,
        .natDexNum = NATIONAL_DEX_LURANTIS,
        .categoryName = _("Bloom Sickle"),
        .height = 15,
        .weight = 580,
        .description = gLurantisPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_FOMANTIS

#if P_FAMILY_MORELULL
    [SPECIES_MORELULL] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Morelull"),
        .cryId = CRY_MORELULL,
        .natDexNum = NATIONAL_DEX_MORELULL,
        .categoryName = _("Illuminate"),
        .height = 2,
        .weight = 15,
        .description = COMPOUND_STRING(
            "As it drowses the day away, it nourishes\n"
            "itself by sucking from tree roots.\n"
            "It wakens at the fall of night, wandering\n"
            "off in search of a new tree."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SHIINOTIC] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Shiinotic"),
        .cryId = CRY_SHIINOTIC,
        .natDexNum = NATIONAL_DEX_SHIINOTIC,
        .categoryName = _("Illuminate"),
        .height = 10,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Forests where Shiinotic live are\n"
            "treacherous to enter at night.\n"
            "People confused by its strange lights\n"
            "can never find their way home again."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MORELULL

#if P_FAMILY_SALANDIT
    [SPECIES_SALANDIT] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Salandit"),
        .cryId = CRY_SALANDIT,
        .natDexNum = NATIONAL_DEX_SALANDIT,
        .categoryName = _("Toxic Lizard"),
        .height = 6,
        .weight = 48,
        .description = COMPOUND_STRING(
            "It burns its bodily fluids to create a\n"
            "sweet-smelling poisonous gas. When its\n"
            "enemies become disoriented from inhaling\n"
            "the gas, it attacks them."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SALAZZLE] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Salazzle"),
        .cryId = CRY_SALAZZLE,
        .natDexNum = NATIONAL_DEX_SALAZZLE,
        .categoryName = _("Toxic Lizard"),
        .height = 12,
        .weight = 222,
        .description = gSalazzlePokedexText,
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SALAZZLE_TOTEM] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Salazzle"),
        .cryId = CRY_SALAZZLE,
        .natDexNum = NATIONAL_DEX_SALAZZLE,
        .categoryName = _("Toxic Lizard"),
        .height = 21,
        .weight = 810,
        .description = gSalazzlePokedexText,
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SALANDIT

#if P_FAMILY_STUFFUL
    [SPECIES_STUFFUL] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Stufful"),
        .cryId = CRY_STUFFUL,
        .natDexNum = NATIONAL_DEX_STUFFUL,
        .categoryName = _("Flailing"),
        .height = 5,
        .weight = 68,
        .description = COMPOUND_STRING(
            "Despite its adorable appearance, when it\n"
            "gets angry and flails about, its arms and\n"
            "legs could knock a pro wrestler sprawling.\n"
            "It's an incredibly dangerous Pokémon."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BEWEAR] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Bewear"),
        .cryId = CRY_BEWEAR,
        .natDexNum = NATIONAL_DEX_BEWEAR,
        .categoryName = _("Strong Arm"),
        .height = 21,
        .weight = 1350,
        .description = COMPOUND_STRING(
            "This Pokémon has the habit of hugging its\n"
            "companions. Many Trainers have left this\n"
            "world after their spines were squashed\n"
            "by its hug."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_STUFFUL

#if P_FAMILY_BOUNSWEET
    [SPECIES_BOUNSWEET] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Bounsweet"),
        .cryId = CRY_BOUNSWEET,
        .natDexNum = NATIONAL_DEX_BOUNSWEET,
        .categoryName = _("Fruit"),
        .height = 3,
        .weight = 32,
        .description = COMPOUND_STRING(
            "A delectable aroma pours from its body. \n"
            "Bounsweet's sweat can be watered down\n"
            "into a juice with just the right amount\n"
            "of sweetness."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_STEENEE] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Steenee"),
        .cryId = CRY_STEENEE,
        .natDexNum = NATIONAL_DEX_STEENEE,
        .categoryName = _("Fruit"),
        .height = 7,
        .weight = 82,
        .description = COMPOUND_STRING(
            "The sepals on its head developed to\n"
            "protect its body. These are quite hard, so\n"
            "even if pecked by bird Pokémon, this\n"
            "Pokémon is totally fine."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TSAREENA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tsareena"),
        .cryId = CRY_TSAREENA,
        .natDexNum = NATIONAL_DEX_TSAREENA,
        .categoryName = _("Fruit"),
        .height = 12,
        .weight = 214,
        .description = COMPOUND_STRING(
            "Its long, striking legs aren't just for\n"
            "show but to be used to kick with skill.\n"
            "In victory, it shows off by kicking the\n"
            "defeated, laughing boisterously."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_BOUNSWEET

#if P_FAMILY_COMFEY
    [SPECIES_COMFEY] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Comfey"),
        .cryId = CRY_COMFEY,
        .natDexNum = NATIONAL_DEX_COMFEY,
        .categoryName = _("Posy Picker"),
        .height = 1,
        .weight = 3,
        .description = COMPOUND_STRING(
            "It attaches flowers to its nutritious\n"
            "vine. Baths prepared with the flowers\n"
            "from its vine have a relaxing effect, so\n"
            "this Pokémon is a hit with many people."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_COMFEY

#if P_FAMILY_ORANGURU
    [SPECIES_ORANGURU] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Oranguru"),
        .cryId = CRY_ORANGURU,
        .natDexNum = NATIONAL_DEX_ORANGURU,
        .categoryName = _("Sage"),
        .height = 15,
        .weight = 760,
        .description = COMPOUND_STRING(
            "Deep in the jungle, high in the lofty\n"
            "canopy, this Pokémon abides. On rare\n"
            "occasions, it shows up at the beach to\n"
            "match wits with Slowking."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ORANGURU

#if P_FAMILY_PASSIMIAN
    [SPECIES_PASSIMIAN] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Passimian"),
        .cryId = CRY_PASSIMIAN,
        .natDexNum = NATIONAL_DEX_PASSIMIAN,
        .categoryName = _("Teamwork"),
        .height = 20,
        .weight = 828,
        .description = COMPOUND_STRING(
            "They battle with hard berries for weapons.\n"
            "They form groups of about 20 individuals.\n"
            "Their techniques are passed from the boss\n"
            "to the group, generation upon generation."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_PASSIMIAN

#if P_FAMILY_WIMPOD
    [SPECIES_WIMPOD] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Wimpod"),
        .cryId = CRY_WIMPOD,
        .natDexNum = NATIONAL_DEX_WIMPOD,
        .categoryName = _("Turn Tail"),
        .height = 5,
        .weight = 120,
        .description = COMPOUND_STRING(
            "This Pokémon is a coward. As it desperately\n"
            "dashes off, the flailing of its many legs\n"
            "leaves a sparkling clean path in its wake.\n"
            "It lives on beaches and seabeds."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOLISOPOD] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Golisopod"),
        .cryId = CRY_GOLISOPOD,
        .natDexNum = NATIONAL_DEX_GOLISOPOD,
        .categoryName = _("Hard Scale"),
        .height = 20,
        .weight = 1080,
        .description = COMPOUND_STRING(
            "It battles skillfully with its six arms,\n"
            "with a flashing slash of its giant sharp\n"
            "claws, it cleaves seawater--or even\n"
            "air--right in two."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GOLISOPOD_MEGA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Golisopod"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GOLISOPOD_MEGA,
    #else
        .cryId = CRY_GOLISOPOD,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GOLISOPOD,
        .categoryName = _("Hard Scale"),
        .height = 23,
        .weight = 1480,
        .description = COMPOUND_STRING(
            "It uses four of its arms to fiercely\n"
            "assail its foes. Once they've been pushed\n"
            "to the brink of defeat, it finishes them\n"
            "off with the arms it kept hidden."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_WIMPOD

#if P_FAMILY_SANDYGAST
    [SPECIES_SANDYGAST] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sandygast"),
        .cryId = CRY_SANDYGAST,
        .natDexNum = NATIONAL_DEX_SANDYGAST,
        .categoryName = _("Sand Heap"),
        .height = 5,
        .weight = 700,
        .description = COMPOUND_STRING(
            "It takes control of anyone who puts a\n"
            "hand in its mouth, to add to the pile\n"
            "of its sand-mound body. This Pokémon\n"
            "embodies the grudges of the departed."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PALOSSAND] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Palossand"),
        .cryId = CRY_PALOSSAND,
        .natDexNum = NATIONAL_DEX_PALOSSAND,
        .categoryName = _("Sand Castle"),
        .height = 13,
        .weight = 2500,
        .description = COMPOUND_STRING(
            "Possessed people controlled by this\n"
            "Pokémon transformed its sand mound into\n"
            "a castle. As it evolved, its power to curse\n"
            "grew ever stronger."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SANDYGAST

#if P_FAMILY_PYUKUMUKU
    [SPECIES_PYUKUMUKU] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Pyukumuku"),
        .cryId = CRY_PYUKUMUKU,
        .natDexNum = NATIONAL_DEX_PYUKUMUKU,
        .categoryName = _("Sea Cucumber"),
        .height = 3,
        .weight = 12,
        .description = COMPOUND_STRING(
            "It lives in shallow seas, such as areas\n"
            "near a beach. The sticky mucous that\n"
            "covers their bodies can be used to soothe\n"
            "sunburned skin. How convenient!"),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PYUKUMUKU

#if P_FAMILY_TYPE_NULL
    [SPECIES_TYPE_NULL] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Type: Null"),
        .cryId = CRY_TYPE_NULL,
        .natDexNum = NATIONAL_DEX_TYPE_NULL,
        .categoryName = _("Synthetic"),
        .height = 19,
        .weight = 1205,
        .description = COMPOUND_STRING(
            "Due to the danger that this synthetic\n"
            "Pokémon may go on a rampage, it wears a\n"
            "control mask to restrain its capabilities.\n"
            "It has some hidden special power."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

#define SILVALLY_SPECIES_INFO_DEX(type, _palette)                                       \
    {                                                                               \
        .bodyColor = BODY_COLOR_GRAY,                                               \
        .speciesName = _("Silvally"),                                               \
        .cryId = CRY_SILVALLY,                                                      \
        .natDexNum = NATIONAL_DEX_SILVALLY,                                         \
        .categoryName = _("Synthetic"),                                             \
        .height = 23,                                                               \
        .weight = 1005,                                                             \
        .description = (type == TYPE_NORMAL                                         \
            ? gSilvallyNormalPokedexText                                            \
            : gSilvallyMemoryPokedexText),                                          \
        .pokemonScale = 256,                                                        \
        .pokemonOffset = 0,                                                         \
        .trainerScale = 342,                                                        \
        .trainerOffset = 7,                                                         \
    }

    [SPECIES_SILVALLY_NORMAL]   = SILVALLY_SPECIES_INFO_DEX(TYPE_NORMAL,   Normal),
    [SPECIES_SILVALLY_FIGHTING] = SILVALLY_SPECIES_INFO_DEX(TYPE_FIGHTING, Fighting),
    [SPECIES_SILVALLY_FLYING]   = SILVALLY_SPECIES_INFO_DEX(TYPE_FLYING,   Flying),
    [SPECIES_SILVALLY_POISON]   = SILVALLY_SPECIES_INFO_DEX(TYPE_POISON,   Poison),
    [SPECIES_SILVALLY_GROUND]   = SILVALLY_SPECIES_INFO_DEX(TYPE_GROUND,   Ground),
    [SPECIES_SILVALLY_ROCK]     = SILVALLY_SPECIES_INFO_DEX(TYPE_ROCK,     Rock),
    [SPECIES_SILVALLY_BUG]      = SILVALLY_SPECIES_INFO_DEX(TYPE_BUG,      Bug),
    [SPECIES_SILVALLY_GHOST]    = SILVALLY_SPECIES_INFO_DEX(TYPE_GHOST,    Ghost),
    [SPECIES_SILVALLY_STEEL]    = SILVALLY_SPECIES_INFO_DEX(TYPE_STEEL,    Steel),
    [SPECIES_SILVALLY_FIRE]     = SILVALLY_SPECIES_INFO_DEX(TYPE_FIRE,     Fire),
    [SPECIES_SILVALLY_WATER]    = SILVALLY_SPECIES_INFO_DEX(TYPE_WATER,    Water),
    [SPECIES_SILVALLY_GRASS]    = SILVALLY_SPECIES_INFO_DEX(TYPE_GRASS,    Grass),
    [SPECIES_SILVALLY_ELECTRIC] = SILVALLY_SPECIES_INFO_DEX(TYPE_ELECTRIC, Electric),
    [SPECIES_SILVALLY_PSYCHIC]  = SILVALLY_SPECIES_INFO_DEX(TYPE_PSYCHIC,  Psychic),
    [SPECIES_SILVALLY_ICE]      = SILVALLY_SPECIES_INFO_DEX(TYPE_ICE,      Ice),
    [SPECIES_SILVALLY_DRAGON]   = SILVALLY_SPECIES_INFO_DEX(TYPE_DRAGON,   Dragon),
    [SPECIES_SILVALLY_DARK]     = SILVALLY_SPECIES_INFO_DEX(TYPE_DARK,     Dark),
    [SPECIES_SILVALLY_FAIRY]    = SILVALLY_SPECIES_INFO_DEX(TYPE_FAIRY,    Fairy),
#endif //P_FAMILY_TYPE_NULL

#if P_FAMILY_MINIOR
#define MINIOR_MISC_INFO_DEX(color)                                             \
        .bodyColor = color,                                                 \
        .speciesName = _("Minior"),                                         \
        .cryId = CRY_MINIOR,                                                \
        .natDexNum = NATIONAL_DEX_MINIOR,                                   \
        .categoryName = _("Meteor"),                                        \
        .height = 3,                                                        \
        .pokemonScale = 530,                                                \
        .pokemonOffset = 13,                                                \
        .trainerScale = 256,                                                \
        .trainerOffset = 0,

#define MINIOR_METEOR_SPECIES_INFO_DEX(Form, heldItem)          \
    {                                                       \
        .weight = 400,                                      \
        .description = gMiniorMeteorPokedexText,            \
        MINIOR_MISC_INFO_DEX(BODY_COLOR_BROWN)                 \
    }

#define MINIOR_CORE_SPECIES_INFO_DEX(Form, color, iconPal, heldItem)\
    {                                                           \
        .weight = 3,                                            \
        .description = gMiniorCorePokedexText,                  \
        MINIOR_MISC_INFO_DEX(color)                                \
    }

    [SPECIES_MINIOR_METEOR_RED]    = MINIOR_METEOR_SPECIES_INFO_DEX(Red,    ITEM_HARD_STONE),
    [SPECIES_MINIOR_METEOR_ORANGE] = MINIOR_METEOR_SPECIES_INFO_DEX(Orange, ITEM_HARD_STONE),
    [SPECIES_MINIOR_METEOR_YELLOW] = MINIOR_METEOR_SPECIES_INFO_DEX(Yellow, ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_METEOR_GREEN]  = MINIOR_METEOR_SPECIES_INFO_DEX(Green,  ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_METEOR_BLUE]   = MINIOR_METEOR_SPECIES_INFO_DEX(Blue,   ITEM_HARD_STONE),
    [SPECIES_MINIOR_METEOR_INDIGO] = MINIOR_METEOR_SPECIES_INFO_DEX(Indigo, ITEM_HARD_STONE),
    [SPECIES_MINIOR_METEOR_VIOLET] = MINIOR_METEOR_SPECIES_INFO_DEX(Violet, ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_CORE_RED]      = MINIOR_CORE_SPECIES_INFO_DEX(Red,    BODY_COLOR_RED,    0, ITEM_HARD_STONE),
    [SPECIES_MINIOR_CORE_ORANGE]   = MINIOR_CORE_SPECIES_INFO_DEX(Orange, BODY_COLOR_RED,    0, ITEM_HARD_STONE),
    [SPECIES_MINIOR_CORE_YELLOW]   = MINIOR_CORE_SPECIES_INFO_DEX(Yellow, BODY_COLOR_YELLOW, 0, ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_CORE_GREEN]    = MINIOR_CORE_SPECIES_INFO_DEX(Green,  BODY_COLOR_GREEN,  1, ITEM_FLOAT_STONE),
    [SPECIES_MINIOR_CORE_BLUE]     = MINIOR_CORE_SPECIES_INFO_DEX(Blue,   BODY_COLOR_BLUE,   0, ITEM_HARD_STONE),
    [SPECIES_MINIOR_CORE_INDIGO]   = MINIOR_CORE_SPECIES_INFO_DEX(Indigo, BODY_COLOR_BLUE,   0, ITEM_HARD_STONE),
    [SPECIES_MINIOR_CORE_VIOLET]   = MINIOR_CORE_SPECIES_INFO_DEX(Violet, BODY_COLOR_PURPLE, 2, ITEM_FLOAT_STONE),
#endif //P_FAMILY_MINIOR

#if P_FAMILY_KOMALA
    [SPECIES_KOMALA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Komala"),
        .cryId = CRY_KOMALA,
        .natDexNum = NATIONAL_DEX_KOMALA,
        .categoryName = _("Drowsing"),
        .height = 4,
        .weight = 199,
        .description = COMPOUND_STRING(
            "It is born asleep, and it dies asleep.\n"
            "All its movements are apparently no more\n"
            "than the results of it tossing and turning\n"
            "in its dreams."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_KOMALA

#if P_FAMILY_TURTONATOR
    [SPECIES_TURTONATOR] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Turtonator"),
        .cryId = CRY_TURTONATOR,
        .natDexNum = NATIONAL_DEX_TURTONATOR,
        .categoryName = _("Blast Turtle"),
        .height = 20,
        .weight = 2120,
        .description = COMPOUND_STRING(
            "The shell on its back is chemically\n"
            "unstable and explodes violently if struck.\n"
            "The hole in its stomach is its weak point.\n"
            "It gushes fire from its nostrils."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_TURTONATOR

#if P_FAMILY_TOGEDEMARU
    [SPECIES_TOGEDEMARU] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Togedemaru"),
        .cryId = CRY_TOGEDEMARU,
        .natDexNum = NATIONAL_DEX_TOGEDEMARU,
        .categoryName = _("Roly-Poly"),
        .height = 3,
        .weight = 33,
        .description = gTogedemaruPokedexText,
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TOGEDEMARU_TOTEM] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Togedemaru"),
        .cryId = CRY_TOGEDEMARU,
        .natDexNum = NATIONAL_DEX_TOGEDEMARU,
        .categoryName = _("Roly-Poly"),
        .height = 6,
        .weight = 130,
        .description = gTogedemaruPokedexText,
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TOGEDEMARU

#if P_FAMILY_MIMIKYU
    [SPECIES_MIMIKYU_DISGUISED] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mimikyu"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIKYU,
        .categoryName = _("Disguise"),
        .height = 2,
        .weight = 7,
        .description = gMimikyuDisguisedPokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MIMIKYU_BUSTED] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mimikyu"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIKYU,
        .categoryName = _("Disguise"),
        .height = 2,
        .weight = 7,
        .description = gMimikyuBustedPokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MIMIKYU_TOTEM_DISGUISED] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mimikyu"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIKYU,
        .categoryName = _("Disguise"),
        .height = 24,
        .weight = 28,
        .description = gMimikyuDisguisedPokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MIMIKYU_BUSTED_TOTEM] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mimikyu"),
        .cryId = CRY_MIMIKYU,
        .natDexNum = NATIONAL_DEX_MIMIKYU,
        .categoryName = _("Disguise"),
        .height = 24,
        .weight = 28,
        .description = gMimikyuBustedPokedexText,
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MIMIKYU

#if P_FAMILY_BRUXISH
    [SPECIES_BRUXISH] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Bruxish"),
        .cryId = CRY_BRUXISH,
        .natDexNum = NATIONAL_DEX_BRUXISH,
        .categoryName = _("Gnash Teeth"),
        .height = 9,
        .weight = 190,
        .description = COMPOUND_STRING(
            "It stuns its prey with its psychic powers\n"
            "and then grinds them to mush with its\n"
            "strong teeth. Even Shellder's shell is no\n"
            "match for it."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_BRUXISH

#if P_FAMILY_DRAMPA
    [SPECIES_DRAMPA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Drampa"),
        .cryId = CRY_DRAMPA,
        .natDexNum = NATIONAL_DEX_DRAMPA,
        .categoryName = _("Placid"),
        .height = 30,
        .weight = 1850,
        .description = COMPOUND_STRING(
            "This Pokémon is friendly to people and\n"
            "loves children most of all. It comes from\n"
            "deep in the mountains to play with\n"
            "children it likes in town."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DRAMPA_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Drampa"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_DRAMPA_MEGA,
    #else
        .cryId = CRY_DRAMPA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_DRAMPA,
        .categoryName = _("Imposing"),
        .height = 3,
        .weight = 2405,
        .description = COMPOUND_STRING(
            "Drampa's cells have been\n"
            "invigorated, allowing it to regain\n"
            "its youth. It manipulates the\n"
            "atmosphere to summon storms."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRAMPA

#if P_FAMILY_DHELMISE
    [SPECIES_DHELMISE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dhelmise"),
        .cryId = CRY_DHELMISE,
        .natDexNum = NATIONAL_DEX_DHELMISE,
        .categoryName = _("Sea Creeper"),
        .height = 39,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "The soul of seaweed adrift in the waves\n"
            "became reborn as this Pokémon.\n"
            "It maintains itself with new infusions of\n"
            "seabed detritus and seaweed."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 510,
        .trainerOffset = 11,
    },
#endif //P_FAMILY_DHELMISE

#if P_FAMILY_JANGMO_O
    [SPECIES_JANGMO_O] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Jangmo-o"),
        .cryId = CRY_JANGMO_O,
        .natDexNum = NATIONAL_DEX_JANGMO_O,
        .categoryName = _("Scaly"),
        .height = 6,
        .weight = 297,
        .description = COMPOUND_STRING(
            "It expresses its feelings by smacking its\n"
            "scales. Metallic sounds echo through the\n"
            "tall mountains where Jangmo-o live. They\n"
            "grow little by little battling one another."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HAKAMO_O] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Hakamo-o"),
        .cryId = CRY_HAKAMO_O,
        .natDexNum = NATIONAL_DEX_HAKAMO_O,
        .categoryName = _("Scaly"),
        .height = 12,
        .weight = 470,
        .description = COMPOUND_STRING(
            "It sheds and regrows its scales on a\n"
            "continuous basis. The scales become\n"
            "harder each time they're regrown. Its\n"
            "scaly punches tear its foes to shreds."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_KOMMO_O] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kommo-o"),
        .cryId = CRY_KOMMO_O,
        .natDexNum = NATIONAL_DEX_KOMMO_O,
        .categoryName = _("Scaly"),
        .height = 16,
        .weight = 782,
        .description = gKommoOPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

    [SPECIES_KOMMO_O_TOTEM] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kommo-o"),
        .cryId = CRY_KOMMO_O,
        .natDexNum = NATIONAL_DEX_KOMMO_O,
        .categoryName = _("Scaly"),
        .height = 24,
        .weight = 2075,
        .description = gKommoOPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_JANGMO_O

#if P_FAMILY_TAPU_KOKO
    [SPECIES_TAPU_KOKO] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Tapu Koko"),
        .cryId = CRY_TAPU_KOKO,
        .natDexNum = NATIONAL_DEX_TAPU_KOKO,
        .categoryName = _("Land Spirit"),
        .height = 18,
        .weight = 205,
        .description = COMPOUND_STRING(
            "It confuses its enemies by flying too\n"
            "quickly for the eye to follow. It has a\n"
            "hair-trigger temper but forgets what\n"
            "made it angry an instant later."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_TAPU_KOKO

#if P_FAMILY_TAPU_LELE
    [SPECIES_TAPU_LELE] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Tapu Lele"),
        .cryId = CRY_TAPU_LELE,
        .natDexNum = NATIONAL_DEX_TAPU_LELE,
        .categoryName = _("Land Spirit"),
        .height = 12,
        .weight = 186,
        .description = COMPOUND_STRING(
            "A fragrant aroma of flowers follows it.\n"
            "As it flutters about, it scatters its\n"
            "strangely glowing scales. Touching them\n"
            "is said to restore good health."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TAPU_LELE

#if P_FAMILY_TAPU_BULU
    [SPECIES_TAPU_BULU] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tapu Bulu"),
        .cryId = CRY_TAPU_BULU,
        .natDexNum = NATIONAL_DEX_TAPU_BULU,
        .categoryName = _("Land Spirit"),
        .height = 19,
        .weight = 455,
        .description = COMPOUND_STRING(
            "It causes vegetation to grow, and then\n"
            "it absorbs energy from the growth.\n"
            "It pulls large trees up by the roots and\n"
            "swings them around at its enemies."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_TAPU_BULU

#if P_FAMILY_TAPU_FINI
    [SPECIES_TAPU_FINI] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Tapu Fini"),
        .cryId = CRY_TAPU_FINI,
        .natDexNum = NATIONAL_DEX_TAPU_FINI,
        .categoryName = _("Land Spirit"),
        .height = 13,
        .weight = 212,
        .description = COMPOUND_STRING(
            "People say it can create pure water that\n"
            "will wash away any corruption. The dense\n"
            "fog it creates brings the downfall and\n"
            "destruction of its confused enemies."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TAPU_FINI

#if P_FAMILY_COSMOG
    [SPECIES_COSMOG] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cosmog"),
        .cryId = CRY_COSMOG,
        .natDexNum = NATIONAL_DEX_COSMOG,
        .categoryName = _("Nebula"),
        .height = 2,
        .weight = 1,
        .description = COMPOUND_STRING(
            "In ages past, it was called the child of\n"
            "the stars. It's said to be a Pokémon from\n"
            "another world, but no specific details\n"
            "are known."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_COSMOEM] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cosmoem"),
        .cryId = CRY_COSMOEM,
        .natDexNum = NATIONAL_DEX_COSMOEM,
        .categoryName = _("Protostar"),
        .height = 1,
        .weight = 9999,
        .description = COMPOUND_STRING(
            "Motionless as if dead, its body is faintly\n"
            "warm to the touch. There's something\n"
            "accumulating around the black core\n"
            "within its hard shell."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SOLGALEO] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Solgaleo"),
        .cryId = CRY_SOLGALEO,
        .natDexNum = NATIONAL_DEX_SOLGALEO,
        .categoryName = _("Sunne"),
        .height = 34,
        .weight = 2300,
        .description = COMPOUND_STRING(
            "It is said to live in another world.\n"
            "The intense light it radiates from the\n"
            "surface of its body can make the darkest\n"
            "of nights light up like midday."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 405,
        .trainerOffset = 8,
    },

    [SPECIES_LUNALA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Lunala"),
        .cryId = CRY_LUNALA,
        .natDexNum = NATIONAL_DEX_LUNALA,
        .categoryName = _("Moone"),
        .height = 40,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "When its third eye activates, away it flies\n"
            "to another world. This Pokémon devours\n"
            "light, drawing the moonless dark veil of\n"
            "night over the brightness of day."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
    },
#endif //P_FAMILY_COSMOG

#if P_FAMILY_NIHILEGO
    [SPECIES_NIHILEGO] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Nihilego"),
        .cryId = CRY_NIHILEGO,
        .natDexNum = NATIONAL_DEX_NIHILEGO,
        .categoryName = _("Parasite"),
        .height = 12,
        .weight = 555,
        .description = COMPOUND_STRING(
            "One of several mysterious Ultra Beasts.\n"
            "It's unclear whether or not this Pokémon\n"
            "is sentient, but sometimes it can be\n"
            "observed behaving like a young girl."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_NIHILEGO

#if P_FAMILY_BUZZWOLE
    [SPECIES_BUZZWOLE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Buzzwole"),
        .cryId = CRY_BUZZWOLE,
        .natDexNum = NATIONAL_DEX_BUZZWOLE,
        .categoryName = _("Swollen"),
        .height = 24,
        .weight = 3336,
        .description = COMPOUND_STRING(
            "This life-form called an Ultra Beast\n"
            "appeared from another world. It shows\n"
            "off its body, but whether that display\n"
            "is a boast or a threat remains unclear."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_BUZZWOLE

#if P_FAMILY_PHEROMOSA
    [SPECIES_PHEROMOSA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pheromosa"),
        .cryId = CRY_PHEROMOSA,
        .natDexNum = NATIONAL_DEX_PHEROMOSA,
        .categoryName = _("Lissome"),
        .height = 18,
        .weight = 250,
        .description = COMPOUND_STRING(
            "One of the dangerous Ultra Beasts,\n"
            "it refuses to touch anything, perhaps\n"
            "because it senses some uncleanness\n"
            "in this world."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_PHEROMOSA

#if P_FAMILY_XURKITREE
    [SPECIES_XURKITREE] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Xurkitree"),
        .cryId = CRY_XURKITREE,
        .natDexNum = NATIONAL_DEX_XURKITREE,
        .categoryName = _("Glowing"),
        .height = 38,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "One of the mysterious life-forms known\n"
            "as Ultra Beasts. Astonishing electric\n"
            "shocks emanate from its entire body,\n"
            "according to witnesses."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },
#endif //P_FAMILY_XURKITREE

#if P_FAMILY_CELESTEELA
    [SPECIES_CELESTEELA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Celesteela"),
        .cryId = CRY_CELESTEELA,
        .natDexNum = NATIONAL_DEX_CELESTEELA,
        .categoryName = _("Launch"),
        .height = 92,
        .weight = 9999,
        .description = COMPOUND_STRING(
            "It appeared from the Ultra Wormhole.\n"
            "One kind of Ultra Beast, witnesses saw\n"
            "it flying across the sky by expelling gas\n"
            "from its two arms."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },
#endif //P_FAMILY_CELESTEELA

#if P_FAMILY_KARTANA
    [SPECIES_KARTANA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kartana"),
        .cryId = CRY_KARTANA,
        .natDexNum = NATIONAL_DEX_KARTANA,
        .categoryName = _("Drawn Sword"),
        .height = 3,
        .weight = 1,
        .description = COMPOUND_STRING(
            "This Ultra Beast came from the\n"
            "Ultra Wormhole. It seems not to attack\n"
            "enemies on its own, but its sharp body is\n"
            "a dangerous weapon in itself."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_KARTANA

#if P_FAMILY_GUZZLORD
    [SPECIES_GUZZLORD] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Guzzlord"),
        .cryId = CRY_GUZZLORD,
        .natDexNum = NATIONAL_DEX_GUZZLORD,
        .categoryName = _("Junkivore"),
        .height = 55,
        .weight = 8880,
        .description = COMPOUND_STRING(
            "A dangerous Ultra Beast, it has gobbled\n"
            "mountains and swallowed whole buildings,\n"
            "according to reports. But for some reason\n"
            "its droppings have never been found."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },
#endif //P_FAMILY_GUZZLORD

#if P_FAMILY_NECROZMA
    [SPECIES_NECROZMA] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Necrozma"),
        .cryId = CRY_NECROZMA,
        .natDexNum = NATIONAL_DEX_NECROZMA,
        .categoryName = _("Prism"),
        .height = 24,
        .weight = 2300,
        .description = COMPOUND_STRING(
            "Reminiscent of the Ultra Beasts, this\n"
            "life-form, apparently asleep underground,\n"
            "is thought to have come from another\n"
            "world in ancient times."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
    },

#if P_FUSION_FORMS
    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Necrozma"),
        .cryId = CRY_NECROZMA_DUSK_MANE,
        .natDexNum = NATIONAL_DEX_NECROZMA,
        .categoryName = _("Prism"),
        .height = 38,
        .weight = 4600,
        .description = COMPOUND_STRING(
            "This is its form while it is devouring\n"
            "the light of Solgaleo. It pounces on\n"
            "foes and then slashes them with the\n"
            "claws on its four limbs and back."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
    },

    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Necrozma"),
        .cryId = CRY_NECROZMA_DAWN_WINGS,
        .natDexNum = NATIONAL_DEX_NECROZMA,
        .categoryName = _("Prism"),
        .height = 42,
        .weight = 3500,
        .description = COMPOUND_STRING(
            "This is its form while it's\n"
            "devouring the light of Lunala. It grasps\n"
            "foes in its giant claws and rips them\n"
            "apart with brute force."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
    },

#if P_ULTRA_BURST_FORMS
    [SPECIES_NECROZMA_ULTRA] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Necrozma"),
        .cryId = CRY_NECROZMA_ULTRA,
        .natDexNum = NATIONAL_DEX_NECROZMA,
        .categoryName = _("Prism"),
        .height = 75,
        .weight = 2300,
        .description = COMPOUND_STRING(
            "The light pouring out from all over\n"
            "its body affects living things and\n"
            "nature, impacting them in various\n"
            "ways."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
    },
#endif //P_ULTRA_BURST_FORMS
#endif //P_FUSION_FORMS
#endif //P_FAMILY_NECROZMA

#if P_FAMILY_MAGEARNA
    [SPECIES_MAGEARNA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Magearna"),
        .cryId = CRY_MAGEARNA,
        .natDexNum = NATIONAL_DEX_MAGEARNA,
        .categoryName = _("Artificial"),
        .height = 10,
        .weight = 805,
        .description = COMPOUND_STRING(
            "This artificial Pokémon, constructed more\n"
            "than 500 years ago, can understand human\n"
            "speech but cannot itself speak. Its true\n"
            "self is its Soul-Heart, an artificial soul."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_MAGEARNA_ORIGINAL] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magearna"),
        .cryId = CRY_MAGEARNA,
        .natDexNum = NATIONAL_DEX_MAGEARNA,
        .categoryName = _("Artificial"),
        .height = 10,
        .weight = 805,
        .description = COMPOUND_STRING(
            "This is its form from almost 500\n"
            "years ago. Its body is nothing more\n"
            "than a container-its artificial heart\n"
            "is the actual life-form."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_MAGEARNA_MEGA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magearna"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MAGEARNA_MEGA,
    #else
        .cryId = CRY_MAGEARNA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MAGEARNA,
        .categoryName = _("Artificial"),
        .height = 13,
        .weight = 2481,
        .description = COMPOUND_STRING(
            "This is Magearna once a previously hidden\n"
            "mode activates. The emotions Magearna had\n"
            "begun to feel now hide away as it fells\n"
            "foe after foe."),
    },

    [SPECIES_MAGEARNA_ORIGINAL_MEGA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Magearna"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_MAGEARNA_MEGA,
    #else
        .cryId = CRY_MAGEARNA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_MAGEARNA,
        .categoryName = _("Artificial"),
        .height = 13,
        .weight = 2481,
        .description = COMPOUND_STRING(
            "A mechanism to remove Magearna's\n"
            "limitations has lain secretly within\n"
            "Magearna for 500 years. This mechanism\n"
            "is triggered by a Mega Stone."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGEARNA

#if P_FAMILY_MARSHADOW
    [SPECIES_MARSHADOW] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Marshadow"),
        .cryId = CRY_MARSHADOW,
        .natDexNum = NATIONAL_DEX_MARSHADOW,
        .categoryName = _("Gloomdwellr"),
        .height = 7,
        .weight = 222,
        .description = COMPOUND_STRING(
            "Able to conceal itself in the shadows of\n"
            "others, it never appears before humans,\n"
            "so its very existence is the stuff of myth.\n"
            "This Pokémon is craven and cowering."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MARSHADOW

#if P_FAMILY_POIPOLE
    [SPECIES_POIPOLE] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Poipole"),
        .cryId = CRY_POIPOLE,
        .natDexNum = NATIONAL_DEX_POIPOLE,
        .categoryName = _("Poison Pin"),
        .height = 6,
        .weight = 18,
        .description = COMPOUND_STRING(
            "This Ultra Beast is well enough\n"
            "liked to be chosen as a\n"
            "first partner in its own world."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_NAGANADEL] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Naganadel"),
        .cryId = CRY_NAGANADEL,
        .natDexNum = NATIONAL_DEX_NAGANADEL,
        .categoryName = _("Poison Pin"),
        .height = 36,
        .weight = 1500,
        .description = COMPOUND_STRING(
            "It stores hundreds of liters of poisonous\n"
            "liquid inside its body. It is one of the\n"
            "organisms known as UBs."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 405,
        .trainerOffset = 8,
    },
#endif //P_FAMILY_POIPOLE

#if P_FAMILY_STAKATAKA
    [SPECIES_STAKATAKA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Stakataka"),
        .cryId = CRY_STAKATAKA,
        .natDexNum = NATIONAL_DEX_STAKATAKA,
        .categoryName = _("Rampart"),
        .height = 55,
        .weight = 8200,
        .description = COMPOUND_STRING(
            "It appeared from an Ultra Wormhole. Each\n"
            "one appears to be made up of many life-\n"
            "forms stacked one on top of each other."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },
#endif //P_FAMILY_STAKATAKA

#if P_FAMILY_BLACEPHALON
    [SPECIES_BLACEPHALON] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Blacephalon"),
        .cryId = CRY_BLACEPHALON,
        .natDexNum = NATIONAL_DEX_BLACEPHALON,
        .categoryName = _("Fireworks"),
        .height = 18,
        .weight = 130,
        .description = COMPOUND_STRING(
            "It slithers toward people and explode\n"
            "its head without warning. It is\n"
            "one kind of Ultra Beast."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_BLACEPHALON

#if P_FAMILY_ZERAORA
    [SPECIES_ZERAORA] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Zeraora"),
        .cryId = CRY_ZERAORA,
        .natDexNum = NATIONAL_DEX_ZERAORA,
        .categoryName = _("Thunderclap"),
        .height = 15,
        .weight = 445,
        .description = COMPOUND_STRING(
            "It approaches its enemies at the speed\n"
            "of lightning, then tears them limb from\n"
            "limb with its sharp claws."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_ZERAORA_MEGA] =
    {

        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Zeraora"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_ZERAORA_MEGA,
    #else
        .cryId = CRY_ZERAORA,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_ZERAORA,
        .categoryName = _("Thunderclap"),
        .height = 15,
        .weight = 445,
        .description = COMPOUND_STRING(
            "It stores up 10 lightning strikes' worth\n"
            "of electricity. When it stops limiting\n"
            "itself, it's in the strongest class of\n"
            "electric Pokémon."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_ZERAORA

#if P_FAMILY_MELTAN
    [SPECIES_MELTAN] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Meltan"),
        .cryId = CRY_MELTAN,
        .natDexNum = NATIONAL_DEX_MELTAN,
        .categoryName = _("Hex Nut"),
        .height = 2,
        .weight = 80,
        .description = COMPOUND_STRING(
            "It melts particles of iron and other metals\n"
            "found in the subsoil, so it can absorb them\n"
            "into its body of molten steel."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MELMETAL] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Melmetal"),
        .cryId = CRY_MELMETAL,
        .natDexNum = NATIONAL_DEX_MELMETAL,
        .categoryName = _("Hex Nut"),
        .height = 25,
        .weight = 8000,
        .description = COMPOUND_STRING(
            "Revered long ago for its capacity to\n"
            "create iron from nothing, for some reason\n"
            "it has come back to life after 3,000 years."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_MELMETAL_GMAX] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Melmetal"),
        .cryId = CRY_MELMETAL,
        .natDexNum = NATIONAL_DEX_MELMETAL,
        .categoryName = _("Hex Nut"),
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING(
            "In a distant land, there are\n"
            "legends about a cyclopean giant. In fact,\n"
            "the giant was a Melmetal that was\n"
            "flooded with Gigantamax energy."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MELTAN

#ifdef __INTELLISENSE__
};
#endif
