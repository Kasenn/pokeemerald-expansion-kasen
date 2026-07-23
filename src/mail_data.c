#include "global.h"
#include "mail.h"
#include "constants/items.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "text.h"
#include "international_string_util.h"

#define UNOWN_OFFSET 30000

void ClearAllMail(void)
{
    return;
}

void ClearMail(struct Mail *mail)
{
    s32 i;

    for (i = 0; i < MAIL_WORDS_COUNT; i++)
        mail->words[i] = EC_EMPTY_WORD;

    for (i = 0; i < PLAYER_NAME_LENGTH + 1; i++)
        mail->playerName[i] = EOS;

    for (i = 0; i < TRAINER_ID_LENGTH; i++)
        mail->trainerId[i] = 0;

    mail->species = SPECIES_BULBASAUR;
    mail->itemId = ITEM_NONE;
}

bool8 MonHasMail(struct Pokemon *mon)
{
    enum Item heldItem = GetMonData(mon, MON_DATA_HELD_ITEM);
    if (ItemIsMail(heldItem) && GetMonData(mon, MON_DATA_MAIL) != MAIL_NONE)
        return TRUE;
    else
        return FALSE;
}

u8 GiveMailToMonByItemId(struct Pokemon *mon, enum Item itemId)
{
    return MAIL_NONE;
}

u16 SpeciesToMailSpecies(enum Species species, u32 personality)
{
    if (species == SPECIES_UNOWN)
    {
        enum Species species = GetUnownLetterByPersonality(personality) + UNOWN_OFFSET;
        return species;
    }

    return species;
}

u16 MailSpeciesToSpecies(u16 mailSpecies, u16 *buffer)
{
    u16 result;

    if (mailSpecies >= UNOWN_OFFSET && mailSpecies < UNOWN_OFFSET + NUM_UNOWN_FORMS)
    {
        result = SPECIES_UNOWN;
        *buffer = mailSpecies - UNOWN_OFFSET;
    }
    else
    {
        result = mailSpecies;
    }

    return result;
}

u8 GiveMailToMon(struct Pokemon *mon, struct Mail *mail)
{
    return 0;
}

static bool32 UNUSED DummyMailFunc(void)
{
    return FALSE;
}

void TakeMailFromMon(struct Pokemon *mon)
{
    return;
}

void ClearMailItemId(u8 mailId)
{
    return;
}

u8 SaveMailToPC(struct Mail *mail)
{
    return MAIL_NONE;
}

u8 TakeMailFromMonAndSave(struct Pokemon *mon)
{
    return 0;
}

bool8 ItemIsMail(enum Item itemId)
{
    switch (itemId)
    {
    case ITEM_ORANGE_MAIL:
    case ITEM_HARBOR_MAIL:
    case ITEM_GLITTER_MAIL:
    case ITEM_MECH_MAIL:
    case ITEM_WOOD_MAIL:
    case ITEM_WAVE_MAIL:
    case ITEM_BEAD_MAIL:
    case ITEM_SHADOW_MAIL:
    case ITEM_TROPIC_MAIL:
    case ITEM_DREAM_MAIL:
    case ITEM_FAB_MAIL:
    case ITEM_RETRO_MAIL:
        return TRUE;
    default:
        return FALSE;
    }
}
