/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKClassicGlobeCanvas, NSMapTable;

@interface VKGlobePointCache : NSObject {

	VKClassicGlobeCanvas* _canvas;
	NSMapTable* _poiMapTable;

}

@property (assign,nonatomic) VKClassicGlobeCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(void)dealloc;
-(id)init;
-(id)canvas;
-(void)setCanvas:(id)arg1 ;
-(id)addHandleAtCoordinate:(SCD_Struct_VK61)arg1 withHighPrecision:(BOOL)arg2 ;
-(void)removeHandle:(id)arg1 ;
-(VKPoint)pointForHandle:(id)arg1 atCoordinate:(SCD_Struct_VK61)arg2 withHighPrecision:(BOOL)arg3 ;
@end

