/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol NDCallbackQueueDelegate <NSObject>
@required
-(void)wakeUpClient;
-(id)getClientProxy;
-(void)errorOccurredDuringFinishedCallbackDelivery:(id)arg1;
-(void)errorOccurredDuringAuthCallbackDelivery:(id)arg1 completionHandler:(/*^block*/ id)arg2;
-(void)clientAcknowledgedTerminalCallbackForTask:(unsigned)arg1;
@end

