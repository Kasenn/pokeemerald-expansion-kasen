#ifndef GUARD_FOLLOWER_NPC_H
#define GUARD_FOLLOWER_NPC_H

#include "constants/follower_npc.h"

#define MOVEMENT_INVALID 0xFE

struct FollowerNPCSpriteGraphics
{
    u16 normalId;
    u16 machBikeId;
    u16 acroBikeId;
    u16 surfId;
    u16 underwaterId;
    bool8 hasRunningFrames;
};

enum FollowerNPCDataTypes
{
    FNPC_DATA_IN_PROGRESS,
    FNPC_DATA_WARP_END,
    FNPC_DATA_SURF_BLOB,
    FNPC_DATA_COME_OUT_DOOR,
    FNPC_DATA_FORCED_MOVEMENT,
    FNPC_DATA_OBJ_ID,
    FNPC_DATA_CURRENT_SPRITE,
    FNPC_DATA_DELAYED_STATE,
    FNPC_DATA_EVENT_FLAG,
    FNPC_DATA_GFX_ID,
    FNPC_DATA_FOLLOWER_FLAGS,
    FNPC_DATA_BATTLE_PARTNER
};

enum FollowerNPCSpriteTypes
{
    FOLLOWER_NPC_SPRITE_INDEX_NORMAL,
    FOLLOWER_NPC_SPRITE_INDEX_MACH_BIKE,
    FOLLOWER_NPC_SPRITE_INDEX_ACRO_BIKE,
    FOLLOWER_NPC_SPRITE_INDEX_SURF,
    FOLLOWER_NPC_SPRITE_INDEX_UNDERWATER,
};

enum FollowerNPCDoorStairsStates
{
    FNPC_DOOR_NONE,
    FNPC_DOOR_NEEDS_TO_EXIT,
    FNPC_DOOR_NO_POS_SET
};

enum FollowerNPCWarpEndStates
{
    FNPC_WARP_NONE,
    FNPC_WARP_REAPPEAR
};

enum FollowerNPCSurfBlobStates
{
    FNPC_SURF_BLOB_NONE,
    FNPC_SURF_BLOB_NEW,
    FNPC_SURF_BLOB_RECREATE,
    FNPC_SURF_BLOB_DESTROY
};

enum FollowerNPCOutOfDoorTaskStates
{
    OPEN_DOOR,
    NPC_WALK_OUT,
    CLOSE_DOOR,
    UNFREEZE_OBJECTS,
    REALLOW_MOVEMENT
};

enum FollowerNPCHandleEscalatorFinishTaskStates
{
    MOVE_TO_PLAYER_POS,
    WAIT_FOR_PLAYER_MOVE,
    SHOW_FOLLOWER_DOWN,
    MOVE_FOLLOWER_DOWN,
    SHOW_FOLLOWER_UP,
    MOVE_FOLLOWER_UP,
    MOVEMENT_FINISH
};

enum FollowerNPCForcedMovementStates
{
    FNPC_FORCED_NONE,
    FNPC_FORCED_FOLLOW,
    FNPC_FORCED_STAY
};

#define FOLLOWER_NPC_FLAG_HAS_RUNNING_FRAMES    0x1

#define FNPC_NONE   0
#define FNPC_ALWAYS 2

void SetFollowerNPCData(enum FollowerNPCDataTypes type, u32 value, u8 slot);
const u8 *GetFollowerNPCScriptPointer(u8 slot);
u32 GetFollowerNPCData(enum FollowerNPCDataTypes type, u8 slot);
void ClearFollowerNPCData(u8 slot);

void CreateFollowerNPC(u32 gfx, u32 followerFlags, const u8 *scriptPtr, u8 slot);
void DestroyFollowerNPC(u8 slot);
u32 DetermineFollowerNPCState(struct ObjectEvent *follower, u32 state, enum Direction direction, u8 slot);
void SetFollowerNPCSprite(u32 spriteIndex, u8 slot);

bool32 PlayerHasFollowerNPC(u8 slot);
void NPCFollow(struct ObjectEvent *npc, u32 state, bool32 ignoreScriptActive, u8 slot);
void CreateFollowerNPCAvatar(u8 slot);
void FollowerNPC_HandleSprite(u8 slot);
enum Direction DetermineFollowerNPCDirection(struct ObjectEvent *target, struct ObjectEvent *follower);
u8 GetFollowerSlotByObjectId(u8 slot);
u8 GetFollowerTargetIdBySlot(u8 slot);
u32 GetFollowerNPCObjectId(u8 slot);
bool32 CheckFollowerNPCFlag(u32 flag, u8 slot);
bool32 FollowerNPC_IsCollisionExempt(struct ObjectEvent *obstacle, struct ObjectEvent *collider, u8 slot);
void HideNPCFollower(u8 slot);
void FollowerNPC_WarpSetEnd(void);

bool32 FollowerNPCCanBike(u8 slot);
void FollowerNPC_HandleBike(u8 slot);

void FollowerNPC_FollowerToWater(u8 slot);
void FollowerNPC_SetIndicatorToRecreateSurfBlob(u8 slot);
void FollowerNPC_BindToSurfBlobOnReloadScreen(u8 slot);
void PrepareFollowerNPCDismountSurf(u8 slot);

bool32 FollowerNPCComingThroughDoor(u8 slot);
void FollowerNPC_SetIndicatorToComeOutDoor(u8 slot);

void EscalatorMoveFollowerNPC(u32 movementType, u8 slot);
void EscalatorMoveFollowerNPCFinish(u8 slot);

void FollowerNPCWalkIntoPlayerForLeaveMap(u8 slot);
void FollowerNPCHideForLeaveMap(struct ObjectEvent *follower, u8 slot);
void FollowerNPCReappearAfterLeaveMap(struct ObjectEvent *follower, struct ObjectEvent *target, u8 slot);
void FollowerNPCFaceAfterLeaveMap(u8 slot);

bool32 FollowerNPCIsBattlePartner(void);
bool32 IsNPCFollowerWildBattle(void);
void PrepareForFollowerNPCBattle(void);
void RestorePartyAfterFollowerNPCBattle(void);
void FollowerNPC_TryRemoveFollowerOnWhiteOut(u8 slot);

void Task_MoveNPCFollowerAfterForcedMovement(u8 taskId);
void Task_HideNPCFollowerAfterMovementFinish(u8 taskId);

void Task_FollowerNPCOutOfDoor(u8 taskId);

#endif // GUARD_FOLLOWER_NPC_H
