/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface _PFArray : NSArray {

	int _cd_rc;
	unsigned _count;
	id* _array;
	struct {
		unsigned shouldRetain : 1;
		unsigned shouldRelease : 1;
		unsigned useExtendedRelease : 1;
		unsigned freeBackingArray : 1;
		unsigned copyBackingArray : 1;
		unsigned managedObjects : 1;
		unsigned _RESERVED : 27;
	}  _flags;

}
+(char)accessInstanceVariablesDirectly;
+(void)initialize;
-(void)getObjects:(id*)arg1 ;
-(unsigned)_flags;
-(id)initWithObjects:(id*)arg1 count:(unsigned)arg2 andFlags:(unsigned)arg3 ;
-(id)newArrayFromObjectIDs;
-(id*)_objectsPointer;
-(id)arrayFromObjectIDs;
-(unsigned)indexOfManagedObjectForObjectID:(id)arg1 ;
-(void)_setShouldRelease:(char)arg1 ;
-(void)_setShouldUseExtendedRelease:(char)arg1 ;
-(id)retain;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(unsigned)retainCount;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)managedObjectIDAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(oneway void)release;
@end
