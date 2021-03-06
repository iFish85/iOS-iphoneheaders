/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget, NSString;

@interface PDSequentialTimeNode : PDTimeNode

@property (nonatomic,retain) PDAnimationTarget * target; 
@property (assign,nonatomic) int presetClass; 
@property (assign,nonatomic) int presetId; 
@property (assign,nonatomic) int triggerType; 
@property (assign,nonatomic) int iterateType; 
@property (assign,nonatomic) double delay; 
@property (assign,nonatomic) double direction; 
@property (nonatomic,retain) NSString * groupId; 
+(id)newSequentialTimeNodeGroupForAnimationInfo;
-(void)setDelay:(double)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setDirection:(double)arg1 ;
-(double)direction;
-(double)delay;
-(id)groupId;
-(void)setPresetId:(int)arg1 ;
-(int)presetClass;
-(void)setGroupId:(id)arg1 ;
-(int)presetId;
-(int)iterateType;
-(void)setPresetClass:(int)arg1 ;
-(void)setIterateType:(int)arg1 ;
-(id)level1ParallelTimeNodeGroup;
-(id)level2ParallelTimeNodeGroup;
-(id)level3SetBehavior;
-(void)setTriggerType:(int)arg1 ;
-(int)triggerType;
@end

