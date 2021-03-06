/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, SALocalSearchReviewList;

@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,retain) SALocalSearchReviewList * reviewList; 
+(id)reviewListSnippet;
+(id)reviewListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(void)setReviewList:(SALocalSearchReviewList *)arg1 ;
-(SALocalSearchReviewList *)reviewList;
@end

