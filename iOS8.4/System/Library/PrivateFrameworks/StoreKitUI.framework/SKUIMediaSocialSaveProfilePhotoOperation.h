/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, UIImage;

@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	UIImage* _photo;

}
-(void)main;
-(id)initWithClientContext:(id)arg1 ;
-(void)setPhoto:(id)arg1 ;
-(void)setOutputBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)outputBlock;
-(id)_requestWithError:(id*)arg1 ;
-(id)_photoUploadWithResponseDictionary:(id)arg1 ;
@end
