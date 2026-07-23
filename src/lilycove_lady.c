#include "global.h"
#include "main.h"
#include "overworld.h"
#include "fldeff.h"
#include "field_specials.h"
#include "pokeblock.h"
#include "event_data.h"
#include "script.h"
#include "random.h"
#include "string_util.h"
#include "item.h"
#include "constants/items.h"
#include "item_menu.h"
#include "text.h"
#include "easy_chat.h"
#include "lilycove_lady.h"
#include "contest.h"
#include "strings.h"
#include "constants/lilycove_lady.h"

#include "data/lilycove_lady.h"

static void InitLilycoveQuizLady(void);
static void InitLilycoveFavorLady(void);
static void InitLilycoveContestLady(void);
static void ResetQuizLadyForRecordMix(void);
static void ResetFavorLadyForRecordMix(void);
static void ResetContestLadyForRecordMix(void);
static u8 BufferQuizAuthorName(void);
static bool8 IsQuizTrainerIdNotPlayer(void);
static u8 GetPlayerNameLength(const u8 *);

static EWRAM_DATA struct LilycoveLadyFavor *sFavorLadyPtr = NULL;
static EWRAM_DATA struct LilycoveLadyQuiz *sQuizLadyPtr = NULL;
static EWRAM_DATA struct LilycoveLadyContest *sContestLadyPtr = NULL;

extern EWRAM_DATA u16 gSpecialVar_ItemId;

u8 GetLilycoveLadyId(void)
{
    return 0;
}

void SetLilycoveLadyGfx(void)
{
    return;
}

void InitLilycoveLady(void)
{
    u16 id = 0;
    id %= 6;
    id >>= 1;
    switch (id)
    {
    case LILYCOVE_LADY_QUIZ:
        InitLilycoveQuizLady();
        break;
    case LILYCOVE_LADY_FAVOR:
        InitLilycoveFavorLady();
        break;
    case LILYCOVE_LADY_CONTEST:
        InitLilycoveContestLady();
        break;
    }
}

void ResetLilycoveLadyForRecordMix(void)
{
    switch (GetLilycoveLadyId())
    {
    case LILYCOVE_LADY_QUIZ:
        ResetQuizLadyForRecordMix();
        break;
    case LILYCOVE_LADY_FAVOR:
        ResetFavorLadyForRecordMix();
        break;
    case LILYCOVE_LADY_CONTEST:
        ResetContestLadyForRecordMix();
        break;
    }
}

// Unused
void InitLilycoveLadyRandomly(void)
{
    u8 lady = Random() % LILYCOVE_LADY_COUNT;

    switch (lady)
    {
    case LILYCOVE_LADY_QUIZ:
        InitLilycoveQuizLady();
        break;
    case LILYCOVE_LADY_FAVOR:
        InitLilycoveFavorLady();
        break;
    case LILYCOVE_LADY_CONTEST:
        InitLilycoveContestLady();
        break;
    }
}

void Script_GetLilycoveLadyId(void)
{
    gSpecialVar_Result = GetLilycoveLadyId();
}

static u8 GetNumAcceptedItems(const u16 *itemsArray)
{
    u8 numItems;

    for (numItems = 0; *itemsArray != ITEM_NONE; numItems++, itemsArray++);
    return numItems;
}

static void UNUSED FavorLadyPickFavorAndBestItem(void)
{
    u8 numItems;
    u8 bestItem;

    sFavorLadyPtr->favorId = Random() % ARRAY_COUNT(sFavorLady);
    numItems = GetNumAcceptedItems(sFavorLady[sFavorLadyPtr->favorId].acceptedItems);
    bestItem = Random() % numItems;
    sFavorLadyPtr->bestItem = sFavorLady[sFavorLadyPtr->favorId].acceptedItems[bestItem];
}

static void InitLilycoveFavorLady(void)
{
    return;
}

static void ResetFavorLadyForRecordMix(void)
{
    return;
}

u8 GetFavorLadyState(void)
{
    return 0;
}

void BufferFavorLadyRequest(void)
{
    return;
}

bool8 HasAnotherPlayerGivenFavorLadyItem(void)
{
    return FALSE;
}

static void UNUSED BufferItemName(u8 *dest, enum Item itemId)
{
    StringCopy(dest, GetItemName(itemId));
}

void BufferFavorLadyItemName(void)
{
    return;
}

static void UNUSED SetFavorLadyPlayerName(const u8 *src, u8 *dest)
{
    memset(dest, EOS, PLAYER_NAME_LENGTH + 1);
    StringCopy_PlayerName(dest, src);
}

void BufferFavorLadyPlayerName(void)
{
    return;
}

// Only used to determine if a record-mixed player had given her an item she liked
bool8 DidFavorLadyLikeItem(void)
{
    return FALSE;
}

void Script_FavorLadyOpenBagMenu(void)
{
    FavorLadyOpenBagMenu();
}

static bool8 DoesFavorLadyLikeItem(enum Item itemId)
{
    return FALSE;
}

bool8 Script_DoesFavorLadyLikeItem(void)
{
    return DoesFavorLadyLikeItem(gSpecialVar_ItemId);
}

bool8 IsFavorLadyThresholdMet(void)
{
    return FALSE;
}

u16 FavorLadyGetPrize(void)
{
    return 0;
}

void SetFavorLadyState_Complete(void)
{
    InitLilycoveFavorLady();
    sFavorLadyPtr->state = LILYCOVE_LADY_STATE_COMPLETED;
}

void FieldCallback_FavorLadyEnableScriptContexts(void)
{
    ScriptContext_Enable();
}

static void UNUSED QuizLadyPickQuestion(void)
{
    u8 questionId;
    u8 i;

    questionId = Random() % ARRAY_COUNT(sQuizLadyQuestions);
    for (i = 0; i < QUIZ_QUESTION_LEN; i ++)
        sQuizLadyPtr->question[i] = sQuizLadyQuestions[questionId].question[i];

    sQuizLadyPtr->correctAnswer = sQuizLadyQuestions[questionId].answer;
    sQuizLadyPtr->prize = sQuizLadyQuestions[questionId].prize;
    sQuizLadyPtr->questionId = questionId;
    sQuizLadyPtr->playerName[0] = EOS;
}

static void InitLilycoveQuizLady(void)
{
    return;
}

static void ResetQuizLadyForRecordMix(void)
{
    return;
}

u8 GetQuizLadyState(void)
{
    return LILYCOVE_LADY_STATE_READY;
}

u8 GetQuizAuthor(void)
{
    return QUIZ_AUTHOR_PLAYER;
}

static u8 UNUSED BufferQuizAuthorName(void)
{
    return 0;
}

static bool8 UNUSED IsQuizTrainerIdNotPlayer(void)
{
    return FALSE;
}

static u8 UNUSED GetPlayerNameLength(const u8 *playerName)
{
    u8 len;
    const u8 *ptr;

    for (len = 0, ptr = playerName; *ptr != EOS; len++, ptr++);
    return len;
}

void BufferQuizPrizeName(void)
{
    StringCopy(gStringVar1, GetItemName(sQuizLadyPtr->prize));
}

bool8 BufferQuizAuthorNameAndCheckIfLady(void)
{
    return FALSE;
}

bool8 IsQuizLadyWaitingForChallenger(void)
{
    return 0;
}

void QuizLadyGetPlayerAnswer(void)
{
    ShowEasyChatScreen();
}

bool8 IsQuizAnswerCorrect(void)
{
    return 0;
}

void BufferQuizPrizeItem(void)
{
    return;
}

void SetQuizLadyState_Complete(void)
{
    return;
}

void SetQuizLadyState_GivePrize(void)
{
    return;
}

void ClearQuizLadyPlayerAnswer(void)
{
    return;
}

void Script_QuizLadyOpenBagMenu(void)
{
    QuizLadyOpenBagMenu();
}

void QuizLadyPickNewQuestion(void)
{
    return;
}

void ClearQuizLadyQuestionAndAnswer(void)
{
    return;
}

void QuizLadySetCustomQuestion(void)
{
    gSpecialVar_0x8004 = EASY_CHAT_TYPE_QUIZ_SET_QUESTION;
    ShowEasyChatScreen();
}

void QuizLadyTakePrizeForCustomQuiz(void)
{
    RemoveBagItem(gSpecialVar_ItemId, 1);
}

void QuizLadyRecordCustomQuizData(void)
{
    return;
}

void QuizLadySetWaitingForChallenger(void)
{
    return;
}

void BufferQuizCorrectAnswer(void)
{
    return;
}


void FieldCallback_QuizLadyEnableScriptContexts(void)
{
    ScriptContext_Enable();
}

void QuizLadyClearQuestionForRecordMix(const LilycoveLady *lilycoveLady)
{
    return;
}

static void UNUSED ResetContestLadyContestData(void)
{
    sContestLadyPtr->playerName[0] = EOS;
    sContestLadyPtr->numGoodPokeblocksGiven = 0;
    sContestLadyPtr->numOtherPokeblocksGiven = 0;
    sContestLadyPtr->maxSheen = 0;
    sContestLadyPtr->category = Random() % CONTEST_CATEGORIES_COUNT;
}

static void InitLilycoveContestLady(void)
{
    return;
}

static void ResetContestLadyForRecordMix(void)
{
    return;
}

static void UNUSED ContestLadySavePlayerNameIfHighSheen(u8 sheen)
{
    return;
}

bool8 GivePokeblockToContestLady(struct Pokeblock *pokeblock)
{
    return FALSE;
}

static void BufferContestLadyCategoryAndMonName(u8 *category, u8 *nickname)
{
    return;
}

void BufferContestLadyMonName(u8 *category, u8 *nickname)
{
    return;
}

void BufferContestLadyPlayerName(u8 *dest)
{
    return;
}

void BufferContestLadyLanguage(u8 *dest)
{
    return;
}

void BufferContestName(u8 *dest, u8 category)
{
    StringCopy(dest, sContestLadyValues[category].contestName);
}

// Used by the Contest Lady's TV show to determine how well she performed
u8 GetContestLadyPokeblockState(void)
{
    return CONTEST_LADY_NORMAL;
}


bool8 HasPlayerGivenContestLadyPokeblock(void)
{
    return FALSE;
}

bool8 ShouldContestLadyShowGoOnAir(void)
{
    return FALSE;
}

void Script_BufferContestLadyCategoryAndMonName(void)
{
    BufferContestLadyCategoryAndMonName(gStringVar2, gStringVar1);
}

void OpenPokeblockCaseForContestLady(void)
{
    OpenPokeblockCase(PBLOCK_CASE_GIVE, CB2_ReturnToField);
}

void SetContestLadyGivenPokeblock(void)
{
    return;
}

void GetContestLadyMonSpecies(void)
{
    return;
}

u8 GetContestLadyCategory(void)
{
    return 0;
}
