/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UIImageView, NSMutableArray, NSString;

@interface CAMImageWell : UIButton {

	long long _cameraOrientation;
	UIView* __containerView;
	UIImageView* __thumbnailImageView;
	UIImageView* __maskImageView;
	NSMutableArray* __dimmingViewQueue;
	NSString* __uuid;

}

@property (assign,nonatomic) long long cameraOrientation;                       //@synthesize cameraOrientation=_cameraOrientation - In the implementation block
@property (nonatomic,readonly) UIView * _containerView;                         //@synthesize _containerView=__containerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _thumbnailImageView;               //@synthesize _thumbnailImageView=__thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _maskImageView;                    //@synthesize _maskImageView=__maskImageView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _dimmingViewQueue;              //@synthesize _dimmingViewQueue=__dimmingViewQueue - In the implementation block
@property (setter=_setUuid:,nonatomic,retain) NSString * _uuid;                 //@synthesize _uuid=__uuid - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_uuid;
-(id)_containerView;
-(void)_setUuid:(id)arg1 ;
-(id)_maskImage;
-(long long)cameraOrientation;
-(void)setThumbnailImage:(id)arg1 animated:(bool)arg2 ;
-(void)recoverFromFailedThumbnailUpdate;
-(void)prepareForThumbnailUpdateFromCapture;
-(void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(bool)arg3 ;
-(void)setCameraOrientation:(long long)arg1 animated:(bool)arg2 ;
-(void)_commonCAMImageWellInitialization;
-(void)_updateThumbnailTransformFromCameraOrientation;
-(void)_removeFirstDimmingView;
-(void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1 ;
-(void)setCameraOrientation:(long long)arg1 ;
-(id)_maskImageView;
-(id)_dimmingViewQueue;
-(id)_thumbnailImageView;
@end

