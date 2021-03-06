/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString, NSArray;

@interface NSTextAlternatives : NSObject {

	NSString* _primaryString;
	NSArray* _alternativeStrings;
	id _internal;

}

@property (readonly) NSString * primaryString; 
@property (readonly) NSArray * alternativeStrings; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)identifier;
-(id)originalText;
-(id)alternativeStrings;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 ;
-(id)alternativeAtIndex:(unsigned long long)arg1 ;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 ;
-(id)primaryString;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3 ;
-(void)noteSelectedAlternativeString:(id)arg1 ;
-(unsigned long long)numberOfAlternatives;
-(id)alternatives;
@end

