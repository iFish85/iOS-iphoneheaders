/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class CALayer, NSError, NSString, AVMediaDataRequester, NSObject, AVWeakReference;

@interface AVSampleBufferDisplayLayerInternal : NSObject {

	CALayer* contentLayer;
	OpaqueFigVideoQueueRef videoQueue;
	BOOL outputObscured;
	long long status;
	NSError* error;
	NSString* videoGravity;
	CGSize presentationSize;
	CGRect bounds;
	BOOL isRequestingMediaData;
	AVMediaDataRequester* mediaDataRequester;
	BOOL aboveHighWaterLevel;
	NSObject*<OS_dispatch_queue> serialQueue;
	AVWeakReference* weakReferenceToSelf;
	AVWeakReference* weakReferenceToSynchronizer;
	BOOL addedToSynchronizer;
	BOOL controlTimebaseSetByUserIsInUse;
	OpaqueCMTimebaseRef controlTimebaseSetByUser;
	OpaqueCMTimebaseRef readOnlyVideoQueueTimebase;
	OpaqueCMTimebaseRef readOnlyRenderingTimebase;

}
@end
