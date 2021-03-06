/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AddressBookUI/CNContactPickerContentDelegate.h>

@protocol CNContactPickerDelegate, CNContactPickerContentViewController;
@class NSArray, NSPredicate, NSString, UIViewController;

@interface CNContactPicker : UIViewController <CNContactPickerContentDelegate> {

	char _ignoreViewWillBePresented;
	char _hidesSearchableSources;
	char _allowsEditing;
	char _allowsBlocking;
	char _allowsCancel;
	char _allowsOnlyPhoneActions;
	char _allowsOnlyFaceTimeActions;
	char _allowsFaceTime;
	char _allowsSounds;
	char _hidesPromptInLandscape;
	char _defaultViewControllerVisible;
	NSArray* _displayedKeys;
	id<CNContactPickerDelegate> _delegate;
	NSPredicate* _predicateForEnablingContact;
	NSPredicate* _predicateForSelectionOfContact;
	NSPredicate* _predicateForSelectionOfProperty;
	int _behavior;
	NSString* _prompt;
	NSString* _bannerTitle;
	NSString* _bannerValue;
	UIViewController*<CNContactPickerContentViewController> _viewController;

}

@property (nonatomic,copy) NSArray * displayedKeys;                                                               //@synthesize displayedKeys=_displayedKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPickerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForEnablingContact;                                             //@synthesize predicateForEnablingContact=_predicateForEnablingContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfContact;                                          //@synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfProperty;                                         //@synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty - In the implementation block
@property (assign) int behavior;                                                                                  //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) char hidesSearchableSources;                                                         //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                                                  //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char allowsBlocking;                                                                 //@synthesize allowsBlocking=_allowsBlocking - In the implementation block
@property (assign,nonatomic) char allowsCancel;                                                                   //@synthesize allowsCancel=_allowsCancel - In the implementation block
@property (assign,nonatomic) char allowsOnlyPhoneActions;                                                         //@synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions - In the implementation block
@property (assign,nonatomic) char allowsOnlyFaceTimeActions;                                                      //@synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions - In the implementation block
@property (assign,nonatomic) char allowsFaceTime;                                                                 //@synthesize allowsFaceTime=_allowsFaceTime - In the implementation block
@property (assign,nonatomic) char allowsSounds;                                                                   //@synthesize allowsSounds=_allowsSounds - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                                     //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) char hidesPromptInLandscape;                                                         //@synthesize hidesPromptInLandscape=_hidesPromptInLandscape - In the implementation block
@property (nonatomic,copy) NSString * bannerTitle;                                                                //@synthesize bannerTitle=_bannerTitle - In the implementation block
@property (nonatomic,copy) NSString * bannerValue;                                                                //@synthesize bannerValue=_bannerValue - In the implementation block
@property (getter=isDefaultViewControllerVisible,readonly) char defaultViewControllerVisible;                     //@synthesize defaultViewControllerVisible=_defaultViewControllerVisible - In the implementation block
@property (nonatomic,retain) UIViewController*<CNContactPickerContentViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hidesSearchableSources;
-(void)setHidesSearchableSources:(char)arg1 ;
-(void)setPredicateForSelectionOfContact:(NSPredicate *)arg1 ;
-(void)setPredicateForSelectionOfProperty:(NSPredicate *)arg1 ;
-(void)_prepareViewController;
-(void)_viewWillBePresented;
-(void)_setupViewController;
-(id)_propertiesSource;
-(void)_checkConsistencyFromProperties:(id)arg1 ;
-(id)_pickerPresentedViewController;
-(void)closePickerIfNeeded;
-(void)pickerDidSelectContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(int)arg3 ;
-(void)pickerDidCancel;
-(void)popToDefaultViewController:(char)arg1 ;
-(NSArray *)displayedKeys;
-(void)setDisplayedKeys:(NSArray *)arg1 ;
-(NSPredicate *)predicateForEnablingContact;
-(void)setPredicateForEnablingContact:(NSPredicate *)arg1 ;
-(NSPredicate *)predicateForSelectionOfContact;
-(NSPredicate *)predicateForSelectionOfProperty;
-(char)allowsBlocking;
-(void)setAllowsBlocking:(char)arg1 ;
-(char)allowsCancel;
-(char)allowsOnlyPhoneActions;
-(void)setAllowsOnlyPhoneActions:(char)arg1 ;
-(char)allowsOnlyFaceTimeActions;
-(void)setAllowsOnlyFaceTimeActions:(char)arg1 ;
-(char)allowsFaceTime;
-(void)setAllowsFaceTime:(char)arg1 ;
-(char)allowsSounds;
-(char)hidesPromptInLandscape;
-(void)setHidesPromptInLandscape:(char)arg1 ;
-(NSString *)bannerTitle;
-(void)setBannerTitle:(NSString *)arg1 ;
-(NSString *)bannerValue;
-(void)setBannerValue:(NSString *)arg1 ;
-(char)isDefaultViewControllerVisible;
-(id)styleProvider;
-(void)setAllowsSounds:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CNContactPickerDelegate>)arg1 ;
-(id<CNContactPickerDelegate>)delegate;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_endDelayingPresentation;
-(void)setViewController:(UIViewController*<CNContactPickerContentViewController>)arg1 ;
-(UIViewController*<CNContactPickerContentViewController>)viewController;
-(char)_isDelayingPresentation;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)_setViewController:(id)arg1 ;
-(void)setAllowsCancel:(char)arg1 ;
-(int)behavior;
-(void*)_addressBook;
-(void)setBehavior:(int)arg1 ;
@end

