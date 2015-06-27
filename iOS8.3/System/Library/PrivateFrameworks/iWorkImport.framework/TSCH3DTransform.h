/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@interface TSCH3DTransform : NSObject <NSCopying> {

	tvec3<float> mTranslation;
	tvec3<float> mScaleFactor;
	tquat<float> mRotation;
	tvec3<float> mCenter;
	tmat4x4<float> mMatrix;
	char mDirty;

}

@property (assign,nonatomic) tvec3<float> translation; 
@property (assign,nonatomic) tvec3<float> scaleFactor; 
@property (assign,nonatomic) tquat<float> rotation; 
@property (assign,nonatomic) tvec3<float> center; 
+(id)transform;
-(Transform)asTSCH3DCPPTransform;
-(void)setScaleFactor:(tvec3<float>)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(tvec3<float>)center;
-(const tmat4x4<float>*)transform;
-(void)setCenter:(tvec3<float>)arg1 ;
-(void)setRotation:(tquat<float>)arg1 ;
-(tquat<float>)rotation;
-(tvec3<float>)scaleFactor;
-(void)setTranslation:(tvec3<float>)arg1 ;
-(tvec3<float>)translation;
@end
