/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <Reminders/RemindersListCell.h>
#import <Reminders/RemindersCheckboxViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol RemindersCheckboxCell, UITextViewDelegate;
@class NSAttributedString, NSString, RemindersCheckboxView, CALayer, RemindersCellLayerDelegate, UIView, UILongPressGestureRecognizer, UIColor, EKExpandingTextView, NSURL, NSDictionary;

@interface RemindersCheckboxCell : RemindersListCell <RemindersCheckboxViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate> {

	NSAttributedString* _titleAttrString;
	NSAttributedString* _deadlineAttrString;
	NSAttributedString* _locationAttrString;
	NSAttributedString* _notesAttrString;
	NSAttributedString* _calendarAttrString;
	NSString* _matchingSearchTerm;
	RemindersCheckboxView* _checkboxView;
	CALayer* _contents;
	RemindersCellLayerDelegate* _layerDelegate;
	UIView* _linkHighlightView;
	UILongPressGestureRecognizer* _actionPressRecognizer;
	CGSize _titleSize;
	CGSize _deadlineSize;
	CGSize _notesLabelSize;
	BOOL _titleLabelSizeValid;
	BOOL _notesLabelSizeValid;
	int _appearance;
	BOOL _completed;
	BOOL _overdue;
	BOOL _checkboxHidden;
	BOOL _checkboxEnabled;
	UIColor* _calendarColor;
	int _priorityLevel;
	<RemindersCheckboxCell>* _delegate;
	<UITextViewDelegate>* _textViewDelegate;
	EKExpandingTextView* _textView;
	unsigned _positionOfDeadline;
	NSURL* _actionURL;
	int _style;
	NSDictionary* _titleAttributes;

}

@property (nonatomic,copy) UIColor * calendarColor;                                       //@synthesize calendarColor=_calendarColor - In the implementation block
@property (assign,nonatomic) int priorityLevel;                                           //@synthesize priorityLevel=_priorityLevel - In the implementation block
@property (assign,nonatomic) BOOL completed;                                              //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) BOOL overdue;                                                //@synthesize overdue=_overdue - In the implementation block
@property (assign,nonatomic,__weak) <RemindersCheckboxCell> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) <UITextViewDelegate> * textViewDelegate;              //@synthesize textViewDelegate=_textViewDelegate - In the implementation block
@property (nonatomic,readonly) EKExpandingTextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) unsigned positionOfDeadline;                                 //@synthesize positionOfDeadline=_positionOfDeadline - In the implementation block
@property (getter=isChecked,nonatomic,readonly) BOOL checked; 
@property (assign,nonatomic) BOOL checkboxHidden;                                         //@synthesize checkboxHidden=_checkboxHidden - In the implementation block
@property (assign,nonatomic) BOOL checkboxEnabled;                                        //@synthesize checkboxEnabled=_checkboxEnabled - In the implementation block
@property (nonatomic,copy) NSURL * actionURL;                                             //@synthesize actionURL=_actionURL - In the implementation block
@property (assign,nonatomic) int style;                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSDictionary * titleAttributes;                              //@synthesize titleAttributes=_titleAttributes - In the implementation block
+(void)fontSizeChanged;
+(float)cellHeightForTitle:(id)arg1 positionOfDeadline:(unsigned)arg2 deadlineString:(id)arg3 hasLocation:(BOOL)arg4 notes:(id)arg5 priorityLevel:(int)arg6 showsCalendar:(BOOL)arg7 width:(float)arg8 editing:(BOOL)arg9 ;
+(id)_cacheKeyForTitle:(id)arg1 priorityLevel:(int)arg2 maxTextWidth:(float)arg3 lineHeight:(float)arg4 ;
+(id)_titleSizeCache;
+(id)uncoloredPriorityImageForLevel:(int)arg1 ;
+(float)_maxTextWidthForCellWidth:(float)arg1 ;
+(CGSize)_sizeForTitle:(id)arg1 priorityLevel:(int)arg2 maxTextWidth:(float)arg3 lineHeight:(float)arg4 ;
+(CGSize)_sizeForNotes:(id)arg1 maxTextWidth:(float)arg2 ;
+(void)setCaption2LineHeight;
+(id)whiteColorForTitleWithAppearance:(int)arg1 completed:(BOOL)arg2 ;
+(id)whiteColorForDetailsWithAppearance:(int)arg1 completed:(BOOL)arg2 ;
+(float)cellHeightIfCachedForTitle:(id)arg1 positionOfDeadline:(unsigned)arg2 deadlineString:(id)arg3 hasLocation:(BOOL)arg4 notes:(id)arg5 priorityLevel:(int)arg6 showsCalendar:(BOOL)arg7 width:(float)arg8 editing:(BOOL)arg9 ;
+(float)lineSpacing;
+(float)rightMargin;
+(float)topMargin;
+(float)bottomMargin;
-(void)setMatchingSearchTerm:(id)arg1 ;
-(void)fontSizeChanged;
-(void)setCheckboxHidden:(BOOL)arg1 ;
-(void)setOverdue:(BOOL)arg1 ;
-(void)setDeadline:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 ;
-(void)setTextViewDelegate:(id)arg1 ;
-(void)setPositionOfDeadline:(unsigned)arg1 ;
-(void)drawContentInContext:(CGContextRef)arg1 ;
-(void)updateTitleAttributes;
-(void)updateDeadlineAttributes;
-(id)detailAttributes;
-(void)updateTextAttributes;
-(float)maxWidthForTitle;
-(id)titleAttributes;
-(id)priorityImageForLevel:(int)arg1 ;
-(void)updateTitleString;
-(id)titleAttributedString:(id)arg1 ;
-(id)overdueDetailAttributes;
-(float)maxWidthForLabels;
-(BOOL)isDisplayingEditControl;
-(CGSize)titleSize;
-(CGSize)editingTitleSize;
-(CGSize)notesLabelSize;
-(void)_tap:(id)arg1 ;
-(void)_addTextView;
-(void)resetTextViewAttributes;
-(id)plainTextTitle;
-(void)_removeTextView;
-(void)checkboxTapped;
-(void)vibrantize;
-(void)setCheckboxEnabled:(BOOL)arg1 ;
-(void)setActionURL:(id)arg1 ;
-(BOOL)overdue;
-(id)textViewDelegate;
-(unsigned)positionOfDeadline;
-(BOOL)checkboxHidden;
-(BOOL)checkboxEnabled;
-(void)setTitleAttributes:(id)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setNotes:(id)arg1 ;
-(void)setCalendarName:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(void)setStyle:(int)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(int)style;
-(void)prepareForReuse;
-(void)beginEditing;
-(void)endEditing;
-(id)textView;
-(void).cxx_destruct;
-(BOOL)isChecked;
-(void)setCalendarColor:(id)arg1 ;
-(id)calendarColor;
-(void)setPriorityLevel:(int)arg1 ;
-(int)priorityLevel;
-(id)actionURL;
-(void)setLocation:(id)arg1 ;
@end

