#ifndef GUARD_tilesets_H
#define GUARD_tilesets_H

#define TILESET(tiles)    extern const struct Tileset tiles

extern const u32 gTilesetTiles_General[];
extern const u16 gTilesetPalettes_General[][16];

extern const struct Tileset *const gTilesetPointer_SecretBase;
extern const struct Tileset *const gTilesetPointer_SecretBaseRedCave;

TILESET(gTileset_Building);
TILESET(gTileset_Building2);
TILESET(gTileset_PokemonWorldTournament);
TILESET(gTileset_BrendansMaysHouse);

TILESET(gTileset_Pearlwood);
TILESET(gTileset_Coralgrove_Secondary);
TILESET(gTileset_Marigorge);
TILESET(gTileset_Shoreslate);
TILESET(gTileset_Kaolisle);
TILESET(gTileset_Rockliffe);
TILESET(gTileset_MiscRoutes);
TILESET(gTileset_Sandstone);
TILESET(gTileset_Drisledge);
TILESET(gTileset_Amberock);
TILESET(gTileset_Basaluff);
TILESET(gTileset_Frosthearth);
TILESET(gTileset_Shop);
TILESET(gTileset_Hotel);
TILESET(gTileset_Aldeleaf);
TILESET(gTileset_Primrose_Secondary);
TILESET(gTileset_Skyloch);
TILESET(gTileset_Mauville);
TILESET(gTileset_Fortree2);
TILESET(gTileset_Route18);
TILESET(gTileset_DarkForestSec);
TILESET(gTileset_Summer);

#undef TILESET

#endif //GUARD_tilesets_H
