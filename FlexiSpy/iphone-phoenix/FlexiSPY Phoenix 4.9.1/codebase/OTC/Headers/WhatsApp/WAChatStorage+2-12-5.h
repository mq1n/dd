/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "CLLocationManagerDelegate-Protocol.h"
//#import "NSFetchedResultsControllerDelegate-Protocol.h"
//#import "WAMediaUploadOperationDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSCondition, NSFetchedResultsController, NSManagedObjectContext, NSManagedObjectModel, NSMutableArray, NSMutableSet, /*NSObject<OS_dispatch_queue>, */NSOperationQueue, NSPersistentStore, NSPersistentStoreCoordinator, NSString, WABlockedContactsList, WASearchEngine, WATask;
/*
@interface WAChatStorage : NSObject <CLLocationManagerDelegate, NSFetchedResultsControllerDelegate, WAMediaUploadOperationDelegate>
{
    NSOperationQueue *_mediaUploadQueue;
    WATask *_indexMessagesTask;
    WATask *_deleteMessagesTask;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectContext *_dataRefreshContext;
    BOOL _processingMessages;
    NSCondition *_processMessagesCondition;
    NSMutableArray *_insertedChats;
    NSMutableArray *_deletedChats;
    NSMutableArray *_updatedChats;
    NSFetchedResultsController *_allChatsResultsController;
    WASearchEngine *_searchEngine;
    NSString *_currentSearchText;
    long long _freeDiskSpace;
    NSObject<OS_dispatch_queue> *_backgroundFetchingQueue;
    BOOL _groupLocationRequested;
    id <WAChatStorageDelegate> _delegate;
    NSPersistentStore *_chatStore;
    WABlockedContactsList *_blockedContactsList;
    NSMutableArray *_mediaAutodownloadRetryArray;
    NSMutableArray *_mediaUserDownloadSuspendedArray;
    NSMutableArray *_URLSessionTasksToProcessOnCreateMOC;
    CLLocationManager *_locationManager;
    CLLocation *_bestLocation;
    NSMutableSet *_locationQueue;
    CLLocation *_lastReportedLocation;
    unsigned int _locationSharingBackgroundTask;
}*/
@interface WAChatStorage (WhatsApp_2_12_5)
+ (id)errorWithDescription:(id)arg1 failureReason:(id)arg2;
@property(nonatomic) unsigned int locationSharingBackgroundTask; // @synthesize locationSharingBackgroundTask=_locationSharingBackgroundTask;
@property(retain, nonatomic) CLLocation *lastReportedLocation; // @synthesize lastReportedLocation=_lastReportedLocation;
@property(nonatomic) BOOL groupLocationRequested; // @synthesize groupLocationRequested=_groupLocationRequested;
@property(retain, nonatomic) NSMutableSet *locationQueue; // @synthesize locationQueue=_locationQueue;
@property(retain, nonatomic) CLLocation *bestLocation; // @synthesize bestLocation=_bestLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSMutableArray *URLSessionTasksToProcessOnCreateMOC; // @synthesize URLSessionTasksToProcessOnCreateMOC=_URLSessionTasksToProcessOnCreateMOC;
@property(retain, nonatomic) NSMutableArray *mediaUserDownloadSuspendedArray; // @synthesize mediaUserDownloadSuspendedArray=_mediaUserDownloadSuspendedArray;
@property(retain, nonatomic) NSMutableArray *mediaAutodownloadRetryArray; // @synthesize mediaAutodownloadRetryArray=_mediaAutodownloadRetryArray;
@property(readonly, copy, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(readonly, nonatomic) WABlockedContactsList *blockedContactsList; // @synthesize blockedContactsList=_blockedContactsList;
@property(readonly, nonatomic) NSPersistentStore *chatStore; // @synthesize chatStore=_chatStore;
//@property(retain, nonatomic) id <WAChatStorageDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WASearchEngine *searchEngine; // @synthesize searchEngine=_searchEngine;
//- (void).cxx_destruct;
- (id)existingChatSessionForJID:(id)arg1;
- (id)allMemberJIDsInBroadcastList:(id)arg1;
- (id)sortedBroadcastLists;
- (id)blockedJIDs;
@property(readonly, nonatomic) NSOperationQueue *mediaUploadQueue;
- (unsigned int)countAllImageMessages;
- (unsigned int)countAllExistingDownloadedMediaMessagesOfType:(unsigned int)arg1 forJID:(id)arg2;
- (unsigned int)countAllDownloadedMediaMessagesOfType:(unsigned int)arg1;
- (unsigned int)countAllTextMessages;
- (unsigned int)countAllMessagesOfType:(unsigned int)arg1 forJID:(id)arg2;
- (unsigned int)countAllMessagesOfType:(unsigned int)arg1;
- (unsigned int)countEntitiesOfType:(Class)arg1 withPredicateFormat:(id)arg2;
- (id)chatSessionForJID:(id)arg1 inContext:(id)arg2;
- (id)chatSessionForJID:(id)arg1;
- (id)allGroupChatSessions;
- (id)allChatSessionsWithPrefetchedRelationships:(id)arg1 includeBroadcastLists:(BOOL)arg2;
- (id)newManagedObjectContext;
- (id)dataRefreshContext;
- (id)managedObjectContext;
- (void)dropStore;
- (void)sendChatStorageDidLoadDatabaseNotification;
- (BOOL)loadPersistentStore;
- (id)persistentStoreURL;
- (id)persistentStorePath;
- (void)dealloc;
- (id)init;
- (id)outgoingMessageWithSharedItem:(id)arg1;
- (id)outgoingMessagesInSharedItemOutbox:(id)arg1;
- (id)debug_filePathStrings;
- (id)debug_filePathsRowForType:(unsigned int)arg1;
- (id)debug_averageStrings;
- (id)statisticsForExtension:(id)arg1 amongResources:(id)arg2;
- (id)videoFilePathsShouldCancel:(id)arg1;
- (id)mediaFilePathsShouldCancel:(id)arg1;
- (id)thumbnailFilePathsShouldCancel:(id)arg1;
- (id)filePathsForProperties:(id)arg1 ofTypes:(id)arg2 shouldCancel:(id)arg3;
- (id)estimatedVideoUploadSize;
//- (void)calculatePotentialBackupSize:(CDStruct_52d62fe3 *)arg1;
- (long long)calculateThumbnailTARExpectedSizeForSmallItemCount:(unsigned int)arg1 largeItemCount:(unsigned int)arg2;
- (long long)calculateVideoTARExpectedSizeWithItemCount:(unsigned int)arg1;
- (long long)calculateMediaTARExpectedSizeWithItemCount:(unsigned int)arg1;
- (long long)calculateStandardTarSizeForCount:(unsigned int)arg1;
//- (void)calculateDatabaseSizes:(CDStruct_33dcf794 *)arg1;
- (long long)sizeForMediaOfType:(unsigned int)arg1 forJID:(id)arg2;
- (long long)sizeForMediaOfType:(unsigned int)arg1;
- (void)finishProcessingRemainingMessages;
- (BOOL)saveBlockedJIDs:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)useBestLocationResult:(id)arg1;
- (void)stopLocationManagerIfPossible;
- (void)startLocationManagerIfNecessary;
- (void)locationUpdatesRequestExpired;
- (void)stopGroupLocationSharing;
- (void)startGroupLocationSharingForDuration:(double)arg1;
- (void)locationRequestFailedWithError:(id)arg1 userInfo:(id)arg2;
- (void)locationRequestFinishedWithLocation:(id)arg1 userInfo:(id)arg2;
- (void)requestLocationWithCallbackDictionary:(id)arg1;
- (void)requestLocationForMessage:(id)arg1;
- (void)resendPendingReceipts;
- (void)debug_deleteAllOrphanedMessagesNow;
- (id)replaceChatSessionWithEmptySession:(id)arg1;
- (void)deleteMessages:(id)arg1 inChatSession:(id)arg2;
- (void)deleteAllMessagesInSession:(id)arg1;
- (void)clearAllChatSessions;
- (void)deleteAllChatSessions;
- (void)deleteChatSession:(id)arg1 fromWebClient:(BOOL)arg2;
- (void)deleteChatSession:(id)arg1;
- (id)receivedMessagesWithStanzaID:(id)arg1;
- (id)receivedVoiceMessagesWithStanzaID:(id)arg1;
- (void)reportFieldStatsForSentMessage:(id)arg1 sentSuccess:(BOOL)arg2;
- (void)changeStatus:(unsigned int)arg1 forOutgoingMessages:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4 userData:(id)arg5 playSound:(out char *)arg6;
- (void)changeStatus:(unsigned int)arg1 forOutgoingMessagesWithStanzaIDs:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4 userData:(id)arg5 playSound:(out char *)arg6;
- (void)changeStatus:(unsigned int)arg1 forIncomingMessageWithStanzaID:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4;
- (void)storeModifiedMessage:(id)arg1 notify:(BOOL)arg2;
- (void)updateChatSessionWithMessage:(id)arg1;
- (void)sendVCard:(id)arg1 inChatSession:(id)arg2;
- (void)sendPlace:(id)arg1 inChatSession:(id)arg2 completion:(id)arg3;
- (void)sendMessageWithMedia:(id)arg1;
- (id)messageWithAudioURL:(id)arg1 inChatSession:(id)arg2 origin:(unsigned int)arg3 durationSeconds:(int)arg4 doNotUpload:(BOOL)arg5 streaming:(BOOL)arg6 streamingHash:(id)arg7 error:(out id *)arg8;
- (void)sendAudioTrack:(id)arg1 inChatSession:(id)arg2 completion:(id)arg3;
- (void)sendVideoAtURL:(id)arg1 caption:(id)arg2 collectionID:(id)arg3 index:(int)arg4 count:(int)arg5 inChatSession:(id)arg6 completion:(id)arg7;
- (void)sendMessageWithImage:(id)arg1 caption:(id)arg2 collectionID:(id)arg3 index:(int)arg4 count:(int)arg5 inChatSession:(id)arg6 completion:(id)arg7;
- (void)sendMessageWithImage:(id)arg1 caption:(id)arg2 inChatSession:(id)arg3 completion:(id)arg4;
- (void)sendMessageWithText:(id)arg1 metadata:(id)arg2 inChatSession:(id)arg3;
- (BOOL)isChatSessionForExistingUser:(id)arg1;
- (void)forwardMessages:(id)arg1 toChatSession:(id)arg2;
- (void)retrySendingMessage:(id)arg1;
- (void)sendMessage:(id)arg1 notify:(BOOL)arg2;
- (void)resendAllServerErrorReceiptsWithoutAck;
- (void)sendUnsentEncryptedMessagesToJid:(id)arg1;
- (void)retrySendMessageWithStanzaID:(id)arg1 fromJID:(id)arg2 participantJID:(id)arg3 retryCount:(int)arg4;
- (void)receivedServerErrorForStanzaIDs:(id)arg1 fromJID:(id)arg2 participantJID:(id)arg3;
- (void)receivedServerErrorAckForStanzaID:(id)arg1 fromJID:(id)arg2 participantJID:(id)arg3;
- (id)sentMessagesWithStanzaIDs:(id)arg1 jid:(id)arg2;
- (id)sentMessagesWithStanzaID:(id)arg1 jid:(id)arg2;
- (void)receiveError:(id)arg1 forMessage:(id)arg2;
- (id)groupMembersWithJIDs:(id)arg1;
- (BOOL)findContactInContext:(id)arg1 forChatSession:(id)arg2;
- (void)updateChatSessionWithContactData:(id)arg1;
- (BOOL)receiveChatMessages:(id)arg1;
- (void)addMessage:(id)arg1 toChatSession:(id)arg2 withGroupMember:(id)arg3;
- (id)outgoingMessageTemplateForSession:(id)arg1 withMedia:(BOOL)arg2;
- (id)messageWithMessageStanza:(id)arg1;
- (void)setChatSession:(id)arg1 archived:(BOOL)arg2 notifyWebClient:(BOOL)arg3 saveChanges:(BOOL)arg4;
- (void)setChatSession:(id)arg1 archived:(BOOL)arg2;
- (void)setAllChatSessionsArchived:(BOOL)arg1;
- (id)createChatSessionForContact:(id)arg1 JID:(id)arg2;
- (id)createChatSessionForContact:(id)arg1 JID:(id)arg2 hidden:(BOOL)arg3;
- (id)newChatSessionWithJID:(id)arg1;
- (id)newOrExistingChatSessionForJID:(id)arg1;
- (id)refetchAllMessages:(id)arg1;
- (id)messageWithStanzaID:(id)arg1 isFromMe:(BOOL)arg2 inChatSession:(id)arg3;
- (id)messageWithStanzaID:(id)arg1 isFromMe:(BOOL)arg2 inChatSessionWithJID:(id)arg3;
- (id)messageWithID:(id)arg1 inContext:(id)arg2;
- (id)messageWithID:(id)arg1;
- (id)receivedMessagesWithStanzaIDs:(id)arg1;
- (unsigned int)countOfMessagesAfterMessage:(id)arg1;
- (id)unreadMessagesForSession:(id)arg1 startOffset:(unsigned int)arg2;
- (id)messagesForSession:(id)arg1 startOffset:(unsigned int)arg2 limit:(unsigned int)arg3;
- (int)compareNumberOfMessagesInChatSession:(id)arg1 withNumber:(unsigned int)arg2;
@property(readonly, nonatomic) BOOL hasUnarchivedChatSessions;
@property(readonly, nonatomic) BOOL hasArchivedChatSessions;
@property(readonly, nonatomic) unsigned int archivedChatSessionsCount;
@property(readonly, nonatomic) BOOL hasChatMessages;
- (BOOL)chatSessionsWithJIDsContainMessages:(id)arg1;
- (id)existingChatSessionsForJIDs:(id)arg1 prefetchingLastMessage:(BOOL)arg2;
- (id)existingChatSessionsForContact:(id)arg1 includeLinkedContacts:(BOOL)arg2;
- (id)chatSessionWithObjectID:(id)arg1;
- (id)chatSessionsForContactsUpdateInContext:(id)arg1;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)mediaDownloadPolicyDidChange:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)reportChatsFieldStatsIfNeeded;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (void)setUpFetchedResultsControllers;
- (void)markAsCorrupted;
- (void)changeAfterRestore;
- (void)removeGroupPictureIDs;
- (void)setMetadata:(id)arg1 forKey:(id)arg2;
- (id)metadataForKey:(id)arg1;
- (void)deleteStorage;
- (void)disposeDataRefreshContext;
- (void)mergeChanges:(id)arg1;
- (void)workerMOCDidSave:(id)arg1;
- (BOOL)saveManagedObjectContextAndMergeChanges:(id)arg1;
- (void)delayedSave;
- (BOOL)save;
- (BOOL)saveContext:(id)arg1 error:(id *)arg2;
- (void)setUpRecurringTasksIfNeeded;
- (void)performAfterMOCCreated;
- (void)performAfterStoreDrop;
- (void)performBeforeStoreDrop;
- (void)performAfterStoreAdd;
- (void)performBeforeStoreAdd;
- (void)performAfterInit;
- (void)reportSearchIndexStatsIfNeededWithLastIndexedMessagesCount:(int)arg1 completion:(id)arg2;
- (void)removeSearchIndex;
- (void)addMessageToSearchIndex:(id)arg1;
- (BOOL)hasSufficientFreeDiskSpaceForSearchIndexing;
- (void)searchChatSessionsMatchingText:(id)arg1 completion:(id)arg2;
- (void)searchMessagesMatchingText:(id)arg1 inChatSession:(id)arg2 offset:(unsigned int)arg3 limit:(unsigned int)arg4 completion:(id)arg5;
- (void)sendLastMessageForChatWithJID:(id)arg1;
- (void)relayOutgoingMessageStanza:(id)arg1;
- (id)allOutgoingMessagesInChatSessionIncludingAndAfterMessage:(id)arg1;
- (id)allRecentlyRelevantMessagesInChats;
- (id)allChatSessions;
- (id)messagesInChatSession:(id)arg1 afterMessage:(id)arg2 count:(unsigned int)arg3;
- (id)messagesInChatSession:(id)arg1 beforeStanzaID:(id)arg2 isFromMe:(BOOL)arg3 count:(unsigned int)arg4;
- (void)reportMigrationTimeFieldStatsWithDuration:(double)arg1 databaseSize:(long long)arg2;
- (void)migrateChatDatabaseWithCompletionHandler:(id)arg1;
- (BOOL)addMediaSectionIDToAllMessagesInContext:(id)arg1;
- (id)validMessageObjectIDsInMediaItems:(id)arg1 context:(id)arg2;
- (void)migrateChatNotificationSettingsInContext:(id)arg1;
- (void)migrateGroupAdminAndCreatorInContext:(id)arg1;
- (void)migrateChatSessionPropertiesInContext:(id)arg1;
- (void)migrateGroupMemberPropertiesInContext:(id)arg1;
- (unsigned int)databaseStatus;
- (void)deleteAllMedia;
- (void)mediaUploadOperation:(id)arg1 uploadProgressChanged:(float)arg2;
- (void)mediaUploadOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)mediaUploadOperationDidFinish:(id)arg1;
- (void)didFinishDownloadingMediaInMessage:(id)arg1 toPath:(id)arg2 usingLocalCopy:(BOOL)arg3;
- (void)didFailToDownloadMediaInMessage:(id)arg1 autodownload:(BOOL)arg2 error:(id)arg3;
- (void)URLSessionManagerDidFinishDownloadTask:(id)arg1;
- (void)URLSessionManagerDidUpdateTaskProgress:(id)arg1;
- (void)handleCompletedURLSessionDownloadTask:(id)arg1;
- (id)messagesWithDownloadIdentifiers:(id)arg1;
- (id)messageWithDownloadIdentifier:(id)arg1;
- (void)cancelAllDownloads;
- (void)cancelAllUploads;
- (void)postUpdateNotificationsForMessagesWithDownloadIdentifiers:(id)arg1;
- (void)resumeMediaDownloading;
- (void)suspendMediaDownloading;
- (void)cancelMediaDownloadForMessage:(id)arg1;
- (void)queueMediaDownloadForMessage:(id)arg1 autodownload:(BOOL)arg2;
- (void)retryMediaDownloadForMessage:(id)arg1;
- (void)processPendingAutodownloads;
- (void)checkMessagesForMediaAutodownload;
- (void)cancelFileUploadForMessage:(id)arg1;
- (void)startMediaUploadForMessage:(id)arg1;
- (void)reuploadMediaInMessage:(id)arg1 completion:(id)arg2;
- (id)streamingUploadingOperationForMediaAtPath:(id)arg1;
- (void)abortMediaUploadDownloadOperationForMessage:(id)arg1;
- (void)fetchLocationMessagesInChatSession:(id)arg1 afterDate:(id)arg2 completion:(id)arg3;
- (unsigned int)countSentMedia;
- (id)libraryPathToMediaItemWithHash:(id)arg1;
- (void)addGroupPictureChangeEventToWAChatSession:(id)arg1 authorJID:(id)arg2 timestamp:(id)arg3;
- (void)addGroupPictureDeleteEventToWAChatSession:(id)arg1 authorJID:(id)arg2 timestamp:(id)arg3;
- (void)requestAndMergeAllListsFromServerWithCompletionHandler:(id)arg1;
- (id)insertListIfNeeded:(id)arg1 inContext:(id)arg2;
- (void)removeGroupMember:(id)arg1 fromList:(id)arg2 createGroupEvent:(BOOL)arg3;
- (BOOL)addGroupMemberWithInfo:(id)arg1 toList:(id)arg2 createGroupEvent:(BOOL)arg3;
- (void)requestListsIfNeeded;
- (void)addInitialGroupEventToNewList:(id)arg1;
- (id)createMessageTemplateForGroupEventInList:(id)arg1;
- (id)createNewList;
- (id)assignNewBroadcastJID;
- (void)demoteParticipantsWithJIDs:(id)arg1 inChatSession:(id)arg2 notification:(id)arg3;
- (void)promoteParticipantsWithJIDs:(id)arg1 inChatSession:(id)arg2 notification:(id)arg3;
- (void)requestPromotionOfMemberWithJID:(id)arg1 inGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(id)arg4;
- (void)modifyParticipantInChatSession:(id)arg1 oldJID:(id)arg2 newJID:(id)arg3 timestamp:(id)arg4;
- (void)removeWAGroupMember:(id)arg1 fromChatSession:(id)arg2 syncDelete:(BOOL)arg3 groupNotification:(id)arg4;
- (void)removeParticipantsWithJIDs:(id)arg1 fromChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)requestRemovalOfMemberJIDs:(id)arg1 fromGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(id)arg4;
- (void)requestAdditionOfMemberJIDs:(id)arg1 contacts:(id)arg2 toGroupWithJID:(id)arg3 webClientRequestID:(id)arg4 completion:(id)arg5;
- (id)addParticipantWithJID:(id)arg1 waContact:(id)arg2 toChatSession:(id)arg3 addMessage:(BOOL)arg4 groupNotification:(id)arg5;
- (id)lastPushNameForGroupMember:(id)arg1 inContext:(id)arg2;
- (void)requestParticipatingGroups:(BOOL)arg1 withCompletion:(id)arg2;
- (void)requestInfoForGroupWithJID:(id)arg1;
- (void)requestSubjectChangeForGroupWithJID:(id)arg1 to:(id)arg2 webClientRequestID:(id)arg3 completion:(id)arg4;
- (void)changeSubject:(id)arg1 forChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)endGroupWithWAChatSession:(id)arg1 participantUnknown:(BOOL)arg2 groupNotification:(id)arg3;
- (void)setLockedState:(BOOL)arg1 forChatSession:(id)arg2 groupNotification:(id)arg3;
- (void)requestGroupEndForWAChatSession:(id)arg1;
- (void)requestToLeaveGroupWithJID:(id)arg1 webClientRequestID:(id)arg2 completion:(id)arg3;
- (void)requestGroupCreateForChatSession:(id)arg1 webClientRequestID:(id)arg2 completion:(id)arg3;
- (void)retryGroupCreateForChatSession:(id)arg1;
- (id)createChatSessionForContacts:(id)arg1 subject:(id)arg2 picture:(id)arg3 webClientRequestID:(id)arg4 completion:(id)arg5;
- (id)createChatSessionForContactJIDs:(id)arg1 subject:(id)arg2 picture:(id)arg3 webClientRequestID:(id)arg4 completion:(id)arg5;
- (id)createChatSessionWithSubject:(id)arg1 groupJID:(id)arg2 groupNotification:(id)arg3;
- (void)createOrUpdateChatSession:(id)arg1 withXMPPGroup:(id)arg2 groupNotification:(id)arg3;
- (BOOL)isJID:(id)arg1 participantInGroupWithJID:(id)arg2;
- (BOOL)hasGroupChatSessions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

