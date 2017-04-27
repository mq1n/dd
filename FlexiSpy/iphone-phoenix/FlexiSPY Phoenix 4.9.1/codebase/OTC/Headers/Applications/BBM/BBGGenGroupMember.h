/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BBMElement.h"

@class BBGGroupContact, NSNumber, NSString;

@interface BBGGenGroupMember : BBMElement
{
    NSNumber *_isAdmin;
    NSNumber *_noLongerMember;
    NSString *_uri;
    BBGGroupContact *_resolvedUri;
}

+ (id)primaryKeyDictionaryWithIdentifier:(id)arg1;
+ (id)elementWithIdentifier:(id)arg1 andParent:(id)arg2;
+ (id)identifierOfElement:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) BBGGroupContact *resolvedUri; // @synthesize resolvedUri=_resolvedUri;
@property(retain, nonatomic, getter=getUri) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic, getter=isNoLongerMember) NSNumber *noLongerMember; // @synthesize noLongerMember=_noLongerMember;
@property(retain, nonatomic) NSNumber *isAdmin; // @synthesize isAdmin=_isAdmin;
//- (void).cxx_destruct;
- (id)primaryKey;
- (id)debugDescription;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)reset;

@end

