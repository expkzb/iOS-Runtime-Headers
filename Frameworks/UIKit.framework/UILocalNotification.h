/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UILocalNotification : NSObject <NSCopying, NSCoding>
{
}

@property(copy) NSDictionary *userInfo;
@property(copy) NSString *customLockSliderLabel;
@property BOOL showAlarmStatusBarItem;
@property BOOL fireNotificationsWhenAppRunning;
@property BOOL interruptAudioAndLockDevice;
@property BOOL soundNameIsARingtone;
@property BOOL allowSnooze;
@property BOOL hideAlertTitle;
@property NSInteger applicationIconBadgeNumber;
@property(copy) NSString *soundName;
@property(copy) NSString *alertLaunchImage;
@property(copy) NSString *alertAction;
@property BOOL hasAction;
@property(copy) NSString *alertBody;
@property(copy) NSCalendar *repeatCalendar;
@property NSUInteger repeatInterval;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSDate *fireDate;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (BOOL)isValid;
- (NSInteger)compareFireDates:(id)arg1;
- (void)clearNonSystemProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end