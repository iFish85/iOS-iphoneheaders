/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADClient.h>
#import <OfficeImport/OADTextClient.h>

@class EDSheet, EDAnchor, EDTextBox, EDComment, NSMutableDictionary, NSString;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {

	EDSheet* mSheet;
	id mClientState;
	EDAnchor* mAnchor;
	EDTextBox* mTextBox;
	EDComment* mComment;
	NSMutableDictionary* mTableModels;
	CGRect mBounds;
	BOOL mIsBoundsSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)hasText;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(id)clientState;
-(BOOL)hasBounds;
-(void)setComment:(id)arg1 ;
-(id)textBox;
-(BOOL)areBoundsSet;
-(void)setSheet:(id)arg1 ;
-(void)setClientState:(id)arg1 ;
-(id)tableModels;
-(void)setTableModels:(id)arg1 ;
-(void)setTextBox:(id)arg1 ;
-(id)comment;
-(id)sheet;
@end
