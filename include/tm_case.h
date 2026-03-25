#ifndef GUARD_TM_CASE_H
#define GUARD_TM_CASE_H

void InitTMCase(void (* exitCallback)(void));
void TMCase_ShowHideHearts(s32 move);
void CreateTMCaseHearts(u16 x, u16 y, bool8 isShop);

extern const u8 gText_TMCase[];
extern u8 gMoveDescription;
extern u8 gHeartSpriteId[16];

#define MOVE_DESC_BATTLE    0
#define MOVE_DESC_CONTEST   1

enum {
    COLOR_LIGHT,
    COLOR_DARK,
    COLOR_CURSOR_SELECTED,
    COLOR_MOVE_INFO,
};

#endif //GUARD_TM_CASE_H
