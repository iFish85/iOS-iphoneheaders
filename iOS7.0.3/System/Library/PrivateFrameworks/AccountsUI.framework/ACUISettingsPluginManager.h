/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ACUISettingsPluginParentProtocol;
@class PSViewController, NSMutableDictionary;

@interface ACUISettingsPluginManager : NSObject {

	PSViewController<ACUISettingsPluginParentProtocol>* _parentViewController;
	NSMutableDictionary* _pluginCache;

}
-(id)_settingsPluginFromBundleWithName:(id)arg1 ;
-(id)_loadSettingsPluginFromBundleWithName:(id)arg1 ;
-(void)parentViewControllerWillDisappear;
-(id)mailSettingsPlugin;
-(id)calendarSettingsPlugin;
-(id)contactsSettingsPlugin;
-(id)initWithParentViewController:(id)arg1 ;
-(void).cxx_destruct;
@end

