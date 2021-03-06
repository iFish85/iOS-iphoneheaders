/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class MTOptionSetting;

@interface MTOptionsTableViewController : UITableViewController {

	/*^block*/id _optionSelectedBlock;
	MTOptionSetting* _option;

}

@property (nonatomic,copy) id optionSelectedBlock;                  //@synthesize optionSelectedBlock=_optionSelectedBlock - In the implementation block
@property (nonatomic,retain) MTOptionSetting * option;              //@synthesize option=_option - In the implementation block
+(id)optionFont;
+(id)footerFont;
+(float)rowHeight;
+(id)selectedColor;
-(void)updateRowHeight;
-(id)newFooterView;
-(id)optionSelectedBlock;
-(void)setOptionSelectedBlock:(id)arg1 ;
-(id)initWithOption:(id)arg1 ;
-(MTOptionSetting *)option;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewDidLoad;
-(unsigned)selectedIndex;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)headerText;
-(id)footerText;
-(void)setOption:(MTOptionSetting *)arg1 ;
@end

