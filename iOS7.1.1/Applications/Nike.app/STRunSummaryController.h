/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Nike/STCustomSheetControllerDelegate.h>

@class STRunSummaryView, NSDictionary, STCalibrationDistanceController;

@interface STRunSummaryController : UIViewController <STCustomSheetControllerDelegate> {

	STRunSummaryView* _runSummaryView;
	NSDictionary* _workoutSummary;
	BOOL _didSaveWorkout;
	BOOL _historical;
	STCalibrationDistanceController* _calibrationDistanceController;
	float _minCalibrationDistance;
	float _maxCalibrationDistance;

}

@property (nonatomic,retain) NSDictionary * workoutSummary;                    //@synthesize workoutSummary=_workoutSummary - In the implementation block
@property (assign,getter=isHistorical,nonatomic) BOOL historical;              //@synthesize historical=_historical - In the implementation block
-(void)customValueSelectionDidSave;
-(void)customValueSelectionDidCancel;
-(void)setWorkoutSummary:(id)arg1 ;
-(void)setHistorical:(BOOL)arg1 ;
-(void)_saveWorkout:(BOOL)arg1 ;
-(void)_showCalibration;
-(void)_modifyViewAfterSave;
-(float)_distanceIntervalToUseForCalibration;
-(id)_newCalibrationEligibleLabel;
-(id)workoutSummary;
-(BOOL)isHistorical;
-(void)_done;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
@end

