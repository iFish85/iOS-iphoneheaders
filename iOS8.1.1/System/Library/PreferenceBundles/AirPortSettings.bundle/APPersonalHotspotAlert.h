/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@class WiFiNetwork, UIAlertView, NSString;

@interface APPersonalHotspotAlert : NSObject <UIModalViewDelegate> {

	id _delegate;
	WiFiNetwork* _network;
	UIAlertView* _sheet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)dismiss;
-(void)showAlertForNetwork:(id)arg1 delegate:(id)arg2 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 ;
-(id)getNetwork;
@end

