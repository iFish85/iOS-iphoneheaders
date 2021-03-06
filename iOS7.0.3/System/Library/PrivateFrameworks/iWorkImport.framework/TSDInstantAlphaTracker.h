/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayoutManipulatingTracker.h>

@class TSDImageRep, TSUColor, TSDInstantAlphaImage, NSMutableArray, TSDInstantAlphaBinaryBitmap, TSUIntegerKeyDictionary;

@interface TSDInstantAlphaTracker : NSObject <TSDLayoutManipulatingTracker> {

	TSDImageRep* mImageRep;
	BOOL mCurrentlyInOperation;
	CGPoint mStartPoint;
	TSUColor* mStartColor;
	int mTolerance;
	BOOL mAllowDisconnectedRegions;
	BOOL mOperationShouldSubtract;
	float mAngleInRadiansForUIFeedback;
	CGPoint mControllingPoint;
	CGSize mUnderlyingImageSize;
	CGSize mRawImageSize;
	CGSize mVisualImageSize;
	TSDInstantAlphaImage* mMaskingImage;
	NSMutableArray* mDecoratorLayers;
	TSUColor* mFillColor;
	TSDInstantAlphaBinaryBitmap* mLastBitmap;
	TSUIntegerKeyDictionary* mWandBitmapCache;
	TSUIntegerKeyDictionary* mDisconnectedBitmapCache;
	BOOL mOperationWasCancelled;

}

@property (assign,nonatomic) BOOL allowDisconnectedRegions; 
@property (assign,nonatomic) BOOL operationShouldSubtract; 
@property (assign,nonatomic) int tolerance; 
@property (assign,nonatomic) float angleInRadiansForUIFeedback; 
@property (assign,nonatomic) CGPoint controllingPoint; 
+(id)newInstantAlphaImageWithCGImage:(CGImageRef)arg1 ofSize:(CGSize)arg2 ;
+(id)newMaskBitmapWithPoint:(CGPoint)arg1 image:(id)arg2 tolerance:(unsigned)arg3 oldMaskBitmap:(id)arg4 ;
+(id)newMaskSeedFillWithPoint:(CGPoint)arg1 inImage:(id)arg2 tolerance:(unsigned)arg3 oldFill:(id)arg4 ;
-(void)changeDynamicLayoutsForReps:(id)arg1 ;
-(BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1 ;
-(void)commitChangesForReps:(id)arg1 ;
-(BOOL)supportsAlignmentGuides;
-(BOOL)operationShouldBeDynamic;
-(CGPoint)p_convertNaturalPointToImagePoint:(CGPoint)arg1 ;
-(id)colorForOperationAtPoint:(CGPoint)arg1 ;
-(float)angleInRadiansForUIFeedback;
-(CGPoint)controllingPoint;
-(BOOL)allowDisconnectedRegions;
-(void)p_updateDecoratorLayersWithMask:(id)arg1 ;
-(id)bezierPathForIABitmap:(id)arg1 ;
-(BOOL)operationShouldSubtract;
-(void)beginIAOperationAtPoint:(CGPoint)arg1 ;
-(void)cancelCurrentOperation;
-(id)decoratorLayers;
-(void)setAllowDisconnectedRegions:(BOOL)arg1 ;
-(void)setOperationShouldSubtract:(BOOL)arg1 ;
-(void)setAngleInRadiansForUIFeedback:(float)arg1 ;
-(void)setControllingPoint:(CGPoint)arg1 ;
-(int)tolerance;
-(void)setTolerance:(int)arg1 ;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
@end

