/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@class MPMediaLibrary, NSArray;

@interface MusicSharedLibrariesViewController : UITableViewController <UIViewControllerRestoration> {

	MPMediaLibrary* _connectingMediaLibrary;
	NSArray* _sharedMediaLibraries;

}
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)_cancelConnectionAndDismiss;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)_mediaLibraryConnectionProgressDidChangeNotification:(id)arg1 ;
-(id)_sharedMediaLibraries;
-(void)_updateConnectionProgressForCell:(id)arg1 ;
-(void)_updateNavigationPrompt;
-(void)_updateConnectionProgress;
-(char)music_shouldPresentModallyInMoreList;
@end

