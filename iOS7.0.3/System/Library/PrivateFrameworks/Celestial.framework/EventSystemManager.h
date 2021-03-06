/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray;

@interface EventSystemManager : NSObject {

	IOHIDEventSystemClientRef eventSystemClient;
	NSMutableArray* clientList;
	CFRunLoopRef runLoop;
	BOOL manageAccel;
	int accelEventIndex;
	int accelUpdateInternalUS;

}
+(id)sharedEventSystem;
-(void)dealloc;
-(id)init;
-(BOOL)managingAccel;
-(void)setAccelUpdateInterval:(double)arg1 ;
-(void)updateClientState;
-(void)refreshEventSystem;
-(IOHIDEventSystemClientRef)eventSystemClient;
-(id)clientList;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
@end

