#include "global.h"
#include "constants/trainers.h"
#include "event_data.h"

enum TrainerPicID GetPlayerTrainerPic(void)
{
    enum TrainerPicID trainerPicId;

    switch (VarGet(VAR_CHOSEN_OUTFIT))
    {
    case OUTFIT_RUBYSAPPHIRE:
        trainerPicId = gSaveBlock2Ptr->playerGender + TRAINER_PIC_RS_BRENDAN;
        break;
    default:
    case OUTFIT_EMERALD:
        trainerPicId = gSaveBlock2Ptr->playerGender + TRAINER_PIC_BRENDAN;
        break;
    case OUTFIT_ORAS:
        trainerPicId = gSaveBlock2Ptr->playerGender + TRAINER_PIC_BRENDAN_ORAS;
        break;
    case OUTFIT_CONTEST:
        trainerPicId = gSaveBlock2Ptr->playerGender + TRAINER_PIC_BRENDAN_CONTEST;
        break;   
    }

    return trainerPicId;
}
