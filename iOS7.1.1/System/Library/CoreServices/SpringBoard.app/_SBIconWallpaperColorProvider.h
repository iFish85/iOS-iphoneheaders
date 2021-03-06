/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <SpringBoard/SBWallpaperObserver.h>

@class SBIconColorSettings, NSHashTable;

@interface _SBIconWallpaperColorProvider : NSObject <_UISettingsKeyObserver, SBWallpaperObserver> {

	SBIconColorSettings* _colorSettings;
	NSHashTable* _clients;
	CGColorRef _blurColor;
	CGColorRef _solidColor;

}
+(id)sharedInstance;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2 ;
-(void)wallpaperGeometryDidChangeForVariant:(int)arg1 ;
-(void)updateColorForClientBoundsChange:(id)arg1 ;
-(void)_updateClient:(id)arg1 ;
-(void)_updateBlurForClient:(id)arg1 ;
-(void)_updateAllClients;
-(void)dealloc;
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)_updateColors;
@end

