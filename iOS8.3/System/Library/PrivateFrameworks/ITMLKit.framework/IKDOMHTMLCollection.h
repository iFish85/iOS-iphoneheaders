/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:15:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSDOMHTMLCollection.h>

@class IKDOMNode;

@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection> {

	IKDOMNode* _parentNode;

}

@property (assign,nonatomic,__weak) IKDOMNode * parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (readonly) unsigned long length; 
-(void)setParentNode:(IKDOMNode *)arg1 ;
-(unsigned long)length;
-(IKDOMNode *)parentNode;
-(id)item:(unsigned long)arg1 ;
-(id)initWithAppContext:(id)arg1 node:(id)arg2 ;
@end

