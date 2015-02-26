/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/_UICollectionViewCompositionLayout.h>
#import <StoreKitUI/SKUIStorePageCollectionViewLayout.h>

@class NSString, NSMutableArray, NSMapTable, NSArray;

@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout> {

	NSString* _backdropGroupName;
	NSMutableArray* _orderedSublayouts;
	BOOL _rendersWithPerspective;
	NSMapTable* _sublayoutToSectionsToIndexRanges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * backdropGroupName;                         //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (nonatomic,readonly) NSArray * indexPathsForPinningItems; 
@property (assign,nonatomic) BOOL rendersWithPerspective;                        //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
-(id)init;
-(id)sublayouts;
-(CGRect)_frameForLayout:(id)arg1 offset:(CGPoint)arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4 ;
-(void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(CGPoint)arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5 ;
-(void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(CGPoint)arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6 ;
-(void)addSublayout:(id)arg1 forElementKinds:(id)arg2 ;
-(void)removeSublayout:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(BOOL)rendersWithPerspective;
-(id)_newStorePageCollectionViewLayout;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSArray *)indexPathsForPinningItems;
-(void)setRendersWithPerspective:(BOOL)arg1 ;
-(void)addSublayoutsUsingSplitsDescription:(id)arg1 ;
-(id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1 ;
-(id)pinnedLayoutAttributesForItemsInRect:(CGRect)arg1 ;
-(NSString *)backdropGroupName;
-(void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1 ;
@end
