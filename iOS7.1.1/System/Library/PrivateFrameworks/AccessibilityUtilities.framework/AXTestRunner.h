/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXTestRunner : NSObject {

	/*^block*/ id _preTestAction;
	/*^block*/ id _postTestAction;

}

@property (nonatomic,copy) id preTestAction;               //@synthesize preTestAction=_preTestAction - In the implementation block
@property (nonatomic,copy) id postTestAction;              //@synthesize postTestAction=_postTestAction - In the implementation block
-(void)dealloc;
-(void)setPreTestAction:(/*^block*/ id)arg1 ;
-(void)setPostTestAction:(/*^block*/ id)arg1 ;
-(/*^block*/ id)preTestAction;
-(/*^block*/ id)postTestAction;
-(void)runTest:(Class)arg1 ;
@end

