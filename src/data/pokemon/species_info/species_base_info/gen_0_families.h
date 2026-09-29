#include "graphics.h"

#define PLRPIC_BASE                                                 \
    .baseHP = 1,                                                    \
    .abilities = { ABILITY_DAMP, ABILITY_DAMP, ABILITY_DAMP },

#ifdef __INTELLISENSE__
const struct SpeciesBaseInfo gSpeciesBaseInfoGen0[] =
{
#endif

[SPECIES_BRENDAN_RUBY]      = {PLRPIC_BASE},
[SPECIES_BRENDAN_EMERALD]   = {PLRPIC_BASE},
[SPECIES_BRENDAN_ORAS]      = {PLRPIC_BASE},
[SPECIES_BRENDAN_CONTEST]   = {PLRPIC_BASE},
[SPECIES_MAY_RUBY]          = {PLRPIC_BASE},
[SPECIES_MAY_EMERALD]       = {PLRPIC_BASE},
[SPECIES_MAY_ORAS]          = {PLRPIC_BASE},
[SPECIES_MAY_CONTEST]       = {PLRPIC_BASE},
[SPECIES_EMPTY]             = {PLRPIC_BASE},

#ifdef __INTELLISENSE__
};
#endif
