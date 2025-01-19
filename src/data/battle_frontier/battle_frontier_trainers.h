const struct BattleFrontierTrainer gBattleFrontierTrainers[FRONTIER_TRAINERS_COUNT] =
{
    [FRONTIER_TRAINER_BRADY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("BRADY"),
        .speechBefore = COMPOUND_STRING("I'm never going to lose!"),
        .speechWin = COMPOUND_STRING("I'm strong, aren't I?"),
        .speechLose = COMPOUND_STRING("What? But how?"),
        .monSet = gBattleFrontierTrainerMons_Brady
    },
    [FRONTIER_TRAINER_CONNER] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("CONNER"),
        .speechBefore = COMPOUND_STRING("Losing doesn't BUG ME"),
        .speechWin = COMPOUND_STRING("A WIN IS JUST AWESOME"),
        .speechLose = COMPOUND_STRING("DARN… losing DOES BUG ME"),
        .monSet = gBattleFrontierTrainerMons_Conner
    },
    [FRONTIER_TRAINER_BRADLEY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("BRADLEY"),
        .speechBefore = COMPOUND_STRING("HEY THERE! YOU'RE MY OPPONENT TODAY"),
        .speechWin = COMPOUND_STRING("HAHAHA! SEE YA LATER!"),
        .speechLose = COMPOUND_STRING("TOMORROW IS WHEN WE REALLY BATTLE"),
        .monSet = gBattleFrontierTrainerMons_Bradley
    },
    [FRONTIER_TRAINER_CYBIL] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("CYBIL"),
        .speechBefore = COMPOUND_STRING("YOU'RE REALLY NOT_VERY SCARY AT ALL"),
        .speechWin = COMPOUND_STRING("IT_S SAD to SEE YOU EC_MOVE2(STRUGGLE)"),
        .speechLose = COMPOUND_STRING("THIS CAN'T BE HAPPENING TO_ME!"),
        .monSet = gBattleFrontierTrainerMons_Cybil
    },
    [FRONTIER_TRAINER_RODETTE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("RODETTE"),
        .speechBefore = COMPOUND_STRING("OH THIS IS SO EXCITING!"),
        .speechWin = COMPOUND_STRING("IT_S INCREDIBLE how STRONG I AM!"),
        .speechLose = COMPOUND_STRING("OH_DEAR… I'm JUST NO GOOD"),
        .monSet = gBattleFrontierTrainerMons_Rodette
    },
    [FRONTIER_TRAINER_PEGGY] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("PEGGY"),
        .speechBefore = COMPOUND_STRING("GET READY to BE DESTROYED!"),
        .speechWin = COMPOUND_STRING("HAHAHA EXCL_EXCL I'm LOLLING!"),
        .speechLose = COMPOUND_STRING("I'm FEELING SAD THANKS to YOU"),
        .monSet = gBattleFrontierTrainerMons_Peggy
    },
    [FRONTIER_TRAINER_KEITH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("KEITH"),
        .speechBefore = COMPOUND_STRING("I DON_T JUST STUDY YOU KNOW"),
        .speechWin = COMPOUND_STRING("YOU DON_T STUDY ENOUGH…"),
        .speechLose = COMPOUND_STRING("I NEED to STUDY MORE ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Keith
    },
    [FRONTIER_TRAINER_GRAYSON] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GRAYSON"),
        .speechBefore = COMPOUND_STRING("A POKEMON BATTLE ISN_T CHILD_S_PLAY!"),
        .speechWin = COMPOUND_STRING("YOU'RE DONE aren't YOU?"),
        .speechLose = COMPOUND_STRING("WE WERE LIKE TOYS to YOU"),
        .monSet = gBattleFrontierTrainerMons_Grayson
    },
    [FRONTIER_TRAINER_GLENN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GLENN"),
        .speechBefore = COMPOUND_STRING("I WOULD BE COOL If I win"),
        .speechWin = COMPOUND_STRING("COOL! that's what I AM"),
        .speechLose = COMPOUND_STRING("I'm NOT going to BE COOL"),
        .monSet = gBattleFrontierTrainerMons_Glenn
    },
    [FRONTIER_TRAINER_LILIANA] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("LILIANA"),
        .speechBefore = COMPOUND_STRING("I WON_T GIVE_UP UNTIL I WIN"),
        .speechWin = COMPOUND_STRING("THERE IS NO SURRENDER IN ME"),
        .speechLose = COMPOUND_STRING("that's IT… I GIVE_UP ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Liliana
    },
    [FRONTIER_TRAINER_ELISE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ELISE"),
        .speechBefore = COMPOUND_STRING("MY STRATEGY IS FROM MY FATHER"),
        .speechWin = COMPOUND_STRING("I WIN! FATHER I've WON"),
        .speechLose = COMPOUND_STRING("FORGIVE ME FATHER FOR I've LOST"),
        .monSet = gBattleFrontierTrainerMons_Elise
    },
    [FRONTIER_TRAINER_ZOEY] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("ZOEY"),
        .speechBefore = COMPOUND_STRING("PLEASE BATTLE LIKE YOU MEAN IT"),
        .speechWin = COMPOUND_STRING("THANK_YOU EXCL_EXCL THANK_YOU SO MUCH"),
        .speechLose = COMPOUND_STRING("WERE YOU REALLY BEING SERIOUS?"),
        .monSet = gBattleFrontierTrainerMons_Zoey
    },
    [FRONTIER_TRAINER_MANUEL] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("MANUEL"),
        .speechBefore = COMPOUND_STRING("ME lose? that's PREPOSTEROUS!"),
        .speechWin = COMPOUND_STRING("NATURALLY I WIN"),
        .speechLose = COMPOUND_STRING("WAAAH! I LOST MOTHER"),
        .monSet = gBattleFrontierTrainerMons_Manuel
    },
    [FRONTIER_TRAINER_RUSS] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("RUSS"),
        .speechBefore = COMPOUND_STRING("THEY ALL WANT MY FABULOUS POKEMON"),
        .speechWin = COMPOUND_STRING("I WILL HAVE A POKEMON PARTY"),
        .speechLose = COMPOUND_STRING("how COULD YOU DO THAT?"),
        .monSet = gBattleFrontierTrainerMons_Russ
    },
    [FRONTIER_TRAINER_DUSTIN] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("DUSTIN"),
        .speechBefore = COMPOUND_STRING("I REALLY LIKE COOL POKEMON"),
        .speechWin = COMPOUND_STRING("I LIKE MYSELF when I iin!"),
        .speechLose = COMPOUND_STRING("I LIKE MYSELF if I lose TOO"),
        .monSet = gBattleFrontierTrainerMons_Dustin
    },
    [FRONTIER_TRAINER_TINA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("TINA"),
        .speechBefore = COMPOUND_STRING("If I win YOU CAN HAVE A EC_MOVE2(SWEET_KISS)"),
        .speechWin = COMPOUND_STRING("HERE_IT_IS YOUR EC_MOVE2(SWEET_KISS) FROM MY EC_POKEMON_NATIONAL(JYNX)"),
        .speechLose = COMPOUND_STRING("YOU WANT A EC_MOVE(SWIFT) EC_MOVE2(MEGA_KICK) INSTEAD"),
        .monSet = gBattleFrontierTrainerMons_Tina
    },
    [FRONTIER_TRAINER_GILLIAN1] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("GILLIAN"),
        .speechBefore = COMPOUND_STRING("THE GOURMET THING IS SO YESTERDAY"),
        .speechWin = COMPOUND_STRING("POKEMON never GO OUT OF FASHION"),
        .speechLose = COMPOUND_STRING("losing doesn't DISAPPOINT ME"),
        .monSet = gBattleFrontierTrainerMons_Gillian
    },
    [FRONTIER_TRAINER_ZOE] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ZOE"),
        .speechBefore = COMPOUND_STRING("I HAVEN_T A WORRY AT ALL"),
        .speechWin = COMPOUND_STRING("LIFE IS ALWAYS GOOD TO_ME"),
        .speechLose = COMPOUND_STRING("I WORRY ABOUT MY POKEMON SKILL"),
        .monSet = gBattleFrontierTrainerMons_Zoe
    },
    [FRONTIER_TRAINER_CHEN] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("CHEN"),
        .speechBefore = COMPOUND_STRING("I'm TOTALLY READY to ROCK TODAY"),
        .speechWin = COMPOUND_STRING("I'm READY to GO ON!"),
        .speechLose = COMPOUND_STRING("I've LOST MY EC_MOVE(FOCUS_ENERGY) AND TOUGHNESS"),
        .monSet = gBattleFrontierTrainerMons_Chen
    },
    [FRONTIER_TRAINER_AL] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("AL"),
        .speechBefore = COMPOUND_STRING("YOUR LOOK SAYS YOU'RE REALLY TOUGH"),
        .speechWin = COMPOUND_STRING("IT_S ME WHO_IS REALLY TOUGH"),
        .speechLose = COMPOUND_STRING("I'm RIGHT! YOU'RE REALLY TOUGH"),
        .monSet = gBattleFrontierTrainerMons_Al
    },
    [FRONTIER_TRAINER_MITCH] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("MITCH"),
        .speechBefore = COMPOUND_STRING("MOTHER NATURE IS MY ALLY!"),
        .speechWin = COMPOUND_STRING("WAS THAT ENOUGH FOR YOU?"),
        .speechLose = COMPOUND_STRING("MOTHER NATURE DIDN_T LET_ME_WIN?"),
        .monSet = gBattleFrontierTrainerMons_Mitch
    },
    [FRONTIER_TRAINER_ANNE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ANNE"),
        .speechBefore = COMPOUND_STRING("I CAN'T WAIT LET_S BATTLE NOW"),
        .speechWin = COMPOUND_STRING("MY HAPPINESS IS OVERWHELMING!"),
        .speechLose = COMPOUND_STRING("YOU_VE DESTROYED MY HAPPINESS…"),
        .monSet = gBattleFrontierTrainerMons_Anne
    },
    [FRONTIER_TRAINER_ALIZE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("ALIZE"),
        .speechBefore = COMPOUND_STRING("CUTE AND AWFULLY STRONG that's ME"),
        .speechWin = COMPOUND_STRING("YUP I'm CUTE AND AWFULLY STRONG"),
        .speechLose = COMPOUND_STRING("I'm WEAK… but I'm CUTE"),
        .monSet = gBattleFrontierTrainerMons_Alize
    },
    [FRONTIER_TRAINER_LAUREN] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("LAUREN"),
        .speechBefore = COMPOUND_STRING("I'm OLD but I'm ALSO GOOD"),
        .speechWin = COMPOUND_STRING("I SAID I_WAS OLD but GOOD"),
        .speechLose = COMPOUND_STRING("what A WEIRD DREAM THAT_WAS!"),
        .monSet = gBattleFrontierTrainerMons_Lauren
    },
    [FRONTIER_TRAINER_KIPP] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("KIPP"),
        .speechBefore = COMPOUND_STRING("If I win I'm going to GO EC_MOVE2(SURF)"),
        .speechWin = COMPOUND_STRING("YEAH! I'm OFF to EC_MOVE2(SURF)"),
        .speechLose = COMPOUND_STRING("OH NO! A EC_MOVE(WHIRLPOOL)!"),
        .monSet = gBattleFrontierTrainerMons_Kipp
    },
    [FRONTIER_TRAINER_JASON] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JASON"),
        .speechBefore = COMPOUND_STRING("TEACH ME A GOOD STRATEGY"),
        .speechWin = COMPOUND_STRING("THAT_WAS YOUR GOOD STRATEGY QUES_EXCL"),
        .speechLose = COMPOUND_STRING("WOW THAT IS AN AWESOME STRATEGY"),
        .monSet = gBattleFrontierTrainerMons_Jason
    },
    [FRONTIER_TRAINER_JOHN] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("JOHN"),
        .speechBefore = COMPOUND_STRING("I'm A PRETTY NEW TRAINER"),
        .speechWin = COMPOUND_STRING("I'm NEW but I WON!"),
        .speechLose = COMPOUND_STRING("I'm NEW SO what if I lose?"),
        .monSet = gBattleFrontierTrainerMons_John
    },
    [FRONTIER_TRAINER_ANN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ANN"),
        .speechBefore = COMPOUND_STRING("IT_S SO EXCITING IT REALLY IS"),
        .speechWin = COMPOUND_STRING("I'm SO HAPPY I CAN CRY"),
        .speechLose = COMPOUND_STRING("I'm SO SAD I WILL CRY"),
        .monSet = gBattleFrontierTrainerMons_Ann
    },
    [FRONTIER_TRAINER_EILEEN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("EILEEN"),
        .speechBefore = COMPOUND_STRING("LET_S PRETEND I'm AN ADULT OK_QUES"),
        .speechWin = COMPOUND_STRING("SO THIS IS AN ADULT FEELING"),
        .speechLose = COMPOUND_STRING("AN ADULT CAN'T BEAT YOU?"),
        .monSet = gBattleFrontierTrainerMons_Eileen
    },
    [FRONTIER_TRAINER_CARLIE] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("CARLIE"),
        .speechBefore = COMPOUND_STRING("MY SUMMER VACATION IS FOR POKEMON"),
        .speechWin = COMPOUND_STRING("MY SUMMER VACATION WILL BE AWESOME"),
        .speechLose = COMPOUND_STRING("I CAN'T_WIN LIKE THIS…"),
        .monSet = gBattleFrontierTrainerMons_Carlie
    },
    [FRONTIER_TRAINER_GORDON] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("GORDON"),
        .speechBefore = COMPOUND_STRING("VICTORY WILL COME TO_ME!"),
        .speechWin = COMPOUND_STRING("OH_YEAH! I REALLY WON"),
        .speechLose = COMPOUND_STRING("NOTHING IS WORKING OUT FOR ME"),
        .monSet = gBattleFrontierTrainerMons_Gordon
    },
    [FRONTIER_TRAINER_AYDEN] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("AYDEN"),
        .speechBefore = COMPOUND_STRING("COME_ON I NEED A HOT BATTLE"),
        .speechWin = COMPOUND_STRING("I NEED WATER to COOL DOWN"),
        .speechLose = COMPOUND_STRING("YOU HAVE ME FEELING ICE COLD"),
        .monSet = gBattleFrontierTrainerMons_Ayden
    },
    [FRONTIER_TRAINER_MARCO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("MARCO"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(SURF) IN THE WINTER TOO"),
        .speechWin = COMPOUND_STRING("I WILL GO EC_MOVE2(SURF) RIGHT NOW"),
        .speechLose = COMPOUND_STRING("I WILL EC_MOVE2(BEAT_UP) MY EC_MOVE2(SURF) BOARD"),
        .monSet = gBattleFrontierTrainerMons_Marco
    },
    [FRONTIER_TRAINER_CIERRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("CIERRA"),
        .speechBefore = COMPOUND_STRING("I LIKE to SYNCHRONIZE MY SWIFT_SWIM"),
        .speechWin = COMPOUND_STRING("MY POKEMON SYNCHRONIZE WITH ME"),
        .speechLose = COMPOUND_STRING("I NEED to SYNCHRONIZE BETTER ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Cierra
    },
    [FRONTIER_TRAINER_MARCY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("MARCY"),
        .speechBefore = COMPOUND_STRING("I'm A KNOCKOUT YOU CAN'T_WIN!"),
        .speechWin = COMPOUND_STRING("AFTER ALL I'm A KNOCKOUT!"),
        .speechLose = COMPOUND_STRING("that's NOT THE KNOCKOUT I MEAN"),
        .monSet = gBattleFrontierTrainerMons_Marcy
    },
    [FRONTIER_TRAINER_KATHY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("KATHY"),
        .speechBefore = COMPOUND_STRING("I've WON EVERY MATCH TODAY!"),
        .speechWin = COMPOUND_STRING("IT_S SO GREAT to WIN!"),
        .speechLose = COMPOUND_STRING("HUH_QUES I SHOULD NOT HAVE LOST"),
        .monSet = gBattleFrontierTrainerMons_Kathy
    },
    [FRONTIER_TRAINER_PEYTON] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("PEYTON"),
        .speechBefore = COMPOUND_STRING("I'm never DISAPPOINTED WITH MY POKEMON"),
        .speechWin = COMPOUND_STRING("I'm HAPPY IF WE WIN TOGETHER"),
        .speechLose = COMPOUND_STRING("I ADORE MY POKEMON MORE if I lose"),
        .monSet = gBattleFrontierTrainerMons_Peyton
    },
    [FRONTIER_TRAINER_JULIAN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("JULIAN"),
        .speechBefore = COMPOUND_STRING("YOU ADORE YOUR POKEMON RIGHT?"),
        .speechWin = COMPOUND_STRING("YOU'RE TOTALLY OUT OF THE QUESTION"),
        .speechLose = COMPOUND_STRING("YOU DO ADORE YOUR POKEMON!"),
        .monSet = gBattleFrontierTrainerMons_Julian
    },
    [FRONTIER_TRAINER_QUINN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("QUINN"),
        .speechBefore = COMPOUND_STRING("MY POKEMON ARE but A DREAM"),
        .speechWin = COMPOUND_STRING("THIS IS A BEAUTIFUL DREAM!"),
        .speechLose = COMPOUND_STRING("THIS IS AN AWFUL EC_MOVE(NIGHTMARE)!"),
        .monSet = gBattleFrontierTrainerMons_Quinn
    },
    [FRONTIER_TRAINER_HAYLEE] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("HAYLEE"),
        .speechBefore = COMPOUND_STRING("I DON_T KNOW how I'm FEELING"),
        .speechWin = COMPOUND_STRING("I'm FEELING OVERWHELMING JOY OVER THIS"),
        .speechLose = COMPOUND_STRING("DESTROYED IS THE WAY I'm FEELING"),
        .monSet = gBattleFrontierTrainerMons_Haylee
    },
    [FRONTIER_TRAINER_AMANDA] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("AMANDA"),
        .speechBefore = COMPOUND_STRING("I COME FROM A TRAINER FAMILY"),
        .speechWin = COMPOUND_STRING("I WILL TREASURE THIS WIN"),
        .speechLose = COMPOUND_STRING("I WANT to GO_HOME RIGHT NOW"),
        .monSet = gBattleFrontierTrainerMons_Amanda
    },
    [FRONTIER_TRAINER_STACY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("STACY"),
        .speechBefore = COMPOUND_STRING("ALL POKEMON HAVE THEIR OWN CUTE_CHARM"),
        .speechWin = COMPOUND_STRING("YOU SEE what I MEAN?"),
        .speechLose = COMPOUND_STRING("SHOULD I NOT ADORE POKEMON?"),
        .monSet = gBattleFrontierTrainerMons_Stacy
    },
    [FRONTIER_TRAINER_RAFAEL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("RAFAEL"),
        .speechBefore = COMPOUND_STRING("COME_ON! LET_S SEE SOME SPIRIT"),
        .speechWin = COMPOUND_STRING("THAT_S_IT_EXCL that's THE SPIRIT!"),
        .speechLose = COMPOUND_STRING("WELL SO MUCH FOR OUR SPIRIT"),
        .monSet = gBattleFrontierTrainerMons_Rafael
    },
    [FRONTIER_TRAINER_OLIVER] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OLIVER"),
        .speechBefore = COMPOUND_STRING("A GENIUS that's what I AM!"),
        .speechWin = COMPOUND_STRING("that's how A GENIUS WORKS!"),
        .speechLose = COMPOUND_STRING("YOU'RE MORE A GENIUS THAN I AM"),
        .monSet = gBattleFrontierTrainerMons_Oliver
    },
    [FRONTIER_TRAINER_PAYTON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("PAYTON"),
        .speechBefore = COMPOUND_STRING("I TRAIN FROM THE EGG UP"),
        .speechWin = COMPOUND_STRING("WELL DONE!"),
        .speechLose = COMPOUND_STRING("THAT_WAS A EC_MOVE2(SOFT_BOILED) LOSS…"),
        .monSet = gBattleFrontierTrainerMons_Payton
    },
    [FRONTIER_TRAINER_PAMELA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("PAMELA"),
        .speechBefore = COMPOUND_STRING("ALL POKEMON ADORE A KIND TRAINER"),
        .speechWin = COMPOUND_STRING("IT_S TOO BAD YOU LOST"),
        .speechLose = COMPOUND_STRING("YOU'RE KIND AND YOU'RE ALSO STRONG"),
        .monSet = gBattleFrontierTrainerMons_Pamela
    },
    [FRONTIER_TRAINER_ELIZA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("ELIZA"),
        .speechBefore = COMPOUND_STRING("I ADORE POKEMON LIKE MY CHILDREN"),
        .speechWin = COMPOUND_STRING("I'm SO HAPPY FOR MY POKEMON"),
        .speechLose = COMPOUND_STRING("OH_DEAR I'm SO SORRY ABOUT THIS"),
        .monSet = gBattleFrontierTrainerMons_Eliza
    },
    [FRONTIER_TRAINER_MARISA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("MARISA"),
        .speechBefore = COMPOUND_STRING("I PROMISE to BATTLE SERIOUSLY"),
        .speechWin = COMPOUND_STRING("PROMISE ME YOU WILL DO BETTER"),
        .speechLose = COMPOUND_STRING("PROMISE ME ANOTHER BATTLE PLEASE!"),
        .monSet = gBattleFrontierTrainerMons_Marisa
    },
    [FRONTIER_TRAINER_LEWIS] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LEWIS"),
        .speechBefore = COMPOUND_STRING("A_LITTLE BUG IS SCARY? HAHAHA"),
        .speechWin = COMPOUND_STRING("LOOK LOOK! A SCARY BUG"),
        .speechLose = COMPOUND_STRING("OH A BUG ISN_T SCARY ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Lewis
    },
    [FRONTIER_TRAINER_YOSHI] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("YOSHI"),
        .speechBefore = COMPOUND_STRING("BUG POKEMON MAKE ME FEELING LOVEY_DOVEY"),
        .speechWin = COMPOUND_STRING("BUG POKEMON ARE THE BEST!"),
        .speechLose = COMPOUND_STRING("YOU'RE IGNORANT ABOUT BUG POKEMON"),
        .monSet = gBattleFrontierTrainerMons_Yoshi
    },
    [FRONTIER_TRAINER_DESTIN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("DESTIN"),
        .speechBefore = COMPOUND_STRING("IT_S WAY TOO HOT HERE"),
        .speechWin = COMPOUND_STRING("I'm ABOUT to EC_MOVE(OVERHEAT)"),
        .speechLose = COMPOUND_STRING("PLEASE I NEED SOME WATER"),
        .monSet = gBattleFrontierTrainerMons_Destin
    },
    [FRONTIER_TRAINER_KEON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("KEON"),
        .speechBefore = COMPOUND_STRING("FORGIVE ME but HERE_I_COME!"),
        .speechWin = COMPOUND_STRING("FORGIVE ME FOR MY OVERWHELMING POWER"),
        .speechLose = COMPOUND_STRING("I'm SORRY…"),
        .monSet = gBattleFrontierTrainerMons_Keon
    },
    [FRONTIER_TRAINER_STUART] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("STUART"),
        .speechBefore = COMPOUND_STRING("I PROMISE YOU A HOT BATTLE"),
        .speechWin = COMPOUND_STRING("THE MASTER OF COOL that's ME"),
        .speechLose = COMPOUND_STRING("I SEE I'm NOT SO COOL"),
        .monSet = gBattleFrontierTrainerMons_Stuart
    },
    [FRONTIER_TRAINER_NESTOR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("NESTOR"),
        .speechBefore = COMPOUND_STRING("Show ME A REALLY SMOOTH MOVE"),
        .speechWin = COMPOUND_STRING("THERE WAS NOTHING SMOOTH ABOUT THAT"),
        .speechLose = COMPOUND_STRING("YOU REALLY ARE SMOOTH!"),
        .monSet = gBattleFrontierTrainerMons_Nestor
    },
    [FRONTIER_TRAINER_DERRICK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("DERRICK"),
        .speechBefore = COMPOUND_STRING("LET_S SEE YOU EC_MOVE2(MEDITATE) LIKE ME"),
        .speechWin = COMPOUND_STRING("how I EC_MOVE2(MEDITATE) IS JUST BEAUTIFUL"),
        .speechLose = COMPOUND_STRING("I WILL EC_MOVE2(MEDITATE) FOR A EC_MOVE2(CALM_MIND)"),
        .monSet = gBattleFrontierTrainerMons_Derrick
    },
    [FRONTIER_TRAINER_BRYSON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BRYSON"),
        .speechBefore = COMPOUND_STRING("EC_MOVE2(POISON_POWDER) IS IN OUR EC_MOVE2(COTTON_SPORE) MOVE"),
        .speechWin = COMPOUND_STRING("how_DO YOU LIKE OUR EC_MOVE2(POISON_POWDER)?"),
        .speechLose = COMPOUND_STRING("MY EC_MOVE2(COTTON_SPORE) WAS USELESS"),
        .monSet = gBattleFrontierTrainerMons_Bryson
    },
    [FRONTIER_TRAINER_CLAYTON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("CLAYTON"),
        .speechBefore = COMPOUND_STRING("HUH_QUES WHERE IS_IT_QUES"),
        .speechWin = COMPOUND_STRING("WHERE IS_IT_QUES I've LOST MY POKENAV"),
        .speechLose = COMPOUND_STRING("WHERE IS_IT_QUES I've LOST MY SENSE"),
        .monSet = gBattleFrontierTrainerMons_Clayton
    },
    [FRONTIER_TRAINER_TRENTON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("TRENTON"),
        .speechBefore = COMPOUND_STRING("COME_OVER FOR SOME TASTY WATER"),
        .speechWin = COMPOUND_STRING("MMM DO YOU WANT SOME?"),
        .speechLose = COMPOUND_STRING("I GOT THIS TASTY WATER SHOPPING"),
        .monSet = gBattleFrontierTrainerMons_Trenton
    },
    [FRONTIER_TRAINER_JENSON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("JENSON"),
        .speechBefore = COMPOUND_STRING("MY POKEMON WILL MAKE YOU DOWNCAST"),
        .speechWin = COMPOUND_STRING("YOUR POKEMON DON_T MAKE THE EC_MOVE(CUT)"),
        .speechLose = COMPOUND_STRING("I'm THE TRAINER WHO_IS FEELING DOWNCAST"),
        .monSet = gBattleFrontierTrainerMons_Jenson
    },
    [FRONTIER_TRAINER_WESLEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("WESLEY"),
        .speechBefore = COMPOUND_STRING("EC_POKEMON_NATIONAL(MEW) EC_POKEMON_NATIONAL(MEW) IS how I CRY"),
        .speechWin = COMPOUND_STRING("YES I KNOW I'm CUTE!"),
        .speechLose = COMPOUND_STRING("EC_POKEMON_NATIONAL(MEW) EC_POKEMON_NATIONAL(MEW)! EC_POKEMON_NATIONAL(MEW) EXCL_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Wesley
    },
    [FRONTIER_TRAINER_ANTON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ANTON"),
        .speechBefore = COMPOUND_STRING("GET READY FOR ME to EC_MOVE(THRASH)"),
        .speechWin = COMPOUND_STRING("WAHAHAHA! SORRY ABOUT THAT!"),
        .speechLose = COMPOUND_STRING("IT_S A TOUGH LOSS to EC_MOVE2(SWALLOW)"),
        .monSet = gBattleFrontierTrainerMons_Anton
    },
    [FRONTIER_TRAINER_LAWSON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("LAWSON"),
        .speechBefore = COMPOUND_STRING("I'm YOUNG AT HEART!"),
        .speechWin = COMPOUND_STRING("NOT COOL! NOT AT ALL"),
        .speechLose = COMPOUND_STRING("I'm OLD AND FEELING SHAKY ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Lawson
    },
    [FRONTIER_TRAINER_SAMMY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("SAMMY"),
        .speechBefore = COMPOUND_STRING("MY PARTY IS READY to ROCK"),
        .speechWin = COMPOUND_STRING("MY PARTY IS JUST INCREDIBLE!"),
        .speechLose = COMPOUND_STRING("I CRY FOR MY PARTY ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Sammy
    },
    [FRONTIER_TRAINER_ARNIE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ARNIE"),
        .speechBefore = COMPOUND_STRING("I'm NO_1 I HAVE NO RIVAL"),
        .speechWin = COMPOUND_STRING("YOU SEE? I CAN'T lose"),
        .speechLose = COMPOUND_STRING("NO! I WON_T ACCEPT THIS"),
        .monSet = gBattleFrontierTrainerMons_Arnie
    },
    [FRONTIER_TRAINER_ADRIAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("ADRIAN"),
        .speechBefore = COMPOUND_STRING("YAHOO! YAHOO EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("THANK_YOU! THANK_YOU EXCL_EXCL"),
        .speechLose = COMPOUND_STRING("GOOD_BYE! GOOD_BYE EXCL_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Adrian
    },
    [FRONTIER_TRAINER_TRISTAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TRISTAN"),
        .speechBefore = COMPOUND_STRING("CONFUSED? I'm A GENIUS"),
        .speechWin = COMPOUND_STRING("SEE? I'm A GENIUS"),
        .speechLose = COMPOUND_STRING("I'm NOT A GENIUS IN BATTLE"),
        .monSet = gBattleFrontierTrainerMons_Tristan
    },
    [FRONTIER_TRAINER_JULIANA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("JULIANA"),
        .speechBefore = COMPOUND_STRING("I THINK I'm SHOPPING TOO MUCH"),
        .speechWin = COMPOUND_STRING("but I WANT A POKEMON PLUSH_DOLL"),
        .speechLose = COMPOUND_STRING("I SO WANT ANOTHER POKEMON PLUSH_DOLL"),
        .monSet = gBattleFrontierTrainerMons_Juliana
    },
    [FRONTIER_TRAINER_RYLEE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("RYLEE"),
        .speechBefore = COMPOUND_STRING("Show ME THAT YOU HAVE GUTS"),
        .speechWin = COMPOUND_STRING("BYE_BYE! YOU HAVE NO GUTS"),
        .speechLose = COMPOUND_STRING("THAT_WAS GUTSY… YOU'RE QUITE SUPER"),
        .monSet = gBattleFrontierTrainerMons_Rylee
    },
    [FRONTIER_TRAINER_CHELSEA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("CHELSEA"),
        .speechBefore = COMPOUND_STRING("I SERIOUSLY MEAN to WIN!"),
        .speechWin = COMPOUND_STRING("THAT_WAS MY WILL to WIN"),
        .speechLose = COMPOUND_STRING("YOU'RE FAR TOO_STRONG FOR ME"),
        .monSet = gBattleFrontierTrainerMons_Chelsea
    },
    [FRONTIER_TRAINER_DANELA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("DANELA"),
        .speechBefore = COMPOUND_STRING("YOU MUST_BE MY OPPONENT NOW!"),
        .speechWin = COMPOUND_STRING("OH_DEAR TOO_WEAK! DON_T GIVE_UP!"),
        .speechLose = COMPOUND_STRING("THAT_WAS GOOD AND THIS IS GOOD_BYE"),
        .monSet = gBattleFrontierTrainerMons_Danela
    },
    [FRONTIER_TRAINER_LIZBETH] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("LIZBETH"),
        .speechBefore = COMPOUND_STRING("if I lose YOU CAN HAVE A EC_MOVE2(PRESENT)"),
        .speechWin = COMPOUND_STRING("HERE_IT_IS A_LITTLE PRAISE AS YOUR EC_MOVE2(PRESENT)"),
        .speechLose = COMPOUND_STRING("YOUR EC_MOVE2(PRESENT) QUES_EXCL HERE_IT_IS A EC_MOVE(DOUBLE_SLAP)"),
        .monSet = gBattleFrontierTrainerMons_Lizbeth
    },
    [FRONTIER_TRAINER_AMELIA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("AMELIA"),
        .speechBefore = COMPOUND_STRING("I BELIEVE IN CUTE FASHION APPEAL"),
        .speechWin = COMPOUND_STRING("YOUR FASHION SENSE IS A DISASTER"),
        .speechLose = COMPOUND_STRING("THAT_WAS AWFUL! I'm going HOME"),
        .monSet = gBattleFrontierTrainerMons_Amelia
    },
    [FRONTIER_TRAINER_JILLIAN] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("JILLIAN"),
        .speechBefore = COMPOUND_STRING("what IS THAT I SMELL?"),
        .speechWin = COMPOUND_STRING("IT_S THE EC_MOVE(SWEET_SCENT) OF TASTY WATER"),
        .speechLose = COMPOUND_STRING("IT_S YOUR OFFENSIVE STENCH that's what"),
        .monSet = gBattleFrontierTrainerMons_Jillian
    },
    [FRONTIER_TRAINER_ABBIE] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ABBIE"),
        .speechBefore = COMPOUND_STRING("YOU TRY MY SECRET EC_MOVE(AROMATHERAPY) OK_QUES"),
        .speechWin = COMPOUND_STRING("MY EC_MOVE(AROMATHERAPY) IS TERRIBLE FOR YOU"),
        .speechLose = COMPOUND_STRING("DIDN_T YOU SMELL A THING QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Abbie
    },
    [FRONTIER_TRAINER_BRIANA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("BRIANA"),
        .speechBefore = COMPOUND_STRING("MY BOY FRIEND WORKS TOO MUCH"),
        .speechWin = COMPOUND_STRING("I ONLY MISS HIM MORE ELLIPSIS"),
        .speechLose = COMPOUND_STRING("I'm SO LONESOME WITHOUT HIM ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Briana
    },
    [FRONTIER_TRAINER_ANTONIO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("ANTONIO"),
        .speechBefore = COMPOUND_STRING("I KNOW how to GO GO"),
        .speechWin = COMPOUND_STRING("but I DON_T LIKE to DANCE"),
        .speechLose = COMPOUND_STRING("GO GO… JUST EC_MOVE(FLAIL) ABOUT"),
        .monSet = gBattleFrontierTrainerMons_Antonio
    },
    [FRONTIER_TRAINER_JADEN] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("JADEN"),
        .speechBefore = COMPOUND_STRING("HELLO I THINK I ADORE YOU"),
        .speechWin = COMPOUND_STRING("YOU MAKE ME EC_MOVE(THRASH) IN EC_MOVE2(FRUSTRATION)"),
        .speechLose = COMPOUND_STRING("THIS_IS_IT_EXCL GOOD_BYE FOREVER!"),
        .monSet = gBattleFrontierTrainerMons_Jaden
    },
    [FRONTIER_TRAINER_DAKOTA] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("DAKOTA"),
        .speechBefore = COMPOUND_STRING("YOU HAVE to DANCE WITH POWER"),
        .speechWin = COMPOUND_STRING("GOT IT? DANCE WITH POWER"),
        .speechLose = COMPOUND_STRING("OKAY YOU UNDERSTAND ALL_RIGHT!"),
        .monSet = gBattleFrontierTrainerMons_Dakota
    },
    [FRONTIER_TRAINER_BRAYDEN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("BRAYDEN"),
        .speechBefore = COMPOUND_STRING("COLOR_CHANGE VERSION TOYS ARE USELESS!"),
        .speechWin = COMPOUND_STRING("I ONLY COLLECT NORMAL VERSION TOYS"),
        .speechLose = COMPOUND_STRING("I EC_MOVE2(ATTRACT) COLOR_CHANGE VERSION TOYS ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Brayden
    },
    [FRONTIER_TRAINER_CORSON] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("CORSON"),
        .speechBefore = COMPOUND_STRING("I GET to EC_MOVE2(BEAT_UP) ON YOU"),
        .speechWin = COMPOUND_STRING("TOO EASY! I'm SO COOL"),
        .speechLose = COMPOUND_STRING("WHY QUES_EXCL I EC_MOVE2(CURSE) YOU"),
        .monSet = gBattleFrontierTrainerMons_Corson
    },
    [FRONTIER_TRAINER_TREVIN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("TREVIN"),
        .speechBefore = COMPOUND_STRING("THERE IS NONE BETTER THAN ME"),
        .speechWin = COMPOUND_STRING("YES_SIR_EXCL I'm THE BEST"),
        .speechLose = COMPOUND_STRING("SERIOUS QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Trevin
    },
    [FRONTIER_TRAINER_PATRICK] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PATRICK"),
        .speechBefore = COMPOUND_STRING("I'm PERFECT! GIVE_UP NOW"),
        .speechWin = COMPOUND_STRING("DON_T BE DISAPPOINTED I'm PERFECT"),
        .speechLose = COMPOUND_STRING("but how? I'm PERFECT ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Patrick
    },
    [FRONTIER_TRAINER_KADEN] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("KADEN"),
        .speechBefore = COMPOUND_STRING("what ARE YOU UP to?"),
        .speechWin = COMPOUND_STRING("YOU WERE A SURPRISE TO_ME!"),
        .speechLose = COMPOUND_STRING("I DON_T KNOW WHO I'm ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Kaden
    },
    [FRONTIER_TRAINER_MAXWELL] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("MAXWELL"),
        .speechBefore = COMPOUND_STRING("HEY THERE WHO_IS YOUR RIVAL?"),
        .speechWin = COMPOUND_STRING("MY RIVAL IS MY GIRL FRIEND"),
        .speechLose = COMPOUND_STRING("I'm MAKING YOU MY RIVAL"),
        .monSet = gBattleFrontierTrainerMons_Maxwell
    },
    [FRONTIER_TRAINER_DARYL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DARYL"),
        .speechBefore = COMPOUND_STRING("I ONLY KNOW how to EC_MOVE(CHARGE)"),
        .speechWin = COMPOUND_STRING("AM I OVERWHELMING OR what?"),
        .speechLose = COMPOUND_STRING("YOU'RE going to A LEGEND!"),
        .monSet = gBattleFrontierTrainerMons_Daryl
    },
    [FRONTIER_TRAINER_KENNETH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("KENNETH"),
        .speechBefore = COMPOUND_STRING("YOU BETTER NOT EC_MOVE2(SLACK_OFF) WITH ME"),
        .speechWin = COMPOUND_STRING("DID MY EC_MOVE2(TAUNT) INTIMIDATE YOU?"),
        .speechLose = COMPOUND_STRING("I'm SORRY…"),
        .monSet = gBattleFrontierTrainerMons_Kenneth
    },
    [FRONTIER_TRAINER_RICH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("RICH"),
        .speechBefore = COMPOUND_STRING("YOUR EC_MOVE(FACADE) doesn't EC_MOVE2(TRICK) ME"),
        .speechWin = COMPOUND_STRING("SERIOUSLY ARE YOU REALLY OK_QUES"),
        .speechLose = COMPOUND_STRING("THAT_WAS REALLY TOUGH ON ME"),
        .monSet = gBattleFrontierTrainerMons_Rich
    },
    [FRONTIER_TRAINER_CADEN] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("CADEN"),
        .speechBefore = COMPOUND_STRING("I CAN'T BE DEFEATED!"),
        .speechWin = COMPOUND_STRING("FIRE! FIRE EXCL_EXCL"),
        .speechLose = COMPOUND_STRING("I'm TIRED… IT_S SO HOT"),
        .monSet = gBattleFrontierTrainerMons_Caden
    },
    [FRONTIER_TRAINER_MARLON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("MARLON"),
        .speechBefore = COMPOUND_STRING("A POKEDEX IS A_LITTLE RADIO?"),
        .speechWin = COMPOUND_STRING("A_LITTLE RADIO HUH_QUES that's TOTALLY COOL"),
        .speechLose = COMPOUND_STRING("IT_S NOT? IS POKENAV?"),
        .monSet = gBattleFrontierTrainerMons_Marlon
    },
    [FRONTIER_TRAINER_NASH] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("NASH"),
        .speechBefore = COMPOUND_STRING("I'm ON FIRE BABY!"),
        .speechWin = COMPOUND_STRING("I LEFT YOU JUST AN EC_MOVE2(EMBER)"),
        .speechLose = COMPOUND_STRING("AIYEEH EXCL_EXCL NO WATER PLEASE"),
        .monSet = gBattleFrontierTrainerMons_Nash
    },
    [FRONTIER_TRAINER_ROBBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("ROBBY"),
        .speechBefore = COMPOUND_STRING("HAHAHA! HAPPY to MEET_YOU!"),
        .speechWin = COMPOUND_STRING("I'm THE LEADER WITH REFRESHING SERENE_GRACE"),
        .speechLose = COMPOUND_STRING("I WILL EC_MOVE(THRASH) MY TOYS!"),
        .monSet = gBattleFrontierTrainerMons_Robby
    },
    [FRONTIER_TRAINER_REECE] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("REECE"),
        .speechBefore = COMPOUND_STRING("MY EC_MOVE2(QUICK_ATTACK) CAN BEAT A EC_MOVE2(TELEPORT)"),
        .speechWin = COMPOUND_STRING("LIKE I SAID I'm DARN FAST"),
        .speechLose = COMPOUND_STRING("I_WAS KIDDING ABOUT THAT EC_MOVE2(TELEPORT) THING"),
        .monSet = gBattleFrontierTrainerMons_Reece
    },
    [FRONTIER_TRAINER_KATHRYN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("KATHRYN"),
        .speechBefore = COMPOUND_STRING("I DON_T TRAIN GOOD ENOUGH?"),
        .speechWin = COMPOUND_STRING("DON_T EC_MOVE2(TAUNT) ME LIKE THAT OK_QUES"),
        .speechLose = COMPOUND_STRING("WHY COULDN_T I WIN THIS?"),
        .monSet = gBattleFrontierTrainerMons_Kathryn
    },
    [FRONTIER_TRAINER_ELLEN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("ELLEN"),
        .speechBefore = COMPOUND_STRING("CRUSH YOU LIKE AN EGG!"),
        .speechWin = COMPOUND_STRING("THAT_WAS A TASTY VICTORY FOR ME"),
        .speechLose = COMPOUND_STRING("TOO TOUGH to CRUSH!"),
        .monSet = gBattleFrontierTrainerMons_Ellen
    },
    [FRONTIER_TRAINER_RAMON] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("RAMON"),
        .speechBefore = COMPOUND_STRING("OKAY! THIS IS PERFECTION"),
        .speechWin = COMPOUND_STRING("I'm HAPPY THAT I WON!"),
        .speechLose = COMPOUND_STRING("IT_S A SECRET WHY I'm HAPPY"),
        .monSet = gBattleFrontierTrainerMons_Ramon
    },
    [FRONTIER_TRAINER_ARTHUR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("ARTHUR"),
        .speechBefore = COMPOUND_STRING("HERE_I_COME FEELING READY FOR IT ALL"),
        .speechWin = COMPOUND_STRING("THAT_S_IT_EXCL THAT_WAS FABULOUS!"),
        .speechLose = COMPOUND_STRING("THAT_WAS NOT what I NEED"),
        .monSet = gBattleFrontierTrainerMons_Arthur
    },
    [FRONTIER_TRAINER_ALONDRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ALONDRA"),
        .speechBefore = COMPOUND_STRING("EVERY DAY IS A GREAT DAY"),
        .speechWin = COMPOUND_STRING("MY EC_MOVE2(DIVE) WILL BE A LEGEND"),
        .speechLose = COMPOUND_STRING("MY EC_MOVE2(DIVE) LEFT ME COLD ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Alondra
    },
    [FRONTIER_TRAINER_ADRIANA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("ADRIANA"),
        .speechBefore = COMPOUND_STRING("COME SEE AN INCREDIBLE SWIFT_SWIM!"),
        .speechWin = COMPOUND_STRING("I MAKE IT LOOK SO EASY"),
        .speechLose = COMPOUND_STRING("I'm FEELING EC_MOVE2(BEAT_UP) AND TIRED"),
        .monSet = gBattleFrontierTrainerMons_Adriana
    },
    [FRONTIER_TRAINER_MALIK] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("MALIK"),
        .speechBefore = COMPOUND_STRING("OH NOT ANOTHER BATTLE PLEASE ELLIPSIS"),
        .speechWin = COMPOUND_STRING("I FINALLY WON… I'm TIRED"),
        .speechLose = COMPOUND_STRING("I FINALLY LOST… I'm TIRED"),
        .monSet = gBattleFrontierTrainerMons_Malik
    },
    [FRONTIER_TRAINER_JILL] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("JILL"),
        .speechBefore = COMPOUND_STRING("I'm THE EC_MOVE2(QUICK_ATTACK) TRAINER!"),
        .speechWin = COMPOUND_STRING("THE EC_MOVE2(QUICK_ATTACK) TRAINER WINS!"),
        .speechLose = COMPOUND_STRING("THE EC_MOVE2(QUICK_ATTACK) TRAINER GIVES UP!"),
        .monSet = gBattleFrontierTrainerMons_Jill
    },
    [FRONTIER_TRAINER_ERIK] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("ERIK"),
        .speechBefore = COMPOUND_STRING("I'm THE SPEED_BOOST HERO!"),
        .speechWin = COMPOUND_STRING("THANK_YOU FROM THE SPEED_BOOST HERO!"),
        .speechLose = COMPOUND_STRING("WAAAH EXCL_EXCL NO NO EXCL_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Erik
    },
    [FRONTIER_TRAINER_YAZMIN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("YAZMIN"),
        .speechBefore = COMPOUND_STRING("I WOULD RATHER RUN THAN BIKE"),
        .speechWin = COMPOUND_STRING("YES I WOULD MUCH RATHER RUN"),
        .speechLose = COMPOUND_STRING("BYE_BYE! I'm going to RUN_AWAY"),
        .monSet = gBattleFrontierTrainerMons_Yazmin
    },
    [FRONTIER_TRAINER_JAMAL] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("JAMAL"),
        .speechBefore = COMPOUND_STRING("I'm going to BE A FATHER"),
        .speechWin = COMPOUND_STRING("I CAN'T WAIT FOR MY BABY"),
        .speechLose = COMPOUND_STRING("MY BABY WILL BE TOTALLY AWESOME"),
        .monSet = gBattleFrontierTrainerMons_Jamal
    },
    [FRONTIER_TRAINER_LESLIE] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("LESLIE"),
        .speechBefore = COMPOUND_STRING("I'm going to BE A MOTHER"),
        .speechWin = COMPOUND_STRING("A BABY WILL BE A_LITTLE CHALLENGE"),
        .speechLose = COMPOUND_STRING("I'm TOO HAPPY to BE ANGRY"),
        .monSet = gBattleFrontierTrainerMons_Leslie
    },
    [FRONTIER_TRAINER_DAVE] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("DAVE"),
        .speechBefore = COMPOUND_STRING("what SHOULD I DO TODAY?"),
        .speechWin = COMPOUND_STRING("I SHOULD ENJOY SOME SPORTS!"),
        .speechLose = COMPOUND_STRING("I WILL GO PLAY A GAME"),
        .monSet = gBattleFrontierTrainerMons_Dave
    },
    [FRONTIER_TRAINER_CARLO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("CARLO"),
        .speechBefore = COMPOUND_STRING("HAH EXCL_EXCL YEAH EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("I DO THINGS AT EC_MOVE(EXTREME_SPEED)!"),
        .speechLose = COMPOUND_STRING("I LOST AT EC_MOVE(EXTREME_SPEED)…"),
        .monSet = gBattleFrontierTrainerMons_Carlo
    },
    [FRONTIER_TRAINER_EMILIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("EMILIA"),
        .speechBefore = COMPOUND_STRING("ME WORRY? I HAVE NONE"),
        .speechWin = COMPOUND_STRING("AHAHA SEE? THAT_WAS FANTASTIC!"),
        .speechLose = COMPOUND_STRING("AHAHA SEE? THAT_WAS ENTERTAINING!"),
        .monSet = gBattleFrontierTrainerMons_Emilia
    },
    [FRONTIER_TRAINER_DALIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("DALIA"),
        .speechBefore = COMPOUND_STRING("MY BIKE IS VERY EXPENSIVE"),
        .speechWin = COMPOUND_STRING("DON_T COME NEAR MY BIKE!"),
        .speechLose = COMPOUND_STRING("MY BIKE IS MY BEST FRIEND"),
        .monSet = gBattleFrontierTrainerMons_Dalia
    },
    [FRONTIER_TRAINER_HITOMI] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("HITOMI"),
        .speechBefore = COMPOUND_STRING("YEAH EXCL_EXCL HAH EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("what QUES_EXCL I WON QUES_EXCL"),
        .speechLose = COMPOUND_STRING("AIYEEH EXCL_EXCL I'm SORRY EXCL_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Hitomi
    },
    [FRONTIER_TRAINER_RICARDO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("RICARDO"),
        .speechBefore = COMPOUND_STRING("COME_ON! PLAY TIME IS OVER"),
        .speechWin = COMPOUND_STRING("YOU'RE OUT OF HERE!"),
        .speechLose = COMPOUND_STRING("PLEASE DON_T HIT ME!"),
        .monSet = gBattleFrontierTrainerMons_Ricardo
    },
    [FRONTIER_TRAINER_SHIZUKA] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("SHIZUKA"),
        .speechBefore = COMPOUND_STRING("Show ME THAT YOU'RE SERIOUS!"),
        .speechWin = COMPOUND_STRING("I WON_T FORGET ABOUT YOU"),
        .speechLose = COMPOUND_STRING("YOU'RE PERFECT IN EVERY WAY!"),
        .monSet = gBattleFrontierTrainerMons_Shizuka
    },
    [FRONTIER_TRAINER_JOANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("JOANA"),
        .speechBefore = COMPOUND_STRING("YOU'RE going to lose RIGHT AWAY"),
        .speechWin = COMPOUND_STRING("I'm THE WINNER HEAR ME EC_MOVE2(ROAR)"),
        .speechLose = COMPOUND_STRING("I REFUSE to ACCEPT THAT EC_MOVE(OUTRAGE)"),
        .monSet = gBattleFrontierTrainerMons_Joana
    },
    [FRONTIER_TRAINER_KELLY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KELLY"),
        .speechBefore = COMPOUND_STRING("MY NIGHT SCHOOL IS REALLY SCARY"),
        .speechWin = COMPOUND_STRING("A LADY GHOST APPEARS THERE"),
        .speechLose = COMPOUND_STRING("THE HOME WORK IS AWFULLY SCARY"),
        .monSet = gBattleFrontierTrainerMons_Kelly
    },
    [FRONTIER_TRAINER_RAYNA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("RAYNA"),
        .speechBefore = COMPOUND_STRING("I'm NO_1 WHEN IT_S ABOUT POWER"),
        .speechWin = COMPOUND_STRING("UNDERSTAND MY POWER NOW?"),
        .speechLose = COMPOUND_STRING("TERRIBLE… I'm TERRIBLE ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Rayna
    },
    [FRONTIER_TRAINER_EVAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("EVAN"),
        .speechBefore = COMPOUND_STRING("EVERY BATTLE HAS A SMELL"),
        .speechWin = COMPOUND_STRING("OH! THE EC_MOVE(SWEET_SCENT) OF VICTORY"),
        .speechLose = COMPOUND_STRING("THE AWFUL STENCH OF A LOSS"),
        .monSet = gBattleFrontierTrainerMons_Evan
    },
    [FRONTIER_TRAINER_JORDAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JORDAN"),
        .speechBefore = COMPOUND_STRING("GOOD! COME_ON EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("YOU CAN'T BEAT ME!"),
        .speechLose = COMPOUND_STRING("what QUES_EXCL but how?"),
        .monSet = gBattleFrontierTrainerMons_Jordan
    },
    [FRONTIER_TRAINER_JOEL] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JOEL"),
        .speechBefore = COMPOUND_STRING("FUFUFU…"),
        .speechWin = COMPOUND_STRING("GIGGLE…"),
        .speechLose = COMPOUND_STRING("HAHAHA…"),
        .monSet = gBattleFrontierTrainerMons_Joel
    },
    [FRONTIER_TRAINER_KRISTEN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("KRISTEN"),
        .speechBefore = COMPOUND_STRING("HAHAHA… A KID ELLIPSIS"),
        .speechWin = COMPOUND_STRING("JUST A_LITTLE KID AFTER ALL!"),
        .speechLose = COMPOUND_STRING("A TOUGH KID HUH_QUES HUMPH!"),
        .monSet = gBattleFrontierTrainerMons_Kristen
    },
    [FRONTIER_TRAINER_SELPHY] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("SELPHY"),
        .speechBefore = COMPOUND_STRING("HUH_QUES what IS_IT_QUES"),
        .speechWin = COMPOUND_STRING("OH YES! WHY NOT?"),
        .speechLose = COMPOUND_STRING("OH NO! WHY NOT?"),
        .monSet = gBattleFrontierTrainerMons_Selphy
    },
    [FRONTIER_TRAINER_CHLOE] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("CHLOE"),
        .speechBefore = COMPOUND_STRING("COME WE WILL DO BATTLE NOW"),
        .speechWin = COMPOUND_STRING("MORE! ANOTHER BATTLE!"),
        .speechLose = COMPOUND_STRING("OH! STRONG YOU ARE"),
        .monSet = gBattleFrontierTrainerMons_Chloe
    },
    [FRONTIER_TRAINER_NORTON] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("NORTON"),
        .speechBefore = COMPOUND_STRING("I KNOW ONLY YOU"),
        .speechWin = COMPOUND_STRING("EXCUSE_ME but YOU'RE A PUSHOVER!"),
        .speechLose = COMPOUND_STRING("YOU'RE SOME KIND OF AWESOME!"),
        .monSet = gBattleFrontierTrainerMons_Norton
    },
    [FRONTIER_TRAINER_LUKAS] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("LUKAS"),
        .speechBefore = COMPOUND_STRING("MY JOKING IS PRETTY TERRIBLE ELLIPSIS"),
        .speechWin = COMPOUND_STRING("YOUR ROCK_HEAD EXISTS to SHINE!"),
        .speechLose = COMPOUND_STRING("YOUR ROCK_HEAD COME to SHINE"),
        .monSet = gBattleFrontierTrainerMons_Lukas
    },
    [FRONTIER_TRAINER_ZACH] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ZACH"),
        .speechBefore = COMPOUND_STRING("I'm AN EXCELLENT EC_MOVE2(MIMIC) OF POKEMON"),
        .speechWin = COMPOUND_STRING("I'm HAPPY LIKE A_LITTLE EC_POKEMON_NATIONAL(TOGEPI)!"),
        .speechLose = COMPOUND_STRING("I'm ANGRY LIKE A EC_POKEMON_NATIONAL(MANKEY)!"),
        .monSet = gBattleFrontierTrainerMons_Zach
    },
    [FRONTIER_TRAINER_KAITLYN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KAITLYN"),
        .speechBefore = COMPOUND_STRING("I CRUSH THINGS WITH PSYCHIC POWER"),
        .speechWin = COMPOUND_STRING("MY VICTORY WILL MAKE THE NEWS"),
        .speechLose = COMPOUND_STRING("NO NO… THIS WON_T DO"),
        .monSet = gBattleFrontierTrainerMons_Kaitlyn
    },
    [FRONTIER_TRAINER_BREANNA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("BREANNA"),
        .speechBefore = COMPOUND_STRING("MY POKEMON WILL CRUSH YOU!"),
        .speechWin = COMPOUND_STRING("HAVE SOME MORE OF THIS!"),
        .speechLose = COMPOUND_STRING("YOU HAVE GUTS AND SKILL"),
        .monSet = gBattleFrontierTrainerMons_Breanna
    },
    [FRONTIER_TRAINER_KENDRA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KENDRA"),
        .speechBefore = COMPOUND_STRING("IF YOU'RE SMART STOP RIGHT NOW"),
        .speechWin = COMPOUND_STRING("I SAID THAT YOU SHOULD STOP"),
        .speechLose = COMPOUND_STRING("WHY DIDN_T YOU STOP?"),
        .monSet = gBattleFrontierTrainerMons_Kendra
    },
    [FRONTIER_TRAINER_MOLLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("MOLLY"),
        .speechBefore = COMPOUND_STRING("WILL MY CUTE_CHARM EC_MOVE2(ATTRACT) YOU?"),
        .speechWin = COMPOUND_STRING("YOUR POKEMON ARE MY TOYS NOW"),
        .speechLose = COMPOUND_STRING("OH how COULD YOU?"),
        .monSet = gBattleFrontierTrainerMons_Molly
    },
    [FRONTIER_TRAINER_JAZMIN] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("JAZMIN"),
        .speechBefore = COMPOUND_STRING("I FORECAST TERRIBLE THINGS FOR YOU"),
        .speechWin = COMPOUND_STRING("THERE WASN_T MY FORECAST RIGHT?"),
        .speechLose = COMPOUND_STRING("MY EC_MOVE2(FORESIGHT) DIDN_T Show ME THIS"),
        .monSet = gBattleFrontierTrainerMons_Jazmin
    },
    [FRONTIER_TRAINER_KELSEY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("KELSEY"),
        .speechBefore = COMPOUND_STRING("I HAVEN_T SLEPT IN DAYS ELLIPSIS"),
        .speechWin = COMPOUND_STRING("MY SLEEP WILL BE EXCELLENT NOW"),
        .speechLose = COMPOUND_STRING("YOU HAVE DESTROYED MY SLEEP ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Kelsey
    },
    [FRONTIER_TRAINER_JALEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("JALEN"),
        .speechBefore = COMPOUND_STRING("I DON_T ALLOW POKEMON to EC_MOVE(THRASH)"),
        .speechWin = COMPOUND_STRING("HAHAHA! ARE YOU ANGRY?"),
        .speechLose = COMPOUND_STRING("WHY IS THIS SO HARD?"),
        .monSet = gBattleFrontierTrainerMons_Jalen
    },
    [FRONTIER_TRAINER_GRIFFEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("GRIFFEN"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(SWALLOW) EC_MOVE2(SLUDGE) to EC_MOVE2(TRANSFORM) MYSELF"),
        .speechWin = COMPOUND_STRING("I HAVE A EC_MOVE(GROWTH) OF EC_MOVE2(ACID_ARMOR)"),
        .speechLose = COMPOUND_STRING("I HAVE A EC_MOVE(GROWTH) OF SUCTION_CUPS"),
        .monSet = gBattleFrontierTrainerMons_Griffen
    },
    [FRONTIER_TRAINER_XANDER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("XANDER"),
        .speechBefore = COMPOUND_STRING("I GOT MY POKEMON ON RENTAL"),
        .speechWin = COMPOUND_STRING("IT_S INCREDIBLE MY RENTAL POKEMON WON"),
        .speechLose = COMPOUND_STRING("RENTAL POKEMON aren't UP to EC_MOVE2(SCRATCH)"),
        .monSet = gBattleFrontierTrainerMons_Xander
    },
    [FRONTIER_TRAINER_MARVIN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("MARVIN"),
        .speechBefore = COMPOUND_STRING("YOU'RE UP to THE CHALLENGE?"),
        .speechWin = COMPOUND_STRING("I DIDN_T THINK YOU'RE GOOD ENOUGH"),
        .speechLose = COMPOUND_STRING("I'm FEELING PERFECT THANK_YOU SO MUCH"),
        .monSet = gBattleFrontierTrainerMons_Marvin
    },
    [FRONTIER_TRAINER_BRENNAN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BRENNAN"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(WISH) to SEE THE NEWS"),
        .speechWin = COMPOUND_STRING("COMICS GET DAMP FROM DRIZZLE?"),
        .speechLose = COMPOUND_STRING("THE TIGHT MONEY LIVING CHANNEL QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Brennan
    },
    [FRONTIER_TRAINER_BALEY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("BALEY"),
        .speechBefore = COMPOUND_STRING("EC_MOVE(SCREECH) IS LIKE MUSIC TO_ME!"),
        .speechWin = COMPOUND_STRING("MY EC_MOVE(SCREECH) STRATEGY IS THE BEST"),
        .speechLose = COMPOUND_STRING("YOU'RE SOUNDPROOF?"),
        .monSet = gBattleFrontierTrainerMons_Baley
    },
    [FRONTIER_TRAINER_ZACKARY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("ZACKARY"),
        .speechBefore = COMPOUND_STRING("CAN YOU EC_MOVE(DIG) IT YO?"),
        .speechWin = COMPOUND_STRING("EC_MOVE2(TAKE_DOWN) TAKE A EC_MOVE2(DIVE) YO YO"),
        .speechLose = COMPOUND_STRING("BREAK DOWN EC_MOVE2(DIVE) TIME FOR ME"),
        .monSet = gBattleFrontierTrainerMons_Zackary
    },
    [FRONTIER_TRAINER_GABRIEL] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GABRIEL"),
        .speechBefore = COMPOUND_STRING("EC_MOVE2(POUND) THE THICK_FAT ON MY EC_MOVE2(BELLY_DRUM)"),
        .speechWin = COMPOUND_STRING("EC_MOVE2(POUND) MY EC_MOVE2(BELLY_DRUM) EC_MOVE2(POUND) MY EC_MOVE2(BELLY_DRUM)"),
        .speechLose = COMPOUND_STRING("MY EC_MOVE2(BELLY_DRUM) WAS TOO_WEAK…"),
        .monSet = gBattleFrontierTrainerMons_Gabriel
    },
    [FRONTIER_TRAINER_EMILY] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("EMILY"),
        .speechBefore = COMPOUND_STRING("how ABOUT A_TINY_BIT OF EC_MOVE(HYPNOSIS)?"),
        .speechWin = COMPOUND_STRING("MY EC_MOVE(HYPNOSIS) STRATEGY WORKS to PERFECTION"),
        .speechLose = COMPOUND_STRING("MY EC_MOVE(HYPNOSIS) STRATEGY WENT BADLY ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Emily
    },
    [FRONTIER_TRAINER_JORDYN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("JORDYN"),
        .speechBefore = COMPOUND_STRING("YOU DON_T KNOW MY SECRET ELLIPSIS"),
        .speechWin = COMPOUND_STRING("I'm NOT AS I APPEAR ELLIPSIS"),
        .speechLose = COMPOUND_STRING("but how DID YOU KNOW?"),
        .monSet = gBattleFrontierTrainerMons_Jordyn
    },
    [FRONTIER_TRAINER_SOFIA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("SOFIA"),
        .speechBefore = COMPOUND_STRING("EC_POKEMON(LOUDRED) PROBABLY HAS A EC_MOVE(SWEET_SCENT)"),
        .speechWin = COMPOUND_STRING("that's THE FEELING THAT I GET"),
        .speechLose = COMPOUND_STRING("I WORK AT THE DEPT_STORE"),
        .monSet = gBattleFrontierTrainerMons_Sofia
    },
    [FRONTIER_TRAINER_BRADEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRADEN"),
        .speechBefore = COMPOUND_STRING("I_CHOOSE_YOU! THIS_IS_IT_EXCL"),
        .speechWin = COMPOUND_STRING("I'm FEELING PRETTY AWESOME ABOUT MYSELF"),
        .speechLose = COMPOUND_STRING("ALL_RIGHT! I SURRENDER!"),
        .monSet = gBattleFrontierTrainerMons_Braden
    },
    [FRONTIER_TRAINER_KAYDEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("KAYDEN"),
        .speechBefore = COMPOUND_STRING("THEY OVERDO THAT GOURMET THING ELLIPSIS"),
        .speechWin = COMPOUND_STRING("THAT GOURMET THING ISN_T FOR ME"),
        .speechLose = COMPOUND_STRING("HEY THIS IS PRETTY TASTY"),
        .monSet = gBattleFrontierTrainerMons_Kayden
    },
    [FRONTIER_TRAINER_COOPER] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("COOPER"),
        .speechBefore = COMPOUND_STRING("THIS SHOULD ABSOLUTELY BE A PUSHOVER"),
        .speechWin = COMPOUND_STRING("THAT_WAS TOO EXCITING FOR ME ELLIPSIS"),
        .speechLose = COMPOUND_STRING("PLEASE! SORRY I'm SORRY"),
        .monSet = gBattleFrontierTrainerMons_Cooper
    },
    [FRONTIER_TRAINER_JULIA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("JULIA"),
        .speechBefore = COMPOUND_STRING("SPIRIT ALONE WON_T MAKE YOU WIN"),
        .speechWin = COMPOUND_STRING("YOU SHOULD ACCEPT THIS WITH SERENE_GRACE"),
        .speechLose = COMPOUND_STRING("FOR_NOW GOOD_BYE but IT_S NOT OVER"),
        .monSet = gBattleFrontierTrainerMons_Julia
    },
    [FRONTIER_TRAINER_AMARA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("AMARA"),
        .speechBefore = COMPOUND_STRING("WROOOAAR_EXCL EXCL_EXCL I'm SO READY EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("I lose MYSELF IF IT_S EXCITING"),
        .speechLose = COMPOUND_STRING("that's TOO MUCH to EC_MOVE2(TACKLE)!"),
        .monSet = gBattleFrontierTrainerMons_Amara
    },
    [FRONTIER_TRAINER_LYNN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("LYNN"),
        .speechBefore = COMPOUND_STRING("YOUR SECRET CAN'T BE HIDDEN FOREVER"),
        .speechWin = COMPOUND_STRING("I KNOW YOUR SECRET NOW!"),
        .speechLose = COMPOUND_STRING("YOU CAN'T EC_MOVE(SAFEGUARD) YOUR OWN SECRET"),
        .monSet = gBattleFrontierTrainerMons_Lynn
    },
    [FRONTIER_TRAINER_JOVAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("JOVAN"),
        .speechBefore = COMPOUND_STRING("YOUR BATTLE SENSE IS SADLY LACKING"),
        .speechWin = COMPOUND_STRING("MY BATTLE SENSE IS COOL ISN_T_IT_QUES"),
        .speechLose = COMPOUND_STRING("I_WAS MINUS MY NORMAL POWER TODAY"),
        .monSet = gBattleFrontierTrainerMons_Jovan
    },
    [FRONTIER_TRAINER_DOMINIC] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("DOMINIC"),
        .speechBefore = COMPOUND_STRING("I HAVE THIS EXCELLENT CAMERA"),
        .speechWin = COMPOUND_STRING("MY CAMERA WAS AWFULLY EXPENSIVE"),
        .speechLose = COMPOUND_STRING("MY CAMERA doesn't MISS A THING"),
        .monSet = gBattleFrontierTrainerMons_Dominic
    },
    [FRONTIER_TRAINER_NIKOLAS] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NIKOLAS"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(MIMIC) POKEMON AFTER EVERY BATTLE"),
        .speechWin = COMPOUND_STRING("If I win I PRETEND I'm A EC_POKEMON_NATIONAL(TAUROS)"),
        .speechLose = COMPOUND_STRING("if I lose I PRETEND I'm A EC_POKEMON_NATIONAL(MILTANK)"),
        .monSet = gBattleFrontierTrainerMons_Nikolas
    },
    [FRONTIER_TRAINER_VALERIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("VALERIA"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(WISH) YOU WOULD NOT EC_MOVE2(GLARE)"),
        .speechWin = COMPOUND_STRING("YOU'RE MEAN! I MEAN REALLY"),
        .speechLose = COMPOUND_STRING("YOU HAVE A REALLY EC_MOVE(SCARY_FACE)!"),
        .monSet = gBattleFrontierTrainerMons_Valeria
    },
    [FRONTIER_TRAINER_DELANEY] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("DELANEY"),
        .speechBefore = COMPOUND_STRING("SCHOOL IS OVER TIME to PLAY"),
        .speechWin = COMPOUND_STRING("MY BOY FRIEND IS FROM SCHOOL"),
        .speechLose = COMPOUND_STRING("I HAVE to WORK NEXT WEEK"),
        .monSet = gBattleFrontierTrainerMons_Delaney
    },
    [FRONTIER_TRAINER_MEGHAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("MEGHAN"),
        .speechBefore = COMPOUND_STRING("SCHOOL IS OUT TIME to PLAY"),
        .speechWin = COMPOUND_STRING("MY BOY FRIEND LIKES COMICS"),
        .speechLose = COMPOUND_STRING("IT_S BACK to SCHOOL SOON"),
        .monSet = gBattleFrontierTrainerMons_Meghan
    },
    [FRONTIER_TRAINER_ROBERTO] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("ROBERTO"),
        .speechBefore = COMPOUND_STRING("DRAGON POKEMON ARE INVINCIBLE!"),
        .speechWin = COMPOUND_STRING("YOU WEREN_T BAD I_WAS JUST BETTER"),
        .speechLose = COMPOUND_STRING("aren't YOU SATISFIED YET?"),
        .monSet = gBattleFrontierTrainerMons_Roberto
    },
    [FRONTIER_TRAINER_DAMIAN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DAMIAN"),
        .speechBefore = COMPOUND_STRING("MY PURE_POWER IS MACHINE LIKE!"),
        .speechWin = COMPOUND_STRING("MY EC_MOVE2(MACH_PUNCH) WILL MAKE A EC_MOVE(BRICK_BREAK)"),
        .speechLose = COMPOUND_STRING("ARRGH! NO EXCL_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Damian
    },
    [FRONTIER_TRAINER_BRODY] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("BRODY"),
        .speechBefore = COMPOUND_STRING("MY FASHION SENSE SEEMS EC_POKEMON(ODDISH)?"),
        .speechWin = COMPOUND_STRING("IT_S MY FAMILY STAY_AT_HOME LOOK!"),
        .speechLose = COMPOUND_STRING("I QUESTION YOUR FASHION SENSE SERIOUSLY"),
        .monSet = gBattleFrontierTrainerMons_Brody
    },
    [FRONTIER_TRAINER_GRAHAM] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("GRAHAM"),
        .speechBefore = COMPOUND_STRING("YEAH! YEAH_YEAH EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("WAHAHAHA WAHAHAHA! WAHAHAHA WAHAHAHA EXCL_EXCL"),
        .speechLose = COMPOUND_STRING("I'm SORRY… IT_S MY BAD"),
        .monSet = gBattleFrontierTrainerMons_Graham
    },
    [FRONTIER_TRAINER_TYLOR] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TYLOR"),
        .speechBefore = COMPOUND_STRING("ARE YOU FEELING MY EC_MOVE2(HEAT_WAVE)?"),
        .speechWin = COMPOUND_STRING("YES I'm ON FIRE!"),
        .speechLose = COMPOUND_STRING("but I_WAS ON FIRE FOR YOU"),
        .monSet = gBattleFrontierTrainerMons_Tylor
    },
    [FRONTIER_TRAINER_JAREN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("JAREN"),
        .speechBefore = COMPOUND_STRING("FIGHTING SPIRIT? ME?"),
        .speechWin = COMPOUND_STRING("I WANT MORE CUTE POKEMON"),
        .speechLose = COMPOUND_STRING("YOUR POKEMON LOOK QUITE CUTE"),
        .monSet = gBattleFrontierTrainerMons_Jaren
    },
    [FRONTIER_TRAINER_CORDELL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("CORDELL"),
        .speechBefore = COMPOUND_STRING("A BATTLE IS DECIDED ON SPIRIT"),
        .speechWin = COMPOUND_STRING("CAN'T YOU ACCEPT THAT?"),
        .speechLose = COMPOUND_STRING("I WILL BE ON MY WAY"),
        .monSet = gBattleFrontierTrainerMons_Cordell
    },
    [FRONTIER_TRAINER_JAZLYN] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("JAZLYN"),
        .speechBefore = COMPOUND_STRING("IS YOUR POKEDEX REALLY AWESOME?"),
        .speechWin = COMPOUND_STRING("OH_YEAH WOW YOUR POKEDEX IS SUPER"),
        .speechLose = COMPOUND_STRING("AN AVANT_GARDE POKEDEX WOULD BE AWESOME"),
        .monSet = gBattleFrontierTrainerMons_Jazlyn
    },
    [FRONTIER_TRAINER_ZACHERY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("ZACHERY"),
        .speechBefore = COMPOUND_STRING("I HAVE MY OWN PLACE YEEHAW_EXCL"),
        .speechWin = COMPOUND_STRING("IT_S AN EXCITING TIME FOR ME"),
        .speechLose = COMPOUND_STRING("YOU CAN'T FLATTEN MY HAPPINESS!"),
        .monSet = gBattleFrontierTrainerMons_Zachery
    },
    [FRONTIER_TRAINER_JOHAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("JOHAN"),
        .speechBefore = COMPOUND_STRING("WINTER WILL SOON BE HERE"),
        .speechWin = COMPOUND_STRING("MY ALLOWANCE COULD USE A EC_MOVE2(HELPING_HAND)"),
        .speechLose = COMPOUND_STRING("I ALWAYS USE MY ALLOWANCE UP"),
        .monSet = gBattleFrontierTrainerMons_Johan
    },
    [FRONTIER_TRAINER_SHEA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("SHEA"),
        .speechBefore = COMPOUND_STRING("DO YOU BATTLE WITH BEAUTY?"),
        .speechWin = COMPOUND_STRING("YOU BATTLE IN AN UGLY WAY"),
        .speechLose = COMPOUND_STRING("what IS BEAUTY to YOU?"),
        .monSet = gBattleFrontierTrainerMons_Shea
    },
    [FRONTIER_TRAINER_KAILA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("KAILA"),
        .speechBefore = COMPOUND_STRING("I'm FEELING THIRSTY RIGHT NOW ELLIPSIS"),
        .speechWin = COMPOUND_STRING("I COULD USE A COLD DRINK"),
        .speechLose = COMPOUND_STRING("THAT LOSS IS HARD to EC_MOVE2(SWALLOW)"),
        .monSet = gBattleFrontierTrainerMons_Kaila
    },
    [FRONTIER_TRAINER_ISIAH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("ISIAH"),
        .speechBefore = COMPOUND_STRING("I PRETEND to STUDY A_LOT"),
        .speechWin = COMPOUND_STRING("I EC_MOVE2(TRICK) MOTHER FOR MY ALLOWANCE"),
        .speechLose = COMPOUND_STRING("I DON_T WANT to STUDY MORE"),
        .monSet = gBattleFrontierTrainerMons_Isiah
    },
    [FRONTIER_TRAINER_R8_TR9_HIKERT] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("GARRETT"),
        .speechBefore = COMPOUND_STRING("I ENJOY COMICS AND THIS GAME"),
        .speechWin = COMPOUND_STRING("I LIKE THIS MUSIC IDOL TOO"),
        .speechLose = COMPOUND_STRING("but I HAVE to STUDY MORE"),
        .monSet = gBattleFrontierTrainerMons_Garrett
    },
    [FRONTIER_TRAINER_HAYLIE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("HAYLIE"),
        .speechBefore = COMPOUND_STRING("I WORRY TOO MUCH to SLEEP"),
        .speechWin = COMPOUND_STRING("A WIN GIVES ME A EC_MOVE2(CALM_MIND)"),
        .speechLose = COMPOUND_STRING("MY INSOMNIA WILL GET BAD ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Haylie
    },
    [FRONTIER_TRAINER_MEGAN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("MEGAN"),
        .speechBefore = COMPOUND_STRING("I BELIEVE IN AN EC_MOVE(AROMATHERAPY) BATH"),
        .speechWin = COMPOUND_STRING("I WANT A HEALTHY CLEAR_BODY"),
        .speechLose = COMPOUND_STRING("IF ONLY EC_MOVE(AROMATHERAPY) WERE LESS EXPENSIVE"),
        .monSet = gBattleFrontierTrainerMons_Megan
    },
    [FRONTIER_TRAINER_ISSAC] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("ISSAC"),
        .speechBefore = COMPOUND_STRING("MY HOBBY?"),
        .speechWin = COMPOUND_STRING("I LIKE ANY KIND OF EC_MOVE2(WATER_SPORT)"),
        .speechLose = COMPOUND_STRING("I DISLIKE ANY KIND OF EC_MOVE2(MUD_SPORT)"),
        .monSet = gBattleFrontierTrainerMons_Issac
    },
    [FRONTIER_TRAINER_QUINTON] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("QUINTON"),
        .speechBefore = COMPOUND_STRING("I'm SAD CAUSE I'm TOO_WEAK"),
        .speechWin = COMPOUND_STRING("YOU aren't TOO_STRONG FOR ME"),
        .speechLose = COMPOUND_STRING("HEY what DID I DO?"),
        .monSet = gBattleFrontierTrainerMons_Quinton
    },
    [FRONTIER_TRAINER_SALMA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("SALMA"),
        .speechBefore = COMPOUND_STRING("YOU_VE GOT YOUR HUSTLE ON!"),
        .speechWin = COMPOUND_STRING("I WIN YOU HUSTLE ON OUT"),
        .speechLose = COMPOUND_STRING("I DON_T GET how I LOST"),
        .monSet = gBattleFrontierTrainerMons_Salma
    },
    [FRONTIER_TRAINER_ANSLEY] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("ANSLEY"),
        .speechBefore = COMPOUND_STRING("I'm BORED… DANCE FOR ME"),
        .speechWin = COMPOUND_STRING("YOU_VE BORED ME SOME MORE"),
        .speechLose = COMPOUND_STRING("TAKE YOUR EC_MOVE2(FRUSTRATION) SOME OTHER PLACE"),
        .monSet = gBattleFrontierTrainerMons_Ansley
    },
    [FRONTIER_TRAINER_HOLDEN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("HOLDEN"),
        .speechBefore = COMPOUND_STRING("LET_S COMMEMORATE MY COOLNESS IN BATTLE"),
        .speechWin = COMPOUND_STRING("YOU'RE TOO_WEAK FOR ANY PRAISE"),
        .speechLose = COMPOUND_STRING("YOUR BATTLE SENSE IS AMUSING"),
        .monSet = gBattleFrontierTrainerMons_Holden
    },
    [FRONTIER_TRAINER_LUCA] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("LUCA"),
        .speechBefore = COMPOUND_STRING("WE WILL HAVE A COOL BATTLE"),
        .speechWin = COMPOUND_STRING("I WON IN A COOL WAY"),
        .speechLose = COMPOUND_STRING("HELLO? I'm JUST A KID"),
        .monSet = gBattleFrontierTrainerMons_Luca
    },
    [FRONTIER_TRAINER_JAMISON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("JAMISON"),
        .speechBefore = COMPOUND_STRING("MY EC_MOVE2(SECRET_POWER) IS OVERWHELMING to POKEMON"),
        .speechWin = COMPOUND_STRING("DID YOU SEE THAT?"),
        .speechLose = COMPOUND_STRING("I WILL USE EC_MOVE(SMOKESCREEN) to ESCAPE"),
        .monSet = gBattleFrontierTrainerMons_Jamison
    },
    [FRONTIER_TRAINER_GUNNAR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("GUNNAR"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE(CUT) DOWN EVERY OPPONENT"),
        .speechWin = COMPOUND_STRING("DON_T EC_MOVE(GRUDGE) ME FOR YOUR LOSS"),
        .speechLose = COMPOUND_STRING("PLEASE lose THAT EC_MOVE(SCARY_FACE) OF YOURS"),
        .monSet = gBattleFrontierTrainerMons_Gunnar
    },
    [FRONTIER_TRAINER_CRAIG] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("CRAIG"),
        .speechBefore = COMPOUND_STRING("I CAN'T WAIT FOR MY TRAIN"),
        .speechWin = COMPOUND_STRING("MY TRAIN ISN_T HERE YET ELLIPSIS"),
        .speechLose = COMPOUND_STRING("HERE_IT_IS MY TRAIN SEE YA!"),
        .monSet = gBattleFrontierTrainerMons_Craig
    },
    [FRONTIER_TRAINER_PIERCE] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("PIERCE"),
        .speechBefore = COMPOUND_STRING("THERE WAS A EC_MOVE2(HEAT_WAVE) LAST WEEK"),
        .speechWin = COMPOUND_STRING("I CAN'T TAKE A EC_MOVE2(HEAT_WAVE)"),
        .speechLose = COMPOUND_STRING("DIDN_T IT EC_MOVE(HAIL) TOO?"),
        .monSet = gBattleFrontierTrainerMons_Pierce
    },
    [FRONTIER_TRAINER_REGINA] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("REGINA"),
        .speechBefore = COMPOUND_STRING("I LIKE to PLAY IN WATER"),
        .speechWin = COMPOUND_STRING("I REFUSE to COME OUT"),
        .speechLose = COMPOUND_STRING("YOU'RE NOT MUCH GOOD IN WATER"),
        .monSet = gBattleFrontierTrainerMons_Regina
    },
    [FRONTIER_TRAINER_ALISON] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("ALISON"),
        .speechBefore = COMPOUND_STRING("THIS KINDERGARTEN MAGAZINE IS TOO MUCH"),
        .speechWin = COMPOUND_STRING("how to BUG YOUR TEACHER?"),
        .speechLose = COMPOUND_STRING("ENJOY A TASTY SCHOOL DIET?"),
        .monSet = gBattleFrontierTrainerMons_Alison
    },
    [FRONTIER_TRAINER_HANK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("HANK"),
        .speechBefore = COMPOUND_STRING("THERE IS A BUG EVENT SOON"),
        .speechWin = COMPOUND_STRING("IT_S A BUG FASHION Show!"),
        .speechLose = COMPOUND_STRING("DON_T YOU LIKE BUG POKEMON?"),
        .monSet = gBattleFrontierTrainerMons_Hank
    },
    [FRONTIER_TRAINER_EARL] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("EARL"),
        .speechBefore = COMPOUND_STRING("THE INVINCIBLE BUG TRAINER IS HERE"),
        .speechWin = COMPOUND_STRING("THE INVINCIBLE BUG TRAINER AM I"),
        .speechLose = COMPOUND_STRING("SEE how FAST I RUN_AWAY!"),
        .monSet = gBattleFrontierTrainerMons_Earl
    },
    [FRONTIER_TRAINER_RAMIRO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("RAMIRO"),
        .speechBefore = COMPOUND_STRING("I WENT to A FISHING SCHOOL"),
        .speechWin = COMPOUND_STRING("SERIOUSLY I'm IN THE FISHING HALL_OF_FAME"),
        .speechLose = COMPOUND_STRING("I WANT to GO BACK ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Ramiro
    },
    [FRONTIER_TRAINER_HUNTER] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("HUNTER"),
        .speechBefore = COMPOUND_STRING("Show ME A TOTALLY COOL EC_MOVE(CROSS_CHOP)"),
        .speechWin = COMPOUND_STRING("YOU'RE TOO_WEAK to DO A EC_MOVE(CROSS_CHOP)"),
        .speechLose = COMPOUND_STRING("WAS IT A MISTAKE?"),
        .monSet = gBattleFrontierTrainerMons_Hunter
    },
    [FRONTIER_TRAINER_AIDEN] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("AIDEN"),
        .speechBefore = COMPOUND_STRING("MY WORK IS MAKING ME HEALTHY"),
        .speechWin = COMPOUND_STRING("YOU SEE? I'm HEALTHY!"),
        .speechLose = COMPOUND_STRING("YOU'RE MORE HEALTHY THAN I'm ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Aiden
    },
    [FRONTIER_TRAINER_XAVIER] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("XAVIER"),
        .speechBefore = COMPOUND_STRING("HEY THERE! LOOK LOOK EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("GOOD_BYE AND THANK_YOU THAT_WAS FUNNY"),
        .speechLose = COMPOUND_STRING("WOWEE! NO NO EXCL_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Xavier
    },
    [FRONTIER_TRAINER_CLINTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("CLINTON"),
        .speechBefore = COMPOUND_STRING("WANT to SEE MY EC_MOVE(HYPNOSIS)?"),
        .speechWin = COMPOUND_STRING("YOUR EC_MOVE2(FURY_SWIPES) YOUR EC_MOVE(STRENGTH) YOUNG TRAINER"),
        .speechLose = COMPOUND_STRING("TCH… I'm TOO_WEAK ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Clinton
    },
    [FRONTIER_TRAINER_JESSE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("JESSE"),
        .speechBefore = COMPOUND_STRING("THIS BATTLE IS FOR MY MOTHER"),
        .speechWin = COMPOUND_STRING("MOTHER WILL BE HAPPY FOR ME"),
        .speechLose = COMPOUND_STRING("I WANT MY MOTHER!"),
        .monSet = gBattleFrontierTrainerMons_Jesse
    },
    [FRONTIER_TRAINER_EDUARDO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("EDUARDO"),
        .speechBefore = COMPOUND_STRING("OUR MUSIC WILL PLAY ALL NIGHT"),
        .speechWin = COMPOUND_STRING("NIGHTTIME IS WHEN I PLAY BEST"),
        .speechLose = COMPOUND_STRING("LET_S PARTY UNTIL THE EC_MOVE(MORNING_SUN)!"),
        .monSet = gBattleFrontierTrainerMons_Eduardo
    },
    [FRONTIER_TRAINER_HAL] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("HAL"),
        .speechBefore = COMPOUND_STRING("I'm TRENDY aren't I?"),
        .speechWin = COMPOUND_STRING("I'm FEELING HIP_AND HAPPENING OH_YEAH!"),
        .speechLose = COMPOUND_STRING("I'm ALWAYS TRENDY THANK_YOU VERY MUCH"),
        .monSet = gBattleFrontierTrainerMons_Hal
    },
    [FRONTIER_TRAINER_GAGE] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("GAGE"),
        .speechBefore = COMPOUND_STRING("HERE_IT_IS A FLYING TYPE HIDDEN MOVE"),
        .speechWin = COMPOUND_STRING("IT_S A FLYING TYPE VICTORY!"),
        .speechLose = COMPOUND_STRING("if I lose I JUST EC_MOVE(FLY) AWAY"),
        .monSet = gBattleFrontierTrainerMons_Gage
    },
    [FRONTIER_TRAINER_ARNOLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("ARNOLD"),
        .speechBefore = COMPOUND_STRING("I'm FEELING WEIRD FROM A DREAM"),
        .speechWin = COMPOUND_STRING("YOUR EC_MOVE(SCARY_FACE) WAS IN MY DREAM"),
        .speechLose = COMPOUND_STRING("MY INCREDIBLE DREAM WAS SO WEIRD"),
        .monSet = gBattleFrontierTrainerMons_Arnold
    },
    [FRONTIER_TRAINER_JARRETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("JARRETT"),
        .speechBefore = COMPOUND_STRING("COME_ON LET_S DANCE LIKE IT_S YESTERDAY"),
        .speechWin = COMPOUND_STRING("YOU LIKE how I DANCE?"),
        .speechLose = COMPOUND_STRING("YOU DON_T APPRECIATE how I DANCE"),
        .monSet = gBattleFrontierTrainerMons_Jarrett
    },
    [FRONTIER_TRAINER_GARETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("GARETT"),
        .speechBefore = COMPOUND_STRING("MY GIRL GIVES ME A_LITTLE EC_MOVE2(SWEET_KISS)"),
        .speechWin = COMPOUND_STRING("MY GIRL FRIEND IS MY TREASURE"),
        .speechLose = COMPOUND_STRING("A TREASURE ISN_T ALWAYS ABOUT MONEY"),
        .monSet = gBattleFrontierTrainerMons_Garett
    },
    [FRONTIER_TRAINER_EMANUEL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("EMANUEL"),
        .speechBefore = COMPOUND_STRING("SMARTNESS ALONE WON_T MAKE YOU WIN"),
        .speechWin = COMPOUND_STRING("I'm NOT_VERY SMART but I WON"),
        .speechLose = COMPOUND_STRING("how DID YOU EC_MOVE2(FAKE_OUT) ME?"),
        .monSet = gBattleFrontierTrainerMons_Emanuel
    },
    [FRONTIER_TRAINER_GUSTAVO] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("GUSTAVO"),
        .speechBefore = COMPOUND_STRING("EC_MOVE(CHARGE)! EC_MOVE(CHARGE) EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("SURRENDER? SO SOON?"),
        .speechLose = COMPOUND_STRING("YOU CAN'T MAKE ME SURRENDER YET"),
        .monSet = gBattleFrontierTrainerMons_Gustavo
    },
    [FRONTIER_TRAINER_KAMERON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("KAMERON"),
        .speechBefore = COMPOUND_STRING("TAKE_THAT! IT_S MY FIERY EC_MOVE2(TRICK)"),
        .speechWin = COMPOUND_STRING("DID MY FIERY EC_MOVE2(TRICK) EC_MOVE(ASTONISH)?"),
        .speechLose = COMPOUND_STRING("YOU DIDN_T FALL FOR MY EC_MOVE2(TRICK)"),
        .monSet = gBattleFrontierTrainerMons_Kameron
    },
    [FRONTIER_TRAINER_ALFREDO] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("ALFREDO"),
        .speechBefore = COMPOUND_STRING("A FIERY GOURMET AM I!"),
        .speechWin = COMPOUND_STRING("IT_S A TASTY GOURMET VICTORY!"),
        .speechLose = COMPOUND_STRING("what A DISASTER THAT_WAS!"),
        .monSet = gBattleFrontierTrainerMons_Alfredo
    },
    [FRONTIER_TRAINER_RUBEN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("RUBEN"),
        .speechBefore = COMPOUND_STRING("I CAN'T WAIT to GET going"),
        .speechWin = COMPOUND_STRING("GET going! THIS IS GOOD_BYE"),
        .speechLose = COMPOUND_STRING("I've GOT to GET going"),
        .monSet = gBattleFrontierTrainerMons_Ruben
    },
    [FRONTIER_TRAINER_LAMAR] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("LAMAR"),
        .speechBefore = COMPOUND_STRING("A EC_MOVE2(PRESENT) FOR ME?"),
        .speechWin = COMPOUND_STRING("MMM THIS IS QUITE TASTY ELLIPSIS"),
        .speechLose = COMPOUND_STRING("OH IT_S A GAME IS_IT_QUES"),
        .monSet = gBattleFrontierTrainerMons_Lamar
    },
    [FRONTIER_TRAINER_JAXON] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("JAXON"),
        .speechBefore = COMPOUND_STRING("A SHELL_ARMOR IS what I WANT"),
        .speechWin = COMPOUND_STRING("MY FATHER AND MOTHER WON_T ACCEPT"),
        .speechLose = COMPOUND_STRING("PLEASE I NEED A SHELL_ARMOR!"),
        .monSet = gBattleFrontierTrainerMons_Jaxon
    },
    [FRONTIER_TRAINER_LOGAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("LOGAN"),
        .speechBefore = COMPOUND_STRING("if I lose I WILL STUDY FOR SCHOOL"),
        .speechWin = COMPOUND_STRING("ME STUDY? NOT_VERY LIKELY_TO SEE"),
        .speechLose = COMPOUND_STRING("NO THANKS I'm going to SLEEP"),
        .monSet = gBattleFrontierTrainerMons_Logan
    },
    [FRONTIER_TRAINER_EMILEE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("EMILEE"),
        .speechBefore = COMPOUND_STRING("IS THIS KIND OF BATTLE OK_QUES"),
        .speechWin = COMPOUND_STRING("LET_S GO FOR AN EC_MOVE(ICY_WIND) EC_MOVE2(SURF)"),
        .speechLose = COMPOUND_STRING("how ABOUT A EC_MOVE(ROCK_SLIDE) Show?"),
        .monSet = gBattleFrontierTrainerMons_Emilee
    },
    [FRONTIER_TRAINER_JOSIE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("JOSIE"),
        .speechBefore = COMPOUND_STRING("A POKEMON FASHION CONTEST IS PRETTY"),
        .speechWin = COMPOUND_STRING("I REALLY LIKE MODE FASHION THINGS"),
        .speechLose = COMPOUND_STRING("YOU'RE TOTALLY LACKING IN FASHION SENSE"),
        .monSet = gBattleFrontierTrainerMons_Josie
    },
    [FRONTIER_TRAINER_ARMANDO] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("ARMANDO"),
        .speechBefore = COMPOUND_STRING("I NEED MORE GRASS TYPE POKEMON"),
        .speechWin = COMPOUND_STRING("TRADE ME A GRASS POKEMON PLEASE"),
        .speechLose = COMPOUND_STRING("THERE aren't ENOUGH GRASS TYPE POKEMON"),
        .monSet = gBattleFrontierTrainerMons_Armando
    },
    [FRONTIER_TRAINER_SKYLER] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("SKYLER"),
        .speechBefore = COMPOUND_STRING("EC_MOVE2(INGRAIN) IS MY CHOICE BATTLE MOVE"),
        .speechWin = COMPOUND_STRING("YOU CAN'T MOVE ME NOW!"),
        .speechLose = COMPOUND_STRING("YOU EC_MOVE(CUT) ME DOWN…"),
        .monSet = gBattleFrontierTrainerMons_Skyler
    },
    [FRONTIER_TRAINER_RUTH] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("RUTH"),
        .speechBefore = COMPOUND_STRING("I WANT to ENJOY THIS BATTLE"),
        .speechWin = COMPOUND_STRING("THAT_WAS MUCH TOO EASY!"),
        .speechLose = COMPOUND_STRING("PLEASE STOP I DON_T ENJOY THIS"),
        .monSet = gBattleFrontierTrainerMons_Ruth
    },
    [FRONTIER_TRAINER_MELODY] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("MELODY"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(WISH) SUNDAY IS A EC_MOVE2(SUNNY_DAY)"),
        .speechWin = COMPOUND_STRING("SUNDAY SEEMS FOREVER to COME ELLIPSIS"),
        .speechLose = COMPOUND_STRING("THE FORECAST SAYS IT WILL EC_MOVE(HAIL)"),
        .monSet = gBattleFrontierTrainerMons_Melody
    },
    [FRONTIER_TRAINER_PEDRO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("PEDRO"),
        .speechBefore = COMPOUND_STRING("A SWIFT_SWIM WILL DO YOU GOOD"),
        .speechWin = COMPOUND_STRING("that's how I SINK AN OPPONENT"),
        .speechLose = COMPOUND_STRING("UH_OH! A EC_MOVE(WHIRLPOOL)!"),
        .monSet = gBattleFrontierTrainerMons_Pedro
    },
    [FRONTIER_TRAINER_ERICK] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("ERICK"),
        .speechBefore = COMPOUND_STRING("I WILL EC_MOVE2(TACKLE) YOU DOWN!"),
        .speechWin = COMPOUND_STRING("DON_T YOU RUN_AWAY YOU LOSER!"),
        .speechLose = COMPOUND_STRING("I DIDN_T THINK YOU WOULD EC_MOVE(COUNTER)"),
        .monSet = gBattleFrontierTrainerMons_Erick
    },
    [FRONTIER_TRAINER_ELAINE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("ELAINE"),
        .speechBefore = COMPOUND_STRING("MY HEROINE ADVENTURE ISN_T going WELL"),
        .speechWin = COMPOUND_STRING("THANK_YOU! that's what I NEED"),
        .speechLose = COMPOUND_STRING("I KNOW I'm NOT A HEROINE"),
        .monSet = gBattleFrontierTrainerMons_Elaine
    },
    [FRONTIER_TRAINER_JOYCE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("JOYCE"),
        .speechBefore = COMPOUND_STRING("YOU MAKE ME GO AHAHA!"),
        .speechWin = COMPOUND_STRING("LALALA NO losing FOR ME!"),
        .speechLose = COMPOUND_STRING("LALALA… HUH_QUES"),
        .monSet = gBattleFrontierTrainerMons_Joyce
    },
    [FRONTIER_TRAINER_TODD] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("TODD"),
        .speechBefore = COMPOUND_STRING("YOU'RE A LIGHTNINGROD FOR MY POWER"),
        .speechWin = COMPOUND_STRING("that's ALL YOU COULD EC_MOVE(ABSORB)?"),
        .speechLose = COMPOUND_STRING("YOU EC_MOVE2(REFLECT) MY POWER BACK?"),
        .monSet = gBattleFrontierTrainerMons_Todd
    },
    [FRONTIER_TRAINER_GAVIN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("GAVIN"),
        .speechBefore = COMPOUND_STRING("I WILL EC_MOVE(BIDE) MY TIME"),
        .speechWin = COMPOUND_STRING("IT_S OVER SO SOON?"),
        .speechLose = COMPOUND_STRING("MY MISTAKE WAS TOO EXPENSIVE ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Gavin
    },
    [FRONTIER_TRAINER_MALORY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("MALORY"),
        .speechBefore = COMPOUND_STRING("PROMISE to Show ME CUTE POKEMON"),
        .speechWin = COMPOUND_STRING("GIGGLE… THANK_YOU SO MUCH"),
        .speechLose = COMPOUND_STRING("TCH YOUR POKEMON aren't VERY NICE"),
        .monSet = gBattleFrontierTrainerMons_Malory
    },
    [FRONTIER_TRAINER_ESTHER] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("ESTHER"),
        .speechBefore = COMPOUND_STRING("I WANT A NICE EC_MOVE2(PRESENT) ELLIPSIS"),
        .speechWin = COMPOUND_STRING("PLEASE GET ME A POKEMON GAME"),
        .speechLose = COMPOUND_STRING("MESSAGE CARDS MAKE A WEAK EC_MOVE2(PRESENT)"),
        .monSet = gBattleFrontierTrainerMons_Esther
    },
    [FRONTIER_TRAINER_OSCAR] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("OSCAR"),
        .speechBefore = COMPOUND_STRING("LET_S SEE YOUR POWER IN FULL"),
        .speechWin = COMPOUND_STRING("THAT_WAS NOT YOUR FULL POWER!"),
        .speechLose = COMPOUND_STRING("NOT FUNNY… YOU'RE TOO_STRONG"),
        .monSet = gBattleFrontierTrainerMons_Oscar
    },
    [FRONTIER_TRAINER_WILSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("WILSON"),
        .speechBefore = COMPOUND_STRING("WORK IS MAKING ME AN EARLY_BIRD"),
        .speechWin = COMPOUND_STRING("ALL WORK AND NO PLAY ELLIPSIS"),
        .speechLose = COMPOUND_STRING("EC_MOVE(ENDURE) IS ALL I CAN DO"),
        .monSet = gBattleFrontierTrainerMons_Wilson
    },
    [FRONTIER_TRAINER_CLARE] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("CLARE"),
        .speechBefore = COMPOUND_STRING("YAY! A TOUGH TRAINER!"),
        .speechWin = COMPOUND_STRING("AWW! A WIMPY TRAINER!"),
        .speechLose = COMPOUND_STRING("COOL! A GENIUS TRAINER!"),
        .monSet = gBattleFrontierTrainerMons_Clare
    },
    [FRONTIER_TRAINER_TESS] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("TESS"),
        .speechBefore = COMPOUND_STRING("WANT SOME EC_POKEMON(GULPIN) DESIGN SWEETS?"),
        .speechWin = COMPOUND_STRING("THEY_RE A SECRET POKEMON GOURMET ITEM"),
        .speechLose = COMPOUND_STRING("THEY_RE TASTY! REFRESHING TOO!"),
        .monSet = gBattleFrontierTrainerMons_Tess
    },
    [FRONTIER_TRAINER_LEON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("LEON"),
        .speechBefore = COMPOUND_STRING("I'm BETTER THAN ANY OTHER TRAINER"),
        .speechWin = COMPOUND_STRING("I DID IT EC_MOVE2(JUMP_KICK) FOR JOY"),
        .speechLose = COMPOUND_STRING("BACK HOME I WILL GO ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Leon
    },
    [FRONTIER_TRAINER_ALONZO] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("ALONZO"),
        .speechBefore = COMPOUND_STRING("I've NOT LOST ONCE YET!"),
        .speechWin = COMPOUND_STRING("YOUR SAD LOOK BECOMES YOU"),
        .speechLose = COMPOUND_STRING("I DON_T BELIEVE THIS…"),
        .monSet = gBattleFrontierTrainerMons_Alonzo
    },
    [FRONTIER_TRAINER_VINCE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("VINCE"),
        .speechBefore = COMPOUND_STRING("THE TOP TRAINER that's ME!"),
        .speechWin = COMPOUND_STRING("THE TOP RANK BELONGS_TO ME!"),
        .speechLose = COMPOUND_STRING("I WILL APPEAL THIS EC_MOVE(OUTRAGE)!"),
        .monSet = gBattleFrontierTrainerMons_Vince
    },
    [FRONTIER_TRAINER_BRYON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("BRYON"),
        .speechBefore = COMPOUND_STRING("MY EC_MOVE2(BARRAGE) WILL EC_MOVE2(SLAM) YOU!"),
        .speechWin = COMPOUND_STRING("YOU DIDN_T COUNT_ON ANY LESS?"),
        .speechLose = COMPOUND_STRING("I JUST DON_T GET IT ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Bryon
    },
    [FRONTIER_TRAINER_AVA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("AVA"),
        .speechBefore = COMPOUND_STRING("I'm A TREASURE OF THIS WORLD"),
        .speechWin = COMPOUND_STRING("MY WORLD IS FULL OF WONDER"),
        .speechLose = COMPOUND_STRING("WHY ARE YOU SO TERRIBLE?"),
        .monSet = gBattleFrontierTrainerMons_Ava
    },
    [FRONTIER_TRAINER_MIRIAM] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("MIRIAM"),
        .speechBefore = COMPOUND_STRING("OH A TRAINER WITH A EC_MOVE(SCARY_FACE)"),
        .speechWin = COMPOUND_STRING("AHAHA YOU ONLY LOOK SCARY!"),
        .speechLose = COMPOUND_STRING("AIYEEH! YOU REALLY ARE SCARY"),
        .monSet = gBattleFrontierTrainerMons_Miriam
    },
    [FRONTIER_TRAINER_CARRIE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("CARRIE"),
        .speechBefore = COMPOUND_STRING("I WILL Show YOU GUTSY!"),
        .speechWin = COMPOUND_STRING("IT_S ALL ABOUT GUTS!"),
        .speechLose = COMPOUND_STRING("OH NO… EC_MOVE(SELF_DESTRUCT) MODE!"),
        .monSet = gBattleFrontierTrainerMons_Carrie
    },
    [FRONTIER_TRAINER_GILLIAN2] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("GILLIAN"),
        .speechBefore = COMPOUND_STRING("I SEEK A TRULY GREAT BATTLE"),
        .speechWin = COMPOUND_STRING("I NEED A_LOT BETTER BATTLE ELLIPSIS"),
        .speechLose = COMPOUND_STRING("THAT_WAS A_LITTLE TOO MUCH to TAKE"),
        .monSet = gBattleFrontierTrainerMons_Gillian2
    },
    [FRONTIER_TRAINER_TYLER] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("TYLER"),
        .speechBefore = COMPOUND_STRING("YO! LET_S GO EXCL_EXCL"),
        .speechWin = COMPOUND_STRING("YO! I WON YO"),
        .speechLose = COMPOUND_STRING("YO! I LOST YO"),
        .monSet = gBattleFrontierTrainerMons_Tyler
    },
    [FRONTIER_TRAINER_CHAZ] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("CHAZ"),
        .speechBefore = COMPOUND_STRING("MY POKEMON HAVE TOO MUCH POWER"),
        .speechWin = COMPOUND_STRING("THEY HAVE MORE POWER NOW!"),
        .speechLose = COMPOUND_STRING("YEAH EC_MOVE2(TAKE_DOWN) THEIR POWER A_TINY_BIT PLEASE"),
        .monSet = gBattleFrontierTrainerMons_Chaz
    },
    [FRONTIER_TRAINER_NELSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("NELSON"),
        .speechBefore = COMPOUND_STRING("WELL_THEN WILL THIS POKEMON WORK?"),
        .speechWin = COMPOUND_STRING("I SEE THAT IT WAS TOO_STRONG"),
        .speechLose = COMPOUND_STRING("IT DIDN_T MATCH_UP WELL I THINK"),
        .monSet = gBattleFrontierTrainerMons_Nelson
    },
    [FRONTIER_TRAINER_SHANIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("SHANIA"),
        .speechBefore = COMPOUND_STRING("ALL MY POKEMON ABSOLUTELY ADORE ME"),
        .speechWin = COMPOUND_STRING("HAPPINESS IS A POKEMON WITH CUTE_CHARM"),
        .speechLose = COMPOUND_STRING("YOU'RE SO MEAN to CUTE POKEMON"),
        .monSet = gBattleFrontierTrainerMons_Shania
    },
    [FRONTIER_TRAINER_STELLA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("STELLA"),
        .speechBefore = COMPOUND_STRING("I WANT to SEE YOUR POKEMON"),
        .speechWin = COMPOUND_STRING("WELL aren't THEY BORING? AHAHA"),
        .speechLose = COMPOUND_STRING("YOUR POKEMON ARE SOMETHING ELSE ALL_RIGHT"),
        .monSet = gBattleFrontierTrainerMons_Stella
    },
    [FRONTIER_TRAINER_DORINE] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("DORINE"),
        .speechBefore = COMPOUND_STRING("I'm YOUNG AND STRONG!"),
        .speechWin = COMPOUND_STRING("SEE? aren't I GOOD?"),
        .speechLose = COMPOUND_STRING("THIS ISN_T WORKING OUT AT ALL"),
        .monSet = gBattleFrontierTrainerMons_Dorine
    },
    [FRONTIER_TRAINER_MADDOX] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("MADDOX"),
        .speechBefore = COMPOUND_STRING("DRAGON POKEMON ARE MY NO_1 CHOICE"),
        .speechWin = COMPOUND_STRING("IT_S NO SECRET DRAGON POKEMON WIN"),
        .speechLose = COMPOUND_STRING("DRAGON POKEMON SHOULD NOT lose!"),
        .monSet = gBattleFrontierTrainerMons_Maddox
    },
    [FRONTIER_TRAINER_DAVIN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("DAVIN"),
        .speechBefore = COMPOUND_STRING("LET_S HEAR YOU EC_MOVE2(ROAR)!"),
        .speechWin = COMPOUND_STRING("WROOOAAR_EXCL VICTORY EXCL_EXCL"),
        .speechLose = COMPOUND_STRING("WROOOAAR_EXCL WHY QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Davin
    },
    [FRONTIER_TRAINER_TREVON] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("TREVON"),
        .speechBefore = COMPOUND_STRING("I'm LIVING ONLY WITH DRAGON POKEMON"),
        .speechWin = COMPOUND_STRING("THE WAY I'm LIVING IS PERFECT"),
        .speechLose = COMPOUND_STRING("YOU_VE DESTROYED THE WAY I'm LIVING"),
        .monSet = gBattleFrontierTrainerMons_Trevon
    },
    [FRONTIER_TRAINER_MATEO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("MATEO"),
        .speechBefore = COMPOUND_STRING("THIS SHOULD BE OVER SOON ENOUGH"),
        .speechWin = COMPOUND_STRING("WELL THAT DIDN_T TAKE VERY MUCH"),
        .speechLose = COMPOUND_STRING("I CAN'T lose SO SOON!"),
        .monSet = gBattleFrontierTrainerMons_Mateo
    },
    [FRONTIER_TRAINER_BRET] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("BRET"),
        .speechBefore = COMPOUND_STRING("I LIKE ROCK_SOLID POKEMON THE BEST"),
        .speechWin = COMPOUND_STRING("TOUGHNESS IS THE WAY to GO"),
        .speechLose = COMPOUND_STRING("I ALSO HAVE A PLUSH_DOLL COLLECTION"),
        .monSet = gBattleFrontierTrainerMons_Bret
    },
    [FRONTIER_TRAINER_RAUL] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("RAUL"),
        .speechBefore = COMPOUND_STRING("I REJECT EVERY WEAK TRAINER"),
        .speechWin = COMPOUND_STRING("HUMPH! ANOTHER WEAK TRAINER ELLIPSIS"),
        .speechLose = COMPOUND_STRING("THERE IS NOTHING WEAK ABOUT YOU"),
        .monSet = gBattleFrontierTrainerMons_Raul
    },
    [FRONTIER_TRAINER_KAY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("KAY"),
        .speechBefore = COMPOUND_STRING("AND YET ANOTHER BATTLE?"),
        .speechWin = COMPOUND_STRING("I WON but I'm TIRED ELLIPSIS"),
        .speechLose = COMPOUND_STRING("GOOD IT_S OVER AT LAST ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Kay
    },
    [FRONTIER_TRAINER_ELENA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ELENA"),
        .speechBefore = COMPOUND_STRING("A BATTLE GIRL that's ME!"),
        .speechWin = COMPOUND_STRING("ISN_T A BATTLE GIRL AWESOME?"),
        .speechLose = COMPOUND_STRING("YOU DISLIKE A BATTLE GIRL?"),
        .monSet = gBattleFrontierTrainerMons_Elena
    },
    [FRONTIER_TRAINER_ALANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("ALANA"),
        .speechBefore = COMPOUND_STRING("EAT MY INVINCIBLE ATTACK YOU!"),
        .speechWin = COMPOUND_STRING("YOU HAVE MUCH to LEARN"),
        .speechLose = COMPOUND_STRING("SO MUCH FOR MY INVINCIBLE ATTACK"),
        .monSet = gBattleFrontierTrainerMons_Alana
    },
    [FRONTIER_TRAINER_ALEXAS] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("ALEXAS"),
        .speechBefore = COMPOUND_STRING("GOOD to MEET_YOU YOUNG TRAINER!"),
        .speechWin = COMPOUND_STRING("WAHAHAHA! GIVE IT UP"),
        .speechLose = COMPOUND_STRING("YOU ARE A STRONG TRAINER KID"),
        .monSet = gBattleFrontierTrainerMons_Alexas
    },
    [FRONTIER_TRAINER_WESTON] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("WESTON"),
        .speechBefore = COMPOUND_STRING("I DON_T PLAY DOWN ALL_RIGHT?"),
        .speechWin = COMPOUND_STRING("YOU'RE FAR TOO EASY to ATTACK"),
        .speechLose = COMPOUND_STRING("WELL WELL… I SURRENDER ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Weston
    },
    [FRONTIER_TRAINER_JASPER] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("JASPER"),
        .speechBefore = COMPOUND_STRING("I'm NOT OLD I'm SKILLED!"),
        .speechWin = COMPOUND_STRING("SKILLED that's what I AM!"),
        .speechLose = COMPOUND_STRING("I'm SHOCKED! DOWN I GO"),
        .monSet = gBattleFrontierTrainerMons_Jasper
    },
    [FRONTIER_TRAINER_NADIA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("NADIA"),
        .speechBefore = COMPOUND_STRING("YOU CAN'T BEAT ME DOWN!"),
        .speechWin = COMPOUND_STRING("HAH! I BEAT YOU"),
        .speechLose = COMPOUND_STRING("I'm EC_MOVE2(BEAT_UP) AND DOWNCAST…"),
        .monSet = gBattleFrontierTrainerMons_Nadia
    },
    [FRONTIER_TRAINER_MIRANDA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("MIRANDA"),
        .speechBefore = COMPOUND_STRING("WELL WELL LET_S START"),
        .speechWin = COMPOUND_STRING("what? DONE SO SOON?"),
        .speechLose = COMPOUND_STRING("WELL I SEE THAT I'm TOO_WEAK"),
        .monSet = gBattleFrontierTrainerMons_Miranda
    },
    [FRONTIER_TRAINER_EMMA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("EMMA"),
        .speechBefore = COMPOUND_STRING("I've BEEN HEARING ABOUT YOU"),
        .speechWin = COMPOUND_STRING("I THINK I've MISHEARD THINGS"),
        .speechLose = COMPOUND_STRING("what I've BEEN HEARING IS RIGHT"),
        .monSet = gBattleFrontierTrainerMons_Emma
    },
    [FRONTIER_TRAINER_DESERT_TR5_HIKERO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("ROLANDO"),
        .speechBefore = COMPOUND_STRING("I'm A SUPER POKEMON HERO!"),
        .speechWin = COMPOUND_STRING("WAS THAT ENOUGH FOR YOU?"),
        .speechLose = COMPOUND_STRING("YOU SHOULD NOT BEAT A HERO"),
        .monSet = gBattleFrontierTrainerMons_Rolando
    },
    [FRONTIER_TRAINER_DESERT_TR7_PICNICKER3LY] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("STANLY"),
        .speechBefore = COMPOUND_STRING("THIS SHOULD BE AN EASY MATCH"),
        .speechWin = COMPOUND_STRING("IT REALLY WAS EASY"),
        .speechLose = COMPOUND_STRING("ARE YOU HAPPY NOW?"),
        .monSet = gBattleFrontierTrainerMons_Stanly
    },
    [FRONTIER_TRAINER_DARIO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("DARIO"),
        .speechBefore = COMPOUND_STRING("MY EC_MOVE2(FORESIGHT) SAYS I WILL WIN"),
        .speechWin = COMPOUND_STRING("MY EC_MOVE2(FORESIGHT) HAS BEEN PERFECT"),
        .speechLose = COMPOUND_STRING("I DIDN_T SEE THIS EC_MOVE(REVERSAL) ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Dario
    },
    [FRONTIER_TRAINER_KARLEE] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("KARLEE"),
        .speechBefore = COMPOUND_STRING("SOMETHING GOOD WILL COME OF THIS"),
        .speechWin = COMPOUND_STRING("YOU SEE? FANTASTIC!"),
        .speechLose = COMPOUND_STRING("THAT SOMETHING GOOD WENT to YOU"),
        .monSet = gBattleFrontierTrainerMons_Karlee
    },
    [FRONTIER_TRAINER_JAYLIN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("JAYLIN"),
        .speechBefore = COMPOUND_STRING("EVERY TRAINER HAS BEEN TOO_WEAK ELLIPSIS"),
        .speechWin = COMPOUND_STRING("IT_S MAKING ME EC_MOVE(YAWN) THAT BATTLE"),
        .speechLose = COMPOUND_STRING("I SLEPT AND SO I LOST"),
        .monSet = gBattleFrontierTrainerMons_Jaylin
    },
    [FRONTIER_TRAINER_INGRID] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("INGRID"),
        .speechBefore = COMPOUND_STRING("I'm NOT A VERY MEAN TRAINER"),
        .speechWin = COMPOUND_STRING("WASN_T THAT A GOOD MATCH?"),
        .speechLose = COMPOUND_STRING("I LOST CAUSE YOU'RE MEAN ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Ingrid
    },
    [FRONTIER_TRAINER_DELILAH] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("DELILAH"),
        .speechBefore = COMPOUND_STRING("DON_T EC_MOVE(GRUDGE) ME If I win OK_QUES"),
        .speechWin = COMPOUND_STRING("I'm SORRY to SEE YOU ANGRY"),
        .speechLose = COMPOUND_STRING("I HAVE A EC_MOVE(GRUDGE) WITH YOU"),
        .monSet = gBattleFrontierTrainerMons_Delilah
    },
    [FRONTIER_TRAINER_CARLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("CARLY"),
        .speechBefore = COMPOUND_STRING("I WILL SCATTER SOME EC_MOVE2(POISON_POWDER) ABOUT"),
        .speechWin = COMPOUND_STRING("IT_S SCARY how MY STRATEGY WORKS"),
        .speechLose = COMPOUND_STRING("I DISLIKE YOU AND YOUR POKEMON"),
        .monSet = gBattleFrontierTrainerMons_Carly
    },
    [FRONTIER_TRAINER_LEXIE] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("LEXIE"),
        .speechBefore = COMPOUND_STRING("WANT to SEE SCARY POKEMON?"),
        .speechWin = COMPOUND_STRING("WASN_T THAT SCARY EH_QUES"),
        .speechLose = COMPOUND_STRING("YOU'RE MORE SCARY THAN MY POKEMON"),
        .monSet = gBattleFrontierTrainerMons_Lexie
    },
    [FRONTIER_TRAINER_MILLER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MILLER"),
        .speechBefore = COMPOUND_STRING("HELLO? HELLO QUES_EXCL"),
        .speechWin = COMPOUND_STRING("HELLO MOTHER! I WON!"),
        .speechLose = COMPOUND_STRING("MY PHONE ISN_T WORKING…"),
        .monSet = gBattleFrontierTrainerMons_Miller
    },
    [FRONTIER_TRAINER_MARV] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("MARV"),
        .speechBefore = COMPOUND_STRING("YOU CAN lose YOUR EC_MOVE(SWAGGER) NOW"),
        .speechWin = COMPOUND_STRING("THERE IS NO EC_MOVE(SWAGGER) LEFT EH_QUES"),
        .speechLose = COMPOUND_STRING("GO ON EC_MOVE(SWAGGER) ALL YOU WANT"),
        .monSet = gBattleFrontierTrainerMons_Marv
    },
    [FRONTIER_TRAINER_LAYTON] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("LAYTON"),
        .speechBefore = COMPOUND_STRING("I KNOW I'm TOTALLY COOL!"),
        .speechWin = COMPOUND_STRING("YOU CAN LOOK UP to ME"),
        .speechLose = COMPOUND_STRING("YOU'RE COOL! NO REALLY!"),
        .monSet = gBattleFrontierTrainerMons_Layton
    },
    [FRONTIER_TRAINER_BROOKS] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("BROOKS"),
        .speechBefore = COMPOUND_STRING("THIS IS A HIGH LEVEL BATTLE"),
        .speechWin = COMPOUND_STRING("THAT_WAS HIGH LEVEL AND EXCITING TOO"),
        .speechLose = COMPOUND_STRING("YOU'RE TOO HIGH IN LEVEL ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Brooks
    },
    [FRONTIER_TRAINER_GREGORY] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("GREGORY"),
        .speechBefore = COMPOUND_STRING("I'm NOT THAT OLD YET"),
        .speechWin = COMPOUND_STRING("WHO SAYS I'm TOO OLD?"),
        .speechLose = COMPOUND_STRING("PLEASE I'm REALLY NOT THAT OLD"),
        .monSet = gBattleFrontierTrainerMons_Gregory
    },
    [FRONTIER_TRAINER_REESE] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("REESE"),
        .speechBefore = COMPOUND_STRING("I've A COUPLE THINGS"),
        .speechWin = COMPOUND_STRING("DON_T DIET PLAY SPORTS INSTEAD"),
        .speechLose = COMPOUND_STRING("INSTEAD OF TELEVISION GET A BOOK"),
        .monSet = gBattleFrontierTrainerMons_Reese
    },
    [FRONTIER_TRAINER_MASON] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("MASON"),
        .speechBefore = COMPOUND_STRING("PLEASE DON_T MAKE THIS SCARY"),
        .speechWin = COMPOUND_STRING("THANK_YOU… I'm HAPPY NOW"),
        .speechLose = COMPOUND_STRING("I'm DISAPPOINTED…"),
        .monSet = gBattleFrontierTrainerMons_Mason
    },
    [FRONTIER_TRAINER_TOBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("TOBY"),
        .speechBefore = COMPOUND_STRING("LISTEN UP I ALWAYS WIN"),
        .speechWin = COMPOUND_STRING("I'm A GENIUS OR what?"),
        .speechLose = COMPOUND_STRING("I CAN BEAT YOU AT SMARTNESS"),
        .monSet = gBattleFrontierTrainerMons_Toby
    },
    [FRONTIER_TRAINER_DOROTHY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("DOROTHY"),
        .speechBefore = COMPOUND_STRING("THE SPORTS WORLD SHOULD ACCEPT POKEMON"),
        .speechWin = COMPOUND_STRING("THANK_YOU! THAT WIN WAS REFRESHING"),
        .speechLose = COMPOUND_STRING("THANK_YOU! THAT LOSS WAS REFRESHING"),
        .monSet = gBattleFrontierTrainerMons_Dorothy
    },
    [FRONTIER_TRAINER_PIPER] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("PIPER"),
        .speechBefore = COMPOUND_STRING("COME_ON YOU NEED A SPEED_BOOST?"),
        .speechWin = COMPOUND_STRING("YOU NEED to Show MORE GUTS"),
        .speechLose = COMPOUND_STRING("OH YOU!"),
        .monSet = gBattleFrontierTrainerMons_Piper
    },
    [FRONTIER_TRAINER_FINN] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("FINN"),
        .speechBefore = COMPOUND_STRING("NOT ANOTHER TRAINER BATTLE…"),
        .speechWin = COMPOUND_STRING("WON_T THIS EVER END?"),
        .speechLose = COMPOUND_STRING("I FINALLY GET to EC_MOVE2(REST) A_LITTLE"),
        .monSet = gBattleFrontierTrainerMons_Finn
    },
    [FRONTIER_TRAINER_SAMIR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("SAMIR"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(DIVE) BELOW THE EC_MOVE2(SURF)!"),
        .speechWin = COMPOUND_STRING("YAHOO TAKE A EC_MOVE2(DIVE) YOU!"),
        .speechLose = COMPOUND_STRING("I'm going to SINK…"),
        .monSet = gBattleFrontierTrainerMons_Samir
    },
    [FRONTIER_TRAINER_FIONA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("FIONA"),
        .speechBefore = COMPOUND_STRING("DID YOU LIMBER UP BEFORE?"),
        .speechWin = COMPOUND_STRING("YOU NEED to BE MORE READY"),
        .speechLose = COMPOUND_STRING("BEING LIMBER DIDN_T WORK FOR ME"),
        .monSet = gBattleFrontierTrainerMons_Fiona
    },
    [FRONTIER_TRAINER_GLORIA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("GLORIA"),
        .speechBefore = COMPOUND_STRING("I LIKE to ATTACK WITH SUCTION_CUPS"),
        .speechWin = COMPOUND_STRING("GIGGLE… IT_S OVER FOR YOU"),
        .speechLose = COMPOUND_STRING("I DON_T GET how SUCTION_CUPS WORK"),
        .monSet = gBattleFrontierTrainerMons_Gloria
    },
    [FRONTIER_TRAINER_NICO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("NICO"),
        .speechBefore = COMPOUND_STRING("LIKE A EC_MOVE(SONIC_BOOM) I_VE_ARRIVED"),
        .speechWin = COMPOUND_STRING("SORRY to MAKE YOU SO DOWNCAST"),
        .speechLose = COMPOUND_STRING("I'm going WITH A EC_MOVE2(SUPERSONIC) SPEED_BOOST"),
        .monSet = gBattleFrontierTrainerMons_Nico
    },
    [FRONTIER_TRAINER_JEREMY] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("JEREMY"),
        .speechBefore = COMPOUND_STRING("A POKEMON MASTER that's MY DREAM"),
        .speechWin = COMPOUND_STRING("MY DREAM ISN_T FAR OFF!"),
        .speechLose = COMPOUND_STRING("what I DREAM ISN_T HAPPENING ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Jeremy
    },
    [FRONTIER_TRAINER_CAITLIN] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("CAITLIN"),
        .speechBefore = COMPOUND_STRING("DON_T YOU THINK I'm CUTE?"),
        .speechWin = COMPOUND_STRING("THERE IS MORE TO_ME THAN CUTENESS"),
        .speechLose = COMPOUND_STRING("MY CUTE_CHARM doesn't EC_MOVE2(ATTRACT) YOU?"),
        .monSet = gBattleFrontierTrainerMons_Caitlin
    },
    [FRONTIER_TRAINER_REENA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("REENA"),
        .speechBefore = COMPOUND_STRING("I'm ALWAYS HAPPY HAPPY HAPPY!"),
        .speechWin = COMPOUND_STRING("OH YAY! YAHOO FOR ME"),
        .speechLose = COMPOUND_STRING("YAHOO! I'm HAPPY FOR YOU"),
        .monSet = gBattleFrontierTrainerMons_Reena
    },
    [FRONTIER_TRAINER_AVERY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("AVERY"),
        .speechBefore = COMPOUND_STRING("I've GOT A_LOT OF BUG POKEMON"),
        .speechWin = COMPOUND_STRING("MY BUG POKEMON ARE ALL UNBELIEVABLE"),
        .speechLose = COMPOUND_STRING("MY BUG POKEMON ARE ALL UPSIDE_DOWN"),
        .monSet = gBattleFrontierTrainerMons_Avery
    },
    [FRONTIER_TRAINER_LIAM] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("LIAM"),
        .speechBefore = COMPOUND_STRING("WE REALLY DISLIKE FIRE AND FLYING"),
        .speechWin = COMPOUND_STRING("BUG POKEMON aren't BAD HEY_QUES"),
        .speechLose = COMPOUND_STRING("YOU KNOW what WE DISLIKE HEY_QUES"),
        .monSet = gBattleFrontierTrainerMons_Liam
    },
    [FRONTIER_TRAINER_THEO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("THEO"),
        .speechBefore = COMPOUND_STRING("FISHING IS MY CHOICE IN LIFE"),
        .speechWin = COMPOUND_STRING("WATER POKEMON EC_MOVE2(ATTRACT) ME WITHOUT END"),
        .speechLose = COMPOUND_STRING("DON_T COUNT_ON THAT HAPPENING ANOTHER TIME"),
        .monSet = gBattleFrontierTrainerMons_Theo
    },
    [FRONTIER_TRAINER_BAILEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("BAILEY"),
        .speechBefore = COMPOUND_STRING("I'm AN ADULT I BATTLE EASY"),
        .speechWin = COMPOUND_STRING("I'm AN ADULT I EC_MOVE2(SWALLOW) JOY"),
        .speechLose = COMPOUND_STRING("I'm AN ADULT I EC_MOVE2(SWALLOW) EC_MOVE2(FRUSTRATION)"),
        .monSet = gBattleFrontierTrainerMons_Bailey
    },
    [FRONTIER_TRAINER_HUGO] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("HUGO"),
        .speechBefore = COMPOUND_STRING("I TRY THE BEST I CAN"),
        .speechWin = COMPOUND_STRING("I CAN_WIN IF I TRY ENOUGH"),
        .speechLose = COMPOUND_STRING("I DID TRY DIDN_T I?"),
        .monSet = gBattleFrontierTrainerMons_Hugo
    },
    [FRONTIER_TRAINER_BRYCE] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("BRYCE"),
        .speechBefore = COMPOUND_STRING("I_WAS ON VACATION UNTIL ONLY YESTERDAY"),
        .speechWin = COMPOUND_STRING("I HAVEN_T LOST MY SKILL YET"),
        .speechLose = COMPOUND_STRING("that's IT… I NEED SLEEP"),
        .monSet = gBattleFrontierTrainerMons_Bryce
    },
    [FRONTIER_TRAINER_GIDEON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("GIDEON"),
        .speechBefore = COMPOUND_STRING("what_S_UP_QUES YOU THINK I'm SCARY?"),
        .speechWin = COMPOUND_STRING("I'm COOL but NOT SCARY!"),
        .speechLose = COMPOUND_STRING("LOOK AT MY FABULOUS FASHION SENSE"),
        .monSet = gBattleFrontierTrainerMons_Gideon
    },
    [FRONTIER_TRAINER_TRISTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("TRISTON"),
        .speechBefore = COMPOUND_STRING("I WOULD RATHER LOOK AT POKEMON"),
        .speechWin = COMPOUND_STRING("HUH_QUES YOU MEAN I WON QUES_EXCL"),
        .speechLose = COMPOUND_STRING("SEE? I ALWAYS lose"),
        .monSet = gBattleFrontierTrainerMons_Triston
    },
    [FRONTIER_TRAINER_CHARLES] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("CHARLES"),
        .speechBefore = COMPOUND_STRING("IT_S HOPELESS to EC_MOVE2(STRUGGLE) WITH ME"),
        .speechWin = COMPOUND_STRING("EC_MOVE(SUBMISSION) WAS YOUR ONLY CHOICE"),
        .speechLose = COMPOUND_STRING("I'm going DOWN DOWN DOWN!"),
        .monSet = gBattleFrontierTrainerMons_Charles
    },
    [FRONTIER_TRAINER_RAYMOND] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("RAYMOND"),
        .speechBefore = COMPOUND_STRING("WANT to HEAR MY SONG?"),
        .speechWin = COMPOUND_STRING("SATISFIED that's what I AM!"),
        .speechLose = COMPOUND_STRING("SATISFIED IS what I CAN'T BE"),
        .monSet = gBattleFrontierTrainerMons_Raymond
    },
    [FRONTIER_TRAINER_DIRK] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("DIRK"),
        .speechBefore = COMPOUND_STRING("FLYING POKEMON ARE ABOVE THE EC_MOVE2(REST)"),
        .speechWin = COMPOUND_STRING("YOU CAN'T_WIN! FLYING POKEMON RULE"),
        .speechLose = COMPOUND_STRING("aren't THERE MORE FLYING POKEMON?"),
        .monSet = gBattleFrontierTrainerMons_Dirk
    },
    [FRONTIER_TRAINER_HAROLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("HAROLD"),
        .speechBefore = COMPOUND_STRING("MY POKEMON APPEAL to YOU?"),
        .speechWin = COMPOUND_STRING("YOU DO LIKE MY POKEMON?"),
        .speechLose = COMPOUND_STRING("SO YOU DISLIKE MY POKEMON?"),
        .monSet = gBattleFrontierTrainerMons_Harold
    },
    [FRONTIER_TRAINER_OMAR] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("OMAR"),
        .speechBefore = COMPOUND_STRING("LET_ME_WIN IN EC_MOVE(RETURN) FOR A EC_MOVE2(PRESENT)"),
        .speechWin = COMPOUND_STRING("HERE YOU ARE SOME EC_MOVE2(TOXIC) SWEETS"),
        .speechLose = COMPOUND_STRING("YOUR EC_MOVE2(PRESENT)? what FOR QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Omar
    },
    [FRONTIER_TRAINER_PETER] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("PETER"),
        .speechBefore = COMPOUND_STRING("I BRAG ABOUT MY HAPPINESS OK_QUES"),
        .speechWin = COMPOUND_STRING("YOU HAVE to LISTEN TO_ME BRAG"),
        .speechLose = COMPOUND_STRING("I'm DISAPPOINTED YOU WON_T LISTEN TO_ME"),
        .monSet = gBattleFrontierTrainerMons_Peter
    },
    [FRONTIER_TRAINER_DEV] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("DEV"),
        .speechBefore = COMPOUND_STRING("COME_ON LET_S GET A MOVE ON"),
        .speechWin = COMPOUND_STRING("I GET to NAP AFTER THAT"),
        .speechLose = COMPOUND_STRING("I NEED to NAP AFTER THAT"),
        .monSet = gBattleFrontierTrainerMons_Dev
    },
    [FRONTIER_TRAINER_COREY] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("COREY"),
        .speechBefore = COMPOUND_STRING("LET_S TEACH YOU how TOUGH I AM"),
        .speechWin = COMPOUND_STRING("LOOK AT ME MAKE A EC_MOVE(BRICK_BREAK)"),
        .speechLose = COMPOUND_STRING("MY EC_MOVE2(FRUSTRATION) IS CLOSE to EC_MOVE2(ERUPTION)"),
        .monSet = gBattleFrontierTrainerMons_Corey
    },
    [FRONTIER_TRAINER_ANDRE] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("ANDRE"),
        .speechBefore = COMPOUND_STRING("NOW THIS IS A PERFECT FLAME_BODY"),
        .speechWin = COMPOUND_STRING("LOOK AT MY FIERY DANCE!"),
        .speechLose = COMPOUND_STRING("YOU WANT AN EC_MOVE2(EXPLOSION) HERE?"),
        .monSet = gBattleFrontierTrainerMons_Andre
    },
    [FRONTIER_TRAINER_FERRIS] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("FERRIS"),
        .speechBefore = COMPOUND_STRING("I'm NO_1 IN THE OLD CLASS"),
        .speechWin = COMPOUND_STRING("NO_1 that's what I AM!"),
        .speechLose = COMPOUND_STRING("I'm NOT NO_1 ANY MORE ELLIPSIS"),
        .monSet = gBattleFrontierTrainerMons_Ferris
    },
    [FRONTIER_TRAINER_ALIVIA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("ALIVIA"),
        .speechBefore = COMPOUND_STRING("I'm FEELING GIDDY SO SHOULD YOU"),
        .speechWin = COMPOUND_STRING("IT WAS ALL TOGETHER TOO EASY"),
        .speechLose = COMPOUND_STRING("I WILL GIDDY UP AND AWAY"),
        .monSet = gBattleFrontierTrainerMons_Alivia
    },
    [FRONTIER_TRAINER_PAIGE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("PAIGE"),
        .speechBefore = COMPOUND_STRING("LET_S ENJOY OUR BATTLE TOGETHER"),
        .speechWin = COMPOUND_STRING("THAT_S_IT_EXCL THANK_YOU VERY MUCH"),
        .speechLose = COMPOUND_STRING("THAT_S_IT_EXCL DO GO ON"),
        .monSet = gBattleFrontierTrainerMons_Paige
    },
    [FRONTIER_TRAINER_ANYA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("ANYA"),
        .speechBefore = COMPOUND_STRING("I DISLIKE OH SO PRETTY FASHION"),
        .speechWin = COMPOUND_STRING("FASHION SHOULD MATCH THE PERSON"),
        .speechLose = COMPOUND_STRING("PRETTY COULD BE GOOD"),
        .monSet = gBattleFrontierTrainerMons_Anya
    },
    [FRONTIER_TRAINER_DAWN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("DAWN"),
        .speechBefore = COMPOUND_STRING("I GO ALL OUT!"),
        .speechWin = COMPOUND_STRING("DON_T BE A BABY!"),
        .speechLose = COMPOUND_STRING("YOU WON! MOVE ON!"),
        .monSet = gBattleFrontierTrainerMons_Dawn
    },
    [FRONTIER_TRAINER_ABBY] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("ABBY"),
        .speechBefore = COMPOUND_STRING("I LIKE A TRAINER that's REFRESHING"),
        .speechWin = COMPOUND_STRING("VICTORY HAS A EC_MOVE(SWEET_SCENT)!"),
        .speechLose = COMPOUND_STRING("what AN AWFUL STENCH!"),
        .monSet = gBattleFrontierTrainerMons_Abby
    },
    [FRONTIER_TRAINER_GRETEL] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("GRETEL"),
        .speechBefore = COMPOUND_STRING("I CAUSE EC_MOVE(OUTRAGE) AS A TRAINER"),
        .speechWin = COMPOUND_STRING("IT_S ONLY NATURAL SEE YA BYE_BYE!"),
        .speechLose = COMPOUND_STRING("IT_S HARD to BELIEVE but CONGRATS"),
        .monSet = gBattleFrontierTrainerMons_Gretel
    }
};
