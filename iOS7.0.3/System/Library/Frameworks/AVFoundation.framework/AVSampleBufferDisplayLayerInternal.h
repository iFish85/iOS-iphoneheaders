/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class CALayer, NSString, AVMediaDataRequester, NSObject;

@interface AVSampleBufferDisplayLayerInternal : NSObject {

	CALayer* contentLayer;
	OpaqueFigVideoQueueRef videoQueue;
	BOOL controlTimebaseSetByUser;
	BOOL hasEnqueuedSamples;
	NSString* videoGravity;
	CGSize presentationSize;
	BOOL isRequestingMediaData;
	AVMediaDataRequester* mediaDataRequester;
	BOOL aboveHighWaterLevel;
	NSObject<OS_dispatch_queue>* serialQueue;

}
@end
