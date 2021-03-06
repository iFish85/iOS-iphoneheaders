/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAABPersonSearch.h>
#import <AddressBook/ABAssistantCommand.h>
#import <AddressBook/ABSearchOperationDelegate.h>

@class NSMutableArray, DADConnection, NSString;

@interface ABAssistantCommandSearchPerson : SAABPersonSearch <ABAssistantCommand, ABSearchOperationDelegate> {

	void* _addressBook;
	NSMutableArray* _peopleFound;
	DADConnection* _connection;

}

@property (nonatomic,retain) DADConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)searchForRemoteContacts;
-(BOOL)searchForLocalContacts;
-(void)searchForMeContacts;
-(id)_perform;
-(BOOL)addABSearchOperationWithPredicate:(id)arg1 toOperationQueue:(id)arg2 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(DADConnection *)connection;
-(void)setConnection:(DADConnection *)arg1 ;
-(id)_validate;
-(void*)addressBook;
@end

