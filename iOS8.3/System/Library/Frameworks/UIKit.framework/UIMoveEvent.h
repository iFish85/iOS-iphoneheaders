/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:46 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIInternalEvent.h>

@interface UIMoveEvent : UIInternalEvent {

	int _moveDirection;
	unsigned _focusHeading;

}

@property (assign,setter=_setMoveDirection:,nonatomic) int _moveDirection;                 //@synthesize moveDirection=_moveDirection - In the implementation block
@property (assign,setter=_setFocusHeading:,nonatomic) unsigned _focusHeading;              //@synthesize focusHeading=_focusHeading - In the implementation block
-(int)type;
-(void)_setMoveDirection:(int)arg1 ;
-(void)_setFocusHeading:(unsigned)arg1 ;
-(unsigned)_focusHeading;
-(int)_moveDirection;
-(void)_sendEventToResponder:(id)arg1 ;
@end

