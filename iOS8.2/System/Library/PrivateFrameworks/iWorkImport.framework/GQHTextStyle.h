/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHTextStyle : NSObject
+(void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 ;
+(void)reduceFontSizeForSuperscriptedText:(id)arg1 style:(id)arg2 state:(id)arg3 ;
+(char)getDefaultLineHeight:(CFStringRef)arg1 fontSize:(float)arg2 defLineHeight:(int*)arg3 ;
+(void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3 isSpan:(char)arg4 ;
+(CTFontRef)createFontFromName:(CFStringRef)arg1 size:(float)arg2 ;
+(CFStringRef)platformCreateCssFontFamilyStringFromFontName:(CFStringRef)arg1 ;
+(char)platformGetDefaultLineHeight:(CFStringRef)arg1 fontSize:(float)arg2 defLineHeight:(int*)arg3 ;
+(const char*)name;
@end

