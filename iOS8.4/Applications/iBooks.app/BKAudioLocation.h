/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKLocation.h>

@interface BKAudioLocation : BKLocation {

	double _offset;

}

@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
+(id)deserializeLocationFromDictionary:(id)arg1 ;
-(id)initWithOrdinal:(int)arg1 offset:(double)arg2 ;
-(id)serializeLocationToDictionary;
-(id)initWithLocationDictionary:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setOffset:(double)arg1 ;
-(double)offset;
@end

