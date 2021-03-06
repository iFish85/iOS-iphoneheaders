/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:06:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/vmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vmd/VMDVoicemail.h>
#import <vmd/VMDVoicemailConcrete.h>

@protocol VMDAccountConcrete;
@class VMDAccount, NSString;

@interface VMDLegacyVoicemail : VMDVoicemail <VMDVoicemailConcrete> {

	void* _record;
	VMDAccount*<VMDAccountConcrete> _account;

}

@property (readonly) void* record;                                  //@synthesize record=_record - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStoreRecord:(void*)arg1 account:(id)arg2 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)dealloc;
-(int)duration;
-(long long)identifier;
-(id)date;
-(id)sender;
-(void*)record;
-(id)account;
-(unsigned)flags;
-(unsigned long long)remoteUID;
-(id)callbackNumber;
-(id)dataPath;
@end

