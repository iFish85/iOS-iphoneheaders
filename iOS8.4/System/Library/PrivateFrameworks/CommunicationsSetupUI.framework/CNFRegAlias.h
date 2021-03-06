/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, IMAccount;

@interface CNFRegAlias : NSObject {

	NSString* _alias;
	NSString* _displayName;
	IMAccount* _account;

}

@property (nonatomic,copy,readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * alias;                              //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) IMAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain,readonly) NSString * identifier; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(long long)type;
-(BOOL)validate;
-(long long)localizedCaseInsensitiveCompare:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)alias;
-(id)initWithAccount:(id)arg1 alias:(id)arg2 ;
-(long long)validationStatus;
-(BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
-(long long)validationErrorReason;
-(BOOL)isLocalPhoneNumberAlias;
@end

