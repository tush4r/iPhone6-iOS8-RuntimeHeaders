/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData;

@interface _PFEncodedData : NSData  {
    NSData *_aData;
    unsigned int _byteCount;
    unsigned int _reserved;
}

+ (Class)classForCoder;

- (oneway void)release;
- (bool)isEqualToData:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const void*)bytes;
- (id)mutableCopy;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)length;
- (id)description;
- (unsigned long long)retainCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)retain;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)privateCopy;
- (Class)classForArchiver;

@end