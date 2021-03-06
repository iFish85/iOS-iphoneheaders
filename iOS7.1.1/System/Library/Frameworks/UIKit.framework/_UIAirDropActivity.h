/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActivity.h>

@class SFAirDropActivityViewController;

@interface _UIAirDropActivity : UIActivity {

	SFAirDropActivityViewController* _airDropViewController;
	/*^block*/ id _airdropCompletion;

}

@property (nonatomic,retain) SFAirDropActivityViewController * airDropViewController;              //@synthesize airDropViewController=_airDropViewController - In the implementation block
@property (nonatomic,copy) id airdropCompletion;                                                   //@synthesize airdropCompletion=_airdropCompletion - In the implementation block
-(void)dealloc;
-(CGSize)_thumbnailSize;
-(id)activityType;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)airDropViewController;
-(/*^block*/ id)airdropCompletion;
-(void)setAirdropCompletion:(/*^block*/ id)arg1 ;
-(void)setAirDropViewController:(id)arg1 ;
@end

