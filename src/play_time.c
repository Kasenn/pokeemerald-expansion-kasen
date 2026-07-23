#include "global.h"
#include "play_time.h"
#include "fake_rtc.h"
#include "field_player_avatar.h"

enum
{
    STOPPED,
    RUNNING,
    MAXED_OUT
};

static u8 sPlayTimeCounterState;

void PlayTimeCounter_Reset(void)
{
    sPlayTimeCounterState = STOPPED;

    gSaveBlock1Ptr->playTimeHours = 0;
    gSaveBlock1Ptr->playTimeMinutes = 0;
    gSaveBlock1Ptr->playTimeSeconds = 0;
    gSaveBlock1Ptr->playTimeVBlanks = 0;
}

void PlayTimeCounter_Start(void)
{
    sPlayTimeCounterState = RUNNING;

    if (gSaveBlock1Ptr->playTimeHours > 999)
        PlayTimeCounter_SetToMax();
}

void PlayTimeCounter_Stop(void)
{
    sPlayTimeCounterState = STOPPED;
}

void PlayTimeCounter_Update(void)
{
    if (sPlayTimeCounterState != RUNNING)
        return;

    gSaveBlock1Ptr->playTimeVBlanks++;
    UpdateSpinData();

    if (gSaveBlock1Ptr->playTimeVBlanks < 60)
        return;

    gSaveBlock1Ptr->playTimeVBlanks = 0;
    gSaveBlock1Ptr->playTimeSeconds++;
    FakeRtc_TickTimeForward();

    if (gSaveBlock1Ptr->playTimeSeconds < 60)
        return;

    gSaveBlock1Ptr->playTimeSeconds = 0;
    gSaveBlock1Ptr->playTimeMinutes++;

    if (gSaveBlock1Ptr->playTimeMinutes < 60)
        return;

    gSaveBlock1Ptr->playTimeMinutes = 0;
    gSaveBlock1Ptr->playTimeHours++;

    if (gSaveBlock1Ptr->playTimeHours > 999)
        PlayTimeCounter_SetToMax();
}

void PlayTimeCounter_SetToMax(void)
{
    sPlayTimeCounterState = MAXED_OUT;

    gSaveBlock1Ptr->playTimeHours = 999;
    gSaveBlock1Ptr->playTimeMinutes = 59;
    gSaveBlock1Ptr->playTimeSeconds = 59;
    gSaveBlock1Ptr->playTimeVBlanks = 59;
}
