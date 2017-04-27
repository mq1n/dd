/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "PSListController.h"

//#import "RadiosPreferencesDelegate-Protocol.h"
//#import "UIActionSheetDelegate-Protocol.h"

@class EAAccessory, NSArray, NSDictionary, NSMutableSet, /*NSObject<OS_dispatch_queue>,*/ NSString, PSSpecifier, UIActionSheet, UIView/*, UIViewController<PSController>*/;

@interface PrefsListController : NSObject//PSListController <UIActionSheetDelegate, RadiosPreferencesDelegate>
{
//    UIViewController<PSController> *_categoryController;
    BOOL _didFirstLoad;
    EAAccessory *_speakerAccessory;
    PSSpecifier *_eqSpecifier;
    NSArray *_thirdPartySpecifiers;
    NSDictionary *_movedThirdPartySpecifiers;
    BOOL _victoriaCapable;
    PSSpecifier *_victoriaSpecifier;
    UIView *_firstEtchLine;
    UIView *_lastEtchLine;
    BOOL _notificationState;
    PSSpecifier *_notificationsSpecifier;
    PSSpecifier *_castleSpecifier;
    PSSpecifier *_twitterSpecifier;
    PSSpecifier *_facebookSpecifier;
    PSSpecifier *_weiboSpecifier;
    PSSpecifier *_messagesSpecifier;
    PSSpecifier *_faceTimeSpecifier;
    PSSpecifier *_carrierSelectionSpecifier;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_newsstandSettingsSpecifier;
    PSSpecifier *_doNotDisturbSpecifier;
    BOOL _suppressControllerAnimationForExpiry;
    BOOL _wifiValueIsClean;
    BOOL _bluetoothValueIsClean;
    NSArray *_originalSpecifiers;
    NSMutableSet *_originalDisplayIdentifiers;
//    NSObject<OS_dispatch_queue> *_iconCacheQueue;
    NSDictionary *_iconCache;
    UIActionSheet *_airplaneSheet;
    NSString *_bluetoothString;
    NSString *_wifiString;
}

+ (void)setAirplaneMode:(BOOL)arg1;
+ (BOOL)airplaneMode;
+ (id)radiosPreferences;
@property(copy, nonatomic) NSString *wifiString; // @synthesize wifiString=_wifiString;
@property(copy, nonatomic) NSString *bluetoothString; // @synthesize bluetoothString=_bluetoothString;
//@property(retain, nonatomic) UIViewController<PSController> *categoryController; // @synthesize categoryController=_categoryController;
- (void)bluetoothPowerChanged:(id)arg1;
- (id)bluetoothValue:(id)arg1;
- (void)bluetoothValueFetch:(id)arg1;
- (void)iMessageSupportMayHaveChanged;
- (void)lazyLoadSpecialBundleForSpecifier:(id)arg1;
- (id)getCellularDataForSpecifier:(id)arg1;
- (void)airplaneModeChanged;
- (BOOL)_isHostingPersonalHotspot;
- (id)phoneItemString:(id)arg1;
- (void)updatePhoneItem:(BOOL)arg1;
- (BOOL)phoneSpecifierEnabled:(id)arg1;
- (void)setupPhoneSpecifier:(id)arg1;
- (id)getAirplaneMode:(id)arg1;
- (void)confirmationSpecifierCancelled:(id)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)_setAirplaneMode:(BOOL)arg1;
- (void)setAirplaneMode:(id)arg1 specifier:(id)arg2;
- (void)airplaneModeChangedExternally;
- (id)getNotificationsEnabled:(id)arg1;
- (void)setupAppleAccountCategory:(id)arg1;
- (void)appleAccountsDidChange;
- (void)_setupiCloudSpecifier:(id)arg1;
- (void)setDoNotDisturb:(id)arg1 specifier:(id)arg2;
- (id)doNotDisturb:(id)arg1;
- (void)setDNDDetailMessage;
- (BOOL)isDNDScheduled;
- (void)_reloadDNDTopLevel;
- (void)MISStateChangedNotification:(id)arg1;
- (void)updatePersonalHotspotWithState:(int)arg1 andReason:(int)arg2;
- (id)getTetheringStatus:(id)arg1;
- (id)wifiNetwork:(id)arg1;
- (void)wifiNetworkFetch:(id)arg1;
- (void)updateWifi;
- (void)willEnterForeground;
- (void)updateShowsCarrierSettingsMenuVisibility;
- (void)setShowsCarrierSettingsMenu:(BOOL)arg1;
- (void)networkChanged;
- (id)currentNetwork:(id)arg1;
- (void)updateNewsstandVisibility;
- (id)tableBackgroundColor;
- (Class)backgroundViewClass;
- (void)_localeChanged;
- (void)_newCarrierNotification;
- (void)_simStatusChanged:(struct __CFString *)arg1;
- (id)specifierForBundle:(id)arg1;
- (id)specifierForID:(id)arg1;
- (void)loadPPTTestSpecifiers:(int)arg1;
- (void)_loadThirdPartySpecifiers;
- (id)specifiers;
- (void)updateWeiboState;
- (void)updateAccountSpecifiers;
- (void)updateRestrictedSettings;
- (void)displayIdentifiersChanged;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)refresh3rdPartyBundles;
- (void)insertMovedThirdPartySpecifiersAtStartIndex:(unsigned int)arg1 usingInsertBlock:(id)arg2 andExistenceBlock:(void)arg3;
- (id)tableBackgroundImage;
- (id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2;
- (id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(BOOL)arg3;
- (BOOL)_showCarrier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidUnload;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)identifierForSelectedIndex;
- (void)selectGeneralCategory;
- (void)suppressControllerAnimationForExpiry;
- (int)tableStyle;
- (void)checkDeveloperSettingsState;
- (void)dealloc;
- (id)init;
- (void)rerootNavigationController;
- (void)viewWillAppear:(BOOL)arg1;
- (void)reloadSpecifiers;
- (void)clearCache;
- (void)setSpeakerAccessory:(id)arg1 eqAvailable:(BOOL)arg2;

@end

