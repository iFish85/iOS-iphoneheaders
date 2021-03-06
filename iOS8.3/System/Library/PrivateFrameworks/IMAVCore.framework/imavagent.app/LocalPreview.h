/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:08:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/imavagent.app/imavagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <imavagent/AVConferencePreviewClientDelegate.h>

@class NSMutableArray, NSDate, NSArray;

@interface LocalPreview : NSObject <AVConferencePreviewClientDelegate> {

	NSMutableArray* _listenersRunningPreview;
	NSDate* _initialStartPreviewRequest;
	void* _previewTransaction;

}

@property (nonatomic,retain,readonly) NSArray * listenersRunningPreview;              //@synthesize listenersRunningPreview=_listenersRunningPreview - In the implementation block
-(NSArray *)listenersRunningPreview;
-(void)__reallyStopPreview;
-(void)__updatePreviewState;
-(void)startPreviewWithListenerID:(id)arg1 ;
-(void)stopPreviewWithListenerID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)didReceiveCommError;
@end

