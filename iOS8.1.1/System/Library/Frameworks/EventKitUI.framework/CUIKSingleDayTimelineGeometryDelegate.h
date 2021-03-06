/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
@required
-(CGPoint*)pointForDate:(double)arg1;
-(double)dateForPoint:(CGPoint)arg1;
-(double)hourHeight;
-(double)topPadding;
-(double)timeWidth;
-(CGRect)displayedRect;
-(BOOL)originIsUpperLeft;

@end

