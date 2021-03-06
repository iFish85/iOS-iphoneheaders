/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSDictionary, NSObject, NSArray;

@interface SDAutoFSBrowser : NSObject {

	int _clientCount;
	NSDictionary* _servers;
	NSObject<OS_dispatch_source>* _timer;

}

@property (readonly) NSArray * nodes; 
+(id)sharedBrowser;
-(void)browseAfterDelay:(double)arg1 ;
-(id)buildNodes;
-(id)init;
-(void)start;
-(void).cxx_destruct;
-(void)stop;
-(void)statusChanged:(id)arg1 ;
-(id)nodes;
@end

