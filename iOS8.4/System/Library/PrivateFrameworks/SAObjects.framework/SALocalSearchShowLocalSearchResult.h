/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSData;

@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (nonatomic,copy) NSData * rawData; 
+(id)showLocalSearchResult;
+(id)showLocalSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)rawData;
-(void)setRawData:(NSData *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

