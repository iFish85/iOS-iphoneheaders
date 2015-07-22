/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordID, CKDPCSData;

@interface CKDRecordPCSData : CKDPCSData {

	CKRecordID* _recordID;
	CKDPCSData* _zonePCSData;
	CKDPCSData* _sharePCSData;

}

@property (nonatomic,retain) CKRecordID * recordID;                  //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKDPCSData * zonePCSData;               //@synthesize zonePCSData=_zonePCSData - In the implementation block
@property (nonatomic,retain) CKDPCSData * sharePCSData;              //@synthesize sharePCSData=_sharePCSData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataWithRecordID:(id)arg1 pcsData:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)itemID;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setZonePCSData:(CKDPCSData *)arg1 ;
-(void)setSharePCSData:(CKDPCSData *)arg1 ;
-(CKDPCSData *)zonePCSData;
-(CKDPCSData *)sharePCSData;
-(BOOL)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2 ;
-(id)initWithRecordID:(id)arg1 pcsData:(id)arg2 ;
@end
