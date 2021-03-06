/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class UIImage, NSString, UIColor, UIFont;

@interface ABMonogrammer : NSObject {

	UIImage* _silhouetteMonogram;
	UIImage* _questionMarkMonogram;
	UIImage* _knockoutMaskMonogram;
	double _innerBorderWidth;
	NSString* _silhouetteImageName;
	long long _monogrammerStyle;
	bool _textKnockout;
	double _diameter;
	UIColor* _backgroundColor;
	UIFont* _font;
	UIColor* _textColor;

}

@property (assign,nonatomic) double diameter;                        //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                    //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) bool textKnockout;                      //@synthesize textKnockout=_textKnockout - In the implementation block
-(void)_clearMonogramCache;
-(id)_initialsForPerson:(void*)arg1 ;
-(bool)hasImageOrInitialsForPerson:(void*)arg1 ;
-(id)_copyMonogramWithImageData:(CFDataRef)arg1 ;
-(id)_copyMonogramWithInitials:(id)arg1 ;
-(id)monogramForPerson:(void*)arg1 isPersonImage:(bool*)arg2 ;
-(id)_initialsForFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)_copyMonogramWithSilhouette;
-(id)_copyMonogramWithKnockoutMask;
-(id)knockoutMaskMonogram;
-(void)monogramsAsFlatImages;
-(void)setDiameter:(double)arg1 ;
-(void)setTextKnockout:(bool)arg1 ;
-(double)innerBorderWidth;
-(id)silhouetteImageName;
-(bool)hasMonogramForPerson:(void*)arg1 ;
-(id)maskForMonogram;
-(id)defaultMonogram;
-(double)diameter;
-(bool)textKnockout;
-(id)initWithStyle:(long long)arg1 diameter:(double)arg2 ;
-(id)questionMarkMonogram;
-(id)monogramForPerson:(void*)arg1 ;
-(id)silhouetteMonogram;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(id)init;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)textColor;
-(id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2 ;
@end

