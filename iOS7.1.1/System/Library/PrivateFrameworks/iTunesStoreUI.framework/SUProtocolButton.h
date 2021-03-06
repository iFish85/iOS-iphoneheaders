/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

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
-(id)copyWithZone:(NSZone)arg1 ;
-(id)URL;
-(id)buttonTitle;
-(id)buttonTarget;
-(id)buttonLocation;
-(id)initWithButtonDictionary:(id)arg1 ;
-(id)buttonDictionary;
@end

