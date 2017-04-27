//
//  TestAppAppDelegate.m
//  TestApp
//
//  Created by Syam Sasidharan on 11/3/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import "TestAppAppDelegate.h"
#import "TestAppViewController.h"

@implementation TestAppAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {	
	
	// Override point for customization after app launch	
    [window addSubview:viewController.view];
	[window makeKeyAndVisible];
    
    TelephonyNotificationManagerImpl *manager = [[TelephonyNotificationManagerImpl alloc] init];
    
    [manager startListeningToTelephonyNotifications];
    [viewController addListeners:manager];
        
}


- (void)dealloc {
    [viewController release];
	[window release];
	[super dealloc];
}


@end
