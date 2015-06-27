/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GuidedAccessManager : NSObject {

	id _notificationToken;

}

@property (nonatomic,retain) id notificationToken;              //@synthesize notificationToken=_notificationToken - In the implementation block
+(void)initializeMonitoring;
-(void)_loadRequiredBundles;
-(void)_loadSpringboardServerBundle;
-(char)_isValidClientApp;
-(void)_loadClientBundle;
-(void)dealloc;
-(id)init;
-(id)notificationToken;
-(void)setNotificationToken:(id)arg1 ;
@end
