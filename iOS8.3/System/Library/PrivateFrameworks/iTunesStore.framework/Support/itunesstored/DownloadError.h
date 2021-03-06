/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSMutableOrderedSet, NSString, NSOrderedSet;

@interface DownloadError : NSObject <NSCopying> {

	NSMutableOrderedSet* _downloadIdentifiers;
	NSString* _downloadKind;
	NSString* _downloadTitle;
	id _notification;

}

@property (nonatomic,readonly) NSOrderedSet * downloadIdentifiers; 
@property (nonatomic,copy) NSString * downloadKind;                                                       //@synthesize downloadKind=_downloadKind - In the implementation block
@property (nonatomic,copy) NSString * downloadTitle;                                                      //@synthesize downloadTitle=_downloadTitle - In the implementation block
@property (getter=isValidError,nonatomic,readonly) char validError; 
@property (setter=_setNotification:,getter=_notification,nonatomic,retain) id _notification;              //@synthesize notification=_notification - In the implementation block
-(id)_notification;
-(char)representsDownloadWithIdentifier:(long long)arg1 ;
-(char)canCoalesceWithError:(id)arg1 ;
-(void)addDownloadIdentifiers:(id)arg1 ;
-(char)isValidError;
-(void)performActionForResponseFlags:(unsigned long)arg1 ;
-(void)_setNotification:(id)arg1 ;
-(void)addDownloadIdentifier:(long long)arg1 ;
-(void)removeDownloadIdentifier:(long long)arg1 ;
-(NSString *)downloadTitle;
-(void)setDownloadTitle:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSOrderedSet *)downloadIdentifiers;
-(NSString *)downloadKind;
-(void)setDownloadKind:(NSString *)arg1 ;
-(id)copyUserNotification;
@end

