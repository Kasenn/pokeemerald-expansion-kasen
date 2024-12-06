AldeleafBigHouse1_MapScripts::
	.byte 0


AldeleafBigHouse1_Woman::
# 4 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse1_Woman_Text, MSGBOX_NPC
	end


AldeleafBigHouse1_2F_Man::
# 18 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse1_2F_Man_Text, MSGBOX_NPC
	end


AldeleafBigHouse1_2F_Woman::
# 22 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse1_2F_Woman_Text, MSGBOX_NPC
	end


AldeleafBigHouse1_2F_LittleGirl::
# 26 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse1_2F_LittleGirl_Text, MSGBOX_NPC
	end


AldeleafBigHouse1_2F_Swablu::
# 30 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse1_2F_Swablu_Text_0, MSGBOX_SIGN
	end


AldeleafBigHouse1_2F_Snorlax::
# 34 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse1_2F_Snorlax_Text_0, MSGBOX_SIGN
	end


AldeleafBigHouse1_2F_Azurill::
# 38 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse1_2F_Azurill_Text_0, MSGBOX_SIGN
	end


AldeleafBigHouse2_Maniac::
# 65 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse2_Maniac_Text, MSGBOX_NPC
	end


AldeleafBigHouse2_2F_OldWoman::
# 80 "data/maps/AldeleafBigHouse1/scripts.pory"
	lockall
# 81 "data/maps/AldeleafBigHouse1/scripts.pory"
	faceplayer
# 82 "data/maps/AldeleafBigHouse1/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVA_COOKIE, AldeleafBigHouse2_2F_OldWoman_2
AldeleafBigHouse2_2F_OldWoman_1:
# 85 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse2_2F_OldWoman_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_LAVA_COOKIE
# 0 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafBigHouse2_2F_OldWoman_5
AldeleafBigHouse2_2F_OldWoman_4:
# 89 "data/maps/AldeleafBigHouse1/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 90 "data/maps/AldeleafBigHouse1/scripts.pory"
	setflag FLAG_RECEIVED_LAVA_COOKIE
# 91 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitmessage
# 92 "data/maps/AldeleafBigHouse1/scripts.pory"
	closemessage
# 93 "data/maps/AldeleafBigHouse1/scripts.pory"
	release
	end

AldeleafBigHouse2_2F_OldWoman_2:
# 83 "data/maps/AldeleafBigHouse1/scripts.pory"
	goto AldeleafBigHouse2_2F_OldWoman2
	goto AldeleafBigHouse2_2F_OldWoman_1

AldeleafBigHouse2_2F_OldWoman_5:
# 87 "data/maps/AldeleafBigHouse1/scripts.pory"
	goto ZeBagIsFull
	goto AldeleafBigHouse2_2F_OldWoman_4


AldeleafBigHouse2_2F_OldMan::
# 97 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse2_2F_OldMan_Text, MSGBOX_NPC
	end


AldeleafBigHouse2_2F_OldWoman2::
# 110 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse2_2F_OldWoman2_Text_0, MSGBOX_NPC
	end


AldeleafBigHouse3_2F_Exorcist::
# 115 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 0
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_2
# 119 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 8
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_5
# 119 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 9
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_5
# 126 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 10
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_10
# 130 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 11
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_13
# 134 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_ALDELEAF_HOUSE, 12
	goto_if_eq AldeleafBigHouse3_2F_Exorcist_15
# 139 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_2F_Exorcist_MediumAura, MSGBOX_NPC
	end

AldeleafBigHouse3_2F_Exorcist_2:
# 116 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_2F_Exorcist_NoAura, MSGBOX_NPC
	end

AldeleafBigHouse3_2F_Exorcist_5:
# 120 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_2F_Exorcist_StrongAura, MSGBOX_NPC
# 121 "data/maps/AldeleafBigHouse1/scripts.pory"
	giveitem ITEM_TALISMAN
# 122 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_2F_Exorcist_StrongAuraContinued, MSGBOX_NPC
# 123 "data/maps/AldeleafBigHouse1/scripts.pory"
	setvar VAR_ALDELEAF_HOUSE, 10
	end

AldeleafBigHouse3_2F_Exorcist_10:
# 127 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_2F_Exorcist_LeaveMe, MSGBOX_NPC
	end

AldeleafBigHouse3_2F_Exorcist_13:
# 131 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_2F_Exorcist_AuraGone, MSGBOX_NPC
	end

AldeleafBigHouse3_2F_Exorcist_15:
# 135 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_2F_Exorcist_AuraGone, MSGBOX_NPC
	end


AldeleafBigHouse3_Man::
# 179 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_Man_Text, MSGBOX_NPC
	end


AldeleafBigHouse3_Ditto::
# 183 "data/maps/AldeleafBigHouse1/scripts.pory"
	lock
# 184 "data/maps/AldeleafBigHouse1/scripts.pory"
	faceplayer
# 185 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitse
# 186 "data/maps/AldeleafBigHouse1/scripts.pory"
	playmoncry SPECIES_DITTO, CRY_MODE_NORMAL
# 187 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_Ditto_Text, MSGBOX_DEFAULT
# 188 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitmoncry
# 189 "data/maps/AldeleafBigHouse1/scripts.pory"
	release
	end


AldeleafBigHouse3_3F_PokeBall::
# 201 "data/maps/AldeleafBigHouse1/scripts.pory"
	goto_if_unset FLAG_TOUCHPOKEBALL, AldeleafBigHouse3_3F_PokeBall_2
# 206 "data/maps/AldeleafBigHouse1/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 207 "data/maps/AldeleafBigHouse1/scripts.pory"
	lockall
# 208 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_3F_PokeBall_Text_Sure, MSGBOX_YESNO
# 209 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_5
# 214 "data/maps/AldeleafBigHouse1/scripts.pory"
	hideobjectat 1, MAP_ALDELEAF_BIG_HOUSE3_3F
# 215 "data/maps/AldeleafBigHouse1/scripts.pory"
	message AldeleafBigHouse3_3F_PokeBall_PickedUp
# 216 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitmessage
# 217 "data/maps/AldeleafBigHouse1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 218 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitfanfare
# 219 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_3F_PokeBall_Name, MSGBOX_YESNO
# 220 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_3F_PokeBall_Stop, MSGBOX_DEFAULT
# 221 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 222 "data/maps/AldeleafBigHouse1/scripts.pory"
	closemessage
# 223 "data/maps/AldeleafBigHouse1/scripts.pory"
	clearflag FLAG_HIDE3FMAN
# 224 "data/maps/AldeleafBigHouse1/scripts.pory"
	addobject 2, MAP_ALDELEAF_BIG_HOUSE3_3F
# 225 "data/maps/AldeleafBigHouse1/scripts.pory"
	showobjectat 2, MAP_ALDELEAF_BIG_HOUSE3_3F
# 226 "data/maps/AldeleafBigHouse1/scripts.pory"
	special DrawWholeMapView
# 227 "data/maps/AldeleafBigHouse1/scripts.pory"
	delay 30
# 228 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_8
AldeleafBigHouse3_3F_PokeBall_7:
# 233 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_11
AldeleafBigHouse3_3F_PokeBall_10:
# 238 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitmovement 2, MAP_ALDELEAF_BIG_HOUSE3_3F
# 239 "data/maps/AldeleafBigHouse1/scripts.pory"
	delay 10
# 240 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_3F_PokeBall_GiveThatBack, MSGBOX_DEFAULT
# 241 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitmessage
# 242 "data/maps/AldeleafBigHouse1/scripts.pory"
	closemessage
# 243 "data/maps/AldeleafBigHouse1/scripts.pory"
	delay 15
# 244 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_TEMP_2, DIR_SOUTH
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_14
AldeleafBigHouse3_3F_PokeBall_13:
# 247 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_TEMP_2, DIR_EAST
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_17
AldeleafBigHouse3_3F_PokeBall_16:
# 252 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitmovement 2
# 253 "data/maps/AldeleafBigHouse1/scripts.pory"
	showobjectat 1, MAP_ALDELEAF_BIG_HOUSE3_3F
# 254 "data/maps/AldeleafBigHouse1/scripts.pory"
	delay 60
# 255 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_TEMP_2, DIR_SOUTH
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_20
AldeleafBigHouse3_3F_PokeBall_19:
# 258 "data/maps/AldeleafBigHouse1/scripts.pory"
	compare VAR_TEMP_2, DIR_EAST
	goto_if_eq AldeleafBigHouse3_3F_PokeBall_23
AldeleafBigHouse3_3F_PokeBall_22:
# 261 "data/maps/AldeleafBigHouse1/scripts.pory"
	delay 15
# 262 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_3F_PokeBall_GetOut, MSGBOX_NPC
# 263 "data/maps/AldeleafBigHouse1/scripts.pory"
	setflag FLAG_ANGEREDGUYINALDELEAF
# 264 "data/maps/AldeleafBigHouse1/scripts.pory"
	warp MAP_ALDELEAF_BIG_HOUSE3_2F, 1, 3
# 265 "data/maps/AldeleafBigHouse1/scripts.pory"
	release
	end

AldeleafBigHouse3_3F_PokeBall_2:
# 202 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_3F_PokeBall_Text, MSGBOX_SIGN
# 203 "data/maps/AldeleafBigHouse1/scripts.pory"
	setflag FLAG_TOUCHPOKEBALL
	end

AldeleafBigHouse3_3F_PokeBall_5:
# 210 "data/maps/AldeleafBigHouse1/scripts.pory"
	closemessage
# 211 "data/maps/AldeleafBigHouse1/scripts.pory"
	release
	end

AldeleafBigHouse3_3F_PokeBall_8:
# 229 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement 2, AldeleafBigHouse3_3F_MoveLong, MAP_ALDELEAF_BIG_HOUSE3_3F
# 230 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLooksLeft
# 231 "data/maps/AldeleafBigHouse1/scripts.pory"
	setvar VAR_TEMP_2, DIR_SOUTH
	goto AldeleafBigHouse3_3F_PokeBall_7

AldeleafBigHouse3_3F_PokeBall_11:
# 234 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement 2, AldeleafBigHouse3_3F_MoveShort, MAP_ALDELEAF_BIG_HOUSE3_3F
# 235 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerLooksLeft
# 236 "data/maps/AldeleafBigHouse1/scripts.pory"
	setvar VAR_TEMP_2, DIR_EAST
	goto AldeleafBigHouse3_3F_PokeBall_10

AldeleafBigHouse3_3F_PokeBall_14:
# 245 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement 2, AldeleafBigHouse3_3F_MovesToTableShort, MAP_ALDELEAF_BIG_HOUSE3_3F
	goto AldeleafBigHouse3_3F_PokeBall_13

AldeleafBigHouse3_3F_PokeBall_17:
# 248 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement 2, AldeleafBigHouse3_3F_MovesToTableLong, MAP_ALDELEAF_BIG_HOUSE3_3F
# 249 "data/maps/AldeleafBigHouse1/scripts.pory"
	delay 20
# 250 "data/maps/AldeleafBigHouse1/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto AldeleafBigHouse3_3F_PokeBall_16

AldeleafBigHouse3_3F_PokeBall_20:
# 256 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement 2, AldeleafBigHouse3_3F_UpRight, MAP_ALDELEAF_BIG_HOUSE3_3F
	goto AldeleafBigHouse3_3F_PokeBall_19

AldeleafBigHouse3_3F_PokeBall_23:
# 259 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement 2, AldeleafBigHouse3_3F_LeftDown, MAP_ALDELEAF_BIG_HOUSE3_3F
	goto AldeleafBigHouse3_3F_PokeBall_22


# 268 "data/maps/AldeleafBigHouse1/scripts.pory"
PlayerLooksLeft:
# 269 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_in_place_faster_left
	step_end

# 271 "data/maps/AldeleafBigHouse1/scripts.pory"
AldeleafBigHouse3_3F_MoveLong:
# 272 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 272 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 272 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 272 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 272 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 273 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_up
# 273 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_up
# 273 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_up
# 274 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 274 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 274 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
	step_end

# 276 "data/maps/AldeleafBigHouse1/scripts.pory"
AldeleafBigHouse3_3F_MoveShort:
# 277 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 277 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 277 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 277 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 277 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 278 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_up
# 278 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_up
# 279 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 279 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
	step_end

# 281 "data/maps/AldeleafBigHouse1/scripts.pory"
AldeleafBigHouse3_3F_MovesToTableShort:
# 282 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_down
# 283 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_in_place_right
	step_end

# 285 "data/maps/AldeleafBigHouse1/scripts.pory"
AldeleafBigHouse3_3F_MovesToTableLong:
# 286 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_up
# 287 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 287 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_right
# 288 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_in_place_down
	step_end

# 290 "data/maps/AldeleafBigHouse1/scripts.pory"
AldeleafBigHouse3_3F_UpRight:
# 291 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_up
# 292 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_in_place_right
	step_end

# 294 "data/maps/AldeleafBigHouse1/scripts.pory"
AldeleafBigHouse3_3F_LeftDown:
# 295 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_left
# 296 "data/maps/AldeleafBigHouse1/scripts.pory"
	walk_in_place_down
	step_end

AldeleafBigHouse3_2F_Hide3FMan::
# 326 "data/maps/AldeleafBigHouse1/scripts.pory"
	setflag FLAG_HIDE3FMAN
# 327 "data/maps/AldeleafBigHouse1/scripts.pory"
	goto_if_set FLAG_ANGEREDGUYINALDELEAF, AldeleafBigHouse3_2F_Hide3FMan_2
AldeleafBigHouse3_2F_Hide3FMan_1:
# 335 "data/maps/AldeleafBigHouse1/scripts.pory"
	release
	end

AldeleafBigHouse3_2F_Hide3FMan_2:
# 328 "data/maps/AldeleafBigHouse1/scripts.pory"
	msgbox AldeleafBigHouse3_3F_PokeBall_StayOut, MSGBOX_DEFAULT
# 329 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitmessage
# 330 "data/maps/AldeleafBigHouse1/scripts.pory"
	closemessage
# 331 "data/maps/AldeleafBigHouse1/scripts.pory"
	safefollow
# 332 "data/maps/AldeleafBigHouse1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
# 333 "data/maps/AldeleafBigHouse1/scripts.pory"
	waitmovement 0
	goto AldeleafBigHouse3_2F_Hide3FMan_1


AldeleafBigHouse1_2F_Swablu_Text_0:
# 30 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "It's a Swablu doll.$"

AldeleafBigHouse1_2F_Snorlax_Text_0:
# 34 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "It's a Clefairy doll.$"

AldeleafBigHouse1_2F_Azurill_Text_0:
# 38 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "It's an Azurill doll.$"

AldeleafBigHouse2_2F_OldWoman2_Text_0:
# 110 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Oh, aren't you just the cutest.$"

AldeleafBigHouse1_Woman_Text::
# 8 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Have you heard of Pokémon\n"
	.string "transformations?\l"
	.string "Apparently some regions have these.\p"
	.string "Over in Galar they have Dynamaxing while\n"
	.string "Paldea has Terastallization.\p"
	.string "I wonder if we have something similar…$"

AldeleafBigHouse1_2F_Man_Text::
# 42 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Life here is great.\p"
	.string "Sure we're far from other large\n"
	.string "settlements but we have everything\l"
	.string "we could possibly want right here.$"

AldeleafBigHouse1_2F_Woman_Text::
# 48 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Aldeleaf City is sometimes also\n"
	.string "called “The Crossroads”.\p"
	.string "This is thanks to Aldeleaf's\n"
	.string "central location,\l"
	.string "causing a lot of people to pass through\l"
	.string "as they travel to other cities.\p"
	.string "Though for some reason the traffic\n"
	.string "from the north has almost completely\l"
	.string "stopped…$"

AldeleafBigHouse1_2F_LittleGirl_Text::
# 59 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Look at all these dolls mommy and\n"
	.string "daddy got me!$"

AldeleafBigHouse2_Maniac_Text::
# 68 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Sometimes during a Pokémon battle,\n"
	.string "A Pokémon can get really lucky and land\l"
	.string "a devastating blow against the foe,\l"
	.string "usually referred to as critical hit.\p"
	.string "In recent years, most Pokémon have\n"
	.string "started developing thicker skins,\l"
	.string "making them less susceptible to\l"
	.string "major harm from these strikes.$"

AldeleafBigHouse2_2F_OldWoman_Text::
# 100 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Oh, aren't you just the cutest.\n"
	.string "Here, have a cookie.$"

AldeleafBigHouse2_2F_OldMan_Text::
# 104 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Us old folk don't have much going on\n"
	.string "these days so visitors are certainly\l"
	.string "appreciated.$"

AldeleafBigHouse3_2F_Exorcist_NoAura::
# 143 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "… … … …\p"
	.string "… … … …\p"
	.string "You have a very clear aura…$"

AldeleafBigHouse3_2F_Exorcist_MediumAura::
# 148 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "… … … …\p"
	.string "I sense an evil aura\n"
	.string "emanating from you…\p"
	.string "However, I don't believe\n"
	.string "you are its source…$"

AldeleafBigHouse3_2F_Exorcist_StrongAura::
# 155 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "AAH, what an overwherlmingly\n"
	.string "evil presence…!\p"
	.string "… … … …\p"
	.string "Oh?\p"
	.string "I don't believe you are\n"
	.string "the source, however…\p"
	.string "Here, take this paper talisman.\n"
	.string "It will protect you from evil spirits.$"

AldeleafBigHouse3_2F_Exorcist_StrongAuraContinued::
# 165 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Carry it with you.\n"
	.string "Always.$"

AldeleafBigHouse3_2F_Exorcist_LeaveMe::
# 169 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Please leave, before the aura\n"
	.string "around you overwhelms me!$"

AldeleafBigHouse3_2F_Exorcist_AuraGone::
# 173 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Ahh, I can no longer sense the\n"
	.string "presence of the evil aura around you…$"

AldeleafBigHouse3_Man_Text::
# 192 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Do you like my Pokémon?\n"
	.string "If you ask me, I'd say it's perfect.$"

AldeleafBigHouse3_Ditto_Text::
# 196 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Dii…$"

AldeleafBigHouse3_3F_PokeBall_Text::
# 298 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Someone has left a Poké Ball here.\n"
	.string "Probably best to leave it be…$"

AldeleafBigHouse3_3F_PokeBall_Text_Sure::
# 302 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Someone has left a Poké Ball here.\n"
	.string "Are you sure you want to take it?$"

AldeleafBigHouse3_3F_PokeBall_PickedUp::
# 306 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "{PLAYER} obtained an Eevee!$"

AldeleafBigHouse3_3F_PokeBall_Name::
# 309 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Do you want to give a nickname\n"
	.string "to your new Pokémon?$"

AldeleafBigHouse3_3F_PokeBall_Stop::
# 313 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "STOP!!$"

AldeleafBigHouse3_3F_PokeBall_GiveThatBack::
# 316 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "What do you think you're doing,\n"
	.string "stealing other people's Pokémon!?\l"
	.string "Now give it back!$"

AldeleafBigHouse3_3F_PokeBall_GetOut::
# 321 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Now get out of my apartment!$"

AldeleafBigHouse3_3F_PokeBall_StayOut::
# 338 "data/maps/AldeleafBigHouse1/scripts.pory"
	.string "Probably best not to\n"
	.string "go upstairs again…$"
