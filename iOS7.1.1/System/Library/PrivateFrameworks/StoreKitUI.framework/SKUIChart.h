/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSURL, NSString;

@interface SKUIChart : NSObject {

	NSArray* _items;
	bool _newsstand;
	NSURL* _seeAllURL;
	bool _showsIndexNumbers;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSURL * seeAllURL;                              //@synthesize seeAllURL=_seeAllURL - In the implementation block
@property (nonatomic,readonly) bool showsIndexNumbers;                         //@synthesize showsIndexNumbers=_showsIndexNumbers - In the implementation block
@property (nonatomic,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (getter=isNewsstand,nonatomic,readonly) bool newsstand;              //@synthesize newsstand=_newsstand - In the implementation block
-(id)description;
-(id)title;
-(id)items;
-(void).cxx_destruct;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithChartPageContext:(id)arg1 ;
-(bool)showsIndexNumbers;
-(bool)isNewsstand;
-(id)seeAllURL;
@end

