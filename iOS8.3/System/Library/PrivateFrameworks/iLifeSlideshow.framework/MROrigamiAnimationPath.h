/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MROrigamiAnimationPath : NSObject {

	id* _curves;
	float* _keyTimes;
	float* _values;
	int _length;
	float _timeFirstAtRestValue;

}

@property (nonatomic,readonly) float timeFirstAtRestValue;              //@synthesize timeFirstAtRestValue=_timeFirstAtRestValue - In the implementation block
-(void)dealloc;
-(id)initWithSwingType:(int)arg1 ;
-(float)valueAtTime:(float)arg1 ;
-(float)timeFirstAtRestValue;
-(id)initWithControlPoints:(double*)arg1 keyTimes:(float*)arg2 values:(float*)arg3 length:(int)arg4 ;
@end
