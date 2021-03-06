/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState {

	WBReader* mReader;
	int mCurrentTextType;

}

@property (assign,nonatomic) WBReader * reader; 
@property (assign,nonatomic) int currentTextType; 
-(id)initWithClient:(Class)arg1 ;
-(WBReader *)reader;
-(void)setReader:(WBReader *)arg1 ;
-(int)currentTextType;
-(void)setCurrentTextType:(int)arg1 ;
@end

