/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SADecoratedString : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * regions; 
@property (nonatomic,copy) NSString * text; 
+(id)decoratedString;
+(id)decoratedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)regions;
-(id)encodedClassName;
-(void)setRegions:(id)arg1 ;
@end

