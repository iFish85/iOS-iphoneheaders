/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface UIPrinterSearchingView : UIView {

	UILabel* _searchingLabel;
	UIActivityIndicatorView* _searchingIndicator;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)searchTimeout;
-(id)initInView:(id)arg1 ;
-(void)setSearching:(BOOL)arg1 ;
@end
