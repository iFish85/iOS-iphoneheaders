/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SPXPCServer;

@interface SDController : NSObject {

	SPXPCServer* _xpcServer;

}
+(id)imageFetchingQueue;
+(void)incrementOutstandingBackgroundJobs;
+(id)backgroundWorkQueue;
+(void)decrementOutstandingBackgroundJobs;
+(id)workQueue;
-(char)keepRunning;
-(void)registerMessageHandlers;
-(void)dealloc;
-(id)init;
@end

