/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import <ChatKit/CKEntity.h>

@class NSArray;

@interface CKMadridEntity : NSObject //CKEntity
{
    NSArray *_imHandles;
    BOOL _shared;
}

+ (id)_sharedMadridEntities;
+ (id)copyAllEntities;
+ (void)resetAllSharedEntityCaches;
- (id)initWithIMHandle:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)_resetIMHandles;
- (void)_handleActiveMadridAccountsDidChange:(id)arg1;
- (void)_setOtherIMHandlesForIMHandle:(id)arg1;
- (id)imHandles;
- (id)defaultIMHandle;
- (void *)abRecord;
- (int)identifier;
- (id)name;
- (int)propertyType;
- (id)rawAddress;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (struct __CFPhoneNumber *)phoneNumberRef;
- (void)_addToShared;
- (void)_removeFromShared;
- (id)_existingEntityFromSharedForIMHandle:(id)arg1;

@end

