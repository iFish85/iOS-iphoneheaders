/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:34:16 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AXHearingAidSupport/AXHearingDetailViewController.h>

@class AXRemoteHearingAidDevice;

@interface HearingAidDetailController : AXHearingDetailViewController {

	AXRemoteHearingAidDevice* _device;

}
-(void)forgetAid:(id)arg1 ;
-(id)shouldStream:(id)arg1 ;
-(void)setShouldStream:(id)arg1 specifier:(id)arg2 ;
-(void)setIndependentAids:(id)arg1 specifier:(id)arg2 ;
-(id)independentAids:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)disconnectedSpecifiers;
-(NSRange)programsRange;
-(id)specifiers;
-(void)confirmationViewAcceptedForSpecifier:(id)arg1 ;
-(id)device;
-(void)setDevice:(id)arg1 ;
@end
