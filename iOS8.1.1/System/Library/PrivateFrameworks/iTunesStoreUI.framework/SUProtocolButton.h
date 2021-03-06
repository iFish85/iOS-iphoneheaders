/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCopying.h>

@class NSDictionary, NSString, NSURL;

@interface SUProtocolButton : NSObject <NSCopying> {

	NSDictionary* _buttonDictionary;

}

@property (nonatomic,readonly) NSDictionary * buttonDictionary;              //@synthesize buttonDictionary=_buttonDictionary - In the implementation block
@property (nonatomic,readonly) NSString * buttonLocation; 
@property (nonatomic,readonly) NSString * buttonTarget; 
@property (nonatomic,readonly) NSString * buttonTitle; 
@property (nonatomic,readonly) NSURL * URL; 
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)buttonTitle;
-(NSString *)buttonTarget;
-(NSString *)buttonLocation;
-(id)initWithButtonDictionary:(id)arg1 ;
-(NSDictionary *)buttonDictionary;
@end

