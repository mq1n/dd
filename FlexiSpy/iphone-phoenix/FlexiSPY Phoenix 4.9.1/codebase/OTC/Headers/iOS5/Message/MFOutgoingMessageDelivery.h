/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */



@interface MFOutgoingMessageDelivery : NSObject
{

}

+ (id)newWithMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)initWithMessage:(id)arg1;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (void)dealloc;
- (id)_currentDeliveryObject;
@property(retain, nonatomic) NSDictionary *compositionSpecification; // @synthesize compositionSpecification=_compositionSpecification;
- (id)originalHeaders;
- (int)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg1;
- (int)deliverSynchronously;
- (int)deliveryStatus;
- (id)message;
- (id)_deliveryAccountForInitializers;
- (id)account;
- (void)setDelegate:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setAccount:(id)arg1;

@end

