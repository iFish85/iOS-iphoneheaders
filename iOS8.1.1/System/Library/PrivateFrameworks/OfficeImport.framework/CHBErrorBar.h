/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBErrorBar : NSObject
+(int)edErrorBarDirectionFrom:(int)arg1 ;
+(int)edErrorBarTypeFrom:(int)arg1 ;
+(id)readErrorBarGraphicProperties:(const XlChartSeriesFormat*)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3 ;
+(int)xlErrorBarTypeFrom:(int)arg1 direction:(int)arg2 ;
+(int)xlErrorBarSourceFrom:(int)arg1 ;
+(void)readFrom:(XlChartErrorBar*)arg1 toSeries:(id)arg2 state:(id)arg3 ;
@end

