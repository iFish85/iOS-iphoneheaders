/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class EKEvent;

@interface EKEventDetailCell : UITableViewCell {

	EKEvent* _event;
	bool _editable;
	double _lastLaidOutWidth;
	int _lastLaidOutPosition;

}

@property (nonatomic,readonly) bool isEditable; 
-(id)initWithEvent:(id)arg1 editable:(bool)arg2 style:(long long)arg3 ;
-(id)initWithEvent:(id)arg1 editable:(bool)arg2 ;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(bool)needsLayoutForWidth:(double)arg1 position:(int)arg2 ;
-(bool)isEditable;
-(bool)update;
-(void)setEvent:(id)arg1 ;
-(void).cxx_destruct;
@end

