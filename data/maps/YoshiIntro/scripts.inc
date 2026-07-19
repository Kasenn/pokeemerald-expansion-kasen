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
	map_script_2 VAR_TEMP_0, 0, YoshiIntroScript
	.2byte 0


YoshiIntroScript::
# 15 "data/maps/YoshiIntro/scripts.pory"
	addobject 2
# 16 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 17 "data/maps/YoshiIntro/scripts.pory"
	fadenewbgm MUS_KAMEK
# 18 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_0
# 19 "data/maps/YoshiIntro/scripts.pory"
	delay 80
# 20 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_NORTH
# 21 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 22 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 23 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_1
# 24 "data/maps/YoshiIntro/scripts.pory"
	delay 96
# 25 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_WEST
# 26 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 27 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 28 "data/maps/YoshiIntro/scripts.pory"
	applymovement 2, YoshiIntroScript_Movement_2
# 29 "data/maps/YoshiIntro/scripts.pory"
	delay 10
# 30 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 31 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 32 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 33 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 34 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 35 "data/maps/YoshiIntro/scripts.pory"
	waitmovement 0
# 36 "data/maps/YoshiIntro/scripts.pory"
	delay 10
# 37 "data/maps/YoshiIntro/scripts.pory"
	setspeaker YoshiIntroScript_Text_0
# 38 "data/maps/YoshiIntro/scripts.pory"
	msgbox YoshiIntroText, MSGBOX_AUTOCLOSE
# 39 "data/maps/YoshiIntro/scripts.pory"
	turnobject 2, DIR_WEST
# 40 "data/maps/YoshiIntro/scripts.pory"
	fadedefaultbgm
# 41 "data/maps/YoshiIntro/scripts.pory"
	delay 30
# 42 "data/maps/YoshiIntro/scripts.pory"
	playse SE_ORB
# 43 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeednopause FADE_TO_WHITE, 6
# 44 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 45 "data/maps/YoshiIntro/scripts.pory"
	turnobject 1, DIR_EAST
# 46 "data/maps/YoshiIntro/scripts.pory"
	delay 90
# 47 "data/maps/YoshiIntro/scripts.pory"
	playmoncry SPECIES_PECHARUNT, 0
# 48 "data/maps/YoshiIntro/scripts.pory"
	setspeaker YoshiIntroScript_Text_0
# 49 "data/maps/YoshiIntro/scripts.pory"
	message YoshiIntroScript_Text_1
# 50 "data/maps/YoshiIntro/scripts.pory"
	removeobject 1
# 51 "data/maps/YoshiIntro/scripts.pory"
	removeobject 2
# 52 "data/maps/YoshiIntro/scripts.pory"
	waitbuttonpress
# 53 "data/maps/YoshiIntro/scripts.pory"
	closemessage
# 54 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 55 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 6
# 56 "data/maps/YoshiIntro/scripts.pory"
	delay 180
# 57 "data/maps/YoshiIntro/scripts.pory"
	setflag FLAG_SKIP_FADEOUT
# 58 "data/maps/YoshiIntro/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 59 "data/maps/YoshiIntro/scripts.pory"
	delay 60
# 60 "data/maps/YoshiIntro/scripts.pory"
	warpsilent MAP_EGG_ISLAND_EXTERIOR, 0
# 61 "data/maps/YoshiIntro/scripts.pory"
	waitstate
	return


# 18 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_0:
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
# 18 "data/maps/YoshiIntro/scripts.pory"
	walk_faster_right
	step_end

# 23 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_1:
# 23 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 23 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 23 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 23 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 23 "data/maps/YoshiIntro/scripts.pory"
	walk_left
# 23 "data/maps/YoshiIntro/scripts.pory"
	walk_left
	step_end

# 28 "data/maps/YoshiIntro/scripts.pory"
YoshiIntroScript_Movement_2:
# 28 "data/maps/YoshiIntro/scripts.pory"
	nurse_joy_bow
	step_end

YoshiIntroScript_Text_0:
# 37 "data/maps/YoshiIntro/scripts.pory"
	.string "Kamek$"

YoshiIntroScript_Text_1:
# 49 "data/maps/YoshiIntro/scripts.pory"
	.string "Egads! Something's wrong\nwith the spell!{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}\p$"

YoshiIntroText::
# 64 "data/maps/YoshiIntro/scripts.pory"
	.string "There you are, Yoshi!\n"
	.string "I've been looking for you!\p"
	.string "Too long you have been a thorn\n"
	.string "on the young master's side!\p"
	.string "But no more!\p"
	.string "I have conjured up a new\n"
	.string "spell to get rid of you,\l"
	.string "once and for all!$"
