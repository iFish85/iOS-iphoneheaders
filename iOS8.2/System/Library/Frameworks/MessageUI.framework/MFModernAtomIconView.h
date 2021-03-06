/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface MFModernAtomIconView : UIView {

	NSArray* _iconImages;
	float _iconPadding;
	CGPoint _drawingOffset;

}

@property (nonatomic,retain) NSArray * iconImages;               //@synthesize iconImages=_iconImages - In the implementation block
@property (assign,nonatomic) float iconPadding;                  //@synthesize iconPadding=_iconPadding - In the implementation block
@property (assign,nonatomic) CGPoint drawingOffset;              //@synthesize drawingOffset=_drawingOffset - In the implementation block
-(void)setDrawingOffset:(CGPoint)arg1 ;
-(void)setIconImages:(NSArray *)arg1 ;
-(NSArray *)iconImages;
-(CGPoint)drawingOffset;
-(void)setIconPadding:(float)arg1 ;
-(float)iconPadding;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(float)preferredWidth;
@end

