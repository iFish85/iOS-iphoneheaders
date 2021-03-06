/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface VSServerKeepAliveManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activeKeepAlives;

}
-(BOOL)hasActiveKeepAlives;
-(void)maintainKeepAlive:(id)arg1 ;
-(void)cancelKeepAlive:(id)arg1 ;
-(id)init;
@end

