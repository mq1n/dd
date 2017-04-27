//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"
/*
@interface AVController : NSObject
{
    struct AVControllerPrivate *_priv;
}*/
@interface AVController (iOS8)
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inDictionaries:(id)arg3;
+ (id)avControllerWithQueue:(id)arg1 error:(id *)arg2;
+ (id)avController;
+ (BOOL)isNetworkSupportedPath:(id)arg1;
+ (BOOL)isSupportedFileExtension:(id)arg1;
+ (BOOL)isSupportedMimeType:(id)arg1;
+ (void)setEnableNetworkMode:(BOOL)arg1;
+ (id)compatibleAudioRouteForRoute:(id)arg1;
- (void)figPlayerNotificationHandler:(id)arg1;
- (void)fpItemNotification:(id)arg1 sender:(id)arg2;
- (void)dequeueDeadItem;
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (struct OpaqueFigPlaybackItem *)createItemWithURL:(id)arg1 flags:(unsigned long)arg2 error:(int *)arg3;
- (double)bookmarkTimeForAVItem:(id)arg1;
- (id)bookmarkGroupIDForAVItem:(id)arg1;
- (void)ensurePlaybackQueueImmed;
- (struct OpaqueFigPlaybackItem *)currentFPItem;
- (id)currentItem;
- (void)makeCurrentItemReady;
- (BOOL)isCurrentItemReady;
- (void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2;
- (void)removeObserver:(id)arg1 fromTMOArray:(id)arg2;
- (void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4;
- (void)scheduleUpdateTimeMarkerObservations;
- (void)updateTimeMarkerObservations;
- (void)setQueue:(id)arg1;
- (void)logPerformanceDataForCurrentItem;
- (id)initWithQueue:(id)arg1 fmpType:(unsigned int)arg2 error:(id *)arg3;
- (id)_figPlayerNotifications;
- (BOOL)isValid;
- (id)initWithQueue:(id)arg1 error:(id *)arg2;
- (void)safeSubtitleCommandPosted:(void *)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)itemHasFinishedPlayingNotification:(id)arg1;
- (void)currentItemHasChanged:(id)arg1;
- (void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2;
- (void)applyDesiredRepeatMode;
- (void)rateDidChangeToRate:(float)arg1;
- (void)fmpEffectiveVolumeDidChange;
- (void)cancelAllCGImageRequests;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(int)arg3 withImageOptions:(id)arg4;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3;
- (struct CGImage *)grabCGImageAtTime:(double)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3 actualTime:(double *)arg4;
- (BOOL)okToNotifyFromThisThread;
- (long)updateActionAtEnd;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setApplyVideoTrackMatrix;
- (id)attributeForKey:(id)arg1;
- (void)setSubtitleRecipient:(id)arg1;
- (void)setShouldDisplayClosedCaptions:(BOOL)arg1;
- (BOOL)shouldDisplayClosedCaptions;
- (void)setLayer:(id)arg1;
- (id)lkLayer;
- (void)setOutputQTESFilePath:(id)arg1;
- (id)outputQTESFilePath;
//- (void)setVisualContext:(struct OpaqueFigVisualContext *)arg1;
- (struct OpaqueFigVisualContext *)visualContext;
- (int)eqPreset;
- (void)setEQPreset:(int)arg1;
- (void)setMuted:(BOOL)arg1;
- (BOOL)muted;
- (void)stepByCount:(int)arg1;
- (void)seekToDate:(id)arg1;
- (void)setCurrentTime:(double)arg1 options:(int)arg2;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)endInterruptionWithStatus:(id)arg1;
- (BOOL)activate:(id *)arg1;
- (BOOL)canBeginInterruption;
- (BOOL)beginInterruption:(id *)arg1;
- (void)makeError:(id *)arg1 withDescription:(id)arg2 code:(long)arg3;
- (id)errorWithDescription:(id)arg1 code:(long)arg2;
- (BOOL)resumePlayback:(double)arg1 error:(id *)arg2;
- (BOOL)setRate:(float)arg1 error:(id *)arg2;
- (BOOL)shouldBeginPlayingItem:(id)arg1 error:(id *)arg2;
- (float)rate;
- (BOOL)playNextItem:(id *)arg1;
- (id)addNextFeederItemToQueue;
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned int)arg1 error:(id *)arg2;
- (unsigned int)indexOfCurrentQueueFeederItem;
- (void)dequeueFirstItem;
- (void)pause;
- (BOOL)play:(id *)arg1;
- (BOOL)beginRepeatGap;
- (void)cancelContinueAfterRepeatGap;
- (void)continueAfterRepeatGap;
- (BOOL)havePlayedCurrentItem;
- (int)repeatMode;
- (BOOL)setRepeatMode:(int)arg1;
- (id)queueFeeder;
- (void)setQueueFeeder:(id)arg1;
- (void)setQueueFeeder:(id)arg1 withIndex:(int)arg2;
- (void)feederInvalidatedWithCurrentItemMoved:(id)arg1;
- (void)feederRangeWasRemoved:(id)arg1;
- (void)feederRangeWasInserted:(id)arg1;
- (id)queue;
- (void)checkQueueSpace;
- (void)scheduleQueueSpaceCheck;
//- (long)copyImageForTime:(struct __CVBuffer **)arg1 time:(const CDStruct_1b6d18a9 *)arg2;
//- (BOOL)isNewImageAvailableForTime:(const CDStruct_1b6d18a9 *)arg1 willNeverBeAvailable:(char *)arg2;
- (struct AVControllerPrivate *)privateStorage;
- (void)dealloc;
- (id)initForStreaming;
- (id)init;
- (void)setAVItemClass:(Class)arg1;
- (id)initWithError:(id *)arg1;
- (id)vibrationPattern;
- (void)setVibrationPattern:(id)arg1;
- (void)setVibrationEnabled:(BOOL)arg1;
- (BOOL)vibrationEnabled;

@end

