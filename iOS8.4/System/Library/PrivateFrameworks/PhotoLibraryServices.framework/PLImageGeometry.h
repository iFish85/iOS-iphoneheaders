/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/NSCopying.h>

@interface PLImageGeometry : NSObject <NSCopying> {

	long long _appliedOrientation;
	CGRect _inputRect;

}

@property (nonatomic,readonly) CGRect inputRect;                                     //@synthesize inputRect=_inputRect - In the implementation block
@property (nonatomic,readonly) CGRect outputRect; 
@property (assign,nonatomic) long long appliedOrientation;                           //@synthesize appliedOrientation=_appliedOrientation - In the implementation block
@property (nonatomic,readonly) CGAffineTransform appliedTransform; 
@property (getter=isSizeInverted,nonatomic,readonly) BOOL sizeInverted; 
@property (getter=isMirrored,nonatomic,readonly) BOOL mirrored; 
+(id)geometryWithInputSize:(CGSize)arg1 initialOrientation:(long long)arg2 ;
+(id)geometryWithOutputSize:(CGSize)arg1 appliedOrientation:(long long)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInputSize:(CGSize)arg1 ;
-(void)applyOrientation:(long long)arg1 ;
-(long long)appliedOrientation;
-(CGRect)inputRect;
-(CGRect)outputRect;
-(CGRect)_basisRect:(long long)arg1 ;
-(CGAffineTransform)_transformFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(CGAffineTransform)appliedTransform;
-(BOOL)isSizeInverted;
-(BOOL)isMirrored;
-(void)flipVertically;
-(void)flipHorizontally;
-(void)rotateClockwise;
-(void)rotateCounterClockwise;
-(CGRect)inputRectForOutputRect:(CGRect)arg1 ;
-(CGRect)outputRectForInputRect:(CGRect)arg1 ;
-(CGRect)denormalizeRect:(CGRect)arg1 basis:(long long)arg2 ;
-(CGRect)normalizeRect:(CGRect)arg1 basis:(long long)arg2 ;
-(CGAffineTransform)transformToOrientation:(long long)arg1 ;
-(CGAffineTransform)transformFromOrientation:(long long)arg1 ;
-(void)setAppliedOrientation:(long long)arg1 ;
@end

