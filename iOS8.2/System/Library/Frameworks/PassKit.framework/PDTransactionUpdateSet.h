/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PKPaymentTransaction, PKPaymentApplication, NSString;

@interface PDTransactionUpdateSet : NSObject {

	PKPaymentTransaction* _paymentTransaction;
	PKPaymentApplication* _paymentApplication;
	NSString* _passUniqueIdentifier;

}

@property (nonatomic,retain) PKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) NSString * passUniqueIdentifier;                        //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
-(PKPaymentTransaction *)paymentTransaction;
-(void)setPaymentTransaction:(PKPaymentTransaction *)arg1 ;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)dealloc;
-(void)setPassUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)passUniqueIdentifier;
@end
