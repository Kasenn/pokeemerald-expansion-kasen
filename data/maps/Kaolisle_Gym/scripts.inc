Kaolisle_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Kaolisle_Gym_SetMetatiles
	.byte 0


Kaolisle_Gym_SetMetatiles::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_SetMetatiles_2
Kaolisle_Gym_SetMetatiles_1:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_SetMetatiles_5
Kaolisle_Gym_SetMetatiles_4:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_SetMetatiles_8
Kaolisle_Gym_SetMetatiles_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_SetMetatiles_11
Kaolisle_Gym_SetMetatiles_10:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_SetMetatiles_15
Kaolisle_Gym_SetMetatiles_13:
	end

Kaolisle_Gym_SetMetatiles_2:
	setmetatile 39, 46, 0x219, FALSE
	setmetatile 39, 47, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_1

Kaolisle_Gym_SetMetatiles_5:
	setmetatile 3, 35, 0x219, FALSE
	setmetatile 3, 36, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_4

Kaolisle_Gym_SetMetatiles_8:
	setmetatile 51, 24, 0x219, FALSE
	setmetatile 51, 25, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_7

Kaolisle_Gym_SetMetatiles_11:
	setmetatile 15, 2, 0x219, FALSE
	setmetatile 15, 3, 0x221, TRUE
	goto Kaolisle_Gym_SetMetatiles_10

Kaolisle_Gym_SetMetatiles_14:
	setmetatile 8, 63, 0x26B, FALSE
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_15:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_SetMetatiles_17
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_17:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_SetMetatiles_19
	goto Kaolisle_Gym_SetMetatiles_13

Kaolisle_Gym_SetMetatiles_19:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_SetMetatiles_14
	goto Kaolisle_Gym_SetMetatiles_13


Kaolisle_Gym_Switch1::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_2
	setflag FLAG_KAOLISLE_GYM_SWITCH1
	playse SE_SWITCH
	setmetatile 39, 46, 0x219, FALSE
	setmetatile 39, 47, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch1_7
Kaolisle_Gym_Switch1_6:
	msgbox Kaolisle_Gym_Switch1_Text_2, MSGBOX_NPC
Kaolisle_Gym_Switch1_4:
	waitse
	release
	end

Kaolisle_Gym_Switch1_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch1_5:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
	goto Kaolisle_Gym_Switch1_4

Kaolisle_Gym_Switch1_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch1_9
	goto Kaolisle_Gym_Switch1_6

Kaolisle_Gym_Switch1_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch1_11
	goto Kaolisle_Gym_Switch1_6

Kaolisle_Gym_Switch1_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch1_5
	goto Kaolisle_Gym_Switch1_6


Kaolisle_Gym_Switch2::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch2_2
	setflag FLAG_KAOLISLE_GYM_SWITCH2
	playse SE_SWITCH
	setmetatile 3, 35, 0x219, FALSE
	setmetatile 3, 36, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch2_7
Kaolisle_Gym_Switch2_6:
	msgbox Kaolisle_Gym_Switch1_Text_2, MSGBOX_NPC
Kaolisle_Gym_Switch2_4:
	waitse
	release
	end

Kaolisle_Gym_Switch2_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch2_5:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
	goto Kaolisle_Gym_Switch2_4

Kaolisle_Gym_Switch2_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch2_9
	goto Kaolisle_Gym_Switch2_6

Kaolisle_Gym_Switch2_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch2_11
	goto Kaolisle_Gym_Switch2_6

Kaolisle_Gym_Switch2_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch2_5
	goto Kaolisle_Gym_Switch2_6


Kaolisle_Gym_Switch3::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch3_2
	setflag FLAG_KAOLISLE_GYM_SWITCH3
	playse SE_SWITCH
	setmetatile 51, 24, 0x219, FALSE
	setmetatile 51, 25, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch3_7
Kaolisle_Gym_Switch3_6:
	msgbox Kaolisle_Gym_Switch1_Text_2, MSGBOX_NPC
Kaolisle_Gym_Switch3_4:
	waitse
	release
	end

Kaolisle_Gym_Switch3_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch3_5:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
	goto Kaolisle_Gym_Switch3_4

Kaolisle_Gym_Switch3_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch3_9
	goto Kaolisle_Gym_Switch3_6

Kaolisle_Gym_Switch3_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch3_11
	goto Kaolisle_Gym_Switch3_6

Kaolisle_Gym_Switch3_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch3_5
	goto Kaolisle_Gym_Switch3_6


Kaolisle_Gym_Switch4::
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch4_2
	setflag FLAG_KAOLISLE_GYM_SWITCH4
	playse SE_SWITCH
	setmetatile 15, 2, 0x219, FALSE
	setmetatile 15, 3, 0x221, TRUE
	special DrawWholeMapView
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH1, Kaolisle_Gym_Switch4_7
Kaolisle_Gym_Switch4_6:
	msgbox Kaolisle_Gym_Switch1_Text_2, MSGBOX_NPC
Kaolisle_Gym_Switch4_4:
	waitse
	release
	end

Kaolisle_Gym_Switch4_2:
	msgbox Kaolisle_Gym_Switch1_Text_0, MSGBOX_NPC
	end

Kaolisle_Gym_Switch4_5:
	msgbox Kaolisle_Gym_Switch1_Text_1, MSGBOX_NPC
	goto Kaolisle_Gym_Switch4_4

Kaolisle_Gym_Switch4_7:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH2, Kaolisle_Gym_Switch4_9
	goto Kaolisle_Gym_Switch4_6

Kaolisle_Gym_Switch4_9:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH3, Kaolisle_Gym_Switch4_11
	goto Kaolisle_Gym_Switch4_6

Kaolisle_Gym_Switch4_11:
	goto_if_set FLAG_KAOLISLE_GYM_SWITCH4, Kaolisle_Gym_Switch4_5
	goto Kaolisle_Gym_Switch4_6


Kaolisle_Gym_Switch1_Text_0:
	.string "This switch has already been pressed.$"

Kaolisle_Gym_Switch1_Text_1:
	.string "{PLAYER} pressed the button.\nAll buttons have been pressed.$"

Kaolisle_Gym_Switch1_Text_2:
	.string "{PLAYER} pressed the button.$"
