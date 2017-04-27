/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PHRecentCall.h"

@class NSMutableArray;

@interface PHRecentMultiCall : PHRecentCall
{
    NSMutableArray *_callOccurrences;
    NSMutableArray *_underlyingCTCalls;
}

+ (id)callByCoalescing:(id)arg1 withPreviousCall:(id)arg2;
- (id)_callOccurrencesTestDataLongSingle;
- (id)_callOccurrencesTestDataIncomingAndOutgoing;
- (id)_callOccurrencesTestDataIncomingOnly;
- (id)_callOccurrencesTestDataComplex;
- (BOOL)representsCallAtDate:(id)arg1;
- (void)deleteUnderlyingCTCall;
- (id)callOccurrences;
- (id)occurrenceAtIndex:(int)arg1;
- (int)numberOfOccurrences;
- (void)addOccurrencesFromArray:(id)arg1;
- (void)addOccurrence:(id)arg1 type:(int)arg2 category:(int)arg3 duration:(double)arg4 bytesOfDataUsed:(double)arg5;
- (void)addUnderlyingCTCalls:(id)arg1;
- (id)underlyingCTCalls;
- (void)dealloc;

@end

