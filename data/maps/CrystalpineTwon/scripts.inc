CrystalpineTwon_MapScripts::
# 2 "data/maps/CrystalpineTwon/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CrystalpineTwon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CrystalpineTwon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/CrystalpineTwon/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, CrystalpineTwon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

CrystalpineTwon_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/CrystalpineTwon/scripts.pory"
	msgbox EndOfBetaNotice2, MSGBOX_AUTOCLOSE
# 5 "data/maps/CrystalpineTwon/scripts.pory"
	setvar VAR_TEMP_4, 1
	return


Crystalpine_Sign1::
# 19 "data/maps/CrystalpineTwon/scripts.pory"
	msgbox Crystalpine_Sign1_Text, MSGBOX_NPC
	return


Crystalpine_Sign2::
# 22 "data/maps/CrystalpineTwon/scripts.pory"
	msgbox Crystalpine_Sign2_Text, MSGBOX_NPC
	return


Crystalpine_Sign3::
# 25 "data/maps/CrystalpineTwon/scripts.pory"
	msgbox Crystalpine_Sign3_Text, MSGBOX_NPC
	return


Crystalpine_OldMan::
# 28 "data/maps/CrystalpineTwon/scripts.pory"
	msgbox Crystalpine_OldMan_Text, MSGBOX_NPC
	return


Crystalpine_Lady::
# 31 "data/maps/CrystalpineTwon/scripts.pory"
	msgbox Crystalpine_Lady_Text, MSGBOX_NPC
	return


Crystalpine_Girl::
# 34 "data/maps/CrystalpineTwon/scripts.pory"
	msgbox Crystalpine_Girl_Text, MSGBOX_NPC
	return


Crystalpine_Boy::
# 37 "data/maps/CrystalpineTwon/scripts.pory"
	msgbox Crystalpine_Boy_Text, MSGBOX_NPC
	return


EndOfBetaNotice2::
# 10 "data/maps/CrystalpineTwon/scripts.pory"
	.string "Everything from this point is\n"
	.string "entirely unfinished.\p"
	.string "If you care for the stability\n"
	.string "of your save file, I really\l"
	.string "do not recommend exploring further!$"

Crystalpine_Sign1_Text::
# 40 "data/maps/CrystalpineTwon/scripts.pory"
	.string "wip$"

Crystalpine_Sign2_Text::
# 43 "data/maps/CrystalpineTwon/scripts.pory"
	.string "wip$"

Crystalpine_Sign3_Text::
# 46 "data/maps/CrystalpineTwon/scripts.pory"
	.string "wip$"

Crystalpine_OldMan_Text::
# 49 "data/maps/CrystalpineTwon/scripts.pory"
	.string "wip$"

Crystalpine_Lady_Text::
# 52 "data/maps/CrystalpineTwon/scripts.pory"
	.string "wip$"

Crystalpine_Girl_Text::
# 55 "data/maps/CrystalpineTwon/scripts.pory"
	.string "wip$"

Crystalpine_Boy_Text::
# 58 "data/maps/CrystalpineTwon/scripts.pory"
	.string "wip$"
