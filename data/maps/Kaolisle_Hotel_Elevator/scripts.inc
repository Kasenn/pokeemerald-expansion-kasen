Kaolisle_Hotel_Elevator_MapScripts::
	.byte 0


Hotel_Elevator_Attendant::
# 4 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	lock
# 5 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	faceplayer
# 6 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_0x8004, 0
# 7 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	call_if_unset FLAG_TEMP_2, HotelElevatorSetFloor
# 8 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
# 9 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	special ShowDeptStoreElevatorFloorSelect
# 10 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	message gText_WhichFloorWouldYouLikeHotel
# 11 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	waitmessage
# 12 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_0x8004, 0
# 13 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	specialvar VAR_RESULT, GetHotelDefaultFloorChoice
# 14 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 0, Hotel_Elevator_Attendant_3
# 17 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 1, Hotel_Elevator_Attendant_4
# 19 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 2, Hotel_Elevator_Attendant_5
# 21 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 3, Hotel_Elevator_Attendant_6
# 23 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 4, Hotel_Elevator_Attendant_7
Hotel_Elevator_Attendant_1:
# 26 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_ChooseFloor
	end

Hotel_Elevator_Attendant_3:
# 16 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
	goto Hotel_Elevator_Attendant_1

Hotel_Elevator_Attendant_4:
# 18 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
	goto Hotel_Elevator_Attendant_1

Hotel_Elevator_Attendant_5:
# 20 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
	goto Hotel_Elevator_Attendant_1

Hotel_Elevator_Attendant_6:
# 22 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
	goto Hotel_Elevator_Attendant_1

Hotel_Elevator_Attendant_7:
# 24 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
	goto Hotel_Elevator_Attendant_1


Hotel_Elevator_ChooseFloor::
# 36 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	switch VAR_RESULT
# 37 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 0, Hotel_Elevator_ChooseFloor_3
# 39 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 1, Hotel_Elevator_ChooseFloor_4
# 41 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 2, Hotel_Elevator_ChooseFloor_5
# 43 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 3, Hotel_Elevator_ChooseFloor_6
# 45 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 4, Hotel_Elevator_ChooseFloor_7
# 47 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case 5, Hotel_Elevator_ChooseFloor_8
# 49 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	case MULTI_B_PRESSED, Hotel_Elevator_ChooseFloor_9
Hotel_Elevator_ChooseFloor_1:
	end

Hotel_Elevator_ChooseFloor_3:
# 38 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_5thFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_4:
# 40 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_4thFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_5:
# 42 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_3rdFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_6:
# 44 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_2ndFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_7:
# 46 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_1stFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_8:
# 48 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_ExitFloorSelect
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_9:
# 50 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_ExitFloorSelect
	goto Hotel_Elevator_ChooseFloor_1


Hotel_Elevator_1stFloor::
# 56 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
# 57 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setdynamicwarp MAP_KAOLISLE_HOTEL_1F, 18, 2
# 58 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, Hotel_Elevator_ExitFloorSelect
# 59 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	call Hotel_Elevator_MoveElevator
# 60 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
# 61 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_2ndFloor::
# 66 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
# 67 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setdynamicwarp MAP_KAOLISLE_HOTEL_2F, 10, 5
# 68 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, Hotel_Elevator_ExitFloorSelect
# 69 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	call Hotel_Elevator_MoveElevator
# 70 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
# 71 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_3rdFloor::
# 76 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
# 77 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setdynamicwarp MAP_KAOLISLE_HOTEL_3F, 10, 5
# 78 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, Hotel_Elevator_ExitFloorSelect
# 79 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	call Hotel_Elevator_MoveElevator
# 80 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
# 81 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_4thFloor::
# 86 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
# 87 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setdynamicwarp MAP_KAOLISLE_HOTEL_4F, 10, 5
# 88 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, Hotel_Elevator_ExitFloorSelect
# 89 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	call Hotel_Elevator_MoveElevator
# 90 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
# 91 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_5thFloor::
# 96 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
# 97 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setdynamicwarp MAP_KAOLISLE_HOTEL_5F, 10, 5
# 98 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F, Hotel_Elevator_ExitFloorSelect
# 99 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	call Hotel_Elevator_MoveElevator
# 100 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
# 101 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_ExitFloorSelect::
# 106 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 107 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	release
	end


Hotel_Elevator_MoveElevator::
# 112 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 113 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	closemessage
# 114 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	safefollow
# 115 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 116 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	waitmovement 0
# 117 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	waitse
# 118 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	special MoveElevator
# 119 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	waitstate
# 120 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	setflag FLAG_TEMP_2
	return


HotelElevatorSetFloor::
# 125 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	special SetHotelFloor
	return


gText_WhichFloorWouldYouLikeHotel::
# 30 "data/maps/Kaolisle_Hotel_Elevator/scripts.pory"
	.string "Welcome to Kaolisle Grand Resort.\p"
	.string "Which floor would you like?$"
