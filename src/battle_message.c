#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "trainer_slide.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"

struct BattleWindowText
{
    u8 fillValue;
    u8 fontId;
    u8 x;
    u8 y;
    u8 letterSpacing;
    u8 lineSpacing;
    u8 speed;
    u8 fgColor;
    u8 bgColor;
    u8 shadowColor;
};

EWRAM_DATA u16 sBattlerAbilities[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA struct BattleMsgData *gBattleMsgDataPtr = NULL;
EWRAM_DATA bool8 gAutoScrollMessage = 0;
EWRAM_DATA u16 sHazardString = 0;

static const u8 sText_Your1[] = _("Your");
static const u8 sText_Opposing1[] = _("The opposing");
static const u8 sText_Your2[] = _("your");
static const u8 sText_Opposing2[] = _("the opposing");
static const u8 sText_EmptyStatus[] = _("$$$$$$$");
static const u8 sText_Foe1[] = _("The foe's");
static const u8 sText_Foe2[] = _("the foe's");


static const u8 sTrainerIntro[] =                   _("You are challenged by\n{B_TRAINER1_NAME_WITH_CLASS}!\p");
static const u8 sTrainerIntroDouble[] =             _("You are challenged by\n{B_TRAINER1_NAME_WITH_CLASS} and\l{B_TRAINER2_NAME_WITH_CLASS}\p");
static const u8 sTwoWildMonAppeared[] =             _("Oh! A wild {B_OPPONENT_MON1_NAME} and\n{B_OPPONENT_MON2_NAME} appeared!\p");
static const u8 sTrainerMonAppeared[] =             _("{B_OPPONENT_MON1_NAME} wants to battle!\p");
static const u8 sWildMonAppeared[] =                _("A wild {B_OPPONENT_MON1_NAME} appeared!\p");
static const u8 sPartnerSentOut[] =                 _("{B_PARTNER_CLASS} {B_PARTNER_NAME} sent\nout {B_PLAYER_MON2_NAME}!\lGo, {B_PLAYER_MON1_NAME}!");
static const u8 sPlayerSentOut[] =                  _("Go! {B_PLAYER_MON1_NAME}!");
static const u8 sPlayerSentOutDouble[] =            _("Go! {B_PLAYER_MON1_NAME} and\n{B_PLAYER_MON2_NAME}!");
static const u8 sTwoTrainersSentOut[] =             _("{B_TRAINER1_NAME_WITH_CLASS} sent\nout {B_OPPONENT_MON1_NAME}!\p{B_TRAINER2_NAME_WITH_CLASS} sent\nout {B_OPPONENT_MON2_NAME}!");
static const u8 sTrainerSentOutDouble[] =           _("{B_TRAINER1_NAME_WITH_CLASS} sent out\n{B_OPPONENT_MON1_NAME} and {B_OPPONENT_MON2_NAME}!");
static const u8 sTrainerSentOut[] =                 _("{B_TRAINER1_NAME_WITH_CLASS} sent out\n{B_OPPONENT_MON1_NAME}!");
static const u8 sReturnPlayerMon1[] =               _("{B_BUFF1}, switch out!\nCome back!");
static const u8 sReturnPlayerMon2[] =               _("{B_BUFF1}, come back!");
static const u8 sReturnPlayerMon3[] =               _("{B_BUFF1}, enough!\nGet back!");
static const u8 sReturnPlayerMon4[] =               _("{B_BUFF1}, good job!\nGet back!");
static const u8 sReturnTrainerMon[] =               _("{B_TRAINER1_NAME_WITH_CLASS}\nwithdrew {B_BUFF1}!");
static const u8 sSwitchInPlayerMon1[] =             _("Go! {B_BUFF1}!");
static const u8 sSwitchInPlayerMon2[] =             _("You're in charge, {B_BUFF1}!");
static const u8 sSwitchInPlayerMon3[] =             _("Go for it, {B_BUFF1}!");
static const u8 sSwitchInPlayerMon4[] =             _("Your foe's weak!\nGet 'em, {B_BUFF1}!");
static const u8 sSwitchInTrainer2Mon[] =            _("{B_TRAINER2_NAME_WITH_CLASS} sent\nout {B_BUFF1}!");
static const u8 sSwitchInTrainer1Mon[] =            _("{B_TRAINER1_NAME_WITH_CLASS} sent\nout {B_BUFF1}!");
static const u8 sMonUsedMove[] =                    _("{B_ATK_NAME_PREFIX} used\n{B_BUFF3}!");
static const u8 sPlayerDefeatedTrainerDouble[] =    _("Player defeated {B_TRAINER1_NAME_WITH_CLASS}\nand {B_TRAINER2_NAME_WITH_CLASS}!");
static const u8 sPlayerLostToTrainerDouble[] =      _("Player lost to {B_TRAINER1_NAME_WITH_CLASS}\nand {B_TRAINER2_NAME_WITH_CLASS}!");
static const u8 sPlayerDefeatedTrainer[] =          _("Player defeated\n{B_TRAINER1_NAME_WITH_CLASS}!");
static const u8 sPlayerLostToTrainer[] =            _("Player lost against\n{B_TRAINER1_NAME_WITH_CLASS}!");
static const u8 sText_PlayerBattledToDrawVsOne[] =  _("Player battled to a draw against {B_TRAINER1_NAME_WITH_CLASS}!");
static const u8 sText_PlayerBattledToDrawVsTwo[] =  _("Player battled to a draw against {B_TRAINER1_NAME_WITH_CLASS} and {B_TRAINER2_NAME_WITH_CLASS}!");
static const u8 sLanettes[] =                       _("Lanette's");
static const u8 sSomeones[] =                       _("Someone's");
static const u8 sWildPrefix[] =                     _("The wild ");
static const u8 sWildPrefixLowerCase[] =            _("the wild ");
static const u8 sFoePrefix[] =                      _("The foe ");
static const u8 sFoePrefixLowerCase[] =             _("the foe ");
static const u8 sFoePrefixNoSpace[] =               _("The foe");
static const u8 sAllyPrefix[] =                     _("The ally");

// These are required to make tests pass
static const u8 sTrainerIntroLink[] =               _("You are challenged by\n{B_LINK_OPPONENT1_NAME}!\p");
static const u8 sTrainerSentOutLink[] =             _("{B_LINK_OPPONENT1_NAME} sent out\n{B_OPPONENT_MON1_NAME}!");
static const u8 sReturnTrainerMonLink[] =           _("{B_LINK_OPPONENT1_NAME}\nwithdrew {B_BUFF1}!");
static const u8 sSwitchInTrainer1MonLink[] =        _("{B_LINK_OPPONENT1_NAME} sent\nout {B_BUFF1}!");

const u8 *const gStatNamesTable[NUM_BATTLE_STATS] =
{
    [STAT_HP]      = COMPOUND_STRING("HP"),
    [STAT_ATK]     = COMPOUND_STRING("Attack"),
    [STAT_DEF]     = COMPOUND_STRING("Defense"),
    [STAT_SPEED]   = COMPOUND_STRING("Speed"),
    [STAT_SPATK]   = COMPOUND_STRING("Sp. Atk"),
    [STAT_SPDEF]   = COMPOUND_STRING("Sp. Def"),
    [STAT_ACC]     = COMPOUND_STRING("accuracy"),
    [STAT_EVASION] = COMPOUND_STRING("evasiveness"),
};
const u8 *const gPokeblockWasTooXStringTable[FLAVOR_COUNT] =
{
    [FLAVOR_SPICY]  = COMPOUND_STRING("was too spicy!"),
    [FLAVOR_DRY]    = COMPOUND_STRING("was too dry!"),
    [FLAVOR_SWEET]  = COMPOUND_STRING("was too sweet!"),
    [FLAVOR_BITTER] = COMPOUND_STRING("was too bitter!"),
    [FLAVOR_SOUR]   = COMPOUND_STRING("was too sour!"),
};

const u8 *const gBattleStringsTable[STRINGID_COUNT] =
{
    // Level-up
    [STRINGID_PKMNGAINEDEXP]                        = COMPOUND_STRING("{B_BUFF1} gained{B_BUFF2}\n{B_BUFF3} Exp. Points!\p"),
    [STRINGID_PKMNGREWTOLV]                         = COMPOUND_STRING("{B_BUFF1} grew to\nLv. {B_BUFF2}!{WAIT_SE}\p"),
    [STRINGID_PKMNLEARNEDMOVE]                      = COMPOUND_STRING("{B_BUFF1} learned\n{B_BUFF2}!{WAIT_SE}\p"),
    [STRINGID_TRYTOLEARNMOVE1]                      = COMPOUND_STRING("{B_BUFF1} wants to learn the\nmove {B_BUFF2}.\p"),
    [STRINGID_TRYTOLEARNMOVE2]                      = COMPOUND_STRING("However, {B_BUFF1} already\nknows four moves.\p"),
    [STRINGID_TRYTOLEARNMOVE3]                      = COMPOUND_STRING("Should a move be deleted and\nreplaced with {B_BUFF2}?"),
    [STRINGID_PKMNFORGOTMOVE]                       = COMPOUND_STRING("{B_BUFF1} forgot how to\nuse {B_BUFF2}.\p"),
    [STRINGID_STOPLEARNINGMOVE]                     = COMPOUND_STRING("{PAUSE 32}Give up on learning the move\n{B_BUFF2}?"),
    [STRINGID_DIDNOTLEARNMOVE]                      = COMPOUND_STRING("{B_BUFF1} did not learn\n{B_BUFF2}.\p"),
    [STRINGID_ANDELLIPSIS]                          = COMPOUND_STRING("And…\p"),
    [STRINGID_PKMNLEARNEDMOVE2]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} learned\n{B_BUFF1}!"),
    [STRINGID_123POOF]                              = COMPOUND_STRING("{PAUSE 32}1, {PAUSE 15}2, and{PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}Ta-da!\p"),
    [STRINGID_ABOOSTED]                             = COMPOUND_STRING(" a boosted"),
    [STRINGID_TEAMGAINEDEXP]                        = COMPOUND_STRING("The rest of your team gained Exp.\nPoints thanks to the {B_LAST_ITEM}!\p"),

    // Ball Throw
    [STRINGID_TRAINERBLOCKEDBALL]                   = COMPOUND_STRING("The Trainer blocked the Ball!"),
    [STRINGID_DONTBEATHIEF]                         = COMPOUND_STRING("Don't be a thief!"),
    [STRINGID_ITDODGEDBALL]                         = COMPOUND_STRING("The ball bounced back to you!\nThis Pokémon can't be caught!"),
    [STRINGID_PKMNBROKEFREE]                        = COMPOUND_STRING("Oh, no!\nThe Pokémon broke free!"),
    [STRINGID_ITAPPEAREDCAUGHT]                     = COMPOUND_STRING("Aww!\nIt appeared to be caught!"),
    [STRINGID_AARGHALMOSTHADIT]                     = COMPOUND_STRING("Aargh!\nAlmost had it!"),
    [STRINGID_SHOOTSOCLOSE]                         = COMPOUND_STRING("Shoot!\nIt was so close, too!"),
    [STRINGID_GOTCHAPKMNCAUGHTPLAYER]               = COMPOUND_STRING("Gotcha!\n{B_DEF_NAME} was caught!{WAIT_SE}{PLAY_BGM MUS_CAUGHT}\p"),
    [STRINGID_GIVENICKNAMECAPTURED]                 = COMPOUND_STRING("Give a nickname to the\ncaught {B_DEF_NAME}?"),
    [STRINGID_PKMNDATAADDEDTODEX]                   = COMPOUND_STRING("{B_DEF_NAME}'s data was\nadded to the Pokédex.\p"),
    [STRINGID_PKMNMOVEDISABLEDNOMORE]               = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX}'s move is no longer disabled!"), //wip
    [STRINGID_PKMNENCOREENDED]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ended its encore!"), //wip
    [STRINGID_PKMNSTOLEITEM]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} stole {B_EFF_NAME_WITH_PREFIX2}'s {B_LAST_ITEM}!"), //wip
    [STRINGID_PKMNCHANGEDTYPEWITH]                  = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX}'s {B_EFF_ABILITY} made it the {B_BUFF1} type!"), //not in gen 5+, ability popup //wip
    [STRINGID_ATTACKERSSTATROSE]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX}'s {B_BUFF1} {B_BUFF2}rose!"), //wip
    [STRINGID_DEFENDERSSTATROSE]                    = gText_DefendersStatRose, //wip
    [STRINGID_ATTACKERSSTATFELL]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX}'s {B_BUFF1} {B_BUFF2}fell!"), //wip
    [STRINGID_DEFENDERSSTATFELL]                    = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX}'s {B_BUFF1} {B_BUFF2}fell!"), //wip
    [STRINGID_USINGITEMSTATOFPKMNROSE]              = COMPOUND_STRING("Using {B_LAST_ITEM}, the {B_BUFF1} of {B_SCR_NAME_WITH_PREFIX2} {B_BUFF2}rose!"), //todo: update this, will require code changes //wip
    [STRINGID_USINGITEMSTATOFPKMNFELL]              = COMPOUND_STRING("Using {B_LAST_ITEM}, the {B_BUFF1} of {B_SCR_NAME_WITH_PREFIX2} {B_BUFF2}fell!"), //wip
    [STRINGID_PKMNTRANSFERREDSOMEONESPC]            = gText_PkmnTransferredSomeonesPC,
    [STRINGID_PKMNTRANSFERREDLANETTESPC]            = gText_PkmnTransferredLanettesPC,
    [STRINGID_PKMNBOXSOMEONESPCFULL]                = gText_PkmnTransferredSomeonesPCBoxFull,
    [STRINGID_PKMNBOXLANETTESPCFULL]                = gText_PkmnTransferredLanettesPCBoxFull,

    // Battle end
    [STRINGID_TRAINER1LOSETEXT]                     = COMPOUND_STRING("{B_TRAINER1_LOSE_TEXT}"),
    [STRINGID_TRAINER2LOSETEXT]                     = COMPOUND_STRING("{B_TRAINER2_LOSE_TEXT}"),
    [STRINGID_TRAINER1WINTEXT]                      = COMPOUND_STRING("{B_TRAINER1_WIN_TEXT}"),
    [STRINGID_TRAINER2WINTEXT]                      = COMPOUND_STRING("{B_TRAINER2_WIN_TEXT}"),
    [STRINGID_PLAYERGOTMONEY]                       = COMPOUND_STRING("{B_PLAYER_NAME} got ¥{B_BUFF1}\nfor winning!\p"),
    [STRINGID_PLAYERGOTMONEYANDBP]                  = COMPOUND_STRING("{B_PLAYER_NAME} got ¥{B_BUFF1} and\n{B_BUFF2} BP for winning!\p"),
    [STRINGID_PLAYERWHITEOUT]                       = COMPOUND_STRING("{B_PLAYER_NAME} is out of\nusable Pokémon!\p"),
    [STRINGID_PLAYERWHITEOUT_TRAINER]               = COMPOUND_STRING("{B_PLAYER_NAME} paid out ¥{B_BUFF1}\nto the winner…\p{B_PLAYER_NAME} blacked out!{PAUSE_UNTIL_PRESS}"),
    [STRINGID_PLAYERWHITEOUT_WILDMON]               = COMPOUND_STRING("{B_PLAYER_NAME} dropped ¥{B_BUFF1}\nin panic…\p{B_PLAYER_NAME} blacked out!{PAUSE_UNTIL_PRESS}"),
    [STRINGID_PLAYERWHITEOUT_NONE]                  = COMPOUND_STRING("{B_PLAYER_NAME} is out of\nusable Pokémon!\p{B_PLAYER_NAME} lost against\n{B_TRAINER1_NAME_WITH_CLASS}!{PAUSE_UNTIL_PRESS}"),

    // Fleeing
    [STRINGID_GOTAWAYSAFELY]                        = COMPOUND_STRING("{PLAY_SE SE_FLEE}Got away safely!\p"),
    [STRINGID_PKMNFLEDFROMBATTLE]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} fled\nfrom battle!"),
    [STRINGID_WILDPKMNFLED]                         = COMPOUND_STRING("{PLAY_SE SE_FLEE}The wild {B_BUFF1} fled!"),
    [STRINGID_NORUNNINGFROMTRAINERS]                = COMPOUND_STRING("No! There's no running\nfrom a Trainer battle!\p"),
    [STRINGID_CANTESCAPE]                           = COMPOUND_STRING("Can't escape!\p"),
    [STRINGID_CANTESCAPE2]                          = COMPOUND_STRING("Couldn't get away!\p"),
    [STRINGID_PKMNFLEDUSINGSMOKEBALL]               = COMPOUND_STRING("{PLAY_SE SE_FLEE}{B_ATK_NAME_PREFIX} fled\nusing its Smoke Ball!\p"),
    [STRINGID_NORUNNINGFROMGHOST]                   = COMPOUND_STRING("A strange force beckons you to stay.\nThere's no running from this battle!"),

    // Sleep
    [STRINGID_PKMNFELLASLEEP]                       = COMPOUND_STRING("{B_EFF_NAME_PREFIX}\nfell asleep!"),
    [STRINGID_PKMNALREADYASLEEP]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is\nalready asleep!"),
    [STRINGID_PKMNALREADYASLEEP2]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is\nalready asleep!"),
    [STRINGID_PKMNSLEPTHEALTHY]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} slept and\nbecame healthy!"),
    [STRINGID_PKMNFASTASLEEP]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is fast\nasleep."),
    [STRINGID_PKMNWOKEUP]                           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} woke up!"),
    [STRINGID_PKMNSITEMWOKEIT]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_LAST_ITEM}\nwoke it up!"),
    [STRINGID_PKMNSTAYSAWAKE]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX} stays awake!"),

    // Sleep / Uproar
    [STRINGID_PKMNCAUSEDUPROAR]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} caused\nan uproar!"),
    [STRINGID_PKMNWOKEUPINUPROAR]                   = COMPOUND_STRING("The uproar woke up\n{B_EFF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNUPROARKEPTAWAKE]                  = COMPOUND_STRING("But the uproar kept\n{B_SCR_NAME_PREFIX_LOWERCASE} awake!"),
    [STRINGID_UPROARKEPTPKMNAWAKE]                  = COMPOUND_STRING("But the uproar kept\n{B_DEF_NAME_PREFIX_LOWERCASE} awake!"),
    [STRINGID_PKMNCANTSLEEPINUPROAR]                = COMPOUND_STRING("But {B_DEF_NAME_PREFIX_LOWERCASE} can't\nsleep in an uproar!"),
    [STRINGID_PKMNMAKINGUPROAR]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is making\nan uproar!"),
    [STRINGID_PKMNCALMEDDOWN]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX}\ncalmed down."),

    // Poison
    [STRINGID_PKMNWASPOISONED]                      = COMPOUND_STRING("{B_EFF_NAME_PREFIX}\nwas poisoned!"),
    [STRINGID_PKMNHURTBYPOISON]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} was hurt\nby its poison!"),
    [STRINGID_PKMNALREADYPOISONED]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is already\npoisoned."),
    [STRINGID_PKMNBADLYPOISONED]                    = COMPOUND_STRING("{B_EFF_NAME_PREFIX} is badly\npoisoned!"),
    [STRINGID_PKMNSITEMCUREDPOISON]                 = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_LAST_ITEM}\ncured its poison!"),
    [STRINGID_PKMNBADLYPOISONEDBY]                  = COMPOUND_STRING("{B_EFF_NAME_PREFIX} was badly\npoisoned by the Toxic Orb!"),

    // Freeze
    [STRINGID_PKMNWASFROZEN]                        = COMPOUND_STRING("{B_EFF_NAME_PREFIX} was\nfrozen solid!"),
    [STRINGID_PKMNISFROZEN]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is\nfrozen solid!"),
    [STRINGID_PKMNWASDEFROSTED2]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} thawed out!"),
    [STRINGID_PKMNWASDEFROSTEDBY]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_CURRENT_MOVE}\ndefrosted it!"),
    [STRINGID_PKMNSITEMDEFROSTEDIT]                 = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_LAST_ITEM}\ndefrosted it!"),

    // Burn
    [STRINGID_PKMNWASBURNED]                        = COMPOUND_STRING("{B_EFF_NAME_PREFIX}\nwas burned!"),
    [STRINGID_PKMNHURTBYBURN]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} was hurt\nby its burn!"),
    [STRINGID_PKMNSITEMHEALEDBURN]                  = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s\n{B_LAST_ITEM} healed its burn!"),
    [STRINGID_PKMNALREADYHASBURN]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX} already\nhas a burn."),
    [STRINGID_BRNBYITEM]                            = COMPOUND_STRING("{B_EFF_NAME_PREFIX} was burned\nby the {B_LAST_ITEM}!"),

    // Paralysis
    [STRINGID_PKMNWASPARALYZED]                     = COMPOUND_STRING("{B_EFF_NAME_PREFIX} is paralyzed!\nIt may be unable to move!"),
    [STRINGID_PKMNISPARALYZED]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is paralyzed!\nIt can't move!"),
    [STRINGID_PKMNISALREADYPARALYZED]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is\nalready paralyzed!"),
    [STRINGID_PKMNSITEMCUREDPARALYSIS]              = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s\n{B_LAST_ITEM} cured its paralysis!"),

    [STRINGID_DEF_CURE_CONFUSION]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX} snapped\nout of confusion!"),
    [STRINGID_DEF_CURE_TORMENT]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s\ntorment wore off!"),
    [STRINGID_DEF_CURE_INFATUATION]                 = COMPOUND_STRING("{B_DEF_NAME_PREFIX} got over\nits infatuation!"), //unused
    [STRINGID_DEF_CURE_POISON]                      = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was cured\nof its poisoning!"),
    [STRINGID_DEF_CURE_SLEEP]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX} woke up!"),
    [STRINGID_DEF_CURE_FREEZE]                      = COMPOUND_STRING("{B_DEF_NAME_PREFIX} thawed out!"),
    [STRINGID_DEF_CURE_BURN]                        = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s burn was healed!"),
    [STRINGID_DEF_CURE_PARALYSIS]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was cured of\nparalysis."),

    [STRINGID_ATK_CURE_CONFUSION]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} snapped\nout of confusion!"),
    [STRINGID_ATK_CURE_TORMENT]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s\ntorment wore off!"),
    [STRINGID_ATK_CURE_INFATUATION]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} got over\nits infatuation!"), //unused
    [STRINGID_ATK_CURE_POISON]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} was cured\nof its poisoning!"),
    [STRINGID_ATK_CURE_SLEEP]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} woke up!"),
    [STRINGID_ATK_CURE_FREEZE]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} thawed out!"),
    [STRINGID_ATK_CURE_BURN]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s burn was healed!"),
    [STRINGID_ATK_CURE_PARALYSIS]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} was cured of\nparalysis."),

    [STRINGID_SCR_CURE_CONFUSION]                   = COMPOUND_STRING("{B_SCR_NAME_PREFIX} snapped\nout of confusion!"),
    [STRINGID_SCR_CURE_TORMENT]                     = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s\ntorment wore off!"),
    [STRINGID_SCR_CURE_INFATUATION]                 = COMPOUND_STRING("{B_SCR_NAME_PREFIX} got over\nits infatuation!"), //unused
    [STRINGID_SCR_CURE_POISON]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} was cured\nof its poisoning!"),
    [STRINGID_SCR_CURE_SLEEP]                       = COMPOUND_STRING("{B_SCR_NAME_PREFIX} woke up!"),
    [STRINGID_SCR_CURE_FREEZE]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} thawed out!"),
    [STRINGID_SCR_CURE_BURN]                        = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s burn was healed!"),
    [STRINGID_SCR_CURE_PARALYSIS]                   = COMPOUND_STRING("{B_SCR_NAME_PREFIX} was cured of\nparalysis."),

    // Weather
    [STRINGID_ITISRAINING]                          = COMPOUND_STRING("It is raining."),
    [STRINGID_SUNLIGHTGOTBRIGHT]                    = COMPOUND_STRING("The sunlight turned harsh!"),
    [STRINGID_SUNLIGHTSTRONG]                       = COMPOUND_STRING("The sunlight is strong."), //not in gen 5+
    [STRINGID_SUNLIGHTFADED]                        = COMPOUND_STRING("The sunlight faded."),
    [STRINGID_STARTEDHAIL]                          = COMPOUND_STRING("It started to hail!"),
    [STRINGID_PKMNPELTEDBYHAIL]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is buffeted\nby the hail!"),
    [STRINGID_HAILCONTINUES]                        = COMPOUND_STRING("Hail continues to fall."), //not in gen 5+
    [STRINGID_HAILSTOPPED]                          = COMPOUND_STRING("The hail stopped."),
    [STRINGID_SANDSTORMBREWED]                      = COMPOUND_STRING("A sandstorm kicked up!"),
    [STRINGID_PKMNBUFFETEDBYSANDSTORM]              = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is buffeted\nby the sandstorm!"),
    [STRINGID_SANDSTORMRAGES]                       = COMPOUND_STRING("The sandstorm rages."), //not in gen 5+
    [STRINGID_SANDSTORMSUBSIDED]                    = COMPOUND_STRING("The sandstorm subsided."),
    [STRINGID_STARTEDTORAIN]                        = COMPOUND_STRING("It started to rain!"),
    [STRINGID_RAINCONTINUES]                        = COMPOUND_STRING("Rain continues to fall."), //not in gen 5+
    [STRINGID_RAINSTOPPED]                          = COMPOUND_STRING("The rain stopped."),
    [STRINGID_STARTEDSNOW]                          = COMPOUND_STRING("It started to snow!"),
    [STRINGID_SNOWCONTINUES]                        = COMPOUND_STRING("Snow continues to fall."), //not in gen 5+
    [STRINGID_SNOWSTOPPED]                          = COMPOUND_STRING("The snow stopped."),
    [STRINGID_ITISWINDY]                            = COMPOUND_STRING("A strong wind blows across\nthe battlefield!"),
    [STRINGID_MYSTERIOUSAIRCURRENT]                 = COMPOUND_STRING("The strong winds continue."),
    [STRINGID_STRONGWINDSDISSIPATED]                = COMPOUND_STRING("The strong winds\nhave dissipated!{PAUSE 64}"),
    [STRINGID_WEATHERWIND]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can act faster,\nthanks to the strong winds!"),

    // Stats
    [STRINGID_STATSWONTINCREASE2]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s stats \nwon't go any higher!"),
    [STRINGID_STATSWONTINCREASE]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_BUFF1}\nwon't go any higher!"),
    [STRINGID_STATSWONTDECREASE]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s {B_BUFF1}\nwon't go any lower!"),
    [STRINGID_PKMNCUTHPMAXEDATTACK]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} cut its own HP\nand maximized its Attack!"),
    [STRINGID_PKMNCOPIEDSTATCHANGES]                = COMPOUND_STRING("{B_SCR_NAME_PREFIX} copied\n{B_EFF_NAME_PREFIX_LOWERCASE}'s stat changes!"),
    [STRINGID_PKMNCUTSATTACKWITH]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s Attack\nfell!"),
    [STRINGID_PKMNPREVENTSSTATLOSSWITH]             = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s stats\nwere not lowered!"),
    [STRINGID_ATTACKERSSTATROSE]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_BUFF1}\n{B_BUFF2}"),
    [STRINGID_DEFENDERSSTATROSE]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s {B_BUFF1}\n{B_BUFF2}"),
    [STRINGID_ATTACKERSSTATFELL]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_BUFF1}\n{B_BUFF2}"),
    [STRINGID_DEFENDERSSTATFELL]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s {B_BUFF1}\n{B_BUFF2}"),
    [STRINGID_PKMNRAISEDSPEED]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s Speed\nrose!"),
    [STRINGID_STATCHANGESGONE]                      = COMPOUND_STRING("All stat changes were eliminated!"),
    [STRINGID_STATSWONTDECREASE2]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s stats won't\ngo any lower!"),
    [STRINGID_PKMNSWITCHEDSTATCHANGES]              = COMPOUND_STRING("{B_ATK_NAME_PREFIX} switched stat\nchanges with its target!"),
    [STRINGID_PKMNSWITCHEDATKSPATK]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} switched all\nchanges to its Attack and Sp. Atk\lwith the target!"),
    [STRINGID_PKMNSWITCHEDDEFSPDEF]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} switched all\nchanges to its Defense and Sp. Def\lwith the target!"),
    [STRINGID_SHAREDITSGUARD]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} shared its\nguard with the target!"),
    [STRINGID_SHAREDITSPOWER]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} shared its\npower with the target!"),
    [STRINGID_RESETSTARGETSSTATLEVELS]              = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s stat changes\nwere removed!"),
    [STRINGID_TARGETSTATWONTGOHIGHER]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s {B_BUFF1}\nwon't go any higher!"),

    // Health Restore
    [STRINGID_PKMNREGAINEDHEALTH]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s HP was restored."),
    [STRINGID_PKMNHPFULL]                           = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s\nHP is full!"),
    [STRINGID_PKMNSITEMRESTOREDHEALTH]              = COMPOUND_STRING("{B_SCR_NAME_PREFIX} restored its\nhealth using its {B_LAST_ITEM}!"),
    [STRINGID_PKMNSITEMRESTOREDHPALITTLE]           = COMPOUND_STRING("{B_SCR_NAME_PREFIX} restored\na little HP using its {B_LAST_ITEM}!"),

    // Confusion
    [STRINGID_PKMNPREVENTSCONFUSIONWITH]            = COMPOUND_STRING("{B_DEF_NAME_PREFIX} doesn't\nbecome confused!"),
    [STRINGID_PKMNISCONFUSED]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is\nconfused!"),
    [STRINGID_PKMNHEALEDCONFUSION]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} snapped\nout of confusion!"),
    [STRINGID_PKMNWASCONFUSED]                      = COMPOUND_STRING("{B_EFF_NAME_PREFIX} became\nconfused!"),
    [STRINGID_PKMNALREADYCONFUSED]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is\nalready confused!"),
    [STRINGID_PKMNFATIGUECONFUSION]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} became\nconfused due to fatigue!"),
    [STRINGID_ITHURTCONFUSION]                      = COMPOUND_STRING("It hurt itself in its confusion!"),
    [STRINGID_PKMNSITEMSNAPPEDOUT]                  = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s\n{B_LAST_ITEM} snapped it out of\lits confusion!"),

    // Common Strings
    [STRINGID_STATROSE]                             = COMPOUND_STRING("rose!"),
    [STRINGID_STATROSE2]                            = COMPOUND_STRING("rose "),
    [STRINGID_STATSHARPLY]                          = COMPOUND_STRING("sharply!"),
    [STRINGID_DRASTICALLY]                          = COMPOUND_STRING("drastically!"),
    [STRINGID_STATFELL]                             = COMPOUND_STRING("fell!"),
    [STRINGID_STATFELL2]                            = COMPOUND_STRING("fell "),
    [STRINGID_STATHARSHLY]                          = COMPOUND_STRING("harshly!"),
    [STRINGID_SEVERELY]                             = COMPOUND_STRING("severely!"),
    [STRINGID_STATROSE3]                            = COMPOUND_STRING("raised"),
    [STRINGID_STATFELL3]                            = COMPOUND_STRING("lowered"),
    [STRINGID_EMPTYSTRING]                          = COMPOUND_STRING(""),
    [STRINGID_ATTACKMISSED]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s attack missed!"),
    [STRINGID_ATTACKERFAINTED]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX}\nfainted!\p"),
    [STRINGID_TARGETFAINTED]                        = COMPOUND_STRING("{B_DEF_NAME_PREFIX}\nfainted!\p"),
    [STRINGID_HITXTIMES]                            = COMPOUND_STRING("Hit {B_BUFF1} time(s)!"),
    [STRINGID_PKMNFLINCHED]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} flinched!"),
    [STRINGID_PKMNHITWITHRECOIL]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is damaged\nby recoil!"),
    [STRINGID_CRITICALHIT]                          = COMPOUND_STRING("A critical hit!"),
    [STRINGID_ONEHITKO]                             = COMPOUND_STRING("It's a one-hit KO!"),
    [STRINGID_NOTVERYEFFECTIVE]                     = COMPOUND_STRING("It's not very effective…"),
    [STRINGID_SUPEREFFECTIVE]                       = COMPOUND_STRING("It's super effective!"),
    [STRINGID_BUTNOTHINGHAPPENED]                   = COMPOUND_STRING("But nothing happened!"),
    [STRINGID_BUTITFAILED]                          = COMPOUND_STRING("But it failed!"),
    [STRINGID_BUTNOEFFECT]                          = COMPOUND_STRING("But it had no effect!"),
    [STRINGID_TRAINER1USEDITEM]                     = COMPOUND_STRING("{B_ATK_TRAINER_NAME_WITH_CLASS}\nused {B_LAST_ITEM}!"),
    [STRINGID_BOXISFULL]                            = COMPOUND_STRING("The Box is full!\nYou can't catch any more!\p"),
    [STRINGID_PKMNAVOIDEDATTACK]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX} avoided\nthe attack!"),
    [STRINGID_USENEXTPKMN]                          = COMPOUND_STRING("Use next Pokémon?"),
    [STRINGID_PLAYERDEFEATEDTRAINER1]               = COMPOUND_STRING("Player defeated\n{B_TRAINER1_NAME_WITH_CLASS}!\p"),
    [STRINGID_HMMOVESCANTBEFORGOTTEN]               = COMPOUND_STRING("HM moves can't be\nforgotten now.\p"),
    [STRINGID_PLAYERUSEDITEM]                       = COMPOUND_STRING("{B_PLAYER_NAME} used the\n{B_LAST_ITEM}!"),
    [STRINGID_ENEMYABOUTTOSWITCHPKMN]               = COMPOUND_STRING("{B_TRAINER1_NAME_WITH_CLASS} is\nabout to send in {B_BUFF2}.\lWill you switch your Pokémon?"),
    [STRINGID_ATTACKERCANTESCAPE]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can't escape!"),
    [STRINGID_HAZARDSTR_1]                          = COMPOUND_STRING("around your team's feet!"),
    [STRINGID_HAZARDSTR_2]                          = COMPOUND_STRING("around the feet of the foe's team!"),
    [STRINGID_HAZARDSTR_3]                          = COMPOUND_STRING("around the foe's team's feet!"),
    [STRINGID_HAZARDSTR_4]                          = COMPOUND_STRING("around your team!"),
    [STRINGID_HAZARDSTR_5]                          = COMPOUND_STRING("around your foe's team!"),
    [STRINGID_HAZARDSTR_6]                          = COMPOUND_STRING("from around your team!"),
    [STRINGID_HAZARDSTR_7]                          = COMPOUND_STRING("from around your foe's team!"),
    [STRINGID_HAZARDSTR_8]                          = COMPOUND_STRING("all around your team's feet!"),
    [STRINGID_HAZARDSTR_9]                          = COMPOUND_STRING("all around the feet of the foe's team!"),

    // Substitute
    [STRINGID_PKMNMADESUBSTITUTE]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} put in\na substitute!"),
    [STRINGID_PKMNHASSUBSTITUTE]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} already\nhas a substitute!"),
    [STRINGID_SUBSTITUTEDAMAGED]                    = COMPOUND_STRING("The substitute took damage\nfor {B_DEF_NAME_PREFIX_LOWERCASE}!\p"),
    [STRINGID_PKMNSUBSTITUTEFADED]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s\nsubstitute faded!\p"),
    [STRINGID_TOOWEAKFORSUBSTITUTE]                 = COMPOUND_STRING("It was too weak to make\na substitute!"),

    // Entry Hazards
    [STRINGID_POISONSPIKESSCATTERED]                = COMPOUND_STRING("Poison spikes were scattered all {B_HAZARD_FEET}"),
    [STRINGID_TOXICSPIKESDISAPPEARED]               = COMPOUND_STRING("The poison spikes disappeared from {B_HAZARD_FEET}"),
    [STRINGID_TOXICSPIKESPOISONED]                  = COMPOUND_STRING("{B_SCR_NAME_PREFIX} was poisoned!"),
    [STRINGID_TOXICSPIKESABSORBED]                  = COMPOUND_STRING("The poison spikes disappeared from around {B_EFF_TEAM4} team's feet!"),
    [STRINGID_SPIKESSCATTERED]                      = COMPOUND_STRING("Spikes were scattered all {B_HAZARD_FEET}"),
    [STRINGID_SPIKESDISAPPEARED]                    = COMPOUND_STRING("The spikes disappeared from {B_HAZARD_FEET}"),
    [STRINGID_PKMNHURTBYSPIKES]                     = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is hurt\nby spikes!"),
    [STRINGID_POINTEDSTONESFLOAT]                   = COMPOUND_STRING("Pointed stones float in the air {B_HAZARD_FEET}"),
    [STRINGID_STEALTHROCKDISAPPEARED]               = COMPOUND_STRING("The pointed stones disappeared {B_HAZARD_FEET}"),
    [STRINGID_STEALTHROCKDMG]                       = COMPOUND_STRING("Pointed stones dug into\n{B_SCR_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_STICKYWEBUSED]                        = COMPOUND_STRING("A sticky web spreads out {B_HAZARD_FEET}"),
    [STRINGID_BLEWAWAYSTICKYWEB]                    = COMPOUND_STRING("The sticky web disappeared from {B_HAZARD_FEET}"),
    [STRINGID_STICKYWEBSWITCHIN]                    = COMPOUND_STRING("{B_SCR_NAME_PREFIX} was\ncaught in a Sticky Web!"),

    // Misc. Team Strings
    [STRINGID_PKMNRAISEDSPDEF]                      = COMPOUND_STRING("{B_CURRENT_MOVE} raised {B_ATK_TEAM2} team's Special Defense!"),
    [STRINGID_PKMNRAISEDDEF]                        = COMPOUND_STRING("{B_CURRENT_MOVE} raised {B_ATK_TEAM2} team's Defense!"),
    [STRINGID_TAILWINDENDS]                         = COMPOUND_STRING("{B_ATK_TEAM3} team's Tailwind\npetered out!"),
    [STRINGID_LUCKYCHANTENDS]                       = COMPOUND_STRING("{B_ATK_TEAM1} team's Lucky Chant\nwore off!"),
    [STRINGID_PKMNSHROUDEDINMIST]                   = COMPOUND_STRING("{B_ATK_TEAM3} team became\nshrouded in mist!"),
    [STRINGID_PROTECTEDTEAM]                        = COMPOUND_STRING("{B_CURRENT_MOVE} protected\n{B_ATK_TEAM4} team!"),
    [STRINGID_ARAINBOWAPPEAREDONSIDE]               = COMPOUND_STRING("A rainbow appeared in the sky\non {B_ATK_TEAM4} team's side!"),
    [STRINGID_THERAINBOWDISAPPEARED]                = COMPOUND_STRING("The rainbow on {B_ATK_TEAM4}\nside disappeared!"),
    [STRINGID_THESEAOFFIREDISAPPEARED]              = COMPOUND_STRING("The sea of fire around {B_ATK_TEAM4}\nteam disappeared!"),
    [STRINGID_THESWAMPDISAPPEARED]                  = COMPOUND_STRING("The swamp around {B_ATK_TEAM4}\nteam disappeared!"),
    [STRINGID_TAILWINDBLEW]                         = COMPOUND_STRING("The tailwind blew from\nbehind {B_ATK_TEAM4} team!"),
    [STRINGID_LUCKYCHANTSHIELDED]                   = COMPOUND_STRING("The Lucky Chant shielded {B_ATK_TEAM2} team from critical hits!"),
    [STRINGID_UNNERVEENTERS]                        = COMPOUND_STRING("{B_EFF_TEAM3} team is too nervous\nto eat Berries!"),
    [STRINGID_SEAOFFIREENVELOPEDSIDE]               = COMPOUND_STRING("A sea of fire enveloped\n{B_DEF_TEAM4} team!"),
    [STRINGID_SWAMPENVELOPEDSIDE]                   = COMPOUND_STRING("A swamp enveloped\n{B_DEF_TEAM4} team!"),

    // Custom
    [STRINGID_TERRAINBECOMESROCKY]                  = COMPOUND_STRING("Spiky rocks cover\nthe battlefield!"),
    [STRINGID_ISCOVEREDWITHROCKS]                   = COMPOUND_STRING("The battlefield is covered with\nspiky rocks!"),
    [STRINGID_LAIDLOW]                              = COMPOUND_STRING("{B_PLAYER_NAME} laid low to calm\n{B_OPPONENT_MON1_NAME}!"),
    [STRINGID_SLEEPBERRY]                           = COMPOUND_STRING("The Roste Berry is making\n{B_SCR_NAME_PREFIX_LOWERCASE} drowsy!"),
    [STRINGID_TARGETISHURTBYMEGAEXHAUSTION]         = COMPOUND_STRING("The strain caused by Mega Evolution is\ndraining {B_DEF_NAME_PREFIX_LOWERCASE}'s stamina!"),
    [STRINGID_FORESTCURSE]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} laid the forest's\ncurse on {B_DEF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_JASMINE_NOTGIVINGUPYET]               = COMPOUND_STRING("We're not giving up just yet!{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}"),
    [STRINGID_JASMINE_AMPHY]                        = COMPOUND_STRING("Amphy?!\pYou're not supposed to\ncome out of your ball!\p… {PAUSE 48}… {PAUSE 48}…\pI'm sorry, but Amphy seems too\npersistent to back down now…{PAUSE_UNTIL_PRESS}"),
    [STRINGID_HIVE_LEADER_GOT_HIT]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} has been afflicted with an infestation by {B_DEF_NAME_PREFIX_LOWERCASE}"),
    [STRINGID_TARGETTOUGHEDITOUT]                   = COMPOUND_STRING("{B_TRAINER1_NAME}: I think I've seen enough.\pLet's stop here before anyone\ngets too seriously hurt.{PAUSE_UNTIL_PRESS}"),

    // Misc.
    [STRINGID_PKMNPROTECTEDITSELF]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX}\nprotected itself!"),
    [STRINGID_ITDOESNTAFFECT]                       = COMPOUND_STRING("It doesn't affect\n{B_DEF_NAME_PREFIX_LOWERCASE}…"),
    [STRINGID_PREVENTSESCAPE]                       = COMPOUND_STRING("{B_SCR_NAME_PREFIX} prevents\nescape with {B_SCR_ABILITY}!\p"),
    [STRINGID_PKMNENERGYDRAINED]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX} had its\nenergy drained!"),
    [STRINGID_PKMNFELLINLOVE]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX}\nfell in love!"),
    [STRINGID_PKMNINLOVE]                           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is in love\nwith {B_SCR_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNIMMOBILIZEDBYLOVE]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is\nimmobilized by love!"),
    [STRINGID_DESTINYKNOTACTIVATES]                 = COMPOUND_STRING("{B_SCR_NAME_PREFIX}\nfell in love from the {B_LAST_ITEM}!"),
    [STRINGID_PKMNCHANGEDTYPE]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} transformed\ninto the {B_BUFF1} type!"),
    [STRINGID_PKMNWHIPPEDWHIRLWIND]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} whipped\nup a whirlwind!"),
    [STRINGID_PKMNFLEWHIGH]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} flew\nup high!"),
    [STRINGID_PKMNDUGHOLE]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} burrowed\nits way under the ground!"),
    [STRINGID_PKMNTRAPPEDINVORTEX]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} became trapped\nin the vortex!"),
    [STRINGID_PKMNMOVEWASDISABLED]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s\n{B_BUFF1} was disabled!"),
    [STRINGID_PKMNMOVEISDISABLED]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s\n{B_CURRENT_MOVE} is disabled!\p"),
    [STRINGID_PKMNGOTENCORE]                        = COMPOUND_STRING("{B_DEF_NAME_PREFIX} received\nan encore!"),
    [STRINGID_PKMNTOOKAIM]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} took aim\nat {B_DEF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNSKETCHEDMOVE]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} sketched\n{B_BUFF1}!"),
    [STRINGID_PKMNTRYINGTOTAKEFOE]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is trying\nto take its foe with it!"),
    [STRINGID_PKMNTOOKFOE]                          = COMPOUND_STRING("{B_DEF_NAME_PREFIX} took its attacker\ndown with it!"),
    [STRINGID_PKMNSTORINGENERGY]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is storing\nenergy!"),
    [STRINGID_PKMNUNLEASHEDENERGY]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} unleashed\nenergy!"),
    [STRINGID_PKMNFELLINTONIGHTMARE]                = COMPOUND_STRING("{B_DEF_NAME_PREFIX} began having\na nightmare!"),
    [STRINGID_PKMNLOCKEDINNIGHTMARE]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is locked\nin a nightmare!"),
    [STRINGID_PKMNLAIDCURSE]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} cut its own HP and\nlaid a curse on {B_DEF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNAFFLICTEDBYCURSE]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is afflicted\nby the curse!"),
    [STRINGID_PKMNRAGEBUILDING]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s rage\nis building!"),
    [STRINGID_PKMNIDENTIFIED]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX_LOWERCASE} was identified!"),
    [STRINGID_PKMNPERISHCOUNTFELL]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s perish count\nfell to {B_BUFF1}!"),
    [STRINGID_PKMNBRACEDITSELF]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} braced\nitself!"),
    [STRINGID_PKMNENDUREDHIT]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX} endured\nthe hit!"),
    [STRINGID_MAGNITUDESTRENGTH]                    = COMPOUND_STRING("Magnitude {B_BUFF1}!"),
    [STRINGID_PKMNGETTINGPUMPED]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is getting\npumped!"),
    [STRINGID_PKMNPROTECTEDITSELF2]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} protected\nitself!"),
    [STRINGID_PKMNSEEDED]                           = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was seeded!"),
    [STRINGID_PKMNSAPPEDBYLEECHSEED]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s health is\nsapped by Leech Seed!"),
    [STRINGID_PKMNMUSTRECHARGE]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} must\nrecharge!"),
    [STRINGID_PKMNFORESAWATTACK]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} foresaw\nan attack!"),
    [STRINGID_PKMNCENTERATTENTION]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} became\nthe center of attention!"),
    [STRINGID_NATUREPOWERTURNEDINTO]                = COMPOUND_STRING("Nature Power turned into\n{B_CURRENT_MOVE}!"),
    [STRINGID_PKMNHASNOMOVESLEFT]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} has no\nmoves left!\p"),
    [STRINGID_PKMNSUBJECTEDTOTORMENT]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was subjected\nto torment!"),
    [STRINGID_PKMNCANTUSEMOVETORMENT]               = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can't use the same move twice in a row due to the Torment!\p"),
    [STRINGID_BADDREAMSDMG]                         = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is tormented!"),
    [STRINGID_PKMNTIGHTENINGFOCUS]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is tightening\nits focus!"),
    [STRINGID_PKMNFELLFORTAUNT]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} fell for\nthe taunt!"),
    [STRINGID_PKMNCANTUSEMOVETAUNT]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can't use\n{B_CURRENT_MOVE} after the taunt!\p"),
    [STRINGID_PKMNREADYTOHELP]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is ready to\nhelp {B_DEF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNSWITCHEDITEMS]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} switched\nitems with its target!"),
    [STRINGID_PKMNCOPIEDFOE]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} copied {B_DEF_NAME_PREFIX_LOWERCASE}'s {B_DEF_ABILITY}!"),
    [STRINGID_PKMNPLANTEDROOTS]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} planted\nits roots!"),
    [STRINGID_PKMNABSORBEDNUTRIENTS]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} absorbed\nnutrients with its roots!"),
    [STRINGID_PKMNANCHOREDITSELF]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX} anchored\nitself with its roots!"),
    [STRINGID_PKMNWASMADEDROWSY]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX} grew drowsy!"),
    [STRINGID_PKMNKNOCKEDOFF]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} knocked off {B_DEF_NAME_PREFIX_LOWERCASE}'s {B_LAST_ITEM}!"),
    [STRINGID_PKMNCANTUSEMOVESEALED]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can't use the\nsealed {B_CURRENT_MOVE}!\p"),
    [STRINGID_PKMNWANTSGRUDGE]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} wants its target\nto bear a grudge!"),
    [STRINGID_PKMNLOSTPPGRUDGE]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_BUFF1} lost all its PP due to the grudge!"),
    [STRINGID_PKMNSEALEDOPPONENTMOVE]               = COMPOUND_STRING("{B_ATK_NAME_PREFIX} sealed the\nopponent's move(s)!"),
    [STRINGID_PKMNWAITSFORTARGET]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} waits for a target\nto make a move!"),
    [STRINGID_PKMNSNATCHEDMOVE]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} snatched\n{B_SCR_NAME_PREFIX}'s move!"),
    [STRINGID_COINSSCATTERED]                       = COMPOUND_STRING("Coins were scattered everywhere!"),
    [STRINGID_BELLCHIMED]                           = COMPOUND_STRING("A bell chimed!"),
    [STRINGID_BUTNOPPLEFT]                          = COMPOUND_STRING("But there was no PP left\nfor the move!"),
    [STRINGID_PKMNIGNORESASLEEP]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} ignored\norders while asleep!"),
    [STRINGID_PKMNIGNOREDORDERS]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} ignored orders!"),
    [STRINGID_PKMNBEGANTONAP]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} began to nap!"),
    [STRINGID_PKMNLOAFING]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is\nloafing around!"),
    [STRINGID_PKMNWONTOBEY]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} won't\nobey!"),
    [STRINGID_PKMNTURNEDAWAY]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} turned away!"),
    [STRINGID_PKMNPRETENDNOTNOTICE]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} pretended\nnot to notice!"),
    [STRINGID_CREPTCLOSER]                          = COMPOUND_STRING("{B_PLAYER_NAME} crept closer to\n{B_OPPONENT_MON1_NAME}!"),
    [STRINGID_CANTGETCLOSER]                        = COMPOUND_STRING("{B_PLAYER_NAME} can't get any closer!"),
    [STRINGID_PKMNWATCHINGCAREFULLY]                = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} is watching\ncarefully!"),
    [STRINGID_PKMNCURIOUSABOUTX]                    = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} is curious about\nthe {B_BUFF1}!"),
    [STRINGID_PKMNENTHRALLEDBYX]                    = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} is enthralled by\nthe {B_BUFF1}!"),
    [STRINGID_PKMNIGNOREDX]                         = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} completely ignored\nthe {B_BUFF1}!"),
    [STRINGID_THREWPOKEBLOCKATPKMN]                 = COMPOUND_STRING("{B_PLAYER_NAME} threw a {POKEBLOCK}\nat the {B_OPPONENT_MON1_NAME}!"),
    [STRINGID_OUTOFSAFARIBALLS]                     = COMPOUND_STRING("{PLAY_SE SE_DING_DONG}Announcer: You're out of\nSafari Balls! Game over!\p"),
    [STRINGID_ITEMALLOWSONLYYMOVE]                  = COMPOUND_STRING("{B_LAST_ITEM} allows the\nuse of only {B_CURRENT_MOVE}!\p"),
    [STRINGID_PKMNHUNGONWITHX]                      = COMPOUND_STRING("{B_DEF_NAME_PREFIX} hung on\nusing its {B_LAST_ITEM}!"),
    [STRINGID_ITSUCKEDLIQUIDOOZE]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} sucked up the\nliquid ooze!"),
    [STRINGID_ELECTRICITYWEAKENED]                  = COMPOUND_STRING("Electricity's power was weakened!"),
    [STRINGID_FIREWEAKENED]                         = COMPOUND_STRING("Fire's power was weakened!"),
    [STRINGID_PKMNHIDUNDERWATER]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} hid\nunderwater!"),
    [STRINGID_PKMNSPRANGUP]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} sprang up!"),
    [STRINGID_XFOUNDONEY]                           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} found\none {B_LAST_ITEM}!"),
    [STRINGID_SOOTHINGAROMA]                        = COMPOUND_STRING("A soothing aroma wafted\nthrough the area!"),
    [STRINGID_PKMNUSEDXTOGETPUMPED]                 = COMPOUND_STRING("{B_SCR_NAME_PREFIX} used\nthe {B_LAST_ITEM} to get pumped!"),
    [STRINGID_PKMNCHOSEXASDESTINY]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} chose\n{B_CURRENT_MOVE} as its destiny!"),
    [STRINGID_PKMNLOSTFOCUS]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} lost its\nfocus and couldn't move!"),
    [STRINGID_PKMNWASDRAGGEDOUT]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was\ndragged out!\p"),
    [STRINGID_FAINTINTHREE]                         = COMPOUND_STRING("All Pokémon hearing the song\nwill faint in three turns!"),
    [STRINGID_PKMNSABILITYSUPPRESSED]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s Ability\nwas suppressed!"),
    [STRINGID_GRAVITYENDS]                          = COMPOUND_STRING("Gravity returned to normal!"),
    [STRINGID_MOLDBREAKERENTERS]                    = COMPOUND_STRING("{B_SCR_NAME_PREFIX} breaks the mold!"),
    [STRINGID_TRICKROOMENDS]                        = COMPOUND_STRING("The twisted dimensions returned\nto normal!"),
    [STRINGID_WONDERROOMENDS]                       = COMPOUND_STRING("Wonder Room wore off, and the Defense\nand Sp. Def stats returned to normal!"),
    [STRINGID_MAGICROOMENDS]                        = COMPOUND_STRING("Magic Room wore off, and held items'\neffects returned to normal!"),
    [STRINGID_TERAVOLTENTERS]                       = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is radiating\na bursting aura!"),
    [STRINGID_EMBARGOENDS]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can use\nitems again!"),
    [STRINGID_ELECTROMAGNETISM]                     = COMPOUND_STRING("electromagnetism"),
    [STRINGID_TURBOBLAZEENTERS]                     = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is radiating\na blazing aura!"),
    [STRINGID_TELEKINESISENDS]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} was freed\nfrom the telekinesis!"),
    [STRINGID_PKMNACQUIREDSIMPLE]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s Ability\nbecame Simple!"),
    [STRINGID_KINDOFFER]                            = COMPOUND_STRING("{B_DEF_NAME_PREFIX}\ntook the kind offer!"),
    [STRINGID_SLOWSTARTEND]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} finally got\nits act together!"),
    [STRINGID_POSTPONETARGETMOVE]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s move\nwas postponed!"),
    [STRINGID_FRISKACTIVATES]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} frisked its target and found one {B_LAST_ITEM}!"),
    [STRINGID_PKMNSURROUNDEDWITHVEILOFWATER]        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} surrounded\nitself with a veil of water!"),
    [STRINGID_PKMNLEVITATEDONELECTROMAGNETISM]      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} levitated\nwith electromagnetism!"),
    [STRINGID_CLOAKEDINMYSTICALMOONLIGHT]           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} became cloaked\nin mystical moonlight!"),
    [STRINGID_TRAPPEDBYSWIRLINGMAGMA]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} became\ntrapped by swirling magma!"),
    [STRINGID_VANISHEDINSTANTLY]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} vanished\ninstantly!"),
    [STRINGID_BECAMENIMBLE]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} became nimble!"),
    [STRINGID_HURLEDINTOTHEAIR]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was hurled\ninto the air!"),
    [STRINGID_FELLSTRAIGHTDOWN]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} fell\nstraight down!"),
    [STRINGID_PKMNCRASHED]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} kept going\nand crashed!"),
    [STRINGID_PKMNTRAPPEDBYSANDTOMB]                = COMPOUND_STRING("{B_DEF_NAME_PREFIX} became trapped\nby Sand Tomb!"),
    [STRINGID_QUESTIONFORFEITMATCH]                 = COMPOUND_STRING("Would you like to forfeit the match\nand quit now?"),
    [STRINGID_FORFEITEDMATCH]                       = COMPOUND_STRING("{B_PLAYER_NAME} forfeited the match!"),
    [STRINGID_GRAVITYINTENSIFIED]                   = COMPOUND_STRING("Gravity intensified!"),
    [STRINGID_TARGETIDENTIFIED]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was\nidentified!"),
    [STRINGID_PKMNSTOLEANDATEITEM]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} stole and ate\nits target's {B_LAST_ITEM}!"),
    [STRINGID_PKMNWENTBACK]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} went back\nto {B_ATK_TRAINER_NAME}!"),
    [STRINGID_PKMNCANTUSEITEMSANYMORE]              = COMPOUND_STRING("{B_DEF_NAME_PREFIX} can't use\nitems anymore!"),
    [STRINGID_PKMNFLUNG]                            = COMPOUND_STRING("{B_ATK_NAME_PREFIX} flung\nits {B_LAST_ITEM}!"),
    [STRINGID_PKMNPREVENTEDFROMHEALING]             = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was prevented\nfrom healing!"),
    [STRINGID_PKMNTWISTEDDIMENSIONS]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} twisted\nthe dimensions!"),
    [STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON]         = COMPOUND_STRING("It created a bizarre area in which the\nDefense and Sp. Def stats are swapped!"),
    [STRINGID_HELDITEMSLOSEEFFECTS]                 = COMPOUND_STRING("It created a bizarre area in which\nheld items lose their effects!"),
    [STRINGID_PKMNSITEMNORMALIZEDSTATUS]            = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_LAST_ITEM}\nnormalized its status!"),
    [STRINGID_PKMNSITEMRESTOREDSTATUS]              = COMPOUND_STRING("{B_SCR_NAME_PREFIX} restored its\nstatus using its {B_LAST_ITEM}!"),
    [STRINGID_PKMNSTATUSNORMAL]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s status\nreturned to normal!"),
    [STRINGID_PKMNSXWOREOFF]                        = COMPOUND_STRING("{B_ATK_TEAM3} team is no longer protected by {B_BUFF1}!"),
    [STRINGID_PKMNSMISTWOREOFF]                     = COMPOUND_STRING("{B_ATK_TEAM3} team is no longer protected by mist!"),
    [STRINGID_PKMNSSCREENWOREOFF]                   = COMPOUND_STRING("{B_ATK_TEAM1} team's {B_BUFF1}\nwore off!"),
    [STRINGID_PKMNSSCREENWOREOFF2]                  = COMPOUND_STRING("{B_DEF_TEAM1} team's {B_BUFF1}\nwore off!"),
    [STRINGID_PKMNCOVEREDBYVEIL]                    = COMPOUND_STRING("{B_ATK_TEAM3} team became cloaked in a mystical veil!"),
    [STRINGID_PKMNUSEDSAFEGUARD]                    = COMPOUND_STRING("{B_DEF_TEAM3} team is protected\nby Safeguard!"),
    [STRINGID_PKMNSAFEGUARDEXPIRED]                 = COMPOUND_STRING("{B_ATK_TEAM3} team is no longer\nprotected by Safeguard!"),
    [STRINGID_PKMNPROTECTEDBYMIST]                  = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is protected\nby mist!"),
    [STRINGID_BLOCKEDBYSLEEPCLAUSE]                 = COMPOUND_STRING("Sleep Clause kept {B_DEF_NAME_PREFIX_LOWERCASE} awake!"),
    [STRINGID_SUPEREFFECTIVETWOFOES]                = COMPOUND_STRING("It's super effective!"),
    [STRINGID_NOTVERYEFFECTIVETWOFOES]              = COMPOUND_STRING("It's not very effective…"),
    [STRINGID_SENDCAUGHTMONPARTYORBOX]              = COMPOUND_STRING("Add {B_DEF_NAME} to your party?"),
    [STRINGID_PKMNSENTTOPCAFTERCATCH]               = COMPOUND_STRING("{STR_VAR_2} was sent to\n{B_PC_CREATOR_NAME} PC.\pIt was placed in\nbox {STR_VAR_1}."),
    [STRINGID_QUESTIONFORFEITBATTLE]                = COMPOUND_STRING("Would you like to give up on this battle and quit now? Quitting the battle is the same as losing the battle."),
    [STRINGID_POWERCONSTRUCTPRESENCEOFMANY]         = COMPOUND_STRING("You sense the presence of many!"),
    [STRINGID_POWERCONSTRUCTTRANSFORM]              = COMPOUND_STRING("{B_ATK_NAME_PREFIX} transformed into its\nComplete Forme!"),
    [STRINGID_TOXICSPIKESBADLYPOISONED]             = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is badly\npoisoned!"),
    [STRINGID_ENIGMABERRY]                          = COMPOUND_STRING("Enigma Berry"),
    [STRINGID_BERRYSUFFIX]                          = COMPOUND_STRING(" Berry"),
    [STRINGID_DEFEATEDOPPONENTBYREFEREE]            = COMPOUND_STRING("{B_PLAYER_MON1_NAME} defeated the opponent\n{B_OPPONENT_MON1_NAME} in a referee's decision!"),
    [STRINGID_LOSTTOOPPONENTBYREFEREE]              = COMPOUND_STRING("{B_PLAYER_MON1_NAME} lost to the opponent\n{B_OPPONENT_MON1_NAME} in a referee's decision!"),
    [STRINGID_TIEDOPPONENTBYREFEREE]                = COMPOUND_STRING("{B_PLAYER_MON1_NAME} tied the opponent\n{B_OPPONENT_MON1_NAME} in a referee's decision!"),
    [STRINGID_TWOENEMIESDEFEATED]                   = COMPOUND_STRING("Player defeated {B_TRAINER1_NAME_WITH_CLASS}\nand {B_TRAINER2_NAME_WITH_CLASS}!"),
    [STRINGID_GRAVITYGROUNDING]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} couldn't stay airborne because of gravity!"),
    [STRINGID_MISTYTERRAINPREVENTS]                 = COMPOUND_STRING("{B_DEF_NAME_PREFIX} surrounds itself\nwith a protective mist!"),
    [STRINGID_GRASSYTERRAINHEALS]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is healed\nby the grassy terrain!"),
    [STRINGID_ROCKYTERRAINDAMAGES]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is hurt\nby the rocky terrain!"),
    [STRINGID_ELECTRICTERRAINPREVENTS]              = COMPOUND_STRING("{B_DEF_NAME_PREFIX} surrounds itself\nwith electrified terrain!"),
    [STRINGID_PSYCHICTERRAINPREVENTS]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} surrounds itself\nwith psychic terrain!"),
    [STRINGID_INCINERATEBURN]                       = COMPOUND_STRING("{B_EFF_NAME_PREFIX}'s {B_LAST_ITEM}\nwas burnt up!"),
    [STRINGID_BUGBITE]                              = COMPOUND_STRING("{B_ATK_NAME_PREFIX} stole and\nate its target's {B_LAST_ITEM}!"),
    [STRINGID_ILLUSIONWOREOFF]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s\nillusion wore off!"),
    [STRINGID_AIRLOCKACTIVATES]                     = COMPOUND_STRING("The effects of weather\ndisappeared."),
    [STRINGID_PRESSUREENTERS]                       = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is exerting its\npressure!"),
    [STRINGID_PKMNREVERTEDTOPRIMAL]                 = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s Primal Reversion! It reverted to its primal form!"),
    [STRINGID_BUTHOOPACANTUSEIT]                    = COMPOUND_STRING("But Hoopa can't use it\nthe way it is now!"),
    [STRINGID_PKMNHURTBYVINES]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is hurt by G-Max Vine Lash's ferocious beating!"),
    [STRINGID_PKMNHURTBYVORTEX]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is hurt by G-Max Cannonade's vortex!"),
    [STRINGID_PKMNBURNINGUP]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is burning up within G-Max Wildfire's flames!"),
    [STRINGID_PKMNHURTBYROCKSTHROWN]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is hurt by rocks thrown out by G-Max Volcalith!"),
    [STRINGID_THETWOMOVESBECOMEONE]                 = COMPOUND_STRING("The two moves are joined!\nIt's a combined move!{PAUSE 16}"),
    [STRINGID_WAITINGFORPARTNERSMOVE]               = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is waiting\nfor {B_ATK_PARTNER_NAME}'s move…{PAUSE 16}"),
    [STRINGID_HURTBYTHESEAOFFIRE]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is hurt\nby the sea of fire!"),
    [STRINGID_HOSPITALITYRESTORATION]               = COMPOUND_STRING("{B_ATK_PARTNER_NAME} drank down all the\nmatcha that {B_ATK_NAME_PREFIX_LOWERCASE} made!"),
    [STRINGID_PKMNMADESHELLGLEAM]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX} made its shell gleam! It's distorting type matchups!"),
    [STRINGID_PKMNWRAPPEDBY]                        = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was wrapped\nby {B_ATK_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNFREEDFROM]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} was freed\nfrom {B_BUFF1}!"),
    [STRINGID_ITEMSCANTBEUSEDNOW]                   = COMPOUND_STRING("Items can't be used now.{PAUSE 64}"),
    [STRINGID_PKMNCANNOTUSEX]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX}\ncannot use {B_CURRENT_MOVE}!"),
    [STRINGID_TARGETCHANGEDTYPE]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX} transformed\ninto the {B_BUFF1} type!"),
    [STRINGID_PKMNRAISEDFIREPOWERWITH]              = COMPOUND_STRING("The power of {B_DEF_NAME_PREFIX}'s\nFire-type moves rose!"),
    [STRINGID_PKMNANCHORSITSELFWITH]                = COMPOUND_STRING("{B_DEF_NAME_PREFIX} anchors itself!"),
    [STRINGID_NOPPLEFT]                             = COMPOUND_STRING("There's no PP left for\nthis move!\p"),
    [STRINGID_PKMNSXBLOCKSY2]                       = COMPOUND_STRING("It doesn't affect\n{B_SCR_NAME_PREFIX_LOWERCASE}…"),
    [STRINGID_PKMNSXPREVENTSYLOSS]                  = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_BUFF1}\nwas not lowered!"),
    [STRINGID_USINGITEMSTATOFPKMNROSE]              = COMPOUND_STRING("The {B_LAST_ITEM} {B_BUFF3}\n{B_SCR_NAME_PREFIX_LOWERCASE}'s {B_BUFF1}!"),
    [STRINGID_PKMNSXINFATUATEDY]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX}\nfell in love!"),
    [STRINGID_PKMNSXMADEYINEFFECTIVE]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s item\ncannot be stolen!"),
    [STRINGID_PKMNSXMADEYINEFFECTIVE2]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s item\ncannot be corroded!"),
    [STRINGID_PKMNSXTOOKATTACK]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX}\ntook the attack!"),
    [STRINGID_PKMNSWILLPERISHIN3TURNS]              = COMPOUND_STRING("Both Pokémon will perish\nin three turns!"),
    [STRINGID_AVOIDEDDAMAGE]                        = COMPOUND_STRING("{B_DEF_NAME_PREFIX} avoids attacks\nby its ally Pokémon!"),
    [STRINGID_PKMNSTOCKPILED]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} stockpiled {B_BUFF1}!"),
    [STRINGID_PLAYERPICKEDUPMONEY]                  = COMPOUND_STRING("{B_PLAYER_NAME} picked up\n¥{B_BUFF1}!\p"),
    [STRINGID_PKMNUNAFFECTED]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is\nunaffected!"),
    [STRINGID_PKMNTRANSFORMEDINTO]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} transformed\ninto {B_BUFF1}!"),
    [STRINGID_PKMNTRANSFORMED]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} transformed!"),
    [STRINGID_PKMNSTOLEITEM]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} stole {B_DEF_NAME_PREFIX_LOWERCASE}'s {B_LAST_ITEM}!"),
    [STRINGID_PKMNTOOKSUNLIGHT]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} absorbed\nlight!"),
    [STRINGID_PKMNLOWEREDHEAD]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} tucked in\nits head!"),
    [STRINGID_PKMNISGLOWING]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is glowing!"),
    [STRINGID_CLOAKEDINAHARSHLIGHT]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} became\ncloaked in a harsh light!"),
    [STRINGID_PKMNSQUEEZEDBYBIND]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX} was squeezed by\n{B_ATK_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNCLAMPED]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} clamped\n{B_DEF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNHURTBY]                           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is hurt\nby {B_BUFF1}!"),
    [STRINGID_PKMNEVADEDATTACK]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} evaded\nthe attack!"),
    [STRINGID_PKMNGOTENCOREDMOVE]                   = COMPOUND_STRING("{B_SCR_NAME_PREFIX} can use\nonly {B_CURRENT_MOVE}!\p"),
    [STRINGID_PKMNREDUCEDPP]                        = COMPOUND_STRING("It reduced the PP of {B_DEF_NAME_PREFIX_LOWERCASE}'s {B_BUFF1} by {B_BUFF2}!"),
    [STRINGID_TARGETCANTESCAPENOW]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} can no\nlonger escape!"),
    [STRINGID_PKMNTOOKATTACK]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX} took the\n{B_BUFF1} attack!"),
    [STRINGID_PKMNCHARGINGPOWER]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} began\ncharging power!"),
    [STRINGID_PKMNWISHCAMETRUE]                     = COMPOUND_STRING("{B_BUFF1}'s wish\ncame true!"),
    [STRINGID_PKMNSHROUDEDITSELF]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} shrouded\nitself with {B_CURRENT_MOVE}!"),
    [STRINGID_PKMNMOVEBOUNCED]                      = COMPOUND_STRING("{B_EFF_NAME_PREFIX} bounced\nthe {B_CURRENT_MOVE} back!"),
    [STRINGID_PKMNHURTSWITH]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} was hurt\nby the {B_BUFF1}!"),
    [STRINGID_PKMNTRACED]                           = COMPOUND_STRING("It traced {B_BUFF1}'s {B_BUFF2}!"),
    [STRINGID_TERRAINBECOMESMISTY]                  = COMPOUND_STRING("Mist swirled about\nthe battlefield!"),
    [STRINGID_TERRAINBECOMESGRASSY]                 = COMPOUND_STRING("Grass grew to cover\nthe battlefield!"),
    [STRINGID_TERRAINBECOMESELECTRIC]               = COMPOUND_STRING("An electric current runs across\nthe battlefield!"),
    [STRINGID_TERRAINBECOMESPSYCHIC]                = COMPOUND_STRING("The battlefield got weird!"),
    [STRINGID_ELECTRICTERRAINENDS]                  = COMPOUND_STRING("The electricity disappeared\nfrom the battlefield."),
    [STRINGID_MISTYTERRAINENDS]                     = COMPOUND_STRING("The mist disappeared\nfrom the battlefield."),
    [STRINGID_PSYCHICTERRAINENDS]                   = COMPOUND_STRING("The weirdness disappeared\nfrom the battlefield."),
    [STRINGID_GRASSYTERRAINENDS]                    = COMPOUND_STRING("The grass disappeared\nfrom the battlefield."),
    [STRINGID_ROCKYTERRAINENDS]                     = COMPOUND_STRING("The stones disappeared\nfrom the battlefield."),
    [STRINGID_ELECTRICTERRAINACTIVATEDABILITY]      = COMPOUND_STRING("The Electric Terrain activated {B_SCR_NAME_PREFIX_LOWERCASE}'s {B_LAST_ABILITY}!"),
    [STRINGID_PKMNINCAPABLEOFPOWER]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} appears incapable\nof using its power!"),
    [STRINGID_GLINTAPPEARSINEYE]                    = COMPOUND_STRING("A glint appears in\n{B_SCR_NAME_PREFIX_LOWERCASE}'s eyes!"),
    [STRINGID_PKMNGETTINGINTOPOSITION]              = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is getting into\nposition!"),
    [STRINGID_PKMNBEGANGROWLINGDEEPLY]              = COMPOUND_STRING("{B_SCR_NAME_PREFIX} began\ngrowling deeply!"),
    [STRINGID_PKMNEAGERFORMORE]                     = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is eager\nfor more!"),
    [STRINGID_MUDSPORTENDS]                         = COMPOUND_STRING("The effects of Mud Sport have faded."),
    [STRINGID_WATERSPORTENDS]                       = COMPOUND_STRING("The effects of Water Sport have faded."),
    [STRINGID_AQUARINGHEAL]                         = COMPOUND_STRING("Aqua Ring restored\n{B_ATK_NAME_PREFIX_LOWERCASE}'s HP!"),
    [STRINGID_SLOWSTARTENTERS]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} can't get it going!"),
    [STRINGID_ANTICIPATIONACTIVATES]                = COMPOUND_STRING("{B_SCR_NAME_PREFIX} shuddered!"),
    [STRINGID_HARVESTBERRY]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} harvested\none {B_LAST_ITEM}!"),
    [STRINGID_SHAREDPAIN]                           = COMPOUND_STRING("The battlers shared\ntheir pain!"),
    [STRINGID_PKMNSITEMRESTOREDPP]                  = COMPOUND_STRING("{B_SCR_NAME_PREFIX} restored {B_BUFF1}'s PP using its {B_LAST_ITEM}!"),
    [STRINGID_PKMNOBTAINEDX]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} obtained\none {B_BUFF1}."),
    [STRINGID_PKMNOBTAINEDX2]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX} obtained\none {B_BUFF2}."),
    [STRINGID_PKMNOBTAINEDXYOBTAINEDZ]              = COMPOUND_STRING("{B_ATK_NAME_PREFIX} obtained\none {B_BUFF1}.\p{B_DEF_NAME_PREFIX} obtained\none {B_BUFF2}."),
    [STRINGID_POWERHERB]                            = COMPOUND_STRING("{B_ATK_NAME_PREFIX} became\nfully charged due to its {B_LAST_ITEM}!"),
    [STRINGID_HURTBYITEM]                           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} lost\nsome of its HP!"),
    [STRINGID_PKMNSWITCHEDATKANDDEF]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} switched its\nAttack and Defense!"),
    [STRINGID_PKMNACQUIREDABILITY]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} acquired\n{B_DEF_ABILITY}!"),
    [STRINGID_ALLYSWITCHPOSITION]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} and\n{B_SCR_NAME_PREFIX_LOWERCASE} switched places!"),
    [STRINGID_REFLECTTARGETSTYPE]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s type changed\nto match {B_DEF_NAME_PREFIX_LOWERCASE}'s!"),
    [STRINGID_TARGETSSTATWASMAXEDOUT]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s {B_DEF_ABILITY}\nmaxed its {B_BUFF1}!"),
    [STRINGID_ATTACKERABILITYSTATRAISE]             = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_BUFF1}\nrose!"),
    [STRINGID_AFTERMATHDMG]                         = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is hurt!"),
    [STRINGID_FOREWARNACTIVATES]                    = COMPOUND_STRING("It was alerted to {B_EFF_NAME_PREFIX_LOWERCASE}'s {B_BUFF1}!"),
    [STRINGID_PKMNMOVEBOUNCEDABILITY]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} bounced the\n{B_CURRENT_MOVE} back!"),
    [STRINGID_CURSEDBODYDISABLED]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s\n{B_BUFF1} was disabled!"),
    [STRINGID_HEALBLOCKPREVENTSUSAGE]               = COMPOUND_STRING("{B_ATK_NAME_PREFIX} was\nprevented from healing!\p"),
    [STRINGID_NOTDONEYET]                           = COMPOUND_STRING("This move effect is not done yet!\p"),
    [STRINGID_CELEBRATEMESSAGE]                     = COMPOUND_STRING("Congratulations, {B_PLAYER_NAME}!"),
    [STRINGID_SAFETYGOGGLESPROTECTED]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is not affected, thanks to its {B_LAST_ITEM}!"),
    [STRINGID_HEALINGWISHCAMETRUE]                  = COMPOUND_STRING("The healing wish came true\nfor {B_ATK_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_ATTACKERACQUIREDABILITY]              = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s Ability\nbecame {B_ATK_ABILITY}!"),
    [STRINGID_TARGETABILITYSTATLOWER]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s {B_BUFF1} fell!"),
    [STRINGID_QUASHSUCCESS]                         = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s move\nwas postponed!"),
    [STRINGID_BURSTINGFLAMESHIT]                    = COMPOUND_STRING("The bursting flame\nhit {B_SCR_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_BESTOWITEMGIVING]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} received {B_LAST_ITEM} from {B_ATK_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_GEMACTIVATES]                         = COMPOUND_STRING("{B_LAST_ITEM} strengthened\n{B_ATK_NAME_PREFIX_LOWERCASE}'s power!"),
    [STRINGID_BERRYDMGREDUCES]                      = COMPOUND_STRING("{B_LAST_ITEM} weakened the damage\nto {B_SCR_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_AIRBALLOONFLOAT]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} floats in the air\nwith its {B_LAST_ITEM}!"),
    [STRINGID_AIRBALLOONPOP]                        = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s\n{B_LAST_ITEM} popped!"),
    [STRINGID_CLOAKEDINAFREEZINGLIGHT]              = COMPOUND_STRING("{B_ATK_NAME_PREFIX} became cloaked\nin a freezing light!"),
    [STRINGID_CANACTFASTERTHANKSTO]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_BUFF1}\nlet it move first!"),
    [STRINGID_MICLEBERRYACTIVATES]                  = COMPOUND_STRING("{B_SCR_NAME_PREFIX} boosted the accuracy of its next move using Micle Berry!"),
    [STRINGID_ITEMCANNOTBEREMOVED]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s item\ncannot be stolen!"),
    [STRINGID_ITDOESNTAFFECTTWOFOES]                = COMPOUND_STRING("It doesn't affect\n{B_DEF_NAME_PREFIX_LOWERCASE}…\pIt doesn't affect\n{B_DEF_PARTNER_NAME}…"),
    [STRINGID_REDCARDACTIVATE]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} held up its Red Card against {B_ATK_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_EJECTBUTTONACTIVATE]                  = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is switched out\nwith the {B_LAST_ITEM}!"),
    [STRINGID_PKMNSWAPPEDABILITIES]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} swapped\nAbilities with its target!"),
    [STRINGID_PKMNTOOKTARGETHIGH]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} took\n{B_DEF_NAME_PREFIX_LOWERCASE} into the sky!"),
    [STRINGID_STOCKPILEDEFFECTWOREOFF]              = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s stockpiled\neffect wore off!"),
    [STRINGID_WAGGLINGAFINGER]                      = COMPOUND_STRING("Waggling a finger\nlet it use {B_CURRENT_MOVE}!"),
    [STRINGID_POKMNSXPREVENTSSWITCHING]             = COMPOUND_STRING("{B_BUFF1}'s {B_LAST_ABILITY}\nprevents switching!\p"),
    [STRINGID_ATKGOTOVERINFATUATION]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} cured its infatuation status using its {B_LAST_ITEM}!"),
    [STRINGID_BUFFERENDS]                           = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_BUFF1}\nwore off!"),
    [STRINGID_PKMNENCOREENDED]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s encore\nended!"),
    [STRINGID_TORMENTEDNOMORE]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s\ntorment wore off!"),
    [STRINGID_PKMNMOVEDISABLEDNOMORE]               = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is no\nlonger disabled!"),
    [STRINGID_ITEMRESTOREDSPECIESHEALTH]            = COMPOUND_STRING("{B_BUFF1} had its\nHP restored!"),
    [STRINGID_ITEMCUREDSPECIESSTATUS]               = COMPOUND_STRING("{B_BUFF1} had its\nstatus healed!"),
    [STRINGID_ITEMRESTOREDSPECIESPP]                = COMPOUND_STRING("{B_BUFF1} had its\nPP restored!"),
    [STRINGID_PKMNRESTOREDHPUSING]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} had its HP restored."),

    // Gen 5+ Mechanics
    [STRINGID_ATTACKERCUREDTARGETSTATUS]            = COMPOUND_STRING("{B_ATK_NAME_PREFIX} cured\n{B_DEF_NAME_PREFIX_LOWERCASE}'s problem!"),
    [STRINGID_ATTACKERLOSTFIRETYPE]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} burned itself out!"),
    [STRINGID_FERVENTWISHREACHED]                   = COMPOUND_STRING("{B_ATK_TRAINER_NAME}'s fervent wish\nhas reached {B_ATK_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_DARKAURAENTERS]                       = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is radiating\na dark aura!"),
    [STRINGID_FAIRYAURAENTERS]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is radiating\na fairy aura!"),
    [STRINGID_AURABREAKENTERS]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} reversed all\nother Pokémon's auras!"),
    [STRINGID_COMATOSEENTERS]                       = COMPOUND_STRING("{B_SCR_NAME_PREFIX} is drowsing!"),
    [STRINGID_SCREENCLEANERENTERS]                  = COMPOUND_STRING("All screens on the field were\ncleansed!"),
    [STRINGID_FETCHEDPOKEBALL]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} found\na {B_LAST_ITEM}!"),
    [STRINGID_AURAFLAREDTOLIFE]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is being affected\nby a menacing aura!"),
    [STRINGID_ASONEENTERS]                          = COMPOUND_STRING("{B_SCR_NAME_PREFIX} has two Abilities!"),
    [STRINGID_CURIOUSMEDICINEENTERS]                = COMPOUND_STRING("{B_EFF_NAME_PREFIX}'s\nstat changes were reset!"),
    [STRINGID_PKMNSHOOKOFFTHETAUNT]                 = COMPOUND_STRING("{B_SCR_NAME_PREFIX} shook off\nthe taunt!"), //unused
    [STRINGID_ATTACKERBECAMEFULLYCHARGED]           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} became fully charged due to its bond with its trainer!\p"),
    [STRINGID_ATTACKERBECAMEASHSPECIES]             = COMPOUND_STRING("{B_ATK_NAME_PREFIX} became Ash-{B_BUFF1}!\p"),
    [STRINGID_STUFFCHEEKSCANTSELECT]                = COMPOUND_STRING("Stuff Cheeks cannot be\nselected without a Berry!\p"),
    [STRINGID_BROKETHROUGHPROTECTION]               = COMPOUND_STRING("It broke through\n{B_DEF_NAME_PREFIX_LOWERCASE}'s protection!"),
    [STRINGID_ABILITYALLOWSONLYMOVE]                = COMPOUND_STRING("{B_ATK_ABILITY} allows the\nuse of only {B_CURRENT_MOVE}!\p"),
    [STRINGID_SWAPPEDABILITIES]                     = COMPOUND_STRING("{B_DEF_NAME_PREFIX} swapped Abilities\nwith its target!"),
    [STRINGID_BATTLERTYPECHANGEDTO]                 = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s type\nchanged to {B_BUFF1}!"),
    [STRINGID_BUFFERENDS]                           = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX}'s {B_BUFF1} wore off!"), //wip
    [STRINGID_TARGETABILITYSTATRAISE]               = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY} {B_BUFF2}raised its {B_BUFF1}!"), //wip
    [STRINGID_TARGETSSTATWASMAXEDOUT]               = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY} maxed its {B_BUFF1}!"), //wip
    [STRINGID_ATTACKERABILITYSTATRAISE]             = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX}'s {B_SCR_ABILITY} {B_BUFF2}raised its {B_BUFF1}!"), //wip
    [STRINGID_FOREWARNACTIVATES]                    = COMPOUND_STRING("{B_SCR_ABILITY} alerted {B_SCR_NAME_WITH_PREFIX2} to {B_EFF_NAME_WITH_PREFIX2}'s {B_BUFF1}!"), //wip
    [STRINGID_CURSEDBODYDISABLED]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX}'s {B_BUFF1} was disabled by {B_DEF_NAME_WITH_PREFIX2}'s {B_DEF_ABILITY}!"), //wip
    [STRINGID_TARGETABILITYSTATLOWER]               = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX}'s {B_DEF_ABILITY} {B_BUFF2}lowered its {B_BUFF1}!"), //wip
    [STRINGID_SCRIPTINGABILITYSTATRAISE]            = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX}'s {B_SCR_ABILITY} {B_BUFF2}raised its {B_BUFF1}!"), //wip
    [STRINGID_DESTINYKNOTACTIVATES]                 = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} fell in love because of the {B_LAST_ITEM}!"), //wip
    [STRINGID_ATKGOTOVERINFATUATION]                = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} got over its infatuation!"), //wip
    [STRINGID_TORMENTEDNOMORE]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} is no longer tormented!"), //wip
    [STRINGID_HEALBLOCKEDNOMORE]                    = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} is cured of its heal block!"), //wip
    [STRINGID_BOTHCANNOLONGERESCAPE]                = COMPOUND_STRING("Neither Pokémon can run away!"),
    [STRINGID_CANTESCAPEDUETOUSEDMOVE]              = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can no\nlonger escape!"),
    [STRINGID_PKMNBECAMEWEAKERTOFIRE]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} became\nweaker to fire!"),
    [STRINGID_ABOUTTOUSEPOLTERGEIST]                = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is about to be\nattacked by its {B_BUFF1}!"),
    [STRINGID_NEUTRALIZINGGASENTERS]                = COMPOUND_STRING("Neutralizing gas filled the area!"),
    [STRINGID_NEUTRALIZINGGASOVER]                  = COMPOUND_STRING("The effects of neutralizing\ngas wore off!"),
    [STRINGID_PKMNINSNAPTRAP]                       = COMPOUND_STRING("{B_DEF_NAME_PREFIX} got trapped\nby a snap trap!"),
    [STRINGID_METEORBEAMCHARGING]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is overflowing\nwith space energy!"),
    [STRINGID_HEATUPBEAK]                           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} started\nheating up its beak!"),
    [STRINGID_COURTCHANGE]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} swapped the battle effects affecting each side!"),
    [STRINGID_ATTACKERLOSTELECTRICTYPE]             = COMPOUND_STRING("{B_ATK_NAME_PREFIX} used up all\nof its electricity!"),
    [STRINGID_ATTACKERSWITCHEDSTATWITHTARGET]       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} switched {B_BUFF1}\nwith its target!"),
    [STRINGID_BEINGHITCHARGEDPKMNWITHPOWER]         = COMPOUND_STRING("Being hit by {B_CURRENT_MOVE} charged {B_DEF_NAME_PREFIX_LOWERCASE} with power!"),
    [STRINGID_SUNLIGHTACTIVATEDABILITY]             = COMPOUND_STRING("The harsh sunlight activated {B_SCR_NAME_PREFIX_LOWERCASE}'s {B_LAST_ABILITY}!"),
    [STRINGID_STATWASHEIGHTENED]                    = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_BUFF1}\nwas heightened!"),
    [STRINGID_ABILITYWEAKENEDSURROUNDINGMONSSTAT]   = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_SCR_ABILITY} weakened the {B_BUFF1} of all surrounding Pokémon!\p"),
    [STRINGID_ATTACKERGAINEDSTRENGTHFROMTHEFALLEN]  = COMPOUND_STRING("{B_SCR_NAME_PREFIX} gained strength\nfrom the fallen!"),
    [STRINGID_PREPARESHELLTRAP]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} set a shell trap!"),
    [STRINGID_SHELLTRAPDIDNTWORK]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s shell trap didn't work!"),
    [STRINGID_COULDNTFULLYPROTECT]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} couldn't fully protect itself and got hurt!"),
    [STRINGID_PKMNREVIVEDREADYTOFIGHT]              = COMPOUND_STRING("{B_BUFF1} was revived and\nis ready to fight again!"),
    [STRINGID_MIRRORHERBCOPIED]                     = COMPOUND_STRING("{B_SCR_NAME_PREFIX} used its Mirror Herb to mirror its opponent's stat changes!"),
    [STRINGID_PKMNITEMMELTED]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} corroded {B_DEF_NAME_PREFIX_LOWERCASE}'s {B_LAST_ITEM}!"),
    [STRINGID_CURRENTMOVECANTSELECT]                = COMPOUND_STRING("{B_BUFF1} cannot be used!\p"),
    [STRINGID_DIMENSIONSWERETWISTED]                = COMPOUND_STRING("The dimensions were\ntwisted!"),
    [STRINGID_BIZARREARENACREATED]                  = COMPOUND_STRING("A bizarre area was created!\nHold items lost their effects!"),
    [STRINGID_BIZARREAREACREATED]                   = COMPOUND_STRING("A bizarre area was created in which the\nDefense and Sp. Def stats are swapped!"),
    [STRINGID_ISCOVEREDWITHGRASS]                   = COMPOUND_STRING("The battlefield is covered with\ngrass!"),
    [STRINGID_MISTSWIRLSAROUND]                     = COMPOUND_STRING("Mist swirls around the\nbattlefield!"),
    [STRINGID_ELECTRICCURRENTISRUNNING]             = COMPOUND_STRING("An electric current runs across\nthe battlefield!"),
    [STRINGID_SEEMSWEIRD]                           = COMPOUND_STRING("The battlefield got weird!"),
    [STRINGID_ABILITYSHIELDPROTECTS]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s Ability is protected by the effects of its Ability Shield!"),
    [STRINGID_RECEIVERABILITYTAKEOVER]              = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_SCR_ABILITY}\nwas taken over!"),
    [STRINGID_PKNMABSORBINGPOWER]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is absorbing power!"),
    [STRINGID_NOONEWILLBEABLETORUNAWAY]             = COMPOUND_STRING("No one will be able to run away\nduring the next turn!"),
    [STRINGID_PASTELVEILPROTECTED]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is protected\nby a pastel veil!"),
    [STRINGID_ASSAULTVESTDOESNTALLOW]               = COMPOUND_STRING("{B_LAST_ITEM}'s effects prevent\nstatus moves from being used!\p"),
    [STRINGID_GRAVITYPREVENTSUSAGE]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can't use\n{B_CURRENT_MOVE} because of gravity!\p"),
    [STRINGID_IONDELUGEON]                          = COMPOUND_STRING("A deluge of ions showers\nthe battlefield!"),
    [STRINGID_TOPSYTURVYSWITCHEDSTATS]              = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s stat changes\nwere all reversed!"),
    [STRINGID_MEGAEVOREACTING]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_LAST_ITEM} is\nreacting to {B_ATK_TRAINER_NAME}'s Mega Ring!"), //actually displays the type of mega ring in inventory, but we didnt implement them :(
    [STRINGID_MEGAEVOEVOLVED]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} has Mega Evolved into Mega {B_BUFF1}!"),
    [STRINGID_INFESTATION]                          = COMPOUND_STRING("{B_DEF_NAME_PREFIX} has been afflicted with an infestation!"),
    [STRINGID_TARGETELECTRIFIED]                    = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s moves\nhave been electrified!"),
    [STRINGID_THIRDTYPEADDED]                       = COMPOUND_STRING("{B_BUFF1} type was added to\n{B_DEF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_FELLFORFEINT]                         = COMPOUND_STRING("{B_DEF_NAME_PREFIX} fell for\nthe feint!"),
    [STRINGID_COVEREDINPOWDER]                      = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is covered in powder!"),
    [STRINGID_POWDEREXPLODES]                       = COMPOUND_STRING("When the flame touched the powder\non the Pokémon, it exploded!"),
    [STRINGID_BELCHCANTSELECT]                      = COMPOUND_STRING("Belch cannot be used!\p"),
    [STRINGID_SPECTRALTHIEFSTEAL]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} stole the target's\nboosted stats!"),
    [STRINGID_FLOWERVEILPROTECTED]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX} surrounded itself\nwith a veil of petals!"),
    [STRINGID_SWEETVEILPROTECTED]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX} surrounded itself\nwith a veil of sweetness!"),
    [STRINGID_AROMAVEILPROTECTED]                   = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is protected\nby an aromatic veil!"),
    [STRINGID_USEDINSTRUCTEDMOVE]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} used the move\ninstructed by {B_BUFF1}!"),
    [STRINGID_THROATCHOPENDS]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can\nuse sound-based moves again!"),
    [STRINGID_PKMNCANTUSEMOVETHROATCHOP]            = COMPOUND_STRING("{B_ATK_NAME_PREFIX} can't use\n{B_CURRENT_MOVE} due to Throat Chop!\p"),
    [STRINGID_LASERFOCUS]                           = COMPOUND_STRING("{B_ATK_NAME_PREFIX}\nconcentrated intensely!"),
    [STRINGID_SYMBIOSISITEMPASS]                    = COMPOUND_STRING("{B_SCR_NAME_PREFIX} passed its\n{B_LAST_ITEM} to an ally!"),
    [STRINGID_POKEMONCANNOTUSEMOVE]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX} cannot\nuse {B_CURRENT_MOVE}!"),
    [STRINGID_CLEARAMULETWONTLOWERSTATS]            = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s Clear Amulet prevents its stats from being lowered!"),
    [STRINGID_BATTLERABILITYRAISEDSTAT]             = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_BUFF1}\n{B_BUFF2}"),
    [STRINGID_TARGETTOOHEAVY]                       = COMPOUND_STRING("But the target\nwas too heavy!"),

    // Unused Gimmicks
    [STRINGID_SHARPSTEELFLOATS]                     = COMPOUND_STRING("Sharp-pointed steel floats in the air\naround {B_DEF_TEAM2} team!"),
    [STRINGID_SHARPSTEELDMG]                        = COMPOUND_STRING("Sharp steel bit into\n{B_DEF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM]        = COMPOUND_STRING("The sharp steel disappeared\nfrom around {B_ATK_TEAM2} team!"),
    [STRINGID_PKMNBLEWAWAYSHARPSTEEL]               = COMPOUND_STRING("{B_ATK_NAME_PREFIX} blew away\nsharp steel!"),
    [STRINGID_ZPOWERSURROUNDS]                      = COMPOUND_STRING("{B_ATK_NAME_PREFIX} surrounded itself with its Z-Power!"),
    [STRINGID_ZMOVEUNLEASHED]                       = COMPOUND_STRING("{B_ATK_NAME_PREFIX} unleashes its full-force Z-Move!"),
    [STRINGID_ZMOVERESETSSTATS]                     = COMPOUND_STRING("{B_SCR_NAME_PREFIX} returned its decreased stats to normal using its Z-Power!"),
    [STRINGID_ZMOVEALLSTATSUP]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} boosted its stats using its Z-Power!"),
    [STRINGID_ZMOVEZBOOSTCRIT]                      = COMPOUND_STRING("{B_SCR_NAME_PREFIX} boosted its critical-hit ratio using its Z-Power!"),
    [STRINGID_ZMOVERESTOREHP]                       = COMPOUND_STRING("{B_SCR_NAME_PREFIX} restored its HP using its Z-Power!"),
    [STRINGID_ZMOVESTATUP]                          = COMPOUND_STRING("{B_SCR_NAME_PREFIX} boosted its stats using its Z-Power!"),
    [STRINGID_ZMOVEHPTRAP]                          = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s HP was restored by the Z-Power!"),
    [STRINGID_TIMETODYNAMAX]                        = COMPOUND_STRING("Time to Dynamax!"),
    [STRINGID_TIMETOGIGANTAMAX]                     = COMPOUND_STRING("Time to Gigantamax!"),
    [STRINGID_PKMNDYNAMAXED]                        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} grew huge\ninto its Dynamax form!"),
    [STRINGID_PKMNGIGANTAMAXED]                     = COMPOUND_STRING("{B_ATK_NAME_PREFIX} grew huge\ninto its Gigantamax form!"),
    [STRINGID_MOVEBLOCKEDBYDYNAMAX]                 = COMPOUND_STRING("The move was blocked by the power of Dynamax!"),
    [STRINGID_ZEROTOHEROTRANSFORMATION]             = COMPOUND_STRING("{B_SCR_NAME_PREFIX} underwent a heroic transformation!"),
    [STRINGID_PKMNTERASTALLIZEDINTO]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX} terastallized\ninto the {B_BUFF1} type!"),
    [STRINGID_BOOSTERENERGYACTIVATES]               = COMPOUND_STRING("{B_SCR_NAME_PREFIX} used its\n{B_LAST_ITEM} to activate\l{B_SCR_ABILITY}!"),
    [STRINGID_COMMANDERACTIVATES]                   = COMPOUND_STRING("{B_SCR_NAME_PREFIX} was swallowed by Dondozo and became Dondozo's commander!"),
    [STRINGID_TEAMTRAPPEDWITHVINES]                 = COMPOUND_STRING("{B_DEF_TEAM1} team got trapped\nwith vines!"),
    [STRINGID_TEAMCAUGHTINVORTEX]                   = COMPOUND_STRING("{B_DEF_TEAM1} Pokémon got caught in a vortex of water!"),
    [STRINGID_TEAMSURROUNDEDBYFIRE]                 = COMPOUND_STRING("{B_DEF_TEAM1} Pokémon were surrounded by fire!"),
    [STRINGID_TEAMSURROUNDEDBYROCKS]                = COMPOUND_STRING("{B_DEF_TEAM1} Pokémon became surrounded by rocks!"),
    [STRINGID_FOGCREPTUP]                           = COMPOUND_STRING("Fog crept up as thick as soup!"),
    [STRINGID_FOGISDEEP]                            = COMPOUND_STRING("The fog is deep…"),
    [STRINGID_FOGLIFTED]                            = COMPOUND_STRING("The fog lifted."),
    [STRINGID_FICKLEBEAMDOUBLED]                    = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is going all\nout for this attack!"),
    [STRINGID_TIDYINGUPCOMPLETE]                    = COMPOUND_STRING("Tidying up complete!"),
    [STRINGID_POKEFLUTECATCHY]                      = COMPOUND_STRING("{B_PLAYER_NAME} played the {B_LAST_ITEM}.\pNow, that's a catchy tune!"),
    [STRINGID_POKEFLUTE]                            = COMPOUND_STRING("{B_PLAYER_NAME} played the {B_LAST_ITEM}."),
    [STRINGID_MONHEARINGFLUTEAWOKE]                 = COMPOUND_STRING("The Pokémon hearing the flute awoke!"),
    [STRINGID_SUPERSWEETAROMAWAFTS]                 = COMPOUND_STRING("A supersweet aroma is wafting from the syrup covering {B_ATK_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_TARGETISBEINGSALTCURED]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is being salt cured!"),
    [STRINGID_TARGETISHURTBYSALTCURE]               = COMPOUND_STRING("{B_DEF_NAME_PREFIX} is hurt by {B_BUFF1}!"),
    [STRINGID_TARGETCOVEREDINSTICKYCANDYSYRUP]      = COMPOUND_STRING("{B_DEF_NAME_PREFIX} got covered in sticky candy syrup!"),
    [STRINGID_PKMNTELLCHILLINGRECEPTIONJOKE]        = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is preparing to tell a chillingly bad joke!"),
    [STRINGID_ELECTROSHOTCHARGING]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} absorbed\nelectricity!"),
    [STRINGID_SHEDITSTAIL]                          = COMPOUND_STRING("{B_ATK_NAME_PREFIX} shed its tail\nto create a decoy!"),
    [STRINGID_ATTACKERLOSTITSTYPE]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} lost\nits {B_BUFF1} type!"),
    [STRINGID_ULTRABURSTREACTING]                   = COMPOUND_STRING("Bright light is about to burst out of {B_ATK_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_ULTRABURSTCOMPLETED]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} regained its true power through Ultra Burst!"),
    [STRINGID_THUNDERCAGETRAPPED]                   = COMPOUND_STRING("{B_ATK_NAME_PREFIX} trapped\n{B_DEF_NAME_PREFIX_LOWERCASE}!"),
    [STRINGID_PKMNHURTBYFROSTBITE]                  = COMPOUND_STRING("{B_ATK_NAME_PREFIX} is hurt by its frostbite!"),
    [STRINGID_PKMNGOTFROSTBITE]                     = COMPOUND_STRING("{B_EFF_NAME_PREFIX} got frostbite!"),
    [STRINGID_PKMNSITEMHEALEDFROSTBITE]             = COMPOUND_STRING("{B_SCR_NAME_PREFIX}'s {B_LAST_ITEM} cured its frostbite!"),
    [STRINGID_ATTACKERHEALEDITSFROSTBITE]           = COMPOUND_STRING("{B_ATK_NAME_PREFIX} cured its frostbite through sheer determination so you wouldn't worry!"),
    [STRINGID_PKMNFROSTBITEHEALED]                  = COMPOUND_STRING("{B_DEF_NAME_PREFIX}'s frostbite was cured!"),
    [STRINGID_PKMNFROSTBITEHEALED2]                 = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s frostbite was cured!"),
    [STRINGID_PKMNFROSTBITEHEALEDBY]                = COMPOUND_STRING("{B_ATK_NAME_PREFIX}'s {B_CURRENT_MOVE} cured its frostbite!"),
    [STRINGID_PKMNATTACK]                           = COMPOUND_STRING("{B_BUFF1}'s attack!"),

    // Mega Groudon/Kyogre weathers
    [STRINGID_EXTREMELYHARSHSUNLIGHT]               = COMPOUND_STRING("Error 01: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_EXTREMESUNLIGHTFADED]                 = COMPOUND_STRING("Error 02: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT]     = COMPOUND_STRING("Error 03: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_EXTREMELYHARSHSUNLIGHTWASNOTLESSENED] = COMPOUND_STRING("Error 04: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_HEAVYRAIN]                            = COMPOUND_STRING("Error 05: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_HEAVYRAINLIFTED]                      = COMPOUND_STRING("Error 06: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN]         = COMPOUND_STRING("Error 07: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_NORELIEFROMHEAVYRAIN]                 = COMPOUND_STRING("Error 08: something has gone awry.\nPlease inform the romhack creator!\p"),

    // Unused. Keep in case a test needs it
    [STRINGID_ATTACKERSHOOKITSELFAWAKE]             = COMPOUND_STRING("Error 09: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_ATTACKEREXPELLEDTHEPOISON]            = COMPOUND_STRING("Error 10: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_ATTACKERMELTEDTHEICE]                 = COMPOUND_STRING("Error 11: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_ATTACKERHEALEDITSBURN]                = COMPOUND_STRING("Error 12: something has gone awry.\nPlease inform the romhack creator!\p"),
    [STRINGID_ATTACKERBROKETHROUGHPARALYSIS]        = COMPOUND_STRING("Error 13: something has gone awry.\nPlease inform the romhack creator!\p"),
};

const u16 gTrainerUsedItemStringIds[] =
{
    STRINGID_PLAYERUSEDITEM, STRINGID_TRAINER1USEDITEM
};

const u16 gZEffectStringIds[] =
{
    [B_MSG_Z_RESET_STATS] = STRINGID_ZMOVERESETSSTATS,
    [B_MSG_Z_ALL_STATS_UP]= STRINGID_ZMOVEALLSTATSUP,
    [B_MSG_Z_BOOST_CRITS] = STRINGID_ZMOVEZBOOSTCRIT,
    [B_MSG_Z_FOLLOW_ME]   = STRINGID_PKMNCENTERATTENTION,
    [B_MSG_Z_RECOVER_HP]  = STRINGID_ZMOVERESTOREHP,
    [B_MSG_Z_STAT_UP]     = STRINGID_ZMOVESTATUP,
    [B_MSG_Z_HP_TRAP]     = STRINGID_ZMOVEHPTRAP,
};

const u16 gMentalHerbCureStringIds[] =
{
    [B_MSG_MENTALHERBCURE_INFATUATION] = STRINGID_ATKGOTOVERINFATUATION,
    [B_MSG_MENTALHERBCURE_TAUNT]       = STRINGID_BUFFERENDS,
    [B_MSG_MENTALHERBCURE_ENCORE]      = STRINGID_PKMNENCOREENDED,
    [B_MSG_MENTALHERBCURE_TORMENT]     = STRINGID_TORMENTEDNOMORE,
    [B_MSG_MENTALHERBCURE_HEALBLOCK]   = STRINGID_BUFFERENDS,
    [B_MSG_MENTALHERBCURE_DISABLE]     = STRINGID_PKMNMOVEDISABLEDNOMORE,
};

const u16 gStartingStatusStringIds[B_MSG_STARTING_STATUS_COUNT] =
{
    [B_MSG_TERRAIN_SET_MISTY]    = STRINGID_TERRAINBECOMESMISTY,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_TERRAINBECOMESELECTRIC,
    [B_MSG_TERRAIN_SET_PSYCHIC]  = STRINGID_TERRAINBECOMESPSYCHIC,
    [B_MSG_TERRAIN_SET_GRASSY]   = STRINGID_TERRAINBECOMESGRASSY,
    [B_MSG_SET_TRICK_ROOM]       = STRINGID_DIMENSIONSWERETWISTED,
    [B_MSG_SET_MAGIC_ROOM]       = STRINGID_BIZARREARENACREATED,
    [B_MSG_SET_WONDER_ROOM]      = STRINGID_BIZARREAREACREATED,
    [B_MSG_SET_TAILWIND]         = STRINGID_TAILWINDBLEW,
    [B_MSG_SET_RAINBOW]          = STRINGID_ARAINBOWAPPEAREDONSIDE,
    [B_MSG_SET_SEA_OF_FIRE]      = STRINGID_SEAOFFIREENVELOPEDSIDE,
    [B_MSG_SET_SWAMP]            = STRINGID_SWAMPENVELOPEDSIDE,
    [B_MSG_TERRAIN_SET_ROCKY]       = STRINGID_TERRAINBECOMESROCKY,
};

const u16 gTerrainStringIds[B_MSG_TERRAIN_COUNT] =
{
    [B_MSG_TERRAIN_SET_MISTY] = STRINGID_TERRAINBECOMESMISTY,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_TERRAINBECOMESELECTRIC,
    [B_MSG_TERRAIN_SET_PSYCHIC] = STRINGID_TERRAINBECOMESPSYCHIC,
    [B_MSG_TERRAIN_SET_GRASSY] = STRINGID_TERRAINBECOMESGRASSY,
    [B_MSG_TERRAIN_SET_ROCKY] = STRINGID_TERRAINBECOMESROCKY,
    [B_MSG_TERRAIN_END_MISTY] = STRINGID_MISTYTERRAINENDS,
    [B_MSG_TERRAIN_END_ELECTRIC] = STRINGID_ELECTRICTERRAINENDS,
    [B_MSG_TERRAIN_END_PSYCHIC] = STRINGID_PSYCHICTERRAINENDS,
    [B_MSG_TERRAIN_END_GRASSY] = STRINGID_GRASSYTERRAINENDS,
    [B_MSG_TERRAIN_END_ROCKY] = STRINGID_ROCKYTERRAINENDS,
};

const u16 gTerrainPreventsStringIds[] =
{
    [B_MSG_TERRAINPREVENTS_MISTY]    = STRINGID_MISTYTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_ELECTRIC] = STRINGID_ELECTRICTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_PSYCHIC]  = STRINGID_PSYCHICTERRAINPREVENTS
};

const u16 gHealingWishStringIds[] =
{
    STRINGID_HEALINGWISHCAMETRUE, STRINGID_CLOAKEDINMYSTICALMOONLIGHT
};

const u16 gDmgHazardsStringIds[] =
{
    [B_MSG_PKMNHURTBYSPIKES]   = STRINGID_PKMNHURTBYSPIKES,
    [B_MSG_STEALTHROCKDMG]     = STRINGID_STEALTHROCKDMG,
    [B_MSG_SHARPSTEELDMG]      = STRINGID_SHARPSTEELDMG,
    [B_MSG_POINTEDSTONESFLOAT] = STRINGID_POINTEDSTONESFLOAT,
    [B_MSG_SPIKESSCATTERED]    = STRINGID_SPIKESSCATTERED,
    [B_MSG_SHARPSTEELFLOATS]   = STRINGID_SHARPSTEELFLOATS,
};

const u16 gSwitchInAbilityStringIds[] =
{
    [B_MSG_SWITCHIN_MOLDBREAKER] = STRINGID_MOLDBREAKERENTERS,
    [B_MSG_SWITCHIN_TERAVOLT] = STRINGID_TERAVOLTENTERS,
    [B_MSG_SWITCHIN_TURBOBLAZE] = STRINGID_TURBOBLAZEENTERS,
    [B_MSG_SWITCHIN_SLOWSTART] = STRINGID_SLOWSTARTENTERS,
    [B_MSG_SWITCHIN_UNNERVE] = STRINGID_UNNERVEENTERS,
    [B_MSG_SWITCHIN_ANTICIPATION] = STRINGID_ANTICIPATIONACTIVATES,
    [B_MSG_SWITCHIN_FOREWARN] = STRINGID_FOREWARNACTIVATES,
    [B_MSG_SWITCHIN_PRESSURE] = STRINGID_PRESSUREENTERS,
    [B_MSG_SWITCHIN_DARKAURA] = STRINGID_DARKAURAENTERS,
    [B_MSG_SWITCHIN_FAIRYAURA] = STRINGID_FAIRYAURAENTERS,
    [B_MSG_SWITCHIN_AURABREAK] = STRINGID_AURABREAKENTERS,
    [B_MSG_SWITCHIN_COMATOSE] = STRINGID_COMATOSEENTERS,
    [B_MSG_SWITCHIN_SCREENCLEANER] = STRINGID_SCREENCLEANERENTERS,
    [B_MSG_SWITCHIN_ASONE] = STRINGID_ASONEENTERS,
    [B_MSG_SWITCHIN_CURIOUS_MEDICINE] = STRINGID_CURIOUSMEDICINEENTERS,
    [B_MSG_SWITCHIN_PASTEL_VEIL] = STRINGID_DEF_CURE_POISON,
    [B_MSG_SWITCHIN_NEUTRALIZING_GAS] = STRINGID_NEUTRALIZINGGASENTERS,
};

const u16 gMissStringIds[] =
{
    [B_MSG_MISSED]      = STRINGID_ATTACKMISSED,
    [B_MSG_PROTECTED]   = STRINGID_PKMNPROTECTEDITSELF,
    [B_MSG_AVOIDED_ATK] = STRINGID_PKMNAVOIDEDATTACK,
    [B_MSG_AVOIDED_DMG] = STRINGID_ITDOESNTAFFECT,
    [B_MSG_GROUND_MISS] = STRINGID_ITDOESNTAFFECT
};

const u16 gNoEscapeStringIds[] =
{
    [B_MSG_CANT_ESCAPE]          = STRINGID_CANTESCAPE,
    [B_MSG_PREVENTS_ESCAPE]      = STRINGID_PREVENTSESCAPE,
    [B_MSG_CANT_ESCAPE_2]        = STRINGID_CANTESCAPE2,
    [B_MSG_ATTACKER_CANT_ESCAPE] = STRINGID_ATTACKERCANTESCAPE
};

const u16 gMoveWeatherChangeStringIds[] =
{
    [B_MSG_STARTED_RAIN]      = STRINGID_STARTEDTORAIN,
    [B_MSG_WEATHER_FAILED]    = STRINGID_BUTITFAILED,
    [B_MSG_STARTED_SANDSTORM] = STRINGID_SANDSTORMBREWED,
    [B_MSG_STARTED_SUNLIGHT]  = STRINGID_SUNLIGHTGOTBRIGHT,
    [B_MSG_STARTED_HAIL]      = STRINGID_STARTEDHAIL,
    [B_MSG_STARTED_SNOW]      = STRINGID_STARTEDSNOW,
    [B_MSG_STARTED_FOG]       = STRINGID_FOGCREPTUP, // Unused, can use for custom moves that set fog
};

const u16 gWeatherEndsStringIds[B_MSG_WEATHER_END_COUNT] =
{
    [B_MSG_WEATHER_END_RAIN]         = STRINGID_RAINSTOPPED,
    [B_MSG_WEATHER_END_SUN]          = STRINGID_SUNLIGHTFADED,
    [B_MSG_WEATHER_END_SANDSTORM]    = STRINGID_SANDSTORMSUBSIDED,
    [B_MSG_WEATHER_END_HAIL]         = STRINGID_HAILSTOPPED,
    [B_MSG_WEATHER_END_SNOW]         = STRINGID_SNOWSTOPPED,
    [B_MSG_WEATHER_END_FOG]          = STRINGID_FOGLIFTED,
    [B_MSG_WEATHER_END_STRONG_WINDS] = STRINGID_STRONGWINDSDISSIPATED,
};

const u16 gWeatherTurnStringIds[] =
{
    [B_MSG_WEATHER_TURN_RAIN]         = STRINGID_RAINCONTINUES,
    [B_MSG_WEATHER_TURN_SUN]          = STRINGID_SUNLIGHTSTRONG,
    [B_MSG_WEATHER_TURN_SANDSTORM]    = STRINGID_SANDSTORMRAGES,
    [B_MSG_WEATHER_TURN_HAIL]         = STRINGID_HAILCONTINUES,
    [B_MSG_WEATHER_TURN_SNOW]         = STRINGID_SNOWCONTINUES,
    [B_MSG_WEATHER_TURN_FOG]          = STRINGID_FOGISDEEP,
    [B_MSG_WEATHER_TURN_STRONG_WINDS] = STRINGID_MYSTERIOUSAIRCURRENT,
};

const u16 gSandStormHailDmgStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_PKMNBUFFETEDBYSANDSTORM,
    [B_MSG_HAIL]      = STRINGID_PKMNPELTEDBYHAIL
};

const u16 gProtectLikeUsedStringIds[] =
{
    [B_MSG_PROTECTED_ITSELF] = STRINGID_PKMNPROTECTEDITSELF2,
    [B_MSG_BRACED_ITSELF]    = STRINGID_PKMNBRACEDITSELF,
    [B_MSG_PROTECT_FAILED]   = STRINGID_BUTITFAILED,
    [B_MSG_PROTECTED_TEAM]   = STRINGID_PROTECTEDTEAM,
};

const u16 gReflectLightScreenSafeguardStringIds[] =
{
    [B_MSG_SIDE_STATUS_FAILED]     = STRINGID_BUTITFAILED,
    [B_MSG_SET_REFLECT_SINGLE]     = STRINGID_PKMNRAISEDDEF,
    [B_MSG_SET_REFLECT_DOUBLE]     = STRINGID_PKMNRAISEDDEF,
    [B_MSG_SET_LIGHTSCREEN_SINGLE] = STRINGID_PKMNRAISEDSPDEF,
    [B_MSG_SET_LIGHTSCREEN_DOUBLE] = STRINGID_PKMNRAISEDSPDEF,
    [B_MSG_SET_SAFEGUARD]          = STRINGID_PKMNCOVEREDBYVEIL,
};

const u16 gLeechSeedStringIds[] =
{
    [B_MSG_LEECH_SEED_SET]   = STRINGID_PKMNSEEDED,
    [B_MSG_LEECH_SEED_MISS]  = STRINGID_PKMNEVADEDATTACK,
    [B_MSG_LEECH_SEED_FAIL]  = STRINGID_ITDOESNTAFFECT,
    [B_MSG_LEECH_SEED_DRAIN] = STRINGID_PKMNSAPPEDBYLEECHSEED,
    [B_MSG_LEECH_SEED_OOZE]  = STRINGID_ITSUCKEDLIQUIDOOZE,
};

const u16 gRestUsedStringIds[] =
{
    [B_MSG_REST]          = STRINGID_PKMNSLEPTHEALTHY,
    [B_MSG_REST_STATUSED] = STRINGID_PKMNSLEPTHEALTHY
};

const u16 gUproarOverTurnStringIds[] =
{
    [B_MSG_UPROAR_CONTINUES] = STRINGID_PKMNMAKINGUPROAR,
    [B_MSG_UPROAR_ENDS]      = STRINGID_PKMNCALMEDDOWN
};

const u16 gWokeUpStringIds[] =
{
    [B_MSG_WOKE_UP]        = STRINGID_PKMNWOKEUP,
    [B_MSG_WOKE_UP_UPROAR] = STRINGID_PKMNWOKEUPINUPROAR
};

const u16 gUproarAwakeStringIds[] =
{
    [B_MSG_CANT_SLEEP_UPROAR]  = STRINGID_PKMNCANTSLEEPINUPROAR,
    [B_MSG_UPROAR_KEPT_AWAKE]  = STRINGID_UPROARKEPTPKMNAWAKE,
};

const u16 gStatUpStringIds[] =
{
    [B_MSG_ATTACKER_STAT_CHANGED] = STRINGID_ATTACKERSSTATROSE,
    [B_MSG_DEFENDER_STAT_CHANGED] = STRINGID_DEFENDERSSTATROSE,
    [B_MSG_STAT_WONT_CHANGE] = STRINGID_STATSWONTINCREASE,
    [B_MSG_STAT_CHANGE_EMPTY]    = STRINGID_EMPTYSTRING,
    [B_MSG_STAT_CHANGED_ITEM]     = STRINGID_USINGITEMSTATOFPKMNROSE,
    [B_MSG_USED_DIRE_HIT]      = STRINGID_PKMNUSEDXTOGETPUMPED,
};

const u16 gStatDownStringIds[] =
{
    [B_MSG_ATTACKER_STAT_CHANGED] = STRINGID_ATTACKERSSTATFELL,
    [B_MSG_DEFENDER_STAT_CHANGED] = STRINGID_DEFENDERSSTATFELL,
    [B_MSG_STAT_WONT_CHANGE] = STRINGID_STATSWONTDECREASE,
    [B_MSG_STAT_CHANGE_EMPTY]    = STRINGID_EMPTYSTRING,
    [B_MSG_STAT_CHANGED_ITEM]     = STRINGID_USINGITEMSTATOFPKMNFELL,
};

// Index copied from move's index in sTrappingMoves
const u16 gWrappedStringIds[NUM_TRAPPING_MOVES] =
{
    [B_MSG_WRAPPED_BIND]        = STRINGID_PKMNSQUEEZEDBYBIND,     // MOVE_BIND
    [B_MSG_WRAPPED_WRAP]        = STRINGID_PKMNWRAPPEDBY,          // MOVE_WRAP
    [B_MSG_WRAPPED_FIRE_SPIN]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_FIRE_SPIN
    [B_MSG_WRAPPED_CLAMP]       = STRINGID_PKMNCLAMPED,            // MOVE_CLAMP
    [B_MSG_WRAPPED_WHIRLPOOL]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_WHIRLPOOL
    [B_MSG_WRAPPED_SAND_TOMB]   = STRINGID_PKMNTRAPPEDBYSANDTOMB,  // MOVE_SAND_TOMB
    [B_MSG_WRAPPED_MAGMA_STORM] = STRINGID_TRAPPEDBYSWIRLINGMAGMA, // MOVE_MAGMA_STORM
    [B_MSG_WRAPPED_INFESTATION] = STRINGID_INFESTATION,            // MOVE_INFESTATION
    [B_MSG_WRAPPED_SNAP_TRAP]   = STRINGID_PKMNINSNAPTRAP,         // MOVE_SNAP_TRAP
    [B_MSG_WRAPPED_THUNDER_CAGE]= STRINGID_THUNDERCAGETRAPPED,     // MOVE_THUNDER_CAGE
};

const u16 gMistUsedStringIds[] =
{
    [B_MSG_SET_MIST]    = STRINGID_PKMNSHROUDEDINMIST,
    [B_MSG_MIST_FAILED] = STRINGID_BUTITFAILED
};

const u16 gFocusEnergyUsedStringIds[] =
{
    [B_MSG_GETTING_PUMPED]      = STRINGID_PKMNGETTINGPUMPED,
    [B_MSG_FOCUS_ENERGY_FAILED] = STRINGID_BUTITFAILED
};

const u16 gTransformUsedStringIds[] =
{
    [B_MSG_TRANSFORMED]      = STRINGID_PKMNTRANSFORMEDINTO,
    [B_MSG_TRANSFORM_FAILED] = STRINGID_BUTITFAILED
};

const u16 gSubstituteUsedStringIds[] =
{
    [B_MSG_SET_SUBSTITUTE]    = STRINGID_PKMNMADESUBSTITUTE,
    [B_MSG_SUBSTITUTE_FAILED] = STRINGID_TOOWEAKFORSUBSTITUTE
};

const u16 gGotPoisonedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPOISONED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNWASPOISONED
};

const u16 gGotParalyzedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPARALYZED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNWASPARALYZED
};

const u16 gFellAsleepStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLASLEEP,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNFELLASLEEP,
};

const u16 gGotBurnedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASBURNED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNWASBURNED
};

const u16 gGotFrostbiteStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNGOTFROSTBITE
};

const u16 gFrostbiteHealedStringIds[] =
{
    [B_MSG_FROSTBITE_HEALED]         = STRINGID_PKMNFROSTBITEHEALED2,
    [B_MSG_FROSTBITE_HEALED_BY_MOVE] = STRINGID_PKMNFROSTBITEHEALEDBY
};

const u16 gGotFrozenStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASFROZEN,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNWASFROZEN
};

const u16 gGotDefrostedStringIds[] =
{
    [B_MSG_DEFROSTED]         = STRINGID_PKMNWASDEFROSTED2,
    [B_MSG_DEFROSTED_BY_MOVE] = STRINGID_PKMNWASDEFROSTEDBY
};

const u16 gKOFailedStringIds[] =
{
    [B_MSG_KO_MISS]       = STRINGID_ATTACKMISSED,
    [B_MSG_KO_UNAFFECTED] = STRINGID_PKMNUNAFFECTED
};

const u16 gAttractUsedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLINLOVE,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNSXINFATUATEDY
};

const u16 gAbsorbDrainStringIds[] =
{
    [B_MSG_ABSORB]      = STRINGID_PKMNENERGYDRAINED,
    [B_MSG_ABSORB_OOZE] = STRINGID_ITSUCKEDLIQUIDOOZE
};

const u16 gSportsUsedStringIds[] =
{
    [B_MSG_WEAKEN_ELECTRIC] = STRINGID_ELECTRICITYWEAKENED,
    [B_MSG_WEAKEN_FIRE]     = STRINGID_FIREWEAKENED
};

const u16 gPartyStatusHealStringIds[] =
{
    [B_MSG_BELL]                     = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_ATTACKER] = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_PARTNER]  = STRINGID_BELLCHIMED,
    [B_MSG_BELL_BOTH_SOUNDPROOF]     = STRINGID_BELLCHIMED,
    [B_MSG_SOOTHING_AROMA]           = STRINGID_SOOTHINGAROMA
};

const u16 gFutureMoveUsedStringIds[] =
{
    [B_MSG_FUTURE_SIGHT] = STRINGID_PKMNFORESAWATTACK,
    [B_MSG_DOOM_DESIRE]  = STRINGID_PKMNCHOSEXASDESTINY
};

const u16 gBallEscapeStringIds[] =
{
    [BALL_NO_SHAKES]     = STRINGID_PKMNBROKEFREE,
    [BALL_1_SHAKE]       = STRINGID_ITAPPEAREDCAUGHT,
    [BALL_2_SHAKES]      = STRINGID_AARGHALMOSTHADIT,
    [BALL_3_SHAKES_FAIL] = STRINGID_SHOOTSOCLOSE
};

// Overworld weathers that don't have an associated battle weather default to "It is raining."
const u16 gWeatherStartsStringIds[] =
{
    [WEATHER_NONE]               = STRINGID_ITISRAINING,
    [WEATHER_SUNNY_CLOUDS]       = STRINGID_ITISRAINING,
    [WEATHER_SUNNY]              = STRINGID_ITISRAINING,
    [WEATHER_RAIN]               = STRINGID_ITISRAINING,
    [WEATHER_SNOW]               = STRINGID_STARTEDSNOW,
    [WEATHER_BLIZZARD]           = STRINGID_STARTEDHAIL,
    [WEATHER_RAIN_THUNDERSTORM]  = STRINGID_ITISRAINING,
    [WEATHER_FOG_HORIZONTAL]     = STRINGID_FOGISDEEP,
    [WEATHER_VOLCANIC_ASH]       = STRINGID_ITISRAINING,
    [WEATHER_SANDSTORM]          = STRINGID_SANDSTORMBREWED,
    [WEATHER_FOG_DIAGONAL]       = STRINGID_FOGISDEEP,
    [WEATHER_UNDERWATER]         = STRINGID_ITISRAINING,
    [WEATHER_SHADE]              = STRINGID_ITISRAINING,
    [WEATHER_DROUGHT]            = STRINGID_SUNLIGHTSTRONG,
    [WEATHER_DOWNPOUR]           = STRINGID_ITISRAINING,
    [WEATHER_STRONG_WINDS]       = STRINGID_ITISWINDY,
    [WEATHER_UNDERWATER_BUBBLES] = STRINGID_ITISRAINING,
    [WEATHER_ABNORMAL]           = STRINGID_ITISRAINING
};

const u16 gTerrainStartsStringIds[] =
{
    [B_MSG_TERRAIN_SET_MISTY]    = STRINGID_MISTSWIRLSAROUND,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_ELECTRICCURRENTISRUNNING,
    [B_MSG_TERRAIN_SET_PSYCHIC]  = STRINGID_SEEMSWEIRD,
    [B_MSG_TERRAIN_SET_GRASSY]   = STRINGID_ISCOVEREDWITHGRASS,
    [B_MSG_TERRAIN_SET_ROCKY]    = STRINGID_ISCOVEREDWITHROCKS,
};

const u16 gPrimalWeatherBlocksStringIds[] =
{
    [B_MSG_PRIMAL_WEATHER_FIZZLED_BY_RAIN]      = STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN,
    [B_MSG_PRIMAL_WEATHER_EVAPORATED_IN_SUN]    = STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT,
};

const u16 gInobedientStringIds[] =
{
    [B_MSG_LOAFING]            = STRINGID_PKMNLOAFING,
    [B_MSG_WONT_OBEY]          = STRINGID_PKMNWONTOBEY,
    [B_MSG_TURNED_AWAY]        = STRINGID_PKMNTURNEDAWAY,
    [B_MSG_PRETEND_NOT_NOTICE] = STRINGID_PKMNPRETENDNOTNOTICE,
    [B_MSG_INCAPABLE_OF_POWER] = STRINGID_PKMNINCAPABLEOFPOWER
};

const u16 gSafariGetNearStringIds[] =
{
    [B_MSG_CREPT_CLOSER]    = STRINGID_CREPTCLOSER,
    [B_MSG_CANT_GET_CLOSER] = STRINGID_CANTGETCLOSER,
    [B_MSG_LAY_LOW]         = STRINGID_LAIDLOW
};

const u16 gSafariPokeblockResultStringIds[] =
{
    [B_MSG_MON_CURIOUS]    = STRINGID_PKMNCURIOUSABOUTX,
    [B_MSG_MON_ENTHRALLED] = STRINGID_PKMNENTHRALLEDBYX,
    [B_MSG_MON_IGNORED]    = STRINGID_PKMNIGNOREDX
};

const u16 CureStatusBerryEffectStringID[] =
{
    [B_MSG_NORMALIZED_STATUS] = STRINGID_PKMNSITEMNORMALIZEDSTATUS,
    [B_MSG_PSN]               = STRINGID_PKMNSITEMCUREDPOISON,
    [B_MSG_SLEEP]             = STRINGID_PKMNSITEMWOKEIT,
    [B_MSG_PARALYSIS]         = STRINGID_PKMNSITEMCUREDPARALYSIS,
    [B_MSG_BURN]              = STRINGID_PKMNSITEMHEALEDBURN,
    [B_MSG_FREEZE]            = STRINGID_PKMNSITEMDEFROSTEDIT,
    [B_MSG_CONFUSION]         = STRINGID_PKMNSITEMSNAPPEDOUT,
};

const u16 gCureProblemStringIds_Defender[] =
{
    [B_MSG_PSN]               = STRINGID_DEF_CURE_POISON,
    [B_MSG_SLEEP]             = STRINGID_DEF_CURE_SLEEP,
    [B_MSG_PARALYSIS]         = STRINGID_DEF_CURE_PARALYSIS,
    [B_MSG_BURN]              = STRINGID_DEF_CURE_BURN,
    [B_MSG_FREEZE]            = STRINGID_DEF_CURE_FREEZE,
    [B_MSG_CONFUSION]         = STRINGID_DEF_CURE_CONFUSION,
    [B_MSG_INFATUATION]       = STRINGID_DEF_CURE_INFATUATION,
    [B_MSG_TAUNT]             = STRINGID_DEF_CURE_TORMENT,
};

const u16 gCureProblemStringIds_Attacker[] =
{
    [B_MSG_PSN]               = STRINGID_ATK_CURE_POISON,
    [B_MSG_SLEEP]             = STRINGID_ATK_CURE_SLEEP,
    [B_MSG_PARALYSIS]         = STRINGID_ATK_CURE_PARALYSIS,
    [B_MSG_BURN]              = STRINGID_ATK_CURE_BURN,
    [B_MSG_FREEZE]            = STRINGID_ATK_CURE_FREEZE,
    [B_MSG_CONFUSION]         = STRINGID_ATK_CURE_CONFUSION,
    [B_MSG_INFATUATION]       = STRINGID_ATK_CURE_INFATUATION,
    [B_MSG_TAUNT]             = STRINGID_ATK_CURE_TORMENT,
};

const u16 gCureProblemStringIds_Script[] =
{
    [B_MSG_PSN]               = STRINGID_SCR_CURE_POISON,
    [B_MSG_SLEEP]             = STRINGID_SCR_CURE_SLEEP,
    [B_MSG_PARALYSIS]         = STRINGID_SCR_CURE_PARALYSIS,
    [B_MSG_BURN]              = STRINGID_SCR_CURE_BURN,
    [B_MSG_FREEZE]            = STRINGID_SCR_CURE_FREEZE,
    [B_MSG_CONFUSION]         = STRINGID_SCR_CURE_CONFUSION,
    [B_MSG_INFATUATION]       = STRINGID_SCR_CURE_INFATUATION,
    [B_MSG_TAUNT]             = STRINGID_SCR_CURE_TORMENT,
};

const u16 gStatusPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_BURN]      = STRINGID_ITDOESNTAFFECT,
    [B_MSG_ABILITY_PREVENTS_MOVE_PARALYSIS] = STRINGID_ITDOESNTAFFECT,
    [B_MSG_ABILITY_PREVENTS_MOVE_POISON]    = STRINGID_ITDOESNTAFFECT,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_ITDOESNTAFFECT,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_ITDOESNTAFFECT,
    [B_MSG_ABILITY_PASTEL_VEIL]             = STRINGID_ITDOESNTAFFECT
};

const u16 gItemSwapStringIds[] =
{
    [B_MSG_ITEM_SWAP_TAKEN] = STRINGID_PKMNOBTAINEDX,
    [B_MSG_ITEM_SWAP_GIVEN] = STRINGID_PKMNOBTAINEDX2,
    [B_MSG_ITEM_SWAP_BOTH]  = STRINGID_PKMNOBTAINEDXYOBTAINEDZ
};

const u16 gFlashFireStringIds[] =
{
    [B_MSG_FLASH_FIRE_BOOST]    = STRINGID_PKMNRAISEDFIREPOWERWITH,
    [B_MSG_FLASH_FIRE_NO_BOOST] = STRINGID_PKMNSXMADEYINEFFECTIVE
};

const u16 gCaughtMonStringIds[] =
{
    [B_MSG_SENT_SOMEONES_PC]   = STRINGID_PKMNTRANSFERREDSOMEONESPC,
    [B_MSG_SENT_LANETTES_PC]   = STRINGID_PKMNTRANSFERREDLANETTESPC,
    [B_MSG_SOMEONES_BOX_FULL]  = STRINGID_PKMNBOXSOMEONESPCFULL,
    [B_MSG_LANETTES_BOX_FULL]  = STRINGID_PKMNBOXLANETTESPCFULL,
    [B_MSG_SWAPPED_INTO_PARTY] = STRINGID_PKMNSENTTOPCAFTERCATCH,
};

const u16 gRoomsStringIds[] =
{
    STRINGID_PKMNTWISTEDDIMENSIONS, STRINGID_TRICKROOMENDS,
    STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON, STRINGID_WONDERROOMENDS,
    STRINGID_HELDITEMSLOSEEFFECTS, STRINGID_MAGICROOMENDS,
    STRINGID_EMPTYSTRING
};

const u16 gStatusConditionsStringIds[] =
{
    STRINGID_PKMNWASPOISONED,
    STRINGID_PKMNBADLYPOISONED,
    STRINGID_PKMNWASBURNED,
    STRINGID_PKMNWASPARALYZED,
    STRINGID_PKMNFELLASLEEP,
    STRINGID_PKMNGOTFROSTBITE
};

const u16 gStatus2StringIds[] =
{
    STRINGID_PKMNWASCONFUSED, STRINGID_PKMNFELLINLOVE, STRINGID_TARGETCANTESCAPENOW, STRINGID_PKMNSUBJECTEDTOTORMENT
};

const u16 gDamageNonTypesStartStringIds[] =
{
    [B_MSG_TRAPPED_WITH_VINES]  = STRINGID_TEAMTRAPPEDWITHVINES,
    [B_MSG_CAUGHT_IN_VORTEX]    = STRINGID_TEAMCAUGHTINVORTEX,
    [B_MSG_SURROUNDED_BY_FIRE]  = STRINGID_TEAMSURROUNDEDBYFIRE,
    [B_MSG_SURROUNDED_BY_ROCKS] = STRINGID_TEAMSURROUNDEDBYROCKS,
};

const u16 gDamageNonTypesDmgStringIds[] =
{
    [B_MSG_HURT_BY_VINES]        = STRINGID_PKMNHURTBYVINES,
    [B_MSG_HURT_BY_VORTEX]       = STRINGID_PKMNHURTBYVORTEX,
    [B_MSG_BURNING_UP]           = STRINGID_PKMNBURNINGUP,
    [B_MSG_HURT_BY_ROCKS_THROWN] = STRINGID_PKMNHURTBYROCKSTHROWN,
};

const u16 gDefogHazardsStringIds[] =
{
    [HAZARDS_SPIKES] = STRINGID_SPIKESDISAPPEARED,
    [HAZARDS_STICKY_WEB] = STRINGID_BLEWAWAYSTICKYWEB,
    [HAZARDS_TOXIC_SPIKES] = STRINGID_TOXICSPIKESDISAPPEARED,
    [HAZARDS_STEALTH_ROCK] = STRINGID_STEALTHROCKDISAPPEARED,
    [HAZARDS_STEELSURGE] = STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM,
};

const u16 gSpinHazardsStringIds[] =
{
    [HAZARDS_SPIKES] = STRINGID_SPIKESDISAPPEARED,
    [HAZARDS_STICKY_WEB] = STRINGID_BLEWAWAYSTICKYWEB,
    [HAZARDS_TOXIC_SPIKES] = STRINGID_TOXICSPIKESDISAPPEARED,
    [HAZARDS_STEALTH_ROCK] = STRINGID_STEALTHROCKDISAPPEARED,
    [HAZARDS_STEELSURGE] = STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM,
};

const u8 gText_PkmnIsEvolving[] = _("What?\n{STR_VAR_1} is evolving!");
const u8 gText_CongratsPkmnEvolved[] = _("Congratulations! Your {STR_VAR_1}\nevolved into {STR_VAR_2}!{WAIT_SE}\p");
const u8 gText_PkmnStoppedEvolving[] = _("Huh? {STR_VAR_1}\nstopped evolving!\p");
const u8 gText_EllipsisQuestionMark[] = _("……?\p");
const u8 gText_WhatWillPkmnDo[] = _("What will\n{B_BUFF1} do?");
const u8 gText_WhatWillPkmnDo2[] = _("What will\n{B_PLAYER_NAME} do?");
const u8 gText_WhatWillWallyDo[] = _("What will\nWALLY do?");
const u8 gText_LinkStandby[] = _("{PAUSE 16}Link standby…");
const u8 gText_BattleMenu[] = _("Battle{CLEAR_TO 56}Bag\nPokémon{CLEAR_TO 56}Run");
const u8 gText_SafariZoneMenu[] = _("Ball{CLEAR_TO 56}Lay Low\nGo Near{CLEAR_TO 56}Run");
const u8 gText_MoveInterfacePP[] = _("PP ");
const u8 gText_MoveInterfaceType[] = _("Type: ");
const u8 gText_MoveInterfacePpType[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}PP\nType: ");
const u8 gText_MoveInterfaceDynamicColors[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_WhichMoveToForget4[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}Which move should\nbe forgotten?");
const u8 gText_BattleYesNoChoice[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}Yes\nNo");
const u8 gText_BattleSwitchWhich[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}Switch\nwhich?");
const u8 gText_BattleSwitchWhich2[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_BattleSwitchWhich3[] = _("{UP_ARROW}");
const u8 gText_BattleSwitchWhich4[] = _("{ESCAPE 4}");
const u8 gText_BattleSwitchWhich5[] = _("-");
const u8 gText_SafariBalls[] = _("Safari Balls");
const u8 gText_SafariBallLeft[] = _("Left: $" "");
const u8 gText_Sleep[] = _("sleep");
const u8 gText_Poison[] = _("poison");
const u8 gText_Burn[] = _("burn");
const u8 gText_Paralysis[] = _("paralysis");
const u8 gText_Ice[] = _("ice");
const u8 gText_Confusion[] = _("confusion");
const u8 gText_Love[] = _("love");
const u8 gText_SpaceAndSpace[] = _(" and ");
const u8 gText_CommaSpace[] = _(", ");
const u8 gText_Space2[] = _(" ");
const u8 gText_LineBreak[] = _("\l");
const u8 gText_NewLine[] = _("\n");
const u8 gText_Are[] = _("are");
const u8 gText_Are2[] = _("are");
const u8 gText_BadEgg[] = _("Bad Egg");
const u8 gText_BattleWallyName[] = _("WALLY");
const u8 gText_Win[] = _("{HIGHLIGHT TRANSPARENT}Win");
const u8 gText_Loss[] = _("{HIGHLIGHT TRANSPARENT}Loss");
const u8 gText_Draw[] = _("{HIGHLIGHT TRANSPARENT}Draw");
const u8 gText_BattleTourney[] = _("BATTLE TOURNEY");

const u8 *const gRoundsStringTable[DOME_ROUNDS_COUNT] =
{
    [DOME_ROUND1]    = COMPOUND_STRING("Round 1"),
    [DOME_ROUND2]    = COMPOUND_STRING("Round 2"),
    [DOME_SEMIFINAL] = COMPOUND_STRING("Semifinal"),
    [DOME_FINAL]     = COMPOUND_STRING("Final"),
};

const u8 gText_TheGreatNewHope[] = _("The great new hope!\p");
const u8 gText_WillChampionshipDreamComeTrue[] = _("Will the championship dream come true?!\p");
const u8 gText_AFormerChampion[] = _("A former champion!\p");
const u8 gText_ThePreviousChampion[] = _("The previous champion!\p");
const u8 gText_TheUnbeatenChampion[] = _("The unbeaten champion!\p");
const u8 gText_PlayerMon1Name[] = _("{B_PLAYER_MON1_NAME}");
const u8 gText_Vs[] = _("VS");
const u8 gText_OpponentMon1Name[] = _("{B_OPPONENT_MON1_NAME}");
const u8 gText_Mind[] = _("Mind");
const u8 gText_Skill[] = _("Skill");
const u8 gText_Body[] = _("Body");
const u8 gText_Judgment[] = _("{B_BUFF1}{CLEAR 13}Judgment{CLEAR 13}{B_BUFF2}");
const u8 gText_RecordBattleToPass[] = _("Would you like to record your battle\non your Frontier Pass?");
const u8 gText_BattleRecordedOnPass[] = _("{B_PLAYER_NAME}'s battle result was recorded\non the Frontier Pass.");

const u16 gBattlePalaceFlavorTextTable[] =
{
    [B_MSG_GLINT_IN_EYE]   = STRINGID_GLINTAPPEARSINEYE,
    [B_MSG_GETTING_IN_POS] = STRINGID_PKMNGETTINGINTOPOSITION,
    [B_MSG_GROWL_DEEPLY]   = STRINGID_PKMNBEGANGROWLINGDEEPLY,
    [B_MSG_EAGER_FOR_MORE] = STRINGID_PKMNEAGERFORMORE,
};

const u8 *const gRefereeStringsTable[] =
{
    [B_MSG_REF_NOTHING_IS_DECIDED] = COMPOUND_STRING("REFEREE: If nothing is decided in 3 turns, we will go to judging!"),
    [B_MSG_REF_THATS_IT]           = COMPOUND_STRING("REFEREE: That's it! We will now go to judging to determine the winner!"),
    [B_MSG_REF_JUDGE_MIND]         = COMPOUND_STRING("REFEREE: Judging category 1, Mind! The POKéMON showing the most guts!\p"),
    [B_MSG_REF_JUDGE_SKILL]        = COMPOUND_STRING("REFEREE: Judging category 2, Skill! The POKéMON using moves the best!\p"),
    [B_MSG_REF_JUDGE_BODY]         = COMPOUND_STRING("REFEREE: Judging category 3, Body! The POKéMON with the most vitality!\p"),
    [B_MSG_REF_PLAYER_WON]         = COMPOUND_STRING("REFEREE: Judgment: {B_BUFF1} to {B_BUFF2}! The winner is {B_PLAYER_NAME}'s {B_PLAYER_MON1_NAME}!\p"),
    [B_MSG_REF_OPPONENT_WON]       = COMPOUND_STRING("REFEREE: Judgment: {B_BUFF1} to {B_BUFF2}! The winner is {B_TRAINER1_NAME}'s {B_OPPONENT_MON1_NAME}!\p"),
    [B_MSG_REF_DRAW]               = COMPOUND_STRING("REFEREE: Judgment: 3 to 3! We have a draw!\p"),
    [B_MSG_REF_COMMENCE_BATTLE]    = COMPOUND_STRING("REFEREE: {B_PLAYER_MON1_NAME} VS {B_OPPONENT_MON1_NAME}! Commence battling!"),
};

static const struct BattleWindowText sTextOnWindowsInfo_Normal[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 1,
        .fgColor = 11,
        .bgColor = 15,
        .shadowColor = 7,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .fgColor = 11,
        .bgColor = 15,
        .shadowColor = 7,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 2,
    },
    [B_WIN_VS_PLAYER] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_OPPONENT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_OUTCOME_DRAW] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
    [B_WIN_VS_OUTCOME_LEFT] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
    [B_WIN_VS_OUTCOME_RIGHT] = {
        .fillValue = PIXEL_FILL(0x0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
    [B_WIN_MOVE_DESCRIPTION] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
};

static const struct BattleWindowText sTextOnWindowsInfo_Arena[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 2,
    },
    [ARENA_WIN_PLAYER_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_VS] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_OPPONENT_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_MIND] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_SKILL] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_BODY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_JUDGMENT_TITLE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_JUDGMENT_TEXT] = {
        .fillValue = PIXEL_FILL(0x1),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .fgColor = 2,
        .bgColor = 1,
        .shadowColor = 3,
    },
    [B_WIN_MOVE_DESCRIPTION] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .fgColor = TEXT_DYNAMIC_COLOR_4,
        .bgColor = TEXT_DYNAMIC_COLOR_5,
        .shadowColor = TEXT_DYNAMIC_COLOR_6,
    },
};

static const struct BattleWindowText *const sBattleTextOnWindowsInfo[] =
{
    [B_WIN_TYPE_NORMAL] = sTextOnWindowsInfo_Normal,
    [B_WIN_TYPE_ARENA]  = sTextOnWindowsInfo_Arena
};

static const u8 sRecordedBattleTextSpeeds[] = {8, 4, 1, 0};

void BufferStringBattle(enum StringID stringID, u32 battler)
{
    s32 i;
    const u8 *stringPtr = NULL;

    gBattleMsgDataPtr = (struct BattleMsgData *)(&gBattleResources->bufferA[battler][4]);
    gLastUsedItem = gBattleMsgDataPtr->lastItem;
    gLastUsedAbility = gBattleMsgDataPtr->lastAbility;
    gBattleScripting.battler = gBattleMsgDataPtr->scrActive;
    gBattleStruct->scriptPartyIdx = gBattleMsgDataPtr->bakScriptPartyIdx;
    gBattleStruct->hpScale = gBattleMsgDataPtr->hpScale;
    gPotentialItemEffectBattler = gBattleMsgDataPtr->itemEffectBattler;
    gBattleStruct->stringMoveType = gBattleMsgDataPtr->moveType;

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        sBattlerAbilities[i] = gBattleMsgDataPtr->abilities[i];
    }
    for (i = 0; i < TEXT_BUFF_ARRAY_COUNT; i++)
    {
        gBattleTextBuff1[i] = gBattleMsgDataPtr->textBuffs[0][i];
        gBattleTextBuff2[i] = gBattleMsgDataPtr->textBuffs[1][i];
        gBattleTextBuff3[i] = gBattleMsgDataPtr->textBuffs[2][i];
    }

    switch (stringID)
    {
    case STRINGID_SPIKESSCATTERED:
    case STRINGID_POISONSPIKESSCATTERED:
        if (IsOnPlayerSide(gBattlerTarget))
            sHazardString = STRINGID_HAZARDSTR_1;
        else
            sHazardString = STRINGID_HAZARDSTR_2;
        break;
    case STRINGID_SPIKESDISAPPEARED:
    case STRINGID_TOXICSPIKESDISAPPEARED:
    case STRINGID_BLEWAWAYSTICKYWEB:
        if (IsOnPlayerSide(gBattlerAttacker))
            sHazardString = STRINGID_HAZARDSTR_1;
        else
            sHazardString = STRINGID_HAZARDSTR_3;
        break;
    case STRINGID_POINTEDSTONESFLOAT:
        if (IsOnPlayerSide(gBattlerTarget))
            sHazardString = STRINGID_HAZARDSTR_4;
        else
            sHazardString = STRINGID_HAZARDSTR_5;
        break;
    case STRINGID_STEALTHROCKDISAPPEARED:
        if (IsOnPlayerSide(gBattlerAttacker))
            sHazardString = STRINGID_HAZARDSTR_6;
        else
            sHazardString = STRINGID_HAZARDSTR_7;
        break;
    case STRINGID_STICKYWEBUSED:
        if (IsOnPlayerSide(gBattlerTarget))
            sHazardString = STRINGID_HAZARDSTR_8;
        else
            sHazardString = STRINGID_HAZARDSTR_9;
        break;
    default:
        sHazardString = STRINGID_HAZARDSTR_1;
        break;
    }
    switch (stringID)
    {
    case STRINGID_INTROMSG: // first battle msg
        gAutoScrollMessage = TRUE;
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED || gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            stringPtr = sTrainerIntroLink;
        else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        {
            if ((gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER)) || (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS))
                stringPtr = sTrainerIntroDouble;
            else
                stringPtr = sTrainerIntro;
        }
        else
        {
            if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT))))
                stringPtr = sTwoWildMonAppeared;
            else if (FlagGet(FLAG_WILD_TRAINER_MON))
                stringPtr = sTrainerMonAppeared;
            else
                stringPtr = sWildMonAppeared;
        }
        break;
    case STRINGID_INTROSENDOUT: // poke first send-out
        gAutoScrollMessage = 0;
        if (IsOnPlayerSide(battler))
        {
            if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(BATTLE_PARTNER(battler))))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                    stringPtr = sPartnerSentOut;
                else
                    stringPtr = sPlayerSentOutDouble;
            }
            else
            {
                stringPtr = sPlayerSentOut;
            }
        }
        else
        {
            if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(BATTLE_PARTNER(battler))))
            {
                if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sTrainerSentOutDouble;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sTwoTrainersSentOut;
                else
                    stringPtr = sTrainerSentOutDouble;
            }
            else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED || gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                stringPtr = sTrainerSentOutLink;
            else
            {
                stringPtr = sTrainerSentOut;
            }
        }
        break;
    case STRINGID_RETURNMON: // sending poke to ball msg
        if (IsOnPlayerSide(battler))
        {
            if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && GetBattlerPosition(battler) == B_POSITION_PLAYER_RIGHT)
                stringPtr = sText_InGamePartnerWithdrewPkmn2;
            else if (*(&gBattleStruct->hpScale) == 0)
                stringPtr = sReturnPlayerMon1;
            else if (*(&gBattleStruct->hpScale) == 1 || IsDoubleBattle())
                stringPtr = sReturnPlayerMon2;
            else if (*(&gBattleStruct->hpScale) == 2)
                stringPtr = sReturnPlayerMon3;
            else
                stringPtr = sReturnPlayerMon4;
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED || gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                stringPtr = sReturnTrainerMonLink;
            else
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                {
                    if (GetBattlerPosition(battler) == B_POSITION_OPPONENT_LEFT)
                        stringPtr = sText_Trainer1WithdrewPkmn;
                    else
                        stringPtr = sText_Trainer2WithdrewPkmn;

                }
                else
                {
                    stringPtr = sText_Trainer1WithdrewPkmn;
                }
            }
        }
        break;
    case STRINGID_SWITCHINMON: // switch-in msg
        if (IsOnPlayerSide(gBattleScripting.battler))
        {
            if ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER) && (GetBattlerAtPosition(gBattleScripting.battler) == 2))
                stringPtr = sText_InGamePartnerSentOutPkmn2;
            else if (*(&gBattleStruct->hpScale) == 0 || IsDoubleBattle())
                stringPtr = sSwitchInPlayerMon1;
            else if (*(&gBattleStruct->hpScale) == 1)
                stringPtr = sSwitchInPlayerMon2;
            else if (*(&gBattleStruct->hpScale) == 2)
                stringPtr = sSwitchInPlayerMon3;
            else
                stringPtr = sSwitchInPlayerMon4;
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_RECORDED || gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                stringPtr = sSwitchInTrainer1MonLink;
            else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
            {
                if (gBattleScripting.battler == 1)
                    stringPtr = sSwitchInTrainer1Mon;
                else
                {
                    if (TESTING && gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    {
                        if (gBattleScripting.battler == 1)
                        {
                            stringPtr = sText_Trainer1SentOutPkmn;
                        }
                        else
                        {
                            if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                                stringPtr = sText_Trainer2SentOutPkmn;
                            else
                                stringPtr = sText_Trainer1SentOutPkmn2;
                        }
                    }
                    else if (TESTING && gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    {
                        if (gBattleScripting.battler == 1)
                            stringPtr = sText_Trainer1SentOutPkmn;
                        else
                            stringPtr = sText_Trainer2SentOutPkmn;
                    }
                    else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    {
                        stringPtr = sText_LinkTrainerMultiSentOutPkmn;
                    }
                    else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
                    {
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    }
                    else
                    {
                        stringPtr = sText_LinkTrainerSentOutPkmn2;
                    }
                }
            }
            else
            {
                stringPtr = sSwitchInTrainer1Mon;
            }
        }
        break;
    case STRINGID_USEDMOVE: // Pokémon used a move msg
        if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT
         && !IsZMove(gBattleMsgDataPtr->currentMove)
         && !IsMaxMove(gBattleMsgDataPtr->currentMove))
            StringCopy(gBattleTextBuff3, gTypesInfo[*(&gBattleStruct->stringMoveType)].generic);
        else
            StringCopy(gBattleTextBuff3, GetMoveName(gBattleMsgDataPtr->currentMove));
        stringPtr = sMonUsedMove;
        break;
    case STRINGID_BATTLEEND: // battle end
        gAutoScrollMessage = TRUE;
        if (!IsOnPlayerSide(battler) && gBattleTextBuff1[0] != B_OUTCOME_DREW)
            gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
        {
            switch (gBattleTextBuff1[0])
            {
            case B_OUTCOME_WON:
                stringPtr = sPlayerDefeatedTrainerDouble;
                break;
            case B_OUTCOME_LOST:
                stringPtr = sPlayerLostToTrainerDouble;
                break;
            case B_OUTCOME_DREW:
                stringPtr = sText_PlayerBattledToDrawVsTwo;
                break;
            }
        }
        else
        {
            switch (gBattleTextBuff1[0])
            {
            case B_OUTCOME_WON:
                stringPtr = sPlayerDefeatedTrainer;
                break;
            case B_OUTCOME_LOST:
                stringPtr = sPlayerLostToTrainer;
                break;
            case B_OUTCOME_DREW:
                stringPtr = sText_PlayerBattledToDrawVsOne;
                break;
            }
        }
        break;
    case STRINGID_TRAINERSLIDE:
        stringPtr = gBattleStruct->trainerSlideMsg;
        break;
    default: // load a string from the table
        if (stringID >= STRINGID_COUNT)
        {
            gDisplayedStringBattle[0] = EOS;
            return;
        }
        else
        {
            stringPtr = gBattleStringsTable[stringID];
        }
        break;
    }

    BattleStringExpandPlaceholdersToDisplayedString(stringPtr);
}

u32 BattleStringExpandPlaceholdersToDisplayedString(const u8 *src)
{
#ifndef NDEBUG
    u32 j, strWidth;
    u32 dstID = BattleStringExpandPlaceholders(src, gDisplayedStringBattle, sizeof(gDisplayedStringBattle));
    for (j = 1;; j++)
    {
        strWidth = GetStringLineWidth(0, gDisplayedStringBattle, 0, j, sizeof(gDisplayedStringBattle));
        if (strWidth == 0)
            break;
    }
    return dstID;
#else
    return BattleStringExpandPlaceholders(src, gDisplayedStringBattle, sizeof(gDisplayedStringBattle));
#endif
}

static const u8 *TryGetStatusString(u8 *src)
{
    u32 i;
    u8 status[8];
    u32 chars1, chars2;
    u8 *statusPtr;

    memcpy(status, sText_EmptyStatus, min(ARRAY_COUNT(status), ARRAY_COUNT(sText_EmptyStatus)));

    statusPtr = status;
    for (i = 0; i < ARRAY_COUNT(status); i++)
    {
        if (*src == EOS) break; // one line required to match -g
        *statusPtr = *src;
        src++;
        statusPtr++;
    }

    chars1 = *(u32 *)(&status[0]);
    chars2 = *(u32 *)(&status[4]);

    for (i = 0; i < ARRAY_COUNT(gStatusConditionStringsTable); i++)
    {
        if (chars1 == *(u32 *)(&gStatusConditionStringsTable[i][0][0])
            && chars2 == *(u32 *)(&gStatusConditionStringsTable[i][0][4]))
            return gStatusConditionStringsTable[i][1];
    }
    return NULL;
}

static void GetBattlerNick(u32 battler, u8 *dst)
{
    struct Pokemon *illusionMon = GetIllusionMonPtr(battler);
    struct Pokemon *mon = GetBattlerMon(battler);

    if (illusionMon != NULL)
        mon = illusionMon;
    GetMonData(mon, MON_DATA_NICKNAME, dst);
    StringGet_Nickname(dst);
}

#define HANDLE_NICKNAME_STRING_CASE(battler)                            \
    if (!IsOnPlayerSide(battler))                                       \
    {                                                                   \
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER                      \
         || FlagGet(FLAG_WILD_TRAINER_MON))                             \
            toCpy = sFoePrefix;                                         \
        else                                                            \
            toCpy = sWildPrefix;                                        \
        while (*toCpy != EOS)                                           \
        {                                                               \
            dst[dstID] = *toCpy;                                        \
            dstID++;                                                    \
            toCpy++;                                                    \
        }                                                               \
    }                                                                   \
    GetBattlerNick(battler, text);                                      \
    toCpy = text;

#define HANDLE_NICKNAME_STRING_LOWERCASE(battler)                       \
    if (!IsOnPlayerSide(battler))                                       \
    {                                                                   \
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER                      \
         || FlagGet(FLAG_WILD_TRAINER_MON))                             \
            toCpy = sFoePrefixLowerCase;                                \
        else                                                            \
            toCpy = sWildPrefixLowerCase;                               \
        while (*toCpy != EOS)                                           \
        {                                                               \
            dst[dstID] = *toCpy;                                        \
            dstID++;                                                    \
            toCpy++;                                                    \
        }                                                               \
    }                                                                   \
    GetBattlerNick(battler, text);                                      \
    toCpy = text;


static const u8 *BattleStringGetOpponentNameByTrainerId(u16 trainerId, u8 *text, u8 multiplayerId, u8 battler)
{
    const u8 *toCpy = NULL;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
    {
        u32 i;
        for (i = 0; i < ARRAY_COUNT(gBattleResources->secretBase->trainerName); i++)
            text[i] = gBattleResources->secretBase->trainerName[i];
        text[i] = EOS;
        ConvertInternationalString(text, gBattleResources->secretBase->language);
        toCpy = text;
    }
    else if (trainerId == TRAINER_LINK_OPPONENT)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battler)].name;
        else
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battler) & BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
    {
        CopyFrontierBrainTrainerName(text);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
    {
        GetFrontierTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
    {
        GetTrainerHillTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
    {
        GetEreaderTrainerName(text);
        toCpy = text;
    }
    else
    {
        toCpy = GetTrainerNameFromId(trainerId);
    }

    return toCpy;
}

static const u8 *BattleStringGetOpponentName(u8 *text, u8 multiplayerId, u8 battler)
{
    const u8 *toCpy = NULL;

    switch (GetBattlerPosition(battler))
    {
    case B_POSITION_OPPONENT_LEFT:
        toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, battler);
        break;
    case B_POSITION_OPPONENT_RIGHT:
        if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_MULTI) && !BATTLE_TWO_VS_ONE_OPPONENT)
            toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, text, multiplayerId, battler);
        else
            toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, battler);
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetPlayerName(u8 *text, u8 battler)
{
    const u8 *toCpy = NULL;

    switch (GetBattlerPosition(battler))
    {
    case B_POSITION_PLAYER_LEFT:
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            toCpy = gLinkPlayers[0].name;
        else
            toCpy = gSaveBlock2Ptr->playerName;
        break;
    case B_POSITION_PLAYER_RIGHT:
        if (((gBattleTypeFlags & BATTLE_TYPE_RECORDED) && !(gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER)))
            || gTestRunnerEnabled)
        {
            toCpy = gLinkPlayers[0].name;
        }
        else if ((gBattleTypeFlags & BATTLE_TYPE_LINK) && gBattleTypeFlags & (BATTLE_TYPE_RECORDED | BATTLE_TYPE_MULTI))
        {
            toCpy = gLinkPlayers[2].name;
        }
        else if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
        {
            GetFrontierTrainerName(text, gPartnerTrainerId);
            toCpy = text;
        }
        else
        {
            toCpy = gSaveBlock2Ptr->playerName;
        }
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetTrainerName(u8 *text, u8 multiplayerId, u8 battler)
{
    if (IsOnPlayerSide(battler))
        return BattleStringGetPlayerName(text, battler);
    else
        return BattleStringGetOpponentName(text, multiplayerId, battler);
}

static const u8 *BattleStringGetOpponentClassByTrainerId(u16 trainerId)
{
    const u8 *toCpy;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
        toCpy = gTrainerClasses[GetSecretBaseTrainerClass()].name;
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
        toCpy = gTrainerClasses[GetFrontierBrainTrainerClass()].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        toCpy = gTrainerClasses[GetFrontierOpponentClass(trainerId)].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
        toCpy = gTrainerClasses[GetTrainerHillOpponentClass(trainerId)].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
        toCpy = gTrainerClasses[GetEreaderTrainerClassId()].name;
    else
        toCpy = gTrainerClasses[GetTrainerClassFromId(trainerId)].name;

    return toCpy;
}

// Ensure the defined length for an item name can contain the full defined length of a berry name.
// This ensures that custom Enigma Berry names will fit in the text buffer at the top of BattleStringExpandPlaceholders.
STATIC_ASSERT(BERRY_NAME_LENGTH + 6 <= ITEM_NAME_LENGTH, BerryNameTooLong);

u32 BattleStringExpandPlaceholders(const u8 *src, u8 *dst, u32 dstSize)
{
    u32 dstID = 0; // if they used dstID, why not use srcID as well?
    const u8 *toCpy = NULL;
    u8 text[max(max(max(32, TRAINER_NAME_LENGTH + 1), POKEMON_NAME_LENGTH + 1), ITEM_NAME_LENGTH)];
    u8 *textStart = &text[0];
    u8 multiplayerId;
    u8 fontId = FONT_NORMAL;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
        multiplayerId = gRecordedBattleMultiplayerId;
    else
        multiplayerId = GetMultiplayerId();

    // Clear destination first
    while (dstID < dstSize)
    {
        dst[dstID] = EOS;
        dstID++;
    }

    dstID = 0;
    while (*src != EOS)
    {
        toCpy = NULL;

        if (*src == PLACEHOLDER_BEGIN)
        {
            src++;
            u32 classLength = 0;
            u32 nameLength = 0;
            const u8 *classString;
            const u8 *nameString;
            switch (*src)
            {
            case B_TXT_BUFF1:
                if (gBattleTextBuff1[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff1, gStringVar1);
                    toCpy = gStringVar1;
                }
                else
                {
                    toCpy = TryGetStatusString(gBattleTextBuff1);
                    if (toCpy == NULL)
                        toCpy = gBattleTextBuff1;
                }
                break;
            case B_TXT_BUFF2:
                if (gBattleTextBuff2[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff2, gStringVar2);
                    toCpy = gStringVar2;
                }
                else
                {
                    toCpy = gBattleTextBuff2;
                }
                break;
            case B_TXT_BUFF3:
                if (gBattleTextBuff3[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff3, gStringVar3);
                    toCpy = gStringVar3;
                }
                else
                {
                    toCpy = gBattleTextBuff3;
                }
                break;
            case B_TXT_COPY_VAR_1:
                toCpy = gStringVar1;
                break;
            case B_TXT_COPY_VAR_2:
                toCpy = gStringVar2;
                break;
            case B_TXT_COPY_VAR_3:
                toCpy = gStringVar3;
                break;
            case B_TXT_PLAYER_MON1_NAME: // first player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON1_NAME: // first enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_PLAYER_MON2_NAME: // second player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON2_NAME: // second enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON1_NAME: // link first player poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id, text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON1_NAME: // link first opponent poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 1, text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON2_NAME: // link second player poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 2, text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON2_NAME: // link second opponent poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 3, text);
                toCpy = text;
                break;
            case B_ATK_NAME_PREFIX_MON1: // Unused, to change into sth else.
                break;
            case B_TXT_ATK_PARTNER_NAME: // attacker partner name
                GetBattlerNick(BATTLE_PARTNER(gBattlerAttacker), text);
                toCpy = text;
                break;
            case B_ATK_NAME_PREFIX: // attacker name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerAttacker)
                break;
            case B_DEF_NAME_PREFIX: // target name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerTarget)
                break;
            case B_TXT_DEF_NAME: // target name
                GetBattlerNick(gBattlerTarget, text);
                toCpy = text;
                break;
            // case B_TXT_DEF_PARTNER_NAME: // partner target name
            //     GetBattlerNick(BATTLE_PARTNER(gBattlerTarget), text);
            //     toCpy = text;
            //     break;
            case B_EFF_NAME_PREFIX: // effect battler name with prefix
                HANDLE_NICKNAME_STRING_CASE(gEffectBattler)
                break;
            case B_SCR_NAME_PREFIX: // scripting active battler name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattleScripting.battler)
                break;
            case B_TXT_CURRENT_MOVE: // current move name
                if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT
                 && !IsZMove(gBattleMsgDataPtr->currentMove)
                 && !IsMaxMove(gBattleMsgDataPtr->currentMove))
                    toCpy = gTypesInfo[gBattleStruct->stringMoveType].generic;
                else
                    toCpy = GetMoveName(gBattleMsgDataPtr->currentMove);
                break;
            case B_TXT_LAST_MOVE: // originally used move name
                if (gBattleMsgDataPtr->originallyUsedMove >= MOVES_COUNT
                 && !IsZMove(gBattleMsgDataPtr->currentMove)
                 && !IsMaxMove(gBattleMsgDataPtr->currentMove))
                    toCpy = gTypesInfo[gBattleStruct->stringMoveType].generic;
                else
                    toCpy = GetMoveName(gBattleMsgDataPtr->originallyUsedMove);
                break;
            case B_TXT_LAST_ITEM: // last used item
                if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                {
                    if (gLastUsedItem == ITEM_ENIGMA_BERRY_E_READER)
                    {
                        if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
                        {
                            if ((gBattleScripting.multiplayerId != 0 && (gPotentialItemEffectBattler & BIT_SIDE))
                                || (gBattleScripting.multiplayerId == 0 && !(gPotentialItemEffectBattler & BIT_SIDE)))
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, gBattleStringsTable[STRINGID_BERRYSUFFIX]);
                                toCpy = text;
                            }
                            else
                            {
                                toCpy = gBattleStringsTable[STRINGID_ENIGMABERRY];
                            }
                        }
                        else
                        {
                            if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, gBattleStringsTable[STRINGID_BERRYSUFFIX]);
                                toCpy = text;
                            }
                            else
                            {
                                toCpy = gBattleStringsTable[STRINGID_ENIGMABERRY];
                            }
                        }
                    }
                    else
                    {
                        CopyItemName(gLastUsedItem, text);
                        toCpy = text;
                    }
                }
                else
                {
                    CopyItemName(gLastUsedItem, text);
                    toCpy = text;
                }
                break;
            case B_TXT_LAST_ABILITY: // last used ability
                toCpy = gAbilitiesInfo[gLastUsedAbility].name;
                break;
            case B_TXT_ATK_ABILITY: // attacker ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattlerAttacker]].name;
                break;
            case B_TXT_DEF_ABILITY: // target ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattlerTarget]].name;
                break;
            case B_TXT_SCR_ACTIVE_ABILITY: // scripting active ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattleScripting.battler]].name;
                break;
            case B_TXT_EFF_ABILITY: // effect battler ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gEffectBattler]].name;
                break;
            case B_TXT_TRAINER1_CLASS: // trainer class name
                toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                break;
            case B_TXT_TRAINER1_NAME: // trainer1 name
                if (!TESTING && (gTrainers[1][TRAINER_BATTLE_PARAM.opponentA].trainerClass == TRAINER_CLASS_BROTHER) && !(gBattleTypeFlags & BATTLE_TYPE_FRONTIER))
                    toCpy = GetExpandedPlaceholder(PLACEHOLDER_ID_BROTHER);
                else
                    toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
                break;
            case B_TXT_TRAINER1_NAME_WITH_CLASS: // trainer1 name with trainer class
                toCpy = textStart;
                classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, textStart, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_LINK_PLAYER_NAME: // link player name
                toCpy = gLinkPlayers[multiplayerId].name;
                break;
            case B_TXT_LINK_PARTNER_NAME: // link partner name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT1_NAME: // link opponent 1 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_OPPOSITE(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT2_NAME: // link opponent 2 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(BATTLE_OPPOSITE(gLinkPlayers[multiplayerId].id)))].name;
                break;
            case B_TXT_LINK_SCR_TRAINER_NAME: // link scripting active name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(gBattleScripting.battler)].name;
                break;
            case B_TXT_PLAYER_NAME: // player name
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_LEFT));
                break;
            case B_TXT_TRAINER1_LOSE_TEXT: // trainerA lose text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerALoseText();
                }
                break;
            case B_TXT_TRAINER1_WIN_TEXT: // trainerA win text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_PC_CREATOR_NAME: // lanette pc
                if (FlagGet(FLAG_SYS_PC_LANETTE))
                    toCpy = sLanettes;
                else
                    toCpy = sSomeones;
                break;
            case B_TXT_ATK_PREFIX2:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sAllyPrefix;
                else
                    toCpy = sFoePrefixNoSpace;
                break;
            case B_TXT_DEF_PREFIX2:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sAllyPrefix;
                else
                    toCpy = sFoePrefixNoSpace;
                break;
            case B_TXT_ATK_PREFIX1:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sAllyPrefix;
                else
                    toCpy = sFoePrefixNoSpace;
                break;
            case B_TXT_DEF_PREFIX1:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sAllyPrefix;
                else
                    toCpy = sFoePrefixNoSpace;
                break;
            case B_TXT_ATK_PREFIX3:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sAllyPrefix;
                else
                    toCpy = sFoePrefixNoSpace;
                break;
            case B_TXT_DEF_PREFIX3:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sAllyPrefix;
                else
                    toCpy = sFoePrefixNoSpace;
                break;
            case B_TXT_TRAINER2_CLASS:
                toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                break;
            case B_TXT_TRAINER2_NAME:
                toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT));
                break;
            case B_TXT_TRAINER2_NAME_WITH_CLASS:
                toCpy = textStart;
                classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, textStart, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_TRAINER2_LOSE_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerBLoseText();
                }
                break;
            case B_TXT_TRAINER2_WIN_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_PARTNER_CLASS:
                toCpy = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                break;
            case B_TXT_PARTNER_NAME:
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
                break;
            case B_TXT_PARTNER_NAME_WITH_CLASS:
                toCpy = textStart;
                classString = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetPlayerName(textStart, GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_ATK_TRAINER_NAME:
                if (!TESTING && (gTrainers[1][TRAINER_BATTLE_PARAM.opponentA].trainerClass == TRAINER_CLASS_BROTHER) && !(gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                    && (GetBattlerSide(gBattlerAttacker) == B_SIDE_OPPONENT))
                        toCpy = GetExpandedPlaceholder(PLACEHOLDER_ID_BROTHER);
                else
                    toCpy = BattleStringGetTrainerName(text, multiplayerId, gBattlerAttacker);
                break;
            case B_TXT_ATK_TRAINER_CLASS:
                switch (GetBattlerPosition(gBattlerAttacker))
                {
                case B_POSITION_PLAYER_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                        toCpy = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                    break;
                case B_POSITION_OPPONENT_LEFT:
                    toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                    break;
                case B_POSITION_OPPONENT_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                        toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                    else
                        toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                    break;
                }
                break;
            case B_TXT_ATK_TRAINER_NAME_WITH_CLASS:
                toCpy = textStart;
                if (GetBattlerPosition(gBattlerAttacker) == B_POSITION_PLAYER_LEFT)
                {
                    textStart = StringCopy(textStart, BattleStringGetTrainerName(textStart, multiplayerId, gBattlerAttacker));
                }
                else
                {
                    classString = NULL;
                    switch (GetBattlerPosition(gBattlerAttacker))
                    {
                    case B_POSITION_PLAYER_RIGHT:
                        if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                            classString = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                        break;
                    case B_POSITION_OPPONENT_LEFT:
                        classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                        break;
                    case B_POSITION_OPPONENT_RIGHT:
                        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                            classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                        else
                            classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                        break;
                    }
                    classLength = 0;
                    nameLength = 0;
                    while (classString[classLength] != EOS)
                    {
                        textStart[classLength] = classString[classLength];
                        classLength++;
                    }
                    textStart[classLength] = CHAR_SPACE;
                    textStart += 1 + classLength;
                    nameString = BattleStringGetTrainerName(textStart, multiplayerId, gBattlerAttacker);
                    if (nameString != textStart)
                    {
                        while (nameString[nameLength] != EOS)
                        {
                            textStart[nameLength] = nameString[nameLength];
                            nameLength++;
                        }
                        textStart[nameLength] = EOS;
                    }
                }
                break;
            case B_ATK_TEAM3:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Foe1;
                break;
            case B_ATK_TEAM4:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Foe2;
                break;
            case B_DEF_TEAM3:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Foe1;
                break;
            case B_DEF_TEAM4:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Foe2;
                break;
            case B_TXT_ATK_TEAM1:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_ATK_TEAM2:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_DEF_TEAM1:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_DEF_TEAM2:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_EFF_TEAM1:
                if (IsOnPlayerSide(gEffectBattler))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_EFF_TEAM2:
                if (IsOnPlayerSide(gEffectBattler))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_EFF_TEAM3:
                if (IsOnPlayerSide(gEffectBattler))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Foe1;
                break;
            case B_TXT_EFF_TEAM4:
                if (IsOnPlayerSide(gEffectBattler))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Foe2;
                break;
            case B_TXT_HAZARD_FEET:
                toCpy = gBattleStringsTable[sHazardString];
                sHazardString = 0;
                break;
            case B_ATK_NAME_PREFIX_LOWERCASE:
                HANDLE_NICKNAME_STRING_LOWERCASE(gBattlerAttacker)
                break;
            case B_TXT_DEF_PARTNER_NAME:
                HANDLE_NICKNAME_STRING_LOWERCASE(BATTLE_PARTNER(gBattlerTarget));
                break;
            case B_DEF_NAME_PREFIX_LOWERCASE:
                HANDLE_NICKNAME_STRING_LOWERCASE(gBattlerTarget)
                break;
            case B_EFF_NAME_PREFIX_LOWERCASE:
                HANDLE_NICKNAME_STRING_LOWERCASE(gEffectBattler)
                break;
            case B_SCR_NAME_PREFIX_LOWERCASE:
                HANDLE_NICKNAME_STRING_LOWERCASE(gBattleScripting.battler)
                break;
            }

            if (toCpy != NULL)
            {
                while (*toCpy != EOS)
                {
                    if (*toCpy == CHAR_SPACE)
                        dst[dstID] = CHAR_NBSP;
                    else
                        dst[dstID] = *toCpy;
                    dstID++;
                    toCpy++;
                }
            }

            if (*src == B_TXT_TRAINER1_LOSE_TEXT || *src == B_TXT_TRAINER2_LOSE_TEXT
                || *src == B_TXT_TRAINER1_WIN_TEXT || *src == B_TXT_TRAINER2_WIN_TEXT)
            {
                dst[dstID] = EXT_CTRL_CODE_BEGIN;
                dstID++;
                dst[dstID] = EXT_CTRL_CODE_PAUSE_UNTIL_PRESS;
                dstID++;
            }
        }
        else
        {
            dst[dstID] = *src;
            dstID++;
        }
        src++;
    }

    dst[dstID] = *src;
    dstID++;

    BreakStringAutomatic(dst, BATTLE_MSG_MAX_WIDTH, BATTLE_MSG_MAX_LINES, fontId, SHOW_SCROLL_PROMPT);

    return dstID;
}

static void IllusionNickHack(u32 battler, u32 partyId, u8 *dst)
{
    u32 id = PARTY_SIZE;
    // we know it's gEnemyParty
    struct Pokemon *mon = &gEnemyParty[partyId], *partnerMon;

    if (GetMonAbility(mon) == ABILITY_ILLUSION)
    {
        if (IsBattlerAlive(BATTLE_PARTNER(battler)))
            partnerMon = GetBattlerMon(BATTLE_PARTNER(battler));
        else
            partnerMon = mon;

        id = GetIllusionMonPartyId(gEnemyParty, mon, partnerMon, battler);
    }

    if (id != PARTY_SIZE)
        GetMonData(&gEnemyParty[id], MON_DATA_NICKNAME, dst);
    else
        GetMonData(mon, MON_DATA_NICKNAME, dst);
}

void ExpandBattleTextBuffPlaceholders(const u8 *src, u8 *dst)
{
    u32 srcID = 1;
    u32 value = 0;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u16 hword;

    *dst = EOS;
    while (src[srcID] != B_BUFF_EOS)
    {
        switch (src[srcID])
        {
        case B_BUFF_STRING: // battle string
            hword = T1_READ_16(&src[srcID + 1]);
            StringAppend(dst, gBattleStringsTable[hword]);
            srcID += 3;
            break;
        case B_BUFF_NUMBER: // int to string
            switch (src[srcID + 1])
            {
            case 1:
                value = src[srcID + 3];
                break;
            case 2:
                value = T1_READ_16(&src[srcID + 3]);
                break;
            case 4:
                value = T1_READ_32(&src[srcID + 3]);
                break;
            }
            ConvertIntToDecimalStringN(dst, value, STR_CONV_MODE_LEFT_ALIGN, src[srcID + 2]);
            srcID += src[srcID + 1] + 3;
            break;
        case B_BUFF_MOVE: // move name
            StringAppend(dst, GetMoveName(T1_READ_16(&src[srcID + 1])));
            srcID += 3;
            break;
        case B_BUFF_TYPE: // type name
            StringAppend(dst, gTypesInfo[src[srcID + 1]].name);
            srcID += 2;
            break;
        case B_BUFF_MON_NICK_WITH_PREFIX: // poke nick with prefix
        case B_BUFF_MON_NICK_WITH_PREFIX_LOWER: // poke nick with lowercase prefix
            if (IsOnPlayerSide(src[srcID + 1]))
            {
                GetMonData(&gPlayerParty[src[srcID + 2]], MON_DATA_NICKNAME, nickname);
            }
            else
            {
                if (src[srcID] == B_BUFF_MON_NICK_WITH_PREFIX_LOWER)
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                        StringAppend(dst, sFoePrefixLowerCase);
                    else
                        StringAppend(dst, sWildPrefixLowerCase);
                }
                else
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                        StringAppend(dst, sFoePrefixLowerCase);
                    else
                        StringAppend(dst,sWildPrefixLowerCase);
                }

                GetMonData(&gEnemyParty[src[srcID + 2]], MON_DATA_NICKNAME, nickname);
            }
            StringGet_Nickname(nickname);
            StringAppend(dst, nickname);
            srcID += 3;
            break;
        case B_BUFF_STAT: // stats
            StringAppend(dst, gStatNamesTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_SPECIES: // species name
            StringCopy(dst, GetSpeciesName(T1_READ_16(&src[srcID + 1])));
            srcID += 3;
            break;
        case B_BUFF_MON_NICK: // poke nick without prefix
            if (src[srcID + 2] == gBattlerPartyIndexes[src[srcID + 1]])
            {
                GetBattlerNick(src[srcID + 1], dst);
            }
            else if (gBattleScripting.illusionNickHack) // for STRINGID_ENEMYABOUTTOSWITCHPKMN
            {
                gBattleScripting.illusionNickHack = 0;
                IllusionNickHack(src[srcID + 1], src[srcID + 2], dst);
                StringGet_Nickname(dst);
            }
            else
            {
                if (IsOnPlayerSide(src[srcID + 1]))
                    GetMonData(&gPlayerParty[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                else
                    GetMonData(&gEnemyParty[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                StringGet_Nickname(dst);
            }
            srcID += 3;
            break;
        case B_BUFF_NEGATIVE_FLAVOR: // flavor table
            StringAppend(dst, gPokeblockWasTooXStringTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_ABILITY: // ability names
            StringAppend(dst, gAbilitiesInfo[T1_READ_16(&src[srcID + 1])].name);
            srcID += 3;
            break;
        case B_BUFF_ITEM: // item name
            hword = T1_READ_16(&src[srcID + 1]);
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (hword == ITEM_ENIGMA_BERRY_E_READER)
                {
                    if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                    {
                        StringCopy(dst, gEnigmaBerries[gPotentialItemEffectBattler].name);
                        StringAppend(dst, gBattleStringsTable[STRINGID_BERRYSUFFIX]);
                    }
                    else
                    {
                        StringAppend(dst, gBattleStringsTable[STRINGID_ENIGMABERRY]);
                    }
                }
                else
                {
                    CopyItemName(hword, dst);
                }
            }
            else
            {
                CopyItemName(hword, dst);
            }
            srcID += 3;
            break;
        }
    }
}

void BattlePutTextOnWindow(const u8 *text, u8 windowId)
{
    const struct BattleWindowText *textInfo = sBattleTextOnWindowsInfo[gBattleScripting.windowsType];
    bool32 copyToVram;
    struct TextPrinterTemplate printerTemplate;
    u8 speed;

    if (windowId & B_WIN_COPYTOVRAM)
    {
        windowId &= ~B_WIN_COPYTOVRAM;
        copyToVram = FALSE;
    }
    else
    {
        FillWindowPixelBuffer(windowId, textInfo[windowId].fillValue);
        copyToVram = TRUE;
    }

    printerTemplate.currentChar = text;
    printerTemplate.windowId = windowId;
    printerTemplate.fontId = textInfo[windowId].fontId;
    printerTemplate.x = textInfo[windowId].x;
    printerTemplate.y = textInfo[windowId].y;
    printerTemplate.currentX = printerTemplate.x;
    printerTemplate.currentY = printerTemplate.y;
    printerTemplate.letterSpacing = textInfo[windowId].letterSpacing;
    printerTemplate.lineSpacing = textInfo[windowId].lineSpacing;
    printerTemplate.unk = 0;
    printerTemplate.fgColor = textInfo[windowId].fgColor;
    printerTemplate.bgColor = textInfo[windowId].bgColor;
    printerTemplate.shadowColor = textInfo[windowId].shadowColor;

    if (B_WIN_MOVE_NAME_1 <= windowId && windowId <= B_WIN_MOVE_NAME_4)
    {
        // We cannot check the actual width of the window because
        // B_WIN_MOVE_NAME_1 and B_WIN_MOVE_NAME_3 are 16 wide for
        // Z-move details.
        if (gBattleStruct->zmove.viewing && windowId == B_WIN_MOVE_NAME_1)
            printerTemplate.fontId = GetFontIdToFit(text, printerTemplate.fontId, printerTemplate.letterSpacing, 16 * TILE_WIDTH);
        else
            printerTemplate.fontId = GetFontIdToFit(text, printerTemplate.fontId, printerTemplate.letterSpacing, 8 * TILE_WIDTH);
    }

    if (printerTemplate.x == 0xFF)
    {
        u32 width = GetBattleWindowTemplatePixelWidth(gBattleScripting.windowsType, windowId);
        s32 alignX = GetStringCenterAlignXOffsetWithLetterSpacing(printerTemplate.fontId, printerTemplate.currentChar, width, printerTemplate.letterSpacing);
        printerTemplate.x = printerTemplate.currentX = alignX;
    }

    if (windowId == ARENA_WIN_JUDGMENT_TEXT)
        gTextFlags.useAlternateDownArrow = FALSE;
    else
        gTextFlags.useAlternateDownArrow = TRUE;

    if ((gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED)) || gTestRunnerEnabled)
        gTextFlags.autoScroll = TRUE;
    else
        gTextFlags.autoScroll = FALSE;

    if (windowId == B_WIN_MSG || windowId == ARENA_WIN_JUDGMENT_TEXT)
    {
        if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            speed = 1;
        else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            speed = sRecordedBattleTextSpeeds[GetTextSpeedInRecordedBattle()];
        else
            speed = GetPlayerTextSpeedDelay();

        gTextFlags.canABSpeedUpPrint = 1;
    }
    else
    {
        speed = textInfo[windowId].speed;
        gTextFlags.canABSpeedUpPrint = 0;
    }

    AddTextPrinter(&printerTemplate, speed, NULL);

    if (copyToVram)
    {
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

void SetPpNumbersPaletteInMoveSelection(u32 battler)
{
    struct ChooseMoveStruct *chooseMoveStruct = (struct ChooseMoveStruct *)(&gBattleResources->bufferA[battler][4]);
    const u16 *palPtr = gPPTextPalette;
    u8 var;

    if (!gBattleStruct->zmove.viewing)
        var = GetCurrentPpToMaxPpState(chooseMoveStruct->currentPp[gMoveSelectionCursor[battler]],
                         chooseMoveStruct->maxPp[gMoveSelectionCursor[battler]]);
    else
        var = 3;

    gPlttBufferUnfaded[BG_PLTT_ID(5) + 12] = palPtr[(var * 2) + 0];
    gPlttBufferUnfaded[BG_PLTT_ID(5) + 11] = palPtr[(var * 2) + 1];

    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(5) + 12], &gPlttBufferFaded[BG_PLTT_ID(5) + 12], PLTT_SIZEOF(1));
    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(5) + 11], &gPlttBufferFaded[BG_PLTT_ID(5) + 11], PLTT_SIZEOF(1));
}

u8 GetCurrentPpToMaxPpState(u8 currentPp, u8 maxPp)
{
    if (maxPp == currentPp)
    {
        return 3;
    }
    else if (maxPp <= 2)
    {
        if (currentPp > 1)
            return 3;
        else
            return 2 - currentPp;
    }
    else if (maxPp <= 7)
    {
        if (currentPp > 2)
            return 3;
        else
            return 2 - currentPp;
    }
    else
    {
        if (currentPp == 0)
            return 2;
        if (currentPp <= maxPp / 4)
            return 1;
        if (currentPp > maxPp / 2)
            return 3;
    }

    return 0;
}
