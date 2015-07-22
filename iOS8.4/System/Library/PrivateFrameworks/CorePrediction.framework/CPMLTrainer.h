/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePrediction/CorePrediction-Structs.h>
@class NSDictionary, CPMLDB, CPMLSchema;

@interface CPMLTrainer : NSObject {

	BOOL shouldFail;
	sqlite3Ref db;
	sqlite3Ref modelDB;
	NSDictionary* modelPlist;
	CPMLDB* cpmlDB;
	CPMLCDB* cpCDB;
	CPMLAlgorithm* cpMLAlgo;
	CPMLSchema* cpmlSchema;
	CPMLStatistics* trainerCPStatistics;
	CPMLSerialization* trainerCPSerializer;
	CPMLTunableData* cpTuneableData;
	int mapFunction;

}
-(void)dealloc;
-(id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3 ;
-(void)train:(BOOL)arg1 ;
-(void)buildTrainingMachineLearningAlgorithm:(id)arg1 ;
-(id)fileProtectionClassRequest:(id)arg1 ;
@end
