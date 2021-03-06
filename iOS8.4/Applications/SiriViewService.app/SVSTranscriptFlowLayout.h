/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface SVSTranscriptFlowLayout : UICollectionViewFlowLayout {

	NSMutableArray* _insertedIndexPaths;
	NSMutableArray* _reloadedIndexPaths;
	NSMutableArray* _handledIndexPaths;

}

@property (getter=_insertedIndexPaths,nonatomic,readonly) NSMutableArray * insertedIndexPaths;              //@synthesize insertedIndexPaths=_insertedIndexPaths - In the implementation block
@property (getter=_reloadedIndexPaths,nonatomic,readonly) NSMutableArray * reloadedIndexPaths;              //@synthesize reloadedIndexPaths=_reloadedIndexPaths - In the implementation block
@property (getter=_handledIndexPaths,nonatomic,readonly) NSMutableArray * handledIndexPaths;                //@synthesize handledIndexPaths=_handledIndexPaths - In the implementation block
-(id)_insertedIndexPaths;
-(id)_reloadedIndexPaths;
-(id)_handledIndexPaths;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned)arg3 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

