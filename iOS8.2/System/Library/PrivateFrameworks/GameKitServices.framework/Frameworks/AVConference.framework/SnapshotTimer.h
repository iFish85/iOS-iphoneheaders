/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SnapshotTimer : NSObject {

	char taskIsComplete;

}

@property (assign,nonatomic) char taskIsComplete; 
+(void)takeSnapshotForTask:(id)arg1 ;
-(id)init;
-(void)checkinWithTimeout:(double)arg1 forTask:(id)arg2 ;
-(void)checkout;
-(char)taskIsComplete;
-(void)setTaskIsComplete:(char)arg1 ;
@end

