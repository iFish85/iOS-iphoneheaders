/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:12 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIKBRenderEffect <NSObject,NSCopying>
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) char renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) float weight; 
@required
-(CGColorRef)CGColor;
-(char)isValid;
-(float)weight;
-(char)renderUnder;
-(SEL)renderSelector;
-(void)setWeight:(float)arg1;

@end

