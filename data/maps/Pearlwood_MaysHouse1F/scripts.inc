Pearlwood_MaysHouse1F_MapScripts::
	.byte 0


Pearlwood_MaysHouse1F_RivalMom::
	lockall
	faceplayer
	compare VAR_PEARLWOOD_TOWN_STATE, 3
	goto_if_eq Pearlwood_MaysHouse1F_RivalMom_2
	msgbox Pearlwood_MaysHouse1F_RivalMom2
Pearlwood_MaysHouse1F_RivalMom_1:
	waitmessage
	closemessage
	release
	end

Pearlwood_MaysHouse1F_RivalMom_2:
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq Pearlwood_MaysHouse1F_RivalMom_5
	msgbox Pearlwood_MaysHouse1F_RivalMom1FemalePC
	goto Pearlwood_MaysHouse1F_RivalMom_1

Pearlwood_MaysHouse1F_RivalMom_5:
	msgbox Pearlwood_MaysHouse1F_RivalMom1MalePC
	goto Pearlwood_MaysHouse1F_RivalMom_1


Pearlwood_MaysHouse1F_RivalMom1MalePC::
	.string "Hello neighbor!\pI believe {RIVAL} was working on\nsomething in her room.\pIf you're looking for my husband,\nyou can probably find him in his lab.$"

Pearlwood_MaysHouse1F_RivalMom1FemalePC::
	.string "Hello neighbor!\pI believe {RIVAL} was working on\nsomething in his room.\pIf you're looking for my husband,\nyou can probably find him in his lab.$"

Pearlwood_MaysHouse1F_RivalMom2::
	.string "Oh, {RIVAL} went out to Primrose Meadow\njust a little while ago.\pLike father, like child.\n{RIVAL} can't stay quietly at home.\pPrimrose Meadow is just past\nthe next town.$"
