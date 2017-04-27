/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "TMCustomHTTPRequestHeaderProviderDelegate-Protocol.h"
//#import "TMNoticeManagerDelegate-Protocol.h"

@class NSArray, NSString, TMAPIClient, TMCustomHTTPRequestHeaderProvider, TMDataHelper, TMLegacyLoggedOutUserController, TMNoticeManager, TMOutgoingRequestEngine, TMPreferences, TMPushNotificationRegistrar, TMUserAuthenticationController;

@interface TMAppUserAuthenticationController : NSObject //<TMNoticeManagerDelegate, TMCustomHTTPRequestHeaderProviderDelegate>
{
    TMUserAuthenticationController *_userAuthenticationController;
    TMDataHelper *_dataHelper;
    TMPreferences *_preferences;
    TMAPIClient *_APIClient;
    TMOutgoingRequestEngine *_outgoingRequestEngine;
    TMNoticeManager *_noticeManager;
    TMPushNotificationRegistrar *_pushNotificationRegistrar;
    TMLegacyLoggedOutUserController *_legacyLoggedOutUserController;
    TMCustomHTTPRequestHeaderProvider *_HTTPRequestHeaderProvider;
    NSArray *_APIClients;
//    id <TMAppUserAuthenticationControllerDelegate> _delegate;
}

//@property(nonatomic) __weak id <TMAppUserAuthenticationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *APIClients; // @synthesize APIClients=_APIClients;
@property(retain, nonatomic) TMCustomHTTPRequestHeaderProvider *HTTPRequestHeaderProvider; // @synthesize HTTPRequestHeaderProvider=_HTTPRequestHeaderProvider;
@property(retain, nonatomic) TMLegacyLoggedOutUserController *legacyLoggedOutUserController; // @synthesize legacyLoggedOutUserController=_legacyLoggedOutUserController;
@property(retain, nonatomic) TMPushNotificationRegistrar *pushNotificationRegistrar; // @synthesize pushNotificationRegistrar=_pushNotificationRegistrar;
@property(retain, nonatomic) TMNoticeManager *noticeManager; // @synthesize noticeManager=_noticeManager;
@property(retain, nonatomic) TMOutgoingRequestEngine *outgoingRequestEngine; // @synthesize outgoingRequestEngine=_outgoingRequestEngine;
@property(retain, nonatomic) TMAPIClient *APIClient; // @synthesize APIClient=_APIClient;
@property(retain, nonatomic) TMPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) TMDataHelper *dataHelper; // @synthesize dataHelper=_dataHelper;
@property(retain, nonatomic) TMUserAuthenticationController *userAuthenticationController; // @synthesize userAuthenticationController=_userAuthenticationController;
//- (void).cxx_destruct;
- (void)dealloc;
- (void)customHeaderProviderDidUpdateHeaders:(id)arg1;
- (void)noticeManagerReceivedNoticeWithIdentifier:(id)arg1 message:(id)arg2;
- (void)configureAPIClientsWithOAuthTokens;
- (void)configureAPIClientsWithAppCredentials;
- (void)clearAPIClientOAuthTokens;
- (void)configureApplicationAfterUserLogin;
- (void)accountForChangesInLoginState;
- (void)captureLoginState;
- (void)processLogout;
- (void)processRegistration;
- (void)processLoginWithBlogToFollow:(id)arg1 postToLike:(id)arg2;
- (void)registerForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)updateDatabaseWithLoggedOutUserStateValues;
@property(readonly, nonatomic) BOOL hasLoggedOutUser;
@property(readonly, nonatomic) BOOL hasLoggedInUser;
- (id)init;
- (id)initWithApplication:(id)arg1 preferences:(id)arg2 APIClient:(id)arg3 outgoingRequestEngine:(id)arg4 dataHelper:(id)arg5 customHeaderProvider:(id)arg6 loggedOutUserController:(id)arg7 pushNotificationRegistrar:(id)arg8 noticeManager:(id)arg9 delegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

