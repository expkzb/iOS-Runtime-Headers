/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKSourceConstraints, NSNumber, NSString;

@interface EKPersistentSource : EKPersistentObject {
    EKSourceConstraints *_constraints;
}

@property NSString * UUID;
@property(readonly) EKSourceConstraints * constraints;
@property(copy) NSNumber * defaultAlarmOffset;
@property(getter=isEnabled) BOOL enabled;
@property(copy) NSString * externalID;
@property int sourceType;
@property(copy) NSString * title;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (id)constraints;
- (void)dealloc;
- (id)defaultAlarmOffset;
- (id)description;
- (int)entityType;
- (id)externalID;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)refresh;
- (void)reset;
- (void)setDefaultAlarmOffset:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setExternalID:(id)arg1;
- (void)setSourceType:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (int)sourceType;
- (id)title;

@end
