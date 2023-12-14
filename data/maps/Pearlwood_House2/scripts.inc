Pearlwood_House2_MapScripts::
	.byte 0


Pearlwood_House2_OldGuy::
	lockall
	faceplayer
	msgbox Pearlwood_House2_OldGuy_Text_0
	waitmessage
	closemessage
	release
	end


Pearlwood_House2_Woman::
	lockall
	faceplayer
	msgbox Pearlwood_House2_Woman_Text_0
	waitmessage
	closemessage
	release
	end


Pearlwood_House2_OldGuy_Text_0:
	.string "Back in my day we had no idea of any\nphysical and special splits.\lFire punch was as much a special move\las fire blast.\pOh how times have changed…$"

Pearlwood_House2_Woman_Text_0:
	.string "It really feels like you're living\nat the end of a world here.\lOr, at the beginning of one.$"
