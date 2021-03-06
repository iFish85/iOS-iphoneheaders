/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <vot/EAAccessoryAccessibilityDelegate.h>

@class VOTElementManager, NSString;

@interface VOTExternalAccessoryManager : NSObject <EAAccessoryAccessibilityDelegate> {

	VOTElementManager* _elementManager;
	int _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessoryManager;
-(void)updateVolume:(double)arg1 ;
-(void)setElementManager:(id)arg1 ;
-(void)updateSpeakingRate;
-(void)updateCurrentItemProperties:(id)arg1 ;
-(void)_accessoryConnected:(id)arg1 ;
-(void)_handleAccessoryShutdown;
-(void)_handleTextOperation:(int)arg1 ;
-(void)_handleSpeakString:(id)arg1 ;
-(void)_handleInputText:(id)arg1 ;
-(void)_updateCurrentVoiceOverItem;
-(id)accessoryTraitsFromElement:(id)arg1 ;
-(void)_accessoryWantsStop:(id)arg1 ;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(void)accessibilityAccessory:(id)arg1 performAction:(int)arg2 withObject:(id)arg3 ;
-(void)accessibilityAccessory:(id)arg1 setContext:(int)arg2 ;
-(id)accessibilityAccessory:(id)arg1 currentValueForItemProperty:(int)arg2 ;
-(void)accessibilityAccessory:(id)arg1 setValue:(id)arg2 forSystemProperty:(int)arg3 ;
-(id)accessibilityAccessory:(id)arg1 currentValueForSystemProperty:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(void)startListening;
-(id)accessories;
-(void)stopListening;
@end

