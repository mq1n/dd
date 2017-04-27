/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BBMElement.h"

@class NSString;

@interface BBMGenLocation : BBMElement
{
    NSString *_altitude;
    NSString *_city;
    NSString *_country;
    NSString *_horizontalAccuracy;
    NSString *_identifier;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_name;
    NSString *_postalCode;
    NSString *_state;
    NSString *_street;
    NSString *_uiId;
}

+ (id)primaryKeyDictionaryWithIdentifier:(id)arg1;
+ (id)elementWithIdentifier:(id)arg1 andParent:(id)arg2;
+ (id)identifierOfElement:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic, getter=getUiId) NSString *uiId; // @synthesize uiId=_uiId;
@property(retain, nonatomic, getter=getStreet) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic, getter=getState) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic, getter=getPostalCode) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic, getter=getName) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic, getter=getLongitude) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic, getter=getLatitude) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic, getter=getIdentifier) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, getter=getHorizontalAccuracy) NSString *horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(retain, nonatomic, getter=getCountry) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic, getter=getCity) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic, getter=getAltitude) NSString *altitude; // @synthesize altitude=_altitude;
//- (void).cxx_destruct;
- (id)primaryKey;
- (id)debugDescription;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)reset;


// BBM version 2.5.0
@property(retain, nonatomic, getter=getObjectName) NSString* objectName;


@end

