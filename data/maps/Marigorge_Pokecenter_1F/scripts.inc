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


MarigorgePokeCenter1F_EventScript_Nurse::
# 12 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, 2
# 13 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	release
	end


MarigorgePokeCenter1F_OldMan::
# 21 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	setflag FLAG_INTRODUCED_TO_TELEPORT
# 22 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_OldMan_Text, MSGBOX_NPC
	end


MarigorgePokeCenter1F_Woman::
# 36 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Woman_Text, MSGBOX_NPC
	return


MarigorgePokeCenter1F_Abra::
# 44 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	lock
# 45 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	faceplayer
# 46 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_ABRA, CRY_MODE_ENCOUNTER
# 47 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto_if_unset FLAG_INTRODUCED_TO_TELEPORT, MarigorgePokeCenter1F_Abra_2
# 51 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message MarigorgePokeCenter1F_Abra_Text_1
# 52 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 53 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_ABRA_TELEPORT, 0
# 54 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, MarigorgePokeCenter1F_Abra_5
# 57 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, MarigorgePokeCenter1F_Abra_6
# 59 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 2, MarigorgePokeCenter1F_Abra_7
# 61 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, MarigorgePokeCenter1F_Abra_8
	return

MarigorgePokeCenter1F_Abra_2:
# 48 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Abra_Text_0, MSGBOX_NPC
	end

MarigorgePokeCenter1F_Abra_5:
# 56 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportToAldeleaf
	return

MarigorgePokeCenter1F_Abra_6:
# 58 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportToShoreslate
	return

MarigorgePokeCenter1F_Abra_7:
# 60 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

MarigorgePokeCenter1F_Abra_8:
# 62 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportToAldeleaf::
# 67 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message TeleportToAldeleaf_Text_0
# 68 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 69 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_YESNOQUESTIONMARK, 0
# 70 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, TeleportToAldeleaf_2
# 79 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, TeleportToAldeleaf_3
# 81 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, TeleportToAldeleaf_4
	return

TeleportToAldeleaf_2:
# 72 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox TeleportToAldeleaf_Text_1, MSGBOX_DEFAULT
# 73 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 74 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	closemessage
# 75 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	warpteleport MAP_WIP_CITY1, 14, 38
# 76 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitstate
# 77 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	release
	end

TeleportToAldeleaf_3:
# 80 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

TeleportToAldeleaf_4:
# 82 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportToShoreslate::
# 87 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	message TeleportToAldeleaf_Text_0
# 88 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 89 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_YESNOQUESTIONMARK, 0
# 90 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 0, TeleportToShoreslate_2
# 99 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case 1, TeleportToShoreslate_3
# 101 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, TeleportToShoreslate_4
	return

TeleportToShoreslate_2:
# 92 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox TeleportToAldeleaf_Text_1, MSGBOX_DEFAULT
# 93 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitmessage
# 94 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	closemessage
# 95 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	warpteleport MAP_SHORESLATE_CITY, 45, 12
# 96 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	waitstate
# 97 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	release
	end

TeleportToShoreslate_3:
# 100 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return

TeleportToShoreslate_4:
# 102 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	goto TeleportCancel
	return


TeleportCancel::
# 107 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	msgbox MarigorgePokeCenter1F_Abra_Text_0, MSGBOX_NPC
	end


MarigorgePokeCenter1F_Abra_Text_0:
# 48 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra…$"

MarigorgePokeCenter1F_Abra_Text_1:
# 51 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra?$"

TeleportToAldeleaf_Text_0:
# 67 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aa! Aabra?$"

TeleportToAldeleaf_Text_1:
# 72 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Abra: Aabra!$"

MarigorgePokeCenter1F_OldMan_Text::
# 25 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "Many people who come to visit the\n"
	.string "Safari Zone are simply too fatigued\l"
	.string "to get back home after a long day\l"
	.string "of exploring.\p"
	.string "If you talk to my Abra over there,\n"
	.string "he can teleport you to some of the\l"
	.string "nearby cities, free of charge.$"

MarigorgePokeCenter1F_Woman_Text::
# 38 "data/maps/Marigorge_Pokecenter_1F/scripts.pory"
	.string "This place is very quiet.\n"
	.string "I like it.$"
