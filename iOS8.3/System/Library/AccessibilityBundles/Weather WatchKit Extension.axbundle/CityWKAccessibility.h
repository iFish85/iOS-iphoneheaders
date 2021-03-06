/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:51:24 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/Weather WatchKit Extension.axbundle/Weather WatchKit Extension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather WatchKit Extension/Weather WatchKit Extension-Structs.h>
#import <Weather WatchKit Extension/__CityWKAccessibility_super.h>

@interface CityWKAccessibility : __CityWKAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)accessibilityLabelForDay;
-(void)wc_applyCityDataToRemoteCityInterface:(id)arg1 ;
-(id)_accessibilityTemperatureStringForCeliusNumberString:(id)arg1 ;
-(id)_wc_conditionImage:(id)arg1 forClientInterface:(id)arg2 ;
-(id)_accessibilityApplyDescriptionForHourlyView:(id)arg1 hourlyForecast:(id)arg2 descriptionString:(id)arg3 ;
-(id)_wc_precipitationImage:(id)arg1 forClientInterface:(id)arg2 ;
-(id)_wc_temperatureImage:(id)arg1 forClientInterface:(id)arg2 ;
-(id)_wc_conditionCenterImageForClientInterface:(id)arg1 ;
-(id)_wc_precipitationCenterImageForClientInterface:(id)arg1 ;
-(id)_wc_temperatureCenterImageForClientInterface:(id)arg1 ;
-(char)_accessibilityWantsCelsius;
-(id)_wc_hourlyForecastImageOfType:(int)arg1 forCity:(id)arg2 ;
-(id)_accessibilityImageRegionsFromElementsInObject:(id)arg1 shouldIncreaseFrame:(char)arg2 ;
-(id)_wc_weekdayForecastDictionariesFromForecasts:(id)arg1 temperatureDataIsInCelsius:(char)arg2 targetDeviceType:(int)arg3 ;
-(id)_accessibilityAddConditionDescriptionToForecastDictionary:(id)arg1 forecast:(id)arg2 index:(unsigned)arg3 ;
-(id)_accessibilityHourStringForCurrentLocaleWithMilitaryTimeString:(id)arg1 ;
-(CGRect)_accessibilityDoubledFrame:(CGRect)arg1 ;
-(id)_accessibilityImageRegionForLabel:(id)arg1 frame:(CGRect)arg2 ;
@end

