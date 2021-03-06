/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, SBControlColorSettings;

@interface SBNewWidgetsLabel : UIView {

	unsigned long long _badgeNumber;
	UILabel* _label;
	NSString* _text;
	NSString* _numberText;
	SBControlColorSettings* _colorSettings;

}

@property (assign,nonatomic) unsigned long long badgeNumber;                      //@synthesize badgeNumber=_badgeNumber - In the implementation block
@property (nonatomic,retain) UILabel * label;                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * text;                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * numberText;                               //@synthesize numberText=_numberText - In the implementation block
@property (nonatomic,retain) SBControlColorSettings * colorSettings;              //@synthesize colorSettings=_colorSettings - In the implementation block
-(id)initWithColorSettings:(id)arg1 ;
-(void)setNumberText:(NSString *)arg1 ;
-(id)_attributedString;
-(id)_numberFont;
-(NSString *)numberText;
-(id)_numberTextAttributes;
-(id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2 ;
-(id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2 ;
-(CGSize)_numberLabelSizeForText:(id)arg1 ;
-(void)updateForContentCategorySizeChange;
-(id)_textFont;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)badgeNumber;
-(void)setBadgeNumber:(unsigned long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SBControlColorSettings *)colorSettings;
-(void)_updateLabel;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setColorSettings:(SBControlColorSettings *)arg1 ;
-(id)_textAttributes;
@end

