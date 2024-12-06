FishingVillage_House1_MapScripts::
# 2 "data/maps/FishingVillage_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideGyaradosite
	.byte 0


HideGyaradosite::
# 6 "data/maps/FishingVillage_House1/scripts.pory"
	goto_if_unset FLAG_FISHINGVILLAGE_GYARADOS_REWARD, HideGyaradosite_2
HideGyaradosite_1:
# 9 "data/maps/FishingVillage_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_GYARADOSITE, HideGyaradosite_4
	return

HideGyaradosite_2:
# 7 "data/maps/FishingVillage_House1/scripts.pory"
	setflag FLAG_TEMP_1
	goto HideGyaradosite_1

HideGyaradosite_4:
# 10 "data/maps/FishingVillage_House1/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 11 "data/maps/FishingVillage_House1/scripts.pory"
	setobjectxyperm 2, 6, 5
	return


OldManGyaradosite::
# 16 "data/maps/FishingVillage_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_GYARADOSITE, OldManGyaradosite_2
# 20 "data/maps/FishingVillage_House1/scripts.pory"
	lock
# 21 "data/maps/FishingVillage_House1/scripts.pory"
	faceplayer
# 22 "data/maps/FishingVillage_House1/scripts.pory"
	msgbox GiveGyaradosite
	checkitemspace ITEM_GYARADOSITE
# 0 "data/maps/FishingVillage_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldManGyaradosite_5
OldManGyaradosite_4:
# 26 "data/maps/FishingVillage_House1/scripts.pory"
	giveitem ITEM_GYARADOSITE
# 27 "data/maps/FishingVillage_House1/scripts.pory"
	setflag FLAG_RECEIVED_GYARADOSITE
# 28 "data/maps/FishingVillage_House1/scripts.pory"
	release
	return

OldManGyaradosite_2:
# 17 "data/maps/FishingVillage_House1/scripts.pory"
	msgbox TakeCareOfGyaradosite, MSGBOX_NPC
	end

OldManGyaradosite_5:
# 24 "data/maps/FishingVillage_House1/scripts.pory"
	goto ZeBagIsFull
	goto OldManGyaradosite_4


GiveGyaradosite::
# 31 "data/maps/FishingVillage_House1/scripts.pory"
	.string "When I saw you reeling in that\n"
	.string "Gyarados, an old memory surfaced\l"
	.string "in my mind.\p"
	.string "One day when walking on the beach,\n"
	.string "I found this peculiar stone.\p"
	.string "It reminded me of the sea, and my\n"
	.string "plan was to give it to a truly\l"
	.string "remarkable angler one day.\p"
	.string "After what I witnessed earlier,\n"
	.string "I believe you fit that description.\p"
	.string "Here, I want you to have this.$"

TakeCareOfGyaradosite::
# 44 "data/maps/FishingVillage_House1/scripts.pory"
	.string "Keep your angler spirit strong!\p"
	.string "Who knows what other great things\n"
	.string "you may fish up in the future.$"
