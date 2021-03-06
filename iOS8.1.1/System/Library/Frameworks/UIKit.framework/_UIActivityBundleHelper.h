/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject {

	LSBundleProxy* _bundleProxy;

}

@property (nonatomic,retain) LSBundleProxy * bundleProxy;              //@synthesize bundleProxy=_bundleProxy - In the implementation block
+(id)activityBundleHelperForExtension:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)localizedName;
-(id)initWithBundleProxy:(id)arg1 ;
-(void)setBundleProxy:(LSBundleProxy *)arg1 ;
-(LSBundleProxy *)bundleProxy;
-(double)preferredImageScale;
-(id)activityImageForApplicationBundleURL:(id)arg1 applicationIconFormat:(int)arg2 activityCategory:(long long)arg3 ;
-(id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2 ;
@end

