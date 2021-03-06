/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:00 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/_UIDocumentPickerServiceInvalidating.h>

@protocol _UIDocumentPickerContainedViewController;
@class _UIDocumentPickerViewServiceViewController, _UIDocumentPickerContainerModel, UIViewController, _UINavigationControllerPalette, NSString;

@interface _UIDocumentPickerContainerViewController : UIViewController <_UIDocumentPickerServiceInvalidating> {

	_UIDocumentPickerViewServiceViewController* _weak_serviceViewController;
	char _rootContainer;
	_UIDocumentPickerContainerModel* _model;
	UIViewController*<_UIDocumentPickerContainedViewController> _childViewController;
	_UINavigationControllerPalette* _searchPalette;

}

@property (assign,nonatomic,__weak) id<_UIDocumentPickerServiceViewController> serviceViewController; 
@property (nonatomic,retain) _UIDocumentPickerContainerModel * model;                                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIViewController*<_UIDocumentPickerContainedViewController> childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,retain) _UINavigationControllerPalette * searchPalette;                                               //@synthesize searchPalette=_searchPalette - In the implementation block
@property (assign,getter=isRootContainer,nonatomic) char rootContainer;                                                    //@synthesize rootContainer=_rootContainer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)url;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(_UIDocumentPickerContainerModel *)model;
-(id<_UIDocumentPickerServiceViewController>)serviceViewController;
-(void)setServiceViewController:(id<_UIDocumentPickerServiceViewController>)arg1 ;
-(void)setRootContainer:(char)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(char)isRootContainer;
-(void)teardownPalettes;
-(UIViewController*<_UIDocumentPickerContainedViewController>)childViewController;
-(void)setChildViewController:(UIViewController*<_UIDocumentPickerContainedViewController>)arg1 ;
-(void)setChildViewController:(id)arg1 animated:(char)arg2 ;
-(void)_sortOrderViewChanged:(id)arg1 ;
-(void)ensureChildViewController;
-(void)_updateForServiceView;
-(void)setupPalettes;
-(void)setSearchPalette:(_UINavigationControllerPalette *)arg1 ;
-(_UINavigationControllerPalette *)searchPalette;
-(void)_pickCurrentLocationForUpload:(id)arg1 ;
-(void)_tryExportingFile:(id)arg1 toLocation:(id)arg2 ;
-(id)_mangledFilenameForURL:(id)arg1 ;
@end

