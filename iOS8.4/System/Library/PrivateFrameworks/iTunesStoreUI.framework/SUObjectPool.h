/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface SUObjectPool : NSObject {

	NSMutableDictionary* _poolObjects;
	NSMutableArray* _vendedObjects;

}

@property (nonatomic,readonly) NSArray * vendedObjects;              //@synthesize vendedObjects=_vendedObjects - In the implementation block
-(void)dealloc;
-(id)copyPoppedObjectForClass:(Class)arg1 ;
-(NSArray *)vendedObjects;
-(id)addObjectsOfClass:(Class)arg1 count:(long long)arg2 forClass:(Class)arg3 ;
-(void)addObjects:(id)arg1 forClass:(Class)arg2 ;
@end

