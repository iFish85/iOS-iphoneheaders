/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * seasonType; 
@property (nonatomic,copy) NSDate * start; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)seasonRange;
+(id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDate *)start;
-(NSDate *)end;
-(void)setStart:(NSDate *)arg1 ;
-(void)setEnd:(NSDate *)arg1 ;
-(id)encodedClassName;
-(NSString *)seasonType;
-(void)setSeasonType:(NSString *)arg1 ;
@end
