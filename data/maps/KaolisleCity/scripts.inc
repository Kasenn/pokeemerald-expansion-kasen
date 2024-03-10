KaolisleCity_MapScripts::
	.byte 0


KaolisleCity_GymGuide::
	msgbox KaolisleCity_GymGuide_Text, MSGBOX_NPC
	end


KaolisleCity_Sailor::
	msgbox KaolisleCity_Sailor_Text, MSGBOX_NPC
	end


KaolisleCity_NinjaBoy::
	msgbox KaolisleCity_NinjaBoy_Text, MSGBOX_NPC
	end


KaolisleCity_Woman2::
	msgbox KaolisleCity_Woman2_Text, MSGBOX_NPC
	end


KaolisleCity_Boy3::
	msgbox KaolisleCity_Boy3_Text, MSGBOX_NPC
	end


KaolisleCity_Boy3_Couple::
	msgbox KaolisleCity_Boy3_Couple_Text, MSGBOX_NPC
	end


KaolisleCity_Lass_Couple::
	msgbox KaolisleCity_Lass_Couple_Text, MSGBOX_NPC
	end


KaolisleCity_ExpertM::
	msgbox KaolisleCity_ExpertM_Text, MSGBOX_NPC
	end


KaolisleCity_Zigzagoon_Child::
	msgbox KaolisleCity_Zigzagoon_Child_Text, MSGBOX_NPC
	end


KaolisleCity_OldMan::
	msgbox KaolisleCity_OldMan_Text, MSGBOX_NPC
	end


KaolisleCity_Gentleman::
	msgbox KaolisleCity_Gentleman_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher1::
	msgbox KaolisleCity_Fisher1_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher2::
	msgbox KaolisleCity_Fisher2_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher3::
	msgbox KaolisleCity_Fisher3_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher4::
	msgbox KaolisleCity_Fisher4_Text, MSGBOX_NPC
	end


KaolisleCity_TriathleteF::
	msgbox KaolisleCity_TriathleteF_Text, MSGBOX_NPC
	end


KaolisleCity_LittleGirl::
	msgbox KaolisleCity_LittleGirl_Text, MSGBOX_NPC
	end


KaolisleCity_Sailor2::
	msgbox KaolisleCity_Sailor2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberChasing1::
	msgbox KaolisleCity_TuberChasing1_Text, MSGBOX_NPC
	end


KaolisleCity_TuberChasing2::
	msgbox KaolisleCity_TuberChasing2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberTalking1::
	msgbox KaolisleCity_TuberTalking1_Text, MSGBOX_NPC
	end


KaolisleCity_TuberTalking2::
	msgbox KaolisleCity_TuberTalking2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberLearning::
	msgbox KaolisleCity_TuberLearning_Text, MSGBOX_NPC
	end


KaolisleCity_SwimTeacher::
	msgbox KaolisleCity_SwimTeacher_Text, MSGBOX_NPC
	end


KaolisleCity_Father::
	msgbox KaolisleCity_Father_Text, MSGBOX_NPC
	end


KaolisleCity_Mother::
	msgbox KaolisleCity_Mother_Text, MSGBOX_NPC
	end


KaolisleCity_Swimmer::
	msgbox KaolisleCity_Swimmer_Text, MSGBOX_NPC
	end


KaolisleCity_Scott::
	msgbox KaolisleCity_Scott_Text, MSGBOX_NPC
	end


KaolisleCity_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox KaolisleCity_Zigzagoon_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


KaolisleCity_Item1::
	finditem ITEM_NONE
	return


KaolisleCity_SignHarbor::
	msgbox KaolisleCity_SignHarbor_Text, MSGBOX_SIGN
	end


KaolisleCity_SignGym::
	msgbox KaolisleCity_SignGym_Text, MSGBOX_SIGN
	end


KaolisleCity_SignHotel::
	msgbox KaolisleCity_SignHotel_Text, MSGBOX_SIGN
	end


KaolisleCity_SignFanClub::
	msgbox KaolisleCity_SignFanClub_Text, MSGBOX_SIGN
	end


KaolisleCity_SignIntro::
	msgbox KaolisleCity_SignIntro_Text, MSGBOX_SIGN
	end


KaolisleCity_Zigzagoon_Text_0:
	.string "Zigzagoon: Guguuh!$"

KaolisleCity_GymGuide_Text::
	.string "$"

KaolisleCity_Sailor_Text::
	.string "$"

KaolisleCity_NinjaBoy_Text::
	.string "$"

KaolisleCity_Woman2_Text::
	.string "$"

KaolisleCity_Boy3_Text::
	.string "$"

KaolisleCity_Boy3_Couple_Text::
	.string "$"

KaolisleCity_Lass_Couple_Text::
	.string "$"

KaolisleCity_ExpertM_Text::
	.string "$"

KaolisleCity_Zigzagoon_Child_Text::
	.string "$"

KaolisleCity_OldMan_Text::
	.string "$"

KaolisleCity_Gentleman_Text::
	.string "$"

KaolisleCity_Fisher1_Text::
	.string "$"

KaolisleCity_Fisher2_Text::
	.string "$"

KaolisleCity_Fisher3_Text::
	.string "$"

KaolisleCity_Fisher4_Text::
	.string "$"

KaolisleCity_TriathleteF_Text::
	.string "$"

KaolisleCity_LittleGirl_Text::
	.string "$"

KaolisleCity_Sailor2_Text::
	.string "$"

KaolisleCity_TuberChasing1_Text::
	.string "$"

KaolisleCity_TuberChasing2_Text::
	.string "$"

KaolisleCity_TuberTalking1_Text::
	.string "$"

KaolisleCity_TuberTalking2_Text::
	.string "$"

KaolisleCity_TuberLearning_Text::
	.string "$"

KaolisleCity_SwimTeacher_Text::
	.string "$"

KaolisleCity_Father_Text::
	.string "$"

KaolisleCity_Mother_Text::
	.string "$"

KaolisleCity_Swimmer_Text::
	.string "$"

KaolisleCity_Scott_Text::
	.string "$"

KaolisleCity_SignHarbor_Text::
	.string "$"

KaolisleCity_SignGym_Text::
	.string "$"

KaolisleCity_SignHotel_Text::
	.string "$"

KaolisleCity_SignFanClub_Text::
	.string "$"

KaolisleCity_SignIntro_Text::
	.string "$"
