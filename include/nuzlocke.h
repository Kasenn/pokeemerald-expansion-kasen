#ifndef GUARD_NUZLOCKE_H
#define GUARD_NUZLOCKE_H

#define LIVE_BOXES_COUNT        7

void SendFaintedMonsToPC(void);
void SetBoxMonOpposingSpecies(struct BoxPokemon *boxMon, u16 species);
u16 GetBoxMonOpposingSpecies(struct BoxPokemon *boxMon);
u8 CopyMonToDeathbox(struct Pokemon *mon);
void StoreOpposingBattler(u8 battler);
void DoWarpToIntro(void);
void BufferMonTrainerMemoDeathbox(void);

extern const u8 gText_GameOver[];
extern const u32 gSummaryPage_Info_Tilemap_Deathbox[];
extern const u32 gStorageSystemPartyMenu_Tilemap_Deathbox[];
extern u8 gCurrentBoxOption;

// PC main menu options
enum {
#if OW_PC_MOVE_ORDER <= GEN_3
    OPTION_WITHDRAW,
    OPTION_DEPOSIT,
    OPTION_MOVE_MONS,
#elif OW_PC_MOVE_ORDER >= GEN_4 && OW_PC_MOVE_ORDER <= GEN_6_XY
    OPTION_DEPOSIT,
    OPTION_WITHDRAW,
    OPTION_MOVE_MONS,
#elif OW_PC_MOVE_ORDER >= GEN_7
    OPTION_MOVE_MONS,
    OPTION_DEPOSIT,
    OPTION_WITHDRAW,
#endif
    OPTION_MOVE_ITEMS,
    OPTION_DEATHBOX,
    OPTION_EXIT,
    OPTIONS_COUNT
};

#endif // GUARD_NUZLOCKE_H
