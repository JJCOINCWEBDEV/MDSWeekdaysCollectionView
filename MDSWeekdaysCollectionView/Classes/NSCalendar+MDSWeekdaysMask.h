//
//  NSCalendar+MDSWeekdaysMask.h
//  ModusApp
//
//  Created by Alexey Korotkov on 26.4.16.
//  Copyright © 2016 modus. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef u_int8_t MDSWeekdaysMask;

@interface NSCalendar (MDSWeekdaysMask)

+ (void)setWeekdaysLocale:(NSLocale *)locale;


+ (NSArray <NSString *> *)weekdayNames;
+ (NSArray <NSString *> *)shortWeekdayNames;
+ (NSArray <NSString *> *)veryShortWeekdayNames;
+ (MDSWeekdaysMask)weekdayMaskFromWeekdaysArray:(NSArray <NSString *> *)weekdaysArray;
+ (MDSWeekdaysMask)weekdayMaskFromWeekdaysArray:(NSArray <NSString *> *)weekdaysArray locale:(NSLocale *)locale;
+ (NSArray <NSString *> *)weekdaysForMask:(MDSWeekdaysMask)mask;
+ (NSArray <NSString *> *)weekdaysForMask:(MDSWeekdaysMask)mask locale:(NSLocale *)locale;

+ (BOOL)weekdaysMask:(MDSWeekdaysMask)mask containsDay:(NSInteger)day;
+ (void)weekdaysMask:(MDSWeekdaysMask *)mask addDay:(NSInteger)day;
+ (void)weekdaysMask:(MDSWeekdaysMask *)mask removeDay:(NSInteger)day;

+ (NSUInteger)weekdaysMaskDaysCount:(MDSWeekdaysMask)mask;

@end
