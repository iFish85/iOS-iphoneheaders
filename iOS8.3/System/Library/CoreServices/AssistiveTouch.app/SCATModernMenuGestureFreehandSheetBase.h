/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:17:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>
#import <assistivetouchd/SCATModernMenuGestureFreehandItemDelegate.h>

@protocol SCATModernMenuGestureFreehandSheetDelegate;
@class NSString;

@interface SCATModernMenuGestureFreehandSheetBase : SCATModernMenuGesturesSheetBase <SCATModernMenuGestureFreehandItemDelegate> {

	id<SCATModernMenuGestureFreehandSheetDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATModernMenuGestureFreehandSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isLandscape;
-(id)moveMenuItemWithPreferredNumberOfLines:(unsigned)arg1 ;
-(id)touchToggleMenuItemWithPreferredNumberOfLines:(unsigned)arg1 ;
-(id)moveToolbarMenuItem;
-(char)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItem:(id)arg1 didBecomeFocused:(char)arg2 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(char)shouldUpdateItemsOnOrientationChange;
-(char)shouldKeepScannerAwake;
-(id)pathMenuItems;
-(id)elementProvider;
-(id)autoPressLiftItems;
-(id)rotateMenuItemWithPreferredNumberOfLines:(unsigned)arg1 ;
-(id)bendMenuItemWithPreferredNumberOfLines:(unsigned)arg1 ;
-(void)pushFreehandSheetOfClass:(Class)arg1 ;
-(void)didChangeOrientation;
-(unsigned)presentationMode;
-(char)delegatesScannerControl;
-(id)_titleForLocalizableString:(id)arg1 state:(char)arg2 ;
-(id)_imageNameForPrefix:(id)arg1 ;
-(Class)_menuItemClass;
-(void)setDelegate:(id<SCATModernMenuGestureFreehandSheetDelegate>)arg1 ;
-(id<SCATModernMenuGestureFreehandSheetDelegate>)delegate;
-(void)setMenuItems:(id)arg1 ;
@end

