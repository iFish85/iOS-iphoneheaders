/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSMergePolicy : NSObject {

	unsigned _type;
	void* _reserved2;
	void* _reserved3;

}

@property (readonly) unsigned mergeType; 
+(char)accessInstanceVariablesDirectly;
+(void)load;
-(unsigned)mergeType;
-(void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2 ;
-(void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2 ;
-(void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(char)arg5 ;
-(void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2 ;
-(char)resolveConflict:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithMergeType:(unsigned)arg1 ;
-(char)resolveConflicts:(id)arg1 error:(id*)arg2 ;
@end

