/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SQLiteTableColumn : NSObject {

	NSString* _name;
	NSString* _qualifiers;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * qualifiers;              //@synthesize qualifiers=_qualifiers - In the implementation block
-(id)SQL;
-(id)qualifiers;
-(void)setQualifiers:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
@end

