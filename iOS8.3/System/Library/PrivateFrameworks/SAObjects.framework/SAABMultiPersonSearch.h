/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAABMultiPersonSearch : SADomainCommand

@property (nonatomic,copy) NSArray * personSearches; 
@property (nonatomic,copy) NSNumber * resultsLimit; 
+(id)multiPersonSearch;
+(id)multiPersonSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setResultsLimit:(NSNumber *)arg1 ;
-(NSNumber *)resultsLimit;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSArray *)personSearches;
-(void)setPersonSearches:(NSArray *)arg1 ;
@end
