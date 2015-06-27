/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface iAP2VehicleInfo : NSObject {

	unsigned paramCountArr[6];
	NSNumber* componentID;
	NSString* componentName;
	NSNumber* year;
	NSString* make;
	NSString* model;
	unsigned long long engineTypeBitmask;

}

@property (retain) NSNumber * componentID; 
@property (retain) NSString * componentName; 
@property (assign) unsigned long long engineTypeBitmask; 
@property (assign) NSNumber * year; 
@property (retain) NSString * make; 
@property (retain) NSString * model; 
-(unsigned)paramCount:(int)arg1 ;
-(NSNumber *)componentID;
-(void)incrementParamCount:(int)arg1 ;
-(void)setComponentName:(NSString *)arg1 ;
-(void)setComponentID:(NSNumber *)arg1 ;
-(char)isVehicleInfoSupported:(int)arg1 ;
-(void)addEngineTypeBitmask:(int)arg1 ;
-(unsigned long long)engineTypeBitmask;
-(void)setEngineTypeBitmask:(unsigned long long)arg1 ;
-(NSString *)make;
-(void)setMake:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)model;
-(NSString *)componentName;
-(void)setModel:(NSString *)arg1 ;
-(NSNumber *)year;
-(void)setYear:(NSNumber *)arg1 ;
@end
