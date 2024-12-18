Route16_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkitem ITEM_ZYGARDE_CUBE
	compare VAR_RESULT, TRUE
	goto_if_eq Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setmaplayoutindex LAYOUT_ROUTE16_NO_CURRENTS
	setflag FLAG_TEMP_1
	return


RapidsTooStrong::
	msgbox RapidsTooStrong_Text, MSGBOX_NPC
	return


EndOfBeta::
	msgbox EndOfBeta_Text, MSGBOX_SIGN
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
	waitmovement 0
	return


RapidsTooStrong_Text::
	.string "The waves here can be really\n"
	.string "unpredictable.\p"
	.string "No choice but to wait for\n"
	.string "them to die down.$"

EndOfBeta_Text::
	.string "This way is blocked off\n"
	.string "until the next release.$"
