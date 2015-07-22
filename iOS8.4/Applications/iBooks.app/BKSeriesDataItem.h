/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSNumber, NSArray;


@protocol BKSeriesDataItem <NSObject>
@property (nonatomic,readonly) NSString * series_adamId; 
@property (nonatomic,readonly) NSString * series_sortTitle; 
@property (nonatomic,readonly) NSString * series_title; 
@property (nonatomic,readonly) NSString * series_sortAuthor; 
@property (nonatomic,readonly) NSString * series_author; 
@property (nonatomic,readonly) NSNumber * series_isExplicit; 
@property (nonatomic,readonly) NSString * series_formattedPrice; 
@property (nonatomic,readonly) NSArray * series_genres; 
@property (nonatomic,readonly) NSString * series_genre; 
@required
-(NSArray *)series_genres;
-(NSString *)series_genre;
-(NSString *)series_adamId;
-(NSString *)series_sortTitle;
-(NSString *)series_sortAuthor;
-(NSString *)series_title;
-(NSString *)series_author;
-(NSNumber *)series_isExplicit;
-(NSString *)series_formattedPrice;

@end
