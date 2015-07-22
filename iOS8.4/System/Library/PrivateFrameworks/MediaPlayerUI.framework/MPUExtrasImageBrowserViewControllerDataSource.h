/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPUExtrasImageBrowserViewControllerDataSource <NSObject>
@required
-(unsigned long long)numberOfImagesForBrowserViewController:(id)arg1;
-(void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3;

@end
