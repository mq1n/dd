/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GBMAttachment.h"

@class GBMVideoLoader;

@interface GBMVideoAttachment : GBMAttachment
{
    GBMVideoLoader *videoLoader_;
}

@property(readonly, nonatomic) GBMVideoLoader *videoLoader; // @synthesize videoLoader=videoLoader_;
//- (void).cxx_destruct;
- (id)initWithVideoLoader:(id)arg1;
- (id)initWithVideo:(id)arg1;

@end

