/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSCH3DChartRep;

@interface TSCH3DChartTouchHandler : NSObject {

	TSCH3DChartRep* mRep;
	BOOL mIsActive;

}

@property (assign,nonatomic) BOOL isActive; 
@property (nonatomic,readonly) BOOL hasChanges; 
+(id)handlerWithRep:(id)arg1 ;
-(void)clearParent;
-(id)initWithRep:(id)arg1 ;
-(void)setNeedsDisplay;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
-(BOOL)hasChanges;
@end

