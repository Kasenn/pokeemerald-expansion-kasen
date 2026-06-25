#include "global.h"
#include "follower_npc.h"
#include "follower_npc_alternate_sprites.h"
#include "battle.h"
#include "battle_partner.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "bike.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_door.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "field_control_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "fldeff_misc.h"
#include "frontier_util.h"
#include "item.h"
#include "load_save.h"
#include "map_name_popup.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "party_menu.h"
#include "script.h"
#include "script_movement.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "task.h"
#include "trig.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/frontier_util.h"
#include "constants/map_types.h"
#include "constants/metatile_behaviors.h"
#include "constants/songs.h"

/*
 * Known Issues:
 *     -follower gets messed up if you go into a map with a maximum number of event objects
 *         -inherits incorrect palette, may get directionally confused
 */

// Task data
#define tState          data[0]
#define tDoorX          data[2]
#define tDoorY          data[3]
#define tSlot           data[4]

static void SetFollowerNPCScriptPointer(const u8 *script, u8 slot);
static void PlayerLogCoordinates(struct ObjectEvent *target, u8 slot);
static void TurnNPCIntoFollower(u32 localId, u32 followerFlags, u32 setScript, const u8 *script, u32 slot);
static u32 GetFollowerNPCSprite(u8 slot);
static bool32 FollowerNPCHasRunningFrames(u8 slot);
static bool32 IsStateMovement(u32 state);
static enum Direction GetNewPlayerMovementDirection(u32 state);
static bool32 IsPlayerForcedOntoSameTile(u8 metatileBehavior, enum Direction direction);
static u32 GetPlayerFaceToDoorDirection(struct ObjectEvent *player, struct ObjectEvent *follower);
static u32 ReturnFollowerNPCDelayedState(enum Direction direction, u8 slot);
static void TryUpdateFollowerNPCSpriteUnderwater(u8 slot);
static void SetSurfJump(u8 slot);
static void SetUpSurfBlobFieldEffect(struct ObjectEvent *npc, u8 slot);
static void SetSurfDismount(u8 slot);
static void Task_BindSurfBlobToFollowerNPC(u8 taskId);
static void Task_FinishSurfDismount(u8 taskId);
static void Task_ReallowPlayerMovement(u8 taskId);
static void Task_FollowerNPCHandleEscalator(u8 taskId);
static void Task_FollowerNPCHandleEscalatorFinish(u8 taskId);
static void CalculateFollowerNPCEscalatorTrajectoryUp(struct Task *task);
static void CalculateFollowerNPCEscalatorTrajectoryDown(struct Task *task);

void SetFollowerNPCData(enum FollowerNPCDataTypes type, u32 value, u8 slot)
{
#if FNPC_ENABLE_NPC_FOLLOWERS
    switch (type)
    {
    case FNPC_DATA_IN_PROGRESS:
        gSaveBlock3Ptr->NPCfollower[slot].inProgress = value;
        break;
    case FNPC_DATA_WARP_END:
        gSaveBlock3Ptr->NPCfollower[slot].warpEnd = value;
        break;
    case FNPC_DATA_SURF_BLOB:
        gSaveBlock3Ptr->NPCfollower[slot].createSurfBlob = value;
        break;
    case FNPC_DATA_COME_OUT_DOOR:
        gSaveBlock3Ptr->NPCfollower[slot].comeOutDoorStairs = value;
        break;
    case FNPC_DATA_FORCED_MOVEMENT:
        gSaveBlock3Ptr->NPCfollower[slot].forcedMovement = value;
        break;
    case FNPC_DATA_OBJ_ID:
        gSaveBlock3Ptr->NPCfollower[slot].objId = value;
        break;
    case FNPC_DATA_CURRENT_SPRITE:
        gSaveBlock3Ptr->NPCfollower[slot].currentSprite = value;
        break;
    case FNPC_DATA_DELAYED_STATE:
        gSaveBlock3Ptr->NPCfollower[slot].delayedState = value;
        break;
    case FNPC_DATA_EVENT_FLAG:
        gSaveBlock3Ptr->NPCfollower[slot].flag = value;
        break;
    case FNPC_DATA_GFX_ID:
        gSaveBlock3Ptr->NPCfollower[slot].graphicsId = value;
        break;
    case FNPC_DATA_FOLLOWER_FLAGS:
        gSaveBlock3Ptr->NPCfollower[slot].flags = value;
        break;
    case FNPC_DATA_BATTLE_PARTNER:
        gSaveBlock3Ptr->NPCfollower[slot].battlePartner = value;
        break;
    }
#endif
}

static void SetFollowerNPCScriptPointer(const u8 *script, u8 slot)
{
#if FNPC_ENABLE_NPC_FOLLOWERS
    gSaveBlock3Ptr->NPCfollower[slot].script = script;
#endif
}

static void PlayerLogCoordinates(struct ObjectEvent *target, u8 slot)
{
#if FNPC_ENABLE_NPC_FOLLOWERS
    gSaveBlock3Ptr->NPCfollower[slot].log.x = target->currentCoords.x;
    gSaveBlock3Ptr->NPCfollower[slot].log.y = target->currentCoords.y;
#endif
}

const u8 *GetFollowerNPCScriptPointer(u8 slot)
{
#if FNPC_ENABLE_NPC_FOLLOWERS
    if (PlayerHasFollowerNPC(slot))
        return gSaveBlock3Ptr->NPCfollower[slot].script;

#endif
    return NULL;
}

u32 GetFollowerNPCData(enum FollowerNPCDataTypes type, u8 slot)
{
#if FNPC_ENABLE_NPC_FOLLOWERS
    switch (type)
    {
    case FNPC_DATA_IN_PROGRESS:
        return gSaveBlock3Ptr->NPCfollower[slot].inProgress;
    case FNPC_DATA_WARP_END:
        return gSaveBlock3Ptr->NPCfollower[slot].warpEnd;
    case FNPC_DATA_SURF_BLOB:
        return gSaveBlock3Ptr->NPCfollower[slot].createSurfBlob;
    case FNPC_DATA_COME_OUT_DOOR:
        return gSaveBlock3Ptr->NPCfollower[slot].comeOutDoorStairs;
    case FNPC_DATA_FORCED_MOVEMENT:
        return gSaveBlock3Ptr->NPCfollower[slot].forcedMovement;
    case FNPC_DATA_OBJ_ID:
        return gSaveBlock3Ptr->NPCfollower[slot].objId;
    case FNPC_DATA_CURRENT_SPRITE:
        return gSaveBlock3Ptr->NPCfollower[slot].currentSprite;
    case FNPC_DATA_DELAYED_STATE:
        return gSaveBlock3Ptr->NPCfollower[slot].delayedState;
    case FNPC_DATA_EVENT_FLAG:
        return gSaveBlock3Ptr->NPCfollower[slot].flag;
    case FNPC_DATA_GFX_ID:
        return gSaveBlock3Ptr->NPCfollower[slot].graphicsId;
    case FNPC_DATA_FOLLOWER_FLAGS:
        return gSaveBlock3Ptr->NPCfollower[slot].flags;
    case FNPC_DATA_BATTLE_PARTNER:
        return gSaveBlock3Ptr->NPCfollower[slot].battlePartner;
    }
#endif
    return 0;
}

void ClearFollowerNPCData(u8 slot)
{
#if FNPC_ENABLE_NPC_FOLLOWERS
    memset(&gSaveBlock3Ptr->NPCfollower[slot], 0, sizeof(gSaveBlock3Ptr->NPCfollower[slot]));
#endif
}

static void TurnNPCIntoFollower(u32 localId, u32 followerFlags, u32 setScript, const u8 *scriptPtr, u32 slot)
{
    struct ObjectEventTemplate npc;
    struct ObjectEvent *follower;
    u32 eventObjId = GetObjectEventIdByLocalId(localId);
    u32 npcX = gObjectEvents[eventObjId].currentCoords.x;
    u32 npcY = gObjectEvents[eventObjId].currentCoords.y;
    const u8 *script;
    u32 flag;
    u16 facingDirection = gObjectEvents[eventObjId].facingDirection;

    flag = GetObjectEventFlagIdByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    // If the object does not have an event flag, don't create follower.
    if (flag == 0)
        return;

    if (setScript == TRUE)
        // Set the custom script.
        script = scriptPtr;
    else
        // Use the object's original script.
        script = GetObjectEventScriptPointerByObjectEventId(eventObjId);

    RemoveObjectEvent(&gObjectEvents[eventObjId]);
    FlagSet(flag);

    npc = *GetObjectEventTemplateByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    npc.movementType = 0;
    npc.script = script;
    npc.localId = OBJ_EVENT_ID_NPC_FOLLOWER1 + slot;
    SetFollowerNPCData(FNPC_DATA_OBJ_ID, TrySpawnObjectEventTemplate(&npc, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, npcX, npcY), slot);
    follower = &gObjectEvents[GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot)];
    MoveObjectEventToMapCoords(follower, npcX, npcY);
    ObjectEventTurn(follower, facingDirection);
    follower->movementType = MOVEMENT_TYPE_NONE;
    gSprites[follower->spriteId].callback = MovementType_None;

    SetFollowerNPCData(FNPC_DATA_IN_PROGRESS, TRUE, slot);
    SetFollowerNPCData(FNPC_DATA_GFX_ID, follower->graphicsId, slot);
    SetFollowerNPCScriptPointer(script, slot);
    SetFollowerNPCData(FNPC_DATA_EVENT_FLAG, flag, slot);
    SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_NONE, slot);
    SetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, FNPC_DOOR_NONE, slot);
    if (FollowerNPCHasRunningFrames(slot))
        followerFlags |= FOLLOWER_NPC_FLAG_HAS_RUNNING_FRAMES;

    SetFollowerNPCData(FNPC_DATA_FOLLOWER_FLAGS, followerFlags, slot);

    // If the player is biking and the follower flags prohibit biking, force the player to dismount the bike.
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_BIKE, slot)
    &&  TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_BIKE))
        SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);

    // Set the follower sprite to match the player state.
    if (!TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_ON_FOOT))
        FollowerNPC_HandleSprite(slot);
}

static u32 GetFollowerNPCSprite(u8 slot)
{
    u32 i;

    switch (GetFollowerNPCData(FNPC_DATA_CURRENT_SPRITE, slot))
    {
    case FOLLOWER_NPC_SPRITE_INDEX_MACH_BIKE:
        for (i = 0; i < NELEMS(gFollowerNPCAlternateSprites); i++)
            if (gFollowerNPCAlternateSprites[i].normalId == GetFollowerNPCData(FNPC_DATA_GFX_ID, slot))
                return gFollowerNPCAlternateSprites[i].machBikeId;
        break;
    case FOLLOWER_NPC_SPRITE_INDEX_ACRO_BIKE:
        for (i = 0; i < NELEMS(gFollowerNPCAlternateSprites); i++)
            if (gFollowerNPCAlternateSprites[i].normalId == GetFollowerNPCData(FNPC_DATA_GFX_ID, slot))
                return gFollowerNPCAlternateSprites[i].acroBikeId;
        break;
    case FOLLOWER_NPC_SPRITE_INDEX_SURF:
        for (i = 0; i < NELEMS(gFollowerNPCAlternateSprites); i++)
            if (gFollowerNPCAlternateSprites[i].normalId == GetFollowerNPCData(FNPC_DATA_GFX_ID, slot))
                return gFollowerNPCAlternateSprites[i].surfId;
        break;
    case FOLLOWER_NPC_SPRITE_INDEX_UNDERWATER:
        for (i = 0; i < NELEMS(gFollowerNPCAlternateSprites); i++)
            if (gFollowerNPCAlternateSprites[i].normalId == GetFollowerNPCData(FNPC_DATA_GFX_ID, slot))
                return gFollowerNPCAlternateSprites[i].underwaterId;
        break;
    }

    return GetFollowerNPCData(FNPC_DATA_GFX_ID, slot);
}

static bool32 FollowerNPCHasRunningFrames(u8 slot)
{
    for (u32 i = 0; i < NELEMS(gFollowerNPCAlternateSprites); i++)
    {
        if (gFollowerNPCAlternateSprites[i].normalId == GetFollowerNPCData(FNPC_DATA_GFX_ID, slot)
         && gFollowerNPCAlternateSprites[i].hasRunningFrames == TRUE)
            return TRUE;
    }

    return FALSE;
}

static bool32 IsStateMovement(u32 state)
{
    switch (state)
    {
    case MOVEMENT_ACTION_FACE_DOWN:
    case MOVEMENT_ACTION_FACE_UP:
    case MOVEMENT_ACTION_FACE_LEFT:
    case MOVEMENT_ACTION_FACE_RIGHT:
    case MOVEMENT_ACTION_DELAY_1:
    case MOVEMENT_ACTION_DELAY_2:
    case MOVEMENT_ACTION_DELAY_4:
    case MOVEMENT_ACTION_DELAY_8:
    case MOVEMENT_ACTION_DELAY_16:
    case MOVEMENT_ACTION_FACE_PLAYER:
    case MOVEMENT_ACTION_FACE_AWAY_PLAYER:
    case MOVEMENT_ACTION_LOCK_FACING_DIRECTION:
    case MOVEMENT_ACTION_UNLOCK_FACING_DIRECTION:
    case MOVEMENT_ACTION_SET_INVISIBLE:
    case MOVEMENT_ACTION_SET_VISIBLE:
    case MOVEMENT_ACTION_EMOTE_EXCLAMATION_MARK:
    case MOVEMENT_ACTION_EMOTE_QUESTION_MARK:
    case MOVEMENT_ACTION_EMOTE_HEART:
    case MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_RIGHT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_RIGHT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FAST_RIGHT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_DOWN:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_UP:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_LEFT:
    case MOVEMENT_ACTION_WALK_IN_PLACE_FASTER_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_UP:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN_UP:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_UP_DOWN:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT_RIGHT:
    case MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT_LEFT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN:
    case MOVEMENT_ACTION_ACRO_WHEELIE_FACE_UP:
    case MOVEMENT_ACTION_ACRO_WHEELIE_FACE_RIGHT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_FACE_LEFT:
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN:
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_UP:
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_RIGHT:
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_LEFT:
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN:
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_UP:
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_RIGHT:
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_LEFT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN:
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_UP:
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_RIGHT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_LEFT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN:
    case MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_UP:
    case MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_RIGHT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_LEFT:
        return FALSE;
    }

    return TRUE;
}

// Because we want the NPC follower's movements to happen simultaneously with the player's,
// we need to set the follower's movement before the player object's movementDirection parameter gets set.
// This function allows us to determine the player's new movement direction before it gets set.
static enum Direction GetNewPlayerMovementDirection(u32 state)
{
    switch (state)
    {
    case MOVEMENT_ACTION_WALK_SLOW_DOWN:
    case MOVEMENT_ACTION_WALK_NORMAL_DOWN:
    case MOVEMENT_ACTION_WALK_FAST_DOWN:
    case MOVEMENT_ACTION_WALK_FASTER_DOWN:
    case MOVEMENT_ACTION_PLAYER_RUN_DOWN:
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN:
    case MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN:
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN:
    case MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN:
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN:
    case MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN:
    case MOVEMENT_ACTION_JUMP_DOWN:
        return DIR_SOUTH;
    case MOVEMENT_ACTION_WALK_SLOW_UP:
    case MOVEMENT_ACTION_WALK_NORMAL_UP:
    case MOVEMENT_ACTION_WALK_FAST_UP:
    case MOVEMENT_ACTION_WALK_FASTER_UP:
    case MOVEMENT_ACTION_PLAYER_RUN_UP:
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_UP:
    case MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_UP:
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_UP:
    case MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_UP:
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_UP:
    case MOVEMENT_ACTION_RIDE_WATER_CURRENT_UP:
    case MOVEMENT_ACTION_JUMP_UP:
        return DIR_NORTH;
    case MOVEMENT_ACTION_WALK_SLOW_LEFT:
    case MOVEMENT_ACTION_WALK_NORMAL_LEFT:
    case MOVEMENT_ACTION_WALK_FAST_LEFT:
    case MOVEMENT_ACTION_WALK_FASTER_LEFT:
    case MOVEMENT_ACTION_PLAYER_RUN_LEFT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_LEFT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_LEFT:
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_LEFT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_LEFT:
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_LEFT:
    case MOVEMENT_ACTION_RIDE_WATER_CURRENT_LEFT:
    case MOVEMENT_ACTION_JUMP_LEFT:
        return DIR_WEST;
    case MOVEMENT_ACTION_WALK_SLOW_RIGHT:
    case MOVEMENT_ACTION_WALK_NORMAL_RIGHT:
    case MOVEMENT_ACTION_WALK_FAST_RIGHT:
    case MOVEMENT_ACTION_WALK_FASTER_RIGHT:
    case MOVEMENT_ACTION_PLAYER_RUN_RIGHT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_RIGHT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT:
    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_RIGHT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_RIGHT:
    case MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_RIGHT:
    case MOVEMENT_ACTION_RIDE_WATER_CURRENT_RIGHT:
    case MOVEMENT_ACTION_JUMP_RIGHT:
        return DIR_EAST;
    default:
        return DIR_NONE;
    }
}

static bool32 IsPlayerForcedOntoSameTile(u8 metatileBehavior, enum Direction direction)
{
    enum Direction oppositeDirection = DIR_NONE;

    switch (metatileBehavior)
    {
    case MB_WALK_EAST:
    case MB_SLIDE_EAST:
    case MB_EASTWARD_CURRENT:
        oppositeDirection = DIR_WEST;
        break;
    case MB_WALK_WEST:
    case MB_SLIDE_WEST:
    case MB_WESTWARD_CURRENT:
        oppositeDirection = DIR_EAST;
        break;
    case MB_WALK_NORTH:
    case MB_SLIDE_NORTH:
    case MB_NORTHWARD_CURRENT:
        oppositeDirection = DIR_SOUTH;
        break;
    case MB_WALK_SOUTH:
    case MB_SLIDE_SOUTH:
    case MB_SOUTHWARD_CURRENT:
    case MB_MUDDY_SLOPE:
    case MB_WATERFALL:
        oppositeDirection = DIR_NORTH;
        break;
    default:
        return FALSE;
    }

    if (oppositeDirection == direction)
        return TRUE;

    return FALSE;
}

void GetXYCoordsPlayerMovementDest(enum Direction direction, s16 *x, s16 *y, u8 slot)
{
    u8 targetId = GetFollowerTargetIdBySlot(slot);

    *x = gObjectEvents[targetId].currentCoords.x;
    *y = gObjectEvents[targetId].currentCoords.y;
    MoveCoords(direction, x, y);
}

static u32 GetPlayerFaceToDoorDirection(struct ObjectEvent *player, struct ObjectEvent *follower)
{
    s32 delta_x = player->currentCoords.x - follower->currentCoords.x;

    if (delta_x < 0)
        return DIR_EAST;
    else if (delta_x > 0)
        return DIR_WEST;

    return DIR_NORTH;
}

static u32 ReturnFollowerNPCDelayedState(enum Direction direction, u8 slot)
{
    u32 newState = GetFollowerNPCData(FNPC_DATA_DELAYED_STATE, slot);
    SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, 0, slot);

    return newState + direction;
}

static void TryUpdateFollowerNPCSpriteUnderwater(u8 slot)
{
    if (gMapHeader.mapType == MAP_TYPE_UNDERWATER)
    {
        struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
        SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_UNDERWATER, slot);

        follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
        follower->fieldEffectSpriteId = StartUnderwaterSurfBlobBobbing(follower->spriteId);
    }
}

static void SetSurfJump(u8 slot)
{
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    enum Direction direction;
    u32 jumpState;

    ObjectEventClearHeldMovement(follower);

    // Jump animation according to direction.
    direction = DetermineFollowerNPCDirection(&gObjectEvents[GetFollowerTargetIdBySlot(slot)], follower);
    jumpState = GetJumpMovementAction(direction);
    SetUpSurfBlobFieldEffect(follower, slot);

    // Adjust surf head spawn location infront of follower.
    switch (direction)
    {
    case DIR_SOUTH:
        gFieldEffectArguments[1]++; // effect_y
        break;
    case DIR_NORTH:
        gFieldEffectArguments[1]--;
        break;
    case DIR_WEST:
        gFieldEffectArguments[0]--; // effect_x
        break;
    default: // DIR_EAST
        gFieldEffectArguments[0]++;
    };

    // Execute, store sprite ID in fieldEffectSpriteId and bind surf blob.
    follower->fieldEffectSpriteId = FieldEffectStart(FLDEFF_SURF_BLOB);
    u8 taskId = CreateTask(Task_BindSurfBlobToFollowerNPC, 0x1);
    gTasks[taskId].tSlot = slot;
    SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_SURF, slot);

    follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    ObjectEventSetHeldMovement(follower, jumpState);
}

static void SetUpSurfBlobFieldEffect(struct ObjectEvent *npc, u8 slot)
{
    // Set up gFieldEffectArguments for execution.
    gFieldEffectArguments[0] = npc->currentCoords.x;                 // effect_x
    gFieldEffectArguments[1] = npc->currentCoords.y;                 // effect_y
    gFieldEffectArguments[2] = GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot); // objId
}

#define tSpriteId       data[0]

static void SetSurfDismount(u8 slot)
{
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    enum Direction direction;
    u32 jumpState;
    u32 task;

    ObjectEventClearHeldMovement(follower);

    // Jump animation according to direction
    direction = DetermineFollowerNPCDirection(&gObjectEvents[GetFollowerTargetIdBySlot(slot)], follower);
    jumpState = GetJumpMovementAction(direction);

    // Unbind and destroy Surf Blob
    task = CreateTask(Task_FinishSurfDismount, 1);
    gTasks[task].tSlot = slot;
    gTasks[task].tSpriteId = follower->fieldEffectSpriteId;
    SetSurfBlob_BobState(follower->fieldEffectSpriteId, 2);
    follower->fieldEffectSpriteId = 0;
    FollowerNPC_HandleSprite(slot);

    follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    ObjectEventSetHeldMovement(follower, jumpState);
}

static void Task_BindSurfBlobToFollowerNPC(u8 taskId)
{
    struct ObjectEvent *npc = &gObjectEvents[GetFollowerNPCObjectId(gTasks[taskId].tSlot)];
    // Wait for the jump animation.
    bool32 animStatus = ObjectEventClearHeldMovementIfFinished(npc);
    if (!animStatus)
        return;

    // Bind the blob to the follower.
    SetSurfBlob_BobState(npc->fieldEffectSpriteId, 0x1);
    UnfreezeObjectEvents();
    DestroyTask(taskId);
    gPlayerAvatar.preventStep = FALSE;
    return;
}

static void Task_FinishSurfDismount(u8 taskId)
{
    struct ObjectEvent *npc = &gObjectEvents[GetFollowerNPCObjectId(gTasks[taskId].tSlot)];
    // Wait for the animation to finish.
    bool32 animStatus = ObjectEventClearHeldMovementIfFinished(npc);

    if (!animStatus)
    {
        // Temporarily stop running.
        if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH) && ObjectEventClearHeldMovementIfFinished(&gObjectEvents[gPlayerAvatar.objectEventId]))
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);

        return;
    }

    SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_NORMAL, gTasks[taskId].tSlot);
    DestroySprite(&gSprites[gTasks[taskId].tSpriteId]);
    UnfreezeObjectEvents();
    DestroyTask(taskId);
    gPlayerAvatar.preventStep = FALSE;
}

#undef tSpriteId

static void Task_ReallowPlayerMovement(u8 taskId)
{
    bool32 animStatus = ObjectEventClearHeldMovementIfFinished(&gObjectEvents[GetFollowerNPCObjectId(gTasks[taskId].tSlot)]);
    if (!animStatus)
    {
        // Temporarily stop running.
        if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH)
        && ObjectEventClearHeldMovementIfFinished(&gObjectEvents[gPlayerAvatar.objectEventId]))
            SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);

        return;
    }

    gPlayerAvatar.preventStep = FALSE;
    DestroyTask(taskId);
}

// Task data.
#define tDoorTask           data[1]

void Task_FollowerNPCOutOfDoor(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    u8 slot = task->tSlot;
    u8 targetId = GetFollowerTargetIdBySlot(slot);
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    struct ObjectEvent *player = &gObjectEvents[targetId];
    s16 *x = &task->tDoorX;
    s16 *y = &task->tDoorY;

    // The player faces follower as they exit the door.
    if (FNPC_FACE_NPC_FOLLOWER_ON_DOOR_EXIT == TRUE && ObjectEventClearHeldMovementIfFinished(player))
        ObjectEventTurn(player, GetPlayerFaceToDoorDirection(player, follower));

    switch (task->tState)
    {
    case OPEN_DOOR:
        FreezeObjectEvents();
        task->tDoorTask = FieldAnimateDoorOpen(follower->currentCoords.x, follower->currentCoords.y);
        // Only play SE for animated doors.
        if (task->tDoorTask != -1)
            PlaySE(GetDoorSoundEffect(*x, *y));
        task->tState = NPC_WALK_OUT;
        break;
    case NPC_WALK_OUT:
        // If the door isn't still opening.
        if (task->tDoorTask < 0 || gTasks[task->tDoorTask].isActive != TRUE)
        {
            follower->invisible = FALSE;
            // If the follower should be surfing.
            if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
            {
                SetUpSurfBlobFieldEffect(follower, slot);
                follower->fieldEffectSpriteId = FieldEffectStart(FLDEFF_SURF_BLOB);
                SetSurfBlob_BobState(follower->fieldEffectSpriteId, 1);
            }
            ObjectEventTurn(follower, DIR_SOUTH);
            follower->singleMovementActive = FALSE;
            follower->heldMovementActive = FALSE;
            ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN);
            task->tState = CLOSE_DOOR;
        }
        break;
    case CLOSE_DOOR:
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            task->tDoorTask = FieldAnimateDoorClose(*x, *y);
            task->tState = UNFREEZE_OBJECTS;
        }
        break;
    case UNFREEZE_OBJECTS:
        // Wait for door to close.
        if (task->tDoorTask < 0 || gTasks[task->tDoorTask].isActive != TRUE)
        {
            UnfreezeObjectEvents();
            task->tState = REALLOW_MOVEMENT;
        }
        break;
    case REALLOW_MOVEMENT:
        struct MapPosition position;
        enum Direction playerDirection;

        FollowerNPC_HandleSprite(slot);
        SetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, FNPC_DOOR_NONE, slot);
        gPlayerAvatar.preventStep = FALSE;

        playerDirection = GetPlayerFacingDirection();
        
        GetPlayerPosition(&position);
        position.elevation = gObjectEvents[targetId].previousElevation;
        position.x = gObjectEvents[targetId].currentCoords.x;
        position.y = gObjectEvents[targetId].currentCoords.y;

        if (TryStartStepBasedScript(&position, player->currentMetatileBehavior, playerDirection) == TRUE)
        {
            LockPlayerFieldControls();
            HideMapNamePopUpWindow();
        }
        DestroyTask(taskId);
        break;
    }
}

#undef tDoorTask

static void Task_FollowerNPCHandleEscalator(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(task->tSlot)];
    struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];

    ObjectEventClearHeldMovementIfActive(follower);
    ObjectEventSetHeldMovement(follower, DetermineFollowerNPCState(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN, DetermineFollowerNPCDirection(player, follower), task->tSlot));
    DestroyTask(taskId);
}

#define tCounter                data[1]
#define tMetatileBehavior       data[2]
#define tTimer                  data[7]

static void Task_FollowerNPCHandleEscalatorFinish(u8 taskId)
{
    s16 x, y;
    struct Task *task = &gTasks[taskId];
    u8 targetId = GetFollowerTargetIdBySlot(task->tSlot);
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(task->tSlot)];
    struct ObjectEvent *target = &gObjectEvents[targetId];
    struct Sprite *sprite = &gSprites[follower->spriteId];

    switch (task->tState)
    {
    case MOVE_TO_PLAYER_POS:
        MoveObjectEventToMapCoords(follower, target->currentCoords.x, target->currentCoords.y);
        x = gObjectEvents[targetId].currentCoords.x;
        y = gObjectEvents[targetId].currentCoords.y;
        task->tMetatileBehavior = MapGridGetMetatileBehaviorAt(x, y);
        task->tTimer = 0;
        task->tState = WAIT_FOR_PLAYER_MOVE;
        break;
    case WAIT_FOR_PLAYER_MOVE:
        // Wait half a second before revealing the follower.
        if (task->tTimer++ < 32)
            break;

        task->tState = SHOW_FOLLOWER_DOWN;
        task->tCounter = 16;
        SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_NONE, task->tSlot);
        gPlayerAvatar.preventStep = TRUE;
        ObjectEventClearHeldMovementIfActive(follower);
        ObjectEventSetHeldMovement(follower, GetFaceDirectionMovementAction(DIR_EAST));
        if (task->tMetatileBehavior == 0x6b)
            task->tState = SHOW_FOLLOWER_UP;

        break;
    case SHOW_FOLLOWER_DOWN:
        follower->invisible = FALSE;
        CalculateFollowerNPCEscalatorTrajectoryDown(task);
        task->tState = MOVE_FOLLOWER_DOWN;
        break;
    case MOVE_FOLLOWER_DOWN:
        CalculateFollowerNPCEscalatorTrajectoryDown(task);
        task->tMetatileBehavior++;
        if (task->tMetatileBehavior & 1)
            task->tCounter--;

        if (task->tCounter == 0)
        {
            sprite->x2 = 0;
            sprite->y2 = 0;
            task->tState = MOVEMENT_FINISH;
        }
        break;
    case SHOW_FOLLOWER_UP:
        follower->invisible = FALSE;
        CalculateFollowerNPCEscalatorTrajectoryUp(task);
        task->tState = MOVE_FOLLOWER_UP;
        break;
    case MOVE_FOLLOWER_UP:
        CalculateFollowerNPCEscalatorTrajectoryUp(task);
        task->tMetatileBehavior++;
        if (task->tMetatileBehavior & 1)
            task->tCounter--;

        if (task->tCounter == 0)
        {
            sprite->x2 = 0;
            sprite->y2 = 0;
            task->tState = MOVEMENT_FINISH;
        }
        break;
    case MOVEMENT_FINISH:
        if (ObjectEventClearHeldMovementIfFinished(follower))
        {
            gPlayerAvatar.preventStep = FALSE;
            DestroyTask(taskId);
        }
    }
}

#undef tMetatileBehavior
#undef tTimer

static void CalculateFollowerNPCEscalatorTrajectoryUp(struct Task *task)
{
    struct Sprite *sprite = &gSprites[gObjectEvents[GetFollowerNPCObjectId(task->tSlot)].spriteId];

    sprite->x2 = Cos(0x7c, task->tCounter);
    sprite->y2 = Sin(0x76, task->tCounter);
}

static void CalculateFollowerNPCEscalatorTrajectoryDown(struct Task *task)
{
    struct Sprite *sprite = &gSprites[gObjectEvents[GetFollowerNPCObjectId(task->tSlot)].spriteId];

    sprite->x2 = Cos(0x84, task->tCounter);
    sprite->y2 = Sin(0x94, task->tCounter);
}

#undef tCounter

void CreateFollowerNPC(u32 gfx, u32 followerFlags, const u8 *scriptPtr, u8 slot)
{
    if (PlayerHasFollowerNPC(slot))
        return;

    u8 target = GetFollowerTargetIdBySlot(slot);

    struct ObjectEvent *targetId = &gObjectEvents[target];
    struct ObjectEvent *follower;
    struct ObjectEventTemplate npc =
    {
        .localId = OBJ_EVENT_ID_NPC_FOLLOWER1 + slot,
        .graphicsId = gfx,
        .x = targetId->currentCoords.x,
        .y = targetId->currentCoords.y,
        .elevation = gObjectEvents[target].previousElevation,
        .script = scriptPtr
    };

    SetFollowerNPCData(FNPC_DATA_OBJ_ID, TrySpawnObjectEventTemplate(&npc, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, targetId->currentCoords.x, targetId->currentCoords.y), slot);
    follower = &gObjectEvents[GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot)];
    follower->movementType = MOVEMENT_TYPE_NONE;
    gSprites[follower->spriteId].callback = MovementType_None;

    SetFollowerNPCData(FNPC_DATA_IN_PROGRESS, TRUE, slot);
    SetFollowerNPCData(FNPC_DATA_GFX_ID, follower->graphicsId, slot);
    SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_NONE, slot);
    SetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, FNPC_DOOR_NONE, slot);
    SetFollowerNPCScriptPointer(scriptPtr, slot);
    if (FollowerNPCHasRunningFrames(slot))
        followerFlags |= FOLLOWER_NPC_FLAG_HAS_RUNNING_FRAMES;

    SetFollowerNPCData(FNPC_DATA_FOLLOWER_FLAGS, followerFlags, slot);

    // If the player is biking and the follower flags prohibit biking, force the player to dismount the bike.
    if (!CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_BIKE, slot)
    &&  TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_BIKE))
        SetPlayerAvatarTransitionFlags(PLAYER_AVATAR_FLAG_ON_FOOT);

    // Set the follower sprite to match the player state.
    if (!TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_ON_FOOT))
        FollowerNPC_HandleSprite(slot);

    HideNPCFollower(slot);
    SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_REAPPEAR, slot);
}

void DestroyFollowerNPC(u8 slot)
{
    if (!PlayerHasFollowerNPC(slot))
        return;

    RemoveObjectEvent(&gObjectEvents[GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot)]);
    ClearFollowerNPCData(slot);
    UpdateFollowingPokemon();
}

#define RETURN_STATE(state, dir) return newState == MOVEMENT_INVALID ? state + (dir - 1) : ReturnFollowerNPCDelayedState(dir - 1, slot);
u32 DetermineFollowerNPCState(struct ObjectEvent *follower, u32 state, enum Direction direction, u8 slot)
{
    u32 newState = MOVEMENT_INVALID;
    enum Collision collision = COLLISION_NONE;
    s16 followerX = follower->currentCoords.x;
    s16 followerY = follower->currentCoords.y;
    u32 currentBehavior = MapGridGetMetatileBehaviorAt(followerX, followerY);
    u32 nextBehavior;
    u32 noSpecialAnimFrames = (GetFollowerNPCSprite(slot) == GetFollowerNPCData(FNPC_DATA_GFX_ID, slot));
    u32 delayedState = GetFollowerNPCData(FNPC_DATA_DELAYED_STATE, slot);
    s16 targetDestX, targetDestY;
    enum Direction playerMoveDirection = GetNewPlayerMovementDirection(state);
    u32 newPlayerMB;

    MoveCoords(direction, &followerX, &followerY);
    nextBehavior = MapGridGetMetatileBehaviorAt(followerX, followerY);
    follower->facingDirectionLocked = FALSE;

    // Follower won't do delayed movement until player does a movement.
    if (!IsStateMovement(state) && delayedState)
        return MOVEMENT_ACTION_NONE;

    // Follower won't move if player is forced back onto the same tile.
    if (GetFollowerNPCData(FNPC_DATA_FORCED_MOVEMENT, slot) == FNPC_FORCED_STAY)
        return MOVEMENT_ACTION_NONE;

    GetXYCoordsPlayerMovementDest(playerMoveDirection, &targetDestX, &targetDestY, slot);
    newPlayerMB = MapGridGetMetatileBehaviorAt(targetDestX, targetDestY);

    if (IsPlayerForcedOntoSameTile(newPlayerMB, playerMoveDirection)
     && !(gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_MACH_BIKE && playerMoveDirection == DIR_NORTH && newPlayerMB == MB_MUDDY_SLOPE && GetPlayerSpeed() >= PLAYER_SPEED_FAST))
    {
        SetFollowerNPCData(FNPC_DATA_FORCED_MOVEMENT, FNPC_FORCED_STAY, slot);
        SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, 0, slot);
        if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ON_FOOT)
            ObjectEventSetHeldMovement(follower, GetFaceDirectionAnimNum(follower->facingDirection));

        return MOVEMENT_INVALID;
    }

    if (IsStateMovement(state) && delayedState)
    {
        // Lock face direction for Acro side jump.
        if (delayedState == MOVEMENT_ACTION_JUMP_DOWN && TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_ACRO_BIKE))
            follower->facingDirectionLocked = TRUE;

        newState = delayedState + (direction -1);
    }

    // Clear ice tile stuff.
    follower->disableAnim = FALSE;

    // Clear overwrite movement.
    follower->directionOverwrite = DIR_NONE;

    // Sideways stairs checks.
    collision = GetSidewaysStairsCollision(follower, direction, currentBehavior, nextBehavior, collision);
    switch (collision)
    {
    case COLLISION_SIDEWAYS_STAIRS_TO_LEFT:
        follower->directionOverwrite = GetLeftSideStairsDirection(direction);
        break;
    case COLLISION_SIDEWAYS_STAIRS_TO_RIGHT:
        follower->directionOverwrite = GetRightSideStairsDirection(direction);
        break;
    default:
        break;
    }

    switch (state)
    {
    case MOVEMENT_ACTION_WALK_SLOW_DOWN ... MOVEMENT_ACTION_WALK_SLOW_RIGHT:
        // Slow walk.
        RETURN_STATE(MOVEMENT_ACTION_WALK_SLOW_DOWN, direction);

    case MOVEMENT_ACTION_WALK_NORMAL_DOWN ... MOVEMENT_ACTION_WALK_NORMAL_RIGHT:
        // Normal walk.
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    case MOVEMENT_ACTION_JUMP_2_DOWN ... MOVEMENT_ACTION_JUMP_2_RIGHT:
        // Ledge jump.
        if (delayedState == MOVEMENT_ACTION_JUMP_2_DOWN)
            return (MOVEMENT_ACTION_JUMP_2_DOWN + (direction - 1));

        if (delayedState == MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN)
            return (MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN + (direction - 1));

        SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, MOVEMENT_ACTION_JUMP_2_DOWN, slot);
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    case MOVEMENT_ACTION_WALK_FAST_DOWN ... MOVEMENT_ACTION_WALK_FAST_RIGHT:
        // Handle ice tile (some walking animation).
        if (MetatileBehavior_IsIce(follower->currentMetatileBehavior) || MetatileBehavior_IsTrickHouseSlipperyFloor(follower->currentMetatileBehavior))
            follower->disableAnim = TRUE;

        // Handle surfing.
        if (GetFollowerNPCData(FNPC_DATA_CURRENT_SPRITE, slot) == FOLLOWER_NPC_SPRITE_INDEX_SURF && GetFollowerNPCSprite(slot) == GetFollowerNPCData(FNPC_DATA_GFX_ID, slot))
            RETURN_STATE(MOVEMENT_ACTION_SURF_STILL_DOWN, direction);

        if (MetatileBehavior_IsMuddySlope(follower->currentMetatileBehavior))
            follower->facingDirectionLocked = TRUE;

        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);

    case MOVEMENT_ACTION_WALK_FASTER_DOWN ... MOVEMENT_ACTION_WALK_FASTER_RIGHT:
        if (MetatileBehavior_IsIce(follower->currentMetatileBehavior) || MetatileBehavior_IsTrickHouseSlipperyFloor(follower->currentMetatileBehavior))
            follower->disableAnim = TRUE;

        RETURN_STATE(MOVEMENT_ACTION_WALK_FASTER_DOWN, direction);

    case MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN ... MOVEMENT_ACTION_RIDE_WATER_CURRENT_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN, direction);

    // Acro bike.
    case MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_FACE_RIGHT:
        if (noSpecialAnimFrames)
            return MOVEMENT_ACTION_NONE;

        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN ... MOVEMENT_ACTION_ACRO_POP_WHEELIE_RIGHT:
        if (noSpecialAnimFrames)
            return MOVEMENT_ACTION_NONE;

        RETURN_STATE(MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN ... MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_RIGHT:
        if (noSpecialAnimFrames)
            return MOVEMENT_ACTION_NONE;

        RETURN_STATE(MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_RIGHT:
        if (noSpecialAnimFrames)
            return MOVEMENT_ACTION_NONE;

        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_HOP_RIGHT:
        if (noSpecialAnimFrames)
            RETURN_STATE(MOVEMENT_ACTION_JUMP_DOWN, direction);

        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT:
        // Ledge jump.
        if (noSpecialAnimFrames)
        {
            if (delayedState == MOVEMENT_ACTION_JUMP_2_DOWN)
                return (MOVEMENT_ACTION_JUMP_2_DOWN + (direction - 1));

            SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, MOVEMENT_ACTION_JUMP_2_DOWN, slot);
        }
        else
        {
            if (delayedState == MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN)
                return (MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN + (direction - 1));

            if (delayedState == MOVEMENT_ACTION_JUMP_2_DOWN)
                return (MOVEMENT_ACTION_JUMP_2_DOWN + (direction - 1));

            SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN, slot);
        }

        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_RIGHT:
        if (noSpecialAnimFrames)
            return MOVEMENT_ACTION_NONE;

        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN ... MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_RIGHT:
        if (noSpecialAnimFrames)
            RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);

        RETURN_STATE(MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_RIGHT:
        if (noSpecialAnimFrames)
            RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);

        RETURN_STATE(MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN, direction);

    case MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN ... MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_RIGHT:
        if (noSpecialAnimFrames)
            RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);

        RETURN_STATE(MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN, direction);

    // Sliding.
    case MOVEMENT_ACTION_SLIDE_DOWN ... MOVEMENT_ACTION_SLIDE_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_SLIDE_DOWN, direction);

    case MOVEMENT_ACTION_PLAYER_RUN_DOWN ... MOVEMENT_ACTION_PLAYER_RUN_RIGHT:
        // Running frames.
        if (CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_HAS_RUNNING_FRAMES, slot))
            RETURN_STATE(MOVEMENT_ACTION_PLAYER_RUN_DOWN, direction);

        RETURN_STATE(MOVEMENT_ACTION_WALK_FAST_DOWN, direction);

    case MOVEMENT_ACTION_JUMP_SPECIAL_DOWN ... MOVEMENT_ACTION_JUMP_SPECIAL_RIGHT:
        SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, MOVEMENT_ACTION_JUMP_SPECIAL_DOWN, slot);
        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    case MOVEMENT_ACTION_JUMP_DOWN ... MOVEMENT_ACTION_JUMP_RIGHT:
        // Acro side hop.
        if (delayedState == MOVEMENT_ACTION_JUMP_DOWN)
        {
            if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_ACRO_BIKE))
                follower->facingDirectionLocked = TRUE;

            return newState;
        }
        else
        {
            SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, MOVEMENT_ACTION_JUMP_DOWN, slot);
            RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);
        }

    // Run slow.
    case MOVEMENT_ACTION_RUN_DOWN_SLOW ... MOVEMENT_ACTION_RUN_RIGHT_SLOW:
        if (CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_HAS_RUNNING_FRAMES, slot))
            RETURN_STATE(MOVEMENT_ACTION_RUN_DOWN_SLOW, direction);

        RETURN_STATE(MOVEMENT_ACTION_WALK_NORMAL_DOWN, direction);

    // Slow stairs.
    case MOVEMENT_ACTION_WALK_SLOW_STAIRS_DOWN ... MOVEMENT_ACTION_WALK_SLOW_STAIRS_RIGHT:
        RETURN_STATE(MOVEMENT_ACTION_WALK_SLOW_STAIRS_DOWN, direction);

    default:
        return MOVEMENT_INVALID;
    }

    return newState;
}

/*
 * Reload the entire event object.
 * It would usually be enough just to change the sprite Id, but if the original
 * sprite and the new sprite have different palettes, the palette would need to
 * be reloaded.
 */
void SetFollowerNPCSprite(u32 spriteIndex, u8 slot)
{
    u32 oldSpriteId;
    u32 newSpriteId;
    u32 newGraphicsId;
    struct ObjectEventTemplate clone;
    struct ObjectEvent backupFollower;
    struct ObjectEvent *follower;

    if (!PlayerHasFollowerNPC(slot))
        return;

    if (GetFollowerNPCData(FNPC_DATA_CURRENT_SPRITE, slot) == spriteIndex)
        return;

    // Save the sprite.
    follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    SetFollowerNPCData(FNPC_DATA_CURRENT_SPRITE, spriteIndex, slot);
    oldSpriteId = follower->spriteId;
    newGraphicsId = GetFollowerNPCSprite(slot);
    clone = *GetObjectEventTemplateByLocalIdAndMap(OBJ_EVENT_ID_NPC_FOLLOWER1 + slot, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);

    backupFollower = *follower;
    backupFollower.graphicsId = newGraphicsId;
    DestroySprite(&gSprites[oldSpriteId]);
    RemoveObjectEvent(&gObjectEvents[GetFollowerNPCObjectId(slot)]);

    clone.graphicsId = newGraphicsId;
    clone.movementType = 0;
    clone.localId = OBJ_EVENT_ID_NPC_FOLLOWER1 + slot;
    SetFollowerNPCData(FNPC_DATA_OBJ_ID, TrySpawnObjectEventTemplate(&clone, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, clone.x, clone.y), slot);
    if (GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot) != OBJECT_EVENTS_COUNT)
    {
        follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
        newSpriteId = follower->spriteId;
        *follower = backupFollower;
        follower->spriteId = newSpriteId;
        MoveObjectEventToMapCoords(follower, follower->currentCoords.x, follower->currentCoords.y);
        ObjectEventTurn(follower, follower->facingDirection);
    }
    else
    {
        ClearFollowerNPCData(slot);
    }
}

static void ChooseFirstThreeEligibleMons(void)
{
    u32 i;
    u32 count = 0;

    ClearSelectedPartyOrder();

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_HP) != 0
         && GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_IS_EGG) == FALSE
         && GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES) != SPECIES_NONE)
        {
            gSelectedOrderFromParty[count] = (i + 1);
            count++;
        }

        if (count == 3)
            break;
    }
}

bool32 PlayerHasFollowerNPC(u8 slot)
{
    return GetFollowerNPCData(FNPC_DATA_IN_PROGRESS, slot);
}

void NPCFollow(struct ObjectEvent *npc, u32 state, bool32 ignoreScriptActive, u8 slot)
{
    struct ObjectEvent *target = &gObjectEvents[GetFollowerTargetIdBySlot(slot)];
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    enum Direction dir;
    u32 newState;
    u32 taskId;

    // Only when the target moves.
    if (target != npc)
        return;
    // Only if a follower exists.
    else if (!PlayerHasFollowerNPC(slot))
        return;
    // Don't follow during a script.
    else if (ArePlayerFieldControlsLocked() && !ignoreScriptActive)
        return;

    // If the follower's object has been removed, create a new one and set it to reappear.
    if (!follower->active)
    {
        CreateFollowerNPCAvatar(slot);
        SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_REAPPEAR, slot);
    }

    // Restore post warp behavior after setobjectxy.
    if (GetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, slot) == FNPC_DOOR_NO_POS_SET)
        SetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, FNPC_DOOR_NONE, slot);

    // Follower changes to normal sprite after getting off surf blob.
    if (GetFollowerNPCData(FNPC_DATA_CURRENT_SPRITE, slot) == FOLLOWER_NPC_SPRITE_INDEX_SURF && !CheckFollowerNPCFlag(PLAYER_AVATAR_FLAG_SURFING, slot) && follower->fieldEffectSpriteId == 0)
    {
        SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_NORMAL, slot);
        SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_NONE, slot);
    }

    // Check if the state would cause hidden follower to reappear.
    if (IsStateMovement(state) && GetFollowerNPCData(FNPC_DATA_WARP_END, slot) == FNPC_WARP_REAPPEAR)
    {
        SetFollowerNPCData(FNPC_DATA_WARP_END, slot, FNPC_WARP_NONE);

        if (GetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, slot) == FNPC_DOOR_NEEDS_TO_EXIT)
        {
            gPlayerAvatar.preventStep = TRUE;
            taskId = CreateTask(Task_FollowerNPCOutOfDoor, 1);
            gTasks[taskId].tState = 0;
            gTasks[taskId].tDoorX = follower->currentCoords.x;
            gTasks[taskId].tDoorY = follower->currentCoords.y;
            gTasks[taskId].tSlot = slot;
            TryUpdateFollowerNPCSpriteUnderwater(slot);
            ObjectEventClearHeldMovementIfFinished(follower);
            return;
        }

        follower->invisible = FALSE;
        MoveObjectEventToMapCoords(follower, target->currentCoords.x, target->currentCoords.y);
        // The follower should be facing the same direction as the target when it comes out of hiding.
        ObjectEventTurn(follower, target->facingDirection);

        // Recreate the surf blob if needed.
        if (GetFollowerNPCData(FNPC_DATA_SURF_BLOB, slot) == FNPC_SURF_BLOB_RECREATE)
        {
            SetUpSurfBlobFieldEffect(follower, slot);
            follower->fieldEffectSpriteId = FieldEffectStart(FLDEFF_SURF_BLOB);
            SetSurfBlob_BobState(follower->fieldEffectSpriteId, 1);
        }
        else
        {
            TryUpdateFollowerNPCSpriteUnderwater(slot);
        }
    }

    dir = DetermineFollowerNPCDirection(target, follower);

    if (dir == DIR_NONE)
    {
        ObjectEventClearHeldMovementIfFinished(follower);
        return;
    }

    newState = DetermineFollowerNPCState(follower, state, dir, slot);
    if (newState == MOVEMENT_INVALID)
    {
        ObjectEventClearHeldMovementIfFinished(follower);
        return;
    }

    // Follower gets on surf blob.
    if (GetFollowerNPCData(FNPC_DATA_SURF_BLOB, slot) == FNPC_SURF_BLOB_NEW && IsStateMovement(state))
    {
        SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_RECREATE, slot);
        gPlayerAvatar.preventStep = TRUE;
        SetSurfJump(slot);
        ObjectEventClearHeldMovementIfFinished(follower);
        return;
    }
    // Follower gets off surf blob.
    else if (GetFollowerNPCData(FNPC_DATA_SURF_BLOB, slot) == FNPC_SURF_BLOB_DESTROY)
    {
        SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_NONE, slot);
        gPlayerAvatar.preventStep = TRUE;
        SetSurfDismount(slot);
        ObjectEventClearHeldMovementIfFinished(follower);
        return;
    }

    ObjectEventClearHeldMovementIfActive(follower);
    ObjectEventSetHeldMovement(follower, newState);
    PlayerLogCoordinates(target, slot);

    switch (newState)
    {
    case MOVEMENT_ACTION_JUMP_2_DOWN ... MOVEMENT_ACTION_JUMP_2_RIGHT:
    case MOVEMENT_ACTION_JUMP_DOWN ... MOVEMENT_ACTION_JUMP_RIGHT:
    case MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN ... MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT:
        // Synchronize movements on stairs and ledges.
        u8 taskId = CreateTask(Task_ReallowPlayerMovement, 1);
        gTasks[taskId].tSlot = slot;
        gPlayerAvatar.preventStep = TRUE;
    }

    ObjectEventClearHeldMovementIfFinished(follower);
}

void CreateFollowerNPCAvatar(u8 slot)
{
    if (!PlayerHasFollowerNPC(slot))
        return;

    u8 targetId = GetFollowerTargetIdBySlot(slot);
    struct ObjectEvent *target = &gObjectEvents[targetId];
    struct ObjectEventTemplate clone =
    {
        .localId = OBJ_EVENT_ID_NPC_FOLLOWER1 + slot,
        .graphicsId = GetFollowerNPCSprite(slot),
        .x = target->currentCoords.x - 7,
        .y = target->currentCoords.y - 7,
        .elevation = target->currentElevation,
        .script = GetFollowerNPCScriptPointer(slot),
        .movementType = MOVEMENT_TYPE_FACE_DOWN
    };

    switch (gObjectEvents[targetId].facingDirection)
    {
    case DIR_NORTH:
        clone.movementType = MOVEMENT_TYPE_FACE_UP;
        break;
    case DIR_WEST:
        clone.movementType = MOVEMENT_TYPE_FACE_LEFT;
        break;
    case DIR_EAST:
        clone.movementType = MOVEMENT_TYPE_FACE_RIGHT;
        break;
    default:
        break;
    }

    // Create NPC and store ID.
    SetFollowerNPCData(FNPC_DATA_OBJ_ID, TrySpawnObjectEventTemplate(&clone, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, clone.x, clone.y), slot);
    if (GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot) == OBJECT_EVENTS_COUNT)
    {
        ClearFollowerNPCData(slot);
        return;
    }

    if (gMapHeader.mapType == MAP_TYPE_UNDERWATER)
        SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_NONE, slot);

    gObjectEvents[GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot)].invisible = FALSE;
}

void FollowerNPC_HandleSprite(u8 slot)
{
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_BIKE) && CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_BIKE, slot))
    {
        if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_MACH_BIKE)
            SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_MACH_BIKE, slot);
        else if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ACRO_BIKE)
            SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_ACRO_BIKE, slot);
    }
    else if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ON_FOOT)
    {
        SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_NORMAL, slot);
    }
}

enum Direction DetermineFollowerNPCDirection(struct ObjectEvent *target, struct ObjectEvent *follower)
{
    if (target->currentCoords.x == follower->currentCoords.x
     && target->currentCoords.y == follower->currentCoords.y)
        return DIR_NONE;
        
    return DetermineObjectEventDirectionFromObject(target, follower);
}

u32 GetFollowerNPCObjectId(u8 slot)
{
    if (PlayerHasFollowerNPC(slot))
        return GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot);

    return 0;
}

u8 GetFollowerSlotByObjectId(u8 slot)
{
    switch (slot)
    {
    case OBJ_EVENT_ID_NPC_FOLLOWER1: return 0;
    case OBJ_EVENT_ID_NPC_FOLLOWER2: return 1;
    case OBJ_EVENT_ID_NPC_FOLLOWER3: return 2;
    case OBJ_EVENT_ID_NPC_FOLLOWER4: return 3;
    case OBJ_EVENT_ID_NPC_FOLLOWER5: return 4;
    default: return 0;
    }
}

u8 GetFollowerTargetIdBySlot(u8 slot)
{
    if (slot == 0)
        return gPlayerAvatar.objectEventId;
    else
        return GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot - 1);
}

bool32 CheckFollowerNPCFlag(u32 flag, u8 slot)
{
    if (!PlayerHasFollowerNPC(slot))
        return TRUE;

    if (GetFollowerNPCData(FNPC_DATA_FOLLOWER_FLAGS, slot) & flag)
        return TRUE;

    return FALSE;
}

bool32 FollowerNPC_IsCollisionExempt(struct ObjectEvent *obstacle, struct ObjectEvent *collider, u8 slot)
{
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    // struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct ObjectEvent *player = &gObjectEvents[GetFollowerTargetIdBySlot(slot)];

    return TRUE; //wip, this might get iffy. need to test

    if (!PlayerHasFollowerNPC(slot))
        return FALSE;

    if (obstacle == follower && collider == player)
        return TRUE;

    return FALSE;
}

void HideNPCFollower(u8 slot)
{
    if (!PlayerHasFollowerNPC(slot) || gObjectEvents[GetFollowerNPCObjectId(slot)].invisible)
        return;

    if (GetFollowerNPCData(FNPC_DATA_SURF_BLOB, slot) == FNPC_SURF_BLOB_RECREATE || GetFollowerNPCData(FNPC_DATA_SURF_BLOB, slot) == FNPC_SURF_BLOB_DESTROY)
    {
        SetSurfBlob_BobState(gObjectEvents[GetFollowerNPCObjectId(slot)].fieldEffectSpriteId, 2);
        DestroySprite(&gSprites[gObjectEvents[GetFollowerNPCObjectId(slot)].fieldEffectSpriteId]);
        gObjectEvents[GetFollowerNPCObjectId(slot)].fieldEffectSpriteId = 0;
    }

    SetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, FNPC_DOOR_NONE, slot);

    gObjectEvents[GetFollowerNPCObjectId(slot)].invisible = FALSE;
}

void FollowerNPC_WarpSetEnd(void)
{
    struct ObjectEvent *player;
    struct ObjectEvent *follower;

    //wip, this is most likely broken for multi followers

    if (!PlayerHasFollowerNPC(0))
        return;

    player = &gObjectEvents[gPlayerAvatar.objectEventId];
    follower = &gObjectEvents[GetFollowerNPCObjectId(0)];

    PlayerLogCoordinates(player, 0);

    // Skip setting position if setobjectxy was used during ON_WARP_INTO_MAP_TABLE.
    if (GetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, 0) == FNPC_DOOR_NO_POS_SET)
    {
        SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_NONE, 0);
        SetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, FNPC_DOOR_NONE, 0);
    }
    else
    {
        u32 toY = GetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, 0) == FNPC_DOOR_NEEDS_TO_EXIT ? (player->currentCoords.y - 1) : player->currentCoords.y;
        MoveObjectEventToMapCoords(follower, player->currentCoords.x, toY);
        SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_REAPPEAR, 0);
    }

    if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ON_FOOT)
    {
        SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_NORMAL, 0);
        SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_NONE, 0);
    }
    else if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_SURFING)
    {
        SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_SURF, 0);
        SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_RECREATE, 0);
    }

    follower->facingDirection = player->facingDirection;
    follower->movementDirection = player->movementDirection;
}

bool32 FollowerNPCCanBike(u8 slot)
{
    if (!PlayerHasFollowerNPC(slot))
        return TRUE;
    else if (CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CAN_BIKE, slot))
        return TRUE;
    else
        return FALSE;
}

void FollowerNPC_HandleBike(u8 slot)
{
    // Wait until after get off surf blob to start biking.
    if (GetFollowerNPCData(FNPC_DATA_CURRENT_SPRITE, slot) == FOLLOWER_NPC_SPRITE_INDEX_SURF)
        return;

    if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_MACH_BIKE && FollowerNPCCanBike(slot) && GetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, slot) != FNPC_DOOR_NEEDS_TO_EXIT) //Coming out door
    {
        SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_MACH_BIKE, slot);
    }
    else if (gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_ACRO_BIKE && FollowerNPCCanBike(slot) && GetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, slot) != FNPC_DOOR_NEEDS_TO_EXIT) //Coming out door
    {
        SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_ACRO_BIKE, slot);
    }
    else
    {
        SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_NORMAL, slot);
        // Disable saved Acro side jump.
        if (GetFollowerNPCData(FNPC_DATA_DELAYED_STATE, slot) == MOVEMENT_ACTION_JUMP_DOWN)
            SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, 0, slot);
    }
}

void FollowerNPC_FollowerToWater(u8 slot)
{
    if (!PlayerHasFollowerNPC(slot))
        return;

    // Prepare for making the follower do the jump and spawn the surf blob right in front of the follower's location.
    NPCFollow(&gObjectEvents[gPlayerAvatar.objectEventId], MOVEMENT_ACTION_JUMP_DOWN, TRUE, slot);
    SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_NEW, slot);
}

void FollowerNPC_SetIndicatorToRecreateSurfBlob(u8 slot)
{
    if (PlayerHasFollowerNPC(slot))
        SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_RECREATE, slot);
}

void FollowerNPC_BindToSurfBlobOnReloadScreen(u8 slot)
{
    struct ObjectEvent *follower;

    if (!PlayerHasFollowerNPC(slot))
        return;

    follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    TryUpdateFollowerNPCSpriteUnderwater(slot);

    if (follower->invisible || (GetFollowerNPCData(FNPC_DATA_SURF_BLOB, slot) != FNPC_SURF_BLOB_RECREATE && GetFollowerNPCData(FNPC_DATA_SURF_BLOB, slot) != FNPC_SURF_BLOB_DESTROY))
        return;

    // Spawn the surf blob under the follower.
    SetUpSurfBlobFieldEffect(follower, slot);
    follower->fieldEffectSpriteId = FieldEffectStart(FLDEFF_SURF_BLOB);
    SetSurfBlob_BobState(follower->fieldEffectSpriteId, 1);
}

void PrepareFollowerNPCDismountSurf(u8 slot)
{
    if (!PlayerHasFollowerNPC(slot))
        return;

    NPCFollow(&gObjectEvents[gPlayerAvatar.objectEventId], MOVEMENT_ACTION_WALK_NORMAL_DOWN, TRUE, slot);
    SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_DESTROY, slot);
}

void SetFollowerNPCSurfSpriteAfterDive(void)
{
    //wip this is most likely broken, and probably needs a for loop
    SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_SURF, 0);
    SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_RECREATE, 0);
}

bool32 FollowerNPCComingThroughDoor(u8 slot)
{
    if (!PlayerHasFollowerNPC(slot))
        return FALSE;

    if (GetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, slot))
        return TRUE;

    return FALSE;
}

void FollowerNPC_SetIndicatorToComeOutDoor(u8 slot)
{
    if (PlayerHasFollowerNPC(slot))
        SetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, FNPC_DOOR_NEEDS_TO_EXIT, slot);
}

void EscalatorMoveFollowerNPC(u32 movementType, u8 slot)
{
    u8 taskId;

    if (!PlayerHasFollowerNPC(slot))
        return;

    taskId = CreateTask(Task_FollowerNPCHandleEscalator, 1);
    gTasks[taskId].data[1] = movementType;
    gTasks[taskId].tSlot = slot;
}

void EscalatorMoveFollowerNPCFinish(u8 slot)
{
    if (!PlayerHasFollowerNPC(slot))
        return;

    u8 taskId = CreateTask(Task_FollowerNPCHandleEscalatorFinish, 1);
    gTasks[taskId].tSlot = slot;
}

void FollowerNPCWalkIntoPlayerForLeaveMap(u8 slot)
{
    u32 followerObjId = GetFollowerNPCObjectId(slot);
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];

    if (followerObjId == OBJECT_EVENTS_COUNT)
        return;

    follower->singleMovementActive = FALSE;
    follower->heldMovementActive = FALSE;
    switch (DetermineFollowerNPCDirection(&gObjectEvents[GetFollowerTargetIdBySlot(slot)], &gObjectEvents[followerObjId]))
    {
    case DIR_NORTH:
        ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_UP);
        break;
    case DIR_SOUTH:
        ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN);
        break;
    case DIR_EAST:
        ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_RIGHT);
        break;
    case DIR_WEST:
        ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_LEFT);
        break;
    default:
        break;
    }
}

void FollowerNPCHideForLeaveMap(struct ObjectEvent *follower, u8 slot)
{
    SetFollowerNPCSprite(FOLLOWER_NPC_SPRITE_INDEX_NORMAL, slot);
    follower->invisible = FALSE;
    SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_REAPPEAR, slot);
    SetFollowerNPCData(FNPC_DATA_COME_OUT_DOOR, FNPC_DOOR_NONE, slot);
    SetFollowerNPCData(FNPC_DATA_SURF_BLOB, FNPC_SURF_BLOB_NONE, slot);
    SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, 0, slot);
}

void FollowerNPCReappearAfterLeaveMap(struct ObjectEvent *follower, struct ObjectEvent *target, u8 slot)
{
    if (PlayerHasFollowerNPC(slot))
    {
        follower->invisible = FALSE;
        MoveObjectEventToMapCoords(follower, target->currentCoords.x, target->currentCoords.y);
        ObjectEventTurn(follower, DIR_SOUTH);
        follower->singleMovementActive = FALSE;
        follower->heldMovementActive = FALSE;

        // Follower only steps onto a tile without collision.
        if (GetCollisionAtCoords(target, target->currentCoords.x, target->currentCoords.y + 1, DIR_SOUTH) == COLLISION_NONE)
            ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_DOWN);
        else if (GetCollisionAtCoords(target, target->currentCoords.x + 1, target->currentCoords.y, DIR_EAST) == COLLISION_NONE)
            ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_RIGHT);
        else if (GetCollisionAtCoords(target, target->currentCoords.x - 1, target->currentCoords.y, DIR_WEST) == COLLISION_NONE)
            ObjectEventSetHeldMovement(follower, MOVEMENT_ACTION_WALK_NORMAL_LEFT);
        else
            HideNPCFollower(slot);
    }
}

void FollowerNPCFaceAfterLeaveMap(u8 slot)
{
    struct ObjectEvent *target = &gObjectEvents[GetFollowerTargetIdBySlot(slot)];
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot)];

    if (follower->invisible)
        return;

    ObjectEventTurn(follower, DetermineFollowerNPCDirection(target, follower));
    SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_NONE, slot);
}

bool32 FollowerNPCIsBattlePartner(void)
{
    if (PlayerHasFollowerNPC(0) && GetFollowerNPCData(FNPC_DATA_BATTLE_PARTNER, 0))
        return TRUE;

    return FALSE;
}

u32 GetFollowerNPCBattlePartner(void)
{
    return GetFollowerNPCData(FNPC_DATA_BATTLE_PARTNER, 0);
}

bool32 IsNPCFollowerWildBattle(void)
{
    if (FollowerNPCIsBattlePartner() && FNPC_FLAG_PARTNER_WILD_BATTLES != 0
     && (FNPC_FLAG_PARTNER_WILD_BATTLES == FNPC_ALWAYS || FlagGet(FNPC_FLAG_PARTNER_WILD_BATTLES)))
        return TRUE;

    return FALSE;
}

void PrepareForFollowerNPCBattle(void)
{
    // Load the partner party if the NPC follower should participate.
    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && FollowerNPCIsBattlePartner())
    {
        SavePlayerParty();
        ChooseFirstThreeEligibleMons();
        ReducePlayerPartyToSelectedMons();
        VarSet(VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA);
        VarSet(VAR_0x8005, FRONTIER_DATA_SELECTED_MON_ORDER);
        CallFrontierUtilFunc();
        gPartnerTrainerId = TRAINER_PARTNER(GetFollowerNPCData(FNPC_DATA_BATTLE_PARTNER, 0));
        FillPartnerParty(gPartnerTrainerId);
    }
}

void RestorePartyAfterFollowerNPCBattle(void)
{
    VarSet(VAR_0x8004, FRONTIER_UTIL_FUNC_SAVE_PARTY);
    CallFrontierUtilFunc();
    LoadPlayerParty();
}

void FollowerNPC_TryRemoveFollowerOnWhiteOut(u8 slot)
{
    if (PlayerHasFollowerNPC(slot))
    {
        if (CheckFollowerNPCFlag(FOLLOWER_NPC_FLAG_CLEAR_ON_WHITE_OUT, slot))
            ClearFollowerNPCData(slot);
        else
            FollowerNPC_WarpSetEnd();
    }
}

#undef tDoorX
#undef tDoorY

// Task data
#define NPC_INTO_PLAYER         0
#define ENABLE_PLAYER_STEP      1

void Task_MoveNPCFollowerAfterForcedMovement(u8 taskId)//wip this is probably horribly broken and would actually need to loop all
{
    u8 slot = gTasks[taskId].tSlot;
    struct ObjectEvent *follower = &gObjectEvents[GetFollowerNPCObjectId(slot)];
    struct ObjectEvent *target = &gObjectEvents[GetFollowerTargetIdBySlot(slot)];

    // If follower moved during target's forced momvements.
    if (GetFollowerNPCData(FNPC_DATA_FORCED_MOVEMENT, slot) == FNPC_FORCED_FOLLOW)
    {
        // The NPC will take an extra step and be on the same tile as the target.
        if (gTasks[taskId].tState == NPC_INTO_PLAYER && ObjectEventClearHeldMovementIfFinished(target) != 0 && ObjectEventClearHeldMovementIfFinished(follower) != 0)
        {
            if (follower->currentMetatileBehavior == MB_MUDDY_SLOPE)
                follower->facingDirectionLocked = TRUE;

            ObjectEventSetHeldMovement(follower, GetWalkFastMovementAction(DetermineFollowerNPCDirection(target, follower)));
            gTasks[taskId].tState = ENABLE_PLAYER_STEP;
            return;
        }
        // Hide the NPC until the target takes a step. Reallow player input.
        else if (gTasks[taskId].tState == ENABLE_PLAYER_STEP && ObjectEventClearHeldMovementIfFinished(follower) != 0)
        {
            follower->facingDirectionLocked = FALSE;
            HideNPCFollower(slot);
            SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_REAPPEAR, slot);
            SetFollowerNPCData(FNPC_DATA_FORCED_MOVEMENT, FNPC_FORCED_NONE, slot);
            gPlayerAvatar.preventStep = FALSE;
            DestroyTask(taskId);
        }
    }
    // If target was forced back onto the same tile.
    else if (GetFollowerNPCData(FNPC_DATA_FORCED_MOVEMENT, slot) == FNPC_FORCED_STAY)
    {
        if (ObjectEventClearHeldMovementIfFinished(target) != 0)
        {
            SetFollowerNPCData(FNPC_DATA_FORCED_MOVEMENT, FNPC_FORCED_NONE, slot);
            SetFollowerNPCData(FNPC_DATA_DELAYED_STATE, 0, slot);
            gPlayerAvatar.preventStep = FALSE;
            DestroyTask(taskId);
        }
    }
}

#undef tState
#undef NPC_INTO_PLAYER
#undef ENABLE_PLAYER_STEP

void Task_HideNPCFollowerAfterMovementFinish(u8 taskId)
{
    u8 slot = gTasks[taskId].tSlot;
    struct ObjectEvent *npcFollower = &gObjectEvents[GetFollowerNPCObjectId(slot)];

    if (ObjectEventClearHeldMovementIfFinished(npcFollower) != 0)
    {
        HideNPCFollower(slot);
        SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_REAPPEAR, slot);
        gPlayerAvatar.preventStep = FALSE;
        DestroyTask(taskId);
    }
}

// Script commands.
void ScriptSetFollowerNPC(struct ScriptContext *ctx)
{
    u32 localId = ScriptReadByte(ctx);
    u32 flags = ScriptReadHalfword(ctx);
    u32 slot = ScriptReadByte(ctx);
    u32 setScript = ScriptReadByte(ctx);
    u32 battlePartner = ScriptReadHalfword(ctx);
    const u8 *script = (const u8 *)ScriptReadWord(ctx);

    if (PlayerHasFollowerNPC(slot))
        return;

    SetFollowerNPCData(FNPC_DATA_BATTLE_PARTNER, battlePartner, slot);
    TurnNPCIntoFollower(localId, flags, setScript, script, slot);
}

void ScriptCreateFollowerNPC(struct ScriptContext *ctx)
{
    u32 gfx = ScriptReadHalfword(ctx);
    u32 flags = ScriptReadHalfword(ctx);
    u32 slot = ScriptReadByte(ctx);
    const u8 *script = (const u8 *)ScriptReadWord(ctx);
    u32 battlePartner = ScriptReadHalfword(ctx);

    if (!FNPC_ENABLE_NPC_FOLLOWERS || PlayerHasFollowerNPC(slot))
        return;

    SetFollowerNPCData(FNPC_DATA_BATTLE_PARTNER, battlePartner, slot);
    CreateFollowerNPC(gfx, flags, script, slot);
}

void ScriptDestroyFollowerNPC(struct ScriptContext *ctx)
{
    u32 slot = ScriptReadByte(ctx);

    DestroyFollowerNPC(slot);
}

void ScriptFaceFollowerNPC(struct ScriptContext *ctx)
{
    u32 slot = ScriptReadByte(ctx);

    if (!FNPC_ENABLE_NPC_FOLLOWERS || !PlayerHasFollowerNPC(slot))
        return;

    struct ObjectEvent *player, *follower;
    player = &gObjectEvents[gPlayerAvatar.objectEventId];
    follower = &gObjectEvents[GetFollowerNPCData(FNPC_DATA_OBJ_ID, slot)];
    ObjectEventsTurnToEachOther(player, follower);
}

static const u8 *const FollowerNPCHideMovementsSpeedTable[][4] =
{
    [DIR_SOUTH] = {Common_Movement_WalkDownSlow, Common_Movement_WalkDown, Common_Movement_WalkDownFast, Common_Movement_WalkDownFaster},
    [DIR_NORTH] = {Common_Movement_WalkUpSlow, Common_Movement_WalkUp, Common_Movement_WalkUpFast, Common_Movement_WalkUpFaster},
    [DIR_WEST] = {Common_Movement_WalkLeftSlow, Common_Movement_WalkLeft, Common_Movement_WalkLeftFast, Common_Movement_WalkLeftFaster},
    [DIR_EAST] = {Common_Movement_WalkRightSlow, Common_Movement_WalkRight, Common_Movement_WalkRightFast, Common_Movement_WalkRightFaster}
};

void ScriptHideNPCFollower(struct ScriptContext *ctx)
{
    u32 slot = ScriptReadByte(ctx);
    u32 walkSpeed = ScriptReadByte(ctx);

    if (!FNPC_ENABLE_NPC_FOLLOWERS || !PlayerHasFollowerNPC(slot))
        return;

    struct ObjectEvent *npc = &gObjectEvents[GetFollowerNPCObjectId(slot)];

    if (npc->invisible == FALSE)
    {
        enum Direction direction = DetermineFollowerNPCDirection(&gObjectEvents[GetFollowerTargetIdBySlot(slot)], npc);

        if (walkSpeed > 3)
            walkSpeed = 3;

        ScriptMovement_StartObjectMovementScript(OBJ_EVENT_ID_NPC_FOLLOWER1 + slot, npc->mapGroup, npc->mapNum, FollowerNPCHideMovementsSpeedTable[direction][walkSpeed]);
        SetFollowerNPCData(FNPC_DATA_WARP_END, FNPC_WARP_REAPPEAR, slot);
    }
}

void ScriptCheckFollowerNPC(struct ScriptContext *ctx)
{
    u32 slot = ScriptReadByte(ctx);

    gSpecialVar_Result = PlayerHasFollowerNPC(slot);
}

void ScriptUpdateFollowingMon(struct ScriptContext *ctx)
{
    UpdateFollowingPokemon();
}

void ScriptChangeFollowerNPCBattlePartner(struct ScriptContext *ctx)
{
    if (!FNPC_ENABLE_NPC_FOLLOWERS || !PlayerHasFollowerNPC(0))
        return;

    u32 newBattlePartner = ScriptReadHalfword(ctx);

    SetFollowerNPCData(FNPC_DATA_BATTLE_PARTNER, newBattlePartner, 0);
}

#undef tSlot