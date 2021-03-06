/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDChangeableInfo.h>
#import <iWorkImport/TSKTransformableObject.h>

@protocol TSDContainerInfo;
@class NSObject, TSDInfoGeometry, TSSPropertySetChangeDetails, TSSStylesheet, KNAbstractSlide, TSDFill;

@interface KNSlideBackgroundInfo : NSObject <TSDChangeableInfo, TSKTransformableObject> {

	NSObject<TSDContainerInfo>* mParentInfo;
	TSDInfoGeometry* mGeometry;
	TSSPropertySetChangeDetails* mChanges;
	TSSStylesheet* mStylesheet;
	KNAbstractSlide* mSlide;

}

@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (nonatomic,readonly) TSDFill * fill; 
@property (nonatomic,readonly) KNAbstractSlide * slide; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (assign,nonatomic) NSObject<TSDContainerInfo> * parentInfo; 
@property (assign,nonatomic) TSPObject<TSDOwningAttachment> * owningAttachment; 
@property (nonatomic,readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) BOOL isUserModifiable; 
@property (nonatomic,readonly) Class editorClass; 
+(id)backgroundWithSlide:(id)arg1 andGeometry:(id)arg2 ;
-(id)copyWithContext:(id)arg1 ;
-(void)beginCollectingChanges;
-(id)endCollectingChanges;
-(BOOL)isThemeContent;
-(id)parentInfo;
-(Class)repClass;
-(id)owningAttachment;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)willChangeProperty:(int)arg1 ;
-(BOOL)isUserModifiable;
-(void)setParentInfo:(id)arg1 ;
-(void)setOwningAttachment:(id)arg1 ;
-(id)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(id)initWithSlide:(id)arg1 andGeometry:(id)arg2 ;
-(void)dealloc;
-(id)fill;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(CGSize)minimumSize;
-(id)slide;
-(Class)layoutClass;
@end

