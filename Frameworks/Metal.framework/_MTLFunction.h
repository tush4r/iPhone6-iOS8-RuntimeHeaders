/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, <MTLDevice>, NSString;

@interface _MTLFunction : NSObject <MTLFunctionSPI> {
    struct MTLFunctionOffsets { 
        unsigned long long publicArguments; 
        unsigned long long privateArguments; 
    } _offsets;
    struct MTLFunctionVersions { 
        unsigned short airMajorVersion; 
        unsigned short airMinorVersion; 
        unsigned short languageMajorVersion; 
        unsigned short languageMinorVersion; 
    } _versions;
    unsigned char _vertexAttributesInitialized;
    unsigned char _privateMetadataInitialized;
    <MTLDevice> *_device;
    unsigned long long _functionType;
    NSArray *_vertexAttributes;
    NSString *_name;
    id _vendorPrivate;
    long long _lineNumber;
    NSString *_filePath;
    struct MTLLibraryData { int (**x1)(); int x2; id x3; } *_libraryData;
    long long _bitCodeOffset;
    struct { 
        unsigned char key[32]; 
    } _bitcodeHash;
}

@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned long long functionType;
@property(readonly) NSString * name;
@property(readonly) struct MTLLibraryData { int (**x1)(); int x2; id x3; }* libraryData;
@property(copy) NSString * filePath;
@property long long lineNumber;
@property(readonly) const struct MTLFunctionVersions { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }* functionVersions;
@property long long bitCodeOffset;
@property(readonly) struct { unsigned char x1[32]; } bitcodeHash;
@property(readonly) id vendorPrivate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSArray * vertexAttributes;


- (id)device;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id).cxx_construct;
- (id)name;
- (id)description;
- (void)dealloc;
- (struct { unsigned char x1[32]; })bitcodeHash;
- (id)vendorPrivate;
- (const struct MTLFunctionVersions { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)functionVersions;
- (void)setVendorPrivate:(id)arg1;
- (id)vertexAttributes;
- (void)initializePrivateMetadata;
- (void)setLineNumber:(long long)arg1;
- (void)setBitCodeOffset:(long long)arg1;
- (id)initWithName:(id)arg1 bitcodeHash:(const struct { unsigned char x1[32]; }*)arg2 type:(unsigned long long)arg3 libraryData:(struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)arg4 offsets:(struct MTLFunctionOffsets { unsigned long long x1; unsigned long long x2; }*)arg5 versions:(struct MTLFunctionVersions { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)arg6 device:(id)arg7;
- (long long)bitCodeOffset;
- (struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (unsigned long long)functionType;
- (long long)lineNumber;

@end