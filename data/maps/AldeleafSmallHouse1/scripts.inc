AldeleafSmallHouse1_MapScripts::
	.byte 0


AldeleafSmallHouse1_Man::
	goto_if_set FLAG_WHITEFLUTE_RECEIVED, AldeleafSmallHouse1_Man_2
AldeleafSmallHouse1_Man_1:
	lockall
	faceplayer
	msgbox AldeleafSmallHouse1_Man_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_WHITE_FLUTE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafSmallHouse1_Man_5
AldeleafSmallHouse1_Man_4:
	giveitem ITEM_WHITE_FLUTE, 1
	setflag FLAG_WHITEFLUTE_RECEIVED
	msgbox ExplainWhiteFlute, MSGBOX_NPC
	end

AldeleafSmallHouse1_Man_2:
	goto AldeleafSmallHouse1_Man2
	goto AldeleafSmallHouse1_Man_1

AldeleafSmallHouse1_Man_5:
	goto OldManNotEnoughRoom
	goto AldeleafSmallHouse1_Man_4


OldManNotEnoughRoom::
	msgbox OldManNotEnoughRoom_Text_0, MSGBOX_NPC
	end


AldeleafSmallHouse1_Man2::
	msgbox AldeleafSmallHouse1_Man2_Text_0, MSGBOX_NPC
	end


OldManNotEnoughRoom_Text_0:
	.string "Oh, but you don't have enough room…$"

AldeleafSmallHouse1_Man2_Text_0:
	.string "Thanks again for your help.$"

AldeleafSmallHouse1_Man_Text::
	.string "Thank you for retrieving my\nhouse key for me.\lTo show you my gratitude,\lI'd like you to have this.$"

ExplainWhiteFlute::
	.string "Using that flute attracts wild Pokémon\naround you, making it more likely\lfor you to encounter them.$"
