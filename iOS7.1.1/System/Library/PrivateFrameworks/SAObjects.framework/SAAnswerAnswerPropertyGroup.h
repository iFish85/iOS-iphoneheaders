/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerAnswerPropertyGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * answerProperties; 
@property (nonatomic,copy) NSString * title; 
+(id)answerPropertyGroup;
+(id)answerPropertyGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)encodedClassName;
-(id)answerProperties;
-(void)setAnswerProperties:(id)arg1 ;
@end

