/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression {

	NSString* _content;

}

@property (nonatomic,copy) NSString * content;              //@synthesize content=_content - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(long long)integerValue;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(BOOL)canBeUsedWithBase;
-(BOOL)isInteger;
-(BOOL)isFunctionName;
-(BOOL)isWordOrAbbreviation;
-(id)_functionNames;
@end

