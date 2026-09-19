Pearlwood_Point_FatMan::
# 2 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_Point_FatMan_Text_0, MSGBOX_NPC
	return


Pearlwood_Point_LittleGirl::
# 8 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_Point_LittleGirl_Text_0, MSGBOX_NPC
# 10 "data/town_scripts/pearlwood.pory"
	objturnnorth
	return


Pearlwood_Sign::
# 13 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_Sign_Text_0, MSGBOX_SIGN
	return


Pearlwood_Point_StopGirlTalk::
# 19 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_Point_StopGirlTalk_Text_0, MSGBOX_NPC
# 21 "data/town_scripts/pearlwood.pory"
	objturnsouth
	return


Pearlwood_House3_OldGuy::
# 25 "data/town_scripts/pearlwood.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Pearlwood_House3_OldGuy_2
# 34 "data/town_scripts/pearlwood.pory"
	goto_if_unset FLAG_PEARLWOOD_POTION_SAMPLE, Pearlwood_House3_OldGuy_4
# 46 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_House3_OldGuy_Text_2, MSGBOX_NPC
	return

Pearlwood_House3_OldGuy_2:
# 26 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_House3_OldGuy_Text_0, MSGBOX_NPC
	end

Pearlwood_House3_OldGuy_4:
# 35 "data/town_scripts/pearlwood.pory"
	lock
# 36 "data/town_scripts/pearlwood.pory"
	faceplayer
# 37 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_House3_OldGuy_Text_1
# 40 "data/town_scripts/pearlwood.pory"
	giveitem ITEM_POTION, 1
# 41 "data/town_scripts/pearlwood.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Pearlwood_House3_OldGuy_8
Pearlwood_House3_OldGuy_7:
# 42 "data/town_scripts/pearlwood.pory"
	setflag FLAG_PEARLWOOD_POTION_SAMPLE
# 43 "data/town_scripts/pearlwood.pory"
	release
	return

Pearlwood_House3_OldGuy_8:
# 41 "data/town_scripts/pearlwood.pory"
	goto ZeBagIsFull
	goto Pearlwood_House3_OldGuy_7


Pearlwood_House2_OldGuy::
# 53 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_House2_OldGuy_Text_0, MSGBOX_NPC
	return


Pearlwood_House2_Woman::
# 60 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_House2_Woman_Text_0, MSGBOX_NPC
	return


PearlwoodHouse2_2F_Girl::
# 65 "data/town_scripts/pearlwood.pory"
	msgbox PearlwoodHouse2_2F_Girl_Text_0, MSGBOX_NPC
# 70 "data/town_scripts/pearlwood.pory"
	objturnnorth
	return


Pearlwood_House1_OldLady::
# 73 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_House1_OldLady_Text_0, MSGBOX_NPC
	return


Pearlwood_House1_YoungGirl::
# 80 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_House1_YoungGirl_Text_0, MSGBOX_NPC
# 88 "data/town_scripts/pearlwood.pory"
	objturnnorth
	return


Pearlwood_MaysHouse1F_RivalMom::
# 91 "data/town_scripts/pearlwood.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MET_RIVAL
	goto_if_le Pearlwood_MaysHouse1F_RivalMom_1
# 100 "data/town_scripts/pearlwood.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_BROTHER_FOUGHT
	goto_if_ge Pearlwood_MaysHouse1F_RivalMom_2
# 109 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_MaysHouse1F_RivalMom_Text_4, MSGBOX_NPC
	return

Pearlwood_MaysHouse1F_RivalMom_1:
	checkplayergender
# 0 "data/town_scripts/pearlwood.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Pearlwood_MaysHouse1F_RivalMom_7
# 93 "data/town_scripts/pearlwood.pory"
	bufferstring STR_VAR_1, Pearlwood_MaysHouse1F_RivalMom_Text_1
Pearlwood_MaysHouse1F_RivalMom_6:
# 94 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_MaysHouse1F_RivalMom_Text_2, MSGBOX_NPC
	return

Pearlwood_MaysHouse1F_RivalMom_2:
# 101 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_MaysHouse1F_RivalMom_Text_3, MSGBOX_NPC
	return

Pearlwood_MaysHouse1F_RivalMom_7:
# 92 "data/town_scripts/pearlwood.pory"
	bufferstring STR_VAR_1, Pearlwood_MaysHouse1F_RivalMom_Text_0
	goto Pearlwood_MaysHouse1F_RivalMom_6


Pearlwood_MaysHouse1F_RivalSibling::
# 119 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_MaysHouse1F_RivalSibling_Text_0, MSGBOX_NPC
	return


Pearlwood_MaysHouse2F_Rival::
# 124 "data/town_scripts/pearlwood.pory"
	lock
# 125 "data/town_scripts/pearlwood.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES
	goto_if_eq Pearlwood_MaysHouse2F_Rival_2
# 158 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_MaysHouse2F_Rival_Text_3
Pearlwood_MaysHouse2F_Rival_1:
# 161 "data/town_scripts/pearlwood.pory"
	objturnnorth
# 162 "data/town_scripts/pearlwood.pory"
	release
	return

Pearlwood_MaysHouse2F_Rival_2:
# 126 "data/town_scripts/pearlwood.pory"
	waitse
# 127 "data/town_scripts/pearlwood.pory"
	playse SE_PIN
# 128 "data/town_scripts/pearlwood.pory"
	safefollow
# 129 "data/town_scripts/pearlwood.pory"
	exclamationmark VAR_LAST_TALKED
# 130 "data/town_scripts/pearlwood.pory"
	faceplayer
# 131 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_MaysHouse2F_Rival_Text_0, MSGBOX_AUTOCLOSE
# 136 "data/town_scripts/pearlwood.pory"
	delay 20
# 137 "data/town_scripts/pearlwood.pory"
	playse SE_PIN
# 138 "data/town_scripts/pearlwood.pory"
	exclamationmark VAR_LAST_TALKED
# 139 "data/town_scripts/pearlwood.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MET_RIVAL
	checkplayergender
# 0 "data/town_scripts/pearlwood.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Pearlwood_MaysHouse2F_Rival_5
# 149 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_MaysHouse2F_Rival_Text_2
	goto Pearlwood_MaysHouse2F_Rival_1

Pearlwood_MaysHouse2F_Rival_5:
# 141 "data/town_scripts/pearlwood.pory"
	msgbox Pearlwood_MaysHouse2F_Rival_Text_1
	goto Pearlwood_MaysHouse2F_Rival_1


WooperDoll::
# 166 "data/town_scripts/pearlwood.pory"
	msgbox WooperDoll_Text_0, MSGBOX_SIGN
	return


AzurillDoll::
# 169 "data/town_scripts/pearlwood.pory"
	msgbox AzurillDoll_Text_0, MSGBOX_SIGN
	return


Pearlwood_Point_FatMan_Text_0:
# 2 "data/town_scripts/pearlwood.pory"
	.string "The weather is so calm here despite\n"
	.string "the close proximity to the sea.\p"
	.string "Must be all the trees blocking\n"
	.string "the sea breeze.$"

Pearlwood_Point_LittleGirl_Text_0:
# 8 "data/town_scripts/pearlwood.pory"
	.string "Do you think there are Pokémon\n"
	.string "in these trees?$"

Pearlwood_Sign_Text_0:
# 13 "data/town_scripts/pearlwood.pory"
	.string "PEARLWOOD POINT\n"
	.string "“A town of new beginnings.”\p"
	.string "{LEFT_ARROW} Prof. Birch's Pokémon lab\n"
	.string "{RIGHT_ARROW} Route 1$"

Pearlwood_Point_StopGirlTalk_Text_0:
# 19 "data/town_scripts/pearlwood.pory"
	.string "It's dangerous to leave the town\n"
	.string "without your own Pokémon.$"

Pearlwood_House3_OldGuy_Text_0:
# 26 "data/town_scripts/pearlwood.pory"
	.string "Oh?\p"
	.string "You look like the age where you're\n"
	.string "supposed to get your first Pokémon.\p"
	.string "If you're looking for the Professor's\n"
	.string "lab, you can find it on the opposite\l"
	.string "end of the town.$"

Pearlwood_House3_OldGuy_Text_1:
# 37 "data/town_scripts/pearlwood.pory"
	.string "I used to work at a Pokémon Mart\n"
	.string "back in the day.\p"
	.string "Here, I want you to have this sample.$"

Pearlwood_House3_OldGuy_Text_2:
# 46 "data/town_scripts/pearlwood.pory"
	.string "A potion can be used anytime, so it's\n"
	.string "even more useful than a Pokémon Center\l"
	.string "in certain situations.$"

Pearlwood_House2_OldGuy_Text_0:
# 53 "data/town_scripts/pearlwood.pory"
	.string "Back in my day we had no idea of any\n"
	.string "physical and special splits.\l"
	.string "Fire punch was as much a special move\l"
	.string "as fire blast.\p"
	.string "Oh how times have changed…$"

Pearlwood_House2_Woman_Text_0:
# 60 "data/town_scripts/pearlwood.pory"
	.string "It really feels like you're living\n"
	.string "at the end of a world here.\l"
	.string "Or, at the beginning of one.$"

PearlwoodHouse2_2F_Girl_Text_0:
# 65 "data/town_scripts/pearlwood.pory"
	.string "Have you heard of the Fairy type?\n"
	.string "Fairy type Pokémon are really strong\l"
	.string "against Fighting, Dark, and Dragon\l"
	.string "type Pokémon while being very weak\l"
	.string "to Steel and Poison.$"

Pearlwood_House1_OldLady_Text_0:
# 73 "data/town_scripts/pearlwood.pory"
	.string "How is the professor able to provide\n"
	.string "all the young trainers with Pokémon?\p"
	.string "I rarely see him leaving the village\n"
	.string "so he must be getting them from\l"
	.string "somewhere nearby.$"

Pearlwood_House1_YoungGirl_Text_0:
# 80 "data/town_scripts/pearlwood.pory"
	.string "Listen to this book I'm reading!\p"
	.string "“The Pokémon habitat can be more\n"
	.string "diverse than it initially seems.\l"
	.string "While most habitats seem to be \l"
	.string "dominated by only a handful of\l"
	.string "Pokémon species, one should never\l"
	.string "rule out the possibility of coming\l"
	.string "across something unexpected.”$"

Pearlwood_MaysHouse1F_RivalMom_Text_0:
# 92 "data/town_scripts/pearlwood.pory"
	.string "her$"

Pearlwood_MaysHouse1F_RivalMom_Text_1:
# 93 "data/town_scripts/pearlwood.pory"
	.string "his$"

Pearlwood_MaysHouse1F_RivalMom_Text_2:
# 94 "data/town_scripts/pearlwood.pory"
	.string "Hello neighbor!\p"
	.string "I believe {RIVAL} was working on\n"
	.string "something in {STR_VAR_1} room.\p"
	.string "If you're looking for my husband,\n"
	.string "you can probably find him in his lab.$"

Pearlwood_MaysHouse1F_RivalMom_Text_3:
# 101 "data/town_scripts/pearlwood.pory"
	.string "I think it's wonderful for people to\n"
	.string "travel with Pokémon.\p"
	.string "But you should go home every so often\n"
	.string "to let your mother know you're okay.\p"
	.string "She might not say it, but I'm sure she\n"
	.string "worries about you, {PLAYER}.$"

Pearlwood_MaysHouse1F_RivalMom_Text_4:
# 109 "data/town_scripts/pearlwood.pory"
	.string "Oh, {RIVAL} went out to Primrose\n"
	.string "Meadow just a little while ago.\p"
	.string "Like father, like child.\n"
	.string "{RIVAL} can't stay quietly at home.\p"
	.string "Primrose Meadow is just past\n"
	.string "the next town.$"

Pearlwood_MaysHouse1F_RivalSibling_Text_0:
# 119 "data/town_scripts/pearlwood.pory"
	.string "Hi, neighbor!\p"
	.string "Do you already have your\n"
	.string "own Pokémon?$"

Pearlwood_MaysHouse2F_Rival_Text_0:
# 131 "data/town_scripts/pearlwood.pory"
	.string "{RIVAL}: Oh, hi {PLAYER}!\p"
	.string "Sorry, I'm a bit busy answering to\n"
	.string "some e-mail.\p"
	.string "I heard that my dad\n"
	.string "was looking for you.$"

Pearlwood_MaysHouse2F_Rival_Text_1:
# 141 "data/town_scripts/pearlwood.pory"
	.string "I get it now!\n"
	.string "I bet it's time for you to finally\l"
	.string "get your own Pokémon!\l"
	.string "I hope you pick a cute one!\p"
	.string "Dad's probably waiting for you\n"
	.string "in his lab to the northwest.$"

Pearlwood_MaysHouse2F_Rival_Text_2:
# 149 "data/town_scripts/pearlwood.pory"
	.string "I get it now!\n"
	.string "I bet it's time for you to finally\l"
	.string "get your own Pokémon!\l"
	.string "I hope you pick a cool one!\p"
	.string "Dad's probably waiting for you\n"
	.string "in his lab to the northwest.$"

Pearlwood_MaysHouse2F_Rival_Text_3:
# 158 "data/town_scripts/pearlwood.pory"
	.string "{RIVAL}: Sorry, but I REALLY need to\n"
	.string "finish writing this e-mail.$"

WooperDoll_Text_0:
# 166 "data/town_scripts/pearlwood.pory"
	.string "It's a Wooper doll.$"

AzurillDoll_Text_0:
# 169 "data/town_scripts/pearlwood.pory"
	.string "It's an Azurill doll.$"
