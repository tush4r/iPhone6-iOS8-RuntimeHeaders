/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCMiddlewareExceptionEvent : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _errorCode;
    unsigned int _type;
    unsigned int _version;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int type : 1; 
        unsigned int version : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasVersion;
@property unsigned int version;
@property bool hasType;
@property unsigned int type;
@property bool hasErrorCode;
@property unsigned int errorCode;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)hasVersion;
- (void)setHasVersion:(bool)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)hasType;
- (void)setHasType:(bool)arg1;
- (bool)hasErrorCode;
- (void)setHasErrorCode:(bool)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (unsigned int)errorCode;
- (bool)hasTimestamp;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)type;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
