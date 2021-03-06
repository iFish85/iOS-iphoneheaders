/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {

	UIImage* _image;
	NSString* _uuid;

}

@property (nonatomic,retain,readonly) UIImage * image; 
@property (nonatomic,retain,readonly) NSString * assetUUID; 
+(id)notification;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)name;
-(id)_init;
-(UIImage *)image;
-(id)userInfo;
-(id)object;
-(NSString *)assetUUID;
@end

