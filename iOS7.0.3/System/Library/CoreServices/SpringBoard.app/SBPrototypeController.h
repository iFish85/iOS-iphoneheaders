/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBVolumePressBandit.h>
#import <UIKit/_UISettingsKeyObserver.h>

@protocol SBTestRecipe;
@class SBRootSettings, UIWindow, PTSettingsController, NSArray;

@interface SBPrototypeController : NSObject <SBVolumePressBandit, _UISettingsKeyObserver> {

	SBRootSettings* _rootSettings;
	UIWindow* _settingsWindow;
	PTSettingsController* _settingsController;
	NSArray* _testRecipeClassNames;
	<SBTestRecipe>* _activeTestRecipe;
	BOOL _showingSettings;
	BOOL _hasPreviousSettings;

}

@property (nonatomic,retain) <SBTestRecipe> * activeTestRecipe; 
+(void)migrateSettings;
+(void)reloadDefaults;
+(id)sharedInstance;
-(BOOL)isPrototypingEnabled;
-(id)activeTestRecipe;
-(void)showOrHide;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_configureForDefaults;
-(void)_hideSettings;
-(void)_showSettings;
-(void)_updatePreventingLockover;
-(void)_changeActiveTestRecipeIfNecessary;
-(CGRect)_offscreenFrame;
-(void)setActiveTestRecipe:(id)arg1 ;
-(void)_tearDownSettingsWindow;
-(BOOL)isShowingSettingsUI;
-(BOOL)_hasPreviousSettings;
-(BOOL)_restorePreviousSettings;
-(id)_testRecipeClassNames;
-(void)dealloc;
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)rootSettings;
@end

