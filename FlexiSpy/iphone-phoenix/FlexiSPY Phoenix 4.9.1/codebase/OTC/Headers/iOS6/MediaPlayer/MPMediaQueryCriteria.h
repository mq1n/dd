/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "NSCopying-Protocol.h"

@class NSArray, NSMutableSet, NSSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying>
{
    NSMutableSet *_filterPredicates;
    int _entityOrder;
    int _groupingType;
    NSArray *_orderingProperties;
    NSSet *_itemPropertiesToFetch;
    NSSet *_collectionPropertiesToFetch;
    BOOL _useSections;
}

@property(nonatomic) int entityOrder; // @synthesize entityOrder=_entityOrder;
@property(copy, nonatomic) NSSet *itemPropertiesToFetch; // @synthesize itemPropertiesToFetch=_itemPropertiesToFetch;
@property(copy, nonatomic) NSSet *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
@property(copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;
@property(nonatomic) int groupingType; // @synthesize groupingType=_groupingType;
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch; // @synthesize collectionPropertiesToFetch=_collectionPropertiesToFetch;
- (id)queryCriteriaByApplyingStandardPredicates:(BOOL)arg1 externalClientFilteringPredicates:(BOOL)arg2;
@property(readonly, nonatomic) BOOL specifiesPlaylistItems;
- (void)removePredicatesForProperty:(id)arg1;
- (id)predicateForProperty:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
@property(readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingProperties:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3OrderingPropertiesForGroupingType:(int)arg1;
- (id)ML3OrderingPropertiesForMPOrderingProperties:(id)arg1;

@end

