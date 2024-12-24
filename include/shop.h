#ifndef GUARD_SHOP_H
#define GUARD_SHOP_H

extern struct ItemSlot gMartPurchaseHistory[3];

void CreatePokemartMenu(const u16 *);
void CreateDecorationShop1Menu(const u16 *);
void CreateDecorationShop2Menu(const u16 *);
void CB2_ExitSellMenu(void);
void CreateBPmartMenu(const u16 *);
void CreateBPmartMoveTutor(const u16 *);

extern EWRAM_DATA u8    gMoveMenuSpriteIdData[PARTY_SIZE];
extern EWRAM_DATA u16   gMoveMenuSpriteIdPalette[PARTY_SIZE];

#endif // GUARD_SHOP_H
