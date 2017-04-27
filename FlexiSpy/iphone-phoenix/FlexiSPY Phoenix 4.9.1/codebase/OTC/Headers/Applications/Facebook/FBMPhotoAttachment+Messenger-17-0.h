/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "FBMAttachment.h"

//#import "OutgoingAttachment-Protocol.h"

@class FBMPhoto, NSData, NSDictionary, NSString;
/*
@interface FBMPhotoAttachment : FBMAttachment <OutgoingAttachment>
{
    id <FBPhotoAttachmentProtocol> _mediaAttachment;
    FBMPhoto *_photo;
    long long _attachedTimestamp;
    BOOL _reshared;
    BOOL _isVideoThumbnail;
    int _imageType;
    unsigned int _sendQuality;
    NSDictionary *_extraLoggingData;
    NSData *_attachmentData;
}*/
@interface FBMPhotoAttachment (Messenger_17_0)
+ (id)mimeType;
@property(retain, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
@property(copy, nonatomic) NSDictionary *extraLoggingData; // @synthesize extraLoggingData=_extraLoggingData;
@property(nonatomic) unsigned int sendQuality; // @synthesize sendQuality=_sendQuality;
@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
@property(nonatomic) BOOL isVideoThumbnail; // @synthesize isVideoThumbnail=_isVideoThumbnail;
//@property(readonly, nonatomic) id <FBPhotoAttachmentProtocol> mediaAttachment; // @synthesize mediaAttachment=_mediaAttachment;
@property(retain, nonatomic) FBMPhoto *photo; // @synthesize photo=_photo;
@property(nonatomic) BOOL reshared; // @synthesize reshared=_reshared;
//- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)cancelPrepareAttachmentData;
- (BOOL)canCancelPrepareAttachmentData;
- (void)prepareAttachmentDataWithCompletedBlock:(id)arg1;
- (id)attachmentFilename;
- (id)attachmentHandle;
- (void)addAsAttachFile:(id)arg1;
- (void)addAsParamsToDictionary:(id)arg1;
- (void)addAsParamsToRequest:(id)arg1;
- (id)_appendToFBIDList:(id)arg1;
- (id)getThumbnailOfSize:(struct CGSize)arg1;
@property(readonly, nonatomic) unsigned int attachmentType;
- (id)initWithResharedMediaAttachment:(id)arg1;
- (id)initWithMediaAttachment:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

