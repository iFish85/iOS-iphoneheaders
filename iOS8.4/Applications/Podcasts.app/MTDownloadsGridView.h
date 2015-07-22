/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTGridView.h>
#import <Podcasts/MTDownloadGridCellGridViewDelegate.h>

@class NSString;

@interface MTDownloadsGridView : MTGridView <MTDownloadGridCellGridViewDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateVisibleCellsUsingBlock:(/*^block*/id)arg1 ;
-(id)_installNewCellAtIndex:(int)arg1 ;
-(void)gridCellDidStartSwiping:(id)arg1 ;
-(void)gridCellDidEndSwiping:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end
