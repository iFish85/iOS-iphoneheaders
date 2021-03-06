/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UIFlowLayoutSection, _UIFlowLayoutRow;

@interface _UIFlowLayoutItem : NSObject {

	_UIFlowLayoutSection* _section;
	_UIFlowLayoutRow* _rowObject;
	CGRect _itemFrame;

}

@property (assign,nonatomic) _UIFlowLayoutSection * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) _UIFlowLayoutRow * rowObject;                //@synthesize rowObject=_rowObject - In the implementation block
@property (assign,nonatomic) CGRect itemFrame;                            //@synthesize itemFrame=_itemFrame - In the implementation block
-(id)copy;
-(id)section;
-(void)setItemFrame:(CGRect)arg1 ;
-(CGRect)itemFrame;
-(id)rowObject;
-(void)setSection:(id)arg1 ;
-(void)setRowObject:(id)arg1 ;
@end

