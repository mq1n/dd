/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "ApiRunner.h"
//
//#import "FBRequestDelegate-Protocol.h"
//#import "PhotoUploaderDelegate-Protocol.h"
//#import "ThreadFetcherDelegate-Protocol.h"

@class FBMThread, NSDictionary, /*NSObject<ThreadCreatorDelegate>,*/ NSString, PhotoUploader, ThreadFetcher, ThreadMessage;

@interface ThreadCreator : NSObject//ApiRunner <PhotoUploaderDelegate, FBRequestDelegate, ThreadFetcherDelegate>
{
    NSString *_name;
    ThreadMessage *_message;
    NSDictionary *_membersToAdd;
    FBMThread *_newThread;
    PhotoUploader *_photoUploader;
    ThreadFetcher *_threadFetcher;
//	NSObject<ThreadCreatorDelegate> *_delegate;
}

//@property(nonatomic) NSObject<ThreadCreatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)threadFetcher:(id)arg1 thread:(id)arg2 couldNotFetchThread:(id)arg3;
- (void)threadFetcher:(id)arg1 didFetchThread:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)couldNotUploadPhoto:(id)arg1;
- (void)didUploadPhoto:(id)arg1;
- (void)doCancel;
- (void)doSend;
- (void)didFailWithError:(id)arg1;
- (void)didSucceed;
- (void)fetchThread;
- (void)createThread;
- (void)uploadPhoto:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 message:(id)arg2 membersToAdd:(id)arg3 delegate:(id)arg4;

@end

