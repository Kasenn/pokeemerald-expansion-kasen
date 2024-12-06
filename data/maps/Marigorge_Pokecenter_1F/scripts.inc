Marigorge_Pokecenter_1F_MapScripts::
# 2 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarigorgePokeCenter1F_OnTransition
# 3 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Marigorge_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Marigorge_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 8, AutomaticUpdate
# 5 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 9, AutomaticUpdate2
# 6 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 10, AutomaticUpdate3
# 7 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 11, AutomaticUpdate4
# 8 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 12, AutomaticUpdate5
	.2byte 0


MarigorgePokeCenter1F_OnTransition::
# 14 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MARIGORGE_TOWN
# 15 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


MarigorgePokeCenter1F_EventScript_Nurse::
# 20 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, 2
# 21 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 22 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 24 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	release
	end


MarigorgePokeCenter1F_OldMan::
# 29 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	setflag FLAG_INTRODUCED_TO_TELEPORT
# 30 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_OldMan_Text, MSGBOX_NPC
	end


MarigorgePokeCenter1F_Woman::
# 44 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Woman_Text, MSGBOX_NPC
	return


MarigorgePokeCenter1F_Abra::
# 52 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	lockall
# 53 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	faceplayer
# 54 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_ABRA, CRY_MODE_ENCOUNTER
# 55 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto_if_unset FLAG_INTRODUCED_TO_TELEPORT, MarigorgePokeCenter1F_Abra_2
# 59 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message MarigorgePokeCenter1F_Abra_Text_1
# 60 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 61 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_ABRA_TELEPORT, 0
# 62 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, MarigorgePokeCenter1F_Abra_5
# 65 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, MarigorgePokeCenter1F_Abra_6
# 67 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 2, MarigorgePokeCenter1F_Abra_7
# 69 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, MarigorgePokeCenter1F_Abra_8
	return

MarigorgePokeCenter1F_Abra_2:
# 56 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Abra_Text_0, MSGBOX_NPC
	end

MarigorgePokeCenter1F_Abra_5:
# 64 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportToAldeleaf
	return

MarigorgePokeCenter1F_Abra_6:
# 66 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportToShoreslate
	return

MarigorgePokeCenter1F_Abra_7:
# 68 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

MarigorgePokeCenter1F_Abra_8:
# 70 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportToAldeleaf::
# 75 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message TeleportToAldeleaf_Text_0
# 76 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 77 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_YESNOQUESTIONMARK, 0
# 78 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, TeleportToAldeleaf_2
# 87 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, TeleportToAldeleaf_3
# 89 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, TeleportToAldeleaf_4
	return

TeleportToAldeleaf_2:
# 80 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox TeleportToAldeleaf_Text_1, MSGBOX_DEFAULT
# 81 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 82 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	closemessage
# 83 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	warpteleport MAP_WIP_CITY1, 14, 38
# 84 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitstate
# 85 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	release
	end

TeleportToAldeleaf_3:
# 88 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

TeleportToAldeleaf_4:
# 90 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportToShoreslate::
# 95 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message TeleportToAldeleaf_Text_0
# 96 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 97 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_YESNOQUESTIONMARK, 0
# 98 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, TeleportToShoreslate_2
# 107 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, TeleportToShoreslate_3
# 109 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, TeleportToShoreslate_4
	return

TeleportToShoreslate_2:
# 100 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox TeleportToAldeleaf_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 102 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	closemessage
# 103 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	warpteleport MAP_SHORESLATE_CITY, 45, 12
# 104 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitstate
# 105 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	release
	end

TeleportToShoreslate_3:
# 108 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

TeleportToShoreslate_4:
# 110 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportCancel::
# 115 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Abra_Text_0, MSGBOX_NPC
	end


MarigorgePokeCenter1F_Abra_Text_0:
# 56 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra…$"

MarigorgePokeCenter1F_Abra_Text_1:
# 59 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra?$"

TeleportToAldeleaf_Text_0:
# 75 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aa! Aabra?$"

TeleportToAldeleaf_Text_1:
# 80 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra!$"

MarigorgePokeCenter1F_OldMan_Text::
# 33 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Many people who come to visit the\n"
	.string "Safari Zone are simply too fatigued\l"
	.string "to get back home after a long day\l"
	.string "of exploring.\p"
	.string "If you talk to my Abra over there,\n"
	.string "he can teleport you to some of the\l"
	.string "nearby cities, free of charge.$"

MarigorgePokeCenter1F_Woman_Text::
# 46 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "This place is very quiet.\n"
	.string "I like it.$"
