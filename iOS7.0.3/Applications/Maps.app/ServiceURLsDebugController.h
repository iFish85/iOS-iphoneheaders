/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>

@protocol DebugViewControllerDelegate;
@class NSArray;

@interface ServiceURLsDebugController : AuxiliaryDebugViewController {

	NSArray* _serviceURLs;
	<DebugViewControllerDelegate>* _delegate;

}
+(id)navigationDestinationTitle;
-(void)updateCurrentTestEnvironmentKeys;
-(void)customURLDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(id)title;
@end

