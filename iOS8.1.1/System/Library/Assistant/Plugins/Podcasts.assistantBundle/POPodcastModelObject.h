/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSIndexPath, SAMPCollection;

@interface POPodcastModelObject : NSObject {

	NSString* _uuid;
	NSString* _title;
	NSIndexPath* _indexPath;

}

@property (retain) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (retain) NSIndexPath * indexPath;                        //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) SAMPCollection * SAMPCollection; 
+(Class)SAMPClass;
+(id)uriScheme;
-(SAMPCollection *)SAMPCollection;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(NSIndexPath *)indexPath;
-(NSString *)uuid;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
@end
