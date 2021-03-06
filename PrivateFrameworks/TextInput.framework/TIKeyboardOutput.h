/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, TIKeyboardCandidate, NSIndexSet;

@interface TIKeyboardOutput : NSObject <NSSecureCoding> {
    TIKeyboardCandidate *_acceptedCandidate;
    NSString *_textToCommit;
    unsigned long long _deletionCount;
    NSString *_insertionText;
    unsigned long long _forwardDeletionCount;
    NSString *_insertionTextAfterSelection;
    TIKeyboardCandidate *_shortcutConversion;
    NSIndexSet *_handwritingStrokesToDelete;
}

@property(retain) TIKeyboardCandidate * acceptedCandidate;
@property(copy) NSString * textToCommit;
@property unsigned long long deletionCount;
@property(copy) NSString * insertionText;
@property unsigned long long forwardDeletionCount;
@property(copy) NSString * insertionTextAfterSelection;
@property(retain) TIKeyboardCandidate * shortcutConversion;
@property(copy) NSIndexSet * handwritingStrokesToDelete;

+ (bool)supportsSecureCoding;

- (void)deleteForward:(unsigned long long)arg1;
- (void)deleteForward;
- (void)setHandwritingStrokesToDelete:(id)arg1;
- (void)setShortcutConversion:(id)arg1;
- (void)setInsertionTextAfterSelection:(id)arg1;
- (void)setForwardDeletionCount:(unsigned long long)arg1;
- (void)setTextToCommit:(id)arg1;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)setAcceptedCandidate:(id)arg1;
- (id)handwritingStrokesToDelete;
- (id)shortcutConversion;
- (void)insertTextAfterSelection:(id)arg1;
- (id)insertionTextAfterSelection;
- (unsigned long long)forwardDeletionCount;
- (id)textToCommit;
- (id)acceptedCandidate;
- (void)setInsertionText:(id)arg1;
- (void)setDeletionCount:(unsigned long long)arg1;
- (id)insertionText;
- (unsigned long long)deletionCount;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
