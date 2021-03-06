/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface NSRTFD : NSMutableDictionary  {
    NSMutableDictionary *dict;
}

+ (void)initialize;

- (id)dataRepresentation;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)addLink:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (bool)isPackage;
- (id)initWithDictionary:(id)arg1 copyItems:(bool)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)initWithContentsOfFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copy;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;
- (long long)validatePath:(id)arg1 ignore:(id)arg2;
- (id)addData:(id)arg1 name:(id)arg2;
- (id)copy:(id)arg1 into:(id)arg2;
- (id)dataForFile:(id)arg1;
- (id)addFile:(id)arg1;
- (id)replaceFile:(id)arg1 data:(id)arg2;
- (unsigned long long)saveToDocument:(id)arg1 removeBackup:(bool)arg2 errorHandler:(id)arg3;
- (id)tmpNameFromPath:(id)arg1;
- (unsigned long long)initUnixFile:(id)arg1;
- (id)setPackage:(bool)arg1;
- (id)replaceFile:(id)arg1 path:(id)arg2;
- (id)addCommon:(id)arg1 docInfo:(id)arg2 value:(id)arg3 zone:(struct _NSZone { }*)arg4;
- (id)uniqueKey:(id)arg1;
- (id)getDocument:(id)arg1 docInfo:(id)arg2;
- (id)createUniqueKey:(id)arg1;
- (id)createRandomKey:(id)arg1;
- (unsigned long long)internalSaveTo:(id)arg1 removeBackup:(bool)arg2 errorHandler:(id)arg3;
- (unsigned long long)internalSaveTo:(id)arg1 removeBackup:(bool)arg2 errorHandler:(id)arg3 temp:(id)arg4 backup:(id)arg5;
- (id)nameFromPath:(id)arg1 extra:(id)arg2;
- (id)tmpNameFromPath:(id)arg1 extension:(id)arg2;
- (unsigned long long)internalWritePath:(id)arg1 errorHandler:(id)arg2 remapContents:(bool)arg3 hardLinkPath:(id)arg4;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(bool)arg4 markBusy:(bool)arg5 hardLinkPath:(id)arg6;
- (unsigned long long)initFromDocument:(id)arg1;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(bool)arg4 hardLinkPath:(id)arg5;
- (id)_getDocInfoForKey:(id)arg1;
- (id)removeFile:(id)arg1;
- (id)initFromElement:(id)arg1 ofDocument:(id)arg2;
- (unsigned long long)insertItem:(id)arg1 path:(id)arg2 dirInfo:(id)arg3 zone:(struct _NSZone { }*)arg4 plist:(id)arg5;
- (unsigned long long)realAddDirNamed:(id)arg1;
- (unsigned long long)addFileNamed:(id)arg1 fileAttributes:(id)arg2;
- (unsigned long long)addDirNamed:(id)arg1 lazy:(bool)arg2;
- (id)getDirInfo:(bool)arg1;
- (id)pasteboardDataRepresentation;
- (id)initFromSerialized:(id)arg1;
- (id)freeSerialized:(void*)arg1 length:(unsigned long long)arg2;
- (id)serialize:(void**)arg1 length:(unsigned long long*)arg2;
- (id)initWithPasteboardDataRepresentation:(id)arg1;
- (bool)_isLink:(id)arg1;

@end
