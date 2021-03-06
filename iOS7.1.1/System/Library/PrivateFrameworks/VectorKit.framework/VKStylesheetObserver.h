/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKStylesheetObserver <NSObject>
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
@optional
-(void)prepareForStylesheetTransitionToMapDisplayStyle:(long long)arg1 withReadinessBlock:(/*^block*/ id)arg2;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)stylesheetWillTransition:(long long)arg1;
-(void)stylesheetDoneChanging;

@required
+(bool)reloadOnStylesheetChange;
-(id)stylesheet;
@end

