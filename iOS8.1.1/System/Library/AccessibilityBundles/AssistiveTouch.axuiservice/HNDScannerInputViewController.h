/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/AssistiveTouch.axuiservice/AssistiveTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class HNDUIServer, NSString, CALayer;

@interface HNDScannerInputViewController : UIViewController {

	HNDUIServer* _userInterfaceServer;
	NSString* _cameraInputSourceAlertIdentifier;
	NSString* _hardwareInputSourceAlertIdentifier;
	NSString* _screenInputSourceAlertIdentifier;
	CALayer* _cameraInputSourceStateLeftLayer;
	CALayer* _cameraInputSourceStateRightLayer;

}

@property (assign,nonatomic) HNDUIServer * userInterfaceServer;                          //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
@property (nonatomic,retain) NSString * cameraInputSourceAlertIdentifier;                //@synthesize cameraInputSourceAlertIdentifier=_cameraInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) NSString * hardwareInputSourceAlertIdentifier;              //@synthesize hardwareInputSourceAlertIdentifier=_hardwareInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) NSString * screenInputSourceAlertIdentifier;                //@synthesize screenInputSourceAlertIdentifier=_screenInputSourceAlertIdentifier - In the implementation block
@property (nonatomic,retain) CALayer * cameraInputSourceStateLeftLayer;                  //@synthesize cameraInputSourceStateLeftLayer=_cameraInputSourceStateLeftLayer - In the implementation block
@property (nonatomic,retain) CALayer * cameraInputSourceStateRightLayer;                 //@synthesize cameraInputSourceStateRightLayer=_cameraInputSourceStateRightLayer - In the implementation block
-(void)hideStateForSource:(unsigned long long)arg1 ;
-(void)hideAlertForSource:(unsigned long long)arg1 ;
-(void)_hideStateForAllSources;
-(void)setCameraInputSourceAlertIdentifier:(NSString *)arg1 ;
-(CALayer *)cameraInputSourceStateLeftLayer;
-(void)showAlert:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)_hideAlertsForAllSources;
-(void)setUserInterfaceServer:(HNDUIServer *)arg1 ;
-(void)showState:(id)arg1 forSource:(unsigned long long)arg2 ;
-(HNDUIServer *)userInterfaceServer;
-(void)setScreenInputSourceAlertIdentifier:(NSString *)arg1 ;
-(CALayer *)cameraInputSourceStateRightLayer;
-(void)setCameraInputSourceStateRightLayer:(CALayer *)arg1 ;
-(void)hideAlerts;
-(void)setHardwareInputSourceAlertIdentifier:(NSString *)arg1 ;
-(void)setCameraInputSourceStateLeftLayer:(CALayer *)arg1 ;
-(NSString *)hardwareInputSourceAlertIdentifier;
-(NSString *)cameraInputSourceAlertIdentifier;
-(NSString *)screenInputSourceAlertIdentifier;
-(void)dealloc;
@end
