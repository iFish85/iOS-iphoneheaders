/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSSet;

@interface VKPolylineOverlayRenderRegion : NSObject {

	NSSet* _tiles;
	SCD_Struct_VK11 _visibleRect;
	vector<VKRect, std::__1::allocator<VKRect> >* _rectsForSnapping;
	vector<VKTileKey, std::__1::allocator<VKTileKey> >* _snappedTileKeys;

}

@property (nonatomic,readonly) NSSet * tiles;                            //@synthesize tiles=_tiles - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK11 visibleRect;              //@synthesize visibleRect=_visibleRect - In the implementation block
-(void)dealloc;
-(SCD_Struct_VK11)visibleRect;
-(id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(BOOL)arg3 ;
-(BOOL)isEquivalentToNewRegion:(id)arg1 ;
-(const vector<VKRect, std::__1::allocator<VKRect> >*)rectsForSnapping;
-(NSSet *)tiles;
@end

