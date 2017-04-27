//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MediaSource, NSArray, NSString;

@interface Item (Actions)
+ (id)keyWithGroupId:(id)arg1 itemId:(id)arg2;
+ (id)itemWithGroupId:(id)arg1 itemId:(id)arg2;
@property(readonly, nonatomic) MediaSource *gifMediaSource;
@property(readonly, nonatomic) NSArray *gifResources;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (void)setValue:(id)arg1 forExtensionKey:(id)arg2;
- (void)remove;
@property(nonatomic) _Bool likedByMe;
- (void)addMedia:(id)arg1;
- (void)setMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) int likeCount;
@property(readonly) Class superclass;
@end

