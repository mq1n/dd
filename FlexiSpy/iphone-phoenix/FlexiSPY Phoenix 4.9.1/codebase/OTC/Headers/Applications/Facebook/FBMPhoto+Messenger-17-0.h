/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSDate, NSString, UIImage;
/*
@interface FBMPhoto : NSObject
{
    NSString *_photoAttachmentId;
    NSString *_photoFBID;
    NSString *_imageUploadCandidateStoreKey;
    NSString *_creatorId;
    NSString *_assetURL;
    NSString *_src;
    NSString *_previewSrc;
    UIImage *_image;
    NSDate *_createdTime;
    double _width;
    double _height;
}*/
@interface FBMPhoto (Messenger_17_0)
@property(copy, nonatomic) NSDate *createdTime; // @synthesize createdTime=_createdTime;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *previewSrc; // @synthesize previewSrc=_previewSrc;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *assetURL; // @synthesize assetURL=_assetURL;
@property(copy, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
@property(copy, nonatomic) NSString *imageUploadCandidateStoreKey; // @synthesize imageUploadCandidateStoreKey=_imageUploadCandidateStoreKey;
@property(copy, nonatomic) NSString *photoFBID; // @synthesize photoFBID=_photoFBID;
@property(copy, nonatomic) NSString *photoAttachmentId; // @synthesize photoAttachmentId=_photoAttachmentId;
//- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) float aspectRatio;
@property(readonly, nonatomic) int orientation;
@property(readonly, copy, nonatomic) NSString *largeUrl;
@property(readonly, copy, nonatomic) NSString *smallUrl;

@end

