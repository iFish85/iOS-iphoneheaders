/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, CAKeyframeAnimation;

@interface PLCameraFocusView : UIView {

	NSArray* _images;
	CAKeyframeAnimation* _contentsAnimation;
	CAKeyframeAnimation* _boundsAnimation;
	double _animationStartTime;
	bool _fadingOut;

}
-(void)_fadeOut;
-(void)dealloc;
-(id)init;
-(void)stopAnimating;
-(void)startAnimating;
-(double)fadeOutDuration;
-(double)fadeInDuration;
-(void)_loadImagesWithImageSize:(CGSize*)arg1 ;
-(id)nameForLightImage;
-(id)nameForDarkImage;
-(id)_createContentsAnimation;
-(id)_createBoundsAnimation;
-(void)_fadeOutDidFinish;
-(void)focusDidEnd;
@end

