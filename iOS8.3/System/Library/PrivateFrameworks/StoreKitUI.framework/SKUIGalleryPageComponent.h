/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent {

	NSArray* _childComponents;
	double _cycleInterval;
	char _hidesPageIndicator;

}

@property (nonatomic,readonly) NSArray * childComponents;              //@synthesize childComponents=_childComponents - In the implementation block
@property (assign,nonatomic) double cycleInterval;                     //@synthesize cycleInterval=_cycleInterval - In the implementation block
@property (assign,nonatomic) char hidesPageIndicator;                  //@synthesize hidesPageIndicator=_hidesPageIndicator - In the implementation block
-(id)initWithCustomPageContext:(id)arg1 ;
-(int)componentType;
-(id)metricsElementName;
-(double)cycleInterval;
-(NSArray *)childComponents;
-(void)setCycleInterval:(double)arg1 ;
-(char)hidesPageIndicator;
-(void)setHidesPageIndicator:(char)arg1 ;
@end

