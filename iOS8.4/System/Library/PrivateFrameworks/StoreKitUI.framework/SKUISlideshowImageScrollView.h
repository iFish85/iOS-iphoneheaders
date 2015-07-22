/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIImageView, UIImage;

@interface SKUISlideshowImageScrollView : UIScrollView {

	UIImageView* _imageView;
	CGPoint _centerPointBeforeResize;
	double _scaleBeforeResize;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(CGRect)visibleRect;
-(UIImageView *)imageView;
-(void)_prepareToResize;
-(void)_recoverFromResize;
-(void)_resetMinMaxZoomScales;
-(void)resetZoomScale;
-(void)zoomIntoPoint:(CGPoint)arg1 ;
@end
