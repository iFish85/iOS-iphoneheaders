/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject {

	NSMutableArray* nodeList;
	UIColor* labelColor;

}

@property (readonly) unsigned numNodes; 
@property (retain) UIColor * labelColor; 
-(unsigned)numNodes;
-(id)nodeAtIndex:(unsigned)arg1 ;
-(void)createNodeList;
-(id)nodeWithNodeInfo:(id)arg1 ;
-(void)refresh;
-(id)init;
-(UIColor *)labelColor;
-(void)setLabelColor:(UIColor *)arg1 ;
@end

