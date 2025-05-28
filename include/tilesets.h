#ifndef GUARD_tilesets_H
#define GUARD_tilesets_H

#define TILESET(tiles)    extern const struct Tileset tiles

extern const u32 gTilesetTiles_General[];
extern const u16 gTilesetPalettes_General[][16];

extern const struct Tileset * const gTilesetPointer_SecretBase;
extern const struct Tileset * const gTilesetPointer_SecretBaseRedCave;

TILESET(gTileset_Building);
TILESET(gTileset_Building2);
TILESET(gTileset_PokemonWorldTournament);
TILESET(gTileset_BrendansMaysHouse);

TILESET(gTileset_Pearlwood_Secondary);
TILESET(gTileset_Coralgrove_Secondary);
TILESET(gTileset_Lilycove);
TILESET(gTileset_Ranch);
TILESET(gTileset_WipCity1);
TILESET(gTileset_Mauville);
TILESET(gTileset_Fallarbor);
TILESET(gTileset_SafariSec);
TILESET(gTileset_Shoreslate);
TILESET(gTileset_Mossdeep);
TILESET(gTileset_Dewford);
TILESET(gTileset_CyclingRoad);
TILESET(gTileset_NewSandstoneCity);
TILESET(gTileset_Drisledge);
TILESET(gTileset_Amberock);
TILESET(gTileset_Basaluff);
TILESET(gTileset_Frostfire);
TILESET(gTileset_Shop);
TILESET(gTileset_gTileset_Hotel);
TILESET(gTileset_InsideShip);

#undef TILESET

#endif //GUARD_tilesets_H
