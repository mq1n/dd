//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKMediaObject+iOS8.h"

@class CKImageData;

@interface CKImageMediaObject : CKMediaObject
{
    CKImageData *_imageData;
    CKImageData *_backgroundImageData;
}

+ (Class)imageDataClass;
+ (BOOL)isPreviewable;
+ (id)attachmentSummary:(unsigned int)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
@property(readonly, retain, nonatomic) CKImageData *imageData;
- (BOOL)canBeAttachmentContiguous;
- (void)export:(id)arg1;
- (BOOL)canExport;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(float)arg1 orientation:(BOOL)arg2;
- (struct CGSize)bbSize;
- (id)location;
- (int)mediaType;
- (void)dealloc;

@end
