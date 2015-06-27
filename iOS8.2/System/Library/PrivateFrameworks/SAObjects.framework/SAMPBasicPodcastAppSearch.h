/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (assign,nonatomic) char acceptPodcastCollections; 
@property (assign,nonatomic) char acceptPodcastStations; 
@property (assign,nonatomic) int maxResults; 
@property (nonatomic,copy) NSString * query; 
+(id)basicPodcastAppSearch;
+(id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)acceptPodcastCollections;
-(void)setAcceptPodcastCollections:(char)arg1 ;
-(char)acceptPodcastStations;
-(void)setAcceptPodcastStations:(char)arg1 ;
@end
