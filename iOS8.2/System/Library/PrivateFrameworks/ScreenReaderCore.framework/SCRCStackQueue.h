/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCStackQueue : NSObject {

	SCRCStackNode* _firstNode;
	SCRCStackNode* _lastNode;
	unsigned _count;

}
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(id)description;
-(char)isEmpty;
-(id)objectEnumerator;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(id)dequeueObjectRetained;
-(id)popObjectRetained;
-(void)pushArray:(id)arg1 ;
-(id)topObject;
@end
