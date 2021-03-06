/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationCalloutControllerDelegate;
#import <MapKit/MapKit-Structs.h>
@class MKAnnotationView;

@interface MKAnnotationCalloutController : NSObject {

	id<MKAnnotationCalloutControllerDelegate> _delegate;
	MKAnnotationView* _annotationView;
	unsigned long long _mapDisplayStyle;

}

@property (assign,nonatomic,__weak) id<MKAnnotationCalloutControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKAnnotationView * annotationView;                                      //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) unsigned long long mapDisplayStyle;                                     //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(BOOL)isCalloutExpanded;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(void)_updateCalloutAnimated:(BOOL)arg1 ;
-(void)_updateCallout;
-(void)_calloutAccessoryControlTapped:(id)arg1 ;
-(MKAnnotationView *)annotationView;
-(void)_removeAccessoryTargetForView:(id)arg1 ;
-(id)_subtitle;
-(void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addAccessoryTargetForView:(id)arg1 ;
-(double)defaultCalloutHeight;
-(BOOL)_isShowingCallout;
-(void)_removeAccessoryTargets;
-(CGRect)_visibleCenteringRectInView:(id)arg1 ;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(CGRect)arg4 ;
-(void)hideCalloutAnimated:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MKAnnotationCalloutControllerDelegate>)arg1 ;
-(id<MKAnnotationCalloutControllerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setTitle:(id)arg1 ;
-(unsigned long long)mapDisplayStyle;
-(void)setMapDisplayStyle:(unsigned long long)arg1 ;
@end

