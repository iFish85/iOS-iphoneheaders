/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSpring : SKPhysicsJoint {

	float _damping;
	float _frequency;

}

@property (assign,nonatomic) float damping;                //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) float frequency;              //@synthesize frequency=_frequency - In the implementation block
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setDamping:(float)arg1 ;
-(float)damping;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
@end

