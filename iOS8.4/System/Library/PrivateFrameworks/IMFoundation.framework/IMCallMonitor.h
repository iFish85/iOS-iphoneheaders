/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface IMCallMonitor : NSObject {

	id _callCenter;
	BOOL _wasOnCall;
	NSDate* _lastCallDate;

}

@property (nonatomic,readonly) BOOL isOnCall; 
@property (nonatomic,retain,readonly) NSDate * dateLastCallEnded;              //@synthesize lastCallDate=_lastCallDate - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)isOnCall;
-(NSDate *)dateLastCallEnded;
@end
