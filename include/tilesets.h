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
extern const struct Tileset gTileset_BuildingFrlg;
extern const struct Tileset gTileset_GenericBuilding1;
extern const struct Tileset gTileset_General;
extern const struct Tileset gTileset_Petalburg;
extern const struct Tileset gTileset_Rustboro;
extern const struct Tileset gTileset_Fallarbor;
extern const struct Tileset gTileset_Slateport;
extern const struct Tileset gTileset_Dewford;
extern const struct Tileset gTileset_Lilycove;
extern const struct Tileset gTileset_Mossdeep;
extern const struct Tileset gTileset_Sootopolis;
extern const struct Tileset gTileset_EverGrande;
extern const struct Tileset gTileset_Pacifidlog;
extern const struct Tileset gTileset_PetalburgGym;
extern const struct Tileset gTileset_PokemonCenter;
extern const struct Tileset gTileset_InsideShip;
extern const struct Tileset gTileset_Fallarbor;
extern const struct Tileset gTileset_Dewford;
extern const struct Tileset gTileset_BattleFrontier;
extern const struct Tileset gTileset_BattleFrontierOutsideWest;
extern const struct Tileset gTileset_BattleFrontierOutsideEast;
extern const struct Tileset gTileset_BattleArena;
extern const struct Tileset gTileset_BattleDome;
extern const struct Tileset gTileset_BattlePalace;
extern const struct Tileset gTileset_Slateport;
extern const struct Tileset gTileset_BattleFrontierOutsideWest;
extern const struct Tileset gTileset_BattleTent;
extern const struct Tileset gTileset_TrainerHill;
extern const struct Tileset gTileset_General_Frlg;
extern const struct Tileset gTileset_PalletTown;
extern const struct Tileset gTileset_ViridianCity;
extern const struct Tileset gTileset_PewterCity;
extern const struct Tileset gTileset_SaffronCity;
extern const struct Tileset gTileset_CeruleanCity;
extern const struct Tileset gTileset_LavenderTown;
extern const struct Tileset gTileset_VermilionCity;
extern const struct Tileset gTileset_CeladonCity;
extern const struct Tileset gTileset_FuchsiaCity;
extern const struct Tileset gTileset_CinnabarIsland;
extern const struct Tileset gTileset_SeviiIslands123;
extern const struct Tileset gTileset_SeviiIslands45;
extern const struct Tileset gTileset_SeviiIslands67;
extern const struct Tileset gTileset_DepartmentStore;
extern const struct Tileset gTileset_PokemonCenterFrlg;
extern const struct Tileset gTileset_SilphCo;
extern const struct Tileset gTileset_SSAnne;
extern const struct Tileset gTileset_SeaCottage;
extern const struct Tileset gTileset_TrainerTower;

#endif //GUARD_tilesets_H
