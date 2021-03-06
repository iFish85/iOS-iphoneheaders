/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {

	BOOL mShowingSidebar;
	BOOL mShowingNavigatorViewInSidebar;
	BOOL mShowingPresenterNotes;
	BOOL mShowingLightTable;
	BOOL mShowingInspectorPane;
	BOOL mShowingMasterSlides;
	int mInspectorPaneViewMode;

}

@property (getter=isShowingSidebar,nonatomic,readonly) BOOL showingSidebar; 
@property (nonatomic,readonly) int sidebarViewMode; 
@property (getter=isShowingLightTable,nonatomic,readonly) BOOL showingLightTable; 
@property (getter=isShowingPresenterNotes,nonatomic,readonly) BOOL showingPresenterNotes; 
@property (getter=isShowingInspectorPane,nonatomic,readonly) BOOL showingInspectorPane; 
@property (nonatomic,readonly) int inspectorPaneViewMode; 
@property (getter=isShowingMasterSlides,nonatomic,readonly) BOOL showingMasterSlides; 
@property (getter=p_isShowingNavigatorViewInSidebar,nonatomic,readonly) BOOL p_showingNavigatorViewInSidebar; 
+(id)uiLayoutFromArchive:(const DesktopUILayoutArchive*)arg1 unarchiver:(id)arg2 context:(id)arg3 ;
-(void)saveToArchive:(DesktopUILayoutArchive*)arg1 archiver:(id)arg2 ;
-(BOOL)isShowingSidebar;
-(int)sidebarViewMode;
-(BOOL)isShowingPresenterNotes;
-(BOOL)isShowingLightTable;
-(BOOL)isShowingInspectorPane;
-(int)inspectorPaneViewMode;
-(id)archivedUILayoutInContext:(id)arg1 ;
-(BOOL)p_isShowingNavigatorViewInSidebar;
-(BOOL)isShowingMasterSlides;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
@end

