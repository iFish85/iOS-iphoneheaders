/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BrowserPanel <NSObject>
@optional
-(void)panelWillSuspend;
-(BOOL)shouldResumePanel;
-(BOOL)shouldShowToolbarInFullscreen;
-(id)toolbarItems;

@required
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
@end

