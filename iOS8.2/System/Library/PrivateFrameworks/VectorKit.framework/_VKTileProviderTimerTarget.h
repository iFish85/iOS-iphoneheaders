/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VKTileProvider;

@interface _VKTileProviderTimerTarget : NSObject {

	VKTileProvider* tileProvider;
	VKTileProvider* _tileProvider;

}

@property (assign,nonatomic) VKTileProvider * tileProvider;              //@synthesize tileProvider=_tileProvider - In the implementation block
-(void)timerFired:(id)arg1 ;
-(void)setTileProvider:(VKTileProvider *)arg1 ;
-(VKTileProvider *)tileProvider;
@end

