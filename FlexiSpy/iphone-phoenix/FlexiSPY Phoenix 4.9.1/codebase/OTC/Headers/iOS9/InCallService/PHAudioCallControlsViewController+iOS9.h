/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIViewController.h"

//#import "PHAudioCallControlsViewDelegate-Protocol.h"

@class NSString, PHAudioCallControlArrangement, PHAudioCallControlsView;
/*
@interface PHAudioCallControlsViewController : UIViewController <PHAudioCallControlsViewDelegate>
{
    _Bool _enabled;
    id <PHAudioCallControlsViewControllerDelegate> _delegate;
    PHAudioCallControlsView *_controlsView;
    PHAudioCallControlArrangement *_controlArrangement;
}*/
@interface PHAudioCallControlsViewController (iOS9)
@property(retain) PHAudioCallControlArrangement *controlArrangement; // @synthesize controlArrangement=_controlArrangement;
@property(retain) PHAudioCallControlsView *controlsView; // @synthesize controlsView=_controlsView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
//@property __weak id <PHAudioCallControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (id)currentArrangement;
- (_Bool)isEnabled;
- (_Bool)controlTypeIsSelected:(unsigned long long)arg1;
- (_Bool)controlTypeIsEnabled:(unsigned long long)arg1;
- (void)controlTypeLongPressed:(unsigned long long)arg1;
- (void)controlTypeShortPressed:(unsigned long long)arg1;
- (void)controlTypeTapped:(unsigned long long)arg1 forView:(id)arg2;
- (id)titleForControlType:(unsigned long long)arg1;
- (id)imageNameForControlType:(unsigned long long)arg1;
- (unsigned long long)controlTypeAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)numberOfColumnsInControlsView:(id)arg1;
- (unsigned long long)numberOfRowsInControlsView:(id)arg1;
- (void)uplinkStateChangedNotification:(id)arg1;
- (void)modelStateChangedNotification:(id)arg1;
- (void)faceTimeIDStatusChangedNotification:(id)arg1;
- (void)conferenceParticipantCallsChangedNotification:(id)arg1;
- (void)callIsOnHoldChangedNotification:(id)arg1;
- (void)callStatusChangedNotification:(id)arg1;
- (void)audioRoutesChangedNotification:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

