Shoreslate_Mart_MapScripts::
	.byte 0


Shoreslate_Mart_Secret::
# 4 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 5 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Shoreslate_Mart_Secret_Text_Beginning, MSGBOX_YESNO
# 6 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Mart_Secret_2
Shoreslate_Mart_Secret_1:
# 31 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_Mart_Secret_4
	return

Shoreslate_Mart_Secret_2:
# 7 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Shoreslate_Mart_Secret_Text, MSGBOX_YESNO
# 8 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_Mart_Secret_7
# 12 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Mart_Secret_9
	goto Shoreslate_Mart_Secret_1

Shoreslate_Mart_Secret_4:
# 32 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Shoreslate_Mart_Secret_7:
# 9 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Shoreslate_Mart_Secret_9:
# 13 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Shoreslate_Mart_Secret_Text_2, MSGBOX_YESNO
# 14 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_Mart_Secret_12
# 18 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Mart_Secret_14
	goto Shoreslate_Mart_Secret_1

Shoreslate_Mart_Secret_12:
# 15 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Shoreslate_Mart_Secret_14:
# 19 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Shoreslate_Mart_Secret_Text_3, MSGBOX_YESNO
# 20 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shoreslate_Mart_Secret_17
# 24 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Mart_Secret_19
	goto Shoreslate_Mart_Secret_1

Shoreslate_Mart_Secret_17:
# 21 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Shoreslate_Mart_Secret_19:
# 25 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Shoreslate_Mart_Secret_Text_4, MSGBOX_DEFAULT
# 26 "data/maps/Shoreslate_Mart/scripts.pory"
	finditem ITEM_MASTER_BALL
	goto Shoreslate_Mart_Secret_1


Shoreslate_Mart_EventScript_Clerk2::
# 105 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 106 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 107 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou2
# 108 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 109 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Shoreslate_Mart_Pokemart2
# 110 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 111 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end


Shoreslate_Mart_EventScript_Clerk3::
# 115 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 116 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 117 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou3
# 118 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 119 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Shoreslate_Mart_Pokemart3
# 120 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 121 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end


Shoreslate_AppleMerchant::
# 125 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 126 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 127 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_FreshApples
# 128 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 129 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Shoreslate_AppleMerchant_Shop
# 130 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 131 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end


	.align 2
# 138 "data/maps/Shoreslate_Mart/scripts.pory"
Shoreslate_AppleMerchant_Shop:
# 139 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 140 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TART_APPLE
	.2byte ITEM_NONE

	.align 2
# 144 "data/maps/Shoreslate_Mart/scripts.pory"
Shoreslate_Mart_Pokemart2:
# 145 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 146 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 147 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 148 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 149 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 150 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 151 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 152 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

	.align 2
# 155 "data/maps/Shoreslate_Mart/scripts.pory"
Shoreslate_Mart_Pokemart3:
# 156 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 157 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 158 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 159 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 160 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 161 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

Shoreslate_Mart_EventScript_Woman::
# 166 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Shoreslate_Mart_EventScript_Woman_Text, MSGBOX_NPC
	end


Shoreslate_Mart_EventScript_Man::
# 170 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Shoreslate_Mart_EventScript_Man_Text, MSGBOX_NPC
	end


Kaolisle_Mart_Gentleman::
# 200 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Kaolisle_Mart_Gentleman_Text, MSGBOX_NPC
	end


Kaolisle_Mart_Boy::
# 211 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox Kaolisle_Mart_Boy_Text, MSGBOX_NPC
	end


Mart_Clerk::
# 220 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 221 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 222 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 223 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
	checkitem ITEM_TOWN_MAP
# 0 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Mart_Clerk_2
# 259 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_Clerk_22
# 262 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_Clerk_23
# 265 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_Clerk_24
# 268 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_Clerk_25
# 271 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_Clerk_26
# 274 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_Clerk_27
# 277 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_Clerk_28
# 280 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Mart_Clerk_29
# 284 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Mart_Clerk_42
# 288 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_NoBadges
Mart_Clerk_1:
# 292 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 293 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Mart_Clerk_2:
# 225 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_Clerk_5
# 228 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_Clerk_6
# 231 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_Clerk_7
# 234 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_Clerk_8
# 237 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_Clerk_9
# 240 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_Clerk_10
# 243 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_Clerk_11
# 246 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Mart_Clerk_12
# 250 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Mart_Clerk_39
# 254 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_NoBadgesMap
	goto Mart_Clerk_1

Mart_Clerk_5:
# 226 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_8BadgesMap
	goto Mart_Clerk_1

Mart_Clerk_6:
# 229 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_7BadgesMap
	goto Mart_Clerk_1

Mart_Clerk_7:
# 232 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_7BadgesMap
	goto Mart_Clerk_1

Mart_Clerk_8:
# 235 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_4BadgesMap
	goto Mart_Clerk_1

Mart_Clerk_9:
# 238 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_4BadgesMap
	goto Mart_Clerk_1

Mart_Clerk_10:
# 241 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_3BadgesMap
	goto Mart_Clerk_1

Mart_Clerk_11:
# 244 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_2BadgesMap
	goto Mart_Clerk_1

Mart_Clerk_12:
# 247 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_1BadgesMap
	goto Mart_Clerk_1

Mart_Clerk_22:
# 260 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_8Badges
	goto Mart_Clerk_1

Mart_Clerk_23:
# 263 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_7Badges
	goto Mart_Clerk_1

Mart_Clerk_24:
# 266 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_7Badges
	goto Mart_Clerk_1

Mart_Clerk_25:
# 269 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_4Badges
	goto Mart_Clerk_1

Mart_Clerk_26:
# 272 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_4Badges
	goto Mart_Clerk_1

Mart_Clerk_27:
# 275 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_3Badges
	goto Mart_Clerk_1

Mart_Clerk_28:
# 278 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_2Badges
	goto Mart_Clerk_1

Mart_Clerk_29:
# 281 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_1Badges
	goto Mart_Clerk_1

Mart_Clerk_39:
# 251 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_NoBadgesExpandedMap
	goto Mart_Clerk_1

Mart_Clerk_42:
# 285 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_NoBadgesExpanded
	goto Mart_Clerk_1


	.align 2
# 297 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_NoBadges:
# 298 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 299 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_NONE

	.align 2
# 302 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_NoBadgesExpanded:
# 303 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 304 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 305 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 306 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 309 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_1Badges:
# 310 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 311 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 312 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 313 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 314 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 315 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 316 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 317 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 318 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 319 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 322 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_2Badges:
# 323 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 324 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 325 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 326 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 327 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 328 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 329 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 330 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 331 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 332 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 333 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 336 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_3Badges:
# 337 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 338 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 339 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 340 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 341 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 342 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 343 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 344 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 345 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 346 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 347 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 348 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 349 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 350 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 353 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_4Badges:
# 354 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 355 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 356 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 357 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 358 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 359 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 360 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 361 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 362 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 363 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 364 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 365 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 366 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 367 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 368 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 369 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 370 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 373 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_7Badges:
# 374 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 375 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 376 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 377 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 378 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 379 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 380 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 381 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 382 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 383 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 384 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 385 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 386 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 387 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 388 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 389 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 390 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 391 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 394 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_8Badges:
# 395 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 396 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 397 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 398 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 399 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 400 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 401 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 402 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 403 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 404 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 405 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 406 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 407 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 408 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 409 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 410 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 411 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 412 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 413 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 417 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_NoBadgesMap:
# 418 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 419 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 420 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_NONE

	.align 2
# 423 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_NoBadgesExpandedMap:
# 424 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 425 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 426 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 427 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 428 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 431 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_1BadgesMap:
# 432 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 433 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 434 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 435 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 436 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 437 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 438 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 439 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 440 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 441 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 442 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 445 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_2BadgesMap:
# 446 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 447 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 448 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 449 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 450 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 451 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 452 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 453 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 454 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 455 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 456 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 457 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 460 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_3BadgesMap:
# 461 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 462 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 463 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 464 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 465 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 466 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 467 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 468 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 469 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 470 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 471 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 472 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 473 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 474 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 475 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 478 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_4BadgesMap:
# 479 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 480 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 481 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 482 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 483 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 484 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 485 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 486 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 487 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 488 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 489 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 490 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 491 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 492 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 493 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 494 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 495 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 496 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 499 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_7BadgesMap:
# 500 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 501 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 502 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 503 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 504 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 505 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 506 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 507 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 508 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 509 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 510 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 511 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 512 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 513 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 514 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 515 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 516 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 517 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 518 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 521 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_8BadgesMap:
# 522 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 523 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 524 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 525 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 526 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 527 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 528 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 529 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 530 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 531 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 532 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 533 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 534 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 535 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 536 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 537 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 538 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 539 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 540 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 541 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

Rockliffe_TM_Mart_Clerk::
# 546 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 547 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 548 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 549 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 550 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_TM1
# 551 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 552 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end


	.align 2
# 556 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_TM1:
# 557 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_FRUSTRATION
# 558 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_RETURN
# 559 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 560 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 561 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_NONE

Mart_ClerkSandStoneLeft::
# 566 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 567 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 568 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 569 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 570 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_ClerkSandStoneLeft_2
# 573 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_ClerkSandStoneLeft_3
# 576 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_ClerkSandStoneLeft_4
# 579 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_ClerkSandStoneLeft_5
# 582 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_ClerkSandStoneLeft_6
# 586 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_3Badges
Mart_ClerkSandStoneLeft_1:
# 588 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 589 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Mart_ClerkSandStoneLeft_2:
# 571 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_8Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_3:
# 574 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_7Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_4:
# 577 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_6Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_5:
# 580 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_4Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_6:
# 583 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_4Badges
	goto Mart_ClerkSandStoneLeft_1


Mart_ClerkSandStoneRight::
# 594 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 595 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 596 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 597 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
	checkitem ITEM_TOWN_MAP
# 0 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Mart_ClerkSandStoneRight_2
# 619 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_ClerkSandStoneRight_16
# 622 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_ClerkSandStoneRight_17
# 625 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_ClerkSandStoneRight_18
# 628 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_ClerkSandStoneRight_19
# 631 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_ClerkSandStoneRight_20
# 635 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_3Badges
Mart_ClerkSandStoneRight_1:
# 638 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 639 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Mart_ClerkSandStoneRight_2:
# 599 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_ClerkSandStoneRight_5
# 602 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_ClerkSandStoneRight_6
# 605 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_ClerkSandStoneRight_7
# 608 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_ClerkSandStoneRight_8
# 611 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_ClerkSandStoneRight_9
# 615 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_3BadgesMap
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_5:
# 600 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_8BadgesMap
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_6:
# 603 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_7BadgesMap
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_7:
# 606 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_7BadgesMap
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_8:
# 609 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_4BadgesMap
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_9:
# 612 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_4BadgesMap
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_16:
# 620 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_8Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_17:
# 623 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_7Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_18:
# 626 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_7Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_19:
# 629 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_4Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_20:
# 632 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_4Badges
	goto Mart_ClerkSandStoneRight_1


	.align 2
# 643 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_3Badges:
# 644 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 645 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 646 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 647 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 648 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 649 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 650 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 651 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

	.align 2
# 654 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_4Badges:
# 655 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 656 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 657 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 658 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 659 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 660 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 661 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 662 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 663 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 664 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_NONE

	.align 2
# 667 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_6Badges:
# 668 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 669 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 670 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 671 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 672 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 673 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 674 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 675 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 676 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 677 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 678 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_NONE

	.align 2
# 681 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_7Badges:
# 682 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 683 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 684 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 685 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 686 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 687 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 688 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 689 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 690 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 691 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 692 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 693 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_NONE

	.align 2
# 696 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_8Badges:
# 697 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 698 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 699 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 700 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 701 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 702 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 703 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 704 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 705 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 706 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 707 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 708 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 709 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

	.align 2
# 713 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_3Badges:
# 714 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 715 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 716 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 717 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 718 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 719 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 720 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 721 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 722 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 723 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 724 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 725 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 728 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_4Badges:
# 729 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 730 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 731 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 732 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 733 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 734 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 735 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 736 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 737 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 738 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 739 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 740 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 741 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 742 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 745 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_7Badges:
# 746 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 747 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 748 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 749 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 750 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 751 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 752 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 753 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 754 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 755 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 756 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 757 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 758 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 759 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 760 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 763 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_8Badges:
# 764 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 765 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 766 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 767 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 768 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 769 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 770 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 771 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 772 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 773 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 774 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 775 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 776 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 777 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 778 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 779 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 783 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_3BadgesMap:
# 784 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 785 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 786 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 787 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 788 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 789 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 790 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 791 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 792 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 793 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 794 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 795 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 796 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 799 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_4BadgesMap:
# 800 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 801 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 802 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 803 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 804 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 805 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 806 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 807 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 808 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 809 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 810 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 811 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 812 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 813 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 814 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 817 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_7BadgesMap:
# 818 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 819 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 820 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 821 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 822 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 823 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 824 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 825 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 826 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 827 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 828 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 829 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 830 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 831 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 832 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 833 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 836 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_8BadgesMap:
# 837 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 838 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 839 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 840 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 841 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 842 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 843 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 844 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 845 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 846 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 847 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 848 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 849 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 850 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 851 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 852 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 853 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

StoneMart_ClerkLeft::
# 858 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 859 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 860 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 861 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 862 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_Stones1
# 863 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 864 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end


	.align 2
# 867 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_Stones1:
# 868 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 869 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 870 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 871 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
	.2byte ITEM_NONE

StoneMart_ClerkRight::
# 875 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 876 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 877 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 878 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 879 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_SANDSTONEPORYGON_STATE, 3
	goto_if_eq StoneMart_ClerkRight_2
# 883 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_AV
StoneMart_ClerkRight_1:
# 885 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 886 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

StoneMart_ClerkRight_2:
# 880 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_NoAV
	goto StoneMart_ClerkRight_1


	.align 2
# 889 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_NoAV:
# 890 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_UP_GRADE
# 891 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 892 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 893 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PROCESSOR
	.2byte ITEM_NONE

	.align 2
# 896 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_AV:
# 897 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIVIRUS
# 898 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_UP_GRADE
# 899 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 900 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 901 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PROCESSOR
	.2byte ITEM_NONE

Shoreslate_Mart_Secret_Text_Beginning::
# 37 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "There's a note attached to this item.\n"
	.string "Would you like to read it?$"

Shoreslate_Mart_Secret_Text::
# 42 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "The missile knows where it is at\n"
	.string "all times. It knows this because\l"
	.string "it knows where it isn't.\p"
	.string "By subtracting where it is from where\n"
	.string "it isn't, or where it isn't from\l"
	.string "where it is (whichever is greater),\l"
	.string "it obtains a difference, or deviation.\l"
	.string "Would you like to continue reading?$"

Shoreslate_Mart_Secret_Text_2::
# 53 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "The guidance subsystem uses deviations\n"
	.string "to generate corrective commands\l"
	.string "to drive the missile from a position\l"
	.string "where it is to a position where it\l"
	.string "isn't, and arriving at a position\l"
	.string "where it wasn't, it now is.\p"
	.string "Consequently, the position where it is,\n"
	.string "is now the position that it wasn't,\l"
	.string "and it follows that the position\l"
	.string "that it was, is now the position\l"
	.string "that it isn't.\l"
	.string "Would you like to continue reading?$"

Shoreslate_Mart_Secret_Text_3::
# 68 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "In the event that the position that\n"
	.string "it is in is not the position that\l"
	.string "it wasn't, the system has acquired\l"
	.string "a variation, the variation being\l"
	.string "the difference between where the\l"
	.string "missile is, and where it wasn't.\p"
	.string "If variation is considered to be a\n"
	.string "significant factor, it too may be\l"
	.string "corrected by the GEA.\p"
	.string "However, the missile must also know\n"
	.string "where it was.\l"
	.string "Would you like to continue reading?$"

Shoreslate_Mart_Secret_Text_4::
# 83 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "The missile guidance computer scenario\n"
	.string "works as follows.\p"
	.string "Because a variation has modified some\n"
	.string "of the information the missile has\l"
	.string "obtained, it is not sure just where\l"
	.string "it is.\p"
	.string "However, it is sure where it isn't,\n"
	.string "within reason, and it knows where\l"
	.string "it was.\p"
	.string "It now subtracts where it should be\n"
	.string "from where it wasn't, or vice-versa,\l"
	.string "and by differentiating this from the\l"
	.string "algebraic sum of where it shouldn't be,\l"
	.string "and where it was, it is able to obtain\l"
	.string "the deviation and its variation,\l"
	.string "which is called error.\p"
	.string "Thank you for coming to my TED talk.\p"
	.string "You may now devour me.$"

gText_FreshApples::
# 134 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "Fresh apples for sale!$"

Shoreslate_Mart_EventScript_Woman_Text::
# 173 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "The market is great, but there are some\n"
	.string "daily necessities you can only get\l"
	.string "at a Poké Mart.$"

Shoreslate_Mart_EventScript_Man_Text::
# 178 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "I wanted to get some escape ropes but\n"
	.string "I can't see them anywhere.\l"
	.string "Where are they?$"

gText_HowMayIServeYou2::
# 184 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "Combat items for sale!\n"
	.string "Come get your own!$"

gText_HowMayIServeYou3::
# 189 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "I've got a selection of interesting\n"
	.string "Poké Balls. Take a look!$"

gText_HowMayIServeYou4::
# 194 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "You've never seen these things before!\n"
	.string "My prices are incense!$"

Kaolisle_Mart_Gentleman_Text::
# 203 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "You can find mostly the same items\n"
	.string "in every Poké Mart across Sinko.\p"
	.string "By gaining more badges, you gain access\n"
	.string "to an ever wider assortment of products.$"

Kaolisle_Mart_Boy_Text::
# 214 "data/maps/Shoreslate_Mart/scripts.pory"
	.string "I can't find the products I'm\n"
	.string "looking for…$"
