/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <Contacts/ABMembersControllerSearchCompletionDelegate.h>
#import <Contacts/ABApplicationTest.h>

@class ABPeoplePickerNavigationController, NSDictionary, NSMutableDictionary, NSArray;

@interface SearchByNameTest : NSObject <UINavigationControllerDelegate, ABMembersControllerSearchCompletionDelegate, ABApplicationTest> {

	BOOL _animate;
	ABPeoplePickerNavigationController* _peoplePicker;
	NSDictionary* _testOptions;
	NSMutableDictionary* _extraResults;
	NSArray* _allDatabaseDirectories;
	unsigned _currentDirectoryIndex;
	int _testState;
	NSArray* _allSearchQueries;
	unsigned _currentQueryIndex;
	double _lastSearchBeginTime;

}

@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePicker;              //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (nonatomic,retain) NSDictionary * testOptions;                                     //@synthesize testOptions=_testOptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extraResults;                             //@synthesize extraResults=_extraResults - In the implementation block
@property (nonatomic,retain) NSArray * allDatabaseDirectories;                               //@synthesize allDatabaseDirectories=_allDatabaseDirectories - In the implementation block
@property (assign,nonatomic) unsigned currentDirectoryIndex;                                 //@synthesize currentDirectoryIndex=_currentDirectoryIndex - In the implementation block
@property (assign,nonatomic) int testState;                                                  //@synthesize testState=_testState - In the implementation block
@property (assign,nonatomic) BOOL animate;                                                   //@synthesize animate=_animate - In the implementation block
@property (nonatomic,retain) NSArray * allSearchQueries;                                     //@synthesize allSearchQueries=_allSearchQueries - In the implementation block
@property (assign,nonatomic) unsigned currentQueryIndex;                                     //@synthesize currentQueryIndex=_currentQueryIndex - In the implementation block
@property (assign,nonatomic) double lastSearchBeginTime;                                     //@synthesize lastSearchBeginTime=_lastSearchBeginTime - In the implementation block
-(BOOL)startTestWithOptions:(id)arg1 peoplePicker:(id)arg2 ;
-(void)setTestOptions:(id)arg1 ;
-(id)testOptions;
-(void)setExtraResults:(id)arg1 ;
-(void)setAllDatabaseDirectories:(id)arg1 ;
-(void)setAllSearchQueries:(id)arg1 ;
-(void)setCurrentQueryIndex:(unsigned)arg1 ;
-(void)loadNextDatabase;
-(unsigned)currentQueryIndex;
-(id)allSearchQueries;
-(double)lastSearchBeginTime;
-(id)extraResults;
-(void)startSearchQuery;
-(void)didShowViewController:(id)arg1 ;
-(unsigned)currentDirectoryIndex;
-(void)setTestState:(int)arg1 ;
-(void)setCurrentDirectoryIndex:(unsigned)arg1 ;
-(int)testState;
-(void)setLastSearchBeginTime:(double)arg1 ;
-(void)membersControllerDidCompleteSearch:(id)arg1 ;
-(id)allDatabaseDirectories;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void).cxx_destruct;
-(id)peoplePicker;
-(void)setPeoplePicker:(id)arg1 ;
-(BOOL)animate;
-(void)setAnimate:(BOOL)arg1 ;
@end

