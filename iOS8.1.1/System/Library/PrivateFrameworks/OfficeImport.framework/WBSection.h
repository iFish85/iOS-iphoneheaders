/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBSection : NSObject
+(void)readHeaderFrom:(id)arg1 type:(int)arg2 index:(int)arg3 header:(id)arg4 ;
+(void)mapPrinterSettings:(WrdSectionProperties*)arg1 toSection:(id)arg2 ;
+(void)mapSectionProperties:(WrdSectionProperties*)arg1 toSection:(id)arg2 ;
+(void)mapSection:(id)arg1 toSectionProperties:(WrdSectionProperties*)arg2 ;
+(void)readFrom:(id)arg1 textRun:(WrdSectionTextRun*)arg2 document:(id)arg3 index:(int)arg4 section:(id)arg5 ;
@end
