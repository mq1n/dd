/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"
//
//#import "FBMSessionClassProvidable-Protocol.h"
//#import "FBTestable-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, UserSettings;

@interface FBMStickerManager : NSObject// <FBMSessionClassProvidable, FBTestable>
{
    struct dispatch_queue_s *_serializationQueue;
    unsigned int _serializationCounter;
    NSMutableSet *_userRemovedStickerPackFbIds;
    NSMutableDictionary *_stickerUsageCounter;
    NSMutableDictionary *_stickersInPackMap;
    NSMutableDictionary *_stickerPackMap;
    NSMutableArray *_stickerPacksOnDevice;
    NSMutableDictionary *_stickerMap;
    UserSettings *_userSettings;
}

@property(retain, nonatomic) UserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(retain, nonatomic) NSMutableDictionary *stickerMap; // @synthesize stickerMap=_stickerMap;
@property(retain, nonatomic) NSMutableArray *stickerPacksOnDevice; // @synthesize stickerPacksOnDevice=_stickerPacksOnDevice;
@property(retain, nonatomic) NSMutableDictionary *stickerPackMap; // @synthesize stickerPackMap=_stickerPackMap;
@property(retain, nonatomic) NSMutableDictionary *stickersInPackMap; // @synthesize stickersInPackMap=_stickersInPackMap;
@property(retain, nonatomic) NSMutableDictionary *stickerUsageCounter; // @synthesize stickerUsageCounter=_stickerUsageCounter;
@property(retain, nonatomic) NSMutableSet *userRemovedStickerPackFbIds; // @synthesize userRemovedStickerPackFbIds=_userRemovedStickerPackFbIds;
- (void)moveStickerPack:(id)arg1 toIndex:(unsigned int)arg2;
- (void)_loadBuiltStickerPack:(unsigned long long)arg1 name:(id)arg2 stickerFbIds:(const unsigned long long *)arg3 stickerCount:(unsigned int)arg4;
- (void)_loadBuiltinStickerPacks;
- (id)likeSticker;
- (void)_appBackgrounds;
- (void)_restoreRecentStickers;
- (void)_saveRecentStickers;
- (void)addRecentSticker:(id)arg1;
- (id)recentStickers;
- (id)_mostRecentStickerFbIds;
- (void)_loadStickerPacksFromJson:(id)arg1;
- (id)_generateJsonForStickerPacks:(id)arg1;
- (id)_generateStorageFilename;
- (id)_getStorageFilePath;
- (unsigned int)currentVersion;
- (void)_restoreStickerPacks;
- (void)_waitUntilSerializationDone;
- (void)_serializeWithCounter:(unsigned int)arg1 storagePath:(id)arg2 stickerPacksJson:(id)arg3;
- (void)_saveStickerPacks;
- (id)stickerPackWithFbId:(unsigned long long)arg1;
- (id)stickerWithFbId:(unsigned long long)arg1;
- (void)_stickerPacksOnDeviceDidChange;
- (void)_removeStickersForStickerPack:(id)arg1;
- (void)_setStickers:(id)arg1 forStickerPack:(id)arg2;
- (id)stickersInPack:(id)arg1;
- (BOOL)removeStickerPack:(id)arg1;
- (BOOL)_removeStickerPack:(id)arg1;
- (BOOL)setStickers:(id)arg1 forStickerPack:(id)arg2;
- (BOOL)addStickerPack:(id)arg1;
- (BOOL)_addStickerPack:(id)arg1;
- (BOOL)isRemovedStickerPackFbId:(unsigned long long)arg1;
- (BOOL)isDownloadedStickerPack:(id)arg1;
- (void)_removeSticker:(id)arg1;
- (void)_addSticker:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSettings:(id)arg1;

@end

