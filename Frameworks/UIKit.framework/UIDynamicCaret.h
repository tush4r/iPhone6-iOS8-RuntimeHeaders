/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIDynamicCaretNoContentView, NSString, _UIDynamicCaretInput, _UIDynamicCaretHelpLabel, TIKeyboardCandidateResultSet, <UIKeyboardCandidateListDelegate>, _UIDynamicCaretAlternatives;

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    long long _selectedIndex;
    bool_justDeleted;
    _UIDynamicCaretInput *_inputView;
    _UIDynamicCaretAlternatives *_alternativesView;
    _UIDynamicCaretNoContentView *_noContentView;
    _UIDynamicCaretHelpLabel *_helpLabel;
    TIKeyboardCandidateResultSet *_candidateSet;
}

@property bool isActive;
@property(retain) _UIDynamicCaretInput * inputView;
@property(retain) _UIDynamicCaretAlternatives * alternativesView;
@property(retain) _UIDynamicCaretNoContentView * noContentView;
@property(retain) _UIDynamicCaretHelpLabel * helpLabel;
@property(retain) TIKeyboardCandidateResultSet * candidateSet;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)alternativeTappedAtIndex:(long long)arg1;
- (void)setDocumentHasContent:(bool)arg1;
- (void)displayAlternatives:(bool)arg1;
- (id)helpLabel;
- (id)noContentView;
- (id)alternativesView;
- (void)setHelpLabel:(id)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setAlternativesView:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setInputView:(id)arg1;
- (id)inputView;
- (unsigned long long)selectedSortIndex;
- (id)keyboardBehaviors;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (id)currentCandidate;
- (void)showPreviousRow;
- (void)showNextRow;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (bool)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)isHiddenCandidatesList;
- (bool)isExtendedList;
- (id)statisticsIdentifier;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidateSet:(id)arg1;
- (bool)hasCandidates;
- (id)candidateSet;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (id)backgroundImage;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)isActive;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
