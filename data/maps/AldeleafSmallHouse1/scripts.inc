AldeleafSmallHouse1_MapScripts::
	.byte 0


AldeleafSmallHouse1_Man::
# 4 "data/maps/AldeleafSmallHouse1/scripts.pory"
	goto_if_set FLAG_WHITEFLUTE_RECEIVED, AldeleafSmallHouse1_Man_2
AldeleafSmallHouse1_Man_1:
# 7 "data/maps/AldeleafSmallHouse1/scripts.pory"
	lock
# 8 "data/maps/AldeleafSmallHouse1/scripts.pory"
	faceplayer
# 9 "data/maps/AldeleafSmallHouse1/scripts.pory"
	msgbox AldeleafSmallHouse1_Man_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_BLACK_FLUTE
# 0 "data/maps/AldeleafSmallHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafSmallHouse1_Man_5
AldeleafSmallHouse1_Man_4:
# 13 "data/maps/AldeleafSmallHouse1/scripts.pory"
	giveitem ITEM_BLACK_FLUTE, 1
# 14 "data/maps/AldeleafSmallHouse1/scripts.pory"
	setflag FLAG_WHITEFLUTE_RECEIVED
# 15 "data/maps/AldeleafSmallHouse1/scripts.pory"
	msgbox ExplainWhiteFlute, MSGBOX_NPC
	end

AldeleafSmallHouse1_Man_2:
# 5 "data/maps/AldeleafSmallHouse1/scripts.pory"
	goto AldeleafSmallHouse1_Man2
	goto AldeleafSmallHouse1_Man_1

AldeleafSmallHouse1_Man_5:
# 11 "data/maps/AldeleafSmallHouse1/scripts.pory"
	goto ZeBagIsFull
	goto AldeleafSmallHouse1_Man_4


AldeleafSmallHouse1_Man2::
# 24 "data/maps/AldeleafSmallHouse1/scripts.pory"
	msgbox AldeleafSmallHouse1_Man2_Text_0, MSGBOX_NPC
	end


AldeleafSmallHouse1_Man2_Text_0:
# 24 "data/maps/AldeleafSmallHouse1/scripts.pory"
	.string "Thanks again for your help.$"

AldeleafSmallHouse1_Man_Text::
# 19 "data/maps/AldeleafSmallHouse1/scripts.pory"
	.string "Thank you for retrieving my\nhouse key for me.\lTo show you my gratitude,\lI'd like you to have this.$"

ExplainWhiteFlute::
# 28 "data/maps/AldeleafSmallHouse1/scripts.pory"
	.string "Using that flute repels wild Pokémon\naround you, making it less likely\lfor you to encounter them.$"
