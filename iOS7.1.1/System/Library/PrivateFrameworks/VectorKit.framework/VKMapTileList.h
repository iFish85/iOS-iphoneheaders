/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKMapTileList : NSObject {

	vector<VKMapTile *, vk_allocator<VKMapTile *> >* _list;
	vector<VGLRect, vk_allocator<VGLRect> >* _rectList[29];
	float _maximumStyleZ;

}

@property (nonatomic,readonly) id* tileList; 
@property (nonatomic,readonly) unsigned long long numTiles; 
@property (nonatomic,readonly) float maximumStyleZ;                      //@synthesize maximumStyleZ=_maximumStyleZ - In the implementation block
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)clearList;
-(void)addTileToList:(id)arg1 ;
-(void)consolidateList;
-(float)maximumStyleZ;
-(id*)tileList;
-(unsigned long long)numTiles;
-(const VGLColor*)rectListForLayer:(unsigned long long)arg1 ;
-(unsigned long long)numRectForLayer:(unsigned long long)arg1 ;
-(const vector<VGLRect, vk_allocator<VGLRect> >*)rectListVectorForLayer:(unsigned long long)arg1 ;
@end

