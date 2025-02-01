const struct BattleFrontierTrainer gBattleFrontierTrainers[FRONTIER_TRAINERS_COUNT] =
{
    [FRONTIER_TRAINER_BRADY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Brady"),
        .speechBefore = COMPOUND_STRING("I am never going to lose!"),
        .speechWin    = COMPOUND_STRING("I am strong, aren't I?"),
        .speechLose   = COMPOUND_STRING("What?\nBut how?"),
        .monSet = gBattleFrontierTrainerMons_Brady
    },
    [FRONTIER_TRAINER_CONNER] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Conner"),
        .speechBefore = COMPOUND_STRING("Losing doesn't bug me!"),
        .speechWin    = COMPOUND_STRING("A win is just awesome!"),
        .speechLose   = COMPOUND_STRING("Darn… Losing does bug me."),
        .monSet = gBattleFrontierTrainerMons_Conner
    },
    [FRONTIER_TRAINER_BRADLEY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Bradley"),
        .speechBefore = COMPOUND_STRING("Hey there!\nYou're my opponent today."),
        .speechWin    = COMPOUND_STRING("Hahaha!\nSee ya later!"),
        .speechLose   = COMPOUND_STRING("Tomorrow is when we\nreally battle!"),
        .monSet = gBattleFrontierTrainerMons_Bradley
    },
    [FRONTIER_TRAINER_CYBIL] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Cybil"),
        .speechBefore = COMPOUND_STRING("You're really not very scary at all."),
        .speechWin    = COMPOUND_STRING("It's sad to see you struggle."),
        .speechLose   = COMPOUND_STRING("This can't be happening to me!"),
        .monSet = gBattleFrontierTrainerMons_Cybil
    },
    [FRONTIER_TRAINER_RODETTE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Rodette"),
        .speechBefore = COMPOUND_STRING("Oh this is so exciting!"),
        .speechWin    = COMPOUND_STRING("It's incredible how strong I am!"),
        .speechLose   = COMPOUND_STRING("Oh dear… I am just no good."),
        .monSet = gBattleFrontierTrainerMons_Rodette
    },
    [FRONTIER_TRAINER_PEGGY] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Peggy"),
        .speechBefore = COMPOUND_STRING("Get ready to be destroyed!"),
        .speechWin    = COMPOUND_STRING("HAHAHA!! I am lolling!"),
        .speechLose   = COMPOUND_STRING("I am feeling sad thanks to you."),
        .monSet = gBattleFrontierTrainerMons_Peggy
    },
    [FRONTIER_TRAINER_KEITH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("Keith"),
        .speechBefore = COMPOUND_STRING("I don't just study, you know."),
        .speechWin    = COMPOUND_STRING("You don't study enough…"),
        .speechLose   = COMPOUND_STRING("I need to study more…"),
        .monSet = gBattleFrontierTrainerMons_Keith
    },
    [FRONTIER_TRAINER_GRAYSON] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("Grayson"),
        .speechBefore = COMPOUND_STRING("A Pokémon battle isn't child's play!"),
        .speechWin    = COMPOUND_STRING("You're done, aren't you?"),
        .speechLose   = COMPOUND_STRING("We were like toys to you."),
        .monSet = gBattleFrontierTrainerMons_Grayson
    },
    [FRONTIER_TRAINER_GLENN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("Glenn"),
        .speechBefore = COMPOUND_STRING("I would be cool if I win."),
        .speechWin    = COMPOUND_STRING("Cool! That's what I am."),
        .speechLose   = COMPOUND_STRING("I am not going to be cool."),
        .monSet = gBattleFrontierTrainerMons_Glenn
    },
    [FRONTIER_TRAINER_LILIANA] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("Liliana"),
        .speechBefore = COMPOUND_STRING("I won't give up until I win."),
        .speechWin    = COMPOUND_STRING("There is no surrender in me"),
        .speechLose   = COMPOUND_STRING("That's it… I give up…"),
        .monSet = gBattleFrontierTrainerMons_Liliana
    },
    [FRONTIER_TRAINER_ELISE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("Elise"),
        .speechBefore = COMPOUND_STRING("My strategy is from my father."),
        .speechWin    = COMPOUND_STRING("I win! Father I've won!"),
        .speechLose   = COMPOUND_STRING("Forgive me father for I've lost."),
        .monSet = gBattleFrontierTrainerMons_Elise
    },
    [FRONTIER_TRAINER_ZOEY] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("Zoey"),
        .speechBefore = COMPOUND_STRING("Please battle like you mean it."),
        .speechWin    = COMPOUND_STRING("Thank you!!\nThank you so much!"),
        .speechLose   = COMPOUND_STRING("Were you really being serious?"),
        .monSet = gBattleFrontierTrainerMons_Zoey
    },
    [FRONTIER_TRAINER_MANUEL] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("Manuel"),
        .speechBefore = COMPOUND_STRING("Me lose? That's preposterous!"),
        .speechWin    = COMPOUND_STRING("Naturally I win."),
        .speechLose   = COMPOUND_STRING("Waah! I lost, mother!"),
        .monSet = gBattleFrontierTrainerMons_Manuel
    },
    [FRONTIER_TRAINER_RUSS] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("Russ"),
        .speechBefore = COMPOUND_STRING("They all want my fabulous Pokémon."),
        .speechWin    = COMPOUND_STRING("I will have a Pokémon party."),
        .speechLose   = COMPOUND_STRING("How could you do that?"),
        .monSet = gBattleFrontierTrainerMons_Russ
    },
    [FRONTIER_TRAINER_DUSTIN] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("Dustin"),
        .speechBefore = COMPOUND_STRING("I really like cool Pokémon."),
        .speechWin    = COMPOUND_STRING("I like myself when I win!"),
        .speechLose   = COMPOUND_STRING("I like myself if I lose too."),
        .monSet = gBattleFrontierTrainerMons_Dustin
    },
    [FRONTIER_TRAINER_TINA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("Tina"),
        .speechBefore = COMPOUND_STRING("If I win you can have a sweet kiss."),
        .speechWin    = COMPOUND_STRING("Here it is your,\nsweet kiss from my Jynx."),
        .speechLose   = COMPOUND_STRING("You want a swift mega kick instead?"),
        .monSet = gBattleFrontierTrainerMons_Tina
    },
    [FRONTIER_TRAINER_GILLIAN1] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("Gillian"),
        .speechBefore = COMPOUND_STRING("The gourmet thing is so yesterday."),
        .speechWin    = COMPOUND_STRING("Pokémon never go out of fashion."),
        .speechLose   = COMPOUND_STRING("Losing doesn't disappoint me."),
        .monSet = gBattleFrontierTrainerMons_Gillian
    },
    [FRONTIER_TRAINER_ZOE] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("Zoe"),
        .speechBefore = COMPOUND_STRING("I haven't a worry at all."),
        .speechWin    = COMPOUND_STRING("Life is always good to me."),
        .speechLose   = COMPOUND_STRING("I worry about my Pokémon skill."),
        .monSet = gBattleFrontierTrainerMons_Zoe
    },
    [FRONTIER_TRAINER_CHEN] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("Chen"),
        .speechBefore = COMPOUND_STRING("I am totally ready to rock today!"),
        .speechWin    = COMPOUND_STRING("I am ready to go on!"),
        .speechLose   = COMPOUND_STRING("I've lost my focus, energy,\nand toughness."),
        .monSet = gBattleFrontierTrainerMons_Chen
    },
    [FRONTIER_TRAINER_AL] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("Al"),
        .speechBefore = COMPOUND_STRING("Your look says you're really tough."),
        .speechWin    = COMPOUND_STRING("It's me who is really tough."),
        .speechLose   = COMPOUND_STRING("I am right! You're really tough."),
        .monSet = gBattleFrontierTrainerMons_Al
    },
    [FRONTIER_TRAINER_MITCH] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("Mitch"),
        .speechBefore = COMPOUND_STRING("Mother Nature is my ally!"),
        .speechWin    = COMPOUND_STRING("Was that enough for you?"),
        .speechLose   = COMPOUND_STRING("Mother Nature didn't let me win?"),
        .monSet = gBattleFrontierTrainerMons_Mitch
    },
    [FRONTIER_TRAINER_ANNE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("Anne"),
        .speechBefore = COMPOUND_STRING("I can't wait.\nLet's battle now!"),
        .speechWin    = COMPOUND_STRING("My happiness is overwhelming!"),
        .speechLose   = COMPOUND_STRING("You've destroyed my happiness…"),
        .monSet = gBattleFrontierTrainerMons_Anne
    },
    [FRONTIER_TRAINER_ALIZE] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("Alize"),
        .speechBefore = COMPOUND_STRING("Cute and awfully strong, that's me."),
        .speechWin    = COMPOUND_STRING("Yup, I am cute and awfully strong."),
        .speechLose   = COMPOUND_STRING("I am weak… But I am cute."),
        .monSet = gBattleFrontierTrainerMons_Alize
    },
    [FRONTIER_TRAINER_LAUREN] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("Lauren"),
        .speechBefore = COMPOUND_STRING("I am old, but I am also good."),
        .speechWin    = COMPOUND_STRING("I said I was old but good."),
        .speechLose   = COMPOUND_STRING("What a weird dream that was!"),
        .monSet = gBattleFrontierTrainerMons_Lauren
    },
    [FRONTIER_TRAINER_KIPP] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("Kipp"),
        .speechBefore = COMPOUND_STRING("If I win I am going to go surf."),
        .speechWin    = COMPOUND_STRING("Yeah! I am off to surf!"),
        .speechLose   = COMPOUND_STRING("Oh no! a whirlpool!"),
        .monSet = gBattleFrontierTrainerMons_Kipp
    },
    [FRONTIER_TRAINER_JASON] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("Jason"),
        .speechBefore = COMPOUND_STRING("Teach me a good strategy."),
        .speechWin    = COMPOUND_STRING("That was your good strategy?!"),
        .speechLose   = COMPOUND_STRING("Wow, that is an awesome strategy!"),
        .monSet = gBattleFrontierTrainerMons_Jason
    },
    [FRONTIER_TRAINER_JOHN] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("John"),
        .speechBefore = COMPOUND_STRING("I am a pretty new trainer."),
        .speechWin    = COMPOUND_STRING("I am new but I won!"),
        .speechLose   = COMPOUND_STRING("I am new.\nSo what if I lose?"),
        .monSet = gBattleFrontierTrainerMons_John
    },
    [FRONTIER_TRAINER_ANN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("Ann"),
        .speechBefore = COMPOUND_STRING("It's so exciting. It really is!"),
        .speechWin    = COMPOUND_STRING("I am so happy I can cry."),
        .speechLose   = COMPOUND_STRING("I am so sad I will cry."),
        .monSet = gBattleFrontierTrainerMons_Ann
    },
    [FRONTIER_TRAINER_EILEEN] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("Eileen"),
        .speechBefore = COMPOUND_STRING("Let's pretend I am an adult, OK?"),
        .speechWin    = COMPOUND_STRING("So this is an adult feeling."),
        .speechLose   = COMPOUND_STRING("An adult can't beat you?"),
        .monSet = gBattleFrontierTrainerMons_Eileen
    },
    [FRONTIER_TRAINER_CARLIE] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("Carlie"),
        .speechBefore = COMPOUND_STRING("My summer vacation is for Pokémon."),
        .speechWin    = COMPOUND_STRING("My summer vacation will be awesome."),
        .speechLose   = COMPOUND_STRING("I can't win like this…"),
        .monSet = gBattleFrontierTrainerMons_Carlie
    },
    [FRONTIER_TRAINER_GORDON] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("Gordon"),
        .speechBefore = COMPOUND_STRING("Victory will come to me!"),
        .speechWin    = COMPOUND_STRING("Oh yeah! I really won!"),
        .speechLose   = COMPOUND_STRING("Nothing is working out for me."),
        .monSet = gBattleFrontierTrainerMons_Gordon
    },
    [FRONTIER_TRAINER_AYDEN] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("Ayden"),
        .speechBefore = COMPOUND_STRING("Come on, I need a hot battle."),
        .speechWin    = COMPOUND_STRING("I need water to cool down."),
        .speechLose   = COMPOUND_STRING("You have me feeling ice cold."),
        .monSet = gBattleFrontierTrainerMons_Ayden
    },
    [FRONTIER_TRAINER_MARCO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("Marco"),
        .speechBefore = COMPOUND_STRING("I surf in the winter too."),
        .speechWin    = COMPOUND_STRING("I will go surf right now."),
        .speechLose   = COMPOUND_STRING("I will beat up my surf board."),
        .monSet = gBattleFrontierTrainerMons_Marco
    },
    [FRONTIER_TRAINER_CIERRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("Cierra"),
        .speechBefore = COMPOUND_STRING("I like to synchronize my swift swim."),
        .speechWin    = COMPOUND_STRING("My Pokémon synchronize with me."),
        .speechLose   = COMPOUND_STRING("I need to synchronize better…"),
        .monSet = gBattleFrontierTrainerMons_Cierra
    },
    [FRONTIER_TRAINER_MARCY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("Marcy"),
        .speechBefore = COMPOUND_STRING("I am a knockout you can't win!"),
        .speechWin    = COMPOUND_STRING("After all I am a knockout!"),
        .speechLose   = COMPOUND_STRING("That's not the knockout I mean."),
        .monSet = gBattleFrontierTrainerMons_Marcy
    },
    [FRONTIER_TRAINER_KATHY] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("Kathy"),
        .speechBefore = COMPOUND_STRING("I've won every match today!"),
        .speechWin    = COMPOUND_STRING("It's so great to win!"),
        .speechLose   = COMPOUND_STRING("Huh? I should not have lost."),
        .monSet = gBattleFrontierTrainerMons_Kathy
    },
    [FRONTIER_TRAINER_PEYTON] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Peyton"),
        .speechBefore = COMPOUND_STRING("I am never disappointed\nwith my Pokémon."),
        .speechWin    = COMPOUND_STRING("I am happy if we win together."),
        .speechLose   = COMPOUND_STRING("I adore my Pokémon more if I lose."),
        .monSet = gBattleFrontierTrainerMons_Peyton
    },
    [FRONTIER_TRAINER_JULIAN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Julian"),
        .speechBefore = COMPOUND_STRING("You adore your Pokémon, right?"),
        .speechWin    = COMPOUND_STRING("You're totally out of the question."),
        .speechLose   = COMPOUND_STRING("You do adore your Pokémon!"),
        .monSet = gBattleFrontierTrainerMons_Julian
    },
    [FRONTIER_TRAINER_QUINN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Quinn"),
        .speechBefore = COMPOUND_STRING("My Pokémon are but a dream."),
        .speechWin    = COMPOUND_STRING("This is a beautiful dream!"),
        .speechLose   = COMPOUND_STRING("This is an awful nightmare!"),
        .monSet = gBattleFrontierTrainerMons_Quinn
    },
    [FRONTIER_TRAINER_HAYLEE] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Haylee"),
        .speechBefore = COMPOUND_STRING("I don't know how I am feeling."),
        .speechWin    = COMPOUND_STRING("I am feeling overwhelming\njoy over this."),
        .speechLose   = COMPOUND_STRING("Destroyed is the way I am feeling."),
        .monSet = gBattleFrontierTrainerMons_Haylee
    },
    [FRONTIER_TRAINER_AMANDA] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Amanda"),
        .speechBefore = COMPOUND_STRING("I come from a trainer family."),
        .speechWin    = COMPOUND_STRING("I will treasure this win."),
        .speechLose   = COMPOUND_STRING("I want to go home right now."),
        .monSet = gBattleFrontierTrainerMons_Amanda
    },
    [FRONTIER_TRAINER_STACY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Stacy"),
        .speechBefore = COMPOUND_STRING("All Pokémon have\ntheir own cute charm."),
        .speechWin    = COMPOUND_STRING("You see what I mean?"),
        .speechLose   = COMPOUND_STRING("Should I not adore Pokémon?"),
        .monSet = gBattleFrontierTrainerMons_Stacy
    },
    [FRONTIER_TRAINER_RAFAEL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Rafael"),
        .speechBefore = COMPOUND_STRING("Come on! Let's see some spirit!"),
        .speechWin    = COMPOUND_STRING("That's it! That's the spirit!"),
        .speechLose   = COMPOUND_STRING("Well, so much for our spirit."),
        .monSet = gBattleFrontierTrainerMons_Rafael
    },
    [FRONTIER_TRAINER_OLIVER] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Oliver"),
        .speechBefore = COMPOUND_STRING("A genius, that's what I am!"),
        .speechWin    = COMPOUND_STRING("That's how a genius works!"),
        .speechLose   = COMPOUND_STRING("You're more a genius than I am."),
        .monSet = gBattleFrontierTrainerMons_Oliver
    },
    [FRONTIER_TRAINER_PAYTON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Payton"),
        .speechBefore = COMPOUND_STRING("I train from the egg up."),
        .speechWin    = COMPOUND_STRING("Well done!"),
        .speechLose   = COMPOUND_STRING("That was a soft-boiled loss…"),
        .monSet = gBattleFrontierTrainerMons_Payton
    },
    [FRONTIER_TRAINER_PAMELA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Pamela"),
        .speechBefore = COMPOUND_STRING("All Pokémon adore a kind trainer."),
        .speechWin    = COMPOUND_STRING("It's too bad you lost."),
        .speechLose   = COMPOUND_STRING("You're kind and you're also strong."),
        .monSet = gBattleFrontierTrainerMons_Pamela
    },
    [FRONTIER_TRAINER_ELIZA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Eliza"),
        .speechBefore = COMPOUND_STRING("I adore Pokémon like my children."),
        .speechWin    = COMPOUND_STRING("I am so happy for my Pokémon."),
        .speechLose   = COMPOUND_STRING("Oh dear I am so sorry about this."),
        .monSet = gBattleFrontierTrainerMons_Eliza
    },
    [FRONTIER_TRAINER_MARISA] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Marisa"),
        .speechBefore = COMPOUND_STRING("I promise to battle seriously."),
        .speechWin    = COMPOUND_STRING("Promise me you will do better."),
        .speechLose   = COMPOUND_STRING("Promise me another battle, please!"),
        .monSet = gBattleFrontierTrainerMons_Marisa
    },
    [FRONTIER_TRAINER_LEWIS] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("Lewis"),
        .speechBefore = COMPOUND_STRING("A little bug is scary? Hahaha!"),
        .speechWin    = COMPOUND_STRING("Look look! A scary bug!"),
        .speechLose   = COMPOUND_STRING("Oh, a bug isn't scary…"),
        .monSet = gBattleFrontierTrainerMons_Lewis
    },
    [FRONTIER_TRAINER_YOSHI] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("Yoshi"),
        .speechBefore = COMPOUND_STRING("Bug Pokémon make me\nfeel lovey-dovey."),
        .speechWin    = COMPOUND_STRING("Bug Pokémon are the best!"),
        .speechLose   = COMPOUND_STRING("You're ignorant about bug Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Yoshi
    },
    [FRONTIER_TRAINER_DESTIN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("Destin"),
        .speechBefore = COMPOUND_STRING("It's way too hot here."),
        .speechWin    = COMPOUND_STRING("I am about to overheat."),
        .speechLose   = COMPOUND_STRING("Please I need some water."),
        .monSet = gBattleFrontierTrainerMons_Destin
    },
    [FRONTIER_TRAINER_KEON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("Keon"),
        .speechBefore = COMPOUND_STRING("Forgive me but here I come!"),
        .speechWin    = COMPOUND_STRING("Forgive me for my overwhelming power."),
        .speechLose   = COMPOUND_STRING("I am sorry…"),
        .monSet = gBattleFrontierTrainerMons_Keon
    },
    [FRONTIER_TRAINER_STUART] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("Stuart"),
        .speechBefore = COMPOUND_STRING("I promise you a hot battle."),
        .speechWin    = COMPOUND_STRING("The master of cool, that's me."),
        .speechLose   = COMPOUND_STRING("I see I am not so cool."),
        .monSet = gBattleFrontierTrainerMons_Stuart
    },
    [FRONTIER_TRAINER_NESTOR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("Nestor"),
        .speechBefore = COMPOUND_STRING("Show me a really smooth move."),
        .speechWin    = COMPOUND_STRING("There was nothing smooth\nabout that."),
        .speechLose   = COMPOUND_STRING("You really are smooth!"),
        .monSet = gBattleFrontierTrainerMons_Nestor
    },
    [FRONTIER_TRAINER_DERRICK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Derrick"),
        .speechBefore = COMPOUND_STRING("Let's see you meditate like me."),
        .speechWin    = COMPOUND_STRING("How I meditate is just beautiful."),
        .speechLose   = COMPOUND_STRING("I will meditate for a calm mind."),
        .monSet = gBattleFrontierTrainerMons_Derrick
    },
    [FRONTIER_TRAINER_BRYSON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Bryson"),
        .speechBefore = COMPOUND_STRING("Poison Powder is in our\nCotton Spore move."),
        .speechWin    = COMPOUND_STRING("How do you like our Poison Powder?"),
        .speechLose   = COMPOUND_STRING("My Cotton Spore was useless."),
        .monSet = gBattleFrontierTrainerMons_Bryson
    },
    [FRONTIER_TRAINER_CLAYTON] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Clayton"),
        .speechBefore = COMPOUND_STRING("Huh? Where is it?"),
        .speechWin    = COMPOUND_STRING("Where is it? I've lost my Pokédex."),
        .speechLose   = COMPOUND_STRING("Where is it? I've lost my sense."),
        .monSet = gBattleFrontierTrainerMons_Clayton
    },
    [FRONTIER_TRAINER_TRENTON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Trenton"),
        .speechBefore = COMPOUND_STRING("Come over for some tasty water."),
        .speechWin    = COMPOUND_STRING("Mmm, do you want some?"),
        .speechLose   = COMPOUND_STRING("I got this tasty water shopping."),
        .monSet = gBattleFrontierTrainerMons_Trenton
    },
    [FRONTIER_TRAINER_JENSON] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Jenson"),
        .speechBefore = COMPOUND_STRING("My Pokémon will make you downcast."),
        .speechWin    = COMPOUND_STRING("Your Pokémon don't make the cut."),
        .speechLose   = COMPOUND_STRING("I am the trainer\nwho is feeling downcast."),
        .monSet = gBattleFrontierTrainerMons_Jenson
    },
    [FRONTIER_TRAINER_WESLEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Wesley"),
        .speechBefore = COMPOUND_STRING("Mew mew is how I cry."),
        .speechWin    = COMPOUND_STRING("Yes I know I am cute!"),
        .speechLose   = COMPOUND_STRING("Mew mew! Mew!!"),
        .monSet = gBattleFrontierTrainerMons_Wesley
    },
    [FRONTIER_TRAINER_ANTON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Anton"),
        .speechBefore = COMPOUND_STRING("Get ready for me to thrash."),
        .speechWin    = COMPOUND_STRING("Wahahaha! Sorry about that!"),
        .speechLose   = COMPOUND_STRING("It's a tough loss to swallow."),
        .monSet = gBattleFrontierTrainerMons_Anton
    },
    [FRONTIER_TRAINER_LAWSON] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Lawson"),
        .speechBefore = COMPOUND_STRING("I am young at heart!"),
        .speechWin    = COMPOUND_STRING("Not cool! Not at all."),
        .speechLose   = COMPOUND_STRING("I am old and feeling shaky…"),
        .monSet = gBattleFrontierTrainerMons_Lawson
    },
    [FRONTIER_TRAINER_SAMMY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Sammy"),
        .speechBefore = COMPOUND_STRING("My party is ready to rock!"),
        .speechWin    = COMPOUND_STRING("My party is just incredible!"),
        .speechLose   = COMPOUND_STRING("I cry for my party…"),
        .monSet = gBattleFrontierTrainerMons_Sammy
    },
    [FRONTIER_TRAINER_ARNIE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Arnie"),
        .speechBefore = COMPOUND_STRING("I am no. 1,\nI have no rival."),
        .speechWin    = COMPOUND_STRING("You see? I can't lose."),
        .speechLose   = COMPOUND_STRING("No! I won't accept this."),
        .monSet = gBattleFrontierTrainerMons_Arnie
    },
    [FRONTIER_TRAINER_ADRIAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Adrian"),
        .speechBefore = COMPOUND_STRING("Yahoo! Yahoo!!"),
        .speechWin    = COMPOUND_STRING("Thank you! Thank you!!"),
        .speechLose   = COMPOUND_STRING("Goodbye! Goodbye!!"),
        .monSet = gBattleFrontierTrainerMons_Adrian
    },
    [FRONTIER_TRAINER_TRISTAN] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Tristan"),
        .speechBefore = COMPOUND_STRING("Confused? I am a genius."),
        .speechWin    = COMPOUND_STRING("See? I am a genius."),
        .speechLose   = COMPOUND_STRING("I am not a genius in battle."),
        .monSet = gBattleFrontierTrainerMons_Tristan
    },
    [FRONTIER_TRAINER_JULIANA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Juliana"),
        .speechBefore = COMPOUND_STRING("I think I am shopping too much."),
        .speechWin    = COMPOUND_STRING("But I want a Pokémon plush doll."),
        .speechLose   = COMPOUND_STRING("I so want another Pokémon\nplush doll."),
        .monSet = gBattleFrontierTrainerMons_Juliana
    },
    [FRONTIER_TRAINER_RYLEE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Rylee"),
        .speechBefore = COMPOUND_STRING("Show me that you have guts."),
        .speechWin    = COMPOUND_STRING("Bye-bye! you have no guts."),
        .speechLose   = COMPOUND_STRING("That was gutsy…\nYou're quite super."),
        .monSet = gBattleFrontierTrainerMons_Rylee
    },
    [FRONTIER_TRAINER_CHELSEA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Chelsea"),
        .speechBefore = COMPOUND_STRING("I seriously mean to win!"),
        .speechWin    = COMPOUND_STRING("That was my will to win."),
        .speechLose   = COMPOUND_STRING("You're far too strong for me."),
        .monSet = gBattleFrontierTrainerMons_Chelsea
    },
    [FRONTIER_TRAINER_DANELA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Danela"),
        .speechBefore = COMPOUND_STRING("You must be my opponent now!"),
        .speechWin    = COMPOUND_STRING("Oh dear, too weak!\nDon't give up!"),
        .speechLose   = COMPOUND_STRING("That was good and this is goodbye."),
        .monSet = gBattleFrontierTrainerMons_Danela
    },
    [FRONTIER_TRAINER_LIZBETH] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Lizbeth"),
        .speechBefore = COMPOUND_STRING("If I lose you can have a present."),
        .speechWin    = COMPOUND_STRING("Here it is: a little praise\nas your present."),
        .speechLose   = COMPOUND_STRING("Your present?! Here it is:\na double slap."),
        .monSet = gBattleFrontierTrainerMons_Lizbeth
    },
    [FRONTIER_TRAINER_AMELIA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Amelia"),
        .speechBefore = COMPOUND_STRING("I believe in cute fashion appeal."),
        .speechWin    = COMPOUND_STRING("Your fashion sense is a disaster."),
        .speechLose   = COMPOUND_STRING("That was awful!\nI am going home."),
        .monSet = gBattleFrontierTrainerMons_Amelia
    },
    [FRONTIER_TRAINER_JILLIAN] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Jillian"),
        .speechBefore = COMPOUND_STRING("What is that I smell?"),
        .speechWin    = COMPOUND_STRING("It's the sweet scent of tasty water."),
        .speechLose   = COMPOUND_STRING("It's your offensive stench,\nthat's what."),
        .monSet = gBattleFrontierTrainerMons_Jillian
    },
    [FRONTIER_TRAINER_ABBIE] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Abbie"),
        .speechBefore = COMPOUND_STRING("You try my secret\naromatherapy, OK?"),
        .speechWin    = COMPOUND_STRING("My aromatherapy is terrible\nfor you."),
        .speechLose   = COMPOUND_STRING("Didn't you smell a thing?!"),
        .monSet = gBattleFrontierTrainerMons_Abbie
    },
    [FRONTIER_TRAINER_BRIANA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Briana"),
        .speechBefore = COMPOUND_STRING("My boyfriend works too much."),
        .speechWin    = COMPOUND_STRING("I only miss him more…"),
        .speechLose   = COMPOUND_STRING("I am so lonesome without him…"),
        .monSet = gBattleFrontierTrainerMons_Briana
    },
    [FRONTIER_TRAINER_ANTONIO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Antonio"),
        .speechBefore = COMPOUND_STRING("I know how to go-go."),
        .speechWin    = COMPOUND_STRING("But I don't like to dance."),
        .speechLose   = COMPOUND_STRING("Go-go… Just flail about."),
        .monSet = gBattleFrontierTrainerMons_Antonio
    },
    [FRONTIER_TRAINER_JADEN] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Jaden"),
        .speechBefore = COMPOUND_STRING("Hello I think I adore you."),
        .speechWin    = COMPOUND_STRING("You make me thrash in frustration."),
        .speechLose   = COMPOUND_STRING("This is it! Goodbye forever!"),
        .monSet = gBattleFrontierTrainerMons_Jaden
    },
    [FRONTIER_TRAINER_DAKOTA] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Dakota"),
        .speechBefore = COMPOUND_STRING("You have to dance with power."),
        .speechWin    = COMPOUND_STRING("Got it? Dance with power."),
        .speechLose   = COMPOUND_STRING("Okay you understand all right!"),
        .monSet = gBattleFrontierTrainerMons_Dakota
    },
    [FRONTIER_TRAINER_BRAYDEN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Brayden"),
        .speechBefore = COMPOUND_STRING("Color change version toys\nare useless!"),
        .speechWin    = COMPOUND_STRING("I only collect normal\nversion toys."),
        .speechLose   = COMPOUND_STRING("I attract color change\nversion toys…"),
        .monSet = gBattleFrontierTrainerMons_Brayden
    },
    [FRONTIER_TRAINER_CORSON] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Corson"),
        .speechBefore = COMPOUND_STRING("I get to beat up on you."),
        .speechWin    = COMPOUND_STRING("Too easy! I am so cool."),
        .speechLose   = COMPOUND_STRING("Why?! I curse you."),
        .monSet = gBattleFrontierTrainerMons_Corson
    },
    [FRONTIER_TRAINER_TREVIN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Trevin"),
        .speechBefore = COMPOUND_STRING("There is none better than me."),
        .speechWin    = COMPOUND_STRING("Yes sir! I am the best."),
        .speechLose   = COMPOUND_STRING("Serious?!"),
        .monSet = gBattleFrontierTrainerMons_Trevin
    },
    [FRONTIER_TRAINER_PATRICK] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Patrick"),
        .speechBefore = COMPOUND_STRING("I am perfect! Give up now."),
        .speechWin    = COMPOUND_STRING("Don't be disappointed,\nI am perfect."),
        .speechLose   = COMPOUND_STRING("But how? I am perfect…"),
        .monSet = gBattleFrontierTrainerMons_Patrick
    },
    [FRONTIER_TRAINER_KADEN] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Kaden"),
        .speechBefore = COMPOUND_STRING("What are you up to?"),
        .speechWin    = COMPOUND_STRING("You were a surprise to me!"),
        .speechLose   = COMPOUND_STRING("I don't know who I am…"),
        .monSet = gBattleFrontierTrainerMons_Kaden
    },
    [FRONTIER_TRAINER_MAXWELL] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Maxwell"),
        .speechBefore = COMPOUND_STRING("Hey there. Who is your rival?"),
        .speechWin    = COMPOUND_STRING("My rival is my girlfriend."),
        .speechLose   = COMPOUND_STRING("I am making you my rival."),
        .monSet = gBattleFrontierTrainerMons_Maxwell
    },
    [FRONTIER_TRAINER_DARYL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Daryl"),
        .speechBefore = COMPOUND_STRING("I only know how to charge."),
        .speechWin    = COMPOUND_STRING("Am I overwhelming or what?"),
        .speechLose   = COMPOUND_STRING("You're going to be a legend!"),
        .monSet = gBattleFrontierTrainerMons_Daryl
    },
    [FRONTIER_TRAINER_KENNETH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Kenneth"),
        .speechBefore = COMPOUND_STRING("You better not slack off with me."),
        .speechWin    = COMPOUND_STRING("Did my taunt intimidate you?"),
        .speechLose   = COMPOUND_STRING("I am sorry…"),
        .monSet = gBattleFrontierTrainerMons_Kenneth
    },
    [FRONTIER_TRAINER_RICH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Rich"),
        .speechBefore = COMPOUND_STRING("Your facade doesn't trick me."),
        .speechWin    = COMPOUND_STRING("Seriously, are you really OK?"),
        .speechLose   = COMPOUND_STRING("That was really tough on me."),
        .monSet = gBattleFrontierTrainerMons_Rich
    },
    [FRONTIER_TRAINER_CADEN] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Caden"),
        .speechBefore = COMPOUND_STRING("I can't be defeated!"),
        .speechWin    = COMPOUND_STRING("Fire! Fire!!"),
        .speechLose   = COMPOUND_STRING("I am tired… it's so hot."),
        .monSet = gBattleFrontierTrainerMons_Caden
    },
    [FRONTIER_TRAINER_MARLON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Marlon"),
        .speechBefore = COMPOUND_STRING("A Pokédex is a little radio?"),
        .speechWin    = COMPOUND_STRING("A little radio, huh?\nThat's totally cool."),
        .speechLose   = COMPOUND_STRING("It's not? Is Pokénav?"),
        .monSet = gBattleFrontierTrainerMons_Marlon
    },
    [FRONTIER_TRAINER_NASH] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Nash"),
        .speechBefore = COMPOUND_STRING("I am on fire baby!"),
        .speechWin    = COMPOUND_STRING("I left you just an ember."),
        .speechLose   = COMPOUND_STRING("Aiyeeh!! No water, please."),
        .monSet = gBattleFrontierTrainerMons_Nash
    },
    [FRONTIER_TRAINER_ROBBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Robby"),
        .speechBefore = COMPOUND_STRING("Hahaha! Happy to meet you!"),
        .speechWin    = COMPOUND_STRING("I am the leader with\nrefreshing Serene Grace."),
        .speechLose   = COMPOUND_STRING("I will thrash my toys!"),
        .monSet = gBattleFrontierTrainerMons_Robby
    },
    [FRONTIER_TRAINER_REECE] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Reece"),
        .speechBefore = COMPOUND_STRING("My Quick Attack can beat\na teleport."),
        .speechWin    = COMPOUND_STRING("Like I said, I am darn fast."),
        .speechLose   = COMPOUND_STRING("I was kidding about that\nteleport thing."),
        .monSet = gBattleFrontierTrainerMons_Reece
    },
    [FRONTIER_TRAINER_KATHRYN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Kathryn"),
        .speechBefore = COMPOUND_STRING("I don't train good enough?"),
        .speechWin    = COMPOUND_STRING("Don't taunt me like that OK?"),
        .speechLose   = COMPOUND_STRING("Why couldn't I win this?"),
        .monSet = gBattleFrontierTrainerMons_Kathryn
    },
    [FRONTIER_TRAINER_ELLEN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Ellen"),
        .speechBefore = COMPOUND_STRING("Crush you like an egg!"),
        .speechWin    = COMPOUND_STRING("That was a tasty victory for me."),
        .speechLose   = COMPOUND_STRING("Too tough to crush!"),
        .monSet = gBattleFrontierTrainerMons_Ellen
    },
    [FRONTIER_TRAINER_RAMON] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Ramon"),
        .speechBefore = COMPOUND_STRING("Okay! This is perfection."),
        .speechWin    = COMPOUND_STRING("I am happy that I won!"),
        .speechLose   = COMPOUND_STRING("It's a secret why I am happy."),
        .monSet = gBattleFrontierTrainerMons_Ramon
    },
    [FRONTIER_TRAINER_ARTHUR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Arthur"),
        .speechBefore = COMPOUND_STRING("Here I come,\nfeeling ready for it all."),
        .speechWin    = COMPOUND_STRING("That's it! That was fabulous!"),
        .speechLose   = COMPOUND_STRING("That was not what I need."),
        .monSet = gBattleFrontierTrainerMons_Arthur
    },
    [FRONTIER_TRAINER_ALONDRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Alondra"),
        .speechBefore = COMPOUND_STRING("Every day is a great day."),
        .speechWin    = COMPOUND_STRING("My dive will be a legend."),
        .speechLose   = COMPOUND_STRING("My dive left me cold…"),
        .monSet = gBattleFrontierTrainerMons_Alondra
    },
    [FRONTIER_TRAINER_ADRIANA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Adriana"),
        .speechBefore = COMPOUND_STRING("Come see an incredible\nswift swim!"),
        .speechWin    = COMPOUND_STRING("I make it look so easy."),
        .speechLose   = COMPOUND_STRING("I am feeling beat up and tired."),
        .monSet = gBattleFrontierTrainerMons_Adriana
    },
    [FRONTIER_TRAINER_MALIK] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Malik"),
        .speechBefore = COMPOUND_STRING("Oh not another battle please…"),
        .speechWin    = COMPOUND_STRING("I finally won… I am tired."),
        .speechLose   = COMPOUND_STRING("I finally lost… I am tired."),
        .monSet = gBattleFrontierTrainerMons_Malik
    },
    [FRONTIER_TRAINER_JILL] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Jill"),
        .speechBefore = COMPOUND_STRING("I am the Quick Attack trainer!"),
        .speechWin    = COMPOUND_STRING("The Quick Attack trainer wins!"),
        .speechLose   = COMPOUND_STRING("The Quick Attack trainer gives up!"),
        .monSet = gBattleFrontierTrainerMons_Jill
    },
    [FRONTIER_TRAINER_ERIK] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Erik"),
        .speechBefore = COMPOUND_STRING("I am the speed boost hero!"),
        .speechWin    = COMPOUND_STRING("Thank you from the speed boost hero!"),
        .speechLose   = COMPOUND_STRING("Waah!! No no!!"),
        .monSet = gBattleFrontierTrainerMons_Erik
    },
    [FRONTIER_TRAINER_YAZMIN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Yazmin"),
        .speechBefore = COMPOUND_STRING("I would rather run than bike."),
        .speechWin    = COMPOUND_STRING("Yes I would much rather run."),
        .speechLose   = COMPOUND_STRING("Bye-bye! I am going to run away."),
        .monSet = gBattleFrontierTrainerMons_Yazmin
    },
    [FRONTIER_TRAINER_JAMAL] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Jamal"),
        .speechBefore = COMPOUND_STRING("I am going to be a father,"),
        .speechWin    = COMPOUND_STRING("I can't wait for my baby."),
        .speechLose   = COMPOUND_STRING("My baby will be totally awesome."),
        .monSet = gBattleFrontierTrainerMons_Jamal
    },
    [FRONTIER_TRAINER_LESLIE] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Leslie"),
        .speechBefore = COMPOUND_STRING("I am going to be a mother."),
        .speechWin    = COMPOUND_STRING("A baby will be a little challenge."),
        .speechLose   = COMPOUND_STRING("I am too happy to be angry."),
        .monSet = gBattleFrontierTrainerMons_Leslie
    },
    [FRONTIER_TRAINER_DAVE] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Dave"),
        .speechBefore = COMPOUND_STRING("What should I do today?"),
        .speechWin    = COMPOUND_STRING("I should enjoy some sports!"),
        .speechLose   = COMPOUND_STRING("I will go play a game."),
        .monSet = gBattleFrontierTrainerMons_Dave
    },
    [FRONTIER_TRAINER_CARLO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Carlo"),
        .speechBefore = COMPOUND_STRING("Hah!! Yeah!!"),
        .speechWin    = COMPOUND_STRING("I do things at extreme speed!"),
        .speechLose   = COMPOUND_STRING("I lost at extreme speed…"),
        .monSet = gBattleFrontierTrainerMons_Carlo
    },
    [FRONTIER_TRAINER_EMILIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Emilia"),
        .speechBefore = COMPOUND_STRING("Me worry? I have none."),
        .speechWin    = COMPOUND_STRING("Ahaha see? That was fantastic!"),
        .speechLose   = COMPOUND_STRING("Ahaha see? That was entertaining!"),
        .monSet = gBattleFrontierTrainerMons_Emilia
    },
    [FRONTIER_TRAINER_DALIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Dalia"),
        .speechBefore = COMPOUND_STRING("My bike is very expensive."),
        .speechWin    = COMPOUND_STRING("Don't come near my bike!"),
        .speechLose   = COMPOUND_STRING("My bike is my best friend."),
        .monSet = gBattleFrontierTrainerMons_Dalia
    },
    [FRONTIER_TRAINER_HITOMI] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Hitomi"),
        .speechBefore = COMPOUND_STRING("Yeah!! Hah!!"),
        .speechWin    = COMPOUND_STRING("What?! I won?!"),
        .speechLose   = COMPOUND_STRING("Aiyeeh!! I am sorry!!"),
        .monSet = gBattleFrontierTrainerMons_Hitomi
    },
    [FRONTIER_TRAINER_RICARDO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Ricardo"),
        .speechBefore = COMPOUND_STRING("Come on! Play time is over."),
        .speechWin    = COMPOUND_STRING("You're out of here!"),
        .speechLose   = COMPOUND_STRING("Please don't hit me!"),
        .monSet = gBattleFrontierTrainerMons_Ricardo
    },
    [FRONTIER_TRAINER_SHIZUKA] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Shizuka"),
        .speechBefore = COMPOUND_STRING("Show me that you're serious!"),
        .speechWin    = COMPOUND_STRING("I won't forget about you."),
        .speechLose   = COMPOUND_STRING("You're perfect in every way!"),
        .monSet = gBattleFrontierTrainerMons_Shizuka
    },
    [FRONTIER_TRAINER_JOANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Joana"),
        .speechBefore = COMPOUND_STRING("You're going to lose right away."),
        .speechWin    = COMPOUND_STRING("I am the winner, hear me roar!"),
        .speechLose   = COMPOUND_STRING("I refuse to accept that outrage."),
        .monSet = gBattleFrontierTrainerMons_Joana
    },
    [FRONTIER_TRAINER_KELLY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Kelly"),
        .speechBefore = COMPOUND_STRING("My night school is really scary."),
        .speechWin    = COMPOUND_STRING("A lady ghost appears there."),
        .speechLose   = COMPOUND_STRING("The homework is awfully scary."),
        .monSet = gBattleFrontierTrainerMons_Kelly
    },
    [FRONTIER_TRAINER_RAYNA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Rayna"),
        .speechBefore = COMPOUND_STRING("I am no. 1 when it's about power."),
        .speechWin    = COMPOUND_STRING("Understand my power now?"),
        .speechLose   = COMPOUND_STRING("Terrible… I am terrible…"),
        .monSet = gBattleFrontierTrainerMons_Rayna
    },
    [FRONTIER_TRAINER_EVAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Evan"),
        .speechBefore = COMPOUND_STRING("Every battle has a smell."),
        .speechWin    = COMPOUND_STRING("Oh! The sweet scent\nof victory."),
        .speechLose   = COMPOUND_STRING("The awful stench of a loss."),
        .monSet = gBattleFrontierTrainerMons_Evan
    },
    [FRONTIER_TRAINER_JORDAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Jordan"),
        .speechBefore = COMPOUND_STRING("Good! Come on!!"),
        .speechWin    = COMPOUND_STRING("You can't beat me!"),
        .speechLose   = COMPOUND_STRING("What?! But how?"),
        .monSet = gBattleFrontierTrainerMons_Jordan
    },
    [FRONTIER_TRAINER_JOEL] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Joel"),
        .speechBefore = COMPOUND_STRING("Fufufu…"),
        .speechWin    = COMPOUND_STRING("Giggle…"),
        .speechLose   = COMPOUND_STRING("Hahaha…"),
        .monSet = gBattleFrontierTrainerMons_Joel
    },
    [FRONTIER_TRAINER_KRISTEN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Kristen"),
        .speechBefore = COMPOUND_STRING("Hahaha… A kid…"),
        .speechWin    = COMPOUND_STRING("Just a little kid after all!"),
        .speechLose   = COMPOUND_STRING("A tough kid huh? Humph!"),
        .monSet = gBattleFrontierTrainerMons_Kristen
    },
    [FRONTIER_TRAINER_SELPHY] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Selphy"),
        .speechBefore = COMPOUND_STRING("Huh? What is it?"),
        .speechWin    = COMPOUND_STRING("Oh yes! why not?"),
        .speechLose   = COMPOUND_STRING("Oh no! why not?"),
        .monSet = gBattleFrontierTrainerMons_Selphy
    },
    [FRONTIER_TRAINER_CHLOE] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Chloe"),
        .speechBefore = COMPOUND_STRING("Come, we will do battle now."),
        .speechWin    = COMPOUND_STRING("More! Another battle!"),
        .speechLose   = COMPOUND_STRING("Oh! Strong you are."),
        .monSet = gBattleFrontierTrainerMons_Chloe
    },
    [FRONTIER_TRAINER_NORTON] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Norton"),
        .speechBefore = COMPOUND_STRING("I know only you."),
        .speechWin    = COMPOUND_STRING("Excuse me, but you're a pushover!"),
        .speechLose   = COMPOUND_STRING("You're some kind of awesome!"),
        .monSet = gBattleFrontierTrainerMons_Norton
    },
    [FRONTIER_TRAINER_LUKAS] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Lukas"),
        .speechBefore = COMPOUND_STRING("My joking is pretty terrible…"),
        .speechWin    = COMPOUND_STRING("Your rock head exists to shine!"),
        .speechLose   = COMPOUND_STRING("Your rock head come to shine."),
        .monSet = gBattleFrontierTrainerMons_Lukas
    },
    [FRONTIER_TRAINER_ZACH] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Zach"),
        .speechBefore = COMPOUND_STRING("I am an excellent mimic of Pokémon."),
        .speechWin    = COMPOUND_STRING("I am happy like a little Togepi!"),
        .speechLose   = COMPOUND_STRING("I am angry like a Mankey!"),
        .monSet = gBattleFrontierTrainerMons_Zach
    },
    [FRONTIER_TRAINER_KAITLYN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Kaitlyn"),
        .speechBefore = COMPOUND_STRING("I crush things with psychic power."),
        .speechWin    = COMPOUND_STRING("My victory will make the news."),
        .speechLose   = COMPOUND_STRING("No no… This won't do."),
        .monSet = gBattleFrontierTrainerMons_Kaitlyn
    },
    [FRONTIER_TRAINER_BREANNA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Breanna"),
        .speechBefore = COMPOUND_STRING("My Pokémon will crush you!"),
        .speechWin    = COMPOUND_STRING("Have some more of this!"),
        .speechLose   = COMPOUND_STRING("You have guts and skill."),
        .monSet = gBattleFrontierTrainerMons_Breanna
    },
    [FRONTIER_TRAINER_KENDRA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Kendra"),
        .speechBefore = COMPOUND_STRING("If you're smart, stop right now."),
        .speechWin    = COMPOUND_STRING("I said that you should stop."),
        .speechLose   = COMPOUND_STRING("Why didn't you stop?"),
        .monSet = gBattleFrontierTrainerMons_Kendra
    },
    [FRONTIER_TRAINER_MOLLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Molly"),
        .speechBefore = COMPOUND_STRING("Will my cute charm attract you?"),
        .speechWin    = COMPOUND_STRING("Your Pokémon are my toys now."),
        .speechLose   = COMPOUND_STRING("Oh how could you?"),
        .monSet = gBattleFrontierTrainerMons_Molly
    },
    [FRONTIER_TRAINER_JAZMIN] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Jazmin"),
        .speechBefore = COMPOUND_STRING("I forecast terrible things for you."),
        .speechWin    = COMPOUND_STRING("There wasn't my forecast, right?"),
        .speechLose   = COMPOUND_STRING("My foresight didn't show me this."),
        .monSet = gBattleFrontierTrainerMons_Jazmin
    },
    [FRONTIER_TRAINER_KELSEY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Kelsey"),
        .speechBefore = COMPOUND_STRING("I haven't slept in days…"),
        .speechWin    = COMPOUND_STRING("My sleep will be excellent now."),
        .speechLose   = COMPOUND_STRING("You have destroyed my sleep…"),
        .monSet = gBattleFrontierTrainerMons_Kelsey
    },
    [FRONTIER_TRAINER_JALEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Jalen"),
        .speechBefore = COMPOUND_STRING("I don't allow Pokémon to thrash."),
        .speechWin    = COMPOUND_STRING("Hahaha! Are you angry?"),
        .speechLose   = COMPOUND_STRING("Why is this so hard?"),
        .monSet = gBattleFrontierTrainerMons_Jalen
    },
    [FRONTIER_TRAINER_GRIFFEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Griffen"),
        .speechBefore = COMPOUND_STRING("I swallow sludge to\ntransform myself."),
        .speechWin    = COMPOUND_STRING("I have a growth of Acid Armor."),
        .speechLose   = COMPOUND_STRING("I have a growth of Suction Cups."),
        .monSet = gBattleFrontierTrainerMons_Griffen
    },
    [FRONTIER_TRAINER_XANDER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Xander"),
        .speechBefore = COMPOUND_STRING("I got my Pokémon on rental."),
        .speechWin    = COMPOUND_STRING("It's incredible my\nrental Pokémon won."),
        .speechLose   = COMPOUND_STRING("Rental Pokémon aren't\nup to scratch."),
        .monSet = gBattleFrontierTrainerMons_Xander
    },
    [FRONTIER_TRAINER_MARVIN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Marvin"),
        .speechBefore = COMPOUND_STRING("You're up to the challenge?"),
        .speechWin    = COMPOUND_STRING("I didn't think you're good enough."),
        .speechLose   = COMPOUND_STRING("I am feeling perfect\nthank you so much."),
        .monSet = gBattleFrontierTrainerMons_Marvin
    },
    [FRONTIER_TRAINER_BRENNAN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Brennan"),
        .speechBefore = COMPOUND_STRING("I wish to see the news."),
        .speechWin    = COMPOUND_STRING("Comics get damp from drizzle?"),
        .speechLose   = COMPOUND_STRING("The tight money living channel?!"),
        .monSet = gBattleFrontierTrainerMons_Brennan
    },
    [FRONTIER_TRAINER_BALEY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Baley"),
        .speechBefore = COMPOUND_STRING("Screech is like music to me!"),
        .speechWin    = COMPOUND_STRING("My screech strategy is the best."),
        .speechLose   = COMPOUND_STRING("You're soundproof?"),
        .monSet = gBattleFrontierTrainerMons_Baley
    },
    [FRONTIER_TRAINER_ZACKARY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Zackary"),
        .speechBefore = COMPOUND_STRING("Can you dig it yo?"),
        .speechWin    = COMPOUND_STRING("Take down take a dive yo yo."),
        .speechLose   = COMPOUND_STRING("Break down dive time for me."),
        .monSet = gBattleFrontierTrainerMons_Zackary
    },
    [FRONTIER_TRAINER_GABRIEL] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Gabriel"),
        .speechBefore = COMPOUND_STRING("Pound the thick fat\non my belly drum."),
        .speechWin    = COMPOUND_STRING("Pound my belly drum\npound my belly drum."),
        .speechLose   = COMPOUND_STRING("My belly drum was too weak…"),
        .monSet = gBattleFrontierTrainerMons_Gabriel
    },
    [FRONTIER_TRAINER_EMILY] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Emily"),
        .speechBefore = COMPOUND_STRING("How about a tiny bit of hypnosis?"),
        .speechWin    = COMPOUND_STRING("My hypnosis strategy\nworks to perfection."),
        .speechLose   = COMPOUND_STRING("My hypnosis strategy went badly…"),
        .monSet = gBattleFrontierTrainerMons_Emily
    },
    [FRONTIER_TRAINER_JORDYN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Jordyn"),
        .speechBefore = COMPOUND_STRING("You don't know my secret…"),
        .speechWin    = COMPOUND_STRING("I am not as I appear…"),
        .speechLose   = COMPOUND_STRING("But how did you know?"),
        .monSet = gBattleFrontierTrainerMons_Jordyn
    },
    [FRONTIER_TRAINER_SOFIA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Sofia"),
        .speechBefore = COMPOUND_STRING("Loudred probably has a sweet scent."),
        .speechWin    = COMPOUND_STRING("That's the feeling that I get."),
        .speechLose   = COMPOUND_STRING("I work at the Dept. Store."),
        .monSet = gBattleFrontierTrainerMons_Sofia
    },
    [FRONTIER_TRAINER_BRADEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Braden"),
        .speechBefore = COMPOUND_STRING("I choose you!\nThis is it!"),
        .speechWin    = COMPOUND_STRING("I am feeling pretty\nawesome about myself."),
        .speechLose   = COMPOUND_STRING("All right! I surrender!"),
        .monSet = gBattleFrontierTrainerMons_Braden
    },
    [FRONTIER_TRAINER_KAYDEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Kayden"),
        .speechBefore = COMPOUND_STRING("They overdo that gourmet thing…"),
        .speechWin    = COMPOUND_STRING("That gourmet thing isn't for me."),
        .speechLose   = COMPOUND_STRING("Hey this is pretty tasty."),
        .monSet = gBattleFrontierTrainerMons_Kayden
    },
    [FRONTIER_TRAINER_COOPER] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Cooper"),
        .speechBefore = COMPOUND_STRING("This should absolutely be a pushover."),
        .speechWin    = COMPOUND_STRING("That was too exciting for me…"),
        .speechLose   = COMPOUND_STRING("Please! sorry,\nI am sorry."),
        .monSet = gBattleFrontierTrainerMons_Cooper
    },
    [FRONTIER_TRAINER_JULIA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Julia"),
        .speechBefore = COMPOUND_STRING("Spirit alone won't make you win."),
        .speechWin    = COMPOUND_STRING("You should accept this\nwith serene grace."),
        .speechLose   = COMPOUND_STRING("For now goodbye\nbut it's not over."),
        .monSet = gBattleFrontierTrainerMons_Julia
    },
    [FRONTIER_TRAINER_AMARA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Amara"),
        .speechBefore = COMPOUND_STRING("Wroooaar!!! I am so ready!!"),
        .speechWin    = COMPOUND_STRING("I lose myself if it's exciting."),
        .speechLose   = COMPOUND_STRING("That's too much to tackle!"),
        .monSet = gBattleFrontierTrainerMons_Amara
    },
    [FRONTIER_TRAINER_LYNN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Lynn"),
        .speechBefore = COMPOUND_STRING("Your secret can't be\nhidden forever."),
        .speechWin    = COMPOUND_STRING("I know your secret now!"),
        .speechLose   = COMPOUND_STRING("You can't safeguard\nyour own secret."),
        .monSet = gBattleFrontierTrainerMons_Lynn
    },
    [FRONTIER_TRAINER_JOVAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Jovan"),
        .speechBefore = COMPOUND_STRING("Your battle sense is sadly lacking."),
        .speechWin    = COMPOUND_STRING("My battle sense is cool, isn't it?"),
        .speechLose   = COMPOUND_STRING("I was minus my normal power today."),
        .monSet = gBattleFrontierTrainerMons_Jovan
    },
    [FRONTIER_TRAINER_DOMINIC] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Dominic"),
        .speechBefore = COMPOUND_STRING("I have this excellent camera."),
        .speechWin    = COMPOUND_STRING("My camera was awfully expensive."),
        .speechLose   = COMPOUND_STRING("My camera doesn't miss a thing."),
        .monSet = gBattleFrontierTrainerMons_Dominic
    },
    [FRONTIER_TRAINER_NIKOLAS] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Nikolas"),
        .speechBefore = COMPOUND_STRING("I mimic Pokémon after every battle."),
        .speechWin    = COMPOUND_STRING("If I win, I pretend I am a Tauros."),
        .speechLose   = COMPOUND_STRING("If I lose, I pretend I am a Miltank."),
        .monSet = gBattleFrontierTrainerMons_Nikolas
    },
    [FRONTIER_TRAINER_VALERIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Valeria"),
        .speechBefore = COMPOUND_STRING("I wish you would not glare."),
        .speechWin    = COMPOUND_STRING("You're mean! I mean really."),
        .speechLose   = COMPOUND_STRING("You have a really scary face!"),
        .monSet = gBattleFrontierTrainerMons_Valeria
    },
    [FRONTIER_TRAINER_DELANEY] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Delaney"),
        .speechBefore = COMPOUND_STRING("School is over, time to play."),
        .speechWin    = COMPOUND_STRING("My boyfriend is from school."),
        .speechLose   = COMPOUND_STRING("I have to work next week."),
        .monSet = gBattleFrontierTrainerMons_Delaney
    },
    [FRONTIER_TRAINER_MEGHAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Meghan"),
        .speechBefore = COMPOUND_STRING("School is out, time to play."),
        .speechWin    = COMPOUND_STRING("My boyfriend likes comics."),
        .speechLose   = COMPOUND_STRING("It's back to school soon."),
        .monSet = gBattleFrontierTrainerMons_Meghan
    },
    [FRONTIER_TRAINER_ROBERTO] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Roberto"),
        .speechBefore = COMPOUND_STRING("Dragon Pokémon are invincible!"),
        .speechWin    = COMPOUND_STRING("You weren't bad I was just better."),
        .speechLose   = COMPOUND_STRING("Aren't you satisfied yet?"),
        .monSet = gBattleFrontierTrainerMons_Roberto
    },
    [FRONTIER_TRAINER_DAMIAN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Damian"),
        .speechBefore = COMPOUND_STRING("My pure power is machine like!"),
        .speechWin    = COMPOUND_STRING("My mach punch will\nmake a brick break."),
        .speechLose   = COMPOUND_STRING("Arrgh! No!!"),
        .monSet = gBattleFrontierTrainerMons_Damian
    },
    [FRONTIER_TRAINER_BRODY] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Brody"),
        .speechBefore = COMPOUND_STRING("My fashion sense seems Oddish?"),
        .speechWin    = COMPOUND_STRING("It's my family stay-at-home, look!"),
        .speechLose   = COMPOUND_STRING("I question your fashion sense,\nseriously."),
        .monSet = gBattleFrontierTrainerMons_Brody
    },
    [FRONTIER_TRAINER_GRAHAM] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Graham"),
        .speechBefore = COMPOUND_STRING("Yeah! Yeah yeah!!"),
        .speechWin    = COMPOUND_STRING("Wahahaha Wahahaha!\nWahahaha Wahahaha!!"),
        .speechLose   = COMPOUND_STRING("I am sorry… It's my bad."),
        .monSet = gBattleFrontierTrainerMons_Graham
    },
    [FRONTIER_TRAINER_TYLOR] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Tylor"),
        .speechBefore = COMPOUND_STRING("Are you feeling my heat wave?"),
        .speechWin    = COMPOUND_STRING("Yes I am on fire!"),
        .speechLose   = COMPOUND_STRING("But I was on fire for you."),
        .monSet = gBattleFrontierTrainerMons_Tylor
    },
    [FRONTIER_TRAINER_JAREN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Jaren"),
        .speechBefore = COMPOUND_STRING("Fighting spirit? mM?"),
        .speechWin    = COMPOUND_STRING("I want more cute Pokémon."),
        .speechLose   = COMPOUND_STRING("Your Pokémon look quite cute."),
        .monSet = gBattleFrontierTrainerMons_Jaren
    },
    [FRONTIER_TRAINER_CORDELL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Cordell"),
        .speechBefore = COMPOUND_STRING("A battle is decided on spirit."),
        .speechWin    = COMPOUND_STRING("Can't you accept that?"),
        .speechLose   = COMPOUND_STRING("I will be on my way."),
        .monSet = gBattleFrontierTrainerMons_Cordell
    },
    [FRONTIER_TRAINER_JAZLYN] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Jazlyn"),
        .speechBefore = COMPOUND_STRING("Is your Pokédex really awesome?"),
        .speechWin    = COMPOUND_STRING("Oh yeah wow your Pokédex is super."),
        .speechLose   = COMPOUND_STRING("An avant-garde Pokédex\nwould be awesome."),
        .monSet = gBattleFrontierTrainerMons_Jazlyn
    },
    [FRONTIER_TRAINER_ZACHERY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Zachery"),
        .speechBefore = COMPOUND_STRING("I have my own place, yeehaw!"),
        .speechWin    = COMPOUND_STRING("It's an exciting time for me."),
        .speechLose   = COMPOUND_STRING("You can't flatten my happiness!"),
        .monSet = gBattleFrontierTrainerMons_Zachery
    },
    [FRONTIER_TRAINER_JOHAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Johan"),
        .speechBefore = COMPOUND_STRING("Winter will soon be here."),
        .speechWin    = COMPOUND_STRING("My allowance could use\na helping hand."),
        .speechLose   = COMPOUND_STRING("I always use my allowance up."),
        .monSet = gBattleFrontierTrainerMons_Johan
    },
    [FRONTIER_TRAINER_SHEA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Shea"),
        .speechBefore = COMPOUND_STRING("Do you battle with beauty?"),
        .speechWin    = COMPOUND_STRING("You battle in an ugly way."),
        .speechLose   = COMPOUND_STRING("What is beauty to you?"),
        .monSet = gBattleFrontierTrainerMons_Shea
    },
    [FRONTIER_TRAINER_KAILA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Kaila"),
        .speechBefore = COMPOUND_STRING("I am feeling thirsty right now…"),
        .speechWin    = COMPOUND_STRING("I could use a cold drink."),
        .speechLose   = COMPOUND_STRING("That loss is hard to swallow."),
        .monSet = gBattleFrontierTrainerMons_Kaila
    },
    [FRONTIER_TRAINER_ISIAH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("Isiah"),
        .speechBefore = COMPOUND_STRING("I pretend to study a lot."),
        .speechWin    = COMPOUND_STRING("I trick mother for my allowance."),
        .speechLose   = COMPOUND_STRING("I don't want to study more."),
        .monSet = gBattleFrontierTrainerMons_Isiah
    },
    [FRONTIER_TRAINER_R8_TR9_HIKERT] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("Garrett"),
        .speechBefore = COMPOUND_STRING("I enjoy comics and this game."),
        .speechWin    = COMPOUND_STRING("I like this music idol too."),
        .speechLose   = COMPOUND_STRING("But I have to study more."),
        .monSet = gBattleFrontierTrainerMons_Garrett
    },
    [FRONTIER_TRAINER_HAYLIE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("Haylie"),
        .speechBefore = COMPOUND_STRING("I worry too much to sleep."),
        .speechWin    = COMPOUND_STRING("A win gives me a calm mind."),
        .speechLose   = COMPOUND_STRING("My insomnia will get bad…"),
        .monSet = gBattleFrontierTrainerMons_Haylie
    },
    [FRONTIER_TRAINER_MEGAN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("Megan"),
        .speechBefore = COMPOUND_STRING("I believe in an\naromatherapy bath."),
        .speechWin    = COMPOUND_STRING("I want a healthy body."),
        .speechLose   = COMPOUND_STRING("If only aromatherapy were\nless expensive."),
        .monSet = gBattleFrontierTrainerMons_Megan
    },
    [FRONTIER_TRAINER_ISSAC] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("Issac"),
        .speechBefore = COMPOUND_STRING("My hobby?"),
        .speechWin    = COMPOUND_STRING("I like any kind of water sport."),
        .speechLose   = COMPOUND_STRING("I dislike any kind of mud sport."),
        .monSet = gBattleFrontierTrainerMons_Issac
    },
    [FRONTIER_TRAINER_QUINTON] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("Quinton"),
        .speechBefore = COMPOUND_STRING("I am sad cause I am too weak."),
        .speechWin    = COMPOUND_STRING("You aren't too strong for me."),
        .speechLose   = COMPOUND_STRING("Hey what did I do?"),
        .monSet = gBattleFrontierTrainerMons_Quinton
    },
    [FRONTIER_TRAINER_SALMA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("Salma"),
        .speechBefore = COMPOUND_STRING("You've got your hustle on!"),
        .speechWin    = COMPOUND_STRING("I win you hustle on out."),
        .speechLose   = COMPOUND_STRING("I don't get how I lost."),
        .monSet = gBattleFrontierTrainerMons_Salma
    },
    [FRONTIER_TRAINER_ANSLEY] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("Ansley"),
        .speechBefore = COMPOUND_STRING("I am bored… dance for me."),
        .speechWin    = COMPOUND_STRING("You've bored me some more."),
        .speechLose   = COMPOUND_STRING("Take your frustration some\nother place."),
        .monSet = gBattleFrontierTrainerMons_Ansley
    },
    [FRONTIER_TRAINER_HOLDEN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("Holden"),
        .speechBefore = COMPOUND_STRING("Let's commemorate my coolness\nin battle."),
        .speechWin    = COMPOUND_STRING("You're too weak for any praise."),
        .speechLose   = COMPOUND_STRING("Your battle sense is amusing."),
        .monSet = gBattleFrontierTrainerMons_Holden
    },
    [FRONTIER_TRAINER_LUCA] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("Luca"),
        .speechBefore = COMPOUND_STRING("We will have a cool battle."),
        .speechWin    = COMPOUND_STRING("I won in a cool way."),
        .speechLose   = COMPOUND_STRING("Hello? I am just a kid."),
        .monSet = gBattleFrontierTrainerMons_Luca
    },
    [FRONTIER_TRAINER_JAMISON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("Jamison"),
        .speechBefore = COMPOUND_STRING("My Secret Power is\noverwhelming to Pokémon."),
        .speechWin    = COMPOUND_STRING("Did you see that?"),
        .speechLose   = COMPOUND_STRING("I will use smokescreen to escape."),
        .monSet = gBattleFrontierTrainerMons_Jamison
    },
    [FRONTIER_TRAINER_GUNNAR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("Gunnar"),
        .speechBefore = COMPOUND_STRING("I cut down every opponent."),
        .speechWin    = COMPOUND_STRING("Don't grudge me for your loss."),
        .speechLose   = COMPOUND_STRING("Please lose that\nscary face of yours."),
        .monSet = gBattleFrontierTrainerMons_Gunnar
    },
    [FRONTIER_TRAINER_CRAIG] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("Craig"),
        .speechBefore = COMPOUND_STRING("I can't wait for my train."),
        .speechWin    = COMPOUND_STRING("My train isn't here yet…"),
        .speechLose   = COMPOUND_STRING("Here it is my train.\nSee ya!"),
        .monSet = gBattleFrontierTrainerMons_Craig
    },
    [FRONTIER_TRAINER_PIERCE] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("Pierce"),
        .speechBefore = COMPOUND_STRING("There was a heat wave last week."),
        .speechWin    = COMPOUND_STRING("I can't take a heat wave."),
        .speechLose   = COMPOUND_STRING("Didn't it hail too?"),
        .monSet = gBattleFrontierTrainerMons_Pierce
    },
    [FRONTIER_TRAINER_REGINA] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("Regina"),
        .speechBefore = COMPOUND_STRING("I like to play in water."),
        .speechWin    = COMPOUND_STRING("I refuse to come out."),
        .speechLose   = COMPOUND_STRING("You're not much good in water."),
        .monSet = gBattleFrontierTrainerMons_Regina
    },
    [FRONTIER_TRAINER_ALISON] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("Alison"),
        .speechBefore = COMPOUND_STRING("This kindergarten magazine\nis too much."),
        .speechWin    = COMPOUND_STRING("How to bug your teacher??"),
        .speechLose   = COMPOUND_STRING("Enjoy a tasty school diet?"),
        .monSet = gBattleFrontierTrainerMons_Alison
    },
    [FRONTIER_TRAINER_HANK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Hank"),
        .speechBefore = COMPOUND_STRING("There is a Bug event soon."),
        .speechWin    = COMPOUND_STRING("It's a Bug fashion show!"),
        .speechLose   = COMPOUND_STRING("Don't you like Bug Pokémon?"),
        .monSet = gBattleFrontierTrainerMons_Hank
    },
    [FRONTIER_TRAINER_EARL] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Earl"),
        .speechBefore = COMPOUND_STRING("The invincible Bug trainer\nis here."),
        .speechWin    = COMPOUND_STRING("The invincible Bug trainer\nam I."),
        .speechLose   = COMPOUND_STRING("See how fast I run away!"),
        .monSet = gBattleFrontierTrainerMons_Earl
    },
    [FRONTIER_TRAINER_RAMIRO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Ramiro"),
        .speechBefore = COMPOUND_STRING("I went to a fishing school."),
        .speechWin    = COMPOUND_STRING("Seriously I am in the\nfishing hall-of-fame."),
        .speechLose   = COMPOUND_STRING("I want to go back…"),
        .monSet = gBattleFrontierTrainerMons_Ramiro
    },
    [FRONTIER_TRAINER_HUNTER] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Hunter"),
        .speechBefore = COMPOUND_STRING("Show me a totally cool cross chop."),
        .speechWin    = COMPOUND_STRING("You're too weak to do a cross chop."),
        .speechLose   = COMPOUND_STRING("Was it a mistake?"),
        .monSet = gBattleFrontierTrainerMons_Hunter
    },
    [FRONTIER_TRAINER_AIDEN] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Aiden"),
        .speechBefore = COMPOUND_STRING("My work is making me health."),
        .speechWin    = COMPOUND_STRING("You see? I am healthy!"),
        .speechLose   = COMPOUND_STRING("You're more healthy than I am…"),
        .monSet = gBattleFrontierTrainerMons_Aiden
    },
    [FRONTIER_TRAINER_XAVIER] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Xavier"),
        .speechBefore = COMPOUND_STRING("Hey there! Look look!!"),
        .speechWin    = COMPOUND_STRING("Goodbye and thank you\nthat was funny."),
        .speechLose   = COMPOUND_STRING("Wowee! No no !!"),
        .monSet = gBattleFrontierTrainerMons_Xavier
    },
    [FRONTIER_TRAINER_CLINTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Clinton"),
        .speechBefore = COMPOUND_STRING("Want to see my hypnosis?"),
        .speechWin    = COMPOUND_STRING("Your fury swipes, your strength,\nyoung trainer."),
        .speechLose   = COMPOUND_STRING("Tch… I am too weak…"),
        .monSet = gBattleFrontierTrainerMons_Clinton
    },
    [FRONTIER_TRAINER_JESSE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Jesse"),
        .speechBefore = COMPOUND_STRING("This battle is for my mother."),
        .speechWin    = COMPOUND_STRING("Mother will be happy for me."),
        .speechLose   = COMPOUND_STRING("I want my mother!"),
        .monSet = gBattleFrontierTrainerMons_Jesse
    },
    [FRONTIER_TRAINER_EDUARDO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Eduardo"),
        .speechBefore = COMPOUND_STRING("Our music will play all night."),
        .speechWin    = COMPOUND_STRING("Nighttime is when I play best."),
        .speechLose   = COMPOUND_STRING("Let's party until the morning sun!"),
        .monSet = gBattleFrontierTrainerMons_Eduardo
    },
    [FRONTIER_TRAINER_HAL] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Hal"),
        .speechBefore = COMPOUND_STRING("I am trendy aren't I?"),
        .speechWin    = COMPOUND_STRING("I am feeling hip and happening,\n oh yeah!"),
        .speechLose   = COMPOUND_STRING("I am always trendy,\nthank you very much."),
        .monSet = gBattleFrontierTrainerMons_Hal
    },
    [FRONTIER_TRAINER_GAGE] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Gage"),
        .speechBefore = COMPOUND_STRING("Here it is, a Flying-type\nhidden move."),
        .speechWin    = COMPOUND_STRING("It's a Flying-type victory!"),
        .speechLose   = COMPOUND_STRING("If I lose I just fly away."),
        .monSet = gBattleFrontierTrainerMons_Gage
    },
    [FRONTIER_TRAINER_ARNOLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Arnold"),
        .speechBefore = COMPOUND_STRING("I am feeling weird from a dream."),
        .speechWin    = COMPOUND_STRING("Your scary face was in my dream."),
        .speechLose   = COMPOUND_STRING("My incredible dream was so weird."),
        .monSet = gBattleFrontierTrainerMons_Arnold
    },
    [FRONTIER_TRAINER_JARRETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Jarrett"),
        .speechBefore = COMPOUND_STRING("Come on let's dance like it's\nyesterday."),
        .speechWin    = COMPOUND_STRING("You like how I dance?"),
        .speechLose   = COMPOUND_STRING("You don't appreciate how I dance."),
        .monSet = gBattleFrontierTrainerMons_Jarrett
    },
    [FRONTIER_TRAINER_GARETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Garett"),
        .speechBefore = COMPOUND_STRING("My girl gives me\na little sweet kiss."),
        .speechWin    = COMPOUND_STRING("My girlfriend is my treasure."),
        .speechLose   = COMPOUND_STRING("A treasure isn't always\nabout money."),
        .monSet = gBattleFrontierTrainerMons_Garett
    },
    [FRONTIER_TRAINER_EMANUEL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Emanuel"),
        .speechBefore = COMPOUND_STRING("Smartness alone won't\nmake you win."),
        .speechWin    = COMPOUND_STRING("I am not very smart, but I won"),
        .speechLose   = COMPOUND_STRING("How did you fake out me?"),
        .monSet = gBattleFrontierTrainerMons_Emanuel
    },
    [FRONTIER_TRAINER_GUSTAVO] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Gustavo"),
        .speechBefore = COMPOUND_STRING("Charge! Charge!!"),
        .speechWin    = COMPOUND_STRING("Surrender? So soon?"),
        .speechLose   = COMPOUND_STRING("You can't make me surrender yet."),
        .monSet = gBattleFrontierTrainerMons_Gustavo
    },
    [FRONTIER_TRAINER_KAMERON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Kameron"),
        .speechBefore = COMPOUND_STRING("Take that! it's my fiery trick."),
        .speechWin    = COMPOUND_STRING("Did my fiery trick astonish?"),
        .speechLose   = COMPOUND_STRING("You didn't fall for my trick."),
        .monSet = gBattleFrontierTrainerMons_Kameron
    },
    [FRONTIER_TRAINER_ALFREDO] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Alfredo"),
        .speechBefore = COMPOUND_STRING("A fiery gourmet am I!"),
        .speechWin    = COMPOUND_STRING("It's a tasty gourmet victory!"),
        .speechLose   = COMPOUND_STRING("What a disaster that was!"),
        .monSet = gBattleFrontierTrainerMons_Alfredo
    },
    [FRONTIER_TRAINER_RUBEN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Ruben"),
        .speechBefore = COMPOUND_STRING("I can't wait to get going."),
        .speechWin    = COMPOUND_STRING("Get going! This is goodbye."),
        .speechLose   = COMPOUND_STRING("I've got to get going."),
        .monSet = gBattleFrontierTrainerMons_Ruben
    },
    [FRONTIER_TRAINER_LAMAR] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Lamar"),
        .speechBefore = COMPOUND_STRING("A present for me?"),
        .speechWin    = COMPOUND_STRING("Mmm this is quite tasty…"),
        .speechLose   = COMPOUND_STRING("Oh it's a game, is it?"),
        .monSet = gBattleFrontierTrainerMons_Lamar
    },
    [FRONTIER_TRAINER_JAXON] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Jaxon"),
        .speechBefore = COMPOUND_STRING("A shell armor is what I want."),
        .speechWin    = COMPOUND_STRING("My father and mother won't accept."),
        .speechLose   = COMPOUND_STRING("Please I need a shell armor!"),
        .monSet = gBattleFrontierTrainerMons_Jaxon
    },
    [FRONTIER_TRAINER_LOGAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Logan"),
        .speechBefore = COMPOUND_STRING("If I lose I will study for school."),
        .speechWin    = COMPOUND_STRING("Me study? Not very likely to see."),
        .speechLose   = COMPOUND_STRING("No thanks, I am going to sleep."),
        .monSet = gBattleFrontierTrainerMons_Logan
    },
    [FRONTIER_TRAINER_EMILEE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Emilee"),
        .speechBefore = COMPOUND_STRING("Is this kind of battle OK?"),
        .speechWin    = COMPOUND_STRING("Let's go for an icy wind surf."),
        .speechLose   = COMPOUND_STRING("How about a rock slide show?"),
        .monSet = gBattleFrontierTrainerMons_Emilee
    },
    [FRONTIER_TRAINER_JOSIE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Josie"),
        .speechBefore = COMPOUND_STRING("A Pokémon fashion contest\nis pretty."),
        .speechWin    = COMPOUND_STRING("I really like mode fashion things."),
        .speechLose   = COMPOUND_STRING("You're totally lacking in\nfashion sense."),
        .monSet = gBattleFrontierTrainerMons_Josie
    },
    [FRONTIER_TRAINER_ARMANDO] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("Armando"),
        .speechBefore = COMPOUND_STRING("I need more Grass-type Pokémon."),
        .speechWin    = COMPOUND_STRING("Trade me a Grass Pokémon please."),
        .speechLose   = COMPOUND_STRING("There aren't enough Grass-type Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Armando
    },
    [FRONTIER_TRAINER_SKYLER] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("Skyler"),
        .speechBefore = COMPOUND_STRING("Ingrain is my choice battle move."),
        .speechWin    = COMPOUND_STRING("You can't move me now!"),
        .speechLose   = COMPOUND_STRING("You cut me down…"),
        .monSet = gBattleFrontierTrainerMons_Skyler
    },
    [FRONTIER_TRAINER_RUTH] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("Ruth"),
        .speechBefore = COMPOUND_STRING("I want to enjoy this battle."),
        .speechWin    = COMPOUND_STRING("That was much too easy!"),
        .speechLose   = COMPOUND_STRING("Please stop, I don't enjoy this."),
        .monSet = gBattleFrontierTrainerMons_Ruth
    },
    [FRONTIER_TRAINER_MELODY] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("Melody"),
        .speechBefore = COMPOUND_STRING("I wish Sunday is a sunny day."),
        .speechWin    = COMPOUND_STRING("Sunday seems forever to come…"),
        .speechLose   = COMPOUND_STRING("The forecast says it will hail."),
        .monSet = gBattleFrontierTrainerMons_Melody
    },
    [FRONTIER_TRAINER_PEDRO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("Pedro"),
        .speechBefore = COMPOUND_STRING("A swift swim will do you good."),
        .speechWin    = COMPOUND_STRING("That's how I sink an opponent."),
        .speechLose   = COMPOUND_STRING("Uh oh! A whirlpool!"),
        .monSet = gBattleFrontierTrainerMons_Pedro
    },
    [FRONTIER_TRAINER_ERICK] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("Erick"),
        .speechBefore = COMPOUND_STRING("I will tackle you down!"),
        .speechWin    = COMPOUND_STRING("Don't you run away you loser!"),
        .speechLose   = COMPOUND_STRING("I didn't think you would counter."),
        .monSet = gBattleFrontierTrainerMons_Erick
    },
    [FRONTIER_TRAINER_ELAINE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("Elaine"),
        .speechBefore = COMPOUND_STRING("My heroine adventure\nisn't going well."),
        .speechWin    = COMPOUND_STRING("Thank you! That's what I need."),
        .speechLose   = COMPOUND_STRING("I know I am not a heroine."),
        .monSet = gBattleFrontierTrainerMons_Elaine
    },
    [FRONTIER_TRAINER_JOYCE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("Joyce"),
        .speechBefore = COMPOUND_STRING("You make me go ahaha!"),
        .speechWin    = COMPOUND_STRING("Lalala, no losing for me!"),
        .speechLose   = COMPOUND_STRING("Lalala… Huh?"),
        .monSet = gBattleFrontierTrainerMons_Joyce
    },
    [FRONTIER_TRAINER_TODD] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Todd"),
        .speechBefore = COMPOUND_STRING("You're a lightning rod\nfor my power."),
        .speechWin    = COMPOUND_STRING("That's all you could absorb?"),
        .speechLose   = COMPOUND_STRING("You reflect my power back?"),
        .monSet = gBattleFrontierTrainerMons_Todd
    },
    [FRONTIER_TRAINER_GAVIN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Gavin"),
        .speechBefore = COMPOUND_STRING("I will bide my time."),
        .speechWin    = COMPOUND_STRING("It's over so soon?"),
        .speechLose   = COMPOUND_STRING("My mistake was too expensive…"),
        .monSet = gBattleFrontierTrainerMons_Gavin
    },
    [FRONTIER_TRAINER_MALORY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Malory"),
        .speechBefore = COMPOUND_STRING("Promise to show me cute Pokémon."),
        .speechWin    = COMPOUND_STRING("Giggle… thank you so much."),
        .speechLose   = COMPOUND_STRING("Tch, your Pokémon aren't very nice."),
        .monSet = gBattleFrontierTrainerMons_Malory
    },
    [FRONTIER_TRAINER_ESTHER] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Esther"),
        .speechBefore = COMPOUND_STRING("I want a nice present…"),
        .speechWin    = COMPOUND_STRING("Please get me a Pokémon game."),
        .speechLose   = COMPOUND_STRING("Message cards make a weak present."),
        .monSet = gBattleFrontierTrainerMons_Esther
    },
    [FRONTIER_TRAINER_OSCAR] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Oscar"),
        .speechBefore = COMPOUND_STRING("Let's see your power in full."),
        .speechWin    = COMPOUND_STRING("That was not your full power!"),
        .speechLose   = COMPOUND_STRING("Not funny… You're too strong."),
        .monSet = gBattleFrontierTrainerMons_Oscar
    },
    [FRONTIER_TRAINER_WILSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Wilson"),
        .speechBefore = COMPOUND_STRING("Work is making me\nan early bird."),
        .speechWin    = COMPOUND_STRING("All work and no play…"),
        .speechLose   = COMPOUND_STRING("Endure is all I can do."),
        .monSet = gBattleFrontierTrainerMons_Wilson
    },
    [FRONTIER_TRAINER_CLARE] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Clare"),
        .speechBefore = COMPOUND_STRING("Yay! A tough trainer!"),
        .speechWin    = COMPOUND_STRING("Aww! A wimpy trainer!"),
        .speechLose   = COMPOUND_STRING("Cool! A genius trainer!"),
        .monSet = gBattleFrontierTrainerMons_Clare
    },
    [FRONTIER_TRAINER_TESS] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Tess"),
        .speechBefore = COMPOUND_STRING("Want some Gulpin design sweets?"),
        .speechWin    = COMPOUND_STRING("They're a secret\nPokémon gourmet item."),
        .speechLose   = COMPOUND_STRING("They're tasty! Refreshing too!"),
        .monSet = gBattleFrontierTrainerMons_Tess
    },
    [FRONTIER_TRAINER_LEON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Leon"),
        .speechBefore = COMPOUND_STRING("I am better than any other trainer."),
        .speechWin    = COMPOUND_STRING("I did it. Jump kick for joy."),
        .speechLose   = COMPOUND_STRING("Back home I will go…"),
        .monSet = gBattleFrontierTrainerMons_Leon
    },
    [FRONTIER_TRAINER_ALONZO] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Alonzo"),
        .speechBefore = COMPOUND_STRING("I've not lost once yet!"),
        .speechWin    = COMPOUND_STRING("Your sad look becomes you."),
        .speechLose   = COMPOUND_STRING("I don't believe this…"),
        .monSet = gBattleFrontierTrainerMons_Alonzo
    },
    [FRONTIER_TRAINER_VINCE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Vince"),
        .speechBefore = COMPOUND_STRING("The top trainer, that's me!"),
        .speechWin    = COMPOUND_STRING("The top rank belongs to me!"),
        .speechLose   = COMPOUND_STRING("I will appeal this outrage!"),
        .monSet = gBattleFrontierTrainerMons_Vince
    },
    [FRONTIER_TRAINER_BRYON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Bryon"),
        .speechBefore = COMPOUND_STRING("My barrage will slam you!"),
        .speechWin    = COMPOUND_STRING("You didn't count_on any less?"),
        .speechLose   = COMPOUND_STRING("I just don't get it…"),
        .monSet = gBattleFrontierTrainerMons_Bryon
    },
    [FRONTIER_TRAINER_AVA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Ava"),
        .speechBefore = COMPOUND_STRING("I am a treasure of this world."),
        .speechWin    = COMPOUND_STRING("My world is full of wonder."),
        .speechLose   = COMPOUND_STRING("Why are you so terrible?"),
        .monSet = gBattleFrontierTrainerMons_Ava
    },
    [FRONTIER_TRAINER_MIRIAM] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Miriam"),
        .speechBefore = COMPOUND_STRING("Oh, a trainer with a scary face."),
        .speechWin    = COMPOUND_STRING("Ahaha you only look scary!"),
        .speechLose   = COMPOUND_STRING("Aiyeeh! You really are scary."),
        .monSet = gBattleFrontierTrainerMons_Miriam
    },
    [FRONTIER_TRAINER_CARRIE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Carrie"),
        .speechBefore = COMPOUND_STRING("I will show you gutsy!"),
        .speechWin    = COMPOUND_STRING("It's all about guts!"),
        .speechLose   = COMPOUND_STRING("Oh no… Self-Destruct mode!"),
        .monSet = gBattleFrontierTrainerMons_Carrie
    },
    [FRONTIER_TRAINER_GILLIAN2] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Gillian"),
        .speechBefore = COMPOUND_STRING("I seek a truly great battle."),
        .speechWin    = COMPOUND_STRING("I need a_lot better battle…"),
        .speechLose   = COMPOUND_STRING("That was a little too much\nto take."),
        .monSet = gBattleFrontierTrainerMons_Gillian2
    },
    [FRONTIER_TRAINER_TYLER] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Tyler"),
        .speechBefore = COMPOUND_STRING("Yo! Let's go!!"),
        .speechWin    = COMPOUND_STRING("Yo! I won yo!"),
        .speechLose   = COMPOUND_STRING("Yo! I lost yo."),
        .monSet = gBattleFrontierTrainerMons_Tyler
    },
    [FRONTIER_TRAINER_CHAZ] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Chaz"),
        .speechBefore = COMPOUND_STRING("My Pokémon have too much power."),
        .speechWin    = COMPOUND_STRING("They have more power now!"),
        .speechLose   = COMPOUND_STRING("Yeah take down their\npower a tiny bit please."),
        .monSet = gBattleFrontierTrainerMons_Chaz
    },
    [FRONTIER_TRAINER_NELSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Nelson"),
        .speechBefore = COMPOUND_STRING("Well then, will this\nPokémon work?"),
        .speechWin    = COMPOUND_STRING("I see that it was too strong."),
        .speechLose   = COMPOUND_STRING("It didn't match up well, I think."),
        .monSet = gBattleFrontierTrainerMons_Nelson
    },
    [FRONTIER_TRAINER_SHANIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Shania"),
        .speechBefore = COMPOUND_STRING("All my Pokémon\nabsolutely adore me."),
        .speechWin    = COMPOUND_STRING("Happiness is a Pokémon\nwith cute charm."),
        .speechLose   = COMPOUND_STRING("You're so mean\nto cute Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Shania
    },
    [FRONTIER_TRAINER_STELLA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Stella"),
        .speechBefore = COMPOUND_STRING("I want to see your Pokémon."),
        .speechWin    = COMPOUND_STRING("Well, aren't they boring?\nAhaha."),
        .speechLose   = COMPOUND_STRING("Your Pokémon are something else\nall right."),
        .monSet = gBattleFrontierTrainerMons_Stella
    },
    [FRONTIER_TRAINER_DORINE] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Dorine"),
        .speechBefore = COMPOUND_STRING("I am young and strong!"),
        .speechWin    = COMPOUND_STRING("See? Aren't I good?"),
        .speechLose   = COMPOUND_STRING("This isn't working out at all."),
        .monSet = gBattleFrontierTrainerMons_Dorine
    },
    [FRONTIER_TRAINER_MADDOX] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Maddox"),
        .speechBefore = COMPOUND_STRING("Dragon Pokémon are my\nno. 1 choice."),
        .speechWin    = COMPOUND_STRING("It's no secret Dragon Pokémon win."),
        .speechLose   = COMPOUND_STRING("Dragon Pokémon should not lose!"),
        .monSet = gBattleFrontierTrainerMons_Maddox
    },
    [FRONTIER_TRAINER_DAVIN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Davin"),
        .speechBefore = COMPOUND_STRING("Let's hear you roar!"),
        .speechWin    = COMPOUND_STRING("Wroooaar! Victory!!"),
        .speechLose   = COMPOUND_STRING("Wroooaar! Why?!"),
        .monSet = gBattleFrontierTrainerMons_Davin
    },
    [FRONTIER_TRAINER_TREVON] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Trevon"),
        .speechBefore = COMPOUND_STRING("I am living only with\nDragon Pokémon."),
        .speechWin    = COMPOUND_STRING("The way I am living is perfect."),
        .speechLose   = COMPOUND_STRING("You've destroyed the way\nI am living."),
        .monSet = gBattleFrontierTrainerMons_Trevon
    },
    [FRONTIER_TRAINER_MATEO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Mateo"),
        .speechBefore = COMPOUND_STRING("This should be over soon enough."),
        .speechWin    = COMPOUND_STRING("Well that didn't take very much."),
        .speechLose   = COMPOUND_STRING("I can't lose so soon!"),
        .monSet = gBattleFrontierTrainerMons_Mateo
    },
    [FRONTIER_TRAINER_BRET] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Bret"),
        .speechBefore = COMPOUND_STRING("I like rock solid\nPokémon the best."),
        .speechWin    = COMPOUND_STRING("Toughness is the way to go."),
        .speechLose   = COMPOUND_STRING("I also have a\nplush doll collection."),
        .monSet = gBattleFrontierTrainerMons_Bret
    },
    [FRONTIER_TRAINER_RAUL] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Raul"),
        .speechBefore = COMPOUND_STRING("I reject every weak trainer."),
        .speechWin    = COMPOUND_STRING("Humph! Another weak trainer…"),
        .speechLose   = COMPOUND_STRING("There is nothing weak about you."),
        .monSet = gBattleFrontierTrainerMons_Raul
    },
    [FRONTIER_TRAINER_KAY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Kay"),
        .speechBefore = COMPOUND_STRING("And yet another battle?"),
        .speechWin    = COMPOUND_STRING("I won but I am tired…"),
        .speechLose   = COMPOUND_STRING("Good it's over at last…"),
        .monSet = gBattleFrontierTrainerMons_Kay
    },
    [FRONTIER_TRAINER_ELENA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Elena"),
        .speechBefore = COMPOUND_STRING("A battle girl, that's me!"),
        .speechWin    = COMPOUND_STRING("Isn't a battle girl awesome?"),
        .speechLose   = COMPOUND_STRING("You dislike a battle girl?"),
        .monSet = gBattleFrontierTrainerMons_Elena
    },
    [FRONTIER_TRAINER_ALANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Alana"),
        .speechBefore = COMPOUND_STRING("Eat my invincible attack, you!"),
        .speechWin    = COMPOUND_STRING("You have much to learn."),
        .speechLose   = COMPOUND_STRING("So much for my invincible attack."),
        .monSet = gBattleFrontierTrainerMons_Alana
    },
    [FRONTIER_TRAINER_ALEXAS] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Alexas"),
        .speechBefore = COMPOUND_STRING("Good to meet you, young trainer!"),
        .speechWin    = COMPOUND_STRING("Wahahaha! Give it up."),
        .speechLose   = COMPOUND_STRING("You are a strong trainer kid."),
        .monSet = gBattleFrontierTrainerMons_Alexas
    },
    [FRONTIER_TRAINER_WESTON] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Weston"),
        .speechBefore = COMPOUND_STRING("I don't play down all right?"),
        .speechWin    = COMPOUND_STRING("You're far too easy to attack."),
        .speechLose   = COMPOUND_STRING("Well well… I surrender…"),
        .monSet = gBattleFrontierTrainerMons_Weston
    },
    [FRONTIER_TRAINER_JASPER] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Jasper"),
        .speechBefore = COMPOUND_STRING("I am not old I am skilled!"),
        .speechWin    = COMPOUND_STRING("Skilled, that's what I am!"),
        .speechLose   = COMPOUND_STRING("I am shocked! Down I go."),
        .monSet = gBattleFrontierTrainerMons_Jasper
    },
    [FRONTIER_TRAINER_NADIA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Nadia"),
        .speechBefore = COMPOUND_STRING("You can't beat me down!"),
        .speechWin    = COMPOUND_STRING("Hah! I beat you."),
        .speechLose   = COMPOUND_STRING("I am beat up and downcast…"),
        .monSet = gBattleFrontierTrainerMons_Nadia
    },
    [FRONTIER_TRAINER_MIRANDA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Miranda"),
        .speechBefore = COMPOUND_STRING("Well well, let's start."),
        .speechWin    = COMPOUND_STRING("What? done so soon?"),
        .speechLose   = COMPOUND_STRING("Well, I see that I am too weak."),
        .monSet = gBattleFrontierTrainerMons_Miranda
    },
    [FRONTIER_TRAINER_EMMA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Emma"),
        .speechBefore = COMPOUND_STRING("I've been hearing about you."),
        .speechWin    = COMPOUND_STRING("I think I've misheard things."),
        .speechLose   = COMPOUND_STRING("What I've been hearing is right."),
        .monSet = gBattleFrontierTrainerMons_Emma
    },
    [FRONTIER_TRAINER_DESERT_TR5_HIKERO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Rolando"),
        .speechBefore = COMPOUND_STRING("I am a super Pokémon hero!"),
        .speechWin    = COMPOUND_STRING("Was that enough for you?"),
        .speechLose   = COMPOUND_STRING("You should not beat a hero."),
        .monSet = gBattleFrontierTrainerMons_Rolando
    },
    [FRONTIER_TRAINER_DESERT_TR7_PICNICKER3LY] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Stanly"),
        .speechBefore = COMPOUND_STRING("This should be an easy match."),
        .speechWin    = COMPOUND_STRING("It really was easy."),
        .speechLose   = COMPOUND_STRING("Are you happy now?"),
        .monSet = gBattleFrontierTrainerMons_Stanly
    },
    [FRONTIER_TRAINER_DARIO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Dario"),
        .speechBefore = COMPOUND_STRING("My foresight says I will win."),
        .speechWin    = COMPOUND_STRING("My foresight has been perfect."),
        .speechLose   = COMPOUND_STRING("I didn't see this reversal…"),
        .monSet = gBattleFrontierTrainerMons_Dario
    },
    [FRONTIER_TRAINER_KARLEE] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Karlee"),
        .speechBefore = COMPOUND_STRING("Something good will come of this."),
        .speechWin    = COMPOUND_STRING("You see? Fantastic!"),
        .speechLose   = COMPOUND_STRING("That something good went to you."),
        .monSet = gBattleFrontierTrainerMons_Karlee
    },
    [FRONTIER_TRAINER_JAYLIN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Jaylin"),
        .speechBefore = COMPOUND_STRING("Every trainer has been too weak…"),
        .speechWin    = COMPOUND_STRING("It's making me yawn that battle."),
        .speechLose   = COMPOUND_STRING("I slept and so I lost."),
        .monSet = gBattleFrontierTrainerMons_Jaylin
    },
    [FRONTIER_TRAINER_INGRID] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Ingrid"),
        .speechBefore = COMPOUND_STRING("I am not a very mean trainer."),
        .speechWin    = COMPOUND_STRING("Wasn't that a good match?"),
        .speechLose   = COMPOUND_STRING("I lost cause you're mean…"),
        .monSet = gBattleFrontierTrainerMons_Ingrid
    },
    [FRONTIER_TRAINER_DELILAH] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Delilah"),
        .speechBefore = COMPOUND_STRING("Don't grudge me if I win OK?"),
        .speechWin    = COMPOUND_STRING("I am sorry to see you angry."),
        .speechLose   = COMPOUND_STRING("I have a grudge with you."),
        .monSet = gBattleFrontierTrainerMons_Delilah
    },
    [FRONTIER_TRAINER_CARLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Carly"),
        .speechBefore = COMPOUND_STRING("I will scatter some\npoison powder about."),
        .speechWin    = COMPOUND_STRING("It's scary how my strategy works."),
        .speechLose   = COMPOUND_STRING("I dislike you and your Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Carly
    },
    [FRONTIER_TRAINER_LEXIE] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Lexie"),
        .speechBefore = COMPOUND_STRING("Want to see scary Pokémon?"),
        .speechWin    = COMPOUND_STRING("Wasn't that scary, eh?"),
        .speechLose   = COMPOUND_STRING("You're more scary than my Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Lexie
    },
    [FRONTIER_TRAINER_MILLER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Miller"),
        .speechBefore = COMPOUND_STRING("Hello? Hello?!"),
        .speechWin    = COMPOUND_STRING("Hello mother! I won!"),
        .speechLose   = COMPOUND_STRING("My phone isn't working…"),
        .monSet = gBattleFrontierTrainerMons_Miller
    },
    [FRONTIER_TRAINER_MARV] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Marv"),
        .speechBefore = COMPOUND_STRING("You can lose your swagger now."),
        .speechWin    = COMPOUND_STRING("There is no swagger left, eh?"),
        .speechLose   = COMPOUND_STRING("Go on, swagger all you want."),
        .monSet = gBattleFrontierTrainerMons_Marv
    },
    [FRONTIER_TRAINER_LAYTON] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Layton"),
        .speechBefore = COMPOUND_STRING("I know I am totally cool!"),
        .speechWin    = COMPOUND_STRING("You can look up to me."),
        .speechLose   = COMPOUND_STRING("You're cool! No, really!"),
        .monSet = gBattleFrontierTrainerMons_Layton
    },
    [FRONTIER_TRAINER_BROOKS] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Brooks"),
        .speechBefore = COMPOUND_STRING("This is a high level battle."),
        .speechWin    = COMPOUND_STRING("That was high level\nand exciting too."),
        .speechLose   = COMPOUND_STRING("You're too high in level…"),
        .monSet = gBattleFrontierTrainerMons_Brooks
    },
    [FRONTIER_TRAINER_GREGORY] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Gregory"),
        .speechBefore = COMPOUND_STRING("I am not that old yet."),
        .speechWin    = COMPOUND_STRING("Who says I am too old?"),
        .speechLose   = COMPOUND_STRING("Please, I am really not\nthat old."),
        .monSet = gBattleFrontierTrainerMons_Gregory
    },
    [FRONTIER_TRAINER_REESE] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Reese"),
        .speechBefore = COMPOUND_STRING("I've a couple things."),
        .speechWin    = COMPOUND_STRING("Don't diet, play sports instead."),
        .speechLose   = COMPOUND_STRING("Instead of television, get a book."),
        .monSet = gBattleFrontierTrainerMons_Reese
    },
    [FRONTIER_TRAINER_MASON] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Mason"),
        .speechBefore = COMPOUND_STRING("Please don't make this scary."),
        .speechWin    = COMPOUND_STRING("Thank you… I am happy now."),
        .speechLose   = COMPOUND_STRING("I am disappointed…"),
        .monSet = gBattleFrontierTrainerMons_Mason
    },
    [FRONTIER_TRAINER_TOBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Toby"),
        .speechBefore = COMPOUND_STRING("Listen up, I always win."),
        .speechWin    = COMPOUND_STRING("I am a genius or what?"),
        .speechLose   = COMPOUND_STRING("I can beat you at smartness."),
        .monSet = gBattleFrontierTrainerMons_Toby
    },
    [FRONTIER_TRAINER_DOROTHY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Dorothy"),
        .speechBefore = COMPOUND_STRING("The sports world should\naccept Pokémon."),
        .speechWin    = COMPOUND_STRING("Thank you!\nThat win was refreshing."),
        .speechLose   = COMPOUND_STRING("Thank you!\nThat loss was refreshing."),
        .monSet = gBattleFrontierTrainerMons_Dorothy
    },
    [FRONTIER_TRAINER_PIPER] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Piper"),
        .speechBefore = COMPOUND_STRING("Come on,\nyou need a speed boost?"),
        .speechWin    = COMPOUND_STRING("You need to show more guts."),
        .speechLose   = COMPOUND_STRING("Oh you!"),
        .monSet = gBattleFrontierTrainerMons_Piper
    },
    [FRONTIER_TRAINER_FINN] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Finn"),
        .speechBefore = COMPOUND_STRING("Not another trainer battle…"),
        .speechWin    = COMPOUND_STRING("Won't this ever end?"),
        .speechLose   = COMPOUND_STRING("I finally get to rest a little"),
        .monSet = gBattleFrontierTrainerMons_Finn
    },
    [FRONTIER_TRAINER_SAMIR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Samir"),
        .speechBefore = COMPOUND_STRING("I dive below the surf!"),
        .speechWin    = COMPOUND_STRING("Yahoo take a dive, you!"),
        .speechLose   = COMPOUND_STRING("I am going to sink…"),
        .monSet = gBattleFrontierTrainerMons_Samir
    },
    [FRONTIER_TRAINER_FIONA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Fiona"),
        .speechBefore = COMPOUND_STRING("Did you limber up before?"),
        .speechWin    = COMPOUND_STRING("You need to be more ready."),
        .speechLose   = COMPOUND_STRING("Being limber didn't work for me."),
        .monSet = gBattleFrontierTrainerMons_Fiona
    },
    [FRONTIER_TRAINER_GLORIA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Gloria"),
        .speechBefore = COMPOUND_STRING("I like to attack with\nsuction cups."),
        .speechWin    = COMPOUND_STRING("Giggle… It's over for you."),
        .speechLose   = COMPOUND_STRING("I don't get how suction cups work."),
        .monSet = gBattleFrontierTrainerMons_Gloria
    },
    [FRONTIER_TRAINER_NICO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Nico"),
        .speechBefore = COMPOUND_STRING("Like a sonic boom I've arrived."),
        .speechWin    = COMPOUND_STRING("Sorry to make you so downcast."),
        .speechLose   = COMPOUND_STRING("I am going with a\nsupersonic speed boost."),
        .monSet = gBattleFrontierTrainerMons_Nico
    },
    [FRONTIER_TRAINER_JEREMY] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Jeremy"),
        .speechBefore = COMPOUND_STRING("A Pokémon master, that's my dream."),
        .speechWin    = COMPOUND_STRING("My dream isn't far off!"),
        .speechLose   = COMPOUND_STRING("What I dream isn't happening…"),
        .monSet = gBattleFrontierTrainerMons_Jeremy
    },
    [FRONTIER_TRAINER_CAITLIN] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Caitlin"),
        .speechBefore = COMPOUND_STRING("Don't you think I am cute?"),
        .speechWin    = COMPOUND_STRING("There is more to me than cuteness."),
        .speechLose   = COMPOUND_STRING("My cute charm doesn't attract you?"),
        .monSet = gBattleFrontierTrainerMons_Caitlin
    },
    [FRONTIER_TRAINER_REENA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Reena"),
        .speechBefore = COMPOUND_STRING("I am always happy happy happy!"),
        .speechWin    = COMPOUND_STRING("Oh yay! Yahoo for me."),
        .speechLose   = COMPOUND_STRING("Yahoo! I am happy for you."),
        .monSet = gBattleFrontierTrainerMons_Reena
    },
    [FRONTIER_TRAINER_AVERY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Avery"),
        .speechBefore = COMPOUND_STRING("I've got a_lot of Bug Pokémon."),
        .speechWin    = COMPOUND_STRING("My Bug Pokémon are all\nunbelievable."),
        .speechLose   = COMPOUND_STRING("My Bug Pokémon are all\nupside-down."),
        .monSet = gBattleFrontierTrainerMons_Avery
    },
    [FRONTIER_TRAINER_LIAM] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Liam"),
        .speechBefore = COMPOUND_STRING("We really dislike Fire and Flying."),
        .speechWin    = COMPOUND_STRING("Bug Pokémon aren't bad, hey?"),
        .speechLose   = COMPOUND_STRING("You know what we dislike, hey?"),
        .monSet = gBattleFrontierTrainerMons_Liam
    },
    [FRONTIER_TRAINER_THEO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Theo"),
        .speechBefore = COMPOUND_STRING("Fishing is my choice in life."),
        .speechWin    = COMPOUND_STRING("Water Pokémon attract me\nwithout end."),
        .speechLose   = COMPOUND_STRING("Don't count on that\nhappening another time."),
        .monSet = gBattleFrontierTrainerMons_Theo
    },
    [FRONTIER_TRAINER_BAILEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Bailey"),
        .speechBefore = COMPOUND_STRING("I am an adult,\nI battle easy."),
        .speechWin    = COMPOUND_STRING("I am an adult,\nI swallow joy."),
        .speechLose   = COMPOUND_STRING("I am an adult,\nI swallow frustration."),
        .monSet = gBattleFrontierTrainerMons_Bailey
    },
    [FRONTIER_TRAINER_HUGO] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Hugo"),
        .speechBefore = COMPOUND_STRING("I try the best I can."),
        .speechWin    = COMPOUND_STRING("I can_win if I try EC_WORD_ENOUGH"),
        .speechLose   = COMPOUND_STRING("I did try didn't I?"),
        .monSet = gBattleFrontierTrainerMons_Hugo
    },
    [FRONTIER_TRAINER_BRYCE] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Bryce"),
        .speechBefore = COMPOUND_STRING("I was on vacation until only EC_WORD_YESTERDAY"),
        .speechWin    = COMPOUND_STRING("I haven't lost my skill yet."),
        .speechLose   = COMPOUND_STRING("That's EC_WORD_IT… I need EC_WORD_SLEEP"),
        .monSet = gBattleFrontierTrainerMons_Bryce
    },
    [FRONTIER_TRAINER_GIDEON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Gideon"),
        .speechBefore = COMPOUND_STRING("What's up? You think I am scary?"),
        .speechWin    = COMPOUND_STRING("I am cool but not EC_WORD_SCARY!"),
        .speechLose   = COMPOUND_STRING("Look at my fabulous fashion EC_WORD_SENSE"),
        .monSet = gBattleFrontierTrainerMons_Gideon
    },
    [FRONTIER_TRAINER_TRISTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Triston"),
        .speechBefore = COMPOUND_STRING("I would rather look at Pokémon."),
        .speechWin    = COMPOUND_STRING("Huh? you mean I won?!"),
        .speechLose   = COMPOUND_STRING("See? I always lose"),
        .monSet = gBattleFrontierTrainerMons_Triston
    },
    [FRONTIER_TRAINER_CHARLES] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Charles"),
        .speechBefore = COMPOUND_STRING("It's hopeless to struggle with me."),
        .speechWin    = COMPOUND_STRING("Submission was your only EC_WORD_CHOICE"),
        .speechLose   = COMPOUND_STRING("I am going down down down!"),
        .monSet = gBattleFrontierTrainerMons_Charles
    },
    [FRONTIER_TRAINER_RAYMOND] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Raymond"),
        .speechBefore = COMPOUND_STRING("Want to hear my song?"),
        .speechWin    = COMPOUND_STRING("Satisfied that's what I am!"),
        .speechLose   = COMPOUND_STRING("Satisfied is what I can't EC_WORD_BE"),
        .monSet = gBattleFrontierTrainerMons_Raymond
    },
    [FRONTIER_TRAINER_DIRK] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Dirk"),
        .speechBefore = COMPOUND_STRING("Flying Pokémon are above the EC_WORD_REST"),
        .speechWin    = COMPOUND_STRING("You can't win! Flying Pokémon EC_WORD_RULE"),
        .speechLose   = COMPOUND_STRING("Aren't there more Flying Pokémon?"),
        .monSet = gBattleFrontierTrainerMons_Dirk
    },
    [FRONTIER_TRAINER_HAROLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Harold"),
        .speechBefore = COMPOUND_STRING("My Pokémon appeal to you?"),
        .speechWin    = COMPOUND_STRING("You do like my Pokémon?"),
        .speechLose   = COMPOUND_STRING("So you dislike my Pokémon?"),
        .monSet = gBattleFrontierTrainerMons_Harold
    },
    [FRONTIER_TRAINER_OMAR] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Omar"),
        .speechBefore = COMPOUND_STRING("Let me win in return for a EC_WORD_PRESENT"),
        .speechWin    = COMPOUND_STRING("Here you are some toxic EC_WORD_SWEETS"),
        .speechLose   = COMPOUND_STRING("Your present? what for?!"),
        .monSet = gBattleFrontierTrainerMons_Omar
    },
    [FRONTIER_TRAINER_PETER] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Peter"),
        .speechBefore = COMPOUND_STRING("I brag about my happiness OK?"),
        .speechWin    = COMPOUND_STRING("You have to listen to me EC_WORD_BRAG"),
        .speechLose   = COMPOUND_STRING("I am disappointed you won't listen EC_WORD_TO_ME"),
        .monSet = gBattleFrontierTrainerMons_Peter
    },
    [FRONTIER_TRAINER_DEV] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Dev"),
        .speechBefore = COMPOUND_STRING("Come on let's get a move EC_WORD_ON"),
        .speechWin    = COMPOUND_STRING("I get to nap after EC_WORD_THAT"),
        .speechLose   = COMPOUND_STRING("I need to nap after EC_WORD_THAT"),
        .monSet = gBattleFrontierTrainerMons_Dev
    },
    [FRONTIER_TRAINER_COREY] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Corey"),
        .speechBefore = COMPOUND_STRING("Let's teach you how tough EC_WORD_I_AM"),
        .speechWin    = COMPOUND_STRING("Look at me make a EC_WORD_BRICK_BREAK"),
        .speechLose   = COMPOUND_STRING("My frustration is close to EC_WORD_ERUPTION"),
        .monSet = gBattleFrontierTrainerMons_Corey
    },
    [FRONTIER_TRAINER_ANDRE] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Andre"),
        .speechBefore = COMPOUND_STRING("Now this is a perfect EC_WORD_FLAME_BODY"),
        .speechWin    = COMPOUND_STRING("Look at my fiery EC_WORD_DANCE!"),
        .speechLose   = COMPOUND_STRING("You want an explosion here?"),
        .monSet = gBattleFrontierTrainerMons_Andre
    },
    [FRONTIER_TRAINER_FERRIS] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Ferris"),
        .speechBefore = COMPOUND_STRING("I am no. 1 in the old EC_WORD_CLASS"),
        .speechWin    = COMPOUND_STRING("No. 1 that's what I am!"),
        .speechLose   = COMPOUND_STRING("I am not no. 1 any EC_WORD_MORE…"),
        .monSet = gBattleFrontierTrainerMons_Ferris
    },
    [FRONTIER_TRAINER_ALIVIA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Alivia"),
        .speechBefore = COMPOUND_STRING("I am feeling giddy so should you."),
        .speechWin    = COMPOUND_STRING("It was all together too easy."),
        .speechLose   = COMPOUND_STRING("I will giddy up and EC_WORD_AWAY"),
        .monSet = gBattleFrontierTrainerMons_Alivia
    },
    [FRONTIER_TRAINER_PAIGE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Paige"),
        .speechBefore = COMPOUND_STRING("Let's enjoy our battle EC_WORD_TOGETHER"),
        .speechWin    = COMPOUND_STRING("That's it! Thank you very much."),
        .speechLose   = COMPOUND_STRING("That's it! Do go EC_WORD_ON"),
        .monSet = gBattleFrontierTrainerMons_Paige
    },
    [FRONTIER_TRAINER_ANYA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Anya"),
        .speechBefore = COMPOUND_STRING("I dislike oh so pretty EC_WORD_FASHION"),
        .speechWin    = COMPOUND_STRING("Fashion should match the EC_WORD_PERSON"),
        .speechLose   = COMPOUND_STRING("Pretty could be EC_WORD_GOOD"),
        .monSet = gBattleFrontierTrainerMons_Anya
    },
    [FRONTIER_TRAINER_DAWN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Dawn"),
        .speechBefore = COMPOUND_STRING("I go all out!"),
        .speechWin    = COMPOUND_STRING("Don't be a baby!"),
        .speechLose   = COMPOUND_STRING("You won! move EC_WORD_ON!"),
        .monSet = gBattleFrontierTrainerMons_Dawn
    },
    [FRONTIER_TRAINER_ABBY] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Abby"),
        .speechBefore = COMPOUND_STRING("I like a trainer that's refreshing."),
        .speechWin    = COMPOUND_STRING("Victory has a EC_WORD_SWEET_SCENT),!"),
        .speechLose   = COMPOUND_STRING("What an awful stench!"),
        .monSet = gBattleFrontierTrainerMons_Abby
    },
    [FRONTIER_TRAINER_GRETEL] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Gretel"),
        .speechBefore = COMPOUND_STRING("I cause outrage as a trainer."),
        .speechWin    = COMPOUND_STRING("It's only natural see_ya EC_WORD_BYE_BYE!"),
        .speechLose   = COMPOUND_STRING("It's hard to believe but EC_WORD_CONGRATS"),
        .monSet = gBattleFrontierTrainerMons_Gretel
    }
};
