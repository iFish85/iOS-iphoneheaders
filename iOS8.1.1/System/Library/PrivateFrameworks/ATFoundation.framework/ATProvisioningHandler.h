/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkObserver.h>
#import <ATFoundation/ATMessageLinkRequestHandler.h>

@class NSString;

@interface ATProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	int _endpointType;
	NSString* _expectedRequestCommand;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendProvisioningRequest:(id)arg1 OnMessageLink:(id)arg2 ;
-(void)_processProvisioningResponse:(id)arg1 toCommand:(id)arg2 onMessageLink:(id)arg3 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(id)initAsEndpointType:(int)arg1 ;
-(id)_paramsForRequest:(id)arg1 ;
-(void)_processProvisioningRequest:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_processProvisioningResponse:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
@end
