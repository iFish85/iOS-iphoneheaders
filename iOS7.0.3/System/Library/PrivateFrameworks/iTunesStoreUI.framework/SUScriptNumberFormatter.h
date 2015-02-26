/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject {

	NSNumberFormatter* _numberFormatter;

}

@property (retain) NSString * localeIdentifier; 
@property (retain) NSString * style; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)numberFromString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setStyle:(id)arg1 ;
-(id)style;
-(id)localeIdentifier;
-(id)stringFromNumber:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)setLocaleIdentifier:(id)arg1 ;
@end
