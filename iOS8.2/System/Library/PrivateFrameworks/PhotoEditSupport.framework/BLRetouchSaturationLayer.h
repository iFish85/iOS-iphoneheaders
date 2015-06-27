/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchSaturationLayer : BLRetouchEffectLayer {

	float _saturation;

}

@property (assign,nonatomic) float saturation;              //@synthesize saturation=_saturation - In the implementation block
+(id)layerWithSaturation:(float)arg1 ;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(void)dealloc;
-(CGContextRef)newContextWithEffect:(CGContextRef)arg1 ;
@end
