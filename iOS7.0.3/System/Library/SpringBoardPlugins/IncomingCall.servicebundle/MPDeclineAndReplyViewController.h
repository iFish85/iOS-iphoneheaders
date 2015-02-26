/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFMessageComposeViewController.h>

@protocol MPDeclineAndReplyViewControllerDelegate;
@class NSString;

@interface MPDeclineAndReplyViewController : MFMessageComposeViewController {

	/*^block*/ id _readyToPresentHandler;
	NSString* _sentBody;
	<MPDeclineAndReplyViewControllerDelegate>* _declineAndReplyViewControllerDelegate;

}

@property (readonly) NSString * sentBody;                                                                          //@synthesize sentBody=_sentBody - In the implementation block
@property (assign) <MPDeclineAndReplyViewControllerDelegate> * declineAndReplyViewControllerDelegate;              //@synthesize declineAndReplyViewControllerDelegate=_declineAndReplyViewControllerDelegate - In the implementation block
-(id)sentBody;
-(void)setDeclineAndReplyViewControllerDelegate:(id)arg1 ;
-(void)startWithReadyHandler:(/*^block*/ id)arg1 ;
-(id)declineAndReplyViewControllerDelegate;
-(void)dealloc;
-(void)setCanEditRecipients:(BOOL)arg1 ;
@end
