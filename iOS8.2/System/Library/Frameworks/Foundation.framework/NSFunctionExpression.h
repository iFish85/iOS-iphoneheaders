/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {

	NSExpression* _operand;
	SEL _selector;
	NSArray* _arguments;

}
+(char)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_mapKVCOperatorsToFunctionsInContext:(id)arg1 ;
-(void)allowEvaluation;
-(id)operand;
-(id)initWithExpressionType:(unsigned)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicateFormat;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3 ;
-(id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2 ;
-(char)_shouldUseParensWithDescription;
-(id)binaryOperatorForSelector;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(id)function;
-(id)arguments;
@end

