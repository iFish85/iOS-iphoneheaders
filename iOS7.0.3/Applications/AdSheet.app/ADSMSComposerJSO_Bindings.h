/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ADSMSComposerJSO_Bindings <JSExport>
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,retain) NSArray * recipients; 
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,readonly) int kADSMSComposerMaximumAttachmentBytes; 
@required
-(void)presentComposer;
-(BOOL)canAttachMIMEType:(id)arg1;
-(int)kADSMSComposerMaximumAttachmentBytes;
-(void)setAttachments:(id)arg1;
-(void)setListener:(id)arg1;
-(id)body;
-(void)setBody:(id)arg1;
-(id)listener;
-(id)recipients;
-(void)setRecipients:(id)arg1;
@end

