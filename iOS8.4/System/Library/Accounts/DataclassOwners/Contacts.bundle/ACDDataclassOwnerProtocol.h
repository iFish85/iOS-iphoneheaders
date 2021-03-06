/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Accounts/DataclassOwners/Contacts.bundle/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDDataclassOwnerProtocol <NSObject>
@required
+(id)dataclasses;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4;

@end

