/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUColor;

@interface TSDPathStroker : NSObject {

	TSUColor* mColor;
	float mWidth;
	TSDPathStroker* mPrecedingStroker;

}

@property (assign,nonatomic) float width; 
-(id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingStroker:(id)arg4 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 inColor:(id)arg3 ;
-(void)dealloc;
-(float)width;
-(void)setWidth:(float)arg1 ;
@end

