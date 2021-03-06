/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString;

@interface MSASSharingRelationship : NSObject <NSCopying> {
    NSString *_GUID;
    NSString *_albumGUID;
    NSString *_email;
    NSString *_firstName;
    NSString *_fullName;
    NSString *_lastName;
    NSString *_personID;
    int _state;
}

@property(retain) NSString * GUID;
@property(retain) NSString * albumGUID;
@property(retain) NSString * email;
@property(retain) NSString * firstName;
@property(retain) NSString * fullName;
@property(retain) NSString * lastName;
@property(retain) NSString * personID;
@property int state;

+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)_fullName;
- (id)albumGUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)fullName;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSharingRelationship:(id)arg1;
- (id)lastName;
- (id)personID;
- (void)setAlbumGUID:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
