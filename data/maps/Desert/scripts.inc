Desert_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DesertVarSet
	.byte 0


DesertVarSet::
	setflag FLAG_DESERT_STEPS
	return


DesertEntrance::
	msgbox DesertEntrance_Text_0, MSGBOX_NPC
	end


Desert_RuinsFound::
	release
	random 200
	compare VAR_RESULT, 1
	goto_if_le Desert_RuinsFound_1
	release
	end

Desert_RuinsFound_1:
	goto Desert_TriggerEntrance
	return


Desert_TriggerEntrance::
	msgbox Desert_TriggerEntrance_Text_0, MSGBOX_DEFAULT
	closemessage
	release
	end


ScorchedDesert_TriggerQuakes::
	random 9
	addvar VAR_TEMP_3, 1
	switch VAR_TEMP_3
	case 1, ScorchedDesert_TriggerQuakes_3
	case 2, ScorchedDesert_TriggerQuakes_4
	case 3, ScorchedDesert_TriggerQuakes_5
	case 4, ScorchedDesert_TriggerQuakes_6
	case 5, ScorchedDesert_TriggerQuakes_7
	case 6, ScorchedDesert_TriggerQuakes_8
ScorchedDesert_TriggerQuakes_1:
	end

ScorchedDesert_TriggerQuakes_3:
	msgbox ScorchedDesert_TriggerQuakes_Text_0, MSGBOX_NPC
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_4:
	msgbox ScorchedDesert_TriggerQuakes_Text_1, MSGBOX_NPC
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_5:
	msgbox ScorchedDesert_TriggerQuakes_Text_2, MSGBOX_NPC
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_6:
	msgbox ScorchedDesert_TriggerQuakes_Text_3, MSGBOX_NPC
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_7:
	msgbox ScorchedDesert_TriggerQuakes_Text_4, MSGBOX_NPC
	goto ScorchedDesert_TriggerQuakes_1

ScorchedDesert_TriggerQuakes_8:
	msgbox ScorchedDesert_TriggerQuakes_Text_5, MSGBOX_NPC
	goto ScorchedDesert_TriggerQuakes_1


DesertEntrance_Text_0:
	.string "This place is still work in progress.\n"
	.string "You're free to explore, though there's\l"
	.string "no trainers here and even the terrain\l"
	.string "is still under construction in places.\p"
	.string "Wild encounters should be working.$"

Desert_TriggerEntrance_Text_0:
	.string "triggered$"

ScorchedDesert_TriggerQuakes_Text_0:
	.string "you feel the sand shifting sligthly below your feet$"

ScorchedDesert_TriggerQuakes_Text_1:
	.string "the shifting of the sand is getting stronger$"

ScorchedDesert_TriggerQuakes_Text_2:
	.string "desert var is now 3$"

ScorchedDesert_TriggerQuakes_Text_3:
	.string "desert var is now 4$"

ScorchedDesert_TriggerQuakes_Text_4:
	.string "desert var is now 5$"

ScorchedDesert_TriggerQuakes_Text_5:
	.string "desert var is now 6$"
