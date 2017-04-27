/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "UIResponder.h"
//
//#import "UIApplicationDelegate-Protocol.h"

@class TMCoreDataManager, TMDataHelper, TMNoticeManager, TMPushNotificationManager, TMSplitViewController, TMTabBarController, UIWindow;

@interface TMAppDelegate : UIResponder //<UIApplicationDelegate>
{
    TMDataHelper *_dataHelper;
    TMTabBarController *_tabBarController;
    TMSplitViewController *_splitViewController;
    UIWindow *_window;
    TMCoreDataManager *_coreDataManager;
    TMPushNotificationManager *_pushNotificationManager;
    TMNoticeManager *_noticeManager;
    id _registrationObserver;
}

+ (id)sharedAppDelegate;
@property(retain, nonatomic) id registrationObserver; // @synthesize registrationObserver=_registrationObserver;
@property(retain, nonatomic) TMNoticeManager *noticeManager; // @synthesize noticeManager=_noticeManager;
@property(retain, nonatomic) TMPushNotificationManager *pushNotificationManager; // @synthesize pushNotificationManager=_pushNotificationManager;
@property(retain, nonatomic) TMCoreDataManager *coreDataManager; // @synthesize coreDataManager=_coreDataManager;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) TMSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain, nonatomic) TMTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) TMDataHelper *dataHelper; // @synthesize dataHelper=_dataHelper;
//- (void).cxx_destruct;
- (void)deferredConfiguration;
- (void)initialConfiguration:(BOOL)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)handlePushNotification:(id)arg1;
- (void)resetRootViewController;
- (void)_saveLoggedOutState;
- (void)logout;
- (void)login:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;

@end

