/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Accounts/Accounts-Structs.h>
@interface ACDPropertyEncryption : NSObject
+(SecKeyRef)accountPropertyCryptoKeyCreatingIfNecessary:(char)arg1 ;
+(id)decryptProperty:(id)arg1 ;
+(id)_decryptableDataForStoredProperty:(id)arg1 ;
+(id)encryptProperty:(id)arg1 ;
@end

