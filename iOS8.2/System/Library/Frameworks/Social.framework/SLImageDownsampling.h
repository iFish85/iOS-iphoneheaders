/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@interface SLImageDownsampling : NSObject
+(void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned)arg2 resultsHandler:(/*^block*/id)arg3 ;
+(id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned)arg2 ;
+(SCD_Struct_SL12)imageSizeWithData:(id)arg1 ;
+(id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned)arg2 ;
+(void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

