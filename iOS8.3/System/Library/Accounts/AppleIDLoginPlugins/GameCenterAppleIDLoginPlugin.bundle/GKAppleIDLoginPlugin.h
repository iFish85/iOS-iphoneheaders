/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:55:14 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Accounts/AppleIDLoginPlugins/GameCenterAppleIDLoginPlugin.bundle/GameCenterAppleIDLoginPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterAppleIDLoginPlugin/AAAppleIDLoginPlugin.h>

@class NSString;

@interface GKAppleIDLoginPlugin : NSObject <AAAppleIDLoginPlugin>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serviceIdentifier;
-(id)parametersForLoginRequest;
-(void)handleLoginResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)parametersForIdentityEstablishmentRequest;
@end

