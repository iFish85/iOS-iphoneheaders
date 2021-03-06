/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBUIBannerSource, SBUIBannerTarget;
@class SBUIBannerItem, NSString, SBUIBannerAction;

@interface SBUIBannerContext : NSObject {

	SBUIBannerItem* _item;
	id<SBUIBannerSource> _source;
	id<SBUIBannerTarget> _target;
	char _isValid;
	char _requestsModalPresentation;
	NSString* _presentingActionIdentifier;

}

@property (nonatomic,retain,readonly) SBUIBannerItem * item;                      //@synthesize item=_item - In the implementation block
@property (nonatomic,retain,readonly) id<SBUIBannerSource> source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,retain,readonly) id<SBUIBannerTarget> target;                //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) char requestsModalPresentation;                      //@synthesize requestsModalPresentation=_requestsModalPresentation - In the implementation block
@property (nonatomic,copy) NSString * presentingActionIdentifier;                 //@synthesize presentingActionIdentifier=_presentingActionIdentifier - In the implementation block
@property (nonatomic,readonly) SBUIBannerAction * interactiveAction; 
@property (getter=isValid,nonatomic,readonly) char valid;                         //@synthesize isValid=_isValid - In the implementation block
-(void)dealloc;
-(id)description;
-(SBUIBannerItem *)item;
-(void)invalidate;
-(char)isValid;
-(id<SBUIBannerTarget>)target;
-(id<SBUIBannerSource>)source;
-(id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 presentingActionIdentifier:(id)arg4 requestModalPresentation:(char)arg5 ;
-(NSString *)presentingActionIdentifier;
-(id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 ;
-(SBUIBannerAction *)interactiveAction;
-(char)requestsModalPresentation;
-(void)setRequestsModalPresentation:(char)arg1 ;
-(void)setPresentingActionIdentifier:(NSString *)arg1 ;
@end

