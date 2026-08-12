YoshiIntro_MapScripts::
# 4 "data/maps/YoshiIntro/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, YoshiIntro_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data/maps/YoshiIntro/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, YoshiIntro_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

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
	return


YoshiIntroScript::
# 20 "data/maps/YoshiIntro/scripts.pory"
	callnative DoInitialSave
# 21 "data/maps/YoshiIntro/scripts.pory"
	addobject 2
# 22 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 23 "data/maps/YoshiIntro/scripts.pory"
	fadenewbgm MUS_KAMEK
# 24 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_0
# 25 "data/maps/YoshiIntro/scripts.pory"
	delay 80
# 26 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_NORTH
# 27 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 28 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 29 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_1
# 30 "data/maps/YoshiIntro/scripts.pory"
	delay 96
# 31 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_WEST
# 32 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 33 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 34 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_2
# 35 "data/maps/YoshiIntro/scripts.pory"
	delay 10
# 36 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 37 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 38 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 39 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 40 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 41 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 42 "data/maps/YoshiIntro/scripts.pory"
	delay 10
# 43 "data/maps/YoshiIntro/scripts.pory"
	setspeaker YoshiIntroScript_Text_0
# 44 "data/maps/YoshiIntro/scripts.pory"
	msgbox YoshiIntroText, MSGBOX_AUTOCLOSE
# 45 "data/maps/YoshiIntro/scripts.pory"
	turnobject 2, DIR_WEST
# 46 "data/maps/YoshiIntro/scripts.pory"
	fadedefaultbgm
# 47 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 48 "data/maps/YoshiIntro/scripts.pory"
	playse SE_ORB
# 49 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeednopause FADE_TO_WHITE, 6
# 50 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 51 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_EAST
# 52 "data/maps/YoshiIntro/scripts.pory"
	delay 90
# 53 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 54 "data/maps/YoshiIntro/scripts.pory"
	setspeaker YoshiIntroScript_Text_0
# 55 "data/maps/YoshiIntro/scripts.pory"
	message YoshiIntroScript_Text_1
# 56 "data/maps/YoshiIntro/scripts.pory"
	removeobject 1
# 57 "data/maps/YoshiIntro/scripts.pory"
	removeobject 2
# 58 "data/maps/YoshiIntro/scripts.pory"
	waitbuttonpress
# 59 "data/maps/YoshiIntro/scripts.pory"
	closemessage
# 60 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 61 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 6
# 62 "data/maps/YoshiIntro/scripts.pory"
	delay 180
# 63 "data/maps/YoshiIntro/scripts.pory"
	setflag FLAG_SKIP_FADEOUT
# 64 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 65 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 66 "data/maps/YoshiIntro/scripts.pory"
	setvar VAR_FADEOUT_SPEED, 6
# 67 "data/maps/YoshiIntro/scripts.pory"
	warpsilent MAP_EGG_ISLAND_EXTERIOR, 5
# 68 "data/maps/YoshiIntro/scripts.pory"
	waitstate
	return


# 24 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_0:
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 24 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
	step_end

# 29 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_1:
# 29 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 29 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 29 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 29 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 29 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 29 "data/maps/YoshiIntro/scripts.pory"
	walk_left
	step_end

# 34 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_2:
# 34 "data/maps/YoshiIntro/scripts.pory"
	nurse_joy_bow
	step_end

YoshiIntroScript_Text_0:
# 43 "data/maps/YoshiIntro/scripts.pory"
	.string "Kamek$"

YoshiIntroScript_Text_1:
# 55 "data/maps/YoshiIntro/scripts.pory"
	.string "Egads! Something's wrong\nwith the spell!{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}\p$"

YoshiIntroText::
# 71 "data/maps/YoshiIntro/scripts.pory"
	.string "There you are, Yoshi!\n"
	.string "I've been looking for you!\p"
	.string "Too long you have been a thorn\n"
	.string "on the young master's side!\p"
	.string "But no more!\p"
	.string "I have conjured up a new\n"
	.string "spell to get rid of you,\l"
	.string "once and for all!$"
