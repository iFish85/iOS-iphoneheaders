/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@interface FigSubtitleCALayer : CALayer {

	OpaqueFigSubtitleCALayerInternal* layerInternal;

}

@property (assign,getter=isOverscanSubtitleSupportEnabled,nonatomic) char overscanSubtitleSupportEnabled; 
+(id)defaultActionForKey:(id)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(void)handleNeedsLayoutNotification;
-(void)setVideosize:(CGSize)arg1 ;
-(void)setSubtitleGravityNonObscuring:(unsigned char)arg1 ;
-(void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1 ;
-(void)beginUpdate;
-(void)endUpdate;
-(char)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(char)arg1 ;
-(id)subtitleLayerDisplay;
-(void)addAnimations:(void*)arg1 ;
-(void)removeAnimations;
-(void)dealloc;
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(void)clear;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)finalize;
-(void)setPlayer:(OpaqueFigPlayerRef)arg1 ;
@end
