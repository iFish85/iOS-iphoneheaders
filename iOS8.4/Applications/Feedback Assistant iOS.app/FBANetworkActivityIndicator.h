/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBANetworkActivityDelegate;
@interface FBANetworkActivityIndicator : NSObject {

	id<FBANetworkActivityDelegate> _delegate;
	int _activityCounter;

}

@property (retain) id<FBANetworkActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int activityCounter;                        //@synthesize activityCounter=_activityCounter - In the implementation block
+(void)endActivity;
+(void)endAllActivity;
+(void)setDelegate:(id)arg1 ;
+(char)isActive;
+(void)startActivity;
+(id)sharedManager;
-(int)activityCounter;
-(void)setActivityCounter:(int)arg1 ;
-(void)setDelegate:(id<FBANetworkActivityDelegate>)arg1 ;
-(id<FBANetworkActivityDelegate>)delegate;
@end

