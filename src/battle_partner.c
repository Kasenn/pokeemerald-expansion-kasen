#include "global.h"
#include "main.h"
#include "battle.h"
#include "battle_partner.h"
#include "battle_frontier.h"
#include "data.h"
#include "frontier_util.h"
#include "string_util.h"
#include "text.h"

#include "constants/abilities.h"
#include "constants/battle_ai.h"

#if !TESTING
const struct Trainer gBattlePartners[PARTNER_COUNT] =
{
#include "data/battle_partners.h"
};
#endif

#define STEVEN_OTID 61226

void FillPartnerParty(u16 trainerId)
{
    s32 j, k;
    u32 firstIdPart = 0, secondIdPart = 0, thirdIdPart = 0;
    u32 ivs, level, personality;
    u16 monId;
    u32 otID;
    u8 trainerName[(PLAYER_NAME_LENGTH * 3) + 1];
    SetFacilityPtrsGetLevel();
    ZeroPartyMons(gPartnerParty);
    s32 actualMonIndex, baseMonIndex;

    if (trainerId > TRAINER_PARTNER(PARTNER_NONE))
    {
        s32 lastIndex = AreMultiPartiesFullTeams() ? PARTY_SIZE : MULTI_PARTY_SIZE;

        for (baseMonIndex = 0; baseMonIndex < lastIndex && baseMonIndex < gBattlePartners[trainerId - TRAINER_PARTNER(PARTNER_NONE)].partySize; baseMonIndex++)
        {
            const struct TrainerMon *partyData = gBattlePartners[trainerId - TRAINER_PARTNER(PARTNER_NONE)].party;
            const u8 *partnerName = gBattlePartners[trainerId - TRAINER_PARTNER(PARTNER_NONE)].trainerName;

            for (k = 0; partnerName[k] != EOS && k < 3; k++)
            {
                if (k == 0)
                {
                    firstIdPart = partnerName[k];
                    secondIdPart = partnerName[k];
                    thirdIdPart = partnerName[k];
                }
                else if (k == 1)
                {
                    secondIdPart = partnerName[k];
                    thirdIdPart = partnerName[k];
                }
                else if (k == 2)
                {
                    thirdIdPart = partnerName[k];
                }
            }
            if (trainerId >= PARTNER_MAY_ROWLET && trainerId <= PARTNER_BRENDAN_ORAS_PIPLUP)
            {
                if (baseMonIndex == 0)
                    actualMonIndex = VarGet(VAR_FIRST_MON);
                if (baseMonIndex == 1)
                    actualMonIndex = VarGet(VAR_SECOND_MON);
                if (baseMonIndex == 2)
                    actualMonIndex = VarGet(VAR_THIRD_MON);
            }
            else
            {
                actualMonIndex = baseMonIndex;
            }
            if (trainerId == TRAINER_PARTNER(PARTNER_STEVEN))
                otID = STEVEN_OTID;
            else
                otID = ((firstIdPart % 72) * 1000) + ((secondIdPart % 23) * 10) + (thirdIdPart % 37) % 65536;

            personality = Random32();
            if (partyData[actualMonIndex].gender == TRAINER_MON_MALE)
                personality = (personality & 0xFFFFFF00) | GeneratePersonalityForGender(MON_MALE, partyData[actualMonIndex].species);
            else if (partyData[actualMonIndex].gender == TRAINER_MON_FEMALE)
                personality = (personality & 0xFFFFFF00) | GeneratePersonalityForGender(MON_FEMALE, partyData[actualMonIndex].species);
            ModifyPersonalityForNature(&personality, partyData[actualMonIndex].nature);
            CreateMon(&gPartnerParty[baseMonIndex], partyData[actualMonIndex].species, partyData[actualMonIndex].lvl, personality, OTID_STRUCT_PRESET(otID));
            j = partyData[actualMonIndex].isShiny;
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_IS_SHINY, &j);
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_HELD_ITEM, &partyData[actualMonIndex].heldItem);
            CustomTrainerPartyAssignMoves(&gPartnerParty[baseMonIndex], &partyData[actualMonIndex]);

            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_IVS, &(partyData[actualMonIndex].iv));
            if (partyData[actualMonIndex].ev != NULL)
            {
                SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_HP_EV, &(partyData[actualMonIndex].ev[0]));
                SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_ATK_EV, &(partyData[actualMonIndex].ev[1]));
                SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_DEF_EV, &(partyData[actualMonIndex].ev[2]));
                SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_SPATK_EV, &(partyData[actualMonIndex].ev[3]));
                SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_SPDEF_EV, &(partyData[actualMonIndex].ev[4]));
                SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_SPEED_EV, &(partyData[actualMonIndex].ev[5]));
            }
            if (partyData[actualMonIndex].ability != ABILITY_NONE)
            {
                const struct SpeciesInfo *speciesInfo = &gSpeciesInfo[partyData[actualMonIndex].species];
                u32 maxAbilities = ARRAY_COUNT(speciesInfo->abilities);
                for (j = 0; j < maxAbilities; j++)
                {
                    if (speciesInfo->abilities[j] == partyData[actualMonIndex].ability)
                        break;
                }
                if (j < maxAbilities)
                    SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_ABILITY_NUM, &j);
            }
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_FRIENDSHIP, &(partyData[actualMonIndex].friendship));
            if (partyData[actualMonIndex].ball < POKEBALL_COUNT)
            {
                enum PokeBall ball = partyData[actualMonIndex].ball;
                SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_POKEBALL, &ball);
            }
            if (partyData[actualMonIndex].nickname != NULL)
            {
                SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_NICKNAME, partyData[actualMonIndex].nickname);
            }
            CalculateMonStats(&gPartnerParty[baseMonIndex]);

            u16 partnerId = GetPartnerIdFromTrainerId(trainerId);
            StringCopy(trainerName, gBattlePartners[partnerId].trainerName);
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_OT_NAME, trainerName);
            j = gBattlePartners[partnerId].gender;
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_OT_GENDER, &j);
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
        otID = Random32();
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
            CreateApprenticeMon(&gPartnerParty[baseMonIndex], &gSaveBlock2Ptr->apprentices[trainerId], gSaveBlock2Ptr->frontier.trainerIds[18 + baseMonIndex]);
            j = IsFrontierTrainerFemale(trainerId + TRAINER_RECORD_MIXING_APPRENTICE);
            SetMonData(&gPartnerParty[baseMonIndex], MON_DATA_OT_GENDER, &j);
        }
    }
}