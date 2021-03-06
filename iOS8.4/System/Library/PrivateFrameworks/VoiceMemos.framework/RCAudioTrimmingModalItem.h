/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RCAudioTrimmingModalItemDelegate;
@class AVAssetExportSession, NSString, RCTrimTimeRangeOperation, NSOperationQueue, RCActionSheetController, RCAudioTrimmingModalItemViewController, RCSavedRecording;

@interface RCAudioTrimmingModalItem : NSObject {

	AVAssetExportSession* _exportSession;
	NSString* _sourcePath;
	NSString* _destinationPath;
	BOOL _playing;
	BOOL _isBeingDismissed;
	BOOL _cancelTrimRequested;
	RCTrimTimeRangeOperation* _trimOperation;
	NSOperationQueue* _trimOperationQueue;
	RCActionSheetController* _presentedActionSheetController;
	RCAudioTrimmingModalItemViewController* _trimmingViewController;
	BOOL _deletesDestinationPathWhenDone;
	id<RCAudioTrimmingModalItemDelegate> _delegate;
	double _maximumTrimmedDuration;
	RCSavedRecording* _recording;

}

@property (assign,nonatomic,__weak) id<RCAudioTrimmingModalItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourcePath;                                      //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationPath;                                 //@synthesize destinationPath=_destinationPath - In the implementation block
@property (assign,nonatomic) BOOL deletesDestinationPathWhenDone;                               //@synthesize deletesDestinationPathWhenDone=_deletesDestinationPathWhenDone - In the implementation block
@property (assign,nonatomic) double maximumTrimmedDuration;                                     //@synthesize maximumTrimmedDuration=_maximumTrimmedDuration - In the implementation block
@property (nonatomic,readonly) RCSavedRecording * recording;                                    //@synthesize recording=_recording - In the implementation block
+(id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RCAudioTrimmingModalItemDelegate>)arg1 ;
-(id)init;
-(id<RCAudioTrimmingModalItemDelegate>)delegate;
-(void)dismiss;
-(void)_applicationWillResignActive:(id)arg1 ;
-(RCSavedRecording *)recording;
-(void)_handleTrimSheetActionWithClickedButtonIndex:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(void)setMaximumTrimmedDuration:(double)arg1 ;
-(void)showWithPresentationViewController:(id)arg1 message:(id)arg2 trimButtonTitle:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(NSString *)sourcePath;
-(NSString *)destinationPath;
-(BOOL)deletesDestinationPathWhenDone;
-(void)setDeletesDestinationPathWhenDone:(BOOL)arg1 ;
-(double)maximumTrimmedDuration;
-(void)_dismissAnimated:(BOOL)arg1 ;
@end

