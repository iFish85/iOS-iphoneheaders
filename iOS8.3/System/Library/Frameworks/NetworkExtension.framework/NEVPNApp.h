/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:02:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN {

	NSArray* _appRules;

}

@property (copy) NSArray * appRules;              //@synthesize appRules=_appRules - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(id)copyAppRuleByID:(id)arg1 ;
-(id)copyAppRuleBySigningIdentifier:(id)arg1 ;
-(char)removeAppRuleByID:(id)arg1 ;
-(id)copyAppRuleIDs;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
