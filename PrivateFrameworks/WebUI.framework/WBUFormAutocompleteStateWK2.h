/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutocompleteStateWK2 : WBUFormAutoCompleteState {
    WBUFormAutoFillController * _autoFillController;
    NSArray * _autoFillDisplayDataForSingleField;
    UIView * _emptyInputView;
    NSDictionary * _formMetadata;
    WBUFormAutoFillFrameHandle * _frame;
    <_WKFormInputSession> * _inputSession;
    WBSFormAutoFillMetadataCorrector * _metadataCorrector;
    NSString * _prefixForSuggestions;
    NSDictionary * _textFieldMetadata;
    NSString * _textFieldValue;
}

- (void).cxx_destruct;
- (id)_autoFillDisplayDataForSingleField;
- (id)_correctedFormMetadata:(id)arg1;
- (void)_updateTextFieldValue;
- (void)annotateForm:(id)arg1 withValues:(id)arg2;
- (void)autoFillFromSuggestion:(id)arg1;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4;
- (void)dealloc;
- (void)fetchFormMetadataWithCompletion:(id /* block */)arg1;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (id)frame;
- (void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2;
- (id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5;
- (void)invalidate;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 clearField:(id)arg3;
- (void)setPrefixForSuggestions:(id)arg1;
- (void)setShowingKeyboardInputView:(BOOL)arg1;
- (id)suggestions;
- (void)suggestionsDidUpdate;
- (void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3;
- (id)textFieldValue;
- (id)webView;

@end
