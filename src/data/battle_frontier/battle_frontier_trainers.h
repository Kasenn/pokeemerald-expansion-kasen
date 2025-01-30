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
        .speechBefore = COMPOUND_STRING("oh this is so exciting!"),
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
        .speechWin    = COMPOUND_STRING("You're done, aren't you ?"),
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
        .speechWin    = COMPOUND_STRING("Was that enough for you ?"),
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
        .speechBefore = COMPOUND_STRING("EC_WORD_CONFUSED,?  I am a EC_WORD_GENIUS"),
        .speechWin    = COMPOUND_STRING("see?  I am a EC_WORD_GENIUS"),
        .speechLose   = COMPOUND_STRING("I am not a genius in EC_WORD_BATTLE"),
        .monSet = gBattleFrontierTrainerMons_Tristan
    },
    [FRONTIER_TRAINER_JULIANA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Juliana"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_THINK, I am EC_WORD_SHOPPING, too EC_WORD_MUCH"),
        .speechWin    = COMPOUND_STRING("but I want a Pokémon EC_WORD_PLUSH_DOLL"),
        .speechLose   = COMPOUND_STRING("I so want another Pokémon EC_WORD_PLUSH_DOLL"),
        .monSet = gBattleFrontierTrainerMons_Juliana
    },
    [FRONTIER_TRAINER_RYLEE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Rylee"),
        .speechBefore = COMPOUND_STRING("show me that you have EC_WORD_GUTS"),
        .speechWin    = COMPOUND_STRING("EC_WORD_BYE_BYE, ! you have no EC_WORD_GUTS"),
        .speechLose   = COMPOUND_STRING("that was EC_WORD_GUTSY… you're EC_WORD_QUITE, EC_WORD_SUPER"),
        .monSet = gBattleFrontierTrainerMons_Rylee
    },
    [FRONTIER_TRAINER_CHELSEA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Chelsea"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_SERIOUSLY, mean to EC_WORD_WIN!"),
        .speechWin    = COMPOUND_STRING("that was my will to EC_WORD_WIN"),
        .speechLose   = COMPOUND_STRING("you're EC_WORD_FAR, EC_WORD_TOO_STRONG, for EC_WORD_ME"),
        .monSet = gBattleFrontierTrainerMons_Chelsea
    },
    [FRONTIER_TRAINER_DANELA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Danela"),
        .speechBefore = COMPOUND_STRING("you EC_WORD_MUST_BE, my EC_WORD_OPPONENT, EC_WORD_NOW!"),
        .speechWin    = COMPOUND_STRING("oh dear EC_WORD_TOO_WEAK, ! don't EC_WORD_GIVE_UP!"),
        .speechLose   = COMPOUND_STRING("that was good and this is EC_WORD_GOOD_BYE"),
        .monSet = gBattleFrontierTrainerMons_Danela
    },
    [FRONTIER_TRAINER_LIZBETH] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Lizbeth"),
        .speechBefore = COMPOUND_STRING("if I lose you can have a EC_MOVE2(PRESENT)"),
        .speechWin    = COMPOUND_STRING("here it is a little EC_WORD_PRAISE, EC_WORD_AS, your EC_MOVE2(PRESENT)"),
        .speechLose   = COMPOUND_STRING("your EC_MOVE2(PRESENT), EC_WORD_QUES_EXCL, here it is a EC_MOVE(DOUBLE_SLAP)"),
        .monSet = gBattleFrontierTrainerMons_Lizbeth
    },
    [FRONTIER_TRAINER_AMELIA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Amelia"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_BELIEVE, in cute EC_WORD_FASHION, EC_WORD_APPEAL"),
        .speechWin    = COMPOUND_STRING("your EC_WORD_FASHION, EC_WORD_SENSE, is a EC_WORD_DISASTER"),
        .speechLose   = COMPOUND_STRING("that was awful ! I am going EC_WORD_HOME"),
        .monSet = gBattleFrontierTrainerMons_Amelia
    },
    [FRONTIER_TRAINER_JILLIAN] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Jillian"),
        .speechBefore = COMPOUND_STRING("what is that I EC_WORD_SMELL, ?"),
        .speechWin    = COMPOUND_STRING("it's the EC_MOVE(SWEET_SCENT), of tasty EC_WORD_WATER"),
        .speechLose   = COMPOUND_STRING("it's your EC_WORD_OFFENSIVE, EC_WORD_STENCH, that's EC_WORD_WHAT"),
        .monSet = gBattleFrontierTrainerMons_Jillian
    },
    [FRONTIER_TRAINER_ABBIE] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Abbie"),
        .speechBefore = COMPOUND_STRING("you EC_WORD_TRY, my EC_WORD_SECRET, EC_MOVE(AROMATHERAPY), EC_WORD_OK_QUES"),
        .speechWin    = COMPOUND_STRING("my EC_MOVE(AROMATHERAPY), is EC_WORD_TERRIBLE, for EC_WORD_YOU"),
        .speechLose   = COMPOUND_STRING("didn't you EC_WORD_SMELL, a thing EC_WORD_QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Abbie
    },
    [FRONTIER_TRAINER_BRIANA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Briana"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_BOY, EC_WORD_FRIEND, EC_WORD_WORKS, too EC_WORD_MUCH"),
        .speechWin    = COMPOUND_STRING("I EC_WORD_ONLY, EC_WORD_MISS, EC_WORD_HIM, EC_WORD_MORE…"),
        .speechLose   = COMPOUND_STRING("I am so EC_WORD_LONESOME, EC_WORD_WITHOUT, EC_WORD_HIM…"),
        .monSet = gBattleFrontierTrainerMons_Briana
    },
    [FRONTIER_TRAINER_ANTONIO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Antonio"),
        .speechBefore = COMPOUND_STRING("I know how to go EC_WORD_GO"),
        .speechWin    = COMPOUND_STRING("but I don't like to EC_WORD_DANCE"),
        .speechLose   = COMPOUND_STRING("go EC_WORD_GO… just EC_MOVE(FLAIL), EC_WORD_ABOUT"),
        .monSet = gBattleFrontierTrainerMons_Antonio
    },
    [FRONTIER_TRAINER_JADEN] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Jaden"),
        .speechBefore = COMPOUND_STRING("EC_WORD_HELLO, I EC_WORD_THINK, I adore EC_WORD_YOU"),
        .speechWin    = COMPOUND_STRING("you make me EC_MOVE(THRASH), in EC_MOVE2(FRUSTRATION)"),
        .speechLose   = COMPOUND_STRING("EC_WORD_THIS_IS_IT_EXCL,   goodbye EC_WORD_FOREVER!"),
        .monSet = gBattleFrontierTrainerMons_Jaden
    },
    [FRONTIER_TRAINER_DAKOTA] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Dakota"),
        .speechBefore = COMPOUND_STRING("you have to EC_WORD_DANCE, with EC_WORD_POWER"),
        .speechWin    = COMPOUND_STRING("got it? EC_WORD_DANCE, with EC_WORD_POWER"),
        .speechLose   = COMPOUND_STRING("EC_WORD_OKAY, you EC_WORD_UNDERSTAND, EC_WORD_ALL_RIGHT, !"),
        .monSet = gBattleFrontierTrainerMons_Dakota
    },
    [FRONTIER_TRAINER_BRAYDEN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Brayden"),
        .speechBefore = COMPOUND_STRING("EC_WORD_COLOR_CHANGE, EC_WORD_VERSION, toys are EC_WORD_USELESS!"),
        .speechWin    = COMPOUND_STRING("I EC_WORD_ONLY, EC_WORD_COLLECT, EC_WORD_NORMAL, EC_WORD_VERSION, EC_WORD_TOYS"),
        .speechLose   = COMPOUND_STRING("I EC_MOVE2(ATTRACT), EC_WORD_COLOR_CHANGE, EC_WORD_VERSION, EC_WORD_TOYS…"),
        .monSet = gBattleFrontierTrainerMons_Brayden
    },
    [FRONTIER_TRAINER_CORSON] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Corson"),
        .speechBefore = COMPOUND_STRING("I get to EC_MOVE2(BEAT_UP), EC_WORD_ON, EC_WORD_YOU"),
        .speechWin    = COMPOUND_STRING("too EC_WORD_EASY, ! I am so EC_WORD_COOL"),
        .speechLose   = COMPOUND_STRING("EC_WORD_WHY, EC_WORD_QUES_EXCL,  I EC_MOVE2(CURSE), EC_WORD_YOU"),
        .monSet = gBattleFrontierTrainerMons_Corson
    },
    [FRONTIER_TRAINER_TREVIN] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Trevin"),
        .speechBefore = COMPOUND_STRING("there is EC_WORD_NONE, EC_WORD_BETTER, than EC_WORD_ME"),
        .speechWin    = COMPOUND_STRING("EC_WORD_YES_SIR_EXCL,   I am the EC_WORD_BEST"),
        .speechLose   = COMPOUND_STRING("serious EC_WORD_QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Trevin
    },
    [FRONTIER_TRAINER_PATRICK] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Patrick"),
        .speechBefore = COMPOUND_STRING("I am EC_WORD_PERFECT, ! give up EC_WORD_NOW"),
        .speechWin    = COMPOUND_STRING("don't be disappointed I am EC_WORD_PERFECT"),
        .speechLose   = COMPOUND_STRING("but how? I am EC_WORD_PERFECT…"),
        .monSet = gBattleFrontierTrainerMons_Patrick
    },
    [FRONTIER_TRAINER_KADEN] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Kaden"),
        .speechBefore = COMPOUND_STRING("what are you EC_WORD_UP, to ?"),
        .speechWin    = COMPOUND_STRING("you were a EC_WORD_SURPRISE, EC_WORD_TO_ME!"),
        .speechLose   = COMPOUND_STRING("I don't know EC_WORD_WHO, EC_WORD_I_AM…"),
        .monSet = gBattleFrontierTrainerMons_Kaden
    },
    [FRONTIER_TRAINER_MAXWELL] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Maxwell"),
        .speechBefore = COMPOUND_STRING("EC_WORD_HEY_THERE, who is your EC_WORD_RIVAL, ?"),
        .speechWin    = COMPOUND_STRING("my EC_WORD_RIVAL, is my EC_WORD_GIRL, EC_WORD_FRIEND"),
        .speechLose   = COMPOUND_STRING("I am EC_WORD_MAKING, you my EC_WORD_RIVAL"),
        .monSet = gBattleFrontierTrainerMons_Maxwell
    },
    [FRONTIER_TRAINER_DARYL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Daryl"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_ONLY, know how to EC_MOVE(CHARGE)"),
        .speechWin    = COMPOUND_STRING("EC_WORD_AM, I overwhelming EC_WORD_OR, what ?"),
        .speechLose   = COMPOUND_STRING("you're going to a EC_WORD_LEGEND!"),
        .monSet = gBattleFrontierTrainerMons_Daryl
    },
    [FRONTIER_TRAINER_KENNETH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Kenneth"),
        .speechBefore = COMPOUND_STRING("you EC_WORD_BETTER, not EC_MOVE2(SLACK_OFF), with EC_WORD_ME"),
        .speechWin    = COMPOUND_STRING("EC_WORD_DID, my EC_MOVE2(TAUNT), EC_WORD_INTIMIDATE, you ?"),
        .speechLose   = COMPOUND_STRING("I am EC_WORD_SORRY…"),
        .monSet = gBattleFrontierTrainerMons_Kenneth
    },
    [FRONTIER_TRAINER_RICH] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Rich"),
        .speechBefore = COMPOUND_STRING("your EC_MOVE(FACADE), doesn't EC_MOVE2(TRICK), EC_WORD_ME"),
        .speechWin    = COMPOUND_STRING("EC_WORD_SERIOUSLY, are you really EC_WORD_OK_QUES"),
        .speechLose   = COMPOUND_STRING("that was really tough EC_WORD_ON, EC_WORD_ME"),
        .monSet = gBattleFrontierTrainerMons_Rich
    },
    [FRONTIER_TRAINER_CADEN] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Caden"),
        .speechBefore = COMPOUND_STRING("I can't be EC_WORD_DEFEATED, !"),
        .speechWin    = COMPOUND_STRING("EC_WORD_FIRE, !  EC_WORD_FIRE!!"),
        .speechLose   = COMPOUND_STRING("I am EC_WORD_TIRED… it's so EC_WORD_HOT"),
        .monSet = gBattleFrontierTrainerMons_Caden
    },
    [FRONTIER_TRAINER_MARLON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Marlon"),
        .speechBefore = COMPOUND_STRING("a EC_WORD_POKEDEX, is a little EC_WORD_RADIO, ?"),
        .speechWin    = COMPOUND_STRING("a little EC_WORD_RADIO, Huh? that's totally EC_WORD_COOL"),
        .speechLose   = COMPOUND_STRING("it's not? is EC_WORD_POKENAV, ?"),
        .monSet = gBattleFrontierTrainerMons_Marlon
    },
    [FRONTIER_TRAINER_NASH] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Nash"),
        .speechBefore = COMPOUND_STRING("I am EC_WORD_ON, EC_WORD_FIRE, EC_WORD_BABY, !"),
        .speechWin    = COMPOUND_STRING("I EC_WORD_LEFT, you just an EC_MOVE2(EMBER)"),
        .speechLose   = COMPOUND_STRING("EC_WORD_AIYEEH!!  no water EC_WORD_PLEASE"),
        .monSet = gBattleFrontierTrainerMons_Nash
    },
    [FRONTIER_TRAINER_ROBBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Robby"),
        .speechBefore = COMPOUND_STRING("EC_WORD_HAHAHA, ! happy to EC_WORD_MEET_YOU!"),
        .speechWin    = COMPOUND_STRING("I am the EC_WORD_LEADER, with EC_WORD_REFRESHING, EC_WORD_SERENE_GRACE"),
        .speechLose   = COMPOUND_STRING("I will EC_MOVE(THRASH), my EC_WORD_TOYS!"),
        .monSet = gBattleFrontierTrainerMons_Robby
    },
    [FRONTIER_TRAINER_REECE] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Reece"),
        .speechBefore = COMPOUND_STRING("my EC_MOVE2(QUICK_ATTACK), can beat a EC_MOVE2(TELEPORT)"),
        .speechWin    = COMPOUND_STRING("like I said I am EC_WORD_DARN, EC_WORD_FAST"),
        .speechLose   = COMPOUND_STRING("I was EC_WORD_KIDDING, about that EC_MOVE2(TELEPORT), EC_WORD_THING"),
        .monSet = gBattleFrontierTrainerMons_Reece
    },
    [FRONTIER_TRAINER_KATHRYN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Kathryn"),
        .speechBefore = COMPOUND_STRING("I don't train good enough ?"),
        .speechWin    = COMPOUND_STRING("don't EC_MOVE2(TAUNT), me like that EC_WORD_OK_QUES"),
        .speechLose   = COMPOUND_STRING("EC_WORD_WHY, EC_WORD_COULDN_T, I win this ?"),
        .monSet = gBattleFrontierTrainerMons_Kathryn
    },
    [FRONTIER_TRAINER_ELLEN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Ellen"),
        .speechBefore = COMPOUND_STRING("EC_WORD_CRUSH, you like an EC_WORD_EGG!"),
        .speechWin    = COMPOUND_STRING("that was a tasty victory for EC_WORD_ME"),
        .speechLose   = COMPOUND_STRING("too tough to EC_WORD_CRUSH, !"),
        .monSet = gBattleFrontierTrainerMons_Ellen
    },
    [FRONTIER_TRAINER_RAMON] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Ramon"),
        .speechBefore = COMPOUND_STRING("EC_WORD_OKAY, !  this is EC_WORD_PERFECTION"),
        .speechWin    = COMPOUND_STRING("I am happy that I EC_WORD_WON!"),
        .speechLose   = COMPOUND_STRING("it's a EC_WORD_SECRET, EC_WORD_WHY, I am EC_WORD_HAPPY"),
        .monSet = gBattleFrontierTrainerMons_Ramon
    },
    [FRONTIER_TRAINER_ARTHUR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Arthur"),
        .speechBefore = COMPOUND_STRING("here I come feeling ready for it EC_WORD_ALL"),
        .speechWin    = COMPOUND_STRING("that's it!   that was EC_WORD_FABULOUS!"),
        .speechLose   = COMPOUND_STRING("that was not what I EC_WORD_NEED"),
        .monSet = gBattleFrontierTrainerMons_Arthur
    },
    [FRONTIER_TRAINER_ALONDRA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Alondra"),
        .speechBefore = COMPOUND_STRING("every EC_WORD_DAY, is a great EC_WORD_DAY"),
        .speechWin    = COMPOUND_STRING("my EC_MOVE2(DIVE), will be a EC_WORD_LEGEND"),
        .speechLose   = COMPOUND_STRING("my EC_MOVE2(DIVE), EC_WORD_LEFT, me EC_WORD_COLD…"),
        .monSet = gBattleFrontierTrainerMons_Alondra
    },
    [FRONTIER_TRAINER_ADRIANA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Adriana"),
        .speechBefore = COMPOUND_STRING("come see an incredible EC_WORD_SWIFT_SWIM!"),
        .speechWin    = COMPOUND_STRING("I make it look so EC_WORD_EASY"),
        .speechLose   = COMPOUND_STRING("I am feeling EC_MOVE2(BEAT_UP), and EC_WORD_TIRED"),
        .monSet = gBattleFrontierTrainerMons_Adriana
    },
    [FRONTIER_TRAINER_MALIK] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Malik"),
        .speechBefore = COMPOUND_STRING("oh not another battle EC_WORD_PLEASE…"),
        .speechWin    = COMPOUND_STRING("I EC_WORD_FINALLY, EC_WORD_WON… I am EC_WORD_TIRED"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_FINALLY, EC_WORD_LOST… I am EC_WORD_TIRED"),
        .monSet = gBattleFrontierTrainerMons_Malik
    },
    [FRONTIER_TRAINER_JILL] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Jill"),
        .speechBefore = COMPOUND_STRING("I am the EC_MOVE2(QUICK_ATTACK), trainer !"),
        .speechWin    = COMPOUND_STRING("the EC_MOVE2(QUICK_ATTACK), trainer EC_WORD_WINS, !"),
        .speechLose   = COMPOUND_STRING("the EC_MOVE2(QUICK_ATTACK), trainer EC_WORD_GIVES, EC_WORD_UP!"),
        .monSet = gBattleFrontierTrainerMons_Jill
    },
    [FRONTIER_TRAINER_ERIK] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Erik"),
        .speechBefore = COMPOUND_STRING("I am the EC_WORD_SPEED_BOOST, EC_WORD_HERO, !"),
        .speechWin    = COMPOUND_STRING("thank you from the EC_WORD_SPEED_BOOST, EC_WORD_HERO!"),
        .speechLose   = COMPOUND_STRING("EC_WORD_WAAAH!!  no EC_WORD_NO!!"),
        .monSet = gBattleFrontierTrainerMons_Erik
    },
    [FRONTIER_TRAINER_YAZMIN] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Yazmin"),
        .speechBefore = COMPOUND_STRING("I would EC_WORD_RATHER, EC_WORD_RUN, than EC_WORD_BIKE"),
        .speechWin    = COMPOUND_STRING("yes I would much EC_WORD_RATHER, EC_WORD_RUN"),
        .speechLose   = COMPOUND_STRING("EC_WORD_BYE_BYE, ! I am going to EC_WORD_RUN_AWAY"),
        .monSet = gBattleFrontierTrainerMons_Yazmin
    },
    [FRONTIER_TRAINER_JAMAL] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Jamal"),
        .speechBefore = COMPOUND_STRING("I am going to be a EC_WORD_FATHER"),
        .speechWin    = COMPOUND_STRING("I can't wait for my EC_WORD_BABY"),
        .speechLose   = COMPOUND_STRING("my EC_WORD_BABY, will be totally EC_WORD_AWESOME"),
        .monSet = gBattleFrontierTrainerMons_Jamal
    },
    [FRONTIER_TRAINER_LESLIE] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Leslie"),
        .speechBefore = COMPOUND_STRING("I am going to be a EC_WORD_MOTHER"),
        .speechWin    = COMPOUND_STRING("a EC_WORD_BABY, will be a little EC_WORD_CHALLENGE"),
        .speechLose   = COMPOUND_STRING("I am too happy to be EC_WORD_ANGRY"),
        .monSet = gBattleFrontierTrainerMons_Leslie
    },
    [FRONTIER_TRAINER_DAVE] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Dave"),
        .speechBefore = COMPOUND_STRING("what should I do EC_WORD_TODAY, ?"),
        .speechWin    = COMPOUND_STRING("I should EC_WORD_ENJOY, some EC_WORD_SPORTS!"),
        .speechLose   = COMPOUND_STRING("I will go EC_WORD_PLAY, a EC_WORD_GAME"),
        .monSet = gBattleFrontierTrainerMons_Dave
    },
    [FRONTIER_TRAINER_CARLO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Carlo"),
        .speechBefore = COMPOUND_STRING("EC_WORD_HAH!!  EC_WORD_YEAH!!"),
        .speechWin    = COMPOUND_STRING("I do EC_WORD_THINGS, at EC_MOVE(EXTREME_SPEED)!"),
        .speechLose   = COMPOUND_STRING("I lost at EC_MOVE(EXTREME_SPEED)…"),
        .monSet = gBattleFrontierTrainerMons_Carlo
    },
    [FRONTIER_TRAINER_EMILIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Emilia"),
        .speechBefore = COMPOUND_STRING("me worry? I have EC_WORD_NONE"),
        .speechWin    = COMPOUND_STRING("EC_WORD_AHAHA, see? that was EC_WORD_FANTASTIC!"),
        .speechLose   = COMPOUND_STRING("EC_WORD_AHAHA, see? that was EC_WORD_ENTERTAINING!"),
        .monSet = gBattleFrontierTrainerMons_Emilia
    },
    [FRONTIER_TRAINER_DALIA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Dalia"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_BIKE, is EC_WORD_VERY, EC_WORD_EXPENSIVE"),
        .speechWin    = COMPOUND_STRING("don't come EC_WORD_NEAR, my EC_WORD_BIKE!"),
        .speechLose   = COMPOUND_STRING("my EC_WORD_BIKE, is my EC_WORD_BEST, EC_WORD_FRIEND"),
        .monSet = gBattleFrontierTrainerMons_Dalia
    },
    [FRONTIER_TRAINER_HITOMI] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Hitomi"),
        .speechBefore = COMPOUND_STRING("EC_WORD_YEAH!!  EC_WORD_HAH!!"),
        .speechWin    = COMPOUND_STRING("what EC_WORD_QUES_EXCL,  I won EC_WORD_QUES_EXCL"),
        .speechLose   = COMPOUND_STRING("EC_WORD_AIYEEH!!  I am EC_WORD_SORRY!!"),
        .monSet = gBattleFrontierTrainerMons_Hitomi
    },
    [FRONTIER_TRAINER_RICARDO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Ricardo"),
        .speechBefore = COMPOUND_STRING("come on ! EC_WORD_PLAY, EC_WORD_TIME, is EC_WORD_OVER"),
        .speechWin    = COMPOUND_STRING("you're out of EC_WORD_HERE, !"),
        .speechLose   = COMPOUND_STRING("please don't EC_WORD_HIT, me !"),
        .monSet = gBattleFrontierTrainerMons_Ricardo
    },
    [FRONTIER_TRAINER_SHIZUKA] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Shizuka"),
        .speechBefore = COMPOUND_STRING("show me that you're EC_WORD_SERIOUS!"),
        .speechWin    = COMPOUND_STRING("I won't EC_WORD_FORGET, about EC_WORD_YOU"),
        .speechLose   = COMPOUND_STRING("you're EC_WORD_PERFECT, in every EC_WORD_WAY!"),
        .monSet = gBattleFrontierTrainerMons_Shizuka
    },
    [FRONTIER_TRAINER_JOANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Joana"),
        .speechBefore = COMPOUND_STRING("you're going to lose right EC_WORD_AWAY"),
        .speechWin    = COMPOUND_STRING("I am the EC_WORD_WINNER, EC_WORD_HEAR, me EC_MOVE2(ROAR)"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_REFUSE, to accept that EC_MOVE(OUTRAGE)"),
        .monSet = gBattleFrontierTrainerMons_Joana
    },
    [FRONTIER_TRAINER_KELLY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Kelly"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_NIGHT, EC_WORD_SCHOOL, is really EC_WORD_SCARY"),
        .speechWin    = COMPOUND_STRING("a EC_WORD_LADY, EC_WORD_GHOST, EC_WORD_APPEARS, EC_WORD_THERE"),
        .speechLose   = COMPOUND_STRING("the EC_WORD_HOME, EC_WORD_WORK, is awfully EC_WORD_SCARY"),
        .monSet = gBattleFrontierTrainerMons_Kelly
    },
    [FRONTIER_TRAINER_RAYNA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Rayna"),
        .speechBefore = COMPOUND_STRING("I am no. 1 EC_WORD_WHEN, it's about EC_WORD_POWER"),
        .speechWin    = COMPOUND_STRING("EC_WORD_UNDERSTAND, my EC_WORD_POWER, EC_WORD_NOW, ?"),
        .speechLose   = COMPOUND_STRING("EC_WORD_TERRIBLE…  I am EC_WORD_TERRIBLE…"),
        .monSet = gBattleFrontierTrainerMons_Rayna
    },
    [FRONTIER_TRAINER_EVAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Evan"),
        .speechBefore = COMPOUND_STRING("every battle EC_WORD_HAS, a EC_WORD_SMELL"),
        .speechWin    = COMPOUND_STRING("oh ! the EC_MOVE(SWEET_SCENT), of EC_WORD_VICTORY"),
        .speechLose   = COMPOUND_STRING("the awful EC_WORD_STENCH, of a EC_WORD_LOSS"),
        .monSet = gBattleFrontierTrainerMons_Evan
    },
    [FRONTIER_TRAINER_JORDAN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Jordan"),
        .speechBefore = COMPOUND_STRING("good !  EC_WORD_COME_ON!!"),
        .speechWin    = COMPOUND_STRING("you can't beat me !"),
        .speechLose   = COMPOUND_STRING("what EC_WORD_QUES_EXCL,  but how ?"),
        .monSet = gBattleFrontierTrainerMons_Jordan
    },
    [FRONTIER_TRAINER_JOEL] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Joel"),
        .speechBefore = COMPOUND_STRING("EC_WORD_FUFUFU…"),
        .speechWin    = COMPOUND_STRING("EC_WORD_GIGGLE…"),
        .speechLose   = COMPOUND_STRING("EC_WORD_HAHAHA…"),
        .monSet = gBattleFrontierTrainerMons_Joel
    },
    [FRONTIER_TRAINER_KRISTEN] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Kristen"),
        .speechBefore = COMPOUND_STRING("EC_WORD_HAHAHA…  a EC_WORD_KID…"),
        .speechWin    = COMPOUND_STRING("just a little EC_WORD_KID, after EC_WORD_ALL!"),
        .speechLose   = COMPOUND_STRING("a tough EC_WORD_KID, Huh? EC_WORD_HUMPH!"),
        .monSet = gBattleFrontierTrainerMons_Kristen
    },
    [FRONTIER_TRAINER_SELPHY] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Selphy"),
        .speechBefore = COMPOUND_STRING("Huh? what EC_WORD_IS_IT_QUES"),
        .speechWin    = COMPOUND_STRING("oh yes ! EC_WORD_WHY, not ?"),
        .speechLose   = COMPOUND_STRING("oh no ! EC_WORD_WHY, not ?"),
        .monSet = gBattleFrontierTrainerMons_Selphy
    },
    [FRONTIER_TRAINER_CHLOE] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Chloe"),
        .speechBefore = COMPOUND_STRING("come we will do battle EC_WORD_NOW"),
        .speechWin    = COMPOUND_STRING("more !  another EC_WORD_BATTLE!"),
        .speechLose   = COMPOUND_STRING("oh !  strong you EC_WORD_ARE"),
        .monSet = gBattleFrontierTrainerMons_Chloe
    },
    [FRONTIER_TRAINER_NORTON] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Norton"),
        .speechBefore = COMPOUND_STRING("I know EC_WORD_ONLY, EC_WORD_YOU"),
        .speechWin    = COMPOUND_STRING("EC_WORD_EXCUSE_ME, but you're a EC_WORD_PUSHOVER!"),
        .speechLose   = COMPOUND_STRING("you're some kind of EC_WORD_AWESOME!"),
        .monSet = gBattleFrontierTrainerMons_Norton
    },
    [FRONTIER_TRAINER_LUKAS] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Lukas"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_JOKING, is pretty EC_WORD_TERRIBLE…"),
        .speechWin    = COMPOUND_STRING("your EC_WORD_ROCK_HEAD, EC_WORD_EXISTS, to EC_WORD_SHINE!"),
        .speechLose   = COMPOUND_STRING("your EC_WORD_ROCK_HEAD, come to EC_WORD_SHINE"),
        .monSet = gBattleFrontierTrainerMons_Lukas
    },
    [FRONTIER_TRAINER_ZACH] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Zach"),
        .speechBefore = COMPOUND_STRING("I am an EC_WORD_EXCELLENT, EC_MOVE2(MIMIC), of Pokémon."),
        .speechWin    = COMPOUND_STRING("I am happy like a little EC_POKEMON_NATIONAL(TOGEPI)!"),
        .speechLose   = COMPOUND_STRING("I am EC_WORD_ANGRY, like a EC_POKEMON_NATIONAL(MANKEY)!"),
        .monSet = gBattleFrontierTrainerMons_Zach
    },
    [FRONTIER_TRAINER_KAITLYN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Kaitlyn"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_CRUSH, EC_WORD_THINGS, with EC_WORD_PSYCHIC, EC_WORD_POWER"),
        .speechWin    = COMPOUND_STRING("my victory will make the EC_WORD_NEWS"),
        .speechLose   = COMPOUND_STRING("no EC_WORD_NO… this won't EC_WORD_DO"),
        .monSet = gBattleFrontierTrainerMons_Kaitlyn
    },
    [FRONTIER_TRAINER_BREANNA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Breanna"),
        .speechBefore = COMPOUND_STRING("my Pokémon will EC_WORD_CRUSH, EC_WORD_YOU!"),
        .speechWin    = COMPOUND_STRING("have some more of EC_WORD_THIS!"),
        .speechLose   = COMPOUND_STRING("you have EC_WORD_GUTS, and EC_WORD_SKILL"),
        .monSet = gBattleFrontierTrainerMons_Breanna
    },
    [FRONTIER_TRAINER_KENDRA] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Kendra"),
        .speechBefore = COMPOUND_STRING("if you're EC_WORD_SMART, EC_WORD_STOP, right EC_WORD_NOW"),
        .speechWin    = COMPOUND_STRING("I said that you should EC_WORD_STOP"),
        .speechLose   = COMPOUND_STRING("EC_WORD_WHY, didn't you EC_WORD_STOP, ?"),
        .monSet = gBattleFrontierTrainerMons_Kendra
    },
    [FRONTIER_TRAINER_MOLLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Molly"),
        .speechBefore = COMPOUND_STRING("will my EC_WORD_CUTE_CHARM, EC_MOVE2(ATTRACT), you ?"),
        .speechWin    = COMPOUND_STRING("your Pokémon are my toys EC_WORD_NOW"),
        .speechLose   = COMPOUND_STRING("oh how could you ?"),
        .monSet = gBattleFrontierTrainerMons_Molly
    },
    [FRONTIER_TRAINER_JAZMIN] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Jazmin"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_FORECAST, EC_WORD_TERRIBLE, EC_WORD_THINGS, for EC_WORD_YOU"),
        .speechWin    = COMPOUND_STRING("there EC_WORD_WASN_T, my EC_WORD_FORECAST, right ?"),
        .speechLose   = COMPOUND_STRING("my EC_MOVE2(FORESIGHT), didn't show me EC_WORD_THIS"),
        .monSet = gBattleFrontierTrainerMons_Jazmin
    },
    [FRONTIER_TRAINER_KELSEY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Kelsey"),
        .speechBefore = COMPOUND_STRING("I haven't EC_WORD_SLEPT, in EC_WORD_DAYS…"),
        .speechWin    = COMPOUND_STRING("my EC_WORD_SLEEP, will be EC_WORD_EXCELLENT, EC_WORD_NOW"),
        .speechLose   = COMPOUND_STRING("you have destroyed my EC_WORD_SLEEP…"),
        .monSet = gBattleFrontierTrainerMons_Kelsey
    },
    [FRONTIER_TRAINER_JALEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Jalen"),
        .speechBefore = COMPOUND_STRING("I don't EC_WORD_ALLOW, Pokémon to EC_MOVE(THRASH)"),
        .speechWin    = COMPOUND_STRING("EC_WORD_HAHAHA, ! are you EC_WORD_ANGRY, ?"),
        .speechLose   = COMPOUND_STRING("EC_WORD_WHY, is this so EC_WORD_HARD, ?"),
        .monSet = gBattleFrontierTrainerMons_Jalen
    },
    [FRONTIER_TRAINER_GRIFFEN] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Griffen"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(SWALLOW), EC_MOVE2(SLUDGE), to EC_MOVE2(TRANSFORM), EC_WORD_MYSELF"),
        .speechWin    = COMPOUND_STRING("I have a EC_MOVE(GROWTH), of EC_MOVE2(ACID_ARMOR)"),
        .speechLose   = COMPOUND_STRING("I have a EC_MOVE(GROWTH), of EC_WORD_SUCTION_CUPS"),
        .monSet = gBattleFrontierTrainerMons_Griffen
    },
    [FRONTIER_TRAINER_XANDER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Xander"),
        .speechBefore = COMPOUND_STRING("I got my Pokémon EC_WORD_ON, EC_WORD_RENTAL"),
        .speechWin    = COMPOUND_STRING("it's incredible my EC_WORD_RENTAL, Pokémon EC_WORD_WON"),
        .speechLose   = COMPOUND_STRING("EC_WORD_RENTAL, Pokémon aren't EC_WORD_UP, to EC_MOVE2(SCRATCH)"),
        .monSet = gBattleFrontierTrainerMons_Xander
    },
    [FRONTIER_TRAINER_MARVIN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Marvin"),
        .speechBefore = COMPOUND_STRING("you're EC_WORD_UP, to the EC_WORD_CHALLENGE, ?"),
        .speechWin    = COMPOUND_STRING("I didn't EC_WORD_THINK, you're good EC_WORD_ENOUGH"),
        .speechLose   = COMPOUND_STRING("I am feeling EC_WORD_PERFECT, thank you so EC_WORD_MUCH"),
        .monSet = gBattleFrontierTrainerMons_Marvin
    },
    [FRONTIER_TRAINER_BRENNAN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Brennan"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(WISH), to see the EC_WORD_NEWS"),
        .speechWin    = COMPOUND_STRING("EC_WORD_COMICS, get EC_WORD_DAMP, from EC_WORD_DRIZZLE, ?"),
        .speechLose   = COMPOUND_STRING("the EC_WORD_TIGHT, EC_WORD_MONEY, EC_WORD_LIVING, EC_WORD_CHANNEL, EC_WORD_QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Brennan
    },
    [FRONTIER_TRAINER_BALEY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Baley"),
        .speechBefore = COMPOUND_STRING("EC_MOVE(SCREECH), is like EC_WORD_MUSIC, EC_WORD_TO_ME!"),
        .speechWin    = COMPOUND_STRING("my EC_MOVE(SCREECH), strategy is the EC_WORD_BEST"),
        .speechLose   = COMPOUND_STRING("you're EC_WORD_SOUNDPROOF, ?"),
        .monSet = gBattleFrontierTrainerMons_Baley
    },
    [FRONTIER_TRAINER_ZACKARY] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Zackary"),
        .speechBefore = COMPOUND_STRING("can you EC_MOVE(DIG), it EC_WORD_YO, ?"),
        .speechWin    = COMPOUND_STRING("EC_MOVE2(TAKE_DOWN), EC_WORD_TAKE, a EC_MOVE2(DIVE), EC_WORD_YO, EC_WORD_YO"),
        .speechLose   = COMPOUND_STRING("EC_WORD_BREAK, EC_WORD_DOWN, EC_MOVE2(DIVE), EC_WORD_TIME, for EC_WORD_ME"),
        .monSet = gBattleFrontierTrainerMons_Zackary
    },
    [FRONTIER_TRAINER_GABRIEL] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Gabriel"),
        .speechBefore = COMPOUND_STRING("EC_MOVE2(POUND), the EC_WORD_THICK_FAT, EC_WORD_ON, my EC_MOVE2(BELLY_DRUM)"),
        .speechWin    = COMPOUND_STRING("EC_MOVE2(POUND), my EC_MOVE2(BELLY_DRUM), EC_MOVE2(POUND), my EC_MOVE2(BELLY_DRUM)"),
        .speechLose   = COMPOUND_STRING("my EC_MOVE2(BELLY_DRUM), was EC_WORD_TOO_WEAK…"),
        .monSet = gBattleFrontierTrainerMons_Gabriel
    },
    [FRONTIER_TRAINER_EMILY] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Emily"),
        .speechBefore = COMPOUND_STRING("how about EC_WORD_A_TINY_BIT, of EC_MOVE(HYPNOSIS), ?"),
        .speechWin    = COMPOUND_STRING("my EC_MOVE(HYPNOSIS), strategy EC_WORD_WORKS, to EC_WORD_PERFECTION"),
        .speechLose   = COMPOUND_STRING("my EC_MOVE(HYPNOSIS), strategy EC_WORD_WENT, EC_WORD_BADLY…"),
        .monSet = gBattleFrontierTrainerMons_Emily
    },
    [FRONTIER_TRAINER_JORDYN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Jordyn"),
        .speechBefore = COMPOUND_STRING("you don't know my EC_WORD_SECRET…"),
        .speechWin    = COMPOUND_STRING("I am not EC_WORD_AS, I EC_WORD_APPEAR…"),
        .speechLose   = COMPOUND_STRING("but how EC_WORD_DID, you know ?"),
        .monSet = gBattleFrontierTrainerMons_Jordyn
    },
    [FRONTIER_TRAINER_SOFIA] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Sofia"),
        .speechBefore = COMPOUND_STRING("EC_POKEMON(LOUDRED), EC_WORD_PROBABLY, EC_WORD_HAS, a EC_MOVE(SWEET_SCENT)"),
        .speechWin    = COMPOUND_STRING("that's the feeling that I EC_WORD_GET"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_WORK, at the EC_WORD_DEPT_STORE"),
        .monSet = gBattleFrontierTrainerMons_Sofia
    },
    [FRONTIER_TRAINER_BRADEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Braden"),
        .speechBefore = COMPOUND_STRING("EC_WORD_I_CHOOSE_YOU, !  EC_WORD_THIS_IS_IT_EXCL"),
        .speechWin    = COMPOUND_STRING("I am feeling pretty awesome about EC_WORD_MYSELF"),
        .speechLose   = COMPOUND_STRING("EC_WORD_ALL_RIGHT, !  I EC_WORD_SURRENDER!"),
        .monSet = gBattleFrontierTrainerMons_Braden
    },
    [FRONTIER_TRAINER_KAYDEN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Kayden"),
        .speechBefore = COMPOUND_STRING("they EC_WORD_OVERDO, that gourmet EC_WORD_THING…"),
        .speechWin    = COMPOUND_STRING("that gourmet thing isn't for EC_WORD_ME"),
        .speechLose   = COMPOUND_STRING("EC_WORD_HEY, this is pretty EC_WORD_TASTY"),
        .monSet = gBattleFrontierTrainerMons_Kayden
    },
    [FRONTIER_TRAINER_COOPER] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Cooper"),
        .speechBefore = COMPOUND_STRING("this should EC_WORD_ABSOLUTELY, be a EC_WORD_PUSHOVER"),
        .speechWin    = COMPOUND_STRING("that was too exciting for EC_WORD_ME…"),
        .speechLose   = COMPOUND_STRING("please !  sorry I am EC_WORD_SORRY"),
        .monSet = gBattleFrontierTrainerMons_Cooper
    },
    [FRONTIER_TRAINER_JULIA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Julia"),
        .speechBefore = COMPOUND_STRING("spirit EC_WORD_ALONE, won't make you EC_WORD_WIN"),
        .speechWin    = COMPOUND_STRING("you should accept this with EC_WORD_SERENE_GRACE"),
        .speechLose   = COMPOUND_STRING("EC_WORD_FOR_NOW, goodbye but it's not EC_WORD_OVER"),
        .monSet = gBattleFrontierTrainerMons_Julia
    },
    [FRONTIER_TRAINER_AMARA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Amara"),
        .speechBefore = COMPOUND_STRING("EC_WORD_WROOOAAR_EXCL!! I am so EC_WORD_READY!!"),
        .speechWin    = COMPOUND_STRING("I lose myself if it's EC_WORD_EXCITING"),
        .speechLose   = COMPOUND_STRING("that's too much to EC_MOVE2(TACKLE)!"),
        .monSet = gBattleFrontierTrainerMons_Amara
    },
    [FRONTIER_TRAINER_LYNN] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Lynn"),
        .speechBefore = COMPOUND_STRING("your EC_WORD_SECRET, can't be EC_WORD_HIDDEN, EC_WORD_FOREVER"),
        .speechWin    = COMPOUND_STRING("I know your EC_WORD_SECRET, EC_WORD_NOW!"),
        .speechLose   = COMPOUND_STRING("you can't EC_MOVE(SAFEGUARD), your own EC_WORD_SECRET"),
        .monSet = gBattleFrontierTrainerMons_Lynn
    },
    [FRONTIER_TRAINER_JOVAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Jovan"),
        .speechBefore = COMPOUND_STRING("your battle EC_WORD_SENSE, is EC_WORD_SADLY, EC_WORD_LACKING"),
        .speechWin    = COMPOUND_STRING("my battle EC_WORD_SENSE, is cool EC_WORD_ISN_T_IT_QUES"),
        .speechLose   = COMPOUND_STRING("I was EC_WORD_MINUS, my EC_WORD_NORMAL, EC_WORD_POWER, EC_WORD_TODAY"),
        .monSet = gBattleFrontierTrainerMons_Jovan
    },
    [FRONTIER_TRAINER_DOMINIC] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Dominic"),
        .speechBefore = COMPOUND_STRING("I have this EC_WORD_EXCELLENT, EC_WORD_CAMERA"),
        .speechWin    = COMPOUND_STRING("my EC_WORD_CAMERA, was awfully EC_WORD_EXPENSIVE"),
        .speechLose   = COMPOUND_STRING("my EC_WORD_CAMERA, doesn't EC_WORD_MISS, a EC_WORD_THING"),
        .monSet = gBattleFrontierTrainerMons_Dominic
    },
    [FRONTIER_TRAINER_NIKOLAS] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Nikolas"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(MIMIC), Pokémon after every EC_WORD_BATTLE"),
        .speechWin    = COMPOUND_STRING("if I win I pretend I am a EC_POKEMON_NATIONAL(TAUROS)"),
        .speechLose   = COMPOUND_STRING("if I lose I pretend I am a EC_POKEMON_NATIONAL(MILTANK)"),
        .monSet = gBattleFrontierTrainerMons_Nikolas
    },
    [FRONTIER_TRAINER_VALERIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Valeria"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(WISH), you would not EC_MOVE2(GLARE)"),
        .speechWin    = COMPOUND_STRING("you're mean ! I mean EC_WORD_REALLY"),
        .speechLose   = COMPOUND_STRING("you have a really EC_MOVE(SCARY_FACE)!"),
        .monSet = gBattleFrontierTrainerMons_Valeria
    },
    [FRONTIER_TRAINER_DELANEY] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Delaney"),
        .speechBefore = COMPOUND_STRING("EC_WORD_SCHOOL, is over EC_WORD_TIME, to EC_WORD_PLAY"),
        .speechWin    = COMPOUND_STRING("my EC_WORD_BOY, EC_WORD_FRIEND, is from EC_WORD_SCHOOL"),
        .speechLose   = COMPOUND_STRING("I have to EC_WORD_WORK, EC_WORD_NEXT, EC_WORD_WEEK"),
        .monSet = gBattleFrontierTrainerMons_Delaney
    },
    [FRONTIER_TRAINER_MEGHAN] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Meghan"),
        .speechBefore = COMPOUND_STRING("EC_WORD_SCHOOL, is out EC_WORD_TIME, to EC_WORD_PLAY"),
        .speechWin    = COMPOUND_STRING("my EC_WORD_BOY, EC_WORD_FRIEND, EC_WORD_LIKES, EC_WORD_COMICS"),
        .speechLose   = COMPOUND_STRING("it's EC_WORD_BACK, to EC_WORD_SCHOOL, EC_WORD_SOON"),
        .monSet = gBattleFrontierTrainerMons_Meghan
    },
    [FRONTIER_TRAINER_ROBERTO] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Roberto"),
        .speechBefore = COMPOUND_STRING("EC_WORD_DRAGON, Pokémon are EC_WORD_INVINCIBLE, !"),
        .speechWin    = COMPOUND_STRING("you EC_WORD_WEREN_T, bad I was just EC_WORD_BETTER"),
        .speechLose   = COMPOUND_STRING("aren't you EC_WORD_SATISFIED, EC_WORD_YET, ?"),
        .monSet = gBattleFrontierTrainerMons_Roberto
    },
    [FRONTIER_TRAINER_DAMIAN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Damian"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_PURE_POWER, is EC_WORD_MACHINE, EC_WORD_LIKE!"),
        .speechWin    = COMPOUND_STRING("my EC_MOVE2(MACH_PUNCH), will make a EC_MOVE(BRICK_BREAK)"),
        .speechLose   = COMPOUND_STRING("EC_WORD_ARRGH, !  EC_WORD_NO!!"),
        .monSet = gBattleFrontierTrainerMons_Damian
    },
    [FRONTIER_TRAINER_BRODY] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Brody"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_FASHION, EC_WORD_SENSE, EC_WORD_SEEMS, EC_POKEMON(ODDISH), ?"),
        .speechWin    = COMPOUND_STRING("it's my EC_WORD_FAMILY, EC_WORD_STAY_AT_HOME, EC_WORD_LOOK!"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_QUESTION, your EC_WORD_FASHION, EC_WORD_SENSE, EC_WORD_SERIOUSLY"),
        .monSet = gBattleFrontierTrainerMons_Brody
    },
    [FRONTIER_TRAINER_GRAHAM] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Graham"),
        .speechBefore = COMPOUND_STRING("yeah !  EC_WORD_YEAH_YEAH!!"),
        .speechWin    = COMPOUND_STRING("Wahahaha Wahahaha ! Wahahaha EC_WORD_WAHAHAHA!!"),
        .speechLose   = COMPOUND_STRING("I am EC_WORD_SORRY… it's my EC_WORD_BAD"),
        .monSet = gBattleFrontierTrainerMons_Graham
    },
    [FRONTIER_TRAINER_TYLOR] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Tylor"),
        .speechBefore = COMPOUND_STRING("are you feeling my EC_MOVE2(HEAT_WAVE), ?"),
        .speechWin    = COMPOUND_STRING("yes I am EC_WORD_ON, EC_WORD_FIRE, !"),
        .speechLose   = COMPOUND_STRING("but I was EC_WORD_ON, EC_WORD_FIRE, for EC_WORD_YOU"),
        .monSet = gBattleFrontierTrainerMons_Tylor
    },
    [FRONTIER_TRAINER_JAREN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Jaren"),
        .speechBefore = COMPOUND_STRING("EC_WORD_FIGHTING, spirit? me ?"),
        .speechWin    = COMPOUND_STRING("I want more cute Pokémon."),
        .speechLose   = COMPOUND_STRING("your Pokémon look EC_WORD_QUITE, EC_WORD_CUTE"),
        .monSet = gBattleFrontierTrainerMons_Jaren
    },
    [FRONTIER_TRAINER_CORDELL] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Cordell"),
        .speechBefore = COMPOUND_STRING("a battle is EC_WORD_DECIDED, EC_WORD_ON, EC_WORD_SPIRIT"),
        .speechWin    = COMPOUND_STRING("can't you accept that ?"),
        .speechLose   = COMPOUND_STRING("I will be EC_WORD_ON, my EC_WORD_WAY"),
        .monSet = gBattleFrontierTrainerMons_Cordell
    },
    [FRONTIER_TRAINER_JAZLYN] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Jazlyn"),
        .speechBefore = COMPOUND_STRING("is your EC_WORD_POKEDEX, really awesome ?"),
        .speechWin    = COMPOUND_STRING("oh yeah wow your EC_WORD_POKEDEX, is EC_WORD_SUPER"),
        .speechLose   = COMPOUND_STRING("an EC_WORD_AVANT_GARDE, EC_WORD_POKEDEX, would be EC_WORD_AWESOME"),
        .monSet = gBattleFrontierTrainerMons_Jazlyn
    },
    [FRONTIER_TRAINER_ZACHERY] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Zachery"),
        .speechBefore = COMPOUND_STRING("I have my own EC_WORD_PLACE, EC_WORD_YEEHAW_EXCL"),
        .speechWin    = COMPOUND_STRING("it's an exciting EC_WORD_TIME, for EC_WORD_ME"),
        .speechLose   = COMPOUND_STRING("you can't EC_WORD_FLATTEN, my EC_WORD_HAPPINESS!"),
        .monSet = gBattleFrontierTrainerMons_Zachery
    },
    [FRONTIER_TRAINER_JOHAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Johan"),
        .speechBefore = COMPOUND_STRING("winter will EC_WORD_SOON, be EC_WORD_HERE"),
        .speechWin    = COMPOUND_STRING("my EC_WORD_ALLOWANCE, could EC_WORD_USE, a EC_MOVE2(HELPING_HAND)"),
        .speechLose   = COMPOUND_STRING("I always EC_WORD_USE, my EC_WORD_ALLOWANCE, EC_WORD_UP"),
        .monSet = gBattleFrontierTrainerMons_Johan
    },
    [FRONTIER_TRAINER_SHEA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Shea"),
        .speechBefore = COMPOUND_STRING("do you battle with EC_WORD_BEAUTY, ?"),
        .speechWin    = COMPOUND_STRING("you battle in an EC_WORD_UGLY, EC_WORD_WAY"),
        .speechLose   = COMPOUND_STRING("what is EC_WORD_BEAUTY, to you ?"),
        .monSet = gBattleFrontierTrainerMons_Shea
    },
    [FRONTIER_TRAINER_KAILA] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Kaila"),
        .speechBefore = COMPOUND_STRING("I am feeling EC_WORD_THIRSTY, right EC_WORD_NOW…"),
        .speechWin    = COMPOUND_STRING("I could EC_WORD_USE, a EC_WORD_COLD, EC_WORD_DRINK"),
        .speechLose   = COMPOUND_STRING("that loss is EC_WORD_HARD, to EC_MOVE2(SWALLOW)"),
        .monSet = gBattleFrontierTrainerMons_Kaila
    },
    [FRONTIER_TRAINER_ISIAH] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("Isiah"),
        .speechBefore = COMPOUND_STRING("I pretend to study EC_WORD_A_LOT"),
        .speechWin    = COMPOUND_STRING("I EC_MOVE2(TRICK), mother for my EC_WORD_ALLOWANCE"),
        .speechLose   = COMPOUND_STRING("I don't want to study EC_WORD_MORE"),
        .monSet = gBattleFrontierTrainerMons_Isiah
    },
    [FRONTIER_TRAINER_R8_TR9_HIKERT] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_M,
        .trainerName = _("Garrett"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_ENJOY, EC_WORD_COMICS, and this EC_WORD_GAME"),
        .speechWin    = COMPOUND_STRING("I like this EC_WORD_MUSIC, EC_WORD_IDOL, EC_WORD_TOO"),
        .speechLose   = COMPOUND_STRING("but I have to study EC_WORD_MORE"),
        .monSet = gBattleFrontierTrainerMons_Garrett
    },
    [FRONTIER_TRAINER_HAYLIE] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("Haylie"),
        .speechBefore = COMPOUND_STRING("I worry too much to EC_WORD_SLEEP"),
        .speechWin    = COMPOUND_STRING("a win EC_WORD_GIVES, me a EC_MOVE2(CALM_MIND)"),
        .speechLose   = COMPOUND_STRING("my EC_WORD_INSOMNIA, will get EC_WORD_BAD…"),
        .monSet = gBattleFrontierTrainerMons_Haylie
    },
    [FRONTIER_TRAINER_MEGAN] = {
        .facilityClass = FACILITY_CLASS_SCHOOL_KID_F,
        .trainerName = _("Megan"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_BELIEVE, in an EC_MOVE(AROMATHERAPY), EC_WORD_BATH"),
        .speechWin    = COMPOUND_STRING("I want a EC_WORD_HEALTHY, EC_WORD_CLEAR_BODY"),
        .speechLose   = COMPOUND_STRING("if EC_WORD_ONLY, EC_MOVE(AROMATHERAPY), were EC_WORD_LESS, EC_WORD_EXPENSIVE"),
        .monSet = gBattleFrontierTrainerMons_Megan
    },
    [FRONTIER_TRAINER_ISSAC] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("Issac"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_HOBBY, ?"),
        .speechWin    = COMPOUND_STRING("I like EC_WORD_ANY, kind of EC_MOVE2(WATER_SPORT)"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_DISLIKE, EC_WORD_ANY, kind of EC_MOVE2(MUD_SPORT)"),
        .monSet = gBattleFrontierTrainerMons_Issac
    },
    [FRONTIER_TRAINER_QUINTON] = {
        .facilityClass = FACILITY_CLASS_RICH_BOY,
        .trainerName = _("Quinton"),
        .speechBefore = COMPOUND_STRING("I am sad EC_WORD_CAUSE, I am EC_WORD_TOO_WEAK"),
        .speechWin    = COMPOUND_STRING("you aren't EC_WORD_TOO_STRONG, for EC_WORD_ME"),
        .speechLose   = COMPOUND_STRING("EC_WORD_HEY, what EC_WORD_DID, I do ?"),
        .monSet = gBattleFrontierTrainerMons_Quinton
    },
    [FRONTIER_TRAINER_SALMA] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("Salma"),
        .speechBefore = COMPOUND_STRING("you've got your EC_WORD_HUSTLE, EC_WORD_ON!"),
        .speechWin    = COMPOUND_STRING("I win you EC_WORD_HUSTLE, EC_WORD_ON, EC_WORD_OUT"),
        .speechLose   = COMPOUND_STRING("I don't get how I lost."),
        .monSet = gBattleFrontierTrainerMons_Salma
    },
    [FRONTIER_TRAINER_ANSLEY] = {
        .facilityClass = FACILITY_CLASS_LADY,
        .trainerName = _("Ansley"),
        .speechBefore = COMPOUND_STRING("I am EC_WORD_BORED… EC_WORD_DANCE, for EC_WORD_ME"),
        .speechWin    = COMPOUND_STRING("you've EC_WORD_BORED, me some EC_WORD_MORE"),
        .speechLose   = COMPOUND_STRING("EC_WORD_TAKE, your EC_MOVE2(FRUSTRATION), some EC_WORD_OTHER, EC_WORD_PLACE"),
        .monSet = gBattleFrontierTrainerMons_Ansley
    },
    [FRONTIER_TRAINER_HOLDEN] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("Holden"),
        .speechBefore = COMPOUND_STRING("let's EC_WORD_COMMEMORATE, my EC_WORD_COOLNESS, in EC_WORD_BATTLE"),
        .speechWin    = COMPOUND_STRING("you're EC_WORD_TOO_WEAK, for EC_WORD_ANY, EC_WORD_PRAISE"),
        .speechLose   = COMPOUND_STRING("your battle EC_WORD_SENSE, is EC_WORD_AMUSING"),
        .monSet = gBattleFrontierTrainerMons_Holden
    },
    [FRONTIER_TRAINER_LUCA] = {
        .facilityClass = FACILITY_CLASS_BUG_CATCHER,
        .trainerName = _("Luca"),
        .speechBefore = COMPOUND_STRING("we will have a cool EC_WORD_BATTLE"),
        .speechWin    = COMPOUND_STRING("I won in a cool EC_WORD_WAY"),
        .speechLose   = COMPOUND_STRING("EC_WORD_HELLO,? I am just a EC_WORD_KID"),
        .monSet = gBattleFrontierTrainerMons_Luca
    },
    [FRONTIER_TRAINER_JAMISON] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("Jamison"),
        .speechBefore = COMPOUND_STRING("my EC_MOVE2(SECRET_POWER), is overwhelming to Pokémon."),
        .speechWin    = COMPOUND_STRING("EC_WORD_DID, you see that ?"),
        .speechLose   = COMPOUND_STRING("I will EC_WORD_USE, EC_MOVE(SMOKESCREEN), to EC_WORD_ESCAPE"),
        .monSet = gBattleFrontierTrainerMons_Jamison
    },
    [FRONTIER_TRAINER_GUNNAR] = {
        .facilityClass = FACILITY_CLASS_NINJA_BOY,
        .trainerName = _("Gunnar"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE(CUT), EC_WORD_DOWN, every EC_WORD_OPPONENT"),
        .speechWin    = COMPOUND_STRING("don't EC_MOVE(GRUDGE), me for your EC_WORD_LOSS"),
        .speechLose   = COMPOUND_STRING("please lose that EC_MOVE(SCARY_FACE), of EC_WORD_YOURS"),
        .monSet = gBattleFrontierTrainerMons_Gunnar
    },
    [FRONTIER_TRAINER_CRAIG] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("Craig"),
        .speechBefore = COMPOUND_STRING("I can't wait for my EC_WORD_TRAIN"),
        .speechWin    = COMPOUND_STRING("my train isn't EC_WORD_HERE, EC_WORD_YET…"),
        .speechLose   = COMPOUND_STRING("here it is my train EC_WORD_SEE_YA, !"),
        .monSet = gBattleFrontierTrainerMons_Craig
    },
    [FRONTIER_TRAINER_PIERCE] = {
        .facilityClass = FACILITY_CLASS_TUBER_M,
        .trainerName = _("Pierce"),
        .speechBefore = COMPOUND_STRING("there was a EC_MOVE2(HEAT_WAVE), EC_WORD_LAST, EC_WORD_WEEK"),
        .speechWin    = COMPOUND_STRING("I can't EC_WORD_TAKE, a EC_MOVE2(HEAT_WAVE)"),
        .speechLose   = COMPOUND_STRING("didn't it EC_MOVE(HAIL), too ?"),
        .monSet = gBattleFrontierTrainerMons_Pierce
    },
    [FRONTIER_TRAINER_REGINA] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("Regina"),
        .speechBefore = COMPOUND_STRING("I like to EC_WORD_PLAY, in EC_WORD_WATER"),
        .speechWin    = COMPOUND_STRING("I EC_WORD_REFUSE, to come EC_WORD_OUT"),
        .speechLose   = COMPOUND_STRING("you're not much good in EC_WORD_WATER"),
        .monSet = gBattleFrontierTrainerMons_Regina
    },
    [FRONTIER_TRAINER_ALISON] = {
        .facilityClass = FACILITY_CLASS_TUBER_F,
        .trainerName = _("Alison"),
        .speechBefore = COMPOUND_STRING("this EC_WORD_KINDERGARTEN, EC_WORD_MAGAZINE, is too EC_WORD_MUCH"),
        .speechWin    = COMPOUND_STRING("how to bug your EC_WORD_TEACHER, ?"),
        .speechLose   = COMPOUND_STRING("EC_WORD_ENJOY, a tasty EC_WORD_SCHOOL, EC_WORD_DIET, ?"),
        .monSet = gBattleFrontierTrainerMons_Alison
    },
    [FRONTIER_TRAINER_HANK] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Hank"),
        .speechBefore = COMPOUND_STRING("there is a bug EC_WORD_EVENT, EC_WORD_SOON"),
        .speechWin    = COMPOUND_STRING("it's a bug EC_WORD_FASHION, EC_WORD_SHOW!"),
        .speechLose   = COMPOUND_STRING("don't you like bug Pokémon ?"),
        .monSet = gBattleFrontierTrainerMons_Hank
    },
    [FRONTIER_TRAINER_EARL] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Earl"),
        .speechBefore = COMPOUND_STRING("the EC_WORD_INVINCIBLE, bug trainer is EC_WORD_HERE"),
        .speechWin    = COMPOUND_STRING("the EC_WORD_INVINCIBLE, bug trainer EC_WORD_AM, EC_WORD_I"),
        .speechLose   = COMPOUND_STRING("see how EC_WORD_FAST, I EC_WORD_RUN_AWAY!"),
        .monSet = gBattleFrontierTrainerMons_Earl
    },
    [FRONTIER_TRAINER_RAMIRO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Ramiro"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_WENT, to a EC_WORD_FISHING, EC_WORD_SCHOOL"),
        .speechWin    = COMPOUND_STRING("EC_WORD_SERIOUSLY, I am in the EC_WORD_FISHING, EC_WORD_HALL_OF_FAME"),
        .speechLose   = COMPOUND_STRING("I want to go EC_WORD_BACK…"),
        .monSet = gBattleFrontierTrainerMons_Ramiro
    },
    [FRONTIER_TRAINER_HUNTER] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Hunter"),
        .speechBefore = COMPOUND_STRING("show me a totally cool EC_MOVE(CROSS_CHOP)"),
        .speechWin    = COMPOUND_STRING("you're EC_WORD_TOO_WEAK, to do a EC_MOVE(CROSS_CHOP)"),
        .speechLose   = COMPOUND_STRING("was it a EC_WORD_MISTAKE, ?"),
        .monSet = gBattleFrontierTrainerMons_Hunter
    },
    [FRONTIER_TRAINER_AIDEN] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Aiden"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_WORK, is EC_WORD_MAKING, me EC_WORD_HEALTHY"),
        .speechWin    = COMPOUND_STRING("you see? I am EC_WORD_HEALTHY!"),
        .speechLose   = COMPOUND_STRING("you're more EC_WORD_HEALTHY, than EC_WORD_I_AM…"),
        .monSet = gBattleFrontierTrainerMons_Aiden
    },
    [FRONTIER_TRAINER_XAVIER] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Xavier"),
        .speechBefore = COMPOUND_STRING("EC_WORD_HEY_THERE, !  look EC_WORD_LOOK!!"),
        .speechWin    = COMPOUND_STRING("goodbye and thank you that was EC_WORD_FUNNY"),
        .speechLose   = COMPOUND_STRING("EC_WORD_WOWEE, !  no EC_WORD_NO!!"),
        .monSet = gBattleFrontierTrainerMons_Xavier
    },
    [FRONTIER_TRAINER_CLINTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Clinton"),
        .speechBefore = COMPOUND_STRING("want to see my EC_MOVE(HYPNOSIS), ?"),
        .speechWin    = COMPOUND_STRING("your EC_MOVE2(FURY_SWIPES), your EC_MOVE(STRENGTH), young trainer."),
        .speechLose   = COMPOUND_STRING("EC_WORD_TCH…  I am EC_WORD_TOO_WEAK…"),
        .monSet = gBattleFrontierTrainerMons_Clinton
    },
    [FRONTIER_TRAINER_JESSE] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Jesse"),
        .speechBefore = COMPOUND_STRING("this battle is for my EC_WORD_MOTHER"),
        .speechWin    = COMPOUND_STRING("mother will be happy for EC_WORD_ME"),
        .speechLose   = COMPOUND_STRING("I want my mother !"),
        .monSet = gBattleFrontierTrainerMons_Jesse
    },
    [FRONTIER_TRAINER_EDUARDO] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Eduardo"),
        .speechBefore = COMPOUND_STRING("our EC_WORD_MUSIC, will EC_WORD_PLAY, all EC_WORD_NIGHT"),
        .speechWin    = COMPOUND_STRING("EC_WORD_NIGHTTIME, is EC_WORD_WHEN, I EC_WORD_PLAY, EC_WORD_BEST"),
        .speechLose   = COMPOUND_STRING("let's party until the EC_MOVE(MORNING_SUN)!"),
        .monSet = gBattleFrontierTrainerMons_Eduardo
    },
    [FRONTIER_TRAINER_HAL] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Hal"),
        .speechBefore = COMPOUND_STRING("I am EC_WORD_TRENDY, aren't I ?"),
        .speechWin    = COMPOUND_STRING("I am feeling EC_WORD_HIP_AND, EC_WORD_HAPPENING, EC_WORD_OH_YEAH!"),
        .speechLose   = COMPOUND_STRING("I am always EC_WORD_TRENDY, thank you EC_WORD_VERY, EC_WORD_MUCH"),
        .monSet = gBattleFrontierTrainerMons_Hal
    },
    [FRONTIER_TRAINER_GAGE] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Gage"),
        .speechBefore = COMPOUND_STRING("here it is a EC_WORD_FLYING, EC_WORD_TYPE, EC_WORD_HIDDEN, EC_WORD_MOVE"),
        .speechWin    = COMPOUND_STRING("it's a EC_WORD_FLYING, EC_WORD_TYPE, EC_WORD_VICTORY!"),
        .speechLose   = COMPOUND_STRING("if I lose I just EC_MOVE(FLY), EC_WORD_AWAY"),
        .monSet = gBattleFrontierTrainerMons_Gage
    },
    [FRONTIER_TRAINER_ARNOLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Arnold"),
        .speechBefore = COMPOUND_STRING("I am feeling weird from a EC_WORD_DREAM"),
        .speechWin    = COMPOUND_STRING("your EC_MOVE(SCARY_FACE), was in my EC_WORD_DREAM"),
        .speechLose   = COMPOUND_STRING("my incredible dream was so EC_WORD_WEIRD"),
        .monSet = gBattleFrontierTrainerMons_Arnold
    },
    [FRONTIER_TRAINER_JARRETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Jarrett"),
        .speechBefore = COMPOUND_STRING("come on let's EC_WORD_DANCE, like it's EC_WORD_YESTERDAY"),
        .speechWin    = COMPOUND_STRING("you like how I EC_WORD_DANCE, ?"),
        .speechLose   = COMPOUND_STRING("you don't EC_WORD_APPRECIATE, how I EC_WORD_DANCE"),
        .monSet = gBattleFrontierTrainerMons_Jarrett
    },
    [FRONTIER_TRAINER_GARETT] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Garett"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_GIRL, EC_WORD_GIVES, me a little EC_MOVE2(SWEET_KISS)"),
        .speechWin    = COMPOUND_STRING("my EC_WORD_GIRL, EC_WORD_FRIEND, is my EC_WORD_TREASURE"),
        .speechLose   = COMPOUND_STRING("a treasure isn't always about EC_WORD_MONEY"),
        .monSet = gBattleFrontierTrainerMons_Garett
    },
    [FRONTIER_TRAINER_EMANUEL] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Emanuel"),
        .speechBefore = COMPOUND_STRING("EC_WORD_SMARTNESS, EC_WORD_ALONE, won't make you EC_WORD_WIN"),
        .speechWin    = COMPOUND_STRING("I am EC_WORD_NOT_VERY, EC_WORD_SMART, but I EC_WORD_WON"),
        .speechLose   = COMPOUND_STRING("how EC_WORD_DID, you EC_MOVE2(FAKE_OUT), me ?"),
        .monSet = gBattleFrontierTrainerMons_Emanuel
    },
    [FRONTIER_TRAINER_GUSTAVO] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Gustavo"),
        .speechBefore = COMPOUND_STRING("EC_MOVE(CHARGE), !  EC_MOVE(CHARGE)!!"),
        .speechWin    = COMPOUND_STRING("surrender?  so EC_WORD_SOON, ?"),
        .speechLose   = COMPOUND_STRING("you can't make me surrender EC_WORD_YET"),
        .monSet = gBattleFrontierTrainerMons_Gustavo
    },
    [FRONTIER_TRAINER_KAMERON] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Kameron"),
        .speechBefore = COMPOUND_STRING("EC_WORD_TAKE_THAT, ! it's my EC_WORD_FIERY, EC_MOVE2(TRICK)"),
        .speechWin    = COMPOUND_STRING("EC_WORD_DID, my EC_WORD_FIERY, EC_MOVE2(TRICK), EC_MOVE(ASTONISH), ?"),
        .speechLose   = COMPOUND_STRING("you didn't EC_WORD_FALL, for my EC_MOVE2(TRICK)"),
        .monSet = gBattleFrontierTrainerMons_Kameron
    },
    [FRONTIER_TRAINER_ALFREDO] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Alfredo"),
        .speechBefore = COMPOUND_STRING("a EC_WORD_FIERY, gourmet EC_WORD_AM, EC_WORD_I!"),
        .speechWin    = COMPOUND_STRING("it's a tasty gourmet EC_WORD_VICTORY!"),
        .speechLose   = COMPOUND_STRING("what a EC_WORD_DISASTER, that was !"),
        .monSet = gBattleFrontierTrainerMons_Alfredo
    },
    [FRONTIER_TRAINER_RUBEN] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Ruben"),
        .speechBefore = COMPOUND_STRING("I can't wait to get EC_WORD_GOING"),
        .speechWin    = COMPOUND_STRING("get going ! this is EC_WORD_GOOD_BYE"),
        .speechLose   = COMPOUND_STRING("I've got to get EC_WORD_GOING"),
        .monSet = gBattleFrontierTrainerMons_Ruben
    },
    [FRONTIER_TRAINER_LAMAR] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Lamar"),
        .speechBefore = COMPOUND_STRING("a EC_MOVE2(PRESENT), for me ?"),
        .speechWin    = COMPOUND_STRING("Mmm this is EC_WORD_QUITE, EC_WORD_TASTY…"),
        .speechLose   = COMPOUND_STRING("oh it's a EC_WORD_GAME, EC_WORD_IS_IT_QUES"),
        .monSet = gBattleFrontierTrainerMons_Lamar
    },
    [FRONTIER_TRAINER_JAXON] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Jaxon"),
        .speechBefore = COMPOUND_STRING("a EC_WORD_SHELL_ARMOR, is what I EC_WORD_WANT"),
        .speechWin    = COMPOUND_STRING("my father and mother won't EC_WORD_ACCEPT"),
        .speechLose   = COMPOUND_STRING("please I need a EC_WORD_SHELL_ARMOR!"),
        .monSet = gBattleFrontierTrainerMons_Jaxon
    },
    [FRONTIER_TRAINER_LOGAN] = {
        .facilityClass = FACILITY_CLASS_YOUNGSTER,
        .trainerName = _("Logan"),
        .speechBefore = COMPOUND_STRING("if I lose I will study for EC_WORD_SCHOOL"),
        .speechWin    = COMPOUND_STRING("me study? EC_WORD_NOT_VERY, EC_WORD_LIKELY_TO, EC_WORD_SEE"),
        .speechLose   = COMPOUND_STRING("no thanks I am going to EC_WORD_SLEEP"),
        .monSet = gBattleFrontierTrainerMons_Logan
    },
    [FRONTIER_TRAINER_EMILEE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Emilee"),
        .speechBefore = COMPOUND_STRING("is this kind of battle EC_WORD_OK_QUES"),
        .speechWin    = COMPOUND_STRING("let's go for an EC_MOVE(ICY_WIND), EC_MOVE2(SURF)"),
        .speechLose   = COMPOUND_STRING("how about a EC_MOVE(ROCK_SLIDE), show ?"),
        .monSet = gBattleFrontierTrainerMons_Emilee
    },
    [FRONTIER_TRAINER_JOSIE] = {
        .facilityClass = FACILITY_CLASS_LASS,
        .trainerName = _("Josie"),
        .speechBefore = COMPOUND_STRING("a Pokémon EC_WORD_FASHION, EC_WORD_CONTEST, is EC_WORD_PRETTY"),
        .speechWin    = COMPOUND_STRING("I really like EC_WORD_MODE, EC_WORD_FASHION, EC_WORD_THINGS"),
        .speechLose   = COMPOUND_STRING("you're totally EC_WORD_LACKING, in EC_WORD_FASHION, EC_WORD_SENSE"),
        .monSet = gBattleFrontierTrainerMons_Josie
    },
    [FRONTIER_TRAINER_ARMANDO] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("Armando"),
        .speechBefore = COMPOUND_STRING("I need more EC_WORD_GRASS, EC_WORD_TYPE, Pokémon."),
        .speechWin    = COMPOUND_STRING("EC_WORD_TRADE, me a EC_WORD_GRASS, Pokémon EC_WORD_PLEASE"),
        .speechLose   = COMPOUND_STRING("there aren't enough EC_WORD_GRASS, EC_WORD_TYPE, Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Armando
    },
    [FRONTIER_TRAINER_SKYLER] = {
        .facilityClass = FACILITY_CLASS_CAMPER,
        .trainerName = _("Skyler"),
        .speechBefore = COMPOUND_STRING("EC_MOVE2(INGRAIN), is my EC_WORD_CHOICE, battle EC_WORD_MOVE"),
        .speechWin    = COMPOUND_STRING("you can't EC_WORD_MOVE, me EC_WORD_NOW!"),
        .speechLose   = COMPOUND_STRING("you EC_MOVE(CUT), me EC_WORD_DOWN…"),
        .monSet = gBattleFrontierTrainerMons_Skyler
    },
    [FRONTIER_TRAINER_RUTH] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("Ruth"),
        .speechBefore = COMPOUND_STRING("I want to EC_WORD_ENJOY, this EC_WORD_BATTLE"),
        .speechWin    = COMPOUND_STRING("that was much too EC_WORD_EASY, !"),
        .speechLose   = COMPOUND_STRING("please EC_WORD_STOP, I don't EC_WORD_ENJOY, EC_WORD_THIS"),
        .monSet = gBattleFrontierTrainerMons_Ruth
    },
    [FRONTIER_TRAINER_MELODY] = {
        .facilityClass = FACILITY_CLASS_PICNICKER,
        .trainerName = _("Melody"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(WISH), EC_WORD_SUNDAY, is a EC_MOVE2(SUNNY_DAY)"),
        .speechWin    = COMPOUND_STRING("EC_WORD_SUNDAY, EC_WORD_SEEMS, EC_WORD_FOREVER, to EC_WORD_COME…"),
        .speechLose   = COMPOUND_STRING("the EC_WORD_FORECAST, says it will EC_MOVE(HAIL)"),
        .monSet = gBattleFrontierTrainerMons_Melody
    },
    [FRONTIER_TRAINER_PEDRO] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("Pedro"),
        .speechBefore = COMPOUND_STRING("a EC_WORD_SWIFT_SWIM, will do you EC_WORD_GOOD"),
        .speechWin    = COMPOUND_STRING("that's how I EC_WORD_SINK, an EC_WORD_OPPONENT"),
        .speechLose   = COMPOUND_STRING("EC_WORD_UH_OH, !  a EC_MOVE(WHIRLPOOL)!"),
        .monSet = gBattleFrontierTrainerMons_Pedro
    },
    [FRONTIER_TRAINER_ERICK] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_M,
        .trainerName = _("Erick"),
        .speechBefore = COMPOUND_STRING("I will EC_MOVE2(TACKLE), you EC_WORD_DOWN!"),
        .speechWin    = COMPOUND_STRING("don't you EC_WORD_RUN_AWAY, you loseR!"),
        .speechLose   = COMPOUND_STRING("I didn't EC_WORD_THINK, you would EC_MOVE(COUNTER)"),
        .monSet = gBattleFrontierTrainerMons_Erick
    },
    [FRONTIER_TRAINER_ELAINE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("Elaine"),
        .speechBefore = COMPOUND_STRING("my EC_WORD_HEROINE, EC_WORD_ADVENTURE, isn't going EC_WORD_WELL"),
        .speechWin    = COMPOUND_STRING("thank you ! that's what I EC_WORD_NEED"),
        .speechLose   = COMPOUND_STRING("I know I am not a EC_WORD_HEROINE"),
        .monSet = gBattleFrontierTrainerMons_Elaine
    },
    [FRONTIER_TRAINER_JOYCE] = {
        .facilityClass = FACILITY_CLASS_SWIMMER_F,
        .trainerName = _("Joyce"),
        .speechBefore = COMPOUND_STRING("you make me go EC_WORD_AHAHA!"),
        .speechWin    = COMPOUND_STRING("EC_WORD_LALALA, no losing for EC_WORD_ME!"),
        .speechLose   = COMPOUND_STRING("EC_WORD_LALALA…  EC_WORD_HUH_QUES"),
        .monSet = gBattleFrontierTrainerMons_Joyce
    },
    [FRONTIER_TRAINER_TODD] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Todd"),
        .speechBefore = COMPOUND_STRING("you're a EC_WORD_LIGHTNINGROD, for my EC_WORD_POWER"),
        .speechWin    = COMPOUND_STRING("that's all you could EC_MOVE(ABSORB), ?"),
        .speechLose   = COMPOUND_STRING("you EC_MOVE2(REFLECT), my EC_WORD_POWER, EC_WORD_BACK, ?"),
        .monSet = gBattleFrontierTrainerMons_Todd
    },
    [FRONTIER_TRAINER_GAVIN] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_M,
        .trainerName = _("Gavin"),
        .speechBefore = COMPOUND_STRING("I will EC_MOVE(BIDE), my EC_WORD_TIME"),
        .speechWin    = COMPOUND_STRING("it's over so EC_WORD_SOON, ?"),
        .speechLose   = COMPOUND_STRING("my EC_WORD_MISTAKE, was too EC_WORD_EXPENSIVE…"),
        .monSet = gBattleFrontierTrainerMons_Gavin
    },
    [FRONTIER_TRAINER_MALORY] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Malory"),
        .speechBefore = COMPOUND_STRING("promise to show me cute Pokémon."),
        .speechWin    = COMPOUND_STRING("EC_WORD_GIGGLE…  thank you so EC_WORD_MUCH"),
        .speechLose   = COMPOUND_STRING("EC_WORD_TCH, your Pokémon aren't EC_WORD_VERY, EC_WORD_NICE"),
        .monSet = gBattleFrontierTrainerMons_Malory
    },
    [FRONTIER_TRAINER_ESTHER] = {
        .facilityClass = FACILITY_CLASS_POKEFAN_F,
        .trainerName = _("Esther"),
        .speechBefore = COMPOUND_STRING("I want a EC_WORD_NICE, EC_MOVE2(PRESENT)…"),
        .speechWin    = COMPOUND_STRING("please get me a Pokémon EC_WORD_GAME"),
        .speechLose   = COMPOUND_STRING("EC_WORD_MESSAGE, EC_WORD_CARDS, make a EC_WORD_WEAK, EC_MOVE2(PRESENT)"),
        .monSet = gBattleFrontierTrainerMons_Esther
    },
    [FRONTIER_TRAINER_OSCAR] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Oscar"),
        .speechBefore = COMPOUND_STRING("let's see your EC_WORD_POWER, in EC_WORD_FULL"),
        .speechWin    = COMPOUND_STRING("that was not your EC_WORD_FULL, EC_WORD_POWER!"),
        .speechLose   = COMPOUND_STRING("not EC_WORD_FUNNY… you're EC_WORD_TOO_STRONG"),
        .monSet = gBattleFrontierTrainerMons_Oscar
    },
    [FRONTIER_TRAINER_WILSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_M,
        .trainerName = _("Wilson"),
        .speechBefore = COMPOUND_STRING("EC_WORD_WORK, is EC_WORD_MAKING, me an EC_WORD_EARLY_BIRD"),
        .speechWin    = COMPOUND_STRING("all EC_WORD_WORK, and no EC_WORD_PLAY…"),
        .speechLose   = COMPOUND_STRING("EC_MOVE(ENDURE), is all I can EC_WORD_DO"),
        .monSet = gBattleFrontierTrainerMons_Wilson
    },
    [FRONTIER_TRAINER_CLARE] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Clare"),
        .speechBefore = COMPOUND_STRING("EC_WORD_YAY, ! a tough EC_WORD_TRAINER!"),
        .speechWin    = COMPOUND_STRING("EC_WORD_AWW, ! a EC_WORD_WIMPY, EC_WORD_TRAINER!"),
        .speechLose   = COMPOUND_STRING("cool ! a genius EC_WORD_TRAINER!"),
        .monSet = gBattleFrontierTrainerMons_Clare
    },
    [FRONTIER_TRAINER_TESS] = {
        .facilityClass = FACILITY_CLASS_PKMN_BREEDER_F,
        .trainerName = _("Tess"),
        .speechBefore = COMPOUND_STRING("want some EC_POKEMON(GULPIN), EC_WORD_DESIGN, EC_WORD_SWEETS, ?"),
        .speechWin    = COMPOUND_STRING("EC_WORD_THEY_RE, a EC_WORD_SECRET, Pokémon gourmet EC_WORD_ITEM"),
        .speechLose   = COMPOUND_STRING("EC_WORD_THEY_RE, tasty ! EC_WORD_REFRESHING, EC_WORD_TOO!"),
        .monSet = gBattleFrontierTrainerMons_Tess
    },
    [FRONTIER_TRAINER_LEON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Leon"),
        .speechBefore = COMPOUND_STRING("I am EC_WORD_BETTER, than EC_WORD_ANY, EC_WORD_OTHER, trainer."),
        .speechWin    = COMPOUND_STRING("I EC_WORD_DID, it EC_MOVE2(JUMP_KICK), for EC_WORD_JOY"),
        .speechLose   = COMPOUND_STRING("EC_WORD_BACK, EC_WORD_HOME, I will EC_WORD_GO…"),
        .monSet = gBattleFrontierTrainerMons_Leon
    },
    [FRONTIER_TRAINER_ALONZO] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Alonzo"),
        .speechBefore = COMPOUND_STRING("I've not lost EC_WORD_ONCE, EC_WORD_YET!"),
        .speechWin    = COMPOUND_STRING("your sad look EC_WORD_BECOMES, EC_WORD_YOU"),
        .speechLose   = COMPOUND_STRING("I don't EC_WORD_BELIEVE, EC_WORD_THIS…"),
        .monSet = gBattleFrontierTrainerMons_Alonzo
    },
    [FRONTIER_TRAINER_VINCE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Vince"),
        .speechBefore = COMPOUND_STRING("the EC_WORD_TOP, trainer that's EC_WORD_ME!"),
        .speechWin    = COMPOUND_STRING("the EC_WORD_TOP, EC_WORD_RANK, EC_WORD_BELONGS_TO, EC_WORD_ME!"),
        .speechLose   = COMPOUND_STRING("I will EC_WORD_APPEAL, this EC_MOVE(OUTRAGE)!"),
        .monSet = gBattleFrontierTrainerMons_Vince
    },
    [FRONTIER_TRAINER_BRYON] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_M,
        .trainerName = _("Bryon"),
        .speechBefore = COMPOUND_STRING("my EC_MOVE2(BARRAGE), will EC_MOVE2(SLAM), EC_WORD_YOU!"),
        .speechWin    = COMPOUND_STRING("you didn't EC_WORD_COUNT_ON, EC_WORD_ANY, EC_WORD_LESS, ?"),
        .speechLose   = COMPOUND_STRING("I just don't get EC_WORD_IT…"),
        .monSet = gBattleFrontierTrainerMons_Bryon
    },
    [FRONTIER_TRAINER_AVA] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Ava"),
        .speechBefore = COMPOUND_STRING("I am a treasure of this EC_WORD_WORLD"),
        .speechWin    = COMPOUND_STRING("my EC_WORD_WORLD, is EC_WORD_FULL, of EC_WORD_WONDER"),
        .speechLose   = COMPOUND_STRING("EC_WORD_WHY, are you so EC_WORD_TERRIBLE, ?"),
        .monSet = gBattleFrontierTrainerMons_Ava
    },
    [FRONTIER_TRAINER_MIRIAM] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Miriam"),
        .speechBefore = COMPOUND_STRING("oh a trainer with a EC_MOVE(SCARY_FACE)"),
        .speechWin    = COMPOUND_STRING("EC_WORD_AHAHA, you EC_WORD_ONLY, look EC_WORD_SCARY!"),
        .speechLose   = COMPOUND_STRING("EC_WORD_AIYEEH, ! you really are EC_WORD_SCARY"),
        .monSet = gBattleFrontierTrainerMons_Miriam
    },
    [FRONTIER_TRAINER_CARRIE] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Carrie"),
        .speechBefore = COMPOUND_STRING("I will show you EC_WORD_GUTSY!"),
        .speechWin    = COMPOUND_STRING("it's all about EC_WORD_GUTS, !"),
        .speechLose   = COMPOUND_STRING("oh EC_WORD_NO… EC_MOVE(SELF_DESTRUCT), EC_WORD_MODE!"),
        .monSet = gBattleFrontierTrainerMons_Carrie
    },
    [FRONTIER_TRAINER_GILLIAN2] = {
        .facilityClass = FACILITY_CLASS_COOLTRAINER_F,
        .trainerName = _("Gillian"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_SEEK, a EC_WORD_TRULY, great EC_WORD_BATTLE"),
        .speechWin    = COMPOUND_STRING("I need EC_WORD_A_LOT, EC_WORD_BETTER, EC_WORD_BATTLE…"),
        .speechLose   = COMPOUND_STRING("that was a little too much to EC_WORD_TAKE"),
        .monSet = gBattleFrontierTrainerMons_Gillian2
    },
    [FRONTIER_TRAINER_TYLER] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Tyler"),
        .speechBefore = COMPOUND_STRING("EC_WORD_YO, !  let's EC_WORD_GO!!"),
        .speechWin    = COMPOUND_STRING("EC_WORD_YO, !  I won EC_WORD_YO"),
        .speechLose   = COMPOUND_STRING("EC_WORD_YO, !  I lost EC_WORD_YO"),
        .monSet = gBattleFrontierTrainerMons_Tyler
    },
    [FRONTIER_TRAINER_CHAZ] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Chaz"),
        .speechBefore = COMPOUND_STRING("my Pokémon have too much EC_WORD_POWER"),
        .speechWin    = COMPOUND_STRING("they have more EC_WORD_POWER, EC_WORD_NOW!"),
        .speechLose   = COMPOUND_STRING("yeah EC_MOVE2(TAKE_DOWN), their EC_WORD_POWER, EC_WORD_A_TINY_BIT, EC_WORD_PLEASE"),
        .monSet = gBattleFrontierTrainerMons_Chaz
    },
    [FRONTIER_TRAINER_NELSON] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
        .trainerName = _("Nelson"),
        .speechBefore = COMPOUND_STRING("EC_WORD_WELL_THEN, will this Pokémon EC_WORD_WORK, ?"),
        .speechWin    = COMPOUND_STRING("I see that it was EC_WORD_TOO_STRONG"),
        .speechLose   = COMPOUND_STRING("it didn't EC_WORD_MATCH_UP, well I EC_WORD_THINK"),
        .monSet = gBattleFrontierTrainerMons_Nelson
    },
    [FRONTIER_TRAINER_SHANIA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Shania"),
        .speechBefore = COMPOUND_STRING("all my Pokémon EC_WORD_ABSOLUTELY, adore EC_WORD_ME"),
        .speechWin    = COMPOUND_STRING("happiness is a Pokémon with EC_WORD_CUTE_CHARM"),
        .speechLose   = COMPOUND_STRING("you're so mean to cute Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Shania
    },
    [FRONTIER_TRAINER_STELLA] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Stella"),
        .speechBefore = COMPOUND_STRING("I want to see your Pokémon."),
        .speechWin    = COMPOUND_STRING("well aren't they EC_WORD_BORING,? EC_WORD_AHAHA"),
        .speechLose   = COMPOUND_STRING("your Pokémon are EC_WORD_SOMETHING, EC_WORD_ELSE, EC_WORD_ALL_RIGHT"),
        .monSet = gBattleFrontierTrainerMons_Stella
    },
    [FRONTIER_TRAINER_DORINE] = {
        .facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
        .trainerName = _("Dorine"),
        .speechBefore = COMPOUND_STRING("I am young and strong !"),
        .speechWin    = COMPOUND_STRING("see? aren't I good ?"),
        .speechLose   = COMPOUND_STRING("this isn't working out at EC_WORD_ALL"),
        .monSet = gBattleFrontierTrainerMons_Dorine
    },
    [FRONTIER_TRAINER_MADDOX] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Maddox"),
        .speechBefore = COMPOUND_STRING("EC_WORD_DRAGON, Pokémon are my no. 1 EC_WORD_CHOICE"),
        .speechWin    = COMPOUND_STRING("it's no EC_WORD_SECRET, EC_WORD_DRAGON, Pokémon EC_WORD_WIN"),
        .speechLose   = COMPOUND_STRING("EC_WORD_DRAGON, Pokémon should not lose!"),
        .monSet = gBattleFrontierTrainerMons_Maddox
    },
    [FRONTIER_TRAINER_DAVIN] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Davin"),
        .speechBefore = COMPOUND_STRING("let's EC_WORD_HEAR, you EC_MOVE2(ROAR), !"),
        .speechWin    = COMPOUND_STRING("EC_WORD_WROOOAAR_EXCL,   EC_WORD_VICTORY!!"),
        .speechLose   = COMPOUND_STRING("EC_WORD_WROOOAAR_EXCL,   EC_WORD_WHY, EC_WORD_QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Davin
    },
    [FRONTIER_TRAINER_TREVON] = {
        .facilityClass = FACILITY_CLASS_DRAGON_TAMER,
        .trainerName = _("Trevon"),
        .speechBefore = COMPOUND_STRING("I am EC_WORD_LIVING, EC_WORD_ONLY, with EC_WORD_DRAGON, Pokémon."),
        .speechWin    = COMPOUND_STRING("the way I am EC_WORD_LIVING, is EC_WORD_PERFECT"),
        .speechLose   = COMPOUND_STRING("you've destroyed the way I am EC_WORD_LIVING"),
        .monSet = gBattleFrontierTrainerMons_Trevon
    },
    [FRONTIER_TRAINER_MATEO] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Mateo"),
        .speechBefore = COMPOUND_STRING("this should be over EC_WORD_SOON, EC_WORD_ENOUGH"),
        .speechWin    = COMPOUND_STRING("well that didn't EC_WORD_TAKE, EC_WORD_VERY, EC_WORD_MUCH"),
        .speechLose   = COMPOUND_STRING("I can't lose so EC_WORD_SOON!"),
        .monSet = gBattleFrontierTrainerMons_Mateo
    },
    [FRONTIER_TRAINER_BRET] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Bret"),
        .speechBefore = COMPOUND_STRING("I like EC_WORD_ROCK_SOLID, Pokémon the EC_WORD_BEST"),
        .speechWin    = COMPOUND_STRING("EC_WORD_TOUGHNESS, is the way to EC_WORD_GO"),
        .speechLose   = COMPOUND_STRING("I also have a EC_WORD_PLUSH_DOLL, EC_WORD_COLLECTION"),
        .monSet = gBattleFrontierTrainerMons_Bret
    },
    [FRONTIER_TRAINER_RAUL] = {
        .facilityClass = FACILITY_CLASS_BLACK_BELT,
        .trainerName = _("Raul"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_REJECT, every EC_WORD_WEAK, trainer."),
        .speechWin    = COMPOUND_STRING("EC_WORD_HUMPH, ! another EC_WORD_WEAK, EC_WORD_TRAINER…"),
        .speechLose   = COMPOUND_STRING("there is nothing EC_WORD_WEAK, about EC_WORD_YOU"),
        .monSet = gBattleFrontierTrainerMons_Raul
    },
    [FRONTIER_TRAINER_KAY] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Kay"),
        .speechBefore = COMPOUND_STRING("and EC_WORD_YET, another battle ?"),
        .speechWin    = COMPOUND_STRING("I won but I am EC_WORD_TIRED…"),
        .speechLose   = COMPOUND_STRING("good it's over at EC_WORD_LAST…"),
        .monSet = gBattleFrontierTrainerMons_Kay
    },
    [FRONTIER_TRAINER_ELENA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Elena"),
        .speechBefore = COMPOUND_STRING("a battle EC_WORD_GIRL, that's EC_WORD_ME!"),
        .speechWin    = COMPOUND_STRING("isn't a battle EC_WORD_GIRL, awesome ?"),
        .speechLose   = COMPOUND_STRING("you EC_WORD_DISLIKE, a battle EC_WORD_GIRL, ?"),
        .monSet = gBattleFrontierTrainerMons_Elena
    },
    [FRONTIER_TRAINER_ALANA] = {
        .facilityClass = FACILITY_CLASS_BATTLE_GIRL,
        .trainerName = _("Alana"),
        .speechBefore = COMPOUND_STRING("EC_WORD_EAT, my EC_WORD_INVINCIBLE, EC_WORD_ATTACK, EC_WORD_YOU!"),
        .speechWin    = COMPOUND_STRING("you have much to EC_WORD_LEARN"),
        .speechLose   = COMPOUND_STRING("so much for my EC_WORD_INVINCIBLE, EC_WORD_ATTACK"),
        .monSet = gBattleFrontierTrainerMons_Alana
    },
    [FRONTIER_TRAINER_ALEXAS] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Alexas"),
        .speechBefore = COMPOUND_STRING("good to EC_WORD_MEET_YOU, young EC_WORD_TRAINER!"),
        .speechWin    = COMPOUND_STRING("Wahahaha !  EC_WORD_GIVE, it EC_WORD_UP"),
        .speechLose   = COMPOUND_STRING("you are a strong trainer EC_WORD_KID"),
        .monSet = gBattleFrontierTrainerMons_Alexas
    },
    [FRONTIER_TRAINER_WESTON] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Weston"),
        .speechBefore = COMPOUND_STRING("I don't EC_WORD_PLAY, EC_WORD_DOWN, EC_WORD_ALL_RIGHT, ?"),
        .speechWin    = COMPOUND_STRING("you're EC_WORD_FAR, too EC_WORD_EASY, to EC_WORD_ATTACK"),
        .speechLose   = COMPOUND_STRING("well EC_WORD_WELL… I EC_WORD_SURRENDER…"),
        .monSet = gBattleFrontierTrainerMons_Weston
    },
    [FRONTIER_TRAINER_JASPER] = {
        .facilityClass = FACILITY_CLASS_EXPERT_M,
        .trainerName = _("Jasper"),
        .speechBefore = COMPOUND_STRING("I am not old I am EC_WORD_SKILLED!"),
        .speechWin    = COMPOUND_STRING("EC_WORD_SKILLED, that's what I am !"),
        .speechLose   = COMPOUND_STRING("I am EC_WORD_SHOCKED, ! EC_WORD_DOWN, I EC_WORD_GO"),
        .monSet = gBattleFrontierTrainerMons_Jasper
    },
    [FRONTIER_TRAINER_NADIA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Nadia"),
        .speechBefore = COMPOUND_STRING("you can't beat me EC_WORD_DOWN!"),
        .speechWin    = COMPOUND_STRING("EC_WORD_HAH, !  I beat EC_WORD_YOU"),
        .speechLose   = COMPOUND_STRING("I am EC_MOVE2(BEAT_UP), and EC_WORD_DOWNCAST…"),
        .monSet = gBattleFrontierTrainerMons_Nadia
    },
    [FRONTIER_TRAINER_MIRANDA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Miranda"),
        .speechBefore = COMPOUND_STRING("well well  let's EC_WORD_START"),
        .speechWin    = COMPOUND_STRING("what? done so EC_WORD_SOON, ?"),
        .speechLose   = COMPOUND_STRING("well I see that I am EC_WORD_TOO_WEAK"),
        .monSet = gBattleFrontierTrainerMons_Miranda
    },
    [FRONTIER_TRAINER_EMMA] = {
        .facilityClass = FACILITY_CLASS_EXPERT_F,
        .trainerName = _("Emma"),
        .speechBefore = COMPOUND_STRING("I've EC_WORD_BEEN, EC_WORD_HEARING, about EC_WORD_YOU"),
        .speechWin    = COMPOUND_STRING("I EC_WORD_THINK, I've EC_WORD_MISHEARD, EC_WORD_THINGS"),
        .speechLose   = COMPOUND_STRING("what I've EC_WORD_BEEN, EC_WORD_HEARING, is EC_WORD_RIGHT"),
        .monSet = gBattleFrontierTrainerMons_Emma
    },
    [FRONTIER_TRAINER_DESERT_TR5_HIKERO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Rolando"),
        .speechBefore = COMPOUND_STRING("I am a EC_WORD_SUPER, Pokémon EC_WORD_HERO!"),
        .speechWin    = COMPOUND_STRING("was that enough for you ?"),
        .speechLose   = COMPOUND_STRING("you should not beat a EC_WORD_HERO"),
        .monSet = gBattleFrontierTrainerMons_Rolando
    },
    [FRONTIER_TRAINER_DESERT_TR7_PICNICKER3LY] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Stanly"),
        .speechBefore = COMPOUND_STRING("this should be an EC_WORD_EASY, EC_WORD_MATCH"),
        .speechWin    = COMPOUND_STRING("it really was EC_WORD_EASY"),
        .speechLose   = COMPOUND_STRING("are you happy EC_WORD_NOW, ?"),
        .monSet = gBattleFrontierTrainerMons_Stanly
    },
    [FRONTIER_TRAINER_DARIO] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_M,
        .trainerName = _("Dario"),
        .speechBefore = COMPOUND_STRING("my EC_MOVE2(FORESIGHT), says I will EC_WORD_WIN"),
        .speechWin    = COMPOUND_STRING("my EC_MOVE2(FORESIGHT), EC_WORD_HAS, EC_WORD_BEEN, EC_WORD_PERFECT"),
        .speechLose   = COMPOUND_STRING("I didn't see this EC_MOVE(REVERSAL)…"),
        .monSet = gBattleFrontierTrainerMons_Dario
    },
    [FRONTIER_TRAINER_KARLEE] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Karlee"),
        .speechBefore = COMPOUND_STRING("EC_WORD_SOMETHING, good will come of EC_WORD_THIS"),
        .speechWin    = COMPOUND_STRING("you see? EC_WORD_FANTASTIC, !"),
        .speechLose   = COMPOUND_STRING("that EC_WORD_SOMETHING, good EC_WORD_WENT, to EC_WORD_YOU"),
        .monSet = gBattleFrontierTrainerMons_Karlee
    },
    [FRONTIER_TRAINER_JAYLIN] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Jaylin"),
        .speechBefore = COMPOUND_STRING("every trainer EC_WORD_HAS, EC_WORD_BEEN, EC_WORD_TOO_WEAK…"),
        .speechWin    = COMPOUND_STRING("it's EC_WORD_MAKING, me EC_MOVE(YAWN), that EC_WORD_BATTLE"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_SLEPT, and so I lost."),
        .monSet = gBattleFrontierTrainerMons_Jaylin
    },
    [FRONTIER_TRAINER_INGRID] = {
        .facilityClass = FACILITY_CLASS_PSYCHIC_F,
        .trainerName = _("Ingrid"),
        .speechBefore = COMPOUND_STRING("I am not a EC_WORD_VERY, mean trainer."),
        .speechWin    = COMPOUND_STRING("EC_WORD_WASN_T, that a good match ?"),
        .speechLose   = COMPOUND_STRING("I lost EC_WORD_CAUSE, you're EC_WORD_MEAN…"),
        .monSet = gBattleFrontierTrainerMons_Ingrid
    },
    [FRONTIER_TRAINER_DELILAH] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Delilah"),
        .speechBefore = COMPOUND_STRING("don't EC_MOVE(GRUDGE), me if I win EC_WORD_OK_QUES"),
        .speechWin    = COMPOUND_STRING("I am sorry to see you EC_WORD_ANGRY"),
        .speechLose   = COMPOUND_STRING("I have a EC_MOVE(GRUDGE), with EC_WORD_YOU"),
        .monSet = gBattleFrontierTrainerMons_Delilah
    },
    [FRONTIER_TRAINER_CARLY] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Carly"),
        .speechBefore = COMPOUND_STRING("I will EC_WORD_SCATTER, some EC_MOVE2(POISON_POWDER), EC_WORD_ABOUT"),
        .speechWin    = COMPOUND_STRING("it's scary how my strategy EC_WORD_WORKS"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_DISLIKE, you and your Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Carly
    },
    [FRONTIER_TRAINER_LEXIE] = {
        .facilityClass = FACILITY_CLASS_HEX_MANIAC,
        .trainerName = _("Lexie"),
        .speechBefore = COMPOUND_STRING("want to see scary Pokémon ?"),
        .speechWin    = COMPOUND_STRING("EC_WORD_WASN_T, that scary EC_WORD_EH_QUES"),
        .speechLose   = COMPOUND_STRING("you're more scary than my Pokémon."),
        .monSet = gBattleFrontierTrainerMons_Lexie
    },
    [FRONTIER_TRAINER_MILLER] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Miller"),
        .speechBefore = COMPOUND_STRING("EC_WORD_HELLO,?  EC_WORD_HELLO, EC_WORD_QUES_EXCL"),
        .speechWin    = COMPOUND_STRING("EC_WORD_HELLO, mother ! I EC_WORD_WON!"),
        .speechLose   = COMPOUND_STRING("my EC_WORD_PHONE, isn't EC_WORD_WORKING…"),
        .monSet = gBattleFrontierTrainerMons_Miller
    },
    [FRONTIER_TRAINER_MARV] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Marv"),
        .speechBefore = COMPOUND_STRING("you can lose your EC_MOVE(SWAGGER), EC_WORD_NOW"),
        .speechWin    = COMPOUND_STRING("there is no EC_MOVE(SWAGGER), EC_WORD_LEFT, EC_WORD_EH_QUES"),
        .speechLose   = COMPOUND_STRING("go EC_WORD_ON, EC_MOVE(SWAGGER), all you EC_WORD_WANT"),
        .monSet = gBattleFrontierTrainerMons_Marv
    },
    [FRONTIER_TRAINER_LAYTON] = {
        .facilityClass = FACILITY_CLASS_POKEMANIAC,
        .trainerName = _("Layton"),
        .speechBefore = COMPOUND_STRING("I know I am totally EC_WORD_COOL!"),
        .speechWin    = COMPOUND_STRING("you can look EC_WORD_UP, to EC_WORD_ME"),
        .speechLose   = COMPOUND_STRING("you're cool ! no EC_WORD_REALLY!"),
        .monSet = gBattleFrontierTrainerMons_Layton
    },
    [FRONTIER_TRAINER_BROOKS] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Brooks"),
        .speechBefore = COMPOUND_STRING("this is a EC_WORD_HIGH, EC_WORD_LEVEL, EC_WORD_BATTLE"),
        .speechWin    = COMPOUND_STRING("that was EC_WORD_HIGH, EC_WORD_LEVEL, and exciting EC_WORD_TOO"),
        .speechLose   = COMPOUND_STRING("you're too EC_WORD_HIGH, in EC_WORD_LEVEL…"),
        .monSet = gBattleFrontierTrainerMons_Brooks
    },
    [FRONTIER_TRAINER_GREGORY] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Gregory"),
        .speechBefore = COMPOUND_STRING("I am not that old EC_WORD_YET"),
        .speechWin    = COMPOUND_STRING("EC_WORD_WHO, says I am too old ?"),
        .speechLose   = COMPOUND_STRING("please I am really not that EC_WORD_OLD"),
        .monSet = gBattleFrontierTrainerMons_Gregory
    },
    [FRONTIER_TRAINER_REESE] = {
        .facilityClass = FACILITY_CLASS_GENTLEMAN,
        .trainerName = _("Reese"),
        .speechBefore = COMPOUND_STRING("I've a EC_WORD_COUPLE, EC_WORD_THINGS"),
        .speechWin    = COMPOUND_STRING("don't EC_WORD_DIET, EC_WORD_PLAY, EC_WORD_SPORTS, EC_WORD_INSTEAD"),
        .speechLose   = COMPOUND_STRING("EC_WORD_INSTEAD, of EC_WORD_TELEVISION, get a EC_WORD_BOOK"),
        .monSet = gBattleFrontierTrainerMons_Reese
    },
    [FRONTIER_TRAINER_MASON] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Mason"),
        .speechBefore = COMPOUND_STRING("please don't make this EC_WORD_SCARY"),
        .speechWin    = COMPOUND_STRING("EC_WORD_THANK_YOU…  I am happy EC_WORD_NOW"),
        .speechLose   = COMPOUND_STRING("I am EC_WORD_DISAPPOINTED…"),
        .monSet = gBattleFrontierTrainerMons_Mason
    },
    [FRONTIER_TRAINER_TOBY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_M,
        .trainerName = _("Toby"),
        .speechBefore = COMPOUND_STRING("EC_WORD_LISTEN, EC_WORD_UP,  I always EC_WORD_WIN"),
        .speechWin    = COMPOUND_STRING("I am a genius EC_WORD_OR, what ?"),
        .speechLose   = COMPOUND_STRING("I can beat you at EC_WORD_SMARTNESS"),
        .monSet = gBattleFrontierTrainerMons_Toby
    },
    [FRONTIER_TRAINER_DOROTHY] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Dorothy"),
        .speechBefore = COMPOUND_STRING("the EC_WORD_SPORTS, EC_WORD_WORLD, should accept Pokémon."),
        .speechWin    = COMPOUND_STRING("thank you ! that win was EC_WORD_REFRESHING"),
        .speechLose   = COMPOUND_STRING("thank you ! that loss was EC_WORD_REFRESHING"),
        .monSet = gBattleFrontierTrainerMons_Dorothy
    },
    [FRONTIER_TRAINER_PIPER] = {
        .facilityClass = FACILITY_CLASS_RUNNING_TRIATHLETE_F,
        .trainerName = _("Piper"),
        .speechBefore = COMPOUND_STRING("come on you need a EC_WORD_SPEED_BOOST, ?"),
        .speechWin    = COMPOUND_STRING("you need to show more EC_WORD_GUTS"),
        .speechLose   = COMPOUND_STRING("oh you !"),
        .monSet = gBattleFrontierTrainerMons_Piper
    },
    [FRONTIER_TRAINER_FINN] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Finn"),
        .speechBefore = COMPOUND_STRING("not another trainer EC_WORD_BATTLE…"),
        .speechWin    = COMPOUND_STRING("won't this EC_WORD_EVER, EC_WORD_END, ?"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_FINALLY, get to EC_MOVE2(REST), EC_WORD_A_LITTLE"),
        .monSet = gBattleFrontierTrainerMons_Finn
    },
    [FRONTIER_TRAINER_SAMIR] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Samir"),
        .speechBefore = COMPOUND_STRING("I EC_MOVE2(DIVE), EC_WORD_BELOW, the EC_MOVE2(SURF)!"),
        .speechWin    = COMPOUND_STRING("yahoo EC_WORD_TAKE, a EC_MOVE2(DIVE), EC_WORD_YOU!"),
        .speechLose   = COMPOUND_STRING("I am going to EC_WORD_SINK…"),
        .monSet = gBattleFrontierTrainerMons_Samir
    },
    [FRONTIER_TRAINER_FIONA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Fiona"),
        .speechBefore = COMPOUND_STRING("EC_WORD_DID, you EC_WORD_LIMBER, EC_WORD_UP, EC_WORD_BEFORE, ?"),
        .speechWin    = COMPOUND_STRING("you need to be more EC_WORD_READY"),
        .speechLose   = COMPOUND_STRING("being EC_WORD_LIMBER, didn't EC_WORD_WORK, for EC_WORD_ME"),
        .monSet = gBattleFrontierTrainerMons_Fiona
    },
    [FRONTIER_TRAINER_GLORIA] = {
        .facilityClass = FACILITY_CLASS_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Gloria"),
        .speechBefore = COMPOUND_STRING("I like to EC_WORD_ATTACK, with EC_WORD_SUCTION_CUPS"),
        .speechWin    = COMPOUND_STRING("EC_WORD_GIGGLE… it's over for EC_WORD_YOU"),
        .speechLose   = COMPOUND_STRING("I don't get how EC_WORD_SUCTION_CUPS, EC_WORD_WORK"),
        .monSet = gBattleFrontierTrainerMons_Gloria
    },
    [FRONTIER_TRAINER_NICO] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Nico"),
        .speechBefore = COMPOUND_STRING("like a EC_MOVE(SONIC_BOOM), EC_WORD_I_VE_ARRIVED"),
        .speechWin    = COMPOUND_STRING("sorry to make you so EC_WORD_DOWNCAST"),
        .speechLose   = COMPOUND_STRING("I am going with a EC_MOVE2(SUPERSONIC), EC_WORD_SPEED_BOOST"),
        .monSet = gBattleFrontierTrainerMons_Nico
    },
    [FRONTIER_TRAINER_JEREMY] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_M,
        .trainerName = _("Jeremy"),
        .speechBefore = COMPOUND_STRING("a Pokémon master that's my EC_WORD_DREAM"),
        .speechWin    = COMPOUND_STRING("my dream isn't EC_WORD_FAR, EC_WORD_OFF!"),
        .speechLose   = COMPOUND_STRING("what I dream isn't EC_WORD_HAPPENING…"),
        .monSet = gBattleFrontierTrainerMons_Jeremy
    },
    [FRONTIER_TRAINER_CAITLIN] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Caitlin"),
        .speechBefore = COMPOUND_STRING("don't you EC_WORD_THINK, I am cute ?"),
        .speechWin    = COMPOUND_STRING("there is more to me than EC_WORD_CUTENESS"),
        .speechLose   = COMPOUND_STRING("my EC_WORD_CUTE_CHARM, doesn't EC_MOVE2(ATTRACT), you ?"),
        .monSet = gBattleFrontierTrainerMons_Caitlin
    },
    [FRONTIER_TRAINER_REENA] = {
        .facilityClass = FACILITY_CLASS_CYCLING_TRIATHLETE_F,
        .trainerName = _("Reena"),
        .speechBefore = COMPOUND_STRING("I am always happy happy EC_WORD_HAPPY!"),
        .speechWin    = COMPOUND_STRING("oh EC_WORD_YAY, ! yahoo for EC_WORD_ME"),
        .speechLose   = COMPOUND_STRING("yahoo ! I am happy for EC_WORD_YOU"),
        .monSet = gBattleFrontierTrainerMons_Reena
    },
    [FRONTIER_TRAINER_AVERY] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Avery"),
        .speechBefore = COMPOUND_STRING("I've got EC_WORD_A_LOT, of bug Pokémon."),
        .speechWin    = COMPOUND_STRING("my bug Pokémon are all EC_WORD_UNBELIEVABLE"),
        .speechLose   = COMPOUND_STRING("my bug Pokémon are all EC_WORD_UPSIDE_DOWN"),
        .monSet = gBattleFrontierTrainerMons_Avery
    },
    [FRONTIER_TRAINER_LIAM] = {
        .facilityClass = FACILITY_CLASS_BUG_MANIAC,
        .trainerName = _("Liam"),
        .speechBefore = COMPOUND_STRING("we really EC_WORD_DISLIKE, EC_WORD_FIRE, and EC_WORD_FLYING"),
        .speechWin    = COMPOUND_STRING("bug Pokémon aren't bad EC_WORD_HEY_QUES"),
        .speechLose   = COMPOUND_STRING("you know what we EC_WORD_DISLIKE, EC_WORD_HEY_QUES"),
        .monSet = gBattleFrontierTrainerMons_Liam
    },
    [FRONTIER_TRAINER_THEO] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Theo"),
        .speechBefore = COMPOUND_STRING("EC_WORD_FISHING, is my EC_WORD_CHOICE, in EC_WORD_LIFE"),
        .speechWin    = COMPOUND_STRING("water Pokémon EC_MOVE2(ATTRACT), me EC_WORD_WITHOUT, EC_WORD_END"),
        .speechLose   = COMPOUND_STRING("don't EC_WORD_COUNT_ON, that EC_WORD_HAPPENING, another EC_WORD_TIME"),
        .monSet = gBattleFrontierTrainerMons_Theo
    },
    [FRONTIER_TRAINER_BAILEY] = {
        .facilityClass = FACILITY_CLASS_FISHERMAN,
        .trainerName = _("Bailey"),
        .speechBefore = COMPOUND_STRING("I am an adult I battle EC_WORD_EASY"),
        .speechWin    = COMPOUND_STRING("I am an adult I EC_MOVE2(SWALLOW), EC_WORD_JOY"),
        .speechLose   = COMPOUND_STRING("I am an adult I EC_MOVE2(SWALLOW), EC_MOVE2(FRUSTRATION)"),
        .monSet = gBattleFrontierTrainerMons_Bailey
    },
    [FRONTIER_TRAINER_HUGO] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Hugo"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_TRY, the EC_WORD_BEST, I EC_WORD_CAN"),
        .speechWin    = COMPOUND_STRING("I EC_WORD_CAN_WIN, if I EC_WORD_TRY, EC_WORD_ENOUGH"),
        .speechLose   = COMPOUND_STRING("I EC_WORD_DID, EC_WORD_TRY, didn't I ?"),
        .monSet = gBattleFrontierTrainerMons_Hugo
    },
    [FRONTIER_TRAINER_BRYCE] = {
        .facilityClass = FACILITY_CLASS_RUIN_MANIAC,
        .trainerName = _("Bryce"),
        .speechBefore = COMPOUND_STRING("I was EC_WORD_ON, vacation until EC_WORD_ONLY, EC_WORD_YESTERDAY"),
        .speechWin    = COMPOUND_STRING("I haven't lost my EC_WORD_SKILL, EC_WORD_YET"),
        .speechLose   = COMPOUND_STRING("that's EC_WORD_IT… I need EC_WORD_SLEEP"),
        .monSet = gBattleFrontierTrainerMons_Bryce
    },
    [FRONTIER_TRAINER_GIDEON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Gideon"),
        .speechBefore = COMPOUND_STRING("EC_WORD_WHAT_S_UP_QUES, you EC_WORD_THINK, I am scary ?"),
        .speechWin    = COMPOUND_STRING("I am cool but not EC_WORD_SCARY!"),
        .speechLose   = COMPOUND_STRING("look at my fabulous EC_WORD_FASHION, EC_WORD_SENSE"),
        .monSet = gBattleFrontierTrainerMons_Gideon
    },
    [FRONTIER_TRAINER_TRISTON] = {
        .facilityClass = FACILITY_CLASS_COLLECTOR,
        .trainerName = _("Triston"),
        .speechBefore = COMPOUND_STRING("I would EC_WORD_RATHER, look at Pokémon."),
        .speechWin    = COMPOUND_STRING("Huh? you mean I won EC_WORD_QUES_EXCL"),
        .speechLose   = COMPOUND_STRING("see?  I always lose"),
        .monSet = gBattleFrontierTrainerMons_Triston
    },
    [FRONTIER_TRAINER_CHARLES] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Charles"),
        .speechBefore = COMPOUND_STRING("it's EC_WORD_HOPELESS, to EC_MOVE2(STRUGGLE), with EC_WORD_ME"),
        .speechWin    = COMPOUND_STRING("EC_MOVE(SUBMISSION), was your EC_WORD_ONLY, EC_WORD_CHOICE"),
        .speechLose   = COMPOUND_STRING("I am going EC_WORD_DOWN, EC_WORD_DOWN, EC_WORD_DOWN!"),
        .monSet = gBattleFrontierTrainerMons_Charles
    },
    [FRONTIER_TRAINER_RAYMOND] = {
        .facilityClass = FACILITY_CLASS_GUITARIST,
        .trainerName = _("Raymond"),
        .speechBefore = COMPOUND_STRING("want to EC_WORD_HEAR, my EC_WORD_SONG, ?"),
        .speechWin    = COMPOUND_STRING("EC_WORD_SATISFIED, that's what I am !"),
        .speechLose   = COMPOUND_STRING("EC_WORD_SATISFIED, is what I can't EC_WORD_BE"),
        .monSet = gBattleFrontierTrainerMons_Raymond
    },
    [FRONTIER_TRAINER_DIRK] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Dirk"),
        .speechBefore = COMPOUND_STRING("EC_WORD_FLYING, Pokémon are EC_WORD_ABOVE, the EC_MOVE2(REST)"),
        .speechWin    = COMPOUND_STRING("you can't win ! EC_WORD_FLYING, Pokémon EC_WORD_RULE"),
        .speechLose   = COMPOUND_STRING("aren't there more EC_WORD_FLYING, Pokémon ?"),
        .monSet = gBattleFrontierTrainerMons_Dirk
    },
    [FRONTIER_TRAINER_HAROLD] = {
        .facilityClass = FACILITY_CLASS_BIRD_KEEPER,
        .trainerName = _("Harold"),
        .speechBefore = COMPOUND_STRING("my Pokémon EC_WORD_APPEAL, to you ?"),
        .speechWin    = COMPOUND_STRING("you do like my Pokémon ?"),
        .speechLose   = COMPOUND_STRING("so you EC_WORD_DISLIKE, my Pokémon ?"),
        .monSet = gBattleFrontierTrainerMons_Harold
    },
    [FRONTIER_TRAINER_OMAR] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Omar"),
        .speechBefore = COMPOUND_STRING("let me win in EC_MOVE(RETURN), for a EC_MOVE2(PRESENT)"),
        .speechWin    = COMPOUND_STRING("EC_WORD_HERE, you are some EC_MOVE2(TOXIC), EC_WORD_SWEETS"),
        .speechLose   = COMPOUND_STRING("your EC_MOVE2(PRESENT),? what for EC_WORD_QUES_EXCL"),
        .monSet = gBattleFrontierTrainerMons_Omar
    },
    [FRONTIER_TRAINER_PETER] = {
        .facilityClass = FACILITY_CLASS_SAILOR,
        .trainerName = _("Peter"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_BRAG, about my happiness EC_WORD_OK_QUES"),
        .speechWin    = COMPOUND_STRING("you have to EC_WORD_LISTEN, to me EC_WORD_BRAG"),
        .speechLose   = COMPOUND_STRING("I am disappointed you won't EC_WORD_LISTEN, EC_WORD_TO_ME"),
        .monSet = gBattleFrontierTrainerMons_Peter
    },
    [FRONTIER_TRAINER_DEV] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Dev"),
        .speechBefore = COMPOUND_STRING("come on let's get a EC_WORD_MOVE, EC_WORD_ON"),
        .speechWin    = COMPOUND_STRING("I get to EC_WORD_NAP, after EC_WORD_THAT"),
        .speechLose   = COMPOUND_STRING("I need to EC_WORD_NAP, after EC_WORD_THAT"),
        .monSet = gBattleFrontierTrainerMons_Dev
    },
    [FRONTIER_TRAINER_COREY] = {
        .facilityClass = FACILITY_CLASS_HIKER,
        .trainerName = _("Corey"),
        .speechBefore = COMPOUND_STRING("let's teach you how tough EC_WORD_I_AM"),
        .speechWin    = COMPOUND_STRING("look at me make a EC_MOVE(BRICK_BREAK)"),
        .speechLose   = COMPOUND_STRING("my EC_MOVE2(FRUSTRATION), is EC_WORD_CLOSE, to EC_MOVE2(ERUPTION)"),
        .monSet = gBattleFrontierTrainerMons_Corey
    },
    [FRONTIER_TRAINER_ANDRE] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Andre"),
        .speechBefore = COMPOUND_STRING("EC_WORD_NOW, this is a EC_WORD_PERFECT, EC_WORD_FLAME_BODY"),
        .speechWin    = COMPOUND_STRING("look at my EC_WORD_FIERY, EC_WORD_DANCE!"),
        .speechLose   = COMPOUND_STRING("you want an EC_MOVE2(EXPLOSION), EC_WORD_HERE, ?"),
        .monSet = gBattleFrontierTrainerMons_Andre
    },
    [FRONTIER_TRAINER_FERRIS] = {
        .facilityClass = FACILITY_CLASS_KINDLER,
        .trainerName = _("Ferris"),
        .speechBefore = COMPOUND_STRING("I am no. 1 in the old EC_WORD_CLASS"),
        .speechWin    = COMPOUND_STRING("no. 1 that's what I am !"),
        .speechLose   = COMPOUND_STRING("I am not no. 1 EC_WORD_ANY, EC_WORD_MORE…"),
        .monSet = gBattleFrontierTrainerMons_Ferris
    },
    [FRONTIER_TRAINER_ALIVIA] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Alivia"),
        .speechBefore = COMPOUND_STRING("I am feeling EC_WORD_GIDDY, so should EC_WORD_YOU"),
        .speechWin    = COMPOUND_STRING("it was all EC_WORD_TOGETHER, too EC_WORD_EASY"),
        .speechLose   = COMPOUND_STRING("I will EC_WORD_GIDDY, EC_WORD_UP, and EC_WORD_AWAY"),
        .monSet = gBattleFrontierTrainerMons_Alivia
    },
    [FRONTIER_TRAINER_PAIGE] = {
        .facilityClass = FACILITY_CLASS_PARASOL_LADY,
        .trainerName = _("Paige"),
        .speechBefore = COMPOUND_STRING("let's EC_WORD_ENJOY, our battle EC_WORD_TOGETHER"),
        .speechWin    = COMPOUND_STRING("that's it!   thank you EC_WORD_VERY, EC_WORD_MUCH"),
        .speechLose   = COMPOUND_STRING("that's it!   do go EC_WORD_ON"),
        .monSet = gBattleFrontierTrainerMons_Paige
    },
    [FRONTIER_TRAINER_ANYA] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Anya"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_DISLIKE, oh so pretty EC_WORD_FASHION"),
        .speechWin    = COMPOUND_STRING("EC_WORD_FASHION, should match the EC_WORD_PERSON"),
        .speechLose   = COMPOUND_STRING("pretty could be EC_WORD_GOOD"),
        .monSet = gBattleFrontierTrainerMons_Anya
    },
    [FRONTIER_TRAINER_DAWN] = {
        .facilityClass = FACILITY_CLASS_BEAUTY,
        .trainerName = _("Dawn"),
        .speechBefore = COMPOUND_STRING("I go all out !"),
        .speechWin    = COMPOUND_STRING("don't be a EC_WORD_BABY, !"),
        .speechLose   = COMPOUND_STRING("you won ! EC_WORD_MOVE, EC_WORD_ON!"),
        .monSet = gBattleFrontierTrainerMons_Dawn
    },
    [FRONTIER_TRAINER_ABBY] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Abby"),
        .speechBefore = COMPOUND_STRING("I like a trainer that's EC_WORD_REFRESHING"),
        .speechWin    = COMPOUND_STRING("victory EC_WORD_HAS, a EC_MOVE(SWEET_SCENT), !"),
        .speechLose   = COMPOUND_STRING("what an awful EC_WORD_STENCH, !"),
        .monSet = gBattleFrontierTrainerMons_Abby
    },
    [FRONTIER_TRAINER_GRETEL] = {
        .facilityClass = FACILITY_CLASS_AROMA_LADY,
        .trainerName = _("Gretel"),
        .speechBefore = COMPOUND_STRING("I EC_WORD_CAUSE, EC_MOVE(OUTRAGE), EC_WORD_AS, a trainer."),
        .speechWin    = COMPOUND_STRING("it's EC_WORD_ONLY, EC_WORD_NATURAL, EC_WORD_SEE_YA, EC_WORD_BYE_BYE!"),
        .speechLose   = COMPOUND_STRING("it's EC_WORD_HARD, to EC_WORD_BELIEVE, but EC_WORD_CONGRATS"),
        .monSet = gBattleFrontierTrainerMons_Gretel
    }
};
