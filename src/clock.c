#include "global.h"
#include "berry.h"
#include "clock.h"
#include "dewford_trend.h"
#include "event_data.h"
#include "field_specials.h"
#include "field_weather.h"
#include "main.h"
#include "lottery_corner.h"
#include "overworld.h"
#include "rtc.h"
#include "time_events.h"
#include "tv.h"
#include "wallclock.h"
#include "constants/form_change_types.h"
#include "item.h"
#include "random.h"
#include "event_scripts.h"
#include "script.h"

static void UpdatePerDay(struct Time *localTime);
static void UpdatePerMinute(struct Time *localTime);

void InitTimeBasedEvents(void)
{
    FlagSet(FLAG_SYS_CLOCK_SET);
    RtcCalcLocalTime();
    gSaveBlock2Ptr->lastBerryTreeUpdate = gLocalTime;
    VarSet(VAR_DAYS, gLocalTime.days);
}

void DoTimeBasedEvents(void)
{
    if (FlagGet(FLAG_SYS_CLOCK_SET) && !InPokemonCenter())
    {
        RtcCalcLocalTime();
        UpdatePerDay(&gLocalTime);
        UpdatePerMinute(&gLocalTime);
    }
}

void UpdateVarsAndFlags(void)
{
    if (VarGet(VAR_DEBUG) == 0){
        FlagSet(FLAG_PLACED_STEEL_SPHERE);
        FlagSet(FLAG_PLACED_STONE_SPHERE);
        FlagSet(FLAG_PLACED_VERDANT_SPHERE);
        PlantBerryTree(BERRY_TREE_ROUTE_110_YACHE_1, ITEM_TO_BERRY(ITEM_YACHE_BERRY), BERRY_STAGE_BERRIES, FALSE);
        PlantBerryTree(BERRY_TREE_ROUTE_110_YACHE_2, ITEM_TO_BERRY(ITEM_YACHE_BERRY), BERRY_STAGE_BERRIES, FALSE);
        VarSet(VAR_DEBUG, 1);
    }
    if (CheckBagHasItem(ITEM_TM_FALSE_SWIPE, 1) && !FlagGet(FLAG_PRINCIPAL_IN_SCHOOL))
    {
        FlagSet(FLAG_PRINCIPAL_IN_SCHOOL);
    }
    if (VarGet(VAR_DEBUG) == 1)
    {
        u16 i;
        struct BagPocket *itemPocket;

        itemPocket = &gBagPockets[POCKET_TM_HM];
    
        for (i = BAG_TMHM_COUNT - 3; i < BAG_TMHM_COUNT; i++)
        {
            gBagPockets[POCKET_TM_HM].itemSlots[i].itemId = ITEM_NONE;
            SetBagItemQuantity(&itemPocket->itemSlots[i].quantity, 0);
        }

        for (i = 0; i < 11; i++)
        {
            u8 rand = Random() % 100;
            gSaveBlock1Ptr->strangeSeedDrop[i] = rand;
        }
        gSaveBlock1Ptr->strangeSeedIndex = 0;

        VarSet(VAR_DEBUG, 2);
    }
}

static void UpdatePerDay(struct Time *localTime)
{
    u16 *days = GetVarPointer(VAR_DAYS);
    u16 daysSince;

    if (*days != localTime->days && *days <= localTime->days)
    {
        daysSince = localTime->days - *days;
        ClearDailyFlags();
        RandomizeDailyVariables();
        RandomizeFanClubTrade();
        SetGrottos();
        // UpdateDewfordTrendPerDay(daysSince);
        UpdateTVShowsPerDay(daysSince);
        UpdateWeatherPerDay(daysSince);
        UpdatePartyPokerusTime(daysSince);
        UpdateMirageRnd(daysSince);
        UpdateBirchState(daysSince);
        UpdateFrontierManiac(daysSince);
        UpdateFrontierGambler(daysSince);
        SetShoalItemFlag(daysSince);
        SetRandomLotteryNumber(daysSince);
        UpdateDaysPassedSinceFormChange(daysSince);
        *days = localTime->days;
    }
}

static void UpdatePerMinute(struct Time *localTime)
{
    struct Time difference;
    int minutes;

    CalcTimeDifference(&difference, &gSaveBlock2Ptr->lastBerryTreeUpdate, localTime);
    minutes = 24 * 60 * difference.days + 60 * difference.hours + difference.minutes;
    if (minutes != 0)
    {
        if (minutes >= 0)
        {
            if (VarGet(VAR_DEBUG) < 2)
                UpdateVarsAndFlags();
            BerryTreeTimeUpdate(minutes);
            gSaveBlock2Ptr->lastBerryTreeUpdate = *localTime;
        }
    }
}

void UNUSED FormChangeTimeUpdate()
{
    s32 i;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *mon = &gPlayerParty[i];
        u32 targetSpecies = GetFormChangeTargetSpecies(mon, FORM_CHANGE_TIME_OF_DAY, 0);
        u32 currentSpecies = GetMonData(mon, MON_DATA_SPECIES);

        if (targetSpecies != currentSpecies)
        {
            SetMonData(mon, MON_DATA_SPECIES, &targetSpecies);
            CalculateMonStats(mon);
        }
    }
}

static void ReturnFromStartWallClock(void)
{
    InitTimeBasedEvents();
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

void StartWallClock(void)
{
    SetMainCallback2(CB2_StartWallClock);
    gMain.savedCallback = ReturnFromStartWallClock;
}
