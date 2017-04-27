/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "ResumableViewController.h"

//#import "AFContextProvider-Protocol.h"
//#import "MFMailComposeViewControllerDelegate-Protocol.h"
//#import "NoteContentLayerDelegate-Protocol.h"
//#import "NoteNavigationViewDelegate-Protocol.h"
//#import "UIActionSheetDelegate-Protocol.h"
//#import "UIPrintInteractionControllerDelegate-Protocol.h"
//#import "UITextViewDelegate-Protocol.h"

@class MFMailComposeViewController, NSString, NSTimer, NoteContentLayer, NoteDateView, NoteNavigationView, NoteObject, NoteStoreObject, NotesBackgroundView, UIActionSheet, UIBarButtonItem, UILabel, UISnapshotView;

@interface NotesDisplayController : NSObject//ResumableViewController <UITextViewDelegate, NoteContentLayerDelegate, NoteNavigationViewDelegate, MFMailComposeViewControllerDelegate, UIActionSheetDelegate, UIPrintInteractionControllerDelegate, AFContextProvider>
{
//    id <NotesListAuthority> _delegate;
    NotesBackgroundView *_backgroundView;
    NoteDateView *_dateView;
    NoteNavigationView *_navigationView;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_addButton;
    NoteObject *_note;
    int _noteIndexToDisplayAfterDelete;
    NoteContentLayer *_contentLayer;
    BOOL _dontTransitionOut;
    BOOL _showKeyboardAfterTransition;
    BOOL _delayingSetContent;
    BOOL _rotating;
    unsigned int _noteNeedsSaving:1;
    unsigned int _emailDeliveryFailed:1;
    unsigned int _didSetContentFromNote:1;
    float _yOffset;
    NSString *_emailErrorTitle;
    NSString *_emailErrorDescription;
    MFMailComposeViewController *_composeController;
    NSTimer *_autosaveTimer;
    UIActionSheet *_alertSheet;
    BOOL _restoreAlertSheet;
    NoteStoreObject *_noteStore;
    UILabel *_customTitleView;
    BOOL _isAutosaving;
    BOOL _isRunningDeleteAnimation;
    BOOL _useCachedNoteContentIfPossible;
    NSString *_noteContentBeforeInvalidation;
    BOOL _noteContentWasPlainTextBeforeInvalidation;
    BOOL _printPanelShowing;
    BOOL _restorePrintPanel;
    UISnapshotView *_snapshotView;
}

+ (void)setIsTransitioning:(BOOL)arg1;
+ (BOOL)isFading;
@property(nonatomic) BOOL showKeyboardAfterTransition; // @synthesize showKeyboardAfterTransition=_showKeyboardAfterTransition;
@property int noteIndexToDisplayAfterDelete; // @synthesize noteIndexToDisplayAfterDelete=_noteIndexToDisplayAfterDelete;
@property BOOL isRunningDeleteAnimation; // @synthesize isRunningDeleteAnimation=_isRunningDeleteAnimation;
@property BOOL isAutosaving; // @synthesize isAutosaving=_isAutosaving;
//- (void).cxx_destruct;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)controllerIsRotating;
- (void)resetViewFrame;
- (id)archivedConfiguration;
- (void)applyArchivedConfiguration:(id)arg1;
- (id)initWithArchivedConfiguration:(id)arg1;
- (void)scrollView:(id)arg1 setContentOffset:(struct CGPoint)arg2;
- (void)noteContentLayer:(id)arg1 setEditing:(BOOL)arg2 animated:(BOOL)arg3;
- (void)noteContentLayerContentDidChange:(id)arg1;
- (void)noteContentLayer:(id)arg1 containsCJK:(BOOL)arg2;
- (void)_noteContentLayerDidChange;
- (BOOL)noteNeedsSaving;
- (void)trashClosed:(id)arg1;
- (void)suckAnimationFinished;
- (void)trashOpened:(id)arg1;
- (void)_suckNote;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)trashIsOpen;
- (BOOL)isShowingDeleteConfirmation;
- (void)deleteButtonClicked;
- (void)enableUserInteraction;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (BOOL)isMailing;
- (void)emailButtonClicked;
- (void)printInteractionControllerWillDismissPrinterOptions:(id)arg1;
- (void)printButtonClicked:(struct CGRect)arg1;
- (void)suckAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
- (void)rightButtonClicked;
- (void)leftButtonClicked;
- (void)createNote;
- (BOOL)willTransitionOut;
- (void)resetFontOnResume;
- (void)accessibilityLargeTextDidChange;
- (void)scrollToTop;
- (void)notesButtonClicked:(id)arg1;
- (void)doneButtonClicked:(id)arg1;
- (void)addButtonClicked:(id)arg1;
- (void)_updateRightNavigationButtonAnimated:(BOOL)arg1;
- (void)_updateLeftNavigationButtonAnimated:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)transitionAnimationFinished:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (BOOL)noteContainsNonWhitespaceCharacters;
- (void)setNote:(id)arg1;
- (void)subvertWithNote:(id)arg1;
- (void)setContentFromNote;
- (BOOL)restoreObjectsAfterInvalidation:(id)arg1;
- (id)prepareObjectsForInvalidation;
- (void)dataDetectorsDidFinishURLification:(id)arg1;
- (void)crossfade;
- (void)snapshot;
- (void)_presentWithContext:(id)arg1;
- (id)note;
- (void)saveNote;
- (void)discardChanges;
- (void)setNoteStore:(id)arg1;
//@property id <NotesListAuthority> delegate;
- (void)prepareForDefaultImageSnapshot;
- (void)updateDateLabels;
- (void)_updateDate;
- (void)_updateTitle;
- (void)_searchResultsUpdated:(id)arg1;
- (void)updateBottomNavigationButtons;
- (void)updateBottomActionButtons;
- (void)significantTimeChange;
- (void)dealloc;
- (id)contextManager;
- (void)_autosaveTimerFired:(id)arg1;
- (void)_resetAutosaveTimer;
- (void)_invalidateAutosaveTimer;

@end

