/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"

//@class NSString;

@interface BBContent : NSObject <NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
}

+ (id)contentWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToContent:(id)arg1;
- (void)dealloc;

@end

