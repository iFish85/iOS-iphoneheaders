/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:06:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Phone/Phone-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UIImageView, SiriUIContentLabel, UIDateLabel, SiriPhoneCall;

@interface SiriPhoneCollectionViewCell : SiriUIContentCollectionViewCell {

	UIImageView* _statusImageView;
	SiriUIContentLabel* _contactLabel;
	SiriUIContentLabel* _callCountLabel;
	SiriUIContentLabel* _labelLabel;
	SiriUIContentLabel* _durationLabel;
	UIDateLabel* _dateLabel;
	SiriPhoneCall* _call;

}

@property (nonatomic,retain) SiriPhoneCall * call;              //@synthesize call=_call - In the implementation block
+(float)defaultHeight;
-(void)setCall:(SiriPhoneCall *)arg1 ;
-(SiriPhoneCall *)call;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

