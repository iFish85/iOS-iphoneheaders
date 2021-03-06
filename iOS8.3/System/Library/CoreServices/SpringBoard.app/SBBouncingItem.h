/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class NSString;

@interface SBBouncingItem : NSObject <UIDynamicItem> {

	CGRect _bounds;
	CGPoint _center;
	float _multiplier;
	/*^block*/id _translateBlock;

}

@property (assign) float multiplier;                                   //@synthesize multiplier=_multiplier - In the implementation block
@property (copy) id translateBlock;                                    //@synthesize translateBlock=_translateBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
-(void)setTranslateBlock:(id)arg1 ;
-(id)translateBlock;
-(void)setMultiplier:(float)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGPoint)center;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1 ;
-(float)multiplier;
@end

