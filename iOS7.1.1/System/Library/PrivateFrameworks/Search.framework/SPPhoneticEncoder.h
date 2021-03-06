/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableString, NSNumber;

@interface SPPhoneticEncoder : NSObject {

	NSString* _source;
	NSMutableString* _primary;
	NSMutableString* _alternate;
	int _idx;
	NSNumber* _slavoGermanic;

}
-(bool)isAnyString:(id)arg1 atIndex:(int)arg2 ;
-(bool)isVowelAtIndex:(int)arg1 ;
-(void)addPrimary:(id)arg1 alternate:(id)arg2 ;
-(bool)isSlavoGermanic;
-(id)codesForString:(id)arg1 ;
-(void)add:(id)arg1 ;
@end

