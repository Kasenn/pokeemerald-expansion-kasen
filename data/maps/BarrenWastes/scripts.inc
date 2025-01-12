BarrenWastes_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BarrenWastes_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BarrenWastes_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setescapewarp MAP_BARREN_WASTES, 14, 6
	return


Wastes_Hiker::
	checkitem ITEM_ESCAPE_ROPE
	compare VAR_RESULT, TRUE
	goto_if_eq Wastes_Hiker_2
	lock
	faceplayer
	msgbox Wastes_Hiker_NoRope
	giveitem ITEM_ESCAPE_ROPE
	release
	end

Wastes_Hiker_2:
	msgbox Wastes_Hiker_YesRope, MSGBOX_NPC
	end


Wastes_Hiker_NoRope::
	.string "It can be easy to get lost in\n"
	.string "the Frigid Frontier.\p"
	.string "Take this, and don't be afraid to\n"
	.string "use it if you ever find yourself lost.$"

Wastes_Hiker_YesRope::
	.string "It's easy to get lost in\n"
	.string "the Frigid Frontier.\p"
	.string "Make sure you have an Escape Rope or\n"
	.string "a Pokémon with the move Fly with you.$"
