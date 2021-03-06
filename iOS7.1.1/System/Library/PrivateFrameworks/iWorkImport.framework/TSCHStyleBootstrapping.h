/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSSPresetSource.h>

@interface TSCHStyleBootstrapping : NSObject <TSSPresetSource>
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(id)p_defaultStyleOfClass:(Class)arg1 stylesheet:(id)arg2 identifier:(id)arg3 ;
+(id)p_defaultParagraphStyleOfClass:(Class)arg1 stylesheet:(id)arg2 identifier:(id)arg3 ;
+(id)p_bootstrappedStylePresetInContext:(id)arg1 stylesheet:(id)arg2 presetIndex:(unsigned long long)arg3 ;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4 ;
+(id)stylePresetForStylesheet:(id)arg1 roleIndex:(unsigned long long)arg2 ;
+(void)bootstrapStylesInStylesheet:(id)arg1 numberOfPresets:(unsigned long long)arg2 ;
@end

