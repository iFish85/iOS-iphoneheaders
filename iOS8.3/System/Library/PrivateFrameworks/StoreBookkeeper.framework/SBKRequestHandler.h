/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject {

	SBKStoreURLBagContext* _bagContext;

}

@property (nonatomic,readonly) SBKStoreURLBagContext * bagContext;              //@synthesize bagContext=_bagContext - In the implementation block
-(void)cancel;
-(void)timeout;
-(SBKStoreURLBagContext *)bagContext;
-(id)initWithBagContext:(id)arg1 ;
@end

