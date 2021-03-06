/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTTableRepProcessChangesActions : NSObject {

	bool _invalidateAllChrome;
	bool _invalidateColumnChrome;
	bool _invalidateRowChrome;
	bool _hideChromeContextMenuButton;
	bool _invalidateKnobs;
	bool _invalidateSelection;
	bool _invalidateTableName;
	bool _updateEditorRemainders;
	bool _syncReferenceHighlightState;
	bool _setNeedsDisplay;
	SCD_Struct_TS500 dirtyCellRange;
	SCD_Struct_TS500 dirtyStrokeRange;

}

@property (assign,nonatomic) SCD_Struct_TS501 dirtyCellRange; 
@property (assign,nonatomic) SCD_Struct_TS501 dirtyStrokeRange; 
@property (assign,nonatomic) bool invalidateAllChrome;                       //@synthesize invalidateAllChrome=_invalidateAllChrome - In the implementation block
@property (assign,nonatomic) bool invalidateColumnChrome;                    //@synthesize invalidateColumnChrome=_invalidateColumnChrome - In the implementation block
@property (assign,nonatomic) bool invalidateRowChrome;                       //@synthesize invalidateRowChrome=_invalidateRowChrome - In the implementation block
@property (assign,nonatomic) bool hideChromeContextMenuButton;               //@synthesize hideChromeContextMenuButton=_hideChromeContextMenuButton - In the implementation block
@property (assign,nonatomic) bool invalidateKnobs;                           //@synthesize invalidateKnobs=_invalidateKnobs - In the implementation block
@property (assign,nonatomic) bool invalidateSelection;                       //@synthesize invalidateSelection=_invalidateSelection - In the implementation block
@property (assign,nonatomic) bool invalidateTableName;                       //@synthesize invalidateTableName=_invalidateTableName - In the implementation block
@property (assign,nonatomic) bool updateEditorRemainders;                    //@synthesize updateEditorRemainders=_updateEditorRemainders - In the implementation block
@property (assign,nonatomic) bool syncReferenceHighlightState;               //@synthesize syncReferenceHighlightState=_syncReferenceHighlightState - In the implementation block
@property (assign,nonatomic) bool setNeedsDisplay;                           //@synthesize setNeedsDisplay=_setNeedsDisplay - In the implementation block
-(bool)invalidateKnobs;
-(void)setDirtyCellRange:(SCD_Struct_TS501)arg1 ;
-(void)setDirtyStrokeRange:(SCD_Struct_TS501)arg1 ;
-(SCD_Struct_TS501)dirtyCellRange;
-(SCD_Struct_TS501)dirtyStrokeRange;
-(bool)invalidateAllChrome;
-(void)setInvalidateAllChrome:(bool)arg1 ;
-(bool)invalidateColumnChrome;
-(void)setInvalidateColumnChrome:(bool)arg1 ;
-(bool)invalidateRowChrome;
-(void)setInvalidateRowChrome:(bool)arg1 ;
-(bool)hideChromeContextMenuButton;
-(void)setHideChromeContextMenuButton:(bool)arg1 ;
-(void)setInvalidateKnobs:(bool)arg1 ;
-(bool)invalidateSelection;
-(void)setInvalidateSelection:(bool)arg1 ;
-(bool)invalidateTableName;
-(void)setInvalidateTableName:(bool)arg1 ;
-(bool)updateEditorRemainders;
-(void)setUpdateEditorRemainders:(bool)arg1 ;
-(bool)syncReferenceHighlightState;
-(void)setSyncReferenceHighlightState:(bool)arg1 ;
-(void)setSetNeedsDisplay:(bool)arg1 ;
-(bool)setNeedsDisplay;
-(id).cxx_construct;
@end

