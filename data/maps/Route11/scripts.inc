Route11_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route11_BrokenBridge
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_BrokenBridge
	.byte 0


Route11_BrokenBridge::
	goto_if_unset FLAG_VISITED_SANDSTONE_CITY, Route11_BrokenBridge_2
Route11_BrokenBridge_1:
	call Route11_TryMoveDayCareMan
	end

Route11_BrokenBridge_2:
	setmetatile 82, 8, 0x075, TRUE
	setmetatile 83, 8, 0x075, TRUE
	setmetatile 84, 8, 0x075, TRUE
	setmetatile 85, 8, 0x190, TRUE
	setmetatile 86, 8, 0x170, TRUE
	setmetatile 87, 8, 0x170, TRUE
	setmetatile 88, 8, 0x192, TRUE
	setmetatile 89, 8, 0x073, TRUE
	setmetatile 90, 8, 0x073, TRUE
	setmetatile 91, 8, 0x073, TRUE
	setmetatile 82, 9, 0x075, TRUE
	setmetatile 83, 9, 0x10E, TRUE
	setmetatile 84, 9, 0x075, TRUE
	setmetatile 85, 9, 0x190, TRUE
	setmetatile 86, 9, 0x170, TRUE
	setmetatile 87, 9, 0x170, TRUE
	setmetatile 88, 9, 0x192, TRUE
	setmetatile 89, 9, 0x073, TRUE
	setmetatile 90, 9, 0x10E, TRUE
	setmetatile 91, 9, 0x073, TRUE
	setmetatile 83, 10, 0x116, TRUE
	setmetatile 84, 10, 0x10E, TRUE
	setmetatile 85, 10, 0x190, TRUE
	setmetatile 86, 10, 0x170, TRUE
	setmetatile 87, 10, 0x170, TRUE
	setmetatile 88, 10, 0x192, TRUE
	setmetatile 89, 10, 0x10E, TRUE
	setmetatile 90, 10, 0x116, TRUE
	setmetatile 84, 11, 0x116, TRUE
	setmetatile 85, 11, 0x2C0, TRUE
	setmetatile 86, 11, 0x2E2, TRUE
	setmetatile 87, 11, 0x2E2, TRUE
	setmetatile 88, 11, 0x2C7, TRUE
	setmetatile 89, 11, 0x116, TRUE
	setmetatile 85, 12, 0x2D0, TRUE
	setmetatile 86, 12, 0x2EA, TRUE
	setmetatile 87, 12, 0x2EA, TRUE
	setmetatile 88, 12, 0x2D7, TRUE
	goto Route11_BrokenBridge_1


Route11_UpdateDayCareMan::
	call Route11_TryMoveDayCareMan
	release
	end


Route11_TryMoveDayCareMan::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route11_StopMoveDayCareMan
	setobjectxyperm 4, 68, 6
	return


Route11_StopMoveDayCareMan::
	setobjectxyperm 4, 68, 4
	release
	end

