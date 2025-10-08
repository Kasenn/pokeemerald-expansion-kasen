	goto_if_unset FLAG_BADGE02_GET, EventScript_CheckTreeCantCut

enum {
    FIELD_MOVE_FLY,          // FLAG_BADGE01_GET
    FIELD_MOVE_CUT,       // FLAG_BADGE02_GET
    FIELD_MOVE_ROCK_SMASH,  // FLAG_BADGE03_GET
    FIELD_MOVE_STRENGTH,    // FLAG_BADGE04_GET
    FIELD_MOVE_SURF,        // FLAG_BADGE05_GET
    FIELD_MOVE_WATERFALL,   // FLAG_BADGE08_GET
    FIELD_MOVE_FLASH,        // FLAG_BADGE06_GET
    FIELD_MOVE_TELEPORT,
    FIELD_MOVE_DIG,
    // FIELD_MOVE_SECRET_POWER,
    FIELD_MOVE_MILK_DRINK,
    FIELD_MOVE_SOFT_BOILED,
    FIELD_MOVE_SWEET_SCENT,
    FIELD_MOVE_ROCK_CLIMB,
#if OW_DEFOG_FIELD_MOVE == TRUE
    FIELD_MOVE_DEFOG,
#endif
    FIELD_MOVES_COUNT

        if (pocket == TMHM_POCKET)
        {
            if (!CheckBagHasItem(ITEM_TM_CASE, 1))
                AddBagItem(ITEM_TM_CASE, 1);
        }

    if (GetItemPocket(itemId) == POCKET_POKE_BALLS && (gBattleTypeFlags & BATTLE_TYPE_GHOST))
        return FALSE;

            case MOVE_EFFECT_SECRET_POWER:
                if (gFieldStatuses & STATUS_FIELD_TERRAIN_ANY)
                {
                    switch (gFieldStatuses & STATUS_FIELD_TERRAIN_ANY)
                    {
                    case STATUS_FIELD_MISTY_TERRAIN:
                        gBattleScripting.moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1;
                        break;
                    case STATUS_FIELD_GRASSY_TERRAIN:
                        gBattleScripting.moveEffect = MOVE_EFFECT_SLEEP;
                        break;
                    case STATUS_FIELD_ELECTRIC_TERRAIN:
                        gBattleScripting.moveEffect = MOVE_EFFECT_PARALYSIS;
                        break;
                    case STATUS_FIELD_ROCKY_TERRAIN:
                    case STATUS_FIELD_PSYCHIC_TERRAIN:
                        gBattleScripting.moveEffect = MOVE_EFFECT_SPD_MINUS_1;
                        break;

    DEBUG_MENU_ITEM_UNSTUCK,
    DEBUG_MENU_ITEM_ENTER_CODE,


    DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_TMHM,
    DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_BERRIES,
    DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_KEY_ITEMS,
    DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_MEDICINE,
    DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_MEGASTONE,

    static void DebugAction_OpenUtilitiesMenu(u8 taskId);
static void DebugAction_OpenUnstuckMenu(u8 taskId);
static void DebugAction_OpenEnterCodeMenu(u8 taskId);

static const struct ListMenuItem sDebugMenu_Items_Limited[] =
{
    {COMPOUND_STRING("Unstuck{CLEAR_TO 110}{RIGHT_ARROW}"),       DEBUG_MENU_ITEM_UNSTUCK},
    {COMPOUND_STRING("Enter Code{CLEAR_TO 110}{RIGHT_ARROW}"),    DEBUG_MENU_ITEM_ENTER_CODE},
    {COMPOUND_STRING("Cancel"),                                   DEBUG_MENU_ITEM_CANCEL},
};

    [DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_BERRIES]   = {COMPOUND_STRING("Fill Pocket Berries"),       DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_BERRIES},
    [DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_KEY_ITEMS] = {COMPOUND_STRING("Fill Pocket Key Items"),     DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_KEY_ITEMS},
    [DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_MEDICINE] =  {COMPOUND_STRING("Fill Pocket Medicine"),      DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_MEDICINE},
    [DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_MEGASTONE] = {COMPOUND_STRING("Fill Pocket Mega Stones"),   DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_MEGASTONE},


    [DEBUG_UTIL_MENU_ITEM_SCRIPT_1] = {COMPOUND_STRING("Set Team Level"), DEBUG_UTIL_MENU_ITEM_SCRIPT_1},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_2] = {COMPOUND_STRING("Permanent night"), DEBUG_UTIL_MENU_ITEM_SCRIPT_2},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_3] = {COMPOUND_STRING("Script 3"), DEBUG_UTIL_MENU_ITEM_SCRIPT_3},
    [DEBUG_UTIL_MENU_ITEM_SCRIPT_4] = {COMPOUND_STRING("Script 4"), DEBUG_UTIL_MENU_ITEM_SCRIPT_4},

    [DEBUG_MENU_ITEM_SOUND]         = DebugAction_OpenSoundMenu,
    // [DEBUG_MENU_ITEM_UNSTUCK]     = DebugAction_OpenUnstuckMenu,
    // [DEBUG_MENU_ITEM_ENTER_CODE]     = DebugAction_OpenEnterCodeMenu,
    [DEBUG_MENU_ITEM_ROMINFO]       = DebugAction_OpenROMInfoMenu,
    [DEBUG_MENU_ITEM_CANCEL]        = DebugAction_Cancel

static void (*const sDebugMenu_Actions_MainLimited[])(u8) =
{
    [DEBUG_MENU_ITEM_UNSTUCK]     = DebugAction_OpenUnstuckMenu,
    [DEBUG_MENU_ITEM_ENTER_CODE]     = DebugAction_OpenEnterCodeMenu,
    [DEBUG_MENU_ITEM_CANCEL]        = DebugAction_Cancel
};

    [DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_BERRIES]   = DebugAction_PCBag_Fill_PocketBerries,
    [DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_KEY_ITEMS] = DebugAction_PCBag_Fill_PocketKeyItems,
    [DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_MEDICINE]   = DebugAction_PCBag_Fill_PocketMedicine,
    [DEBUG_PCBAG_MENU_ITEM_FILL_POCKET_MEGASTONE] = DebugAction_PCBag_Fill_PocketMegaStone,
};

static const struct ListMenuTemplate sDebugMenu_ListTemplate_Limited =
{
    .items = sDebugMenu_Items_Limited,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenu_Items_Limited),
};

void Debug_ShowMainMenuLimited(void)
{
    sDebugBattleData = AllocZeroed(sizeof(*sDebugBattleData));
    sDebugMenuListData = AllocZeroed(sizeof(*sDebugMenuListData));
    Debug_InitDebugBattleData();

    Debug_ShowMenu(DebugTask_HandleMenuInput_Main, sDebugMenu_ListTemplate_Limited);
}

        if (FlagGet(FLAG_ENABLE_DEBUG))
        {
            if ((func = sDebugMenu_Actions_Main[input]) != NULL)
            func(taskId);
        }
        else
        {
            if ((func = sDebugMenu_Actions_MainLimited[input]) != NULL)
            func(taskId);
        }


    if (atkAbility == ABILITY_UNAWARE || atkAbility == ABILITY_KEEN_EYE || atkAbility == ABILITY_MINDS_EYE
            || (GetGenConfig(GEN_ILLUMINATE_EFFECT) >= GEN_9 && atkAbility == ABILITY_ILLUMINATE))
        evasionStage = DEFAULT_STAT_STAGE;
    if (MoveIgnoresDefenseEvasionStages(move))
        evasionStage = DEFAULT_STAT_STAGE;
    if (atkAbility == ABILITY_DATA_BREACH && moveType == TYPE_NORMAL)
        evasionStage = DEFAULT_STAT_STAGE;
    if (defAbility == ABILITY_UNAWARE)
        accStage = DEFAULT_STAT_STAGE;






    battler = GetBattlerForBattleScript(cmd->battler);

            case VARIOUS_AMPHY_INTERRUPTS:
    {
        VARIOUS_ARGS(const u8 *jumpInstr);
        if (gBattleTypeFlags & BATTLE_TYPE_JASMINE && !CanBattlerSwitch(battler))
            gBattlescriptCurrInstr = cmd->jumpInstr;
        else
            gBattlescriptCurrInstr = cmd->nextInstr;
        return;
    }


            // else if (gBattleWeather & B_WEATHER_STRONG_WINDS && !shouldNotClear)
        {
        // {
            gBattleWeather &= ~B_WEATHER_STRONG_WINDS;
        //     gBattleWeather &= ~B_WEATHER_STRONG_WINDS;
            PrepareStringBattle(STRINGID_STRONGWINDSDISSIPATED, battler);
        //     PrepareStringBattle(STRINGID_STRONGWINDSDISSIPATED, battler);
            gBattleCommunication[MSG_DISPLAY] = 1;
        //     gBattleCommunication[MSG_DISPLAY] = 1;
        }
        // }


        Cmd_forestscurse




        	.macro jumpifnotgrounded battler:req, jumpInstr:req
	various \battler, VARIOUS_JUMP_IF_NOT_GROUNDED
	.4byte \jumpInstr
	.endm

	.macro jumpifamphy battler:req, jumpInstr:req
	various \battler, VARIOUS_AMPHY_INTERRUPTS
	.4byte \jumpInstr
	.endm



    BattleScript_EffectFlash
BattleScript_FlashDoMoveAnim
BattleScript_FlashTryLowerSpeed
BattleScript_FlashEnd
BattleScript_MegaExhaustion