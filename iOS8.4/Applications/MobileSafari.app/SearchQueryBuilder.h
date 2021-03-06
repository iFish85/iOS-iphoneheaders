/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SearchEngineInfo;

@interface SearchQueryBuilder : NSObject {

	NSString* queryString;
	SearchEngineInfo* engineInfo;

}
+(id)searchQueryBuilderWithXWebSearchURL:(id)arg1 ;
+(id)searchQueryBuilderWithQuery:(id)arg1 ;
-(id)searchEngineInfo;
-(char)searchEngineIsDefault;
-(id)initWithSearchEngineInfo:(id)arg1 queryString:(id)arg2 ;
-(id)initWithXWebSearchURL:(id)arg1 ;
-(id)queryString;
-(id)searchURL;
-(id)initWithQueryString:(id)arg1 ;
@end

