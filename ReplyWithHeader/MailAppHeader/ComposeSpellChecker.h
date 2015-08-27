#import <AppKit/NSSpellChecker.h>

@interface ComposeSpellChecker : NSSpellChecker
{
}

- (void)closeSpellDocumentWithTag:(long long)arg1;
- (id)spellingPanel;
- (long long)requestCheckingOfString:(id)arg1 range:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 inSpellDocumentWithTag:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)checkString:(id)arg1 range:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 inSpellDocumentWithTag:(long long)arg5 orthography:(id *)arg6 wordCount:(long long *)arg7;
- (BOOL)_mail_unifiedTextCheckingResultsHaveErrors:(id)arg1;
- (void)_mail_didCheckSpellDocumentWithTag:(long long)arg1 hasErrors:(BOOL)arg2;
- (void)_mail_willCheckSpellDocumentWithTag:(long long)arg1;
- (void)_mail_spellPanelDidClose:(id)arg1;
- (void)_mail_postingTimerFired:(id)arg1;
- (long long)currentSpellDocumentTag;
- (void)setPostCompletedNotification:(BOOL)arg1 forSpellDocumentWithTag:(long long)arg2;
- (void)_mail_removeObjectForSpellDocumentTag:(long long)arg1;
- (id)_mail_objectForSpellDocumentTag:(long long)arg1;
- (void)_mail_setObject:(id)arg1 forSpellDocumentTag:(long long)arg2;

@end

