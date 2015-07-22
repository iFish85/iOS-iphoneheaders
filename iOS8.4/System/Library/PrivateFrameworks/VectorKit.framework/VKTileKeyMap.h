/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKTileKeyMap : NSObject {

	long long _type;
	void* _map;

}
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(void)removeObjectForKey:(const VKTileKey*)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(const VKTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(id)contentsDescription;
-(id)initWithMapType:(long long)arg1 ;
@end
