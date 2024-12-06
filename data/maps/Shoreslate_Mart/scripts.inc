Shoreslate_Mart_MapScripts::
	.byte 0


Shoreslate_Mart_Secret::
# 4 "data/maps/Shoreslate_Mart/scripts.pory"
	lockall
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
# 224 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_Clerk_2
# 227 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_Clerk_3
# 230 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_Clerk_4
# 233 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_Clerk_5
# 236 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_Clerk_6
# 239 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_Clerk_7
# 242 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_Clerk_8
# 245 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Mart_Clerk_9
# 249 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Mart_Clerk_19
# 253 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_NoBadges
Mart_Clerk_1:
# 256 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 257 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Mart_Clerk_2:
# 225 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_8Badges
	goto Mart_Clerk_1

Mart_Clerk_3:
# 228 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_7Badges
	goto Mart_Clerk_1

Mart_Clerk_4:
# 231 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_7Badges
	goto Mart_Clerk_1

Mart_Clerk_5:
# 234 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_4Badges
	goto Mart_Clerk_1

Mart_Clerk_6:
# 237 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_4Badges
	goto Mart_Clerk_1

Mart_Clerk_7:
# 240 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_3Badges
	goto Mart_Clerk_1

Mart_Clerk_8:
# 243 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_2Badges
	goto Mart_Clerk_1

Mart_Clerk_9:
# 246 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_1Badges
	goto Mart_Clerk_1

Mart_Clerk_19:
# 250 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_NoBadgesExpanded
	goto Mart_Clerk_1


	.align 2
# 261 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_NoBadges:
# 262 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 263 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_NONE

	.align 2
# 266 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_NoBadgesExpanded:
# 267 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 268 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 269 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 270 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 273 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_1Badges:
# 274 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 275 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 276 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 277 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 278 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 279 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 280 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 281 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 282 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 283 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 286 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_2Badges:
# 287 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 288 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 289 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 290 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 291 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 292 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 293 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 294 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 295 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 296 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 297 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 300 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_3Badges:
# 301 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 302 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 303 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 304 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 305 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 306 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 307 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 308 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 309 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 310 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 311 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 312 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 313 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 314 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 317 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_4Badges:
# 318 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 319 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 320 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 321 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 322 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 323 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 324 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 325 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 326 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 327 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 328 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 329 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 330 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 331 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 332 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 333 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 334 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 337 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_7Badges:
# 338 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 339 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 340 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 341 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 342 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 343 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 344 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 345 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 346 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 347 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 348 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 349 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 350 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 351 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 352 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 353 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 354 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 355 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 358 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_8Badges:
# 359 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 360 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 361 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 362 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 363 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 364 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 365 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 366 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 367 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 368 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 369 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 370 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 371 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 372 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 373 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 374 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 375 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 376 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 377 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

Rockliffe_TM_Mart_Clerk::
# 382 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 383 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 384 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 385 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 386 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_TM1
# 387 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 388 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end


	.align 2
# 392 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_TM1:
# 393 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_FRUSTRATION
# 394 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_RETURN
# 395 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 396 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 397 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_NONE

Mart_ClerkSandStoneLeft::
# 402 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 403 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 404 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 405 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 406 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_ClerkSandStoneLeft_2
# 409 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_ClerkSandStoneLeft_3
# 412 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_ClerkSandStoneLeft_4
# 415 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_ClerkSandStoneLeft_5
# 418 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_ClerkSandStoneLeft_6
# 422 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_3Badges
Mart_ClerkSandStoneLeft_1:
# 424 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 425 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Mart_ClerkSandStoneLeft_2:
# 407 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_8Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_3:
# 410 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_7Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_4:
# 413 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_6Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_5:
# 416 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_4Badges
	goto Mart_ClerkSandStoneLeft_1

Mart_ClerkSandStoneLeft_6:
# 419 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSLeftMart_4Badges
	goto Mart_ClerkSandStoneLeft_1


Mart_ClerkSandStoneRight::
# 430 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 431 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 432 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 433 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 434 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_ClerkSandStoneRight_2
# 437 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_ClerkSandStoneRight_3
# 440 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_ClerkSandStoneRight_4
# 443 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_ClerkSandStoneRight_5
# 446 "data/maps/Shoreslate_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_ClerkSandStoneRight_6
# 450 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_3Badges
Mart_ClerkSandStoneRight_1:
# 452 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 453 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

Mart_ClerkSandStoneRight_2:
# 435 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_8Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_3:
# 438 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_7Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_4:
# 441 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_7Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_5:
# 444 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_4Badges
	goto Mart_ClerkSandStoneRight_1

Mart_ClerkSandStoneRight_6:
# 447 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart SSRightMart_4Badges
	goto Mart_ClerkSandStoneRight_1


	.align 2
# 457 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_3Badges:
# 458 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 459 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 460 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 461 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 462 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 463 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 464 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 465 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
	.2byte ITEM_NONE

	.align 2
# 468 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_4Badges:
# 469 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 470 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 471 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 472 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 473 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 474 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 475 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 476 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 477 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 478 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
	.2byte ITEM_NONE

	.align 2
# 481 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_6Badges:
# 482 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 483 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 484 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 485 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 486 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 487 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 488 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 489 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 490 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 491 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 492 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_NONE

	.align 2
# 495 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_7Badges:
# 496 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 497 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 498 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 499 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 500 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 501 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 502 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 503 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 504 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 505 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 506 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 507 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_NONE

	.align 2
# 510 "data/maps/Shoreslate_Mart/scripts.pory"
SSLeftMart_8Badges:
# 511 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 512 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 513 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 514 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 515 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 516 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 517 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 518 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 519 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 520 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 521 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 522 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 523 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

	.align 2
# 527 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_3Badges:
# 528 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 529 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 530 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
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
	.2byte ITEM_REPEL
# 538 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 539 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 542 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_4Badges:
# 543 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 544 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 545 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 546 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 547 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 548 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 549 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 550 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 551 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 552 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 553 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 554 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 555 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 556 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 559 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_7Badges:
# 560 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 561 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 562 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 563 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 564 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 565 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 566 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 567 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 568 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 569 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 570 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 571 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 572 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 573 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 574 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 577 "data/maps/Shoreslate_Mart/scripts.pory"
SSRightMart_8Badges:
# 578 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POTION
# 579 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 580 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 581 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 582 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 583 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 584 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 585 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 586 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 587 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 588 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 589 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 590 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 591 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 592 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 593 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

StoneMart_ClerkLeft::
# 598 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 599 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 600 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 601 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 602 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_Stones1
# 603 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 604 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end


	.align 2
# 607 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_Stones1:
# 608 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 609 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 610 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 611 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
	.2byte ITEM_NONE

StoneMart_ClerkRight::
# 615 "data/maps/Shoreslate_Mart/scripts.pory"
	lock
# 616 "data/maps/Shoreslate_Mart/scripts.pory"
	faceplayer
# 617 "data/maps/Shoreslate_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 618 "data/maps/Shoreslate_Mart/scripts.pory"
	waitmessage
# 619 "data/maps/Shoreslate_Mart/scripts.pory"
	compare VAR_SANDSTONEPORYGON_STATE, 3
	goto_if_eq StoneMart_ClerkRight_2
# 623 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_AV
StoneMart_ClerkRight_1:
# 625 "data/maps/Shoreslate_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 626 "data/maps/Shoreslate_Mart/scripts.pory"
	release
	end

StoneMart_ClerkRight_2:
# 620 "data/maps/Shoreslate_Mart/scripts.pory"
	pokemart Mart_NoAV
	goto StoneMart_ClerkRight_1


	.align 2
# 629 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_NoAV:
# 630 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_UP_GRADE
# 631 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 632 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 633 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_PROCESSOR
	.2byte ITEM_NONE

	.align 2
# 636 "data/maps/Shoreslate_Mart/scripts.pory"
Mart_AV:
# 637 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ANTIVIRUS
# 638 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_UP_GRADE
# 639 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 640 "data/maps/Shoreslate_Mart/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 641 "data/maps/Shoreslate_Mart/scripts.pory"
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
