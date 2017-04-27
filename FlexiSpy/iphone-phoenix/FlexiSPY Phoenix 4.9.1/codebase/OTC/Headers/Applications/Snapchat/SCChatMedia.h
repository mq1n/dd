//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMessage.h"

//#import "MediaDataSource.h"
//#import "MediaDelegate.h"
//#import "MediaImageProcessingDelegate.h"

@class Media, NSString, NSURL;

@interface SCChatMedia : SCBaseMessage //<MediaImageProcessingDelegate, MediaDataSource, MediaDelegate>
{
//    BOOL _failedToSend;
//    BOOL _sending;
    BOOL _didRetryLoadingMedia;
    Media *_media;
    float _height;
    NSString *_mediaId;
    int _mediaState;
//    id <SCChatMediaUploadingDelegate> _uploadingDelegate;
    NSURL *_url;
    int _state;
    float _width;
    NSString *_iv;
    NSString *_key;
    struct CGSize _size;
}

+ (id)actionTextForChatMedia:(id)arg1;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(nonatomic) BOOL didRetryLoadingMedia; // @synthesize didRetryLoadingMedia=_didRetryLoadingMedia;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
//@property(nonatomic) __weak id <SCChatMediaUploadingDelegate> uploadingDelegate; // @synthesize uploadingDelegate=_uploadingDelegate;
@property(nonatomic) int mediaState; // @synthesize mediaState=_mediaState;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(nonatomic) float height; // @synthesize height=_height;
- (void)setSending:(BOOL)arg1;
- (BOOL)isSending;
- (void)setFailedToSend:(BOOL)arg1;
//- (void).cxx_destruct;
- (BOOL)didFailToSend;
- (BOOL)shouldNotifyUserOfFailure;
- (id)notificationType;
- (id)sendJSON;
- (BOOL)isInvalidAfterUnarchiving;
- (BOOL)persistSavedData;
- (BOOL)isImage;
- (BOOL)isVideoWithSound;
- (BOOL)isVideo;
- (BOOL)isBroadcastForMedia:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1;
- (void)fetchMediaIsLoadingForMedia:(id)arg1;
- (id)endpointParamsForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (BOOL)encrypt;
- (BOOL)persist;
- (BOOL)isSelfEncrypted;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (id)cacheId;
- (void)mediaFailedToLoadFromCache;
- (float)heightToWidthRatio;
- (BOOL)isLoaded;
- (void)fetchMedia;
- (void)sentWithSuccess:(BOOL)arg1 response:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (void)setDataToUpload:(id)arg1;
//- (CDUnknownBlockType)uploadFailureBlock;
//- (CDUnknownBlockType)uploadSuccessBlock;
- (void)upload;
- (void)updateWithMessage:(id)arg1;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
- (id)initWithSender:(id)arg1 recipient:(id)arg2;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;

/* For Snapchat 9.1.3, SCChatMedia has supperclass as SCInlineChatContentMessage. 
 The below method belongs to SCInlineChatContentMessage
 */
- (void)fetchMediaUserInitiated:(BOOL)arg1;


@end

