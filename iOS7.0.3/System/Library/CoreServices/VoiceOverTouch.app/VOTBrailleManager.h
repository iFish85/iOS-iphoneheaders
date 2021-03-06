/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class VOTElement, SCRCTargetSelectorTimer, NSDictionary, NSMutableCharacterSet, NSString, SCRCIndexMap, SCROBrailleClient;

@interface VOTBrailleManager : NSObject {

	VOTElement* _brailleElement;
	NSRange _brailleDescriptionRange;
	NSRange _brailleLineRange;
	SCRCTargetSelectorTimer* _hintTimer;
	unsigned _brailleElementIndex;
	BOOL _brailleEnabled;
	BOOL _usesBrailleSubstitutions;
	NSDictionary* _brailleSubstitutions;
	NSMutableCharacterSet* _delimiters;
	NSString* _currentLanguage;
	SCD_Struct_VO22 _status;
	BOOL _hasActiveDisplay;
	SCRCIndexMap* _commands;
	id _rotorSelection;
	BOOL _shouldPreferPositionOverRotorSelection;
	long _primaryDisplayToken;
	SCROBrailleClient* _brailleClient;

}

@property (nonatomic,retain) VOTElement * brailleElement;                //@synthesize brailleElement=_brailleElement - In the implementation block
@property (assign,nonatomic) BOOL brailleEnabled;                        //@synthesize brailleEnabled=_brailleEnabled - In the implementation block
@property (assign,nonatomic) BOOL usesBrailleSubstitutions;              //@synthesize usesBrailleSubstitutions=_usesBrailleSubstitutions - In the implementation block
@property (retain) NSDictionary * brailleSubstitutions;                  //@synthesize brailleSubstitutions=_brailleSubstitutions - In the implementation block
+(double)currentDefaultBrailleAlertTimeout;
+(void)initialize;
+(id)manager;
-(void)handleSettingsChange:(id)arg1 ;
-(void)updateBrailleLanguage;
-(void)updateUsesNemethForMath;
-(void)_initializeCommands;
-(void)setBrailleElement:(id)arg1 ;
-(void)setBrailleElement:(id)arg1 resetBrailleCursor:(BOOL)arg2 rotorSelection:(id)arg3 ;
-(void)applyBrailleSubstitutions:(id)arg1 ;
-(void)setBrailleString:(id)arg1 type:(int)arg2 timeout:(double)arg3 ;
-(void)setUsesBrailleSubstitutions:(BOOL)arg1 ;
-(void)setBrailleEnabled:(BOOL)arg1 ;
-(void)_updateStatusCellPrefs;
-(void)_displayBrailleElementHint;
-(void)_resetBrailleCursor;
-(void)setBrailleSubstitutions:(id)arg1 ;
-(void)_setBrailleClientEnabled:(id)arg1 ;
-(void)_setBrailleTableLanguage:(id)arg1 ;
-(void)_setBrailleSubstitutionLanguage:(id)arg1 ;
-(id)_tableIdentifersForLanguage:(id)arg1 ;
-(void)_handleBraillePanLeft:(id)arg1 ;
-(void)_handleBraillePanRight:(id)arg1 ;
-(void)_handleBrailleToggleContractions:(id)arg1 ;
-(void)_handleBrailleToggleEightDot:(id)arg1 ;
-(void)_handleBrailleAnnouncementModeOn:(id)arg1 ;
-(void)_handleBrailleRouter:(id)arg1 ;
-(void)_handleBrailleStatusRouter:(id)arg1 ;
-(void)_handleBrailleTranslate:(id)arg1 ;
-(void)_showExpandedStatusForStatusCellIndex:(long)arg1 ;
-(void)_initializeExpandedStatusCellDictionaries;
-(void)_updateStatusCells;
-(id)brailleSubstitutions;
-(void)_setBrailleString:(id)arg1 type:(id)arg2 timeout:(id)arg3 priority:(id)arg4 ;
-(void)_setBrailleElement:(id)arg1 resetBrailleCursor:(id)arg2 rotorSelection:(id)arg3 ;
-(void)_refreshBrailleLine;
-(void)_refreshBrailleLinePreferringPositionOverRotorSelection:(BOOL)arg1 ;
-(void)_handleBrailleConfigurationChanged:(id)arg1 ;
-(void)_handleBrailleKeypress:(id)arg1 ;
-(void)_dispatchBrailleDidPanWithSuccess:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 direction:(id)arg4 ;
-(void)_handleBraillePlayDisplayConnectionSound:(id)arg1 ;
-(void)_handleDisplayModeChanged:(id)arg1 ;
-(id)brailleElement;
-(BOOL)brailleEnabled;
-(BOOL)usesBrailleSubstitutions;
-(void)dealloc;
-(id)init;
-(void)handleEvent:(id)arg1 ;
-(void)handleBrailleDidReconnect:(id)arg1 ;
-(void)handleBrailleConfigurationChanged:(id)arg1 ;
-(void)handleBraillePlayDisplayConnectionSound:(id)arg1 ;
-(void)handleDisplayModeChanged:(id)arg1 ;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)arg1 ;
-(void)handleBrailleDidShowNextAnnouncement:(id)arg1 ;
-(void)handleBrailleKeypress:(id)arg1 ;
-(void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 ;
-(void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 ;
-(void)_handleEvent:(id)arg1 ;
@end

