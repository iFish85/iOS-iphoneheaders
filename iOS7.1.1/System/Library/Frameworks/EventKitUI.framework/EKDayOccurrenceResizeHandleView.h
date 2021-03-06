/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView {

	EKDayOccurrenceView* _occurrenceView;
	UIColor* _baseColor;

}

@property (nonatomic,retain) UIColor * baseColor;                                 //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,readonly) EKDayOccurrenceView * occurrenceView;              //@synthesize occurrenceView=_occurrenceView - In the implementation block
-(id)occurrenceView;
-(id)initWithFrame:(CGRect)arg1 occurrenceView:(id)arg2 ;
-(void)setBaseColor:(id)arg1 ;
-(CGRect)_circleRect;
-(void)drawRect:(CGRect)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void).cxx_destruct;
-(id)baseColor;
@end

