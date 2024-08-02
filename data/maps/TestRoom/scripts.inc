TestRoom_MapScripts::
	.byte 0


TestTrigger1::
	setvar VAR_TEMP_2, 1
	goto MainReflectionTrigger
	return


TestTrigger2::
	setvar VAR_TEMP_2, 2
	goto MainReflectionTrigger
	return


TestTrigger3::
	setvar VAR_TEMP_2, 3
	goto MainReflectionTrigger
	return


TestTrigger4::
	setvar VAR_TEMP_2, 4
	goto MainReflectionTrigger
	return


TestTrigger5::
	setvar VAR_TEMP_2, 5
	goto MainReflectionTrigger
	return


TestTrigger6::
	setvar VAR_TEMP_2, 6
	goto MainReflectionTrigger
	return


TestTrigger7::
	setvar VAR_TEMP_2, 7
	goto MainReflectionTrigger
	return


TestTrigger8::
	setvar VAR_TEMP_2, 8
	goto MainReflectionTrigger
	return


TestTrigger9::
	setvar VAR_TEMP_2, 9
	goto MainReflectionTrigger
	return


TestTrigger10::
	setvar VAR_TEMP_2, 10
	goto MainReflectionTrigger
	return


TestTrigger11::
	setvar VAR_TEMP_2, 11
	goto MainReflectionTrigger
	return


MainReflectionTrigger::
	switch VAR_TEMP_2
	case 1, MainReflectionTrigger_3
	case 2, MainReflectionTrigger_4
	case 3, MainReflectionTrigger_5
	case 4, MainReflectionTrigger_6
	case 5, MainReflectionTrigger_7
	case 6, MainReflectionTrigger_8
	case 7, MainReflectionTrigger_9
	case 8, MainReflectionTrigger_10
	case 9, MainReflectionTrigger_11
	case 10, MainReflectionTrigger_12
	case 11, MainReflectionTrigger_13
MainReflectionTrigger_1:
	release
	end

MainReflectionTrigger_3:
	setobjectxy 37, 7, 16
	goto MainReflectionTrigger_1

MainReflectionTrigger_4:
	setobjectxy 37, 7, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_5:
	setobjectxy 37, 8, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_6:
	setobjectxy 37, 9, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_7:
	setobjectxy 37, 10, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_8:
	setobjectxy 37, 11, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_9:
	setobjectxy 37, 12, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_10:
	setobjectxy 37, 13, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_11:
	setobjectxy 37, 14, 14
	goto MainReflectionTrigger_1

MainReflectionTrigger_12:
	setobjectxy 37, 15, 15
	goto MainReflectionTrigger_1

MainReflectionTrigger_13:
	setobjectxy 37, 15, 16
	goto MainReflectionTrigger_1

