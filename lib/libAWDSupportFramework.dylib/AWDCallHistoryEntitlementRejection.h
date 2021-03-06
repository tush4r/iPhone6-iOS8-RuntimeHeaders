/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDCallHistoryEntitlementRejection : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _pid;
    NSString *_procname;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int pid : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasPid;
@property unsigned int pid;
@property(readonly) bool hasProcname;
@property(retain) NSString * procname;


- (id)procname;
- (bool)hasProcname;
- (bool)hasPid;
- (void)setHasPid:(bool)arg1;
- (void)setProcname:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPid:(unsigned int)arg1;
- (unsigned int)pid;
- (bool)hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
