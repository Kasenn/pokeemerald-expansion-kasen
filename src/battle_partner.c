#include "global.h"
#include "main.h"
#include "battle.h"
#include "battle_partner.h"
#include "battle_frontier.h"
#include "data.h"
#include "frontier_util.h"
#include "malloc.h"
#include "string_util.h"
#include "trainer_util.h"
#include "text.h"

#include "constants/abilities.h"
#include "constants/battle_ai.h"

#include "data/partner_parties.h"

#if !TESTING
const struct Trainer gBattlePartners[PARTNER_COUNT] =
{
#include "data/battle_partners.h"
};
#endif

#define STEVEN_OTID 61226

void FillPartnerParty(u16 trainerId)
{
    s32 i, j;
    u32 ivs, level;
    u16 monId;

    u8 trainerName[(PLAYER_NAME_LENGTH * 3) + 1];
    SetFacilityPtrsGetLevel();
    ZeroPartyMons(gPartnerParty);
    s32 actualMonIndex = 0;
    s32 baseMonIndex;

    if (trainerId > TRAINER_PARTNER(PARTNER_NONE))
    {
        s32 lastIndex = AreMultiPartiesFullTeams() ? PARTY_SIZE : MULTI_PARTY_SIZE;

        if (trainerId >= TRAINER_PARTNER(PARTNER_MAY_ROWLET) && trainerId <= TRAINER_PARTNER(PARTNER_BRENDAN_ORAS_PIPLUP))
            lastIndex = MULTI_PARTY_SIZE;

        const struct Trainer *partner = GetTrainerStructFromId(trainerId);
        struct TrainerGenerator partnerGen;
        MakePartnerGenerator(&partnerGen, partner);
        if (trainerId == TRAINER_PARTNER(PARTNER_STEVEN))
            partnerGen.otID = OTID_STRUCT_PRESET(STEVEN_OTID);
        for (i = 0; i < lastIndex && i < partner->partySize; i++)
        {
            baseMonIndex = i;
            actualMonIndex = baseMonIndex;

            if (trainerId >= TRAINER_PARTNER(PARTNER_MAY_ROWLET) && trainerId <= TRAINER_PARTNER(PARTNER_BRENDAN_ORAS_PIPLUP))
            {
                if (baseMonIndex == 0)  actualMonIndex = VarGet(VAR_FIRST_MON);
                if (baseMonIndex == 1)  actualMonIndex = VarGet(VAR_SECOND_MON);
                if (baseMonIndex == 2)  actualMonIndex = VarGet(VAR_THIRD_MON);
            }

            GenerateMonFromTrainerMon(&gParties[B_TRAINER_PARTNER][i], &partner->party[actualMonIndex], &partnerGen);
        }
    }
    else if (trainerId == TRAINER_EREADER)
    {
        // Scrapped, lol.
        trainerName[0] = gGameLanguage;
    }
    else if (trainerId < FRONTIER_TRAINERS_COUNT)
    {
        level = SetFacilityPtrsGetLevel();
        ivs = GetFrontierTrainerFixedIvs(trainerId);
        u32 otID = Random32();
        for (baseMonIndex = 0; baseMonIndex < FRONTIER_MULTI_PARTY_SIZE; baseMonIndex++)
        {
            monId = gSaveBlock2Ptr->frontier.trainerIds[baseMonIndex + 18];
            CreateFacilityMon(&gFacilityTrainerMons[monId], level, ivs, otID, 0, &gPartnerParty[baseMonIndex]);
            for (j = 0; j < PLAYER_NAME_LENGTH + 1; j++)
                trainerName[j] = gFacilityTrainers[trainerId].trainerName[j];
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_OT_NAME, &trainerName);
            j = IsFrontierTrainerFemale(trainerId);
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_OT_GENDER, &j);
        }
    }
    else if (trainerId < TRAINER_RECORD_MIXING_APPRENTICE)
    {
        trainerId -= TRAINER_RECORD_MIXING_FRIEND;
        for (baseMonIndex = 0; baseMonIndex < FRONTIER_MULTI_PARTY_SIZE; baseMonIndex++)
        {
            struct EmeraldBattleTowerRecord *record = &gSaveBlock2Ptr->frontier.towerRecords[trainerId];
            struct BattleTowerPokemon monData = record->party[gSaveBlock2Ptr->frontier.trainerIds[18 + baseMonIndex]];
            StringCopy(trainerName, record->name);
            if (record->language == LANGUAGE_JAPANESE)
            {
                if (monData.nickname[0] != EXT_CTRL_CODE_BEGIN || monData.nickname[1] != EXT_CTRL_CODE_JPN)
                {
                    monData.nickname[5] = EOS;
                    ConvertInternationalString(monData.nickname, LANGUAGE_JAPANESE);
                }
            }
            else
            {
                if (monData.nickname[0] == EXT_CTRL_CODE_BEGIN && monData.nickname[1] == EXT_CTRL_CODE_JPN)
                    trainerName[5] = EOS;
            }
            CreateBattleTowerMon_HandleLevel(&gPartnerParty[baseMonIndex], &monData, TRUE);
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_OT_NAME, trainerName);
            j = IsFrontierTrainerFemale(trainerId + TRAINER_RECORD_MIXING_FRIEND);
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_OT_GENDER, &j);
        }
    }
    else
    {
        trainerId -= TRAINER_RECORD_MIXING_APPRENTICE;
        for (baseMonIndex = 0; baseMonIndex < FRONTIER_MULTI_PARTY_SIZE; baseMonIndex++)
        {
            // CreateApprenticeMon(&gPartnerParty[baseMonIndex], &gSaveBlock2Ptr->apprentices[trainerId], gSaveBlock2Ptr->frontier.trainerIds[18 + baseMonIndex]);
            j = IsFrontierTrainerFemale(trainerId + TRAINER_RECORD_MIXING_APPRENTICE);
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_OT_GENDER, &j);
        }
    }
}