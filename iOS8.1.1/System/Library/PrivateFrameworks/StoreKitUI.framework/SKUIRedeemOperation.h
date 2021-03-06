/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, SKUIClientContext;

@interface SKUIRedeemOperation : NSOperation {

	BOOL _cameraRecognized;
	NSString* _code;
	SKUIClientContext* _clientContext;
	/*^block*/id _resultBlock;

}

@property (assign,nonatomic) BOOL cameraRecognized;                          //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (copy) id resultBlock;                                             //@synthesize resultBlock=_resultBlock - In the implementation block
-(void)main;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithCode:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(void)setCameraRecognized:(BOOL)arg1 ;
-(id)resultBlock;
-(id)_redeemForSuccessDictionary:(id)arg1 ;
-(id)_requestPropertiesForThankYouWithURL:(id)arg1 ;
-(id)_performRequestWithProperties:(id)arg1 error:(id*)arg2 ;
-(void)_applyThankYouDictionary:(id)arg1 toRedeem:(id)arg2 ;
-(id)_itemsForItemIdentifiers:(id)arg1 ;
-(BOOL)cameraRecognized;
@end

