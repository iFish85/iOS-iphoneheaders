/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSFastEnumeration.h>

@class NSMutableDictionary;

@interface TSCH3DDictionaryOfSet : NSObject <NSFastEnumeration> {

	NSMutableDictionary* mSets;

}
+(id)dictionaryWithMutableDictionaryClass:(Class)arg1 ;
+(id)dictionary;
-(id)initWithMutableDictionaryClass:(Class)arg1 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS23*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)objectsForKey:(id)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
@end
