YoshiIntro_MapScripts::
# 13 "data/maps/YoshiIntro/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, YoshiIntro_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 4 "data/maps/YoshiIntro/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, YoshiIntro_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/YoshiIntro/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, YoshiIntro_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

YoshiIntro_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/YoshiIntro/scripts.pory"
	compare VAR_STORY, 10
	goto_if_eq YoshiIntro_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 18 "data/maps/YoshiIntro/scripts.pory"
	setflag FLAG_TEMP_3
	return

YoshiIntro_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/YoshiIntro/scripts.pory"
	setflag FLAG_TEMP_1
	return

YoshiIntro_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/YoshiIntro/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, YoshiIntro_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

YoshiIntro_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 6 "data/maps/YoshiIntro/scripts.pory"
	hideplayer
	return

YoshiIntro_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/YoshiIntro/scripts.pory"
	map_script_2 VAR_STORY, 10, EndingScene
# 11 "data/maps/YoshiIntro/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, YoshiIntroScript
	.2byte 0


EndingScene::
# 24 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 25 "data/maps/YoshiIntro/scripts.pory"
	addobject LOCALID_ENDINGYOSHI
# 26 "data/maps/YoshiIntro/scripts.pory"
	applymovement LOCALID_ENDINGYOSHI, EndingScene_Movement_0
# 27 "data/maps/YoshiIntro/scripts.pory"
	playse SE_FALL
# 28 "data/maps/YoshiIntro/scripts.pory"
	delay 56
# 29 "data/maps/YoshiIntro/scripts.pory"
	playse SE_M_STRENGTH
# 30 "data/maps/YoshiIntro/scripts.pory"
	delay 165 - 56
# 31 "data/maps/YoshiIntro/scripts.pory"
	delay 165
# 32 "data/maps/YoshiIntro/scripts.pory"
	delay 42
# 33 "data/maps/YoshiIntro/scripts.pory"
	delay 12 + 36
# 34 "data/maps/YoshiIntro/scripts.pory"
	playbgm MUS_STORY_DIALOG, TRUE
# 35 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 36 "data/maps/YoshiIntro/scripts.pory"
	delay 180
# 37 "data/maps/YoshiIntro/scripts.pory"
	addobject LOCALID_THEEND1
# 38 "data/maps/YoshiIntro/scripts.pory"
	addobject LOCALID_THEEND2
# 39 "data/maps/YoshiIntro/scripts.pory"
	addobject LOCALID_THEEND3
# 40 "data/maps/YoshiIntro/scripts.pory"
	applymovement LOCALID_THEEND1, EndingScene_Movement_1
# 41 "data/maps/YoshiIntro/scripts.pory"
	applymovement LOCALID_THEEND2, EndingScene_Movement_1
# 42 "data/maps/YoshiIntro/scripts.pory"
	applymovement LOCALID_THEEND3, EndingScene_Movement_1
# 43 "data/maps/YoshiIntro/scripts.pory"
	delay 180
# 44 "data/maps/YoshiIntro/scripts.pory"
	waitbuttonpress
# 45 "data/maps/YoshiIntro/scripts.pory"
	fadenewbgm MUS_DUMMY
# 46 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 6
# 47 "data/maps/YoshiIntro/scripts.pory"
	delay 120
# 48 "data/maps/YoshiIntro/scripts.pory"
	callnative DoSoftReset
	return


YoshiIntroScript::
# 52 "data/maps/YoshiIntro/scripts.pory"
	callnative DoInitialSave
# 53 "data/maps/YoshiIntro/scripts.pory"
	addobject 2
# 54 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 55 "data/maps/YoshiIntro/scripts.pory"
	fadenewbgm MUS_KAMEK
# 56 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_0
# 57 "data/maps/YoshiIntro/scripts.pory"
	delay 80
# 58 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_NORTH
# 59 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 60 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 61 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_1
# 62 "data/maps/YoshiIntro/scripts.pory"
	delay 96
# 63 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_WEST
# 64 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 65 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 66 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_2
# 67 "data/maps/YoshiIntro/scripts.pory"
	delay 10
# 68 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 69 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 70 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 71 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 72 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 73 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 74 "data/maps/YoshiIntro/scripts.pory"
	delay 10
# 75 "data/maps/YoshiIntro/scripts.pory"
	setspeaker YoshiIntroScript_Text_0
# 76 "data/maps/YoshiIntro/scripts.pory"
	msgbox YoshiIntroText, MSGBOX_AUTOCLOSE
# 77 "data/maps/YoshiIntro/scripts.pory"
	turnobject 2, DIR_WEST
# 78 "data/maps/YoshiIntro/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 80 "data/maps/YoshiIntro/scripts.pory"
	playse SE_ORB
# 81 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeednopause FADE_TO_WHITE, 6
# 82 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 83 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_EAST
# 84 "data/maps/YoshiIntro/scripts.pory"
	delay 90
# 85 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 86 "data/maps/YoshiIntro/scripts.pory"
	setspeaker YoshiIntroScript_Text_0
# 87 "data/maps/YoshiIntro/scripts.pory"
	message YoshiIntroScript_Text_1
# 88 "data/maps/YoshiIntro/scripts.pory"
	removeobject 1
# 89 "data/maps/YoshiIntro/scripts.pory"
	removeobject 2
# 90 "data/maps/YoshiIntro/scripts.pory"
	waitbuttonpress
# 91 "data/maps/YoshiIntro/scripts.pory"
	closemessage
# 92 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 93 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 6
# 94 "data/maps/YoshiIntro/scripts.pory"
	delay 180
# 95 "data/maps/YoshiIntro/scripts.pory"
	setflag FLAG_SKIP_FADEOUT
# 96 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 97 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 98 "data/maps/YoshiIntro/scripts.pory"
	setvar VAR_FADEOUT_SPEED, 6
# 99 "data/maps/YoshiIntro/scripts.pory"
	warpsilent MAP_EGG_ISLAND_EXTERIOR, 5
# 100 "data/maps/YoshiIntro/scripts.pory"
	waitstate
	return


# 26 "data/maps/YoshiIntro/scripts.pory"
EndingScene_Movement_0:
# 26 "data/maps/YoshiIntro/scripts.pory"
	lock_anim
# 26 "data/maps/YoshiIntro/scripts.pory"
	lock_facing_direction
# 26 "data/maps/YoshiIntro/scripts.pory"
	walk_fast_down
# 26 "data/maps/YoshiIntro/scripts.pory"
	walk_fast_down
# 26 "data/maps/YoshiIntro/scripts.pory"
	walk_fast_down
# 26 "data/maps/YoshiIntro/scripts.pory"
	walk_fast_down
# 26 "data/maps/YoshiIntro/scripts.pory"
	walk_fast_down
# 26 "data/maps/YoshiIntro/scripts.pory"
	walk_fast_down
# 26 "data/maps/YoshiIntro/scripts.pory"
	walk_fast_down
# 26 "data/maps/YoshiIntro/scripts.pory"
	nurse_joy_bow
	step_end

# 40 "data/maps/YoshiIntro/scripts.pory"
EndingScene_Movement_1:
# 40 "data/maps/YoshiIntro/scripts.pory"
	lock_anim
# 40 "data/maps/YoshiIntro/scripts.pory"
	lock_facing_direction
# 40 "data/maps/YoshiIntro/scripts.pory"
	walk_down
# 40 "data/maps/YoshiIntro/scripts.pory"
	walk_down
# 40 "data/maps/YoshiIntro/scripts.pory"
	walk_down
# 40 "data/maps/YoshiIntro/scripts.pory"
	walk_down
	step_end

# 56 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_0:
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 56 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
	step_end

# 61 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_1:
# 61 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 61 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 61 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 61 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 61 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 61 "data/maps/YoshiIntro/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_2:
# 66 "data/maps/YoshiIntro/scripts.pory"
	nurse_joy_bow
	step_end

YoshiIntroScript_Text_0:
# 75 "data/maps/YoshiIntro/scripts.pory"
	.string "Kamek$"

YoshiIntroScript_Text_1:
# 87 "data/maps/YoshiIntro/scripts.pory"
	.string "Egads! Something's wrong\nwith the spell!{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}\p$"

YoshiIntroText::
# 103 "data/maps/YoshiIntro/scripts.pory"
	.string "There you are, Yoshi!\n"
	.string "I've been looking for you!\p"
	.string "Too long you have been a thorn\n"
	.string "on the young master's side!\p"
	.string "But no more!\p"
	.string "I have conjured up a new\n"
	.string "spell to get rid of you,\l"
	.string "once and for all!$"
