#include "global.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "palette.h"
#include "bg.h"
#include "graphics.h"
#include "menu.h"

static const u16 sStdTextWindow_Gfx[]  = INCGFX_U16("graphics/text_window/std.png", ".4bpp");

const u8 gTextWindowFrame1_Gfx[] = INCGFX_U8("graphics/text_window/1.png", ".4bpp");
const u8 sTextWindowFrame2_Gfx[] = INCGFX_U8("graphics/text_window/2.png", ".4bpp");
const u8 sTextWindowFrame3_Gfx[] = INCGFX_U8("graphics/text_window/3.png", ".4bpp");
const u8 sTextWindowFrame4_Gfx[] = INCGFX_U8("graphics/text_window/4.png", ".4bpp");
const u8 sTextWindowFrame5_Gfx[] = INCGFX_U8("graphics/text_window/5.png", ".4bpp");
const u8 sTextWindowFrame6_Gfx[] = INCGFX_U8("graphics/text_window/6.png", ".4bpp");
const u8 sTextWindowFrame7_Gfx[] = INCGFX_U8("graphics/text_window/7.png", ".4bpp");
const u8 sTextWindowFrame8_Gfx[] = INCGFX_U8("graphics/text_window/8.png", ".4bpp");
const u8 sTextWindowFrame9_Gfx[] = INCGFX_U8("graphics/text_window/9.png", ".4bpp");
const u8 sTextWindowFrame10_Gfx[] = INCGFX_U8("graphics/text_window/10.png", ".4bpp");
const u8 sTextWindowFrame11_Gfx[] = INCGFX_U8("graphics/text_window/11.png", ".4bpp");
const u8 sTextWindowFrame12_Gfx[] = INCGFX_U8("graphics/text_window/12.png", ".4bpp");
const u8 sTextWindowFrame13_Gfx[] = INCGFX_U8("graphics/text_window/13.png", ".4bpp");
const u8 sTextWindowFrame14_Gfx[] = INCGFX_U8("graphics/text_window/14.png", ".4bpp");
const u8 sTextWindowFrame15_Gfx[] = INCGFX_U8("graphics/text_window/15.png", ".4bpp");
const u8 sTextWindowFrame16_Gfx[] = INCGFX_U8("graphics/text_window/16.png", ".4bpp");
const u8 sTextWindowFrame17_Gfx[] = INCGFX_U8("graphics/text_window/17.png", ".4bpp");
const u8 sTextWindowFrame18_Gfx[] = INCGFX_U8("graphics/text_window/18.png", ".4bpp");
const u8 sTextWindowFrame19_Gfx[] = INCGFX_U8("graphics/text_window/19.png", ".4bpp");
const u8 sTextWindowFrame20_Gfx[] = INCGFX_U8("graphics/text_window/20.png", ".4bpp");
const u8 sTextWindowFrame21_Gfx[] = INCGFX_U8("graphics/text_window/21.png", ".4bpp");

const u16 gTextWindowFrame1_Pal[] = INCGFX_U16("graphics/text_window/1.png", ".gbapal");
const u16 sTextWindowFrame2_Pal[] = INCGFX_U16("graphics/text_window/2.png", ".gbapal");
const u16 sTextWindowFrame3_Pal[] = INCGFX_U16("graphics/text_window/3.png", ".gbapal");
const u16 sTextWindowFrame4_Pal[] = INCGFX_U16("graphics/text_window/4.png", ".gbapal");
const u16 sTextWindowFrame5_Pal[] = INCGFX_U16("graphics/text_window/5.png", ".gbapal");
const u16 sTextWindowFrame6_Pal[] = INCGFX_U16("graphics/text_window/6.png", ".gbapal");
const u16 sTextWindowFrame7_Pal[] = INCGFX_U16("graphics/text_window/7.png", ".gbapal");
const u16 sTextWindowFrame8_Pal[] = INCGFX_U16("graphics/text_window/8.png", ".gbapal");
const u16 sTextWindowFrame9_Pal[] = INCGFX_U16("graphics/text_window/9.png", ".gbapal");
const u16 sTextWindowFrame10_Pal[] = INCGFX_U16("graphics/text_window/10.png", ".gbapal");
const u16 sTextWindowFrame11_Pal[] = INCGFX_U16("graphics/text_window/11.png", ".gbapal");
const u16 sTextWindowFrame12_Pal[] = INCGFX_U16("graphics/text_window/12.png", ".gbapal");
const u16 sTextWindowFrame13_Pal[] = INCGFX_U16("graphics/text_window/13.png", ".gbapal");
const u16 sTextWindowFrame14_Pal[] = INCGFX_U16("graphics/text_window/14.png", ".gbapal");
const u16 sTextWindowFrame15_Pal[] = INCGFX_U16("graphics/text_window/15.png", ".gbapal");
const u16 sTextWindowFrame16_Pal[] = INCGFX_U16("graphics/text_window/16.png", ".gbapal");
const u16 sTextWindowFrame17_Pal[] = INCGFX_U16("graphics/text_window/17.png", ".gbapal");
const u16 sTextWindowFrame18_Pal[] = INCGFX_U16("graphics/text_window/18.png", ".gbapal");
const u16 sTextWindowFrame19_Pal[] = INCGFX_U16("graphics/text_window/19.png", ".gbapal");
const u16 sTextWindowFrame20_Pal[] = INCGFX_U16("graphics/text_window/20.png", ".gbapal");
const u16 sTextWindowFrame21_Pal1[] = INCGFX_U16("graphics/text_window/21.png", ".gbapal");
const u16 sTextWindowFrame21_Pal2[] = INCGFX_U16("graphics/text_window/21_2.png", ".gbapal");
const u16 sTextWindowFrame21_Pal3[] = INCGFX_U16("graphics/text_window/21_3.png", ".gbapal");
const u16 sTextWindowFrame21_Pal4[] = INCGFX_U16("graphics/text_window/21_4.png", ".gbapal");
const u16 sTextWindowFrame21_Pal5[] = INCGFX_U16("graphics/text_window/21_5.png", ".gbapal");
const u16 sTextWindowFrame21_Pal6[] = INCGFX_U16("graphics/text_window/21_6.png", ".gbapal");
const u16 sTextWindowFrame21_Pal7[] = INCGFX_U16("graphics/text_window/21_7.png", ".gbapal");
const u16 sTextWindowFrame21_Pal8[] = INCGFX_U16("graphics/text_window/21_8.png", ".gbapal");

const u8 gTextWindowFrame1_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/1.png", ".4bpp");
const u8 sTextWindowFrame2_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/2.png", ".4bpp");
const u8 sTextWindowFrame3_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/3.png", ".4bpp");
const u8 sTextWindowFrame4_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/4.png", ".4bpp");
const u8 sTextWindowFrame5_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/5.png", ".4bpp");
const u8 sTextWindowFrame6_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/6.png", ".4bpp");
const u8 sTextWindowFrame7_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/7.png", ".4bpp");
const u8 sTextWindowFrame8_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/8.png", ".4bpp");
const u8 sTextWindowFrame9_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/9.png", ".4bpp");
const u8 sTextWindowFrame10_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/10.png", ".4bpp");
const u8 sTextWindowFrame11_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/11.png", ".4bpp");
const u8 sTextWindowFrame12_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/12.png", ".4bpp");
const u8 sTextWindowFrame13_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/13.png", ".4bpp");
const u8 sTextWindowFrame14_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/14.png", ".4bpp");
const u8 sTextWindowFrame15_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/15.png", ".4bpp");
const u8 sTextWindowFrame16_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/16.png", ".4bpp");
const u8 sTextWindowFrame17_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/17.png", ".4bpp");
const u8 sTextWindowFrame18_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/18.png", ".4bpp");
const u8 sTextWindowFrame19_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/19.png", ".4bpp");
const u8 sTextWindowFrame20_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/20.png", ".4bpp");
const u8 sTextWindowFrame21_GfxOpaque[] = INCGFX_U8("graphics/text_window/opaque/21.png", ".4bpp");

const u16 gTextWindowFrame1_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/1.png", ".gbapal");
const u16 sTextWindowFrame2_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/2.png", ".gbapal");
const u16 sTextWindowFrame3_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/3.png", ".gbapal");
const u16 sTextWindowFrame4_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/4.png", ".gbapal");
const u16 sTextWindowFrame5_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/5.png", ".gbapal");
const u16 sTextWindowFrame6_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/6.png", ".gbapal");
const u16 sTextWindowFrame7_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/7.png", ".gbapal");
const u16 sTextWindowFrame8_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/8.png", ".gbapal");
const u16 sTextWindowFrame9_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/9.png", ".gbapal");
const u16 sTextWindowFrame10_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/10.png", ".gbapal");
const u16 sTextWindowFrame11_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/11.png", ".gbapal");
const u16 sTextWindowFrame12_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/12.png", ".gbapal");
const u16 sTextWindowFrame13_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/13.png", ".gbapal");
const u16 sTextWindowFrame14_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/14.png", ".gbapal");
const u16 sTextWindowFrame15_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/15.png", ".gbapal");
const u16 sTextWindowFrame16_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/16.png", ".gbapal");
const u16 sTextWindowFrame17_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/17.png", ".gbapal");
const u16 sTextWindowFrame18_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/18.png", ".gbapal");
const u16 sTextWindowFrame19_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/19.png", ".gbapal");
const u16 sTextWindowFrame20_PalOpaque[] = INCGFX_U16("graphics/text_window/opaque/20.png", ".gbapal");
const u16 sTextWindowFrame21_Pal1Opaque[] = INCGFX_U16("graphics/text_window/opaque/21.png", ".gbapal");
const u16 sTextWindowFrame21_Pal2Opaque[] = INCGFX_U16("graphics/text_window/opaque/21_2.png", ".gbapal");
const u16 sTextWindowFrame21_Pal3Opaque[] = INCGFX_U16("graphics/text_window/opaque/21_3.png", ".gbapal");
const u16 sTextWindowFrame21_Pal4Opaque[] = INCGFX_U16("graphics/text_window/opaque/21_4.png", ".gbapal");
const u16 sTextWindowFrame21_Pal5Opaque[] = INCGFX_U16("graphics/text_window/opaque/21_5.png", ".gbapal");
const u16 sTextWindowFrame21_Pal6Opaque[] = INCGFX_U16("graphics/text_window/opaque/21_6.png", ".gbapal");
const u16 sTextWindowFrame21_Pal7Opaque[] = INCGFX_U16("graphics/text_window/opaque/21_7.png", ".gbapal");
const u16 sTextWindowFrame21_Pal8Opaque[] = INCGFX_U16("graphics/text_window/opaque/21_8.png", ".gbapal");

static const u16 sTextWindowPalettes[][16] =
{
    INCGFX_U16("graphics/text_window/message_box.png", ".gbapal"),
    INCGFX_U16("graphics/text_window/text_pal1.pal", ".gbapal"),
    INCGFX_U16("graphics/text_window/text_pal2.pal", ".gbapal"),
    INCGFX_U16("graphics/text_window/text_pal3.pal", ".gbapal"),
    INCGFX_U16("graphics/text_window/text_pal4.pal", ".gbapal")
};

static const struct TilesPal sWindowFrames[WINDOW_FRAMES_COUNT] =
{
    {sTextWindowFrame21_Gfx, sTextWindowFrame21_Pal1},
    {sTextWindowFrame21_Gfx, sTextWindowFrame21_Pal2},
    {sTextWindowFrame21_Gfx, sTextWindowFrame21_Pal3},
    {sTextWindowFrame21_Gfx, sTextWindowFrame21_Pal4},
    {sTextWindowFrame21_Gfx, sTextWindowFrame21_Pal5},
    {sTextWindowFrame21_Gfx, sTextWindowFrame21_Pal6},
    {sTextWindowFrame21_Gfx, sTextWindowFrame21_Pal7},
    {sTextWindowFrame21_Gfx, sTextWindowFrame21_Pal8},
    {gTextWindowFrame1_Gfx, gTextWindowFrame1_Pal},
    {sTextWindowFrame2_Gfx, sTextWindowFrame2_Pal},
    {sTextWindowFrame3_Gfx, sTextWindowFrame3_Pal},
    {sTextWindowFrame4_Gfx, sTextWindowFrame4_Pal},
    {sTextWindowFrame5_Gfx, sTextWindowFrame5_Pal},
    {sTextWindowFrame6_Gfx, sTextWindowFrame6_Pal},
    {sTextWindowFrame7_Gfx, sTextWindowFrame7_Pal},
    {sTextWindowFrame8_Gfx, sTextWindowFrame8_Pal},
    {sTextWindowFrame9_Gfx, sTextWindowFrame9_Pal},
    {sTextWindowFrame10_Gfx, sTextWindowFrame10_Pal},
    {sTextWindowFrame11_Gfx, sTextWindowFrame11_Pal},
    {sTextWindowFrame12_Gfx, sTextWindowFrame12_Pal},
    {sTextWindowFrame13_Gfx, sTextWindowFrame13_Pal},
    {sTextWindowFrame14_Gfx, sTextWindowFrame14_Pal},
    {sTextWindowFrame15_Gfx, sTextWindowFrame15_Pal},
    {sTextWindowFrame16_Gfx, sTextWindowFrame16_Pal},
    {sTextWindowFrame17_Gfx, sTextWindowFrame17_Pal},
    {sTextWindowFrame18_Gfx, sTextWindowFrame18_Pal},
    {sTextWindowFrame19_Gfx, sTextWindowFrame19_Pal},
    {sTextWindowFrame20_Gfx, sTextWindowFrame20_Pal},
};

static const u16 sTextWindowDexNavFrame[] = INCGFX_U16("graphics/text_window/dexnav_pal.pal", ".gbapal");
static const struct TilesPal sDexNavWindowFrame = {gTextWindowFrame1_Gfx, sTextWindowDexNavFrame};

// code
const struct TilesPal *GetWindowFrameTilesPal(u8 id)
{
    if (id >= WINDOW_FRAMES_COUNT)
        return &sWindowFrames[0];
    else
        return &sWindowFrames[id];
}

void LoadMessageBoxGfx(u8 windowId, u16 destOffset, u8 palOffset)
{
    LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), gMessageBox_Gfx, 0x1C0, destOffset);
    LoadPalette(GetOverworldTextboxPalettePtr(), palOffset, PLTT_SIZE_4BPP);
}

void LoadStdWindowGfx(u8 windowId, u16 destOffset, u8 palOffset)
{
    LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), sStdTextWindow_Gfx, 0x120, destOffset);
    LoadPalette(GetTextWindowPalette(3), palOffset, PLTT_SIZE_4BPP);
}

void LoadSignBoxGfx(u8 windowId, u16 destOffset, u8 palOffset)
{
    LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), gSignpostWindow_Gfx, 0x1C0, destOffset);
    LoadPalette(GetTextWindowPalette(1), palOffset, PLTT_SIZE_4BPP);
}

void LoadUserWindowBorderGfx_(u8 windowId, u16 destOffset, u8 palOffset)
{
    LoadUserWindowBorderGfx(windowId, destOffset, palOffset);
}

void LoadWindowGfx(u8 windowId, u8 frameId, u16 destOffset, u8 palOffset)
{
    LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), sWindowFrames[frameId].tiles, 0x120, destOffset);
    LoadPalette(sWindowFrames[frameId].pal, palOffset, PLTT_SIZE_4BPP);
}

void LoadUserWindowBorderGfx(u8 windowId, u16 destOffset, u8 palOffset)
{
    LoadWindowGfx(windowId, gSaveBlock1Ptr->optionsWindowFrameType, destOffset, palOffset);
}

void DrawTextBorderOuter(u8 windowId, u16 tileNum, u8 palNum)
{
    u8 bgLayer = GetWindowAttribute(windowId, WINDOW_BG);
    u16 tilemapLeft = GetWindowAttribute(windowId, WINDOW_TILEMAP_LEFT);
    u16 tilemapTop = GetWindowAttribute(windowId, WINDOW_TILEMAP_TOP);
    u16 width = GetWindowAttribute(windowId, WINDOW_WIDTH);
    u16 height = GetWindowAttribute(windowId, WINDOW_HEIGHT);

    FillBgTilemapBufferRect(bgLayer, tileNum + 0, tilemapLeft - 1,      tilemapTop - 1,         1,      1,      palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 1, tilemapLeft,          tilemapTop - 1,         width,  1,      palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 2, tilemapLeft + width,  tilemapTop - 1,         1,      1,      palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 3, tilemapLeft - 1,      tilemapTop,             1,      height, palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 5, tilemapLeft + width,  tilemapTop,             1,      height, palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 6, tilemapLeft - 1,      tilemapTop + height,    1,      1,      palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 7, tilemapLeft,          tilemapTop + height,    width,  1,      palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 8, tilemapLeft + width,  tilemapTop + height,    1,      1,      palNum);
}

void DrawTextBorderInner(u8 windowId, u16 tileNum, u8 palNum)
{
    u8 bgLayer = GetWindowAttribute(windowId, WINDOW_BG);
    u16 tilemapLeft = GetWindowAttribute(windowId, WINDOW_TILEMAP_LEFT);
    u16 tilemapTop = GetWindowAttribute(windowId, WINDOW_TILEMAP_TOP);
    u16 width = GetWindowAttribute(windowId, WINDOW_WIDTH);
    u16 height = GetWindowAttribute(windowId, WINDOW_HEIGHT);

    FillBgTilemapBufferRect(bgLayer, tileNum + 0, tilemapLeft,              tilemapTop,                 1,          1,          palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 1, tilemapLeft + 1,          tilemapTop,                 width - 2,  1,          palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 2, tilemapLeft + width - 1,  tilemapTop,                 1,          1,          palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 3, tilemapLeft,              tilemapTop + 1,             1,          height - 2, palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 5, tilemapLeft + width - 1,  tilemapTop + 1,             1,          height - 2, palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 6, tilemapLeft,              tilemapTop + height - 1,    1,          1,          palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 7, tilemapLeft + 1,          tilemapTop + height - 1,    width -     2,  1,      palNum);
    FillBgTilemapBufferRect(bgLayer, tileNum + 8, tilemapLeft + width - 1,  tilemapTop + height - 1,    1,          1,          palNum);
}

void rbox_fill_rectangle(u8 windowId)
{
    u8 bgLayer = GetWindowAttribute(windowId, WINDOW_BG);
    u16 tilemapLeft = GetWindowAttribute(windowId, WINDOW_TILEMAP_LEFT);
    u16 tilemapTop = GetWindowAttribute(windowId, WINDOW_TILEMAP_TOP);
    u16 width = GetWindowAttribute(windowId, WINDOW_WIDTH);
    u16 height = GetWindowAttribute(windowId, WINDOW_HEIGHT);

    FillBgTilemapBufferRect(bgLayer, 0, tilemapLeft - 1, tilemapTop - 1, width + 2, height + 2, 0x11);
}

const u16 *GetTextWindowPalette(u8 id)
{
    switch (id)
    {
    case 0:
        id = 0x00;
        break;
    case 1:
        id = 0x10;
        break;
    case 2:
        id = 0x20;
        break;
    case 3:
        id = 0x30;
        break;
    case 4:
    default:
        id = 0x40;
        break;
    }

    return (const u16 *)(sTextWindowPalettes) + id;
}

const u16 *GetOverworldTextboxPalettePtr(void)
{
    return gMessageBox_Pal;
}

// Effectively LoadUserWindowBorderGfx but specifying the bg directly instead of a window from that bg
void LoadUserWindowBorderGfxOnBg(u8 bg, u16 destOffset, u8 palOffset)
{
    LoadBgTiles(bg, sWindowFrames[gSaveBlock1Ptr->optionsWindowFrameType].tiles, 0x120, destOffset);
    LoadPalette(GetWindowFrameTilesPal(gSaveBlock1Ptr->optionsWindowFrameType)->pal, palOffset, PLTT_SIZE_4BPP);
}

void LoadDexNavWindowGfx(u8 windowId, u16 destOffset, u8 palOffset)
{
    LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), sDexNavWindowFrame.tiles, 0x120, destOffset);
    LoadPalette(sDexNavWindowFrame.pal, palOffset, 32);
}
