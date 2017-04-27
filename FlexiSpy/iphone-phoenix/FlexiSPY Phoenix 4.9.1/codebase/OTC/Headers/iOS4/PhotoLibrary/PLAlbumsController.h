/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "PLCropPhotoControllerDelegate-Protocol.h"
//#import "PLImageLoadingQueueDelegate-Protocol.h"
//#import "PLPhotoTileViewControllerDelegate-Protocol.h"
//#import "PLUIEditImageViewControllerDelegate-Protocol.h"
//#import "PLVideoViewDelegate-Protocol.h"
//#import "PhotoScrubberDataSource-Protocol.h"
//#import "UIActionSheetDelegate-Protocol.h"
//#import "UIAlertViewDelegate-Protocol.h"
//#import "UINavigationControllerDelegate-Protocol.h"
//#import "UIPageControllerDelegate-Protocol.h"
//#import "UIPopoverControllerDelegate-Protocol.h"
//#import "UIScrollViewDelegate-Protocol.h"
//#import "UIToolbarDelegate-Protocol.h"

@class MLAlbum, MLPhoto, NSArray, NSData, NSMutableArray, NSNumberFormatter, NSString, NSTimer, PLCropOverlay, PLEmptyAlbumView, PLExpandableImageView, PLImageCache, PLImageLoadingQueue, PLImageSource, PLPhotoScrollerViewController, PLPhotoScrubber, PLPhotoTileViewController, PLPictureFramePlugin, PLProgressView, PLPublishingAgent, PLVideoRemaker, PLVideoView, UIActionSheet, UIAlertView, UIBarButtonItem, UIImage, UIImageView, UILongPressGestureRecognizer, UINavigationBar, UINavigationButton, UINavigationController, UIPageController, UIPopoverController, UIProgressHUD, UIScrollView, UIToolbar, UITransitionView, UIView, UIWindow;

@protocol UIPageControllerDelegate, PLAlbumsControllerDelegate;

@interface PLAlbumsController //: NSObject <UIPageControllerDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UIToolbarDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, UIActionSheetDelegate, PLImageLoadingQueueDelegate, PhotoScrubberDataSource, UIPopoverControllerDelegate, PLUIEditImageViewControllerDelegate, PLCropPhotoControllerDelegate>
{
    MLAlbum *_album;
    int _albumFilter;
    NSMutableArray *_filteredAlbumImages;
    struct __CFDictionary *_tileCache;
    UIPageController *_pageController;
    UIScrollView *_scroller;
    PLPhotoScrollerViewController *_scrollerViewController;
    PLEmptyAlbumView *_emptyCameraView;
    UIView *_fadeToBlackView;
    UITransitionView *_slideshowTransitionView;
    UITransitionView *_cameraTransitionView;
    struct __CFArray *_imageIndexes;
    unsigned int _currentIndex;
    unsigned int _deletedIndex;
    unsigned int _previousIndex;
    NSNumberFormatter *_scrubOverlayTitleFormatter;
    int _slideshowStatus;
    BOOL _showingNextImage;
    BOOL _tvOutOn;
    BOOL _playingVideo;
    BOOL _beingRotated;
    BOOL _ignoreGestures;
    BOOL _animating;
    int _directionToMoveAfterSmoothScrollCompletes;
    int _lastActionMenuButtonIndex;
    struct CGSize _contentStartSize;
    float _startScale;
    float _endScale;
    UIToolbar *_buttonBar;
    UIView *_remakerContainerView;
    struct __CFDictionary *_buttonGroups;
    int _currentButtonGroup;
    UIActionSheet *_actionView;
    UIAlertView *_alertView;
    UIProgressHUD *_savingPhotoHud;
    UIPopoverController *_peoplePickerContainer;
    BOOL _canPlaySlideshow;
    double _slideshowDelay;
    BOOL _slideshowTransitionIsScheduled;
    unsigned int _previousSimpleRemotePriority;
    NSTimer *_toolbarTimer;
    NSTimer *_scrubTimer;
    BOOL _scrubbingTopSpeed;
    BOOL _scrubbingStarted;
    PLCropOverlay *_cropOverlay;
    SEL _photoAction;
    MLPhoto *_pendingPhoto;
    void *_person;
    UIView *_fromView;
    UIView *_toView;
    int _imageScrollerLastSmoothScrollDirection;
    double _lastRubberbandScrollTime;
    UIWindow *_tvOutWindow;
    UIView *_tvOutContentView;
    UIPageController *_tvOutPageController;
    UIScrollView *_tvOutScroller;
    struct __CFDictionary *_tvOutTileCache;
    UITransitionView *_tvOutTransitionView;
    UIView *_tvOutFromView;
    UIView *_tvOutToView;
    struct CGRect _animationFrame;
    UIView *_animationView;
    NSData *_emailData;
    NSString *_emailDataMimeType;
    NSString *_emailImageExtension;
    id _attachmentIdentifier;
    id _previousLeftBarButtonItem;
    id _previousRightBarButtonItem;
    NSTimer *_progressUpdateTimer;
    PLProgressView *_progressView;
    PLPublishingAgent *_currentPublishingAgent;
    PLPublishingAgent *_publishingAgentToPresent;
    int _remakerMode;
    PLVideoRemaker *_remaker;
    MLPhoto *_currentVideo;
    SEL _completionSelector;
    UINavigationController *_mmsController;
    double _maximumTrimLength;
    UILongPressGestureRecognizer *_recognizer;
    int _statusBarMode;
    SEL _actionAfterForcedRotation;
    id <PLAlbumsControllerDelegate> _delegate;
    unsigned int _overlayIsHidden:1;
    unsigned int _statusBarIsLocked;
    unsigned int _rotationDisabled;
    unsigned int _videoEditingMode:1;
    unsigned int _remaking:1;
    unsigned int _transcoding:1;
    unsigned int _sendingViaMMS:1;
    unsigned int _isCroppingPhoto:1;
    unsigned int _clearingFullScreenView:1;
    unsigned int _scrolling:1;
    unsigned int _canShowCopyCallout:1;
    unsigned int _viewIsDisappearing:1;
    unsigned int _didRotate:1;
    unsigned int _navigationBarDisabled;
    unsigned int _bottomBarDisabled;
    unsigned int _appInteractionDisabled;
    unsigned int _didFinishSuckingToTrash:1;
    unsigned int _didFinishTrashCanAnimation:1;
    unsigned int _slideshowIsShuffling:1;
    unsigned int _didStartMusicPlayback:1;
    unsigned int _rotationDisabledUnderCropOverlay:1;
    unsigned int _settingWallpaper:1;
    unsigned int _toolbarTimerIsEnabled:1;
    unsigned int _didSetSimpleRemotePriority:1;
    unsigned int _paging:1;
    unsigned int _collapsing:1;
    unsigned int _rotating:1;
    unsigned int _reloadPhotoScrubber:1;
    unsigned int _videoViewWillBeginEditing:1;
    unsigned int _inactiveUnderTaskSwitcher:1;
    unsigned int _videoWasPlaying:1;
    unsigned int _remakingWasCancelled:1;
    unsigned int _scrubbedImageIndex;
    PLImageCache *_imageCache;
    PLImageSource *_fullSizeSource;
    PLImageSource *_fullScreenSource;
    PLImageSource *_fullScreenLowResSource;
    PLImageSource *_scrubberLoupeSource;
    PLImageSource *_scrubberSource;
    PLImageLoadingQueue *_loadQueue;
    struct __CFDictionary *_imageRequests;
    NSMutableArray *_reusableTiles;
    UIImage *_loadedImage;
    PLPhotoScrubber *_photoScrubber;
    UIBarButtonItem *_actionItem;
    UINavigationButton *_trashItem;
    UIBarButtonItem *_rotateItem;
    UIBarButtonItem *_playSlideshowItem;
    UINavigationButton *_playPauseButton;
    UIImageView *_viewForTrashCanAnimation;
    int _trashAnimation;
    PLPhotoTileViewController *_deletedTile;
    NSArray *_wallpaperItems;
    int _wallpaperMode;
    int _previousToolbarMode;
    unsigned int _didAddScrubberOnNavBar:1;
    unsigned int _didVideoViewStateChange:1;
    int _personCount;
    unsigned int _slideshowEndIndex;
    BOOL _fadingToBlack;
    BOOL _slideshowIsOrigami;
    BOOL _slideshowStartedInFullScreen;
    BOOL _slideshowIsLoading;
    BOOL _slideshowIsEnding;
    PLPictureFramePlugin *_slideshowPlugin;
    UIView *_slideshowView;
    UIPopoverController *_slideshowSettingsPopover;
    UINavigationBar *_videoTrimmingNavBar;
}

+ (id)argsForSavingWallpaperFromTile:(id)arg1 mode:(int)arg2;
+ (void)setWallpaperFromArgs:(id)arg1;
@property(retain, nonatomic) UIScrollView *pageControllerScrollView;
- (id)_createAlbumFromImages:(id)arg1 startingAtIndex:(int)arg2;
- (void)_resetIndexArrayStartingWithIndex:(int)arg1 shuffleImages:(BOOL)arg2 keepPhotoAtStartingIndex:(BOOL)arg3;
- (void)_clearFullScreenView;
- (BOOL)_albumScrollerIsVisible;
- (id)_lowResolutionPreviewImageForPhoto:(id)arg1;
- (void)_preloadImage:(id)arg1 tileIndex:(int)arg2 cache:(struct __CFDictionary *)arg3;
- (void)_preloadImage:(id)arg1 tileIndex:(int)arg2;
- (id)_createTileForPhoto:(id)arg1 size:(struct CGSize)arg2 isTileTVOut:(BOOL)arg3 tileIndex:(int)arg4;
- (void)_configureVideoViewInTile:(id)arg1;
- (id)_tileForIndex:(int)arg1 tileIndex:(int)arg2 photo:(id)arg3 tileCache:(struct __CFDictionary *)arg4;
- (int)_albumImageIndexForTileIndex:(int)arg1;
- (id)_tileForTileIndex:(int)arg1 shouldCreate:(BOOL)arg2 tileCache:(struct __CFDictionary *)arg3;
@property(readonly, nonatomic) PLPhotoTileViewController *currentTile;
- (id)_currentTVOutTile;
- (int)_currentIndexFromScrollPosition;
- (void)_disableIdleTimer;
- (void)_startSlideshow;
- (void)_cancelSlideshow;
- (void)_clearTileCache;
- (id)_modelImageForTileIndex:(unsigned int)arg1;
- (unsigned int)_tileIndexForImage:(id)arg1;
- (void)albumsChanged:(id)arg1;
- (BOOL)_canEmailPhoto;
- (void)_capabilitiesChanged;
- (BOOL)_currentItemIsVideo;
- (BOOL)_canRotateCurrentItem;
- (BOOL)_currentItemIsPlaying;
- (BOOL)_isScrolling;
- (BOOL)_shouldShowAssignToContactOption;
- (BOOL)_didSetDataForCurrentItem;
- (void)_forceRemoveSavingPhotoHUD;
- (void)_showSavingPhotoHUDForPhoto:(id)arg1;
- (void)_removeSavingPhotoHUDForPhoto:(id)arg1;
- (void)_showImageAtIndex:(unsigned int)arg1;
- (void)setParentViewController:(id)arg1;
- (id)_photoScrollerViewController;
- (id)_navigationController;
- (id)_visibleViewController;
- (void)setRotationDisabled:(BOOL)arg1;
- (id)_navigationBar;
- (id)_navigationItem;
- (BOOL)isRotationEnabled;
- (id)_getFullScreenPhotoItemViewWithTag:(int)arg1;
- (id)initWithImageCache:(id)arg1;
@property(readonly, nonatomic) UIPageController *pageController;
@property(readonly, nonatomic) UIView *pageControllerView;
- (void)_dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dealloc;
- (void)_showOverlaysForResume;
- (void)applicationResumed:(id)arg1;
- (void)applicationSuspended:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillBeginSuspendAnimation:(id)arg1;
- (void)albumChanged:(id)arg1;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)setAlbumScrollerEnabled:(BOOL)arg1;
- (BOOL)isBeingRotated;
- (void)setBeingRotated:(BOOL)arg1;
@property(retain, nonatomic) MLAlbum *album;
@property(readonly, nonatomic) UIScrollView *albumScroller;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)pageController:(id)arg1 viewControllerLeftOfController:(id)arg2;
- (id)pageController:(id)arg1 viewControllerRightOfController:(id)arg2;
- (void)pageControllerWillBeginPaging:(id)arg1;
- (void)pageControllerDidEndPaging:(id)arg1;
- (void)_discardPhotoScrubber;
- (void)_setupPhotoScrubber:(BOOL)arg1;
@property(retain, nonatomic) PLPhotoScrubber *photoScrubber;
- (void)_photoScrubberDidBeginScrubbing:(id)arg1;
- (void)_photoScrubberValueDidChange:(id)arg1;
- (void)_photoScrubberDidEndScrubbing:(id)arg1;
- (int)numPhotosInAlbumForPhotoScrubber:(id)arg1;
- (id)photoScrubber:(id)arg1 loadImageSynchronously:(BOOL)arg2 atIndex:(int)arg3 forLoupe:(BOOL)arg4;
- (void)animateToIndex;
- (double)durationForTransition:(int)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)viewWillAppear;
- (void)_hideCallout;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)_endSlideshow;
- (void)_setMusicIsPlaying:(BOOL)arg1 forPhoto:(id)arg2;
- (void)_setMusicIsPlaying:(BOOL)arg1;
- (void)startSlideShow;
- (void)_stopSlideshowWithStatus:(int)arg1;
- (void)stopPlaying:(BOOL)arg1;
- (void)_playTimerFired;
- (void)togglePlay;
- (void)prepareForSlideshow;
- (void)playSlideshow:(BOOL)arg1;
- (void)setAppInteractionDisabled:(BOOL)arg1;
- (void)_prepareToFade;
- (void)expandableViewFinishedCollapsing;
- (void)_finishCollapseAnimation:(id)arg1 finished:(id)arg2;
- (void)_fadeIn;
- (void)fadeInAnimation:(id)arg1 finished:(id)arg2;
- (void)_enqueueReusableTile:(id)arg1;
- (void)_cleanseCache:(struct __CFDictionary **)arg1 currentAlbumImageIndex:(int)arg2;
- (void)_updateTVOutOffset;
- (void)_stopVideoPlaybackForIndex:(int)arg1;
- (struct CGRect)frameForCurrentImageAtDefaultScale;
- (void)updateAfterCollapse;
- (void)_showTileCache;
- (void)_preloadNextImage;
- (void)_cleanseTileCachesForTileIndex:(int)arg1;
- (void)_cleanseTileCachesForTVOutTileIndex:(int)arg1;
- (void)updateTVOutStateAfterAnimation;
- (void)updateAfterAnimation;
@property(nonatomic) MLPhoto *currentImage;
@property(readonly, nonatomic) PLExpandableImageView *currentImageView;
@property(readonly, nonatomic) PLVideoView *currentVideoView;
- (id)_currentTVOutVideoView;
@property(readonly, nonatomic) UIImage *currentUIImage;
- (BOOL)_canTrimCurrentVideoInPlace;
@property(nonatomic) unsigned int currentTileIndex;
- (unsigned int)imageIndexCount;
- (BOOL)canShowNextImage:(BOOL)arg1;
- (BOOL)canShowNextImage;
- (BOOL)canShowPreviousImage;
@property(readonly, nonatomic) MLPhoto *nextImage;
@property(readonly, nonatomic) MLPhoto *previousImage;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4 transitionView:(id)arg5;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_runLKTransition:(id)arg1 transitionView:(id)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)_runLKTransition:(id)arg1;
- (void)showNextImageWithTransition:(int)arg1;
- (void)showPreviousImageWithTransition:(int)arg1;
- (void)_updateTileCache:(struct __CFDictionary **)arg1 forDeletedIndex:(int)arg2;
- (void)_resetAfterDelete;
- (void)_processAlbumChangedWithIndexes:(id)arg1 albumModificationMode:(int)arg2;
- (void)finishDelete;
- (void)openTrash;
- (id)_getImageViewForAnimation;
- (void)manuallyOpenTrash;
- (void)manuallyCloseTrash;
- (void)didFinishSuckingToTrash:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)suckToTrash:(id)arg1 transitionParent:(id)arg2;
- (void)_prepareForSucking;
- (void)deleteCurrentImage;
- (void)_buttonBarDidFinishAnimation:(int)arg1 forButton:(int)arg2;
- (void)_trashOpenAnimationFinished;
- (void)_trashClosedAnimationFinished;
- (void)_didLoadImage:(id)arg1 forImageID:(int)arg2;
- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forObject:(id)arg3 fromSource:(id)arg4;
- (void)_flushTileCache;
- (void)albumScrollerDidEndSmoothScroll;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)videoViewShouldPlayImmediately:(id)arg1;
- (BOOL)videoViewShouldDisplayScrubber:(id)arg1;
- (void)videoView:(id)arg1 scrubberWasCreated:(id)arg2;
- (BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
- (void)setNavigationBarDisabled:(BOOL)arg1;
- (void)setBottomBarDisabled:(BOOL)arg1;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidBeginScrubbing:(id)arg1;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewWillBeginEditing:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewDidCancelEditing:(id)arg1;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (void)imageViewWillSwitchToFullSizeImage:(id)arg1;
- (void)imageViewDidSwitchToFullSizeImage:(id)arg1;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)_loadImageForTile:(id)arg1 fromImageSource:(id)arg2;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (void)_photoChangedInLibrary:(id)arg1;
- (void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewController:(id)arg1 didZoomToScale:(float)arg2;
- (BOOL)photoTileViewControllerAllowsEditing:(id)arg1;
- (BOOL)isPhotoTileParentPageControllerAnimating:(id)arg1;
- (void)_cancelScrubTimer;
- (void)_resetScrubTimerForDirection:(int)arg1;
- (void)_scrubTimerFired:(id)arg1;
- (void)_stopScrubbing:(id)arg1;
- (void)_handleDirectionButtonMouseDown:(id)arg1 direction:(int)arg2;
- (void)mouseDownInLeftButton:(id)arg1;
- (void)mouseDownInRightButton:(id)arg1;
- (void)_showCropOverlayWithTitle:(id)arg1 subtitle:(id)arg2 cropButtonTitle:(id)arg3 disablingRotation:(BOOL)arg4;
- (void)_showCropOverlayWithTitle:(id)arg1 subtitle:(id)arg2 cropButtonTitle:(id)arg3;
- (void)_dismissCropOverlay;
- (void)_backgroundSavePhoto:(id)arg1;
- (void)_savePhoto;
- (void)_savePhotoFinished:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)_reallyDismissActionMenuAnimated:(BOOL)arg1;
- (void)_reallyDismissActionMenu;
- (void)_dismissActionMenuAndShowButtonBar:(BOOL)arg1;
- (void)_reallyShowPeoplePicker;
- (void)_showPeoplePicker;
- (void)_setPersonForCropOverlay:(void *)arg1;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)dismissPopoverControllerAnimated:(BOOL)arg1 shouldRelease:(BOOL)arg2;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)_shouldRespondToButtonBarButtons;
- (void)_handleSlideshowButtonClick;
- (void)playSlideshowClicked:(id)arg1;
- (void)toggleVideoPlay:(id)arg1;
- (void)deleteImageClicked:(id)arg1;
- (void)rotateCurrentPhoto:(id)arg1;
- (void)displayActionMenu:(id)arg1;
- (void)displayPreviousPhoto:(id)arg1;
- (void)displayNextPhoto:(id)arg1;
- (void)displayCropOverlay:(id)arg1;
- (void)cropPhoto:(id)arg1;
- (void)cancelCropPhoto:(id)arg1;
- (void)_sendPhotoUsingSelector:(SEL)arg1 delay:(float)arg2;
- (struct CGRect)_animationDestinationRectForImageSize:(struct CGSize)arg1;
- (void)_reallySendViaEmail:(id)arg1;
- (void)_showMailComposition:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_animateSendToEmail;
- (void)_emailAnimationFinished;
- (void)composeSheetIsReady;
- (void)_finishedSlidingDownImage:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_delayedTranscodeForEmail;
- (double)_durationForCurrentVideo;
- (void)_performSendViaEmail;
- (void)sendViaEmailClicked;
- (void)rotateImageByDegrees:(int)arg1;
//- (void)_rotationAnimation:(id)arg1 finished:(BOOL)arg2 context:(CDStruct_c1a9016d *)arg3;
- (void)assignToContactClicked;
- (void)_performSetWallpaper;
- (void)useAsScreenSaverClicked;
- (void)_exitWallpaperMode;
- (void)_setImageAsHomeScreenClicked:(id)arg1;
- (void)_setImageAsLockScreenClicked:(id)arg1;
- (void)_setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)_cancelSetWallpaperClicked:(id)arg1;
- (void)_showCompositionForPublishingBundleNamed:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_publishToMobileMe;
- (void)_publishToYouTube;
- (void)_showRemakerProgressView;
- (void)_cancelRemaking;
- (void)_transcodeVideoUsingMode:(int)arg1 completionSelector:(SEL)arg2;
- (void)_publishToMobileMeClicked;
- (void)_publishToYouTubeClicked;
- (void)_showMobileMeComposition:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_showYouTubeComposition:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)publishToMobileMeClicked;
- (void)publishToYouTubeClicked;
- (void)_showVideoTooLongAlert;
- (void)_enterVideoEditingMode;
- (void)_showMMSComposeSheet;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)_remakerDidFinish:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)sendViaMMSClicked;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
@property(readonly, nonatomic) BOOL canEditVideo;
- (void)setVideoEditingMode:(BOOL)arg1;
- (void)setVideoEditingMode:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)videoEditingMode;
- (void)_cancelVideoEditingMode:(id)arg1;
- (void)_delayedExitEditingMode;
- (void)_showConfirmationForPassthroughTrimming:(id)arg1;
- (void)_passthroughTrimWasConfirmed:(id)arg1;
- (void)_trimVideo:(id)arg1;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)_showVideoTrimmingNavigationBarWithAnimation:(BOOL)arg1;
- (void)_hideVideoTrimmingNavigationBarWithAnimation:(BOOL)arg1;
- (void)_showNavigationBarAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)photoCountFormatter;
- (id)photoScrollerTitle;
- (void)_showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)_updateButtonBar:(BOOL)arg1;
- (void)_cancelProgressTimer;
- (void)_removeProgressView;
- (void)_publishingAgentDidFinishPublishing:(id)arg1;
- (void)_publishingAgentDidStartPublishing:(id)arg1;
- (void)_updateProgressView;
- (void)updateProgressView;
- (void)updateOverlays;
@property(retain, nonatomic) UIToolbar *buttonBar;
@property(readonly, nonatomic) NSArray *currentToolbarItems;
- (void)_setupButtonBar;
- (id)_itemsForButtonGroup:(int)arg1;
@property(readonly, nonatomic) UIView *remakerContainerView;
- (void)hideToolbarWithDuration:(double)arg1;
- (void)_setAutohidesControls:(BOOL)arg1;
- (void)resetToolbarTimer;
- (void)_resetToolbarTimer:(float)arg1;
- (void)_hideToolbarFired:(id)arg1;
- (void)delayToolbarFade;
- (void)_cancelToolbarTimer;
- (int)_statusBarStyle;
- (void)_setShouldRasterizeOverlays:(BOOL)arg1;
- (void)showOverlaysWithDuration:(float)arg1;
- (void)prepareForCollapse;
- (void)hideOverlays;
- (void)hideOverlaysWithDuration:(float)arg1 hideStatusBar:(BOOL)arg2;
- (void)_overlayAnimationFinished;
- (int)statusBarMode;
- (void)setStatusBarIsLocked:(BOOL)arg1;
- (BOOL)statusBarIsLocked;
- (void)_dismissActionSheetShowOverlays:(BOOL)arg1;
- (BOOL)_popoverIsVisible;
- (void)_dismissPopovers;
- (void)_dismissActionSheet;
- (void)_forceDismissAlertView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_redisplayActionSheet:(id)arg1;
- (id)_actionViewRootView;
- (void)_configureTVOutPageController;
- (void)_stopPlayingOnTVOut;
- (void)_externalScreenGotDisconnected;
- (void)_prepareForTVOut;
- (void)_removeTVOutWindow;
@property(nonatomic) BOOL canShowCopyCallout;
- (void)_longPressRecognized:(id)arg1;
- (int)_getToolBarMode;
- (float)_calculateWidthForVideoScrubber;
- (void)_updateNavigationBar;
- (id)actionItem;
- (id)trashItem;
- (id)rotateItem;
- (id)playSlideshowItem;
- (id)playPauseButton;
- (id)_wallpaperToolbarItems;
- (id)_createToolbarItemsForMode:(int)arg1;
- (id)_createRightCustomViewForNavigationItem;
- (void)showFullScreenPhotoEditTools;
- (id)_trashCanOpenAnimationItems;
- (id)_trashCanCloseAnimationItems;
@property(nonatomic) BOOL canPlaySlideshow; // @synthesize canPlaySlideshow=_canPlaySlideshow;
@property(nonatomic) id <PLAlbumsControllerDelegate> delegate; // @synthesize delegate=_delegate;

@end

