/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache;

@interface ABMemberNameViewCache : NSObject {

	NSCache* _styleProvidersCache;

}
+(id)sharedInstance;
-(id)memberNameRegularFontForStyleProvider:(id)arg1 ;
-(id)regularTextAttributesForStyleProvider:(id)arg1 ;
-(id)boldTextAttributesForStyleProvider:(id)arg1 ;
-(id)placeholderTextAttributesForStyleProvider:(id)arg1 ;
-(id)_cacheForStyleProvider:(id)arg1 ;
-(id)memberNameBoldFontForStyleProvider:(id)arg1 ;
-(id)memberNamePlaceholderFontForStyleProvider:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end
