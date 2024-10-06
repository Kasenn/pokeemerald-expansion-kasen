#ifndef GUARD_TEXT_WINDOW_H
#define GUARD_TEXT_WINDOW_H

#define WINDOW_FRAMES_COUNT 28

struct TilesPal
{
    const u8 *tiles;
    const u16 *pal;
};

extern const u8 gTextWindowFrame1_Gfx[];
extern const u8 sTextWindowFrame2_Gfx[];
extern const u8 sTextWindowFrame3_Gfx[];
extern const u8 sTextWindowFrame4_Gfx[];
extern const u8 sTextWindowFrame5_Gfx[];
extern const u8 sTextWindowFrame6_Gfx[];
extern const u8 sTextWindowFrame7_Gfx[];
extern const u8 sTextWindowFrame8_Gfx[];
extern const u8 sTextWindowFrame9_Gfx[];
extern const u8 sTextWindowFrame10_Gfx[];
extern const u8 sTextWindowFrame11_Gfx[];
extern const u8 sTextWindowFrame12_Gfx[];
extern const u8 sTextWindowFrame13_Gfx[];
extern const u8 sTextWindowFrame14_Gfx[];
extern const u8 sTextWindowFrame15_Gfx[];
extern const u8 sTextWindowFrame16_Gfx[];
extern const u8 sTextWindowFrame17_Gfx[];
extern const u8 sTextWindowFrame18_Gfx[];
extern const u8 sTextWindowFrame19_Gfx[];
extern const u8 sTextWindowFrame20_Gfx[];
extern const u8 sTextWindowFrame21_Gfx[];

extern const u16 gTextWindowFrame1_Pal[];
extern const u16 sTextWindowFrame2_Pal[];
extern const u16 sTextWindowFrame3_Pal[];
extern const u16 sTextWindowFrame4_Pal[];
extern const u16 sTextWindowFrame5_Pal[];
extern const u16 sTextWindowFrame6_Pal[];
extern const u16 sTextWindowFrame7_Pal[];
extern const u16 sTextWindowFrame8_Pal[];
extern const u16 sTextWindowFrame9_Pal[];
extern const u16 sTextWindowFrame10_Pal[];
extern const u16 sTextWindowFrame11_Pal[];
extern const u16 sTextWindowFrame12_Pal[];
extern const u16 sTextWindowFrame13_Pal[];
extern const u16 sTextWindowFrame14_Pal[];
extern const u16 sTextWindowFrame15_Pal[];
extern const u16 sTextWindowFrame16_Pal[];
extern const u16 sTextWindowFrame17_Pal[];
extern const u16 sTextWindowFrame18_Pal[];
extern const u16 sTextWindowFrame19_Pal[];
extern const u16 sTextWindowFrame20_Pal[];
extern const u16 sTextWindowFrame21_Pal1[];
extern const u16 sTextWindowFrame21_Pal2[];
extern const u16 sTextWindowFrame21_Pal3[];
extern const u16 sTextWindowFrame21_Pal4[];
extern const u16 sTextWindowFrame21_Pal5[];
extern const u16 sTextWindowFrame21_Pal6[];
extern const u16 sTextWindowFrame21_Pal7[];
extern const u16 sTextWindowFrame21_Pal8[];

extern const u8 gTextWindowFrame1_GfxOpaque[];
extern const u8 sTextWindowFrame2_GfxOpaque[];
extern const u8 sTextWindowFrame3_GfxOpaque[];
extern const u8 sTextWindowFrame4_GfxOpaque[];
extern const u8 sTextWindowFrame5_GfxOpaque[];
extern const u8 sTextWindowFrame6_GfxOpaque[];
extern const u8 sTextWindowFrame7_GfxOpaque[];
extern const u8 sTextWindowFrame8_GfxOpaque[];
extern const u8 sTextWindowFrame9_GfxOpaque[];
extern const u8 sTextWindowFrame10_GfxOpaque[];
extern const u8 sTextWindowFrame11_GfxOpaque[];
extern const u8 sTextWindowFrame12_GfxOpaque[];
extern const u8 sTextWindowFrame13_GfxOpaque[];
extern const u8 sTextWindowFrame14_GfxOpaque[];
extern const u8 sTextWindowFrame15_GfxOpaque[];
extern const u8 sTextWindowFrame16_GfxOpaque[];
extern const u8 sTextWindowFrame17_GfxOpaque[];
extern const u8 sTextWindowFrame18_GfxOpaque[];
extern const u8 sTextWindowFrame19_GfxOpaque[];
extern const u8 sTextWindowFrame20_GfxOpaque[];
extern const u8 sTextWindowFrame21_GfxOpaque[];

extern const u16 gTextWindowFrame1_PalOpaque[];
extern const u16 sTextWindowFrame2_PalOpaque[];
extern const u16 sTextWindowFrame3_PalOpaque[];
extern const u16 sTextWindowFrame4_PalOpaque[];
extern const u16 sTextWindowFrame5_PalOpaque[];
extern const u16 sTextWindowFrame6_PalOpaque[];
extern const u16 sTextWindowFrame7_PalOpaque[];
extern const u16 sTextWindowFrame8_PalOpaque[];
extern const u16 sTextWindowFrame9_PalOpaque[];
extern const u16 sTextWindowFrame10_PalOpaque[];
extern const u16 sTextWindowFrame11_PalOpaque[];
extern const u16 sTextWindowFrame12_PalOpaque[];
extern const u16 sTextWindowFrame13_PalOpaque[];
extern const u16 sTextWindowFrame14_PalOpaque[];
extern const u16 sTextWindowFrame15_PalOpaque[];
extern const u16 sTextWindowFrame16_PalOpaque[];
extern const u16 sTextWindowFrame17_PalOpaque[];
extern const u16 sTextWindowFrame18_PalOpaque[];
extern const u16 sTextWindowFrame19_PalOpaque[];
extern const u16 sTextWindowFrame20_PalOpaque[];
extern const u16 sTextWindowFrame21_Pal1Opaque[];
extern const u16 sTextWindowFrame21_Pal2Opaque[];
extern const u16 sTextWindowFrame21_Pal3Opaque[];
extern const u16 sTextWindowFrame21_Pal4Opaque[];
extern const u16 sTextWindowFrame21_Pal5Opaque[];
extern const u16 sTextWindowFrame21_Pal6Opaque[];
extern const u16 sTextWindowFrame21_Pal7Opaque[];
extern const u16 sTextWindowFrame21_Pal8Opaque[];

const struct TilesPal *GetWindowFrameTilesPal(u8 id);
void LoadMessageBoxGfx(u8 windowId, u16 destOffset, u8 palOffset);
void LoadWindowGfx(u8 windowId, u8 frameId, u16 destOffset, u8 palOffset);
void LoadUserWindowBorderGfx(u8 windowId, u16 destOffset, u8 palOffset);
void LoadUserWindowBorderGfx_(u8 windowId, u16 destOffset, u8 palOffset);
void LoadUserWindowBorderGfxOnBg(u8 bg, u16 destOffset, u8 palOffset);
void DrawTextBorderOuter(u8 windowId, u16 tileNum, u8 palNum);
void DrawTextBorderInner(u8 windowId, u16 tileNum, u8 palNum);
void rbox_fill_rectangle(u8 windowId);
const u16 *GetTextWindowPalette(u8 id);
const u16 *GetOverworldTextboxPalettePtr(void);

#endif // GUARD_TEXT_WINDOW_H
