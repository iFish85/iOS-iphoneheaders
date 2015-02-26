/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicTableViewController.h>

@interface MusicArtistsViewController : MusicTableViewController {

	BOOL _allowsActions;

}

@property (assign,nonatomic) BOOL allowsActions;              //@synthesize allowsActions=_allowsActions - In the implementation block
+(long long)groupingType;
+(id)persistentIDProperty;
+(id)itemPersistentIDProperty;
+(id)actionCellConfigurationClasses;
+(long long)containerItemType;
-(BOOL)allowsActions;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)defaultsDidChange;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1 ;
-(BOOL)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3 ;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(id)_viewControllerForSelectedMediaEntity:(id)arg1 ;
-(void)_appDefaultsDidChangeNotification:(id)arg1 ;
@end
