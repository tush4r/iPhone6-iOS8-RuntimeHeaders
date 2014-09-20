/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSUUID;

@interface CBPeer : NSObject <NSCopying> {
    struct __CFUUID { } *_UUID;
    NSUUID *_identifier;
    unsigned long long _mtuLength;
    long long _pairingState;
    long long _hostState;
}

@property(readonly) struct __CFUUID { }* UUID;
@property(readonly) NSUUID * identifier;
@property unsigned long long mtuLength;
@property long long pairingState;
@property long long hostState;


- (id)initWithIdentifier:(id)arg1;
- (struct __CFUUID { }*)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (void)dealloc;
- (unsigned long long)mtuLength;
- (long long)hostState;
- (void)setPairingState:(long long)arg1;
- (long long)pairingState;
- (void)setMtuLength:(unsigned long long)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleHostStateUpdated:(id)arg1;
- (void)setHostState:(long long)arg1;
- (void)handleMsg:(int)arg1 args:(id)arg2;

@end