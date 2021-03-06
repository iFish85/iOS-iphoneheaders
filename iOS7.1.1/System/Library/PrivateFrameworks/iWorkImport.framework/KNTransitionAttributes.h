/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationAttributes.h>

@interface KNTransitionAttributes : KNAnimationAttributes
+(void)p_readSharedAttributesForArchive:(AnimationAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(id)p_readDeprecatedAttributesForArchive:(const TransitionAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(void)p_readTransitionAttributesForArchive:(const TransitionAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(id)supportedCustomAttributes;
+(bool)customAttributeKeyIsValid:(id)arg1 ;
+(id)defaultAttributesForEffect:(id)arg1 ;
-(void)encodeToArchive:(TransitionAttributesArchive*)arg1 ;
-(void)p_writeSharedAttributesToArchive:(TransitionAttributesArchive*)arg1 ;
-(void)p_writeTransitionAttributesToArchive:(TransitionAttributesArchive*)arg1 ;
-(id)initFromTransitionAttributesArchive:(const TransitionAttributesArchive*)arg1 ;
@end

