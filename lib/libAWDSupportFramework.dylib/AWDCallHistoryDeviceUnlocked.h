/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryDeviceUnlocked : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _callCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int callCount : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasCallCount;
@property unsigned int callCount;


- (unsigned int)callCount;
- (bool)hasCallCount;
- (void)setHasCallCount:(bool)arg1;
- (void)setCallCount:(unsigned int)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
