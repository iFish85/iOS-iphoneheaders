/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/nanoprefsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface UserDefaultsDomain : NSObject {

	NSString* _domain;
	NSMutableDictionary* _keys;
	NSMutableDictionary* _keyPrefixes;

}

@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keys;                     //@synthesize keys=_keys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyPrefixes;              //@synthesize keyPrefixes=_keyPrefixes - In the implementation block
-(NSMutableDictionary *)keyPrefixes;
-(void)setKeyPrefixes:(NSMutableDictionary *)arg1 ;
-(void)setKeys:(NSMutableDictionary *)arg1 ;
-(id)description;
-(NSString *)domain;
-(NSMutableDictionary *)keys;
-(void)setDomain:(NSString *)arg1 ;
@end

