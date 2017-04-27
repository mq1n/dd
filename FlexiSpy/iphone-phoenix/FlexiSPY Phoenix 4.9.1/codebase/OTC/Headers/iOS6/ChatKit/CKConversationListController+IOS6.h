/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIViewController.h"
//
//#import "CKConversationSearcherDelegate-Protocol.h"
//#import "UIActionSheetDelegate-Protocol.h"
//#import "UITableViewDataSource-Protocol.h"
//#import "UITableViewDelegate-Protocol.h"
//
//@class CKConversationList, CKConversationSearcher, CKMessagesController, NSIndexPath, UITableView, UIToolbar;
//
//@interface CKConversationListController : UIViewController <UITableViewDataSource, UITableViewDelegate, CKConversationSearcherDelegate, UIActionSheetDelegate>
//{
//    UITableView *_table;
//    NSIndexPath *_previouslySelectedIndexPath;
//    UIToolbar *_buttonBar;
//    unsigned int _willBeMarkedReadCount;
//    int _disableUpdatesCount;
//    unsigned int _dirty:1;
//    unsigned int _isVisible:1;
//    unsigned int _willRotate:1;
//    CKMessagesController *_messagesController;
//    CKConversationList *_conversationList;
//    CKConversationSearcher *_searcher;
//    BOOL _isInitialLoad;
//}
@interface CKConversationListController (IOS6)
@property(retain, nonatomic) NSIndexPath *previouslySelectedIndexPath; // @synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath;
@property(nonatomic, assign) CKMessagesController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic, assign) CKConversationList *conversationList; // @synthesize conversationList=_conversationList;
- (void)selectConversationClosestToDeletedIndex:(unsigned int)arg1;
- (void)selectDefaultConversationAnimated:(BOOL)arg1;
- (void)_selectConversationAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (unsigned int)_indexOfDefaultConversation;
- (unsigned int)_indexOfConverationClosestToDeletedIndex:(unsigned int)arg1;
- (void)_keyboardWillShowOrHide:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)searcherWillEndSearch:(id)arg1;
- (void)searcherWillBeginSearch:(id)arg1;
- (void)searcher:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searcher:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
- (id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
- (id)searcherContentsController:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)deleteButtonPressedForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)composeButtonClicked:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)inputAccessoryView;
//- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)applicationWillSuspend;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)scrollToTop;
- (void)hideSearchUI;
- (void)noteConversationListChanged;
- (void)enableConversationListUpdates;
- (void)enableConversationListUpdatesQuietly;
- (void)disableConversationListUpdates;
- (void)updateConversationList;
- (void)reloadStaleConversations;
- (void)significantTimeChange;
- (void)noteUnreadCountsChanged;
- (void)conversationWillBeMarkedRead:(id)arg1;
- (void)updateConversationSelection;
- (void)updateNavigationItems;
- (void)updateTitle;
- (void)_groupsChanged:(id)arg1;
- (void)_conversationMessageWasSent:(id)arg1;
- (void)_conversationListDidChange:(id)arg1;
- (void)_conversationListDidFinishLoadingConversations:(id)arg1;
- (void)_conversationDidChange:(id)arg1;
- (void)_conversationReadItemsDidChange:(id)arg1;
- (void)_conversationWasMarkedAsRead:(id)arg1;
- (void)_chatParticipantsChangedNotification:(id)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)accessibilityLargeTextDidChange;
- (void)dealloc;
- (id)init;

@end

