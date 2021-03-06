/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SiriUISuggestionsViewDelegate <NSObject>
@optional
-(double)statusBarHeightForSuggestionsView:(id)arg1;
-(double)statusViewHeightForSuggestionsView:(id)arg1;
-(void)getNextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
-(void)didShowSuggestionsForSuggestionsView:(id)arg1;
-(void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;

@end

