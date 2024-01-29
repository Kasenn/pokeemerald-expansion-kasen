Desert_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DesertVarSet
	.byte 0


DesertVarSet::
	setvar VAR_TEMP_DESERTRUINSFOUND, 0
	return


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


Desert_TriggerEntrance_Text_0:
	.string "triggered$"
