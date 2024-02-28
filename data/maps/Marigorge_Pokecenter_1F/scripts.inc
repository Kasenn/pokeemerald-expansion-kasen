Marigorge_Pokecenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MarigorgePokeCenter1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


MarigorgePokeCenter1F_OnTransition::
	setrespawn HEAL_LOCATION_MARIGORGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end


MarigorgePokeCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, 2
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


MarigorgePokeCenter1F_OldMan::
	msgbox MarigorgePokeCenter1F_OldMan_Text, MSGBOX_NPC
	end


MarigorgePokeCenter1F_Woman::
	msgbox MarigorgePokeCenter1F_Woman_Text, MSGBOX_NPC
	return


MarigorgePokeCenter1F_Abra::
	lockall
	faceplayer
	playmoncry SPECIES_ABRA, CRY_MODE_ENCOUNTER
	message MarigorgePokeCenter1F_Abra_Text_0
	waitmessage
	multichoice 23, 0, MULTI_ABRA_TELEPORT, 0
	switch VAR_RESULT
	case 0, MarigorgePokeCenter1F_Abra_2
	case 1, MarigorgePokeCenter1F_Abra_3
	case 2, MarigorgePokeCenter1F_Abra_4
	case MULTI_B_PRESSED, MarigorgePokeCenter1F_Abra_5
	return

MarigorgePokeCenter1F_Abra_2:
	goto TeleportToAldeleaf
	return

MarigorgePokeCenter1F_Abra_3:
	goto TeleportToShoreslate
	return

MarigorgePokeCenter1F_Abra_4:
	goto TeleportCancel
	return

MarigorgePokeCenter1F_Abra_5:
	goto TeleportCancel
	return


TeleportToAldeleaf::
	message TeleportToAldeleaf_Text_0
	multichoice 23, 0, MULTI_YESNOQUESTIONMARK, 0
	switch VAR_RESULT
	case 0, TeleportToAldeleaf_2
	case 1, TeleportToAldeleaf_3
	case MULTI_B_PRESSED, TeleportToAldeleaf_4
	return

TeleportToAldeleaf_2:
	msgbox TeleportToAldeleaf_Text_1, MSGBOX_DEFAULT
	waitmessage
	closemessage
	warpteleport MAP_WIP_CITY1, 14, 38
	waitstate
	release
	end

TeleportToAldeleaf_3:
	goto TeleportCancel
	return

TeleportToAldeleaf_4:
	goto TeleportCancel
	return


TeleportToShoreslate::
	message TeleportToAldeleaf_Text_0
	multichoice 23, 0, MULTI_YESNOQUESTIONMARK, 0
	switch VAR_RESULT
	case 0, TeleportToShoreslate_2
	case 1, TeleportToShoreslate_3
	case MULTI_B_PRESSED, TeleportToShoreslate_4
	return

TeleportToShoreslate_2:
	msgbox TeleportToAldeleaf_Text_1, MSGBOX_DEFAULT
	waitmessage
	closemessage
	warpteleport MAP_SHORESLATE_CITY, 45, 12
	waitstate
	release
	end

TeleportToShoreslate_3:
	goto TeleportCancel
	return

TeleportToShoreslate_4:
	goto TeleportCancel
	return


TeleportCancel::
	msgbox TeleportCancel_Text_0, MSGBOX_NPC
	end


MarigorgePokeCenter1F_Abra_Text_0:
	.string "Abra: Aabra?$"

TeleportToAldeleaf_Text_0:
	.string "Abra: Aa! Aabra?$"

TeleportToAldeleaf_Text_1:
	.string "Abra: Aabra!$"

TeleportCancel_Text_0:
	.string "Abra: Aabra…$"

MarigorgePokeCenter1F_OldMan_Text::
	.string "Many people who come to visit the\n"
	.string "Safari Zone are simply too fatigued\l"
	.string "to get back home after a long day\l"
	.string "of exploring.\p"
	.string "If you talk to my Abra over there,\n"
	.string "he can teleport you to some of the\l"
	.string "nearby cities, free of charge.$"

MarigorgePokeCenter1F_Woman_Text::
	.string "This place is very quiet.\n"
	.string "I like it.$"
