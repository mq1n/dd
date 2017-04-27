/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

@class NSMutableSet, NSPersistentStoreCoordinator, NSManagedObjectModel, NSManagedObjectContext, NSThread;

@interface DBManager : NSObject {
	NSPersistentStoreCoordinator* persistentStoreCoordinator;
	NSManagedObjectModel* managedObjectModel;
	NSManagedObjectContext* managedObjectContext;
	NSThread* syncABThread;
	NSThread* rebuildNamesThread;
	id foregroundObserver;
	id resignActiveObserver;
	id becomeActiveObserver;
	unsigned backgroundSyncingTaskID;
	NSMutableSet* viberPhoneNums;
	NSMutableSet* numsToAdd;
	NSMutableSet* numsToDelete;
	BOOL needToResetStorage;
}
@property(retain, nonatomic) NSPersistentStoreCoordinator* persistentStoreCoordinator;
@property(assign) BOOL needToResetStorage;
@property(retain) NSThread* rebuildNamesThread;
@property(retain) NSThread* syncABThread;
+(void)registerAddressBookCallBack:(void*)back;
+(void)unregisterAddressBookCallBack:(void*)back;
+(id)generateBackName;
-(void)dealloc;
-(void)databaseFail;
-(void)resetStorage;
-(void)deleteDatabase;
-(void)saveDefaultManagedObjectContext;
-(id)executeStoredRequest:(id)request withParams:(id)params inManagedObjectContext:(id)managedObjectContext;
-(id)executeStoredRequest:(id)request withParams:(id)params;
-(BOOL)migrateStore:(id)store sourceModel:(id)model destinationModel:(id)model3 generateMigration:(BOOL)migration error:(id*)error;
-(BOOL)automaticallyMigrateStore:(id)store error:(id*)error;
-(BOOL)loadWithoutMigrationStore:(id)store error:(id*)error;
-(void)configureLoadedStoreContext;
-(BOOL)loadPersistentStorageForUrl:(id)url error:(id*)error;
-(BOOL)migrateStorage:(id)storage sourceMetadata:(id)metadata error:(id*)error;
-(void)loadStorageWithURL:(id)url;
-(void)endBackgroundTask;
-(void)beginBackgroundTask;
-(void)getAddressBookAccessSystemSettings;
-(void)allowAddressBookAccess;
-(void)enableAddressBook;
-(id)initWithAddressBook;
-(id)init;
-(void)setLocationAddress:(id)address forMessage:(id)message;
-(void)setText:(id)text forMessage:(id)message;
-(void)resendMessages;
-(void)resendMediaMessageWithAttachment:(id)attachment;
-(void)resendTextMessage:(id)message;
-(void)resendStoredMessage:(id)message;
-(void)resendMessage:(id)message;
-(void)resendNotGroupTextMessage:(id)message;
-(void)resendGroupTextMessage:(id)message;
-(void)sendMediaForAttachment:(id)attachment withNewId:(id)newId;
-(void)downloadAttachmentWithName:(id)name;
-(void)uploadAttachmentWithName:(id)name;
-(void)cleanFileForAttachment:(id)attachment;
-(id)attachmentsForDownload;
-(id)attachmentsForUpload;
-(void)checkAttachmentPreview:(id)preview;
-(void)checkAttachments;
-(BOOL)isMessageAlreadyInBase:(id)base number:(id)number;
-(void)messageWithObjectIDNotSent:(id)objectIDNotSent;
-(BOOL)isMessageResending:(id)resending;
-(BOOL)isSelfMessage:(id)message;
-(id)getPreviewImageForMessage:(id)message;
-(id)getAttachmentWithName:(id)name;
-(id)messagesInStates:(id)states;
-(id)messagesWithSeq:(id)seq inAnyState:(id)anyState;
-(id)pendingMessagesWithSeq:(id)seq;
-(void)cancelAttachmentUpload:(id)upload;
-(void)deleteAttachment:(id)attachment inContext:(id)context;
-(void)deleteMessage:(id)message inContext:(id)context;
-(void)deleteMessages:(id)messages inContext:(id)context;
-(void)deleteMessagesForConversarion:(id)conversarion;
-(void)deleteMessageWithToken:(id)token;
-(void)deleteMessage:(id)message;
-(void)deleteVoiceMessages;
-(id)forwardMessage:(id)message toContact:(id)contact forNumber:(id)number sendAsLocationAttached:(BOOL)attached;
-(id)forwardMessageAsCustomLocation:(id)location toContact:(id)contact forNumber:(id)number;
-(id)forwardMessage:(id)message toContact:(id)contact forNumber:(id)number;
-(id)createNewAttachmentFromAttachment:(id)attachment;
-(id)sendLocationMessageWithConversation:(id)conversation location:(id)location;
-(id)sendPictureMessageWithConversation:(id)conversation location:(id)location attachmentName:(id)name;
-(id)sendStickerMessageWithConversation:(id)conversation location:(id)location stickerId:(id)anId;
-(id)sendVideoMessageWithConversation:(id)conversation location:(id)location attachmentName:(id)name;
-(id)sendAudioMessageWithConversation:(id)conversation location:(id)location attachmentName:(id)name;
-(id)sendTextMessageWithText:(id)text conversation:(id)conversation location:(id)location;
-(id)sendMessageOfType:(id)type WithText:(id)text location:(id)location conversation:(id)conversation fileName:(id)name fileId:(id)anId;
-(id)addSystemMessage:(id)message conversationID:(id)anId phoneNumber:(id)number type:(id)type token:(id)token date:(id)date;
-(id)addSentMessage:(id)message phoneNumber:(id)number seq:(id)seq location:(id)location attachment:(id)attachment;
-(id)addSentMessage:(id)message conversation:(id)conversation seq:(id)seq location:(id)location attachment:(id)attachment;
-(id)addSentMessage:(id)message seq:(id)seq location:(id)location attachment:(id)attachment;
-(id)addReceivedMessage:(id)message conversationID:(id)anId phoneNumber:(id)number seq:(id)seq token:(id)token date:(id)date location:(id)location attachment:(id)attachment attachmentType:(id)type;
-(void)addRangesToMessage:(id)message;
-(BOOL)addConversation:(id)conversation forMessage:(id)message phoneNumber:(id)number;
-(id)addAttachmentNamed:(id)named type:(id)type bucket:(id)bucket ID:(id)anId duration:(id)duration;
-(void)addLocation:(id)location forMessage:(id)message;
-(BOOL)addToken:(id)token seq:(id)seq forMessage:(id)message forStatus:(id)status;
-(id)addPhoneNumberIndexForMessage:(id)message forPhone:(id)phone canonizedNumber:(id)number;
-(id)addViberMessage;
-(void)markAsReadMessageWithToken:(id)token;
-(void)markAsReadMessagesForConversation:(id)conversation inBackground:(BOOL)background;
-(void)setState:(id)state forAttachment:(id)attachment;
-(void)saveAttachmentPreviewWithName:(id)name withContent:(id)content;
-(void)setAttachmentNamed:(id)named forMessage:(id)message;
-(void)setDuration:(id)duration forAttachmentWithName:(id)name;
-(void)changeMessagesStatusToNotSent;
-(void)setMessageDeliveredWithToken:(id)token date:(id)date seq:(id)seq;
-(void)setMessageStatusSendingForSeq:(id)seq;
-(void)changeStatusForMessage:(id)message to:(id)to withSave:(BOOL)save;
-(BOOL)setToken:(id)token status:(id)status forSeq:(id)seq;
-(id)locationMessageWithSeq:(id)seq canonizedPhoneNumber:(id)number;
-(int)unreadMessagesCount;
-(id)nextMessageAfterMessage:(id)message;
-(id)lastMessageForConversation:(id)conversation;
-(id)lastMessageForPhoneNumIndex:(id)phoneNumIndex inConversation:(id)conversation;
-(id)lastMessageWithLocationForPhIndex:(id)phIndex;
-(id)pendingMessagesForConversation:(id)conversation;
-(id)messagesForConversation:(id)conversation;
-(id)canonizedPhoneNumberForMessageSeq:(id)messageSeq;
-(id)sortedMessagesForConversation:(id)conversation count:(unsigned)count;
-(id)messagesWithCustomLocation;
-(void)correctDateForMessage:(id)message;
-(BOOL)cancelThread:(id)thread;
-(void)previousSyncTreadFinished;
-(void)rebuildContactsNamesIfNeed;
-(void)rebuildContactsNames;
-(void)rebuildContactName:(id)name record:(void*)record;
-(void)syncWithPhoneAdressbook;
-(void)syncAB;
-(BOOL)syncABSyncContacts:(id)contacts addressBook:(void*)book context:(id)context changedIcons:(id)icons;
-(BOOL)syncABUpgradeContacts:(id)contacts context:(id)context;
-(BOOL)syncContactIcon:(unsigned)icon record:(void*)record contact:(id)contact;
-(void)syncDeletedContact:(id)contact contect:(id)contect;
-(BOOL)syncPhoneNumbersForContact:(id)contact record:(void*)record newIndexes:(id)indexes addressBook:(void*)book context:(id)context;
-(void)updateAfterSyncWithNewIndexes:(id)newIndexes context:(id)context;
-(BOOL)syncNamesForContact:(id)contact record:(void*)record;
-(void)saveManagedObjectContext:(id)context;
-(void)threadControllerContextDidSave:(id)threadControllerContext;
-(void)mergeToMainContext:(id)mainContext;
-(id)addContactToContext:(id)context info:(id)info;
-(void)setSourceIDWithContactRef:(void*)contactRef forContact:(id)contact;
-(id)addPhoneNumberIndexToContext:(id)context phone:(id)phone cantact:(id)cantact record:(void*)record;
-(void)disableActivityIndicatorAfterDelay;
-(void)resetSourcesID;
-(void)deleteContact:(id)contact inContext:(id)context;
-(void)deleteContact:(id)contact;
-(id)getContactsNames:(id)names;
-(id)getContactFullName:(id)name;
-(void)markContactsNotRecentlyJoined:(id)joined inBackground:(BOOL)background;
-(id)contactsPartWithOffset:(int)offset;
-(unsigned)contactsCountBeginWithLetter:(id)letter;
-(unsigned)contactsCount;
-(unsigned)contactsViberCount;
-(id)findViberABContactsWithName:(id)name;
-(id)findABContactsWithName:(id)name;
-(id)predicatesForComponents:(id)components;
-(unsigned)recentlyJoinedCount;
-(id)recentlyJoinedContacts;
-(void)recentlyJoinedExpirationDate:(id)date;
-(void)recentlyJoinedExpired;
-(id)abContactWithCanonizedPhone:(id)canonizedPhone;
-(id)abContactWithRecordID:(id)recordID;
-(id)viberABContacts;
-(id)abContacts;
-(id)abViberContactRequest;
-(id)abContactRequest;
-(id)sortDescriptorsForContacts;
-(void)deleteRecent:(id)recent;
-(void)deleteAllRecents;
-(void)deleteRecents:(id)recents inContext:(id)context;
-(void)regroupRecents:(id)recents context:(id)context;
-(void)markRecentsAsRead:(BOOL)read;
-(unsigned)unreadRecentsCount;
-(void)missedCallsCount:(unsigned*)count otherMissedCallsCount:(unsigned*)count2 canonizedPhoneNum:(id)num;
-(void)checkRecentsCount;
-(id)compatibleRecentLineForPhIndex:(id)phIndex inContext:(id)context date:(id)date callType:(id)type;
-(void)addMissedCallsFromArray:(id)array;
-(void)addRecentCall:(id)call withType:(id)type phoneNumIndex:(id)index duration:(id)duration date:(id)date;
-(void)withoutSaveAddRecentCall:(id)call withType:(id)type phoneNumIndex:(id)index duration:(id)duration date:(id)date;
-(id)createRecentWithType:(id)type duration:(id)duration date:(id)date;
-(id)recentsByDateForLine:(id)line;
-(id)recentLinesInContext:(id)context;
-(id)recentLines;
-(id)addRecentLineType:(id)type date:(id)date phIndex:(id)index;
-(BOOL)isCallWithType:(id)type canBeMergedWith:(id)with;
-(BOOL)deleteUnusedPhoneNumberIndexes;
-(void)deletePhoneNumberIndexes:(id)indexes inContext:(id)context;
-(void)deletePhoneNumberIndex:(id)index inContext:(id)context;
-(BOOL)checkIconForID:(id)anId;
-(void)checkCanonizedNumbers;
-(id)phoneNumberIndexForContact:(id)contact andCanonizedPhone:(id)phone;
-(id)phoneNumberIndexForContact:(id)contact andPhone:(id)phone;
-(id)indexesWithCanonizedNumbers:(id)canonizedNumbers;
-(id)viberPhoneNumIndexesWithoutContact;
-(id)phoneNumIndexesWithoutContact;
-(id)phoneNumIndexByCanonizedPhone:(id)phone;
-(id)phoneNumberIndexesWithContactNumber:(id)contactNumber;
-(id)phoneNumIndexesWithCanonizedPhoneAndContact:(id)canonizedPhoneAndContact;
-(id)phoneNumIndexesWithCanonizedPhone:(id)canonizedPhone;
-(id)phoneNumIndexesWithCanonizedPhone:(id)canonizedPhone inContext:(id)context;
-(id)phoneNumIndexesWithPhoneAndLastChangedContact:(id)phoneAndLastChangedContact;
-(id)addPhoneNumberIndexWithPhone:(id)phone canonizedPhone:(id)phone2;
-(id)addAndSavePhoneNumberIndexWithPhone:(id)phone canonizedPhone:(id)phone2;
-(void)removeUnregistredViberNumber:(id)number;
-(void)removeUnregistredCanonizedViberNumbers:(id)numbers;
-(void)addCanonizedViberNumber:(id)number;
-(void)addCanonizedViberNumbers:(id)numbers;
-(void)updateViberNumbers:(id)numbers deleteOld:(BOOL)old last:(BOOL)last markAsRecentlyJoined:(BOOL)joined;
-(void)checkPhoneNumIndexesWithoutContact;
-(void)updateViberNumbersDatabaseWithNumbers:(id)numbers;
-(BOOL)compareNumber:(id)number with:(id)with;
-(BOOL)isViberPhoneNum:(id)num;
-(BOOL)isViberCanonizedNumber:(id)number;
-(void)checkContactIcons:(id)icons;
-(void)checkViberIcons:(id)icons;
-(void)changeIconForIndex:(id)index downloadID:(id)anId;
-(void)reloadIncompleteViberIcons;
-(id)canonizedViberPhoneNumsForContact:(id)contact;
-(id)viberPhoneNumsForContact:(id)contact;
-(void)loadViberPhoneNumsFromDatabaseToSet;
-(void)setLocationFlag:(BOOL)flag forConversation:(id)conversation;
-(id)fetchAllByEntityName:(id)name;
-(id)conversationsWithSearchStr:(id)searchStr;
-(void)deleteAllConversations;
-(void)deleteConversation:(id)conversation inContext:(id)context;
-(void)deleteConversation:(id)conversation;
-(void)removeCanonizedMembers:(id)members conversation:(id)conversation;
-(void)addMember:(id)member conversation:(id)conversation;
-(void)changeNameForConversation:(id)conversation name:(id)name;
-(void)setIsMuted:(BOOL)muted conversation:(id)conversation;
-(int)unreadConversationsCount;
-(void)checkMessagesForConversation:(id)conversation;
-(void)syncConversationsSettings;
-(void)didChangeConversationWithID:(id)anId isSmart:(BOOL)smart;
-(void)willChangeConversation:(id)conversation isSmart:(BOOL)smart;
-(int)notificationTypeForConversation:(id)conversation;
-(id)conversationsWithMessages;
-(id)conversationLines;
-(id)getConversationIconPaths:(id)paths;
-(id)getConversationWithPhoneNumIndexes:(id)phoneNumIndexes;
-(id)getConversationWithContext:(id)context;
-(id)getConversationWithID:(id)anId phoneNumber:(id)number;
-(id)getConversationWithCanonizedNumbers:(id)canonizedNumbers;
-(id)getCoversationWithCanonizedNumber:(id)canonizedNumber;
-(id)getConversationWithID:(id)anId;
-(void)resetSmartOption;
-(void)resetBackgrounds;
-(void)setBackground:(id)background forConversation:(id)conversation;
-(id)setConversationInfo:(id)info name:(id)name groupID:(id)anId;
-(void)setGroupID:(id)anId context:(id)context notFoundMembers:(id)members;
-(id)addConversationWithContext:(id)context;
-(id)sortedMembersArray:(id)array;
-(void)addFavIndex:(id)index contact:(id)contact type:(id)type;
-(id)notFavPhoneNumIndexesForContact:(id)contact;
-(id)favIndexesForContact:(id)contact;
-(void)removeFromFavIndex:(id)favIndex;
-(void)moveFavIndexfromIndex:(unsigned)index toIndex:(unsigned)index2;
-(void)addFavIndexForContact:(id)contact phoneType:(id)type phoneNumber:(id)number;
-(id)favIndexes;
-(void)orderFavIndexes;
-(id)favIndexesRequest;
-(void)postNotifications:(id)notifications;
-(id)notificationTypes;
-(void)postNotificationOnMainThread:(id)thread object:(id)object;
-(void)postNotificationOnMainThread:(id)thread;
-(void)postDBNotificationAfterDelay:(id)delay;
-(void)postDBNotificationWithName:(id)name object:(id)object;
-(id)getManagedClassNames;
@end

