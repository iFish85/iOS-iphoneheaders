/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface CKImageAlertView : UIView {

	UIImage* _image;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end
