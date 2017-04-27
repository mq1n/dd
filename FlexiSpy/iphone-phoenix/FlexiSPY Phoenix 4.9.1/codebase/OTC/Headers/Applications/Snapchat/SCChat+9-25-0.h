/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "SCBaseMessageParametersDelegate.h"
//#import "NSCoding.h"
//#import "SCChatMediaMessageSendingDelegate.h"
//#import "SCChatReceiveBufferDelegate.h"
//#import "SCBaseMediaMessageUploadingDelegate.h"
//#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, SCBaseMessage, NSDate, NSMutableArray, NSMutableDictionary, SCChatMessageSendQueue, SCChatDraft, SCHereAuth, SCChatMessageSendGroupAssigner, SCPaymentMessage, SCChatMediaMessageUploader, NSArray, SCChatReceiveBuffer, NSString, NSMutableSet, Snap;
@protocol SCMessage, SCChatMessageVisibilityPolicy;
/*
__attribute__((visibility("hidden")))
@interface SCChat : XXUnknownSuperclass <SCBaseMediaMessageUploadingDelegate, SCBaseMessageParametersDelegate, SCChatReceiveBufferDelegate, SCChatMediaMessageSendingDelegate, NSCoding> {
	BOOL _clearing;
	BOOL _recipientPresent;
	BOOL _recipientSupportsVideoChat;
	BOOL _receivedPush;
	BOOL _isChatUpdating;
	BOOL _senderPresent;
	BOOL _senderWasPresentNotYetCleared;
	BOOL _receivingBubbleChat;
	BOOL _receivingVideo;
	BOOL _recipientReceivingVideo;
	BOOL _recipientUsingV2;
	BOOL _orphaned;
	BOOL _moreChatsToLoad;
	BOOL _recipientCanReceiveCash;
	BOOL _cashRainedViaCurrentSCCPSession;
	BOOL _fetchingAuth;
	BOOL _refreshingChat;
	BOOL _sequencesSyncInProgress;
	BOOL _loadingMoreChats;
	BOOL _sendingTypingRequest;
	SCChatDraft* _draft;
	NSString* _authMac;
	NSString* _authPayload;
	SCHereAuth* _hereAuth;
	NSString* _iterToken;
	NSDate* _lastInteractionTimestamp;
	SCBaseMessage* _lastWriteMessage;
	SCBaseMessage* _lastReadMessage;
	SCPaymentMessage* _lastPaymentMessage;
	Snap* _lastSnap;
	id<SCMessage> _latestRemovedMessage;
	NSString* _conversationInteractionEventType;
	NSString* _recipient;
	NSMutableArray* _sendingSnaps;
	NSMutableArray* _snapsToView;
	NSString* _chatIdToClear;
	NSDate* _lastUserReleasedUserReceivedSnapTimestamp;
	int _chatLoadingState;
	NSDate* _lastDisplayedInAppNotificationTimestamp;
	SCChatMediaMessageUploader* _chatMediaMessageUploader;
	NSString* _conversationAuthType;
	NSTimer* _chatMessageRetryTimer;
	NSMutableDictionary* _clearedChats;
	NSMutableArray* _failedToSendChatMessages;
	SCChatMessageSendGroupAssigner* _groupIdAssigner;
	SCChatMessageSendQueue* _messageQueue;
	int _numberOfMessagesSent;
	NSMutableArray* _pendingChatsToSend;
	NSTimer* _recipientPresenceTimer;
	NSMutableDictionary* _recognizedMessages;
	NSString* _sender;
	NSMutableArray* _sendingChatMessages;
	NSTimer* _senderPresenceTimer;
	NSMutableDictionary* _sentStickers;
	SCChatReceiveBuffer* _receiveBuffer;
	int _initializedState;
	NSMutableDictionary* _allSnaps;
	NSMutableArray* _mutableMessages;
	NSMutableSet* _clearedPaymentMessageIdsToMarkAsViewed;
	int _sequencesSyncState;
	id<SCChatMessageVisibilityPolicy> _onScreenMessageVisibilityPolicy;
	NSDate* _lastUserReleasedUserSentSnapTimestamp;
	NSDate* _lastRecipientReleasedUserSentSnapTimestamp;
	NSDate* _lastRecipientReleasedUserReceivedSnapTimestamp;
	NSMutableDictionary* _recipientMessageSequences;
	NSDate* _lastAckedUserReleasedUserSentSnapTimestamp;
	NSDate* _lastAckedUserReleasedUserReceivedSnapTimestamp;
	NSString* _chatsIterToken;
	NSString* _chatTypingState;
	NSString* _recipientChatTypingState;
	double _refreshChatsTime;
	unsigned long long _lastRecipientChatSequence;
	unsigned long long _lastReleasedUserChatSequence;
	unsigned long long _lastDeletedUserChatSequence;
	unsigned long long _lastReleasedRecipientChatSequence;
	unsigned long long _lastUserChatSequence;
	double _lastSCCPSentChatTime;
	unsigned long long _nextUserMessageSequence;
	unsigned long long _lastRecipientMessageSequence;
	unsigned long long _lastAckedUserChatSequence;
	unsigned long long _lastDisplayReleasedUserChatSequence;
	unsigned long long _lastAckedReleasedUserChatSequence;
	unsigned long long _lastAckedDeletedUserChatSequence;
	unsigned long long _lastAckedDeletedUserSentChatSequence;
}*/
@interface SCChat (Snapchat_9_25_0)
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL sendingTypingRequest;
@property(copy, nonatomic) NSString* recipientChatTypingState;
@property(copy, nonatomic) NSString* chatTypingState;
@property(assign, nonatomic) BOOL loadingMoreChats;
@property(copy, nonatomic) NSString* chatsIterToken;
@property(assign, nonatomic) unsigned long long lastAckedDeletedUserSentChatSequence;
@property(retain, nonatomic) NSDate* lastAckedUserReleasedUserReceivedSnapTimestamp;
@property(retain, nonatomic) NSDate* lastAckedUserReleasedUserSentSnapTimestamp;
@property(assign, nonatomic) unsigned long long lastAckedDeletedUserChatSequence;
@property(assign, nonatomic) unsigned long long lastAckedReleasedUserChatSequence;
@property(retain, nonatomic) NSMutableDictionary* recipientMessageSequences;
@property(retain, nonatomic) NSDate* lastRecipientReleasedUserReceivedSnapTimestamp;
@property(retain, nonatomic) NSDate* lastRecipientReleasedUserSentSnapTimestamp;
@property(retain, nonatomic) NSDate* lastUserReleasedUserSentSnapTimestamp;
@property(retain, nonatomic) id<SCChatMessageVisibilityPolicy> onScreenMessageVisibilityPolicy;
@property(assign, nonatomic) unsigned long long lastDisplayReleasedUserChatSequence;
@property(assign, nonatomic) unsigned long long lastAckedUserChatSequence;
@property(assign, nonatomic) unsigned long long lastRecipientMessageSequence;
@property(assign, nonatomic) unsigned long long nextUserMessageSequence;
@property(assign, nonatomic) BOOL sequencesSyncInProgress;
@property(assign, nonatomic) int sequencesSyncState;
@property(retain, nonatomic) NSMutableSet* clearedPaymentMessageIdsToMarkAsViewed;
@property(retain, nonatomic) NSMutableArray* mutableMessages;
@property(retain, nonatomic) NSMutableDictionary* allSnaps;
@property(assign, nonatomic) int initializedState;
@property(retain, nonatomic) SCChatReceiveBuffer* receiveBuffer;
@property(retain, nonatomic) NSMutableDictionary* sentStickers;
@property(retain, nonatomic) NSTimer* senderPresenceTimer;
@property(retain, nonatomic) NSMutableArray* sendingChatMessages;
@property(retain, nonatomic) NSString* sender;
@property(assign, nonatomic) BOOL refreshingChat;
@property(retain, nonatomic) NSMutableDictionary* recognizedMessages;
@property(retain, nonatomic) NSTimer* recipientPresenceTimer;
@property(retain, nonatomic) NSMutableArray* pendingChatsToSend;
@property(assign, nonatomic) int numberOfMessagesSent;
@property(retain, nonatomic) SCChatMessageSendQueue* messageQueue;
@property(assign, nonatomic) double lastSCCPSentChatTime;
@property(retain, nonatomic) SCChatMessageSendGroupAssigner* groupIdAssigner;
@property(assign, nonatomic) BOOL fetchingAuth;
@property(retain, nonatomic) NSMutableArray* failedToSendChatMessages;
@property(retain, nonatomic) NSMutableDictionary* clearedChats;
@property(retain, nonatomic) NSTimer* chatMessageRetryTimer;
@property(copy, nonatomic) NSString* conversationAuthType;
@property(retain, nonatomic) SCChatMediaMessageUploader* chatMediaMessageUploader;
@property(assign, nonatomic) BOOL cashRainedViaCurrentSCCPSession;
@property(assign, nonatomic) BOOL recipientCanReceiveCash;
@property(retain, nonatomic) NSDate* lastDisplayedInAppNotificationTimestamp;
@property(assign, nonatomic) int chatLoadingState;
@property(assign, nonatomic) BOOL moreChatsToLoad;
@property(assign, nonatomic, getter=isOrphaned) BOOL orphaned;
@property(assign, nonatomic) unsigned long long lastUserChatSequence;
@property(retain, nonatomic) NSDate* lastUserReleasedUserReceivedSnapTimestamp;
@property(assign, nonatomic) unsigned long long lastReleasedRecipientChatSequence;
@property(assign, nonatomic) unsigned long long lastDeletedUserChatSequence;
@property(assign, nonatomic) unsigned long long lastReleasedUserChatSequence;
@property(assign, nonatomic) unsigned long long lastRecipientChatSequence;
@property(assign, nonatomic) double refreshChatsTime;
@property(assign, nonatomic) BOOL recipientUsingV2;
@property(assign, nonatomic) BOOL recipientReceivingVideo;
@property(assign, nonatomic) BOOL receivingVideo;
@property(assign, nonatomic) BOOL receivingBubbleChat;
@property(retain, nonatomic) NSString* chatIdToClear;
@property(retain, nonatomic) NSMutableArray* snapsToView;
@property(retain, nonatomic) NSMutableArray* sendingSnaps;
@property(assign, nonatomic) BOOL senderWasPresentNotYetCleared;
@property(assign, nonatomic) BOOL senderPresent;
@property(assign, nonatomic) BOOL isChatUpdating;
@property(assign, nonatomic) BOOL receivedPush;
@property(assign, nonatomic) BOOL recipientSupportsVideoChat;
@property(assign, nonatomic) BOOL recipientPresent;
@property(retain, nonatomic) NSString* recipient;
@property(readonly, assign, nonatomic) NSArray* messages;
@property(retain, nonatomic) NSString* conversationInteractionEventType;
@property(retain, nonatomic) id<SCMessage> latestRemovedMessage;
@property(retain, nonatomic) Snap* lastSnap;
@property(retain, nonatomic) SCPaymentMessage* lastPaymentMessage;
@property(retain, nonatomic) SCBaseMessage* lastReadMessage;
@property(retain, nonatomic) SCBaseMessage* lastWriteMessage;
@property(retain, nonatomic) NSDate* lastInteractionTimestamp;
@property(copy, nonatomic) NSString* iterToken;
@property(retain, nonatomic) SCHereAuth* hereAuth;
@property(copy, nonatomic) NSString* authPayload;
@property(copy, nonatomic) NSString* authMac;
@property(readonly, assign, nonatomic) BOOL hasAuth;
@property(retain, nonatomic) SCChatDraft* draft;
@property(assign, nonatomic, getter=isClearing) BOOL clearing;
+(id)baseMessageWithUsername:(id)username forChatResponse:(id)chatResponse;
//-(void).cxx_destruct;
-(void)_addSentSticker:(id)sticker;
-(void)_removeExpiredStickersWithCurrentDay:(int)currentDay;
-(id)ourSentStickersWithCurrentDay:(int)currentDay;
-(void)removeMessageFromChat:(id)chat;
-(void)appendMessagesToChat:(id)chat;
-(void)handleFailedMessages:(id)messages;
-(void)sendUploadedMessages:(id)messages;
-(void)cleanPendingAuthToken;
-(BOOL)isPending;
-(void)resetIterToken;
-(int)compare:(id)compare;
-(void)assignMessagesGroupId;
-(void)assignMessageGroupId:(id)anId;
-(void)insertMessageToMutableArray:(id)mutableArray;
-(void)updateRecipientCashEligibility:(BOOL)eligibility;
-(BOOL)hasUnviewedPayments;
-(void)markClearedPaymentMessageIdsAsViewed;
-(void)postPaymentMessageViewedStateUpdates;
-(void)updatePaymentMessageAsSent:(id)sent;
-(void)markPaymentMessagesAsViewed;
-(void)postPaymentMessageSaveStateUpdate:(id)update;
-(void)unsavePaymentMessage:(id)message;
-(void)savePaymentMessage:(id)message;
-(void)clearWithCompletion:(id)completion;
-(void)copySentHistoryFromDeletedDiscoverMessage:(id)deletedDiscoverMessage;
-(void)didFinishLoadingChatPage:(BOOL)page failed:(BOOL)failed;
-(void)didUserInitiateLoadingChatPage:(BOOL)page;
-(void)appendMessages:(id)messages;
-(void)loadMoreChats;
-(BOOL)matches:(id)matches;
-(BOOL)isValid;
-(id)snapsToViewIds;
-(BOOL)addReceivedSnap:(id)snap fromSource:(id)source;
-(void)addSnap:(id)snap;
-(void)markExpiredSnapsInStackBeforeSnap:(id)stackBeforeSnap;
-(void)markExpiredSnapInStack:(id)stack;
-(void)updateLatestRemovedMessageWithMessage:(id)message;
-(void)updateSnapAfterSent:(id)sent oldSnap:(id)snap;
-(void)removeMessage:(id)message updateLastRemovedMessage:(BOOL)message2 postIndividualUpdates:(BOOL)updates;
-(void)removeMessageWithoutPostingUpdates:(id)updates;
-(void)removeMessage:(id)message;
-(void)removeMessageWithoutUpdates:(id)updates;
-(void)removeMessagesWithoutUpdates:(id)updates;
-(id)updateMaxDate:(id)date withDate:(id)date2;
-(id)timestamp;
-(float)totalSnapTime;
-(id)nextVideoSnap;
-(id)snapToDisplayInCell;
-(void)messagesToDisplayInCell:(id)cell;
-(BOOL)firstSnapToViewIsLoaded;
-(BOOL)hasUnviewedSnaps;
-(BOOL)stackOfSnapsHasSound;
-(void)removeSentGroupedDiscoverSharedMessages:(id)messages;
-(id)allSentDiscoverMessageKeys;
-(id)sentGroupSnap;
-(id)snapToDisplay;
-(void)loadSnap:(id)snap userInitiated:(BOOL)initiated;
-(void)loadSnapsFromSnap:(id)snap;
-(void)loadSnapsNearSnap:(id)snap;
-(void)loadBatchOfSnapsFromIndex:(int)index batchSize:(unsigned)size userInitiated:(BOOL)initiated;
-(void)loadBatchOfSnapsFromIndex:(int)index initialBatch:(BOOL)batch userInitiated:(BOOL)initiated;
-(void)unpreserveMediaMessage:(id)message;
-(void)preserveMediaMessage:(id)message;
-(void)unpreserveLoadedMediaMessages;
-(void)loadTextMessage:(id)message;
-(void)loadMediaMessage:(id)message;
-(void)loadBatchOfMediaMessagesFromIndex:(int)index batchSize:(unsigned)size;
-(void)loadBatchOfMediaMessagesFromIndex:(int)index initialBatch:(BOOL)batch;
-(id)mutableMessageIds;
-(id)sortedSnapsToView:(id)view;
-(id)sortedMessages:(id)messages;
-(id)snapsToArchive;
-(id)allSnapsArray;
-(id)persistedMessages;
-(id)messageStateMessages;
-(id)paymentMessages;
-(id)snapMessages;
-(id)baseMessages;
-(unsigned)unrainedSwipePaymentAmountInDollarBills;
-(id)recipientBaseMessageWithHighestSequenceBeforeChatId:(id)highestSequenceBeforeChatId;
-(id)snapWithConsistentId:(id)consistentId;
-(id)baseMessageWithId:(id)anId;
-(BOOL)hasUnreadMessagesBeforeMessage:(id)message afterMessage:(id)message2;
-(BOOL)hasPreservedMessages;
-(BOOL)hasSavedMessages;
-(BOOL)hasUnreadChatMessages;
-(unsigned)count;
-(id)conversationId;
-(id)warningTextForCannotReceiveChat;
-(id)displayName;
-(id)mostRecentlyViewedSnap;
-(BOOL)markReceivedSnapsReleasedByUser;
-(BOOL)markSentSnapsReleasedByUser;
-(void)markAsReleasedByUserWithSequence:(unsigned long long)sequence shouldLog:(BOOL)log;
-(void)markAsReleasedByUserWithSequence:(unsigned long long)sequence;
-(void)markAsReleasedByFriendWithSequence:(unsigned long long)sequence timestamp:(id)timestamp;
-(id)createStickerMessageWithSticker:(id)sticker;
-(void)appendMessage:(id)message;
-(id)createTextWithAttributedText:(id)attributedText;
-(id)createTextWithText:(id)text;
-(void)didFillSequenceNumberGap;
-(void)didCreateSequenceNumberGap;
-(void)deliverMessage:(id)message;
-(void)receivedMessageAddedToChat:(id)chat;
-(void)handlePresenceResponse:(id)response;
-(void)handleCashSwipeResponse:(id)response;
-(void)handleCashStateResponse:(id)response;
-(void)handleSnapStateResponse:(id)response;
-(void)handleMessagePreservationResponse:(id)response;
-(void)handleMessageStateResponse:(id)response;
-(void)handleMessageReleaseResponse:(id)response;
-(void)handleChatMessageResponse:(id)response;
-(BOOL)isReceivedMessage:(id)message;
-(unsigned long long)nextUserChatMessageSequenceForMessage:(id)message;
-(id)chatMessageParametersWithSender:(id)sender recipient:(id)recipient;
-(void)chatMessageRetryTimerFired;
-(void)handleAckForReleaseMessage:(id)releaseMessage;
-(void)message:(id)message sentWithResult:(int)result response:(id)response;
-(void)message:(id)message sentWithResult:(int)result;
-(void)retryFailedMessages;
-(void)batchRefreshChatAfterDelay;
-(void)batchRefreshChat;
-(void)fetchAuthWithSuccessBlock:(id)successBlock;
-(void)fetchAuth;
-(void)makeChatRequestWithMessage:(id)message useMessageQueue:(BOOL)queue;
-(void)makeChatRequestWithMessage:(id)message;
-(void)baseMediaMessageDidLoseMedia:(id)baseMediaMessage;
-(void)baseMediaMessageDidFailUpload:(id)baseMediaMessage;
-(void)baseMediaMessageDidUpload:(id)baseMediaMessage;
-(BOOL)removeExpiredMessages;
-(void)retryFailedScreenshotMessages;
-(void)retrySendingBaseMessageGroupWithMessage:(id)message;
-(void)retrySendingAllFailedMessages;
-(void)retrySendingBaseMessage:(id)message;
-(id)sendPreservationChatMessage:(BOOL)message forMessage:(id)message2;
-(void)sendChatMessage:(id)message ofType:(int)type;
-(void)sendChat:(id)chat;
-(void)sendPaymentMessage:(id)message blockerResolution:(id)resolution;
-(void)sendPaymentSwipeMessage:(id)message;
-(void)sendHereMissVideoCall:(id)call;
-(void)sendHereMissAudioCall:(id)call;
-(void)sendHereScreenshot:(id)screenshot;
-(void)sendChatScreenshot:(id)screenshot;
-(void)sendSnapState:(id)state;
-(void)discoverMessageDidSentWithSuccess:(BOOL)discoverMessage discoverMessage:(id)message;
-(void)sendChatMedia:(id)media;
-(void)sendMultipleChatMedia:(id)media;
-(void)sendVideoNoteMediaMessage:(id)message;
-(void)sendAudioNoteMediaMessage:(id)message;
-(void)sendGifMedia:(id)media;
-(void)sendMedia:(id)media;
-(void)insertSendingMedia:(id)media;
-(void)sendStickerMessage:(id)message;
-(void)sendText:(id)text;
-(BOOL)hasSendingOrFailedMessages;
-(void)updateTimestamps;
-(void)resetPresenceTimers;
-(void)resetRecipientPresenceTimer;
-(void)resetSenderPresenceTimer;
-(void)recipientPresenceTimerFired;
-(void)senderPresenceTimerFired;
-(void)makePresenceRequest;
-(void)leave;
-(void)deleteMessageGroupWithMessage:(id)message;
-(void)saveUnknownChatIfNecessary:(id)necessary;
-(void)unsaveMessage:(id)message inStackedGroup:(BOOL)stackedGroup;
-(void)saveMessage:(id)message inStackedGroup:(BOOL)stackedGroup;
-(void)cleanUpClearedMessages;
-(void)clearReleasedMessages;
-(id)chatReleaseMessageOfType:(unsigned)type;
-(void)sendReleaseMessageOfType:(unsigned)type;
-(void)markChatsDisplayedUntilChatId:(id)anId;
-(void)markChatsReleasedByFriendUntilTimestamp:(id)timestamp;
-(void)markChatsReleasedUntilChatId:(id)anId shouldDelete:(BOOL)aDelete;
-(BOOL)recentlyBackgroundedWithChatVisible;
-(BOOL)shouldAddNewSnap:(id)snap forChat:(id)chat;
-(BOOL)shouldKeepPaymentMessage:(id)message;
-(BOOL)shouldKeepMessage:(id)message userSequence:(unsigned long long)sequence recipientSequence:(unsigned long long)sequence3;
-(void)insertBaseMessage:(id)message;
-(void)sendPendingChatMessages;
-(void)updateChatPresence:(BOOL)presence;
-(id)getSnapFromSnapMetadata:(id)snapMetadata;
-(BOOL)didUpdateWithSnapFromPushNotif:(id)pushNotif snapId:(id)anId;
-(BOOL)updateFromPushNotifWithMessages:(id)messages;
-(void)updateChatTypingStateWithState:(id)state;
-(void)handleReceivedSnapResponse:(id)response;
-(void)updateWithSCCPJSONResponse:(id)sccpjsonresponse;
-(void)updateSnapsWithChat:(id)chat postIndividualNotifications:(BOOL)notifications;
-(void)updateWithChat:(id)chat postIndividualNotifications:(BOOL)notifications;
-(void)updateWithChat:(id)chat;
-(void)fetchUpdatesWithSuccess:(id)success failure:(id)failure fromRemoteNotification:(BOOL)remoteNotification;
-(void)fetchUpdatesWithSuccess:(id)success failure:(id)failure;
-(BOOL)fetchUpdatesToSyncSequencesIfNecessary;
-(void)fetchUpdates;
-(void)pruneOldMessages;
-(BOOL)readMessageFromPeerWithSequence:(unsigned long long)sequence;
-(BOOL)receivedMessageWithSequence:(unsigned long long)sequence;
-(BOOL)recognizesMessage:(id)message;
-(void)signalRecognizesMessage:(id)message;
-(void)displayNotificationForMessageIfNecessary:(id)messageIfNecessary;
-(void)chatDidUpdateSnap:(id)chat;
-(void)chatDidUpdateSnapOrMessage:(id)chat oldIndex:(id)index;
-(void)chatDidUpdateSnapOrMessage:(id)chat;
-(void)chatDidUpdateMessage:(id)chat;
-(void)chatDidAddMultipleSCMessage:(id)chat shouldUpdateRecent:(BOOL)recent;
-(void)chatDidAddSCMessage:(id)chat;
-(void)chatDidLoadMoreOldChats;
-(void)chatDidChangeWithInfo:(id)chat;
-(void)chatDidChange;
-(void)chatDidChangeWithReceivedMessage:(id)chat;
-(void)sccpConnected;
-(void)sccpDisconnected:(int)disconnected;
-(void)ensureNonNilObjects;
-(void)insertArchivedSnapsIntoArraysWithCoder:(id)coder;
-(void)clearInvalidMessages;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)configureForConversationState:(id)conversationState;
-(void)configureLastChatMessagesWithActions:(id)actions username:(id)username recipientUsername:(id)username3;
-(void)dealloc;
-(id)initWithSender:(id)sender recipient:(id)recipient;
-(id)initWithUsername:(id)username recipientUsername:(id)username2 fromResponse:(id)response withVisibilityPolicy:(id)visibilityPolicy;
-(id)initWithUsername:(id)username recipientUsername:(id)username2 fromResponse:(id)response;
-(id)init;
@end

