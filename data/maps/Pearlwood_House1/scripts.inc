Pearlwood_House1_MapScripts::
	.byte 0


Pearlwood_House1_OldLady::
	lockall
	faceplayer
	msgbox Pearlwood_House1_OldLady_Text_0
	waitmessage
	closemessage
	release
	end


Pearlwood_House1_YoungGirl::
	lockall
	faceplayer
	msgbox Pearlwood_House1_YoungGirl_Text_0
	waitmessage
	closemessage
	applymovement 2, Pearlwood_House1_face
	waitmovement 0
	release
	end


Pearlwood_House1_face:
	face_up
	step_end

Pearlwood_House1_OldLady_Text_0:
	.string "How is the professor able to present\nall the young trainers with Pokémon?\pI rarely see him leaving the village\nso he must be getting them from\lsomewhere nearby.$"

Pearlwood_House1_YoungGirl_Text_0:
	.string "Listen to this book I'm reading!\p“The Pokémon habitat can be more\ndiverse than it initially seems.\lWhile most habitats seem to be \ldominated by only a handful of\lPokémon species, one should never\lrule out the possibility of coming\lacross something unexpected.”$"
