/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASRecognition, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * sessionId; 
+(id)speechRecognized;
+(id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_correctionContext;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(id)groupIdentifier;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(SASRecognition *)recognition;
-(void)setRecognition:(SASRecognition *)arg1 ;
@end

