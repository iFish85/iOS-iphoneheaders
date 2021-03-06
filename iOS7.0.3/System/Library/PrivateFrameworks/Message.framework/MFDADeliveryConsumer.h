/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <Message/DAMessageSendConsumer.h>

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {

	int status;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;              //@synthesize error=_error - In the implementation block
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)messageSentWithContext:(void*)arg1 ;
-(id)error;
@end

