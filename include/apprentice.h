#ifndef GUARD_APPRENTICE_H
#define GUARD_APPRENTICE_H

#include "constants/apprentice.h"

struct ApprenticeTrainer
{
    u8 name[NUM_LANGUAGES - 1][PLAYER_NAME_LENGTH + 1]; // For all languages except the unused one.
    u16 otId;
    u8 facilityClass;
    enum Species species[APPRENTICE_SPECIES_COUNT];
    u8 id;
    u16 speechLost[EASY_CHAT_BATTLE_WORDS_COUNT];
};

void BufferApprenticeChallengeText(u8 saveApprenticeId);
void Apprentice_ScriptContext_Enable(void);
void ResetApprenticeStruct(struct Apprentice *apprentice);
void ResetAllApprenticeData(void);

#endif // GUARD_APPRENTICE_H
