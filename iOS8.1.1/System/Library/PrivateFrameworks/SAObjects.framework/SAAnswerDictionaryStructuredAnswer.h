/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSString, NSArray, NSURL;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSArray * definitionGroups; 
@property (nonatomic,copy) NSString * phoneticPronunciation; 
@property (nonatomic,copy) NSURL * sound; 
@property (nonatomic,copy) NSArray * syllables; 
@property (nonatomic,copy) NSString * word; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dictionaryStructuredAnswer;
+(id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSURL *)sound;
-(void)setSound:(NSURL *)arg1 ;
-(id)encodedClassName;
-(NSArray *)definitionGroups;
-(void)setDefinitionGroups:(NSArray *)arg1 ;
-(NSString *)phoneticPronunciation;
-(void)setPhoneticPronunciation:(NSString *)arg1 ;
-(NSArray *)syllables;
-(void)setSyllables:(NSArray *)arg1 ;
-(NSString *)word;
-(void)setWord:(NSString *)arg1 ;
@end

