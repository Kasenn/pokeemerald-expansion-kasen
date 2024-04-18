#ifndef GUARD_SAFARI_ZONE_H
#define GUARD_SAFARI_ZONE_H

extern u8 gNumSafariBalls;
extern u16 sSafariZoneStepCounter;

bool32 GetSafariZoneFlag(void);
void SetSafariZoneFlag(void);
void ResetSafariZoneFlag(void);

void RestAtSafari(void);
void EnterSafariMode(void);
void ExitSafariMode(void);

bool8 SafariZoneTakeStep(void);
void SafariZoneRetirePrompt(void);

void CB2_EndSafariBattle(void);

struct Pokeblock *SafariZoneGetActivePokeblock(void);
void SafariZoneActivatePokeblockFeeder(u8 pokeblock_index);

#endif // GUARD_SAFARI_ZONE_H
