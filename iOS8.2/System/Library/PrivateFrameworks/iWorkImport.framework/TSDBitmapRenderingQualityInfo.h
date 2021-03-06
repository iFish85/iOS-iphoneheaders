/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {

	int mQuality;
	float mCanvasScale;
	NSMutableDictionary* mImageMap;

}

@property (nonatomic,readonly) int quality; 
-(id)initWithQuality:(int)arg1 canvasScale:(float)arg2 ;
-(void)cacheProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(CGImageRef)degradedImageRefForProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(void)dealloc;
-(int)quality;
@end

