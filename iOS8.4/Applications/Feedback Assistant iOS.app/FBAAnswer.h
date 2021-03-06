/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>

@class FBAFormResponse, FBAQuestion, NSNumber, NSArray;

@interface FBAAnswer : FBAManagedFeedbackObject

@property (retain) FBAFormResponse * formResponse; 
@property (retain) FBAQuestion * question; 
@property (retain) NSNumber * questionID; 
@property (copy) NSArray * values; 
@property (retain) id value; 
@property (getter=isOptedOut) char optedOut; 
@property (assign) char resolved; 
@property (retain) NSNumber * primitiveOptedOut; 
+(unsigned)answerTypeFromString:(id)arg1 ;
+(id)keyPathsForValuesAffectingValue;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(FBAQuestion *)question;
-(void)setOptedOut:(char)arg1 ;
-(char)isOptedOut;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

