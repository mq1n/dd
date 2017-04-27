/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "NSCacheDelegate-Protocol.h"

@class NSMutableDictionary, ResumableDownload;
/*
@interface StickersManager : NSObject <NSCacheDelegate>
{
    struct dispatch_queue_s *stickersQueue;
    struct dispatch_queue_s *extractionQueue;
    NSMutableDictionary *attemptsForFailedPackages;
    BOOL isImportingEmbeddedStickers;
    ResumableDownload *stickersPackageDownload;
    NSMutableDictionary *singleStickersDownloads;
    NSMutableDictionary *stickerDataCache;
    float stickerPackageDownloadProgress;
    BOOL installPackageProcessInProgress;
    BOOL _queueOperationsCancelled;
}*/
@interface StickersManager (Viber40)
+ (void)finalizeDownloadedSticker:(id)arg1 inQueue:(struct dispatch_queue_s *)arg2;
+ (void)finalizeDownloadedStickerWithID:(id)arg1 sourcePath:(id)arg2 inQueue:(struct dispatch_queue_s *)arg3;
+ (BOOL)extractStickersPackage:(id)arg1;
+ (id)stickerIDFromFileName:(id)arg1;
+ (id)stickerPackageIconPath:(id)arg1;
+ (id)stickersPackageTempDir:(id)arg1;
+ (id)stickersPackagePath:(id)arg1;
+ (id)singleStickerUrlWithID:(id)arg1;
+ (id)stickersPackageUrl:(id)arg1;
+ (id)packageIconResolutionQualifier;
+ (id)resolutionQualifier;
+ (id)pathForStickerOutlineWithStickerPath:(id)arg1;
+ (id)pathForStickerOutlineWithID:(id)arg1;
+ (id)pathForStickerWithID:(id)arg1;
+ (id)stickerDir:(id)arg1;
+ (id)packageDir:(id)arg1;
+ (id)stickersDir;
+ (id)tempPathForSingleStickerWithID:(id)arg1;
+ (id)packageFileNameWithID:(id)arg1;
+ (id)packageNameWithID:(id)arg1;
+ (id)packageIDForName:(id)arg1;
+ (id)packageIDForSticker:(id)arg1;
+ (id)iconURLForPackageWithID:(id)arg1;
+ (id)fileNameForIconWithPackageID:(id)arg1;
+ (id)iconNameForPackageWithID:(id)arg1;
+ (id)fileNameForOutlineWithID:(id)arg1;
+ (id)fileNameForStickerWithID:(id)arg1;
+ (id)nameForOutlineWithID:(id)arg1;
+ (id)nameForStickerWithID:(id)arg1;
+ (id)stickersMarketURLPageForStickerPackage:(id)arg1;
+ (void)moveDefaultPackageToLowRes;
+ (id)stickersMarketURL;
+ (void)createStickesDir;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedStickersManager;
@property BOOL queueOperationsCancelled; // @synthesize queueOperationsCancelled=_queueOperationsCancelled;
@property(nonatomic) BOOL installPackageProcessInProgress; // @synthesize installPackageProcessInProgress;
@property(nonatomic) float stickerPackageDownloadProgress; // @synthesize stickerPackageDownloadProgress;
@property(retain, nonatomic) NSMutableDictionary *stickerDataCache; // @synthesize stickerDataCache;
@property(retain, nonatomic) NSMutableDictionary *singleStickersDownloads; // @synthesize singleStickersDownloads;
@property(retain, nonatomic) ResumableDownload *stickersPackageDownload; // @synthesize stickersPackageDownload;
//- (void).cxx_destruct;
- (void)cleanupDownloadedStickers;
- (id)iconForPackageWithID:(id)arg1;
- (BOOL)isStickerAvailable:(id)arg1;
- (BOOL)isStickerDownloadFailed:(id)arg1;
- (BOOL)isStickerDownloading:(id)arg1;
- (struct CGSize)getStickerSize:(id)arg1;
- (id)getDefaultOutline;
- (id)getDefaultSticker;
- (id)stickerWithID:(id)arg1;
- (void)downloadStickerWithID:(id)arg1;
- (void)stickerDownloadDidFail:(id)arg1;
- (void)finalizeSingleStickerDownload:(id)arg1;
- (void)resetStickersDatabase;
- (void)checkStickersResolution;
- (void)resumeDownload;
- (void)suspendDownload;
- (void)tryToLaunchInstallProcess;
- (void)downloadStickers;
- (void)packageInstallationCompleted:(id)arg1 success:(BOOL)arg2;
- (void)installNextPackage;
- (void)setStatus:(int)arg1 forPackage:(id)arg2;
- (void)startPackageDownload:(id)arg1;
- (BOOL)downloadPackage:(id)arg1;
- (void)onIconDownloaded:(id)arg1;
- (void)extractPackage:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)extractPackage:(id)arg1;
- (void)finalizePackage:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (void)internetConnectionStateDidChange;
- (void)dbManagerCreated;
- (void)connectedToService;
- (void)tryToDownloadStickers;
- (void)installPromotionPackages;
- (void)importEmbededPackagesToDB;
- (void)clearDBMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

