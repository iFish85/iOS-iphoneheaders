/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSURL;

@interface SAUIImageResource : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * imageData; 
@property (assign,nonatomic) double pointHeight; 
@property (assign,nonatomic) double pointWidth; 
@property (nonatomic,copy) NSURL * resourceUrl; 
@property (assign,nonatomic) double scaleFactor; 
+(id)imageResource;
+(id)imageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(id)imageData;
-(void)setImageData:(id)arg1 ;
-(void)setPointHeight:(double)arg1 ;
-(id)encodedClassName;
-(double)pointHeight;
-(double)pointWidth;
-(void)setPointWidth:(double)arg1 ;
-(id)resourceUrl;
-(void)setResourceUrl:(id)arg1 ;
@end

