/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKProductPageViewControllerDelegate <NSObject>
@optional
-(void)productPage:(id)arg1 didReceiveTitle:(id)arg2;
-(void)productPageDidFinishLoad:(id)arg1;
-(void)productPage:(id)arg1 purchaseBatchFailedWithError:(id)arg2;
-(void)productPage:(id)arg1 willMakePurchases:(id)arg2;
-(void)productPage:(id)arg1 didFinishPurchase:(id)arg2 withError:(id)arg3;
-(void)productPage:(id)arg1 didFinishWithResult:(int)arg2;
-(void)productPage:(id)arg1 presentProductPage:(id)arg2 animated:(char)arg3;
-(void)productPage:(id)arg1 didFailLoadWithError:(id)arg2;

@end

