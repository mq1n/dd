/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "MTLModel.h"

//#import "MTLJSONSerializing-Protocol.h"

@class VIBFormattedMessageAction;

@interface VIBFormattedMessageElementAttributes : NSObject //MTLModel <MTLJSONSerializing>
{
    unsigned int _type;
    unsigned int _elementWidth;
    VIBFormattedMessageAction *_action;
}

+ (id)typeEnumToString:(unsigned int)arg1;
+ (id)jsonFromAttributes:(id)arg1;
+ (id)elementAttributesFromJSON:(id)arg1;
+ (id)elementWidthJSONTransformer;
+ (id)actionJSONTransformer;
+ (id)typeJSONTransformer;
+ (Class)classForParsingJSONDictionary:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) VIBFormattedMessageAction *action; // @synthesize action=_action;
@property(nonatomic) unsigned int elementWidth; // @synthesize elementWidth=_elementWidth;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
//- (void).cxx_destruct;
- (id)description;
- (void)setNilValueForKey:(id)arg1;
- (id)init;

@end

