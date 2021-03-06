/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface NACEventThrottler : NSObject {

	double _lastUpdateTime;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _eventBlock;
	id _value;
	double _minimumDelay;

}

@property (nonatomic,copy) id eventBlock;                      //@synthesize eventBlock=_eventBlock - In the implementation block
@property (assign,nonatomic) double minimumDelay;              //@synthesize minimumDelay=_minimumDelay - In the implementation block
@property (nonatomic,retain) id value;                         //@synthesize value=_value - In the implementation block
-(void)setEventBlock:(id)arg1 ;
-(id)eventBlock;
-(void)cancel;
-(id)init;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setMinimumDelay:(double)arg1 ;
-(void)_fire;
-(double)minimumDelay;
@end

