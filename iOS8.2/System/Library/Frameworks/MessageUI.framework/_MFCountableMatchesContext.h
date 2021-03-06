/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject {

	CFDictionaryRef _peopleCount;
	NSMutableSet* _popularPeople;
	int _maxCount;

}

@property (assign,nonatomic) int maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
-(void)setMaxCount:(int)arg1 ;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/id)arg2 ;
-(id)highestMatches;
-(void)dealloc;
-(id)init;
-(int)maxCount;
@end

