/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PLTMessageInfo.h"

#import "NSCoding-Protocol.h"

@class NSNumber;

@interface PLTMessageSendReply : PLTMessageInfo <NSCoding>
{
    NSNumber *_status;
}

+ (id)stringForStatus:(unsigned char)arg1;
+ (id)messageSendReplyWithTimeoutAndSeq:(unsigned int)arg1;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(unsigned long long)arg1 seq:(unsigned int)arg2 status:(unsigned char)arg3;

@end

