FishingVillage_House1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HideGyaradosite
	.byte 0


HideGyaradosite::
	goto_if_unset FLAG_FISHINGVILLAGE_GYARADOS_REWARD, HideGyaradosite_2
HideGyaradosite_1:
	goto_if_set FLAG_RECEIVED_GYARADOSITE, HideGyaradosite_4
	return

HideGyaradosite_2:
	setflag FLAG_TEMP_1
	goto HideGyaradosite_1

HideGyaradosite_4:
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 2, 6, 5
	return


OldManGyaradosite::
	goto_if_set FLAG_RECEIVED_GYARADOSITE, OldManGyaradosite_2
	lock
	faceplayer
	msgbox GiveGyaradosite
	checkitemspace ITEM_GYARADOSITE
	compare VAR_RESULT, FALSE
	goto_if_eq OldManGyaradosite_5
	giveitem ITEM_GYARADOSITE
	setflag FLAG_RECEIVED_GYARADOSITE
	release
	return

OldManGyaradosite_2:
	msgbox TakeCareOfGyaradosite, MSGBOX_NPC
	end

OldManGyaradosite_5:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


GiveGyaradosite::
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
	.string "Keep your angler spirit strong!\p"
	.string "Who knows what other great things\n"
	.string "you may fish up in the future.$"
