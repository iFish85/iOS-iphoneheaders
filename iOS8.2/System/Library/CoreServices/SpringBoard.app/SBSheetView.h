/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBProxyRemoteView, SBApplication;

@interface SBSheetView : UIView {

	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	char _wasPresentedAnimated;

}
-(void)noteSheetDidEnd;
-(id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(char)arg3 ;
-(char)wasPresentedAnimated;
-(void)dealloc;
-(id)remoteViewIdentifier;
-(id)application;
@end

