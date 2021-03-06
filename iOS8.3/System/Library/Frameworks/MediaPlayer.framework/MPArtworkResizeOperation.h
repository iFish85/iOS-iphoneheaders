/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:57 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSURL, NSObject, NSError, UIImage;

@interface MPArtworkResizeOperation : NSOperation {

	char _usesExactFittingSizeAsDestinationSize;
	NSURL* _destinationURL;
	NSObject*<OS_dispatch_group> _operationGroup;
	NSError* _error;
	UIImage* _resizedImage;
	UIImage* _image;
	CGSize _scaledFittingSize;

}

@property (nonatomic,readonly) NSURL * destinationURL;                                   //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) UIImage * resizedImage;                                   //@synthesize resizedImage=_resizedImage - In the implementation block
@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize scaledFittingSize;                                   //@synthesize scaledFittingSize=_scaledFittingSize - In the implementation block
@property (assign,nonatomic) char usesExactFittingSizeAsDestinationSize;                 //@synthesize usesExactFittingSizeAsDestinationSize=_usesExactFittingSizeAsDestinationSize - In the implementation block
-(NSURL *)destinationURL;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 useExactFittingSizeAsDestinationSize:(char)arg3 destinationURL:(id)arg4 ;
-(NSObject*<OS_dispatch_group>)operationGroup;
-(UIImage *)resizedImage;
-(CGSize)scaledFittingSize;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 destinationURL:(id)arg3 ;
-(CGSize)_resizedScaledSizeForScaledImageSize:(CGSize)arg1 scaledFittingSize:(CGSize)arg2 ;
-(char)usesExactFittingSizeAsDestinationSize;
-(id)initWithImage:(id)arg1 scaledFittingSize:(CGSize)arg2 ;
-(void)setScaledFittingSize:(CGSize)arg1 ;
-(void)setUsesExactFittingSizeAsDestinationSize:(char)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)main;
-(NSError *)error;
@end

