#include "global.h"
#include "bg.h"
#include "decompress.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "malloc.h"
#include "main.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "random.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/weather.h"
#include "field_effect.h"

static const u16 sTextColor0[] = {RGB_BLACK};
static const u16 sTextColor1[] = {RGB2GBA(116, 116, 116)};
static const u16 sTextColor2[] = {RGB2GBA(188, 188, 188)};
static const u16 sTextColor3[] = {RGB2GBA(252, 252, 252)};

static const u16 sCutscenePal0[] = INCBIN_U16("graphics/nes/cutscenepal0.gbapal");
static const u16 sCutscenePal1[] = INCBIN_U16("graphics/nes/cutscenepal1.gbapal");
static const u16 sCutscenePal2[] = INCBIN_U16("graphics/nes/cutscenepal2.gbapal");
static const u16 sCutscenePal3[] = INCBIN_U16("graphics/nes/cutscenepal3.gbapal");

void LoadTextColor0(void)
{
    LoadPalette(sTextColor0, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(1));
}

void LoadTextColor1(void)
{
    LoadPalette(sTextColor1, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(1));
}

void LoadTextColor2(void)
{
    LoadPalette(sTextColor2, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(1));
}

void LoadTextColor3(void)
{
    LoadPalette(sTextColor3, BG_PLTT_ID(0) + 1, PLTT_SIZEOF(1));
}

void SetSceneDark(void)
{
    LoadPalette(sCutscenePal0, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sCutscenePal0, BG_PLTT_ID(3), PLTT_SIZE_4BPP);
}

void SetScenePal1(void)
{
    LoadPalette(sCutscenePal1, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sCutscenePal1, BG_PLTT_ID(3), PLTT_SIZE_4BPP);
}

void SetScenePal2(void)
{
    LoadPalette(sCutscenePal2, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sCutscenePal2, BG_PLTT_ID(3), PLTT_SIZE_4BPP);
}

void SetScenePal3(void)
{
    LoadPalette(sCutscenePal3, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadPalette(sCutscenePal3, BG_PLTT_ID(3), PLTT_SIZE_4BPP);
}