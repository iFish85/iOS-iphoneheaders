/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSArray;

@interface TTSVoiceAsset : NSObject <NSSecureCoding> {

	bool _isInstalled;
	NSString* _name;
	NSArray* _languages;
	long long _gender;
	long long _footprint;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * languages;              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) long long gender;                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) long long footprint;              //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) bool isInstalled;                 //@synthesize isInstalled=_isInstalled - In the implementation block
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)name;
-(id)dictionaryRepresentation;
-(void).cxx_destruct;
-(long long)footprint;
-(long long)gender;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(bool)arg5 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)languages;
-(bool)isInstalled;
@end

