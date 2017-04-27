/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

//#import "SCMessage.h"
//#import "EphemeralMedia.h"
//#import "MediaImageProcessingDelegate.h"
//#import "NSCoding.h"
//#import "MediaDataSource.h"
//#import "MediaDelegate.h"
//#import "SnapVideoFilterDelegate.h"
//#import "MediaUploadDelegate.h"

@class NSArray, NSNumber, NSDate, NSURL, AVPlayerItem, NSString;
/*
__attribute__((visibility("hidden")))
@interface Snap : EphemeralMedia <SnapVideoFilterDelegate, MediaDataSource, MediaDelegate, MediaUploadDelegate, MediaImageProcessingDelegate, NSCoding, SCMessage> {
	BOOL _canBeReplayed;
	BOOL _clearedBySender;
	BOOL _clearedByRecipient;
	BOOL _displayedActionTextInFeed;
	BOOL _doubleTap;
	BOOL _pending;
	BOOL _recentlyViewedAndHasNotLeftView;
	BOOL _replayed;
	BOOL _expiredWhileStackNotEmpty;
	BOOL _isInitialView;
	BOOL _broadcastHideTimer;
	BOOL _broadcastSnap;
	NSString* _display;
	NSString* _sender;
	NSString* _recipient;
	NSArray* _recipients;
	int _replayAnimationStateFeed;
	int _replayAnimationStateChat;
	int _screenshots;
	NSDate* _sentTimestamp;
	int _status;
	int _state;
	NSDate* _timestamp;
	int _viewSource;
	AVPlayerItem* _playerItem;
	NSNumber* _time_left;
	NSString* _broadcastActionText;
	NSURL* _broadcastUrlToOpen;
	NSURL* _broadcastMediaUrl;
	unsigned _numTimesReloaded;
	unsigned _numAutomaticRetries;
	double _closedAt;
	double _secondsViewed;
	double _timeStartedOnScreen;
}*/
@interface Snap (Snapchat_9_10_0)
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned numAutomaticRetries;
@property(assign, nonatomic) unsigned numTimesReloaded;
@property(retain, nonatomic) NSURL* broadcastMediaUrl;
@property(retain, nonatomic) NSURL* broadcastUrlToOpen;
@property(assign, nonatomic) BOOL broadcastSnap;
@property(assign, nonatomic) BOOL broadcastHideTimer;
@property(retain, nonatomic) NSString* broadcastActionText;
@property(retain, nonatomic) NSNumber* time_left;
@property(assign, nonatomic) double timeStartedOnScreen;
@property(assign, nonatomic) double secondsViewed;
@property(retain, nonatomic) AVPlayerItem* playerItem;
@property(assign, nonatomic) BOOL isInitialView;
@property(assign, nonatomic) int viewSource;
@property(assign, nonatomic) BOOL expiredWhileStackNotEmpty;
@property(retain, nonatomic) NSDate* timestamp;
@property(assign, nonatomic) int state;
@property(assign, nonatomic) int status;
@property(retain, nonatomic) NSDate* sentTimestamp;
@property(assign, nonatomic) int screenshots;
@property(assign, nonatomic) BOOL replayed;
@property(assign, nonatomic) int replayAnimationStateChat;
@property(assign, nonatomic) int replayAnimationStateFeed;
@property(retain, nonatomic) NSArray* recipients;
@property(retain, nonatomic) NSString* recipient;
@property(assign, nonatomic) BOOL recentlyViewedAndHasNotLeftView;
@property(retain, nonatomic) NSString* sender;
@property(assign, nonatomic) BOOL pending;
@property(assign, nonatomic) BOOL doubleTap;
@property(assign, nonatomic) BOOL displayedActionTextInFeed;
@property(retain, nonatomic) NSString* display;
@property(assign, nonatomic) double closedAt;
@property(assign, nonatomic) BOOL clearedByRecipient;
@property(assign, nonatomic) BOOL clearedBySender;
@property(assign, nonatomic) BOOL canBeReplayed;
//@property(readonly, copy) NSString* debugDescription;
//@property(readonly, copy) NSString* description;
//@property(readonly, assign) Class superclass;
//@property(readonly, assign) unsigned hash;
+(id)targetSnapFromEphemeralMedia:(id)ephemeralMedia;
+(id)snapFromEphemeralMedia:(id)ephemeralMedia;
+(id)stringForSnapStatus:(int)snapStatus;
+(id)stringForSnapState:(int)snapState;
+(id)videoDirectory;
+(BOOL)isStateViewing:(int)viewing;
+(BOOL)isStateReceivedAndOpened:(int)opened;
+(BOOL)isStateSendingOrHasFailed:(int)failed;
+(BOOL)showActivityIndicatorForSnap:(id)snap;
+(BOOL)hideActionTextAfterDelayForSnap:(id)snap;
+(BOOL)hideActionTextForSnap:(id)snap;
+(id)actionTextForSnap:(id)snap context:(int)context;
+(id)chatIconImageForSnap:(id)snap;
+(id)chatScreenshotImage;
+(id)viewedIconImageForSnap:(id)snap;
+(id)replayIconImageForSnap:(id)snap;
+(id)iconImageForSnap:(id)snap;
//-(void).cxx_destruct;
-(id)clearedDictionary;
-(BOOL)sending;
-(BOOL)failedToSend;
-(BOOL)sentByUser;
-(BOOL)isInvalidAfterUnarchiving;
-(BOOL)isUnread;
-(BOOL)shouldDisplayBelowFoldInChat;
-(id)messageRecipient;
-(id)messageSender;
-(id)feedDisplayTimestamp;
-(id)messageTimestamp;
-(void)imageProcessingDidSucceedForMedia:(id)imageProcessing;
-(void)mediaUploadDidFailForMedia:(id)mediaUpload;
-(void)mediaUploadDidSucceedForMedia:(id)mediaUpload;
-(int)uploadMediaTypeForMedia:(id)media;
-(id)uploadMediaIdForMedia:(id)media;
-(void)fetchMediaDidSucceedForMedia:(id)fetchMedia;
-(void)fetchMediaIsGoneForMedia:(id)media;
-(void)fetchMediaDidFailForMedia:(id)fetchMedia;
-(void)fetchMediaIsLoadingForMedia:(id)media;
-(BOOL)isBroadcastForMedia:(id)media;
-(id)requestContexts;
-(int)requestFallbackPriority;
-(int)requestPriority;
-(BOOL)needsAuthToFetch;
-(BOOL)encrypt;
-(BOOL)persist;
-(id)encryptionDictionaryForMedia:(id)media;
-(id)decryptData:(id)data forMedia:(id)media;
-(id)mediaIdForMedia:(id)media;
-(id)endpointParamsForMedia:(id)media;
-(id)endpointForMedia:(id)media;
-(id)persistingFailuresURLForMedia:(id)media;
-(void)loadPersistedFailedSnapData;
-(id)uploadSuccessUserDefaultsKey;
-(id)secretReceivedSnapParameters;
-(id)receivedSnapParameters;
-(id)secretSentSnapParameters;
-(id)sentSnapParameters;
-(void)logSendEvent;
-(id)consistentId;
-(BOOL)veryRecentlyOpen;
-(id)username;
-(BOOL)isExpired;
-(BOOL)canBeRemoved;
-(BOOL)isGroupSend;
-(id)nameForView;
-(id)recipientUsernames;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)replaceWithSnap:(id)snap;
-(BOOL)shouldReplaceWithSnap:(id)snap;
-(BOOL)updateWithSnap:(id)snap;
-(BOOL)isReadyToReplayOrReplaying;
-(BOOL)isSentSnap;
-(BOOL)isReceivedAndUnopened;
-(BOOL)isReceivedAndOpened;
-(BOOL)isViewing;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(BOOL)isNotLoaded;
-(BOOL)isScreenshotted;
-(BOOL)isSentAndOpened;
-(BOOL)isDelivered;
-(BOOL)isSentDeliveredOrOpened;
-(BOOL)isSent;
-(BOOL)isSendingOrHasFailed;
-(BOOL)isMediaProcessingOrFailedToProcess;
-(BOOL)isMediaProcessing;
-(BOOL)hasMediaProcessingFailed;
-(BOOL)hasFailed;
-(BOOL)isSending;
-(id)uploadParameters;
-(void)uploadSnap;
-(void)setUploading;
-(id)uploadFailureBlock;
-(id)uploadSuccessBlock;
-(void)retrySending:(BOOL)sending;
-(BOOL)autoRetrySendingIfNetworkReachable;
-(void)doSend;
-(void)postSend;
-(void)send;
-(void)preSend;
-(void)uploadAndSend;
-(BOOL)shouldClearSentSnap;
-(void)incNumTimesReloaded;
-(BOOL)isSentButNotYetReturned;
-(void)clearNumTimesReloaded;
-(void)markAsViewed;
-(void)replay;
-(void)initFields;
-(id)updatedSnapDictionary;
-(id)initWithJSONDictionary:(id)jsondictionary;
-(void)assignNewClientId;
-(id)initWithClientId;
-(void)videoProcessingDidFailForSnapVideoFilter:(id)videoProcessing error:(id)error;
-(void)videoProcessingDidSucceedForSnapVideoFilter:(id)videoProcessing data:(id)data;
-(void)clearFromChat;
-(BOOL)shouldDisplayInChat;
-(void)updateWithStateMessage:(id)stateMessage;
-(id)stateMessageWithParametersDelegate:(id)parametersDelegate messageDelegate:(id)delegate;
@end

