/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView {

	NSString* m_string;
	int m_type;
	int m_edgeType;
	UIFont* m_textFont;
	bool m_animating;
	bool m_isLongString;

}

@property (assign,nonatomic) bool animating; 
@property (assign,nonatomic) bool isLongString; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setAnimating:(bool)arg1 ;
-(void)setEdgeType:(int)arg1 ;
-(CGRect)_calculateRectForExpandedHitRegion;
-(id)initWithFrame:(CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4 ;
-(bool)animating;
-(bool)isLongString;
-(void)setIsLongString:(bool)arg1 ;
@end

