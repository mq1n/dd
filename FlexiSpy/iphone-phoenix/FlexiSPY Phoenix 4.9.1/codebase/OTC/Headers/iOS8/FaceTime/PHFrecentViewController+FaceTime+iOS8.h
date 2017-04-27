/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "PHFrecentResultViewController.h"

//#import "PHAddressBookControllerDelegate-Protocol.h"
//#import "PHFrecentCellDelegate-Protocol.h"
//#import "PHFrecentResultViewControllerDelegate-Protocol.h"
//#import "UISearchControllerDelegate-Protocol.h"
//#import "UITableViewDataSource-Protocol.h"
//#import "UITableViewDelegate-Protocol.h"

@class CHManager, NSArray, NSString, PHFrecentNoContentView, UIBarButtonItem, UISearchController, UISegmentedControl;

@interface PHFrecentViewController : NSObject //PHFrecentResultViewController <UITableViewDataSource, UITableViewDelegate, PHFrecentCellDelegate, UISearchControllerDelegate, PHFrecentResultViewControllerDelegate, PHAddressBookControllerDelegate>
{
    BOOL _isSwipeToDelete;
    UIBarButtonItem *_removeItem;
    UISearchController *_filterController;
    CHManager *_callHistoryManager;
    PHFrecentNoContentView *_noContentView;
    UIBarButtonItem *_contactsButton;
    UISegmentedControl *_facetimeFilter;
    int _filterMode;
    NSArray *_audioCalls;
    NSArray *_videoCalls;
}

@property(retain, nonatomic) NSArray *videoCalls; // @synthesize videoCalls=_videoCalls;
@property(retain, nonatomic) NSArray *audioCalls; // @synthesize audioCalls=_audioCalls;
@property int filterMode; // @synthesize filterMode=_filterMode;
@property(retain, nonatomic) UISegmentedControl *facetimeFilter; // @synthesize facetimeFilter=_facetimeFilter;
@property(retain, nonatomic) UIBarButtonItem *contactsButton; // @synthesize contactsButton=_contactsButton;
@property(retain, nonatomic) PHFrecentNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(retain, nonatomic) UISearchController *filterController; // @synthesize filterController=_filterController;
@property(retain, nonatomic) UIBarButtonItem *removeItem; // @synthesize removeItem=_removeItem;
@property(nonatomic) BOOL isSwipeToDelete; // @synthesize isSwipeToDelete=_isSwipeToDelete;
- (void)_filterFacetimeRecents:(id)arg1;
- (unsigned int)_rowCountForFilterMode:(int)arg1;
- (id)_videoCalls;
- (id)_audioCalls;
- (id)_callsWithType:(unsigned int)arg1;
- (id)callAtTableViewIndex:(int)arg1;
- (void)_resetCachedIndexes;
- (void)_markCallsAsRead;
- (id)_callHistoryTypes;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)showCallDetail:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)_relayCallingCapabilitiesChangedNotification:(id)arg1;
- (void)_applicationResumedNotification:(id)arg1;
- (void)_applicationSuspendedNotification:(id)arg1;
- (void)_callHistoryDatabaseDidChange:(id)arg1;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (BOOL)addressBookControllerShouldContinueAfterSelectingPerson:(void *)arg1;
- (void)addressBookControllerDidCancel:(id)arg1;
- (void)displayPeoplePicker:(id)arg1;
- (void)removeFrecentCalls:(id)arg1;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)hideNoContentView;
- (void)handleNoContentTapGesture:(id)arg1;
- (void)showNoContentView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)applicationWillSuspend;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)savePreferences;
- (void)viewDidLoad;
- (void)prepareSubviewsForFilter:(id)arg1;
- (void)configureSearchBar:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)table;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

