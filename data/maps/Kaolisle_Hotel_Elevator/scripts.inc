Kaolisle_Hotel_Elevator_MapScripts::
	.byte 0


Hotel_Elevator_Attendant::
	lock
	faceplayer
	setvar VAR_0x8004, 0
	call_if_unset FLAG_TEMP_2, HotelElevatorSetFloor
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
	special ShowDeptStoreElevatorFloorSelect
	message gText_WhichFloorWouldYouLikeHotel
	waitmessage
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetHotelDefaultFloorChoice
	switch VAR_RESULT
	case 0, Hotel_Elevator_Attendant_3
	case 1, Hotel_Elevator_Attendant_4
	case 2, Hotel_Elevator_Attendant_5
	case 3, Hotel_Elevator_Attendant_6
	case 4, Hotel_Elevator_Attendant_7
Hotel_Elevator_Attendant_1:
	goto Hotel_Elevator_ChooseFloor
	end

Hotel_Elevator_Attendant_3:
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
	goto Hotel_Elevator_Attendant_1

Hotel_Elevator_Attendant_4:
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
	goto Hotel_Elevator_Attendant_1

Hotel_Elevator_Attendant_5:
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
	goto Hotel_Elevator_Attendant_1

Hotel_Elevator_Attendant_6:
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
	goto Hotel_Elevator_Attendant_1

Hotel_Elevator_Attendant_7:
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
	goto Hotel_Elevator_Attendant_1


Hotel_Elevator_ChooseFloor::
	switch VAR_RESULT
	case 0, Hotel_Elevator_ChooseFloor_3
	case 1, Hotel_Elevator_ChooseFloor_4
	case 2, Hotel_Elevator_ChooseFloor_5
	case 3, Hotel_Elevator_ChooseFloor_6
	case 4, Hotel_Elevator_ChooseFloor_7
	case 5, Hotel_Elevator_ChooseFloor_8
	case MULTI_B_PRESSED, Hotel_Elevator_ChooseFloor_9
Hotel_Elevator_ChooseFloor_1:
	end

Hotel_Elevator_ChooseFloor_3:
	goto Hotel_Elevator_5thFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_4:
	goto Hotel_Elevator_4thFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_5:
	goto Hotel_Elevator_3rdFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_6:
	goto Hotel_Elevator_2ndFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_7:
	goto Hotel_Elevator_1stFloor
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_8:
	goto Hotel_Elevator_ExitFloorSelect
	goto Hotel_Elevator_ChooseFloor_1

Hotel_Elevator_ChooseFloor_9:
	goto Hotel_Elevator_ExitFloorSelect
	goto Hotel_Elevator_ChooseFloor_1


Hotel_Elevator_1stFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
	setdynamicwarp MAP_KAOLISLE_HOTEL_1F, 18, 2
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F, Hotel_Elevator_ExitFloorSelect
	call Hotel_Elevator_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_2ndFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
	setdynamicwarp MAP_KAOLISLE_HOTEL_2F, 10, 5
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F, Hotel_Elevator_ExitFloorSelect
	call Hotel_Elevator_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_3rdFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
	setdynamicwarp MAP_KAOLISLE_HOTEL_3F, 10, 5
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F, Hotel_Elevator_ExitFloorSelect
	call Hotel_Elevator_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_4thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
	setdynamicwarp MAP_KAOLISLE_HOTEL_4F, 10, 5
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F, Hotel_Elevator_ExitFloorSelect
	call Hotel_Elevator_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_5thFloor::
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
	setdynamicwarp MAP_KAOLISLE_HOTEL_5F, 10, 5
	goto_if_eq VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F, Hotel_Elevator_ExitFloorSelect
	call Hotel_Elevator_MoveElevator
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
	goto Hotel_Elevator_ExitFloorSelect
	end


Hotel_Elevator_ExitFloorSelect::
	special CloseDeptStoreElevatorWindow
	release
	end


Hotel_Elevator_MoveElevator::
	special CloseDeptStoreElevatorWindow
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	waitse
	special MoveElevator
	waitstate
	setflag FLAG_TEMP_2
	return


HotelElevatorSetFloor::
	special SetHotelFloor
	return


gText_WhichFloorWouldYouLikeHotel::
	.string "Welcome to Kaolisle Grand Resort.\p"
	.string "Which floor would you like?$"
