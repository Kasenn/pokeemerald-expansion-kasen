#ifdef __INTELLISENSE__
const struct SpeciesDexInfo gSpeciesDexInfoGen4[] =
{
#endif

#if P_FAMILY_TURTWIG
    [SPECIES_TURTWIG] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Turtwig"),
        .cryId = CRY_TURTWIG,
        .natDexNum = NATIONAL_DEX_TURTWIG,
        .categoryName = _("Tiny Leaf"),
        .height = 4,
        .weight = 102,
        .description = COMPOUND_STRING(
            "The shell on its back is made of soil. \n"
            "On a very healthy Turtwig, the shell \n"
            "should feel moist. The leaf on its head\n"
            "wilts if it is thirsty."),
        .pokemonScale = 491,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GROTLE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grotle"),
        .cryId = CRY_GROTLE,
        .natDexNum = NATIONAL_DEX_GROTLE,
        .categoryName = _("Grove"),
        .height = 11,
        .weight = 970,
        .description = COMPOUND_STRING(
            "A Grotle that lives in the forest is said\n"
            "to have its own secret springwater well. \n"
            "It carries fellow Pokémon there on \n"
            "its back."),
        .pokemonScale = 320,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TORTERRA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Torterra"),
        .cryId = CRY_TORTERRA,
        .natDexNum = NATIONAL_DEX_TORTERRA,
        .categoryName = _("Continent"),
        .height = 22,
        .weight = 3100,
        .description = COMPOUND_STRING(
            "Some Pokémon are born on a Torterra's\n"
            "back and spend their entire life there.\n"
            "Ancient people imagined that beneath \n"
            "the ground, a gigantic Torterra dwelled."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },
#endif //P_FAMILY_TURTWIG

#if P_FAMILY_CHIMCHAR
    [SPECIES_CHIMCHAR] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Chimchar"),
        .cryId = CRY_CHIMCHAR,
        .natDexNum = NATIONAL_DEX_CHIMCHAR,
        .categoryName = _("Chimp"),
        .height = 5,
        .weight = 62,
        .description = COMPOUND_STRING(
            "Its fiery rear end is fueled by gas made\n"
            "in its belly. Before going to sleep,\n"
            "Chimchar extinguish the flame on their\n"
            "tails to prevent fires."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MONFERNO] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Monferno"),
        .cryId = CRY_MONFERNO,
        .natDexNum = NATIONAL_DEX_MONFERNO,
        .categoryName = _("Playful"),
        .height = 9,
        .weight = 220,
        .description = COMPOUND_STRING(
            "It carefully controls the intensity of\n"
            "the flame on its tail, so as to keep its\n"
            "foes at an adequate distance.\n"
            "Its fiery tail is but one weapon."),
        .pokemonScale = 338,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_INFERNAPE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Infernape"),
        .cryId = CRY_INFERNAPE,
        .natDexNum = NATIONAL_DEX_INFERNAPE,
        .categoryName = _("Flame"),
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Its crown of fire is indicative of its\n"
            "fiery nature. It uses a special kind of\n"
            "martial arts involving all of its limbs to\n"
            "take on any opponent."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CHIMCHAR

#if P_FAMILY_PIPLUP
    [SPECIES_PIPLUP] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Piplup"),
        .cryId = CRY_PIPLUP,
        .natDexNum = NATIONAL_DEX_PIPLUP,
        .categoryName = _("Penguin"),
        .height = 4,
        .weight = 52,
        .description = COMPOUND_STRING(
            "A poor walker, it often falls down. However,\n"
            "its strong pride makes it puff up its chest\n"
            "without a care. It's difficult to bond with\n"
            "since it won't listen to its Trainer."),
        .pokemonScale = 491,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PRINPLUP] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Prinplup"),
        .cryId = CRY_PRINPLUP,
        .natDexNum = NATIONAL_DEX_PRINPLUP,
        .categoryName = _("Penguin"),
        .height = 8,
        .weight = 230,
        .description = COMPOUND_STRING(
            "Because every Prinplup considers itself\n"
            "to be the most important, they can never\n"
            "form a group. It searches for prey in\n"
            "icy seas."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_EMPOLEON] =
    {
        .bodyColor = BODY_COLOR_BLUE,                       
        .speciesName = _("Empoleon"),                       
        .natDexNum = NATIONAL_DEX_EMPOLEON,                 
        .categoryName = _("Emperor"),                       
        .height = 17,                                       
        .weight = 845,                                      
        .description = COMPOUND_STRING(
            "The three horns that extend from its\n"
            "beak attest to its power. It avoids\n"
            "unnecessary disputes, but it will decimate\n"
            "anything that threatens its pride."),
        .pokemonScale = 259,                                
        .pokemonOffset = 0,                                 
        .trainerScale = 290,                                
        .trainerOffset = 1,                                 
        .cryId = CRY_EMPOLEON,
    },
#if P_MEGA_EVOLUTIONS
    [SPECIES_EMPOLEON_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,                       
        .speciesName = _("Empoleon"),                       
        .natDexNum = NATIONAL_DEX_EMPOLEON,                 
        .categoryName = _("Emperor"),                       
        .height = 17,                                       
        .weight = 845,                                      
        .description = COMPOUND_STRING(                     
            "The three horns that extend from its\n"
            "beak attest to its power. It avoids\n"
            "unnecessary disputes, but it will decimate\n"
            "anything that threatens its pride."),
        .pokemonScale = 259,                                
        .pokemonOffset = 0,                                 
        .trainerScale = 290,                                
        .trainerOffset = 1,                                 
        .cryId = CRY_EMPOLEON,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PIPLUP

#if P_FAMILY_STARLY
    [SPECIES_STARLY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Starly"),
        .cryId = CRY_STARLY,
        .natDexNum = NATIONAL_DEX_STARLY,
        .categoryName = _("Starling"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING(
            "They flock around mountains and fields,\n"
            "chasing after bug Pokémon. However,\n"
            "they bicker if the group grows too big.\n"
            "Their singing is noisy and annoying."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_STARAVIA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Staravia"),
        .cryId = CRY_STARAVIA,
        .natDexNum = NATIONAL_DEX_STARAVIA,
        .categoryName = _("Starling"),
        .height = 6,
        .weight = 155,
        .description = COMPOUND_STRING(
            "Recognizing their own weakness, they\n"
            "maintain huge flocks. Fierce scuffles\n"
            "break out between various flocks.\n"
            "When alone, a Staravia cries noisily."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_STARAPTOR] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Staraptor"),
        .cryId = CRY_STARAPTOR,
        .natDexNum = NATIONAL_DEX_STARAPTOR,
        .categoryName = _("Predator"),
        .height = 12,
        .weight = 249,
        .description = COMPOUND_STRING(
            "When Staravia evolve into Staraptor,\n"
            "they leave the flock to live alone. It has\n"
            "a savage nature. It will courageously\n"
            "challenge foes that are much larger."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_STARAPTOR_MEGA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Staraptor"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_STARAPTOR_MEGA,
    #else
        .cryId = CRY_STARAPTOR,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_STARAPTOR,
        .categoryName = _("Predator"),
        .height = 19,
        .weight = 500,
        .description = COMPOUND_STRING(
            "Mega Staraptor is a top-class flier.\n"
            "It can easily soar through the sky while\n"
            "gripping a Steelix that weighs more than\n"
            "880 lbs."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_STARLY

#if P_FAMILY_BIDOOF
    [SPECIES_BIDOOF] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bidoof"),
        .cryId = CRY_BIDOOF,
        .natDexNum = NATIONAL_DEX_BIDOOF,
        .categoryName = _("Plump Mouse"),
        .height = 5,
        .weight = 200,
        .description = COMPOUND_STRING(
            "A comparison revealed that Bidoof's front\n"
            "teeth grow at the same rate as Rattata's.\n"
            "It constantly gnaws on logs and rocks to\n"
            "whittle down its front teeth."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BIBAREL] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bibarel"),
        .cryId = CRY_BIBAREL,
        .natDexNum = NATIONAL_DEX_BIBAREL,
        .categoryName = _("Beaver"),
        .height = 10,
        .weight = 315,
        .description = COMPOUND_STRING(
            "It makes its nest by damming streams\n"
            "with bark and mud. A river dammed by\n"
            "Bibarel will never overflow its banks,\n"
            "which is appreciated by people nearby."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_BIDOOF

#if P_FAMILY_KRICKETOT
    [SPECIES_KRICKETOT] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Kricketot"),
        .cryId = CRY_KRICKETOT,
        .natDexNum = NATIONAL_DEX_KRICKETOT,
        .categoryName = _("Cricket"),
        .height = 3,
        .weight = 22,
        .description = COMPOUND_STRING(
            "It shakes its head back to front,\n"
            "causing its antennae to hit each other\n"
            "and sound like a xylophone.\n"
            "These sounds are fall hallmarks."),
        .pokemonScale = 530,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_KRICKETUNE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Kricketune"),
        .cryId = CRY_KRICKETUNE,
        .natDexNum = NATIONAL_DEX_KRICKETUNE,
        .categoryName = _("Cricket"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING(
            "It signals its emotions with its melodies.\n"
            "There is a village that hosts a contest\n"
            "based on the amazingly variable cries\n"
            "of this Pokémon."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_KRICKETOT

#if P_FAMILY_SHINX
    [SPECIES_SHINX] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Shinx"),
        .cryId = CRY_SHINX,
        .natDexNum = NATIONAL_DEX_SHINX,
        .categoryName = _("Flash"),
        .height = 5,
        .weight = 95,
        .description = COMPOUND_STRING(
            "It rapidly contracts and relaxes its\n"
            "muscles to generate electricity. Its\n"
            "body shines if endangered. It flees\n"
            "while the foe is momentarily blinded."),
        .pokemonScale = 432,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LUXIO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Luxio"),
        .cryId = CRY_LUXIO,
        .natDexNum = NATIONAL_DEX_LUXIO,
        .categoryName = _("Spark"),
        .height = 9,
        .weight = 305,
        .description = COMPOUND_STRING(
            "Strong electricity courses through the\n"
            "tips of its sharp claws. A light scratch\n"
            "has enough amperage to cause fainting\n"
            "in foes."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LUXRAY] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Luxray"),
        .cryId = CRY_LUXRAY,
        .natDexNum = NATIONAL_DEX_LUXRAY,
        .categoryName = _("Gleam Eyes"),
        .height = 14,
        .weight = 420,
        .description = COMPOUND_STRING(
            "It has eyes which can see through\n"
            "anything. Luxray's ability to see\n"
            "through objects comes in handy when\n"
            "it's scouting for danger."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SHINX

#if P_FAMILY_CRANIDOS
    [SPECIES_CRANIDOS] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cranidos"),
        .cryId = CRY_CRANIDOS,
        .natDexNum = NATIONAL_DEX_CRANIDOS,
        .categoryName = _("Head Butt"),
        .height = 9,
        .weight = 315,
        .description = COMPOUND_STRING(
            "A lifelong jungle dweller from 100 million\n"
            "years ago, its skull is as hard as iron. \n"
            "It would snap obstructing trees with\n"
            "headbutts."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_RAMPARDOS] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Rampardos"),
        .cryId = CRY_RAMPARDOS,
        .natDexNum = NATIONAL_DEX_RAMPARDOS,
        .categoryName = _("Head Butt"),
        .height = 16,
        .weight = 1025,
        .description = COMPOUND_STRING(
            "The result of repeated headbutts\n"
            "is a skull grown thick and hard.\n"
            "However, its brain has shrunk in size\n"
            "compared with Cranidos's."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_CRANIDOS

#if P_FAMILY_SHIELDON
    [SPECIES_SHIELDON] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Shieldon"),
        .cryId = CRY_SHIELDON,
        .natDexNum = NATIONAL_DEX_SHIELDON,
        .categoryName = _("Shield"),
        .height = 5,
        .weight = 570,
        .description = COMPOUND_STRING(
            "This Pokémon lived in primeval jungles.\n"
            "Few enemies would have been willing to\n"
            "square off against its heavily armored\n"
            "face, so it's thought."),
        .pokemonScale = 432,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BASTIODON] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Bastiodon"),
        .cryId = CRY_BASTIODON,
        .natDexNum = NATIONAL_DEX_BASTIODON,
        .categoryName = _("Shield"),
        .height = 13,
        .weight = 1495,
        .description = COMPOUND_STRING(
            "Their rock-hard faces serve to protect\n"
            "them from any frontral attacks.\n"
            "When attacked, they form a wall.\n"
            "They shielded their young in that way."),
        .pokemonScale = 272,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SHIELDON

#if P_FAMILY_BURMY
    [SPECIES_BURMY_PLANT] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Burmy"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "If its cloak is even slightly damaged, it\n"
            "will immediately repair it with whatever is\n"
            "near at hand. The Pokémon within the cloak\n"
            "is scrawny and vulnerable to the cold."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BURMY_SANDY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Burmy"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "It weaves a cloak together with sand, mud,\n"
            "and silk it spits out. This earthen cloak\n"
            "is ruined by wind and rain, so the Pokémon\n"
            "hides away in caves and other such places."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BURMY_TRASH] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Burmy"),
        .cryId = CRY_BURMY,
        .natDexNum = NATIONAL_DEX_BURMY,
        .categoryName = _("Bagworm"),
        .height = 2,
        .weight = 34,
        .description = COMPOUND_STRING(
            "When confronted by a lack of other\n"
            "materials, Burmy will create its cloak\n"
            "using dust and refuse. The cloak seems to\n"
            "be more comfortable than one would think."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WORMADAM_PLANT] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Wormadam"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its appearance changes depending\n"
            "on where Burmy evolved. The materials\n"
            "on hand become a part of its body.\n"
            "The cloak is never shed."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WORMADAM_SANDY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Wormadam"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its earthen skin is reasonably hard, it has\n"
            "no problem repelling a Starly's pecking.\n"
            "It is said that a Wormadam that evolves\n"
            "on a cold day will have a thicker cloak."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WORMADAM_TRASH] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Wormadam"),
        .cryId = CRY_WORMADAM,
        .natDexNum = NATIONAL_DEX_WORMADAM,
        .categoryName = _("Bagworm"),
        .height = 5,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Its body, composed of refuse, blends in to\n"
            "the scenery enough to be inconspicuous.\n"
            "This seems to be the perfect way for it to\n"
            "evade the detection of predators."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define MOTHIM_SPECIES_INFO_DEX                                                 \
    {                                                                       \
        .bodyColor = BODY_COLOR_YELLOW,                                     \
        .speciesName = _("Mothim"),                                         \
        .cryId = CRY_MOTHIM,                                                \
        .natDexNum = NATIONAL_DEX_MOTHIM,                                   \
        .categoryName = _("Moth"),                                          \
        .height = 9,                                                        \
        .weight = 233,                                                      \
        .description = gMothimPokedexText,                                  \
        .pokemonScale = 338,                                                \
        .pokemonOffset = 8,                                                 \
        .trainerScale = 256,                                                \
        .trainerOffset = 0,                                                 \
    }

    [SPECIES_MOTHIM_PLANT] = MOTHIM_SPECIES_INFO_DEX,
    [SPECIES_MOTHIM_SANDY] = MOTHIM_SPECIES_INFO_DEX,
    [SPECIES_MOTHIM_TRASH] = MOTHIM_SPECIES_INFO_DEX,
#endif //P_FAMILY_BURMY

#if P_FAMILY_COMBEE
    [SPECIES_COMBEE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Combee"),
        .cryId = CRY_COMBEE,
        .natDexNum = NATIONAL_DEX_COMBEE,
        .categoryName = _("Tiny Bee"),
        .height = 3,
        .weight = 55,
        .description = COMPOUND_STRING(
            "A Pokémon formed by three others.\n"
            "It constantly gathers honey from flowers\n"
            "to please Vespiquen. At night, they\n"
            "cluster to form a beehive and sleep."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_VESPIQUEN] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Vespiquen"),
        .cryId = CRY_VESPIQUEN,
        .natDexNum = NATIONAL_DEX_VESPIQUEN,
        .categoryName = _("Beehive"),
        .height = 12,
        .weight = 385,
        .description = COMPOUND_STRING(
            "It houses its colony in cells in its body\n"
            "and releases various pheromones to\n"
            "make those grubs do its bidding.\n"
            "There is only one in a colony."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_COMBEE

#if P_FAMILY_PACHIRISU
    [SPECIES_PACHIRISU] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Pachirisu"),
        .cryId = CRY_PACHIRISU,
        .natDexNum = NATIONAL_DEX_PACHIRISU,
        .categoryName = _("EleSquirrel"),
        .height = 4,
        .weight = 39,
        .description = COMPOUND_STRING(
            "A pair may be seen rubbing their cheek\n"
            "pouches together in an effort to share\n"
            "stored electricity. It stores them with\n"
            "berries in tree holes."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PACHIRISU

#if P_FAMILY_BUIZEL
    [SPECIES_BUIZEL] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Buizel"),
        .cryId = CRY_BUIZEL,
        .natDexNum = NATIONAL_DEX_BUIZEL,
        .categoryName = _("Sea Weasel"),
        .height = 7,
        .weight = 295,
        .description = COMPOUND_STRING(
            "It inflates its flotation sac, keeping its\n"
            "face above water in order to watch for\n"
            "prey movement. It swims by rotating its\n"
            "two tails like a screw."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_FLOATZEL] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Floatzel"),
        .cryId = CRY_FLOATZEL,
        .natDexNum = NATIONAL_DEX_FLOATZEL,
        .categoryName = _("Sea Weasel"),
        .height = 11,
        .weight = 335,
        .description = COMPOUND_STRING(
            "Its flotation sac developed as a result\n"
            "of pursuing aquatic prey. It can double\n"
            "as a rubber raft. It assists in the rescues\n"
            "of drowning people."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_BUIZEL

#if P_FAMILY_CHERUBI
    [SPECIES_CHERUBI] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Cherubi"),
        .cryId = CRY_CHERUBI,
        .natDexNum = NATIONAL_DEX_CHERUBI,
        .categoryName = _("Cherry"),
        .height = 4,
        .weight = 33,
        .description = COMPOUND_STRING(
            "The small ball holds the nutrients needed\n"
            "for evolution. Apparently, it is also very\n"
            "sweet and tasty. Pokémon like Starly and\n"
            "Taillow try to peck it off."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CHERRIM_OVERCAST] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Cherrim"),
        .cryId = CRY_CHERRIM,
        .natDexNum = NATIONAL_DEX_CHERRIM,
        .categoryName = _("Blossom"),
        .height = 5,
        .weight = 93,
        .description = COMPOUND_STRING(
            "It's motionless, save for the occasional\n"
            "quiver. A rich array of Pokémon can be\n"
            "found gathered around it, drawn by the\n"
            "scent exuded from Cherrim's folded petals."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Cherrim"),
        .cryId = CRY_CHERRIM,
        .natDexNum = NATIONAL_DEX_CHERRIM,
        .categoryName = _("Blossom"),
        .height = 5,
        .weight = 93,
        .description = COMPOUND_STRING(
            "Cherrim takes this form on sunny days.\n"
            "Its faint scent entices bug Pokémon to it.\n"
            "It immediately closes its petals and\n"
            "becomes immobile once the sun hides."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CHERUBI

#if P_FAMILY_SHELLOS
    [SPECIES_SHELLOS_WEST] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Shellos"),
        .cryId = CRY_SHELLOS,
        .natDexNum = NATIONAL_DEX_SHELLOS,
        .categoryName = _("Sea Slug"),
        .height = 3,
        .weight = 63,
        .description = COMPOUND_STRING(
            "It oozes a purple fluid to deter enemies.\n"
            "While harmless, the fluid is awfully sticky.\n"
            "Apparently, there are more West Sea\n"
            "Shellos now than there were in the past."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SHELLOS_EAST] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Shellos"),
        .cryId = CRY_SHELLOS,
        .natDexNum = NATIONAL_DEX_SHELLOS,
        .categoryName = _("Sea Slug"),
        .height = 3,
        .weight = 63,
        .description = COMPOUND_STRING(
            "It's capable of spending a limited amount\n"
            "of time on land until their skin dries out.\n"
            "One theory suggests that living in cold\n"
            "seas causes Shellos to take on this form."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GASTRODON_WEST] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gastrodon"),
        .cryId = CRY_GASTRODON,
        .natDexNum = NATIONAL_DEX_GASTRODON,
        .categoryName = _("Sea Slug"),
        .height = 9,
        .weight = 299,
        .description = COMPOUND_STRING(
            "It appears on shallow-water beaches to\n"
            "eat sand for nourishment. Should one\n"
            "Gastrodon encounter another of a\n"
            "different color, a fierce battle will ensue."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GASTRODON_EAST] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gastrodon"),
        .cryId = CRY_GASTRODON,
        .natDexNum = NATIONAL_DEX_GASTRODON,
        .categoryName = _("Sea Slug"),
        .height = 9,
        .weight = 299,
        .description = COMPOUND_STRING(
            "Found more often on land than in the sea.\n"
            "They normally live in rocky seashores, but\n"
            "when cloudy or rainy, they can sometimes\n"
            "be found on mountains, far from the sea."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SHELLOS

#if P_FAMILY_DRIFLOON
    [SPECIES_DRIFLOON] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Drifloon"),
        .cryId = CRY_DRIFLOON,
        .natDexNum = NATIONAL_DEX_DRIFLOON,
        .categoryName = _("Balloon"),
        .height = 4,
        .weight = 12,
        .description = COMPOUND_STRING(
            "Because of the way it floats aimlessly,\n"
            "an old folktale calls it a “Signpost for\n"
            "Wandering Spirits.” Children holding\n"
            "them sometimes vanish."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DRIFBLIM] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Drifblim"),
        .cryId = CRY_DRIFBLIM,
        .natDexNum = NATIONAL_DEX_DRIFBLIM,
        .categoryName = _("Blimp"),
        .height = 12,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Even while under careful observation,\n"
            "large flocks of Drifblim flying at dusk\n"
            "will inexplicably disappear from view.\n"
            "No one knows where they go."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_DRIFLOON

#if P_FAMILY_BUNEARY
    [SPECIES_BUNEARY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Buneary"),
        .cryId = CRY_BUNEARY,
        .natDexNum = NATIONAL_DEX_BUNEARY,
        .categoryName = _("Rabbit"),
        .height = 4,
        .weight = 55,
        .description = COMPOUND_STRING(
            "You can tell how it feels by the way\n"
            "it rolls its ears. When it's scared,\n"
            "both ears are rolled up. When it senses\n"
            "danger, it perks them up."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LOPUNNY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lopunny"),
        .cryId = CRY_LOPUNNY,
        .natDexNum = NATIONAL_DEX_LOPUNNY,
        .categoryName = _("Rabbit"),
        .height = 12,
        .weight = 333,
        .description = COMPOUND_STRING(
            "An extremely cautious Pokémon.\n"
            "It is very conscious of its looks and\n"
            "never fails to groom its ears.\n"
            "It runs with sprightly jumps."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LOPUNNY_MEGA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lopunny"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_LOPUNNY_MEGA,
    #else
        .cryId = CRY_LOPUNNY,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_LOPUNNY,
        .categoryName = _("Rabbit"),
        .height = 13,
        .weight = 283,
        .description = COMPOUND_STRING(
            "Mega Evolution awakens its combative\n"
            "instincts. It has shed any fur that got in\n"
            "the way of its attacks.\n"
            "crescent."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_BUNEARY

#if P_FAMILY_GLAMEOW
    [SPECIES_GLAMEOW] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Glameow"),
        .cryId = CRY_GLAMEOW,
        .natDexNum = NATIONAL_DEX_GLAMEOW,
        .categoryName = _("Catty"),
        .height = 5,
        .weight = 39,
        .description = COMPOUND_STRING(
            "It is a very fickle Pokémon, which is \n"
            "very popular among some. It claws its\n"
            "Trainer's nose if it isn't fed and\n"
            "purrs when affectionate."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PURUGLY] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Purugly"),
        .cryId = CRY_PURUGLY,
        .natDexNum = NATIONAL_DEX_PURUGLY,
        .categoryName = _("Tiger Cat"),
        .height = 10,
        .weight = 438,
        .description = COMPOUND_STRING(
            "It is a brazen brute that barges its way\n"
            "into another Pokémon's nest and claims\n"
            "it as its own. It binds its body with its\n"
            "tails to make itself look bigger."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_GLAMEOW

#if P_FAMILY_STUNKY
    [SPECIES_STUNKY] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Stunky"),
        .cryId = CRY_STUNKY,
        .natDexNum = NATIONAL_DEX_STUNKY,
        .categoryName = _("Skunk"),
        .height = 4,
        .weight = 192,
        .description = COMPOUND_STRING(
            "It protects itself by spraying a\n"
            "nose-curling, stinky fluid from its rear\n"
            "to repel attackers. The stench lingers\n"
            "for 24 hours."),
        .pokemonScale = 491,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SKUNTANK] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Skuntank"),
        .cryId = CRY_SKUNTANK,
        .natDexNum = NATIONAL_DEX_SKUNTANK,
        .categoryName = _("Skunk"),
        .height = 10,
        .weight = 380,
        .description = COMPOUND_STRING(
            "It attacks by spraying a horribly smelly\n"
            "fluid from the tip of its tail. The fluid\n"
            "smells worse the longer it is allowed\n"
            "to fester."),
        .pokemonScale = 305,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_STUNKY

#if P_FAMILY_BRONZOR
    [SPECIES_BRONZOR] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bronzor"),
        .cryId = CRY_BRONZOR,
        .natDexNum = NATIONAL_DEX_BRONZOR,
        .categoryName = _("Bronze"),
        .height = 5,
        .weight = 605,
        .description = COMPOUND_STRING(
            "Implements shaped like it were discovered\n"
            "in ancient tombs. There are researchers\n"
            "who believe this Pokémon reflected like a\n"
            "mirror in the distant past."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BRONZONG] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bronzong"),
        .cryId = CRY_BRONZONG,
        .natDexNum = NATIONAL_DEX_BRONZONG,
        .categoryName = _("Bronze Bell"),
        .height = 13,
        .weight = 1870,
        .description = COMPOUND_STRING(
            "In ages past, this Pokémon was revered as\n"
            "a bringer of rain. One caused a news stir\n"
            "when it was dug up at a construction site\n"
            "after a 2000-year sleep."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_BRONZOR

#if P_FAMILY_CHATOT
    [SPECIES_CHATOT] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chatot"),
        .cryId = CRY_CHATOT,
        .natDexNum = NATIONAL_DEX_CHATOT,
        .categoryName = _("Music Note"),
        .height = 5,
        .weight = 19,
        .description = COMPOUND_STRING(
            "It mimics the cries of other Pokémon to\n"
            "trick them into thinking it's one of them.\n"
            "This way they won't attack it. It can\n"
            "also learn and speak human words."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CHATOT

#if P_FAMILY_SPIRITOMB
    [SPECIES_SPIRITOMB] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Spiritomb"),
        .cryId = CRY_SPIRITOMB,
        .natDexNum = NATIONAL_DEX_SPIRITOMB,
        .categoryName = _("Forbidden"),
        .height = 10,
        .weight = 1080,
        .description = COMPOUND_STRING(
            "A Pokémon that was formed by 108 spirits.\n"
            "Its constant mischief and misdeeds\n"
            "resulted in it being bound to an\n"
            "Odd Keystone by a mysterious spell."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SPIRITOMB

#if P_FAMILY_GIBLE
    [SPECIES_GIBLE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gible"),
        .cryId = CRY_GIBLE,
        .natDexNum = NATIONAL_DEX_GIBLE,
        .categoryName = _("Land Shark"),
        .height = 7,
        .weight = 205,
        .description = COMPOUND_STRING(
            "It nests in horizontal holes warmed by\n"
            "geothermal heat. Foes who stray too\n"
            "close can expect to be pounced on\n"
            "and bitten."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GABITE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gabite"),
        .cryId = CRY_GABITE,
        .natDexNum = NATIONAL_DEX_GABITE,
        .categoryName = _("Cave"),
        .height = 14,
        .weight = 560,
        .description = COMPOUND_STRING(
            "Shiny objects are its passion. It can be\n"
            "found in its cave, scarcely moving,\n"
            "its gaze fixed on the jewels it's amassed\n"
            "or Carbink it has caught."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },

    [SPECIES_GARCHOMP] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Garchomp"),
        .cryId = CRY_GARCHOMP,
        .natDexNum = NATIONAL_DEX_GARCHOMP,
        .categoryName = _("Mach"),
        .height = 19,
        .weight = 950,
        .description = COMPOUND_STRING(
            "When it folds up its body and extends its\n"
            "wings, it looks like a jet plane. It is\n"
            "covered in fine scales that reduce drag,\n"
            "enabling it to fly at high speeds."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GARCHOMP_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Garchomp"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GARCHOMP_MEGA,
    #else
        .cryId = CRY_GARCHOMP,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GARCHOMP,
        .categoryName = _("Mach"),
        .height = 19,
        .weight = 950,
        .description = COMPOUND_STRING(
            "Excess energy melted its arms and wings\n"
            "into giant scythes, sending it mad with\n"
            "rage. It swings its scythes wildly and\n"
            "slices the ground to pieces."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GARCHOMP_MEGA_Z] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Garchomp"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GARCHOMP, //CRY_GARCHOMP_MEGA_Z (unreleased)
    #else
        .cryId = CRY_GARCHOMP,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GARCHOMP,
        .categoryName = _("Mach"),
        .height = 19,
        .weight = 990,
        .description = COMPOUND_STRING(
            "Garchomp has gained a new Mega-Evolved\n"
            "form. It flies around foes at Mach speed\n"
            "and cuts them to shreds with its sinister\n"
            "wing claws."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_GIBLE

#if P_FAMILY_RIOLU
    [SPECIES_RIOLU] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Riolu"),
        .cryId = CRY_RIOLU,
        .natDexNum = NATIONAL_DEX_RIOLU,
        .categoryName = _("Emanation"),
        .height = 7,
        .weight = 202,
        .description = COMPOUND_STRING(
            "It can discern the physical and emotional\n"
            "states of people, Pokémon, and other\n"
            "natural things from the shape of their\n"
            "aura waves."),
        .pokemonScale = 365,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LUCARIO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lucario"),
        .cryId = CRY_LUCARIO,
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 12,
        .weight = 540,
        .description = COMPOUND_STRING(
            "It understands human speech.\n"
            "It is said that no foe can remain invisible\n"
            "to Lucario, since it can detect Auras.\n"
            "Even foes it could not otherwise see."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_LUCARIO_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lucario"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_LUCARIO_MEGA,
    #else
        .cryId = CRY_LUCARIO,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 13,
        .weight = 575,
        .description = COMPOUND_STRING(
            "It readies itself to face its enemies by\n"
            "focusing its mental energies. Its fighting\n"
            "style can be summed up in a single word:\n"
            "heartless."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_LUCARIO_MEGA_Z] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Lucario"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_LUCARIO_MEGA_Z,
    #else
        .cryId = CRY_LUCARIO,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 13,
        .weight = 494,
        .description = COMPOUND_STRING(
            "By completely cloaking itself in its aura,\n"
            "Mega Lucario Z can parry all manner of\n"
            "attacks, battling as if it were gracefully\n"
            "dancing."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_RIOLU

#if P_FAMILY_HIPPOPOTAS
    [SPECIES_HIPPOPOTAS] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hippopotas"),
        .cryId = CRY_HIPPOPOTAS,
        .natDexNum = NATIONAL_DEX_HIPPOPOTAS,
        .categoryName = _("Hippo"),
        .height = 8,
        .weight = 495,
        .description = COMPOUND_STRING(
            "Hippopotas shuts its nostrils tight when\n"
            "travelling through sand. Instead of\n"
            "perspiration, it expels grains of sand\n"
            "from its body."),
        .pokemonScale = 366,
        .pokemonOffset = 11,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_HIPPOWDON] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hippowdon"),
        .cryId = CRY_HIPPOWDON,
        .natDexNum = NATIONAL_DEX_HIPPOWDON,
        .categoryName = _("Heavyweight"),
        .height = 20,
        .weight = 3000,
        .description = COMPOUND_STRING(
            "It is surprisingly quick to anger.\n"
            "It brandishes its gaping mouth in a\n"
            "display of fearsome strength and raises\n"
            "vast quantities of sand while attacking."),
        .pokemonScale = 261,
        .pokemonOffset = 2,
        .trainerScale = 334,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_HIPPOPOTAS

#if P_FAMILY_SKORUPI
    [SPECIES_SKORUPI] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Skorupi"),
        .cryId = CRY_SKORUPI,
        .natDexNum = NATIONAL_DEX_SKORUPI,
        .categoryName = _("Scorpion"),
        .height = 8,
        .weight = 120,
        .description = COMPOUND_STRING(
            "It grips prey with its tail claws and\n"
            "injects poison. It tenaciously hangs\n"
            "on until the poison takes.\n"
            "It can survive a year without food."),
        .pokemonScale = 366,
        .pokemonOffset = 12,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_DRAPION] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Drapion"),
        .cryId = CRY_DRAPION,
        .natDexNum = NATIONAL_DEX_DRAPION,
        .categoryName = _("Ogre Scorp"),
        .height = 13,
        .weight = 615,
        .description = COMPOUND_STRING(
            "Possessing a sturdy build, it takes\n"
            "pride in its strength. It has the power\n"
            "in its clawed arms to make scrap\n"
            "out of a car."),
        .pokemonScale = 272,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SKORUPI

#if P_FAMILY_CROAGUNK
    [SPECIES_CROAGUNK] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Croagunk"),
        .cryId = CRY_CROAGUNK,
        .natDexNum = NATIONAL_DEX_CROAGUNK,
        .categoryName = _("Toxic Mouth"),
        .height = 7,
        .weight = 230,
        .description = COMPOUND_STRING(
            "Croagunk rarely fights fairly. Inflating\n"
            "its poison sacs, it fills the area with\n"
            "an odd sound and hits flinching\n"
            "opponents with a poison jab."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TOXICROAK] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Toxicroak"),
        .cryId = CRY_TOXICROAK,
        .natDexNum = NATIONAL_DEX_TOXICROAK,
        .categoryName = _("Toxic Mouth"),
        .height = 13,
        .weight = 444,
        .description = COMPOUND_STRING(
            "Swaying and dodging the attacks\n"
            "of its foes, it weaves its flexible body\n"
            "in close, then lunges out with its\n"
            "poisonous claws."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CROAGUNK

#if P_FAMILY_CARNIVINE
    [SPECIES_CARNIVINE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Carnivine"),
        .cryId = CRY_CARNIVINE,
        .natDexNum = NATIONAL_DEX_CARNIVINE,
        .categoryName = _("Bug Catcher"),
        .height = 14,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Hanging from branches using its\n"
            "tentacles, it looks like a plant.\n"
            "It attracts prey with its sweet-smelling\n"
            "saliva, then chomps down."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CARNIVINE

#if P_FAMILY_FINNEON
    [SPECIES_FINNEON] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Finneon"),
        .cryId = CRY_FINNEON,
        .natDexNum = NATIONAL_DEX_FINNEON,
        .categoryName = _("Wing Fish"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "Its double tail fins propel its energetic\n"
            "jumps. When it breaks the surface of the\n"
            "sea, Wingull swoop down to grab it on\n"
            "the fly."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LUMINEON] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lumineon"),
        .cryId = CRY_LUMINEON,
        .natDexNum = NATIONAL_DEX_LUMINEON,
        .categoryName = _("Neon"),
        .height = 12,
        .weight = 240,
        .description = COMPOUND_STRING(
            "Lumineon swimming in the darkness\n"
            "of the deep sea look like stars shining\n"
            "in the night sky. It competes for food\n"
            "with Lanturn."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_FINNEON

#if P_FAMILY_SNOVER
    [SPECIES_SNOVER] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Snover"),
        .cryId = CRY_SNOVER,
        .natDexNum = NATIONAL_DEX_SNOVER,
        .categoryName = _("Frost Tree"),
        .height = 10,
        .weight = 505,
        .description = COMPOUND_STRING(
            "During cold seasons, it migrates to the\n"
            "mountain's lower reaches. Seemingly\n"
            "curious about people, they gather around\n"
            "footsteps they find on snowy mountains."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_ABOMASNOW] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Abomasnow"),
        .cryId = CRY_ABOMASNOW,
        .natDexNum = NATIONAL_DEX_ABOMASNOW,
        .categoryName = _("Frost Tree"),
        .height = 22,
        .weight = 1355,
        .description = COMPOUND_STRING(
            "It lives a quiet life on mountains that\n"
            "are perpetually covered in snow. It hides\n"
            "itself by whipping up blizzards.\n"
            "It is also known as “The Ice Monster.”"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Abomasnow"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_ABOMASNOW_MEGA,
    #else
        .cryId = CRY_ABOMASNOW,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_ABOMASNOW,
        .categoryName = _("Frost Tree"),
        .height = 27,
        .weight = 1850,
        .description = COMPOUND_STRING(
            "The sprouts on Abomasnow's back grow into\n"
            "great shafts of ice when it Mega Evolves.\n"
            "Dislikes associating with others and\n"
            "chooses to live quietly deep in mountains."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_SNOVER

#if P_FAMILY_ROTOM
    [SPECIES_ROTOM] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Its body is composed of plasma and loves\n"
            "to surprise others. One boy's invention led\n"
            "to the development of many machines that\n"
            "can use of Rotom's unique capabilities."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ROTOM_HEAT] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "If the convection microwave oven is\n"
            "not working properly, then the Rotom\n"
            "inhabiting it will become lethargic. It\n"
            "makes mischief by turning up the heat."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ROTOM_WASH] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "It enjoys coming up with water-based\n"
            "pranks. The model of washing machine that\n"
            "Rotom can inspirit has been discontinued,\n"
            "so they are now traded at high prices."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ROTOM_FROST] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "In this form, Rotom likes to play freezing\n"
            "cold pranks. You may find it's turned the\n"
            "bath you just filled to solid ice!\n"
            "It battles by spewing cold air."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ROTOM_FAN] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "The first appliance developed that Rotom\n"
            "coud inspirit was the electric fan. It uses\n"
            "its power over wind in its pranks, happily\n"
            "blowing any important documents it finds."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ROTOM_MOW] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Rotom"),
        .cryId = CRY_ROTOM,
        .natDexNum = NATIONAL_DEX_ROTOM,
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "The lawn mower is an appliance that led to\n"
            "the development of the Rotom Dex. It will\n"
            "mow down grass and flowers, then swagger\n"
            "around with pride at its accomplishments."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ROTOM

#if P_FAMILY_UXIE
    [SPECIES_UXIE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Uxie"),
        .cryId = CRY_UXIE,
        .natDexNum = NATIONAL_DEX_UXIE,
        .categoryName = _("Knowledge"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Known as ”The Being of Knowledge,”\n"
            "according to some sources, this Pokémon\n"
            "provided people with the intelligence\n"
            "necessary to solve various problems."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_UXIE

#if P_FAMILY_MESPRIT
    [SPECIES_MESPRIT] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Mesprit"),
        .cryId = CRY_MESPRIT,
        .natDexNum = NATIONAL_DEX_MESPRIT,
        .categoryName = _("Emotion"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "Although it slumbers at the bottom of a\n"
            "lake, its spirit is said to leave its body\n"
            "and flitter on the water surface. It\n"
            "taught humans of sorrow, pain, and joy."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MESPRIT

#if P_FAMILY_AZELF
    [SPECIES_AZELF] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Azelf"),
        .cryId = CRY_AZELF,
        .natDexNum = NATIONAL_DEX_AZELF,
        .categoryName = _("Willpower"),
        .height = 3,
        .weight = 3,
        .description = COMPOUND_STRING(
            "This Pokémon is said to have endowed\n"
            "humans with the determination needed to\n"
            "do things. It is thought that Uxie, Mesprit\n"
            "and Azelf all came from the same egg."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_AZELF

#if P_FAMILY_DIALGA
    [SPECIES_DIALGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dialga"),
        .cryId = CRY_DIALGA,
        .natDexNum = NATIONAL_DEX_DIALGA,
        .categoryName = _("Temporal"),
        .height = 54,
        .weight = 6830,
        .description = COMPOUND_STRING(
            "A Pokémon spoken of in legend.\n"
            "It completely controls the flow of time.\n"
            "It uses its power to travel at will\n"
            "through the past and future."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [SPECIES_DIALGA_ORIGIN] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dialga"),
        .cryId = CRY_DIALGA,
        .natDexNum = NATIONAL_DEX_DIALGA,
        .categoryName = _("Temporal"),
        .height = 70,
        .weight = 8500,
        .description = COMPOUND_STRING(
            "Radiant light caused Dialga to take on a\n"
            "form bearing a striking resemblance to the\n"
            "creator Pokémon. It wields such a colossal\n"
            "strength that this might be its true form."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },
#endif //P_FAMILY_DIALGA

#if P_FAMILY_PALKIA
    [SPECIES_PALKIA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Palkia"),
        .cryId = CRY_PALKIA,
        .natDexNum = NATIONAL_DEX_PALKIA,
        .categoryName = _("Spatial"),
        .height = 42,
        .weight = 3360,
        .description = COMPOUND_STRING(
            "Palkia has the ability to distort space.\n"
            "Its total control over the boundaries of\n"
            "space enable it to transport itself to\n"
            "faraway places and other dimensions."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 650,
        .trainerOffset = 16,
    },

    [SPECIES_PALKIA_ORIGIN] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Palkia"),
        .cryId = CRY_PALKIA,
        .natDexNum = NATIONAL_DEX_PALKIA,
        .categoryName = _("Spatial"),
        .height = 63,
        .weight = 6600,
        .description = COMPOUND_STRING(
            "It soars across the sky in a form that\n"
            "resembles the creator of all things.\n"
            "Perhaps this imitation of appearance is a\n"
            "strategy for gaining Arceus's powers."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 650,
        .trainerOffset = 16,
    },
#endif //P_FAMILY_PALKIA

#if P_FAMILY_HEATRAN
    [SPECIES_HEATRAN] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Heatran"),
        .cryId = CRY_HEATRAN,
        .natDexNum = NATIONAL_DEX_HEATRAN,
        .categoryName = _("Lava Dome"),
        .height = 17,
        .weight = 4300,
        .description = COMPOUND_STRING(
            "Boiling blood, like magma, circulates\n"
            "through its body. It dwells in volcanic\n"
            "caves, using its cross-shaped feet\n"
            "to crawl on ceilings and walls."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 290,
        .trainerOffset = 1,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_HEATRAN_MEGA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Heatran"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_HEATRAN_MEGA,
    #else
        .cryId = CRY_HEATRAN,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_HEATRAN,
        .categoryName = _("Lava Dome"),
        .height = 28,
        .weight = 5700,
        .description = COMPOUND_STRING(
            "It's said that if it goes all out, it\n"
            "can heat its body up to temperatures\n"
            "over 1.8 million degrees Fahrenheit.\n"
            "This heat keeps enemies at bay."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_HEATRAN

#if P_FAMILY_REGIGIGAS
    [SPECIES_REGIGIGAS] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Regigigas"),
        .cryId = CRY_REGIGIGAS,
        .natDexNum = NATIONAL_DEX_REGIGIGAS,
        .categoryName = _("Colossal"),
        .height = 37,
        .weight = 4200,
        .description = COMPOUND_STRING(
            "There is an enduring legend that\n"
            "states this Pokémon shaped Regirock,\n"
            "Regice, and Registeel out of clay, ice,\n"
            "and magma."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 610,
        .trainerOffset = 17,
    },
#endif //P_FAMILY_REGIGIGAS

#if P_FAMILY_GIRATINA
    [SPECIES_GIRATINA_ALTERED] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Giratina"),
        .cryId = CRY_GIRATINA,
        .natDexNum = NATIONAL_DEX_GIRATINA,
        .categoryName = _("Renegade"),
        .height = 45,
        .weight = 7500,
        .description = COMPOUND_STRING(
            "This Pokémon is said to live in a world\n"
            "on the reverse side of ours, where common\n"
            "knowledge is distorted and strange.\n"
            "It was banished for its violence."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [SPECIES_GIRATINA_ORIGIN] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Giratina"),
        .cryId = CRY_GIRATINA,
        .natDexNum = NATIONAL_DEX_GIRATINA,
        .categoryName = _("Renegade"),
        .height = 69,
        .weight = 6500,
        .description = COMPOUND_STRING(
            "Giratina loses its legs upon changing into\n"
            "this form. It's believed it hails from a\n"
            "world where the heavens and the earth\n"
            "are as one."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },
#endif //P_FAMILY_GIRATINA

#if P_FAMILY_CRESSELIA
    [SPECIES_CRESSELIA] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cresselia"),
        .cryId = CRY_CRESSELIA,
        .natDexNum = NATIONAL_DEX_CRESSELIA,
        .categoryName = _("Lunar"),
        .height = 15,
        .weight = 856,
        .description = COMPOUND_STRING(
            "Those who sleep holding one of\n"
            "Cresselia's feathers are assured of\n"
            "joyful dreams. It is said to represent\n"
            "the crescent moon."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CRESSELIA

#if P_FAMILY_MANAPHY
    [SPECIES_PHIONE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Phione"),
        .cryId = CRY_PHIONE,
        .natDexNum = NATIONAL_DEX_PHIONE,
        .categoryName = _("Sea Drifter"),
        .height = 4,
        .weight = 31,
        .description = COMPOUND_STRING(
            "When the water warms, they inflate the\n"
            "flotation sac on their heads and drift\n"
            "languidly on the sea in packs.\n"
            "It always returns to where it was born."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MANAPHY] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Manaphy"),
        .cryId = CRY_MANAPHY,
        .natDexNum = NATIONAL_DEX_MANAPHY,
        .categoryName = _("Seafaring"),
        .height = 3,
        .weight = 14,
        .description = COMPOUND_STRING(
            "Water makes up 80% of its body.\n"
            "It starts its life with a wondrous power\n"
            "that permits it to bond with any kind\n"
            "of Pokémon."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MANAPHY

#if P_FAMILY_DARKRAI
    [SPECIES_DARKRAI] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Darkrai"),
        .cryId = CRY_DARKRAI,
        .natDexNum = NATIONAL_DEX_DARKRAI,
        .categoryName = _("Pitch-Black"),
        .height = 15,
        .weight = 505,
        .description = COMPOUND_STRING(
            "It chases people and Pokémon from its\n"
            "territory by causing them to experience\n"
            "deep, nightmarish slumbers. However,\n"
            "it means no harm."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_DARKRAI_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Darkrai"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_DARKRAI_MEGA,
    #else
        .cryId = CRY_DARKRAI,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_DARKRAI,
        .categoryName = _("Pitch-Black"),
        .height = 30,
        .weight = 2400,
        .description = COMPOUND_STRING(
            "Its dark power blocks out the sun,\n"
            "plunging the surrounding area into\n"
            "darkness. There is no escaping its\n"
            "evil eye."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DARKRAI

#if P_FAMILY_SHAYMIN
    [SPECIES_SHAYMIN_LAND] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Shaymin"),
        .cryId = CRY_SHAYMIN_LAND,
        .natDexNum = NATIONAL_DEX_SHAYMIN,
        .categoryName = _("Gratitude"),
        .height = 2,
        .weight = 21,
        .description = COMPOUND_STRING(
            "The flowers all over its body bloom if it is\n"
            "lovingly hugged and senses gratitude. It\n"
            "dissolves toxins in the air to transform\n"
            "ruined land into a lush field of flowers."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Shaymin"),
        .cryId = CRY_SHAYMIN_SKY,
        .natDexNum = NATIONAL_DEX_SHAYMIN,
        .categoryName = _("Gratitude"),
        .height = 4,
        .weight = 52,
        .description = COMPOUND_STRING(
            "Upon taking in the scent of a particular\n"
            "rare flower, Shaymin is enveloped in light\n"
            "and its tiny body transforms, confering\n"
            "the power of flight upon it."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SHAYMIN

#if P_FAMILY_ARCEUS
#define ARCEUS_SPECIES_INFO_DEX(type, typeName, iconPal)                                \
    {                                                                               \
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .speciesName = _("Arceus"),                                                 \
        .cryId = CRY_ARCEUS,                                                        \
        .natDexNum = NATIONAL_DEX_ARCEUS,                                           \
        .categoryName = _("Alpha"),                                                 \
        .height = 32,                                                               \
        .weight = 3200,                                                             \
        .description = gArceusPokedexText,                                          \
        .pokemonScale = 256,                                                        \
        .pokemonOffset = 0,                                                         \
        .trainerScale = 495,                                                        \
        .trainerOffset = 10,                                                        \
    }

    [SPECIES_ARCEUS_NORMAL]   = ARCEUS_SPECIES_INFO_DEX(TYPE_NORMAL,   Normal,   1),
    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_SPECIES_INFO_DEX(TYPE_FIGHTING, Fighting, 1),
    [SPECIES_ARCEUS_FLYING]   = ARCEUS_SPECIES_INFO_DEX(TYPE_FLYING,   Flying,   2),
    [SPECIES_ARCEUS_POISON]   = ARCEUS_SPECIES_INFO_DEX(TYPE_POISON,   Poison,   2),
    [SPECIES_ARCEUS_GROUND]   = ARCEUS_SPECIES_INFO_DEX(TYPE_GROUND,   Ground,   1),
    [SPECIES_ARCEUS_ROCK]     = ARCEUS_SPECIES_INFO_DEX(TYPE_ROCK,     Rock,     2),
    [SPECIES_ARCEUS_BUG]      = ARCEUS_SPECIES_INFO_DEX(TYPE_BUG,      Bug,      1),
    [SPECIES_ARCEUS_GHOST]    = ARCEUS_SPECIES_INFO_DEX(TYPE_GHOST,    Ghost,    2),
    [SPECIES_ARCEUS_STEEL]    = ARCEUS_SPECIES_INFO_DEX(TYPE_STEEL,    Steel,    0),
    [SPECIES_ARCEUS_FIRE]     = ARCEUS_SPECIES_INFO_DEX(TYPE_FIRE,     Fire,     0),
    [SPECIES_ARCEUS_WATER]    = ARCEUS_SPECIES_INFO_DEX(TYPE_WATER,    Water,    0),
    [SPECIES_ARCEUS_GRASS]    = ARCEUS_SPECIES_INFO_DEX(TYPE_GRASS,    Grass,    1),
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_SPECIES_INFO_DEX(TYPE_ELECTRIC, Electric, 3),
    [SPECIES_ARCEUS_PSYCHIC]  = ARCEUS_SPECIES_INFO_DEX(TYPE_PSYCHIC,  Psychic,  1),
    [SPECIES_ARCEUS_ICE]      = ARCEUS_SPECIES_INFO_DEX(TYPE_ICE,      Ice,      0),
    [SPECIES_ARCEUS_DRAGON]   = ARCEUS_SPECIES_INFO_DEX(TYPE_DRAGON,   Dragon,   0),
    [SPECIES_ARCEUS_DARK]     = ARCEUS_SPECIES_INFO_DEX(TYPE_DARK,     Dark,     0),
    [SPECIES_ARCEUS_FAIRY]    = ARCEUS_SPECIES_INFO_DEX(TYPE_FAIRY,    Fairy,    0),
#endif //P_FAMILY_ARCEUS

#ifdef __INTELLISENSE__
};
#endif
