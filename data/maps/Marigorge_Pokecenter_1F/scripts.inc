Marigorge_Pokecenter_1F_MapScripts::
# 2 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarigorgePokeCenter1F_OnTransition
	.byte 0


MarigorgePokeCenter1F_OnTransition::
# 6 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MARIGORGE_TOWN
# 7 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


MarigorgePokeCenter1F_OldMan::
# 12 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	setflag FLAG_INTRODUCED_TO_TELEPORT
# 13 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_OldMan_Text, MSGBOX_NPC
	end


MarigorgePokeCenter1F_Woman::
# 27 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Woman_Text, MSGBOX_NPC
	return


MarigorgePokeCenter1F_Abra::
# 35 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	lock
# 36 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	faceplayer
# 37 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_ABRA, CRY_MODE_ENCOUNTER
# 38 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto_if_unset FLAG_INTRODUCED_TO_TELEPORT, MarigorgePokeCenter1F_Abra_2
# 42 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message MarigorgePokeCenter1F_Abra_Text_1
# 43 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 44 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_ABRA_TELEPORT, 0
# 45 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, MarigorgePokeCenter1F_Abra_5
# 48 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, MarigorgePokeCenter1F_Abra_6
# 50 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 2, MarigorgePokeCenter1F_Abra_7
# 52 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, MarigorgePokeCenter1F_Abra_8
	return

MarigorgePokeCenter1F_Abra_2:
# 39 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Abra_Text_0, MSGBOX_NPC
	end

MarigorgePokeCenter1F_Abra_5:
# 47 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportToAldeleaf
	return

MarigorgePokeCenter1F_Abra_6:
# 49 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportToShoreslate
	return

MarigorgePokeCenter1F_Abra_7:
# 51 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

MarigorgePokeCenter1F_Abra_8:
# 53 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportToAldeleaf::
# 58 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message TeleportToAldeleaf_Text_0
# 59 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 60 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_YESNOQUESTIONMARK, 0
# 61 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 62 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, TeleportToAldeleaf_2
# 70 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, TeleportToAldeleaf_3
# 72 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, TeleportToAldeleaf_4
	return

TeleportToAldeleaf_2:
# 63 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox TeleportToAldeleaf_Text_1, MSGBOX_DEFAULT
# 64 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 65 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	closemessage
# 66 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	warpteleport MAP_WIP_CITY1, 14, 38
# 67 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitstate
# 68 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	release
	end

TeleportToAldeleaf_3:
# 71 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

TeleportToAldeleaf_4:
# 73 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportToShoreslate::
# 78 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message TeleportToAldeleaf_Text_0
# 79 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 80 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_YESNOQUESTIONMARK, 0
# 81 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, TeleportToShoreslate_2
# 90 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, TeleportToShoreslate_3
# 92 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, TeleportToShoreslate_4
	return

TeleportToShoreslate_2:
# 83 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox TeleportToAldeleaf_Text_1, MSGBOX_DEFAULT
# 84 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 85 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	closemessage
# 86 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	warpteleport MAP_SHORESLATE_CITY, 45, 12
# 87 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitstate
# 88 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	release
	end

TeleportToShoreslate_3:
# 91 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

TeleportToShoreslate_4:
# 93 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportCancel::
# 98 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Abra_Text_0, MSGBOX_NPC
	end


MarigorgePokeCenter1F_Abra_Text_0:
# 39 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra…$"

MarigorgePokeCenter1F_Abra_Text_1:
# 42 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra?$"

TeleportToAldeleaf_Text_0:
# 58 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aa! Aabra?$"

TeleportToAldeleaf_Text_1:
# 63 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra!$"

MarigorgePokeCenter1F_OldMan_Text::
# 16 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Many people who come to visit the\n"
	.string "Safari Zone are simply too fatigued\l"
	.string "to get back home after a long day\l"
	.string "of exploring.\p"
	.string "If you talk to my Abra over there,\n"
	.string "he can teleport you to some of the\l"
	.string "nearby cities, free of charge.$"

MarigorgePokeCenter1F_Woman_Text::
# 29 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "This place is very quiet.\n"
	.string "I like it.$"
