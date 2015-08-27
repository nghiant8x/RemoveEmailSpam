#import <objc/NSObject.h>

@interface MailSearchCriteriaHelper : NSObject
{
}

+ (id)compoundCriterionWithCriterion:(id)arg1 andAnyDateMatchingQuery:(id)arg2;
+ (id)criterionForAttachmentNameContainsString:(id)arg1;
+ (id)criterionForDateWithin:(id)arg1 and:(id)arg2 withType:(long long)arg3;
+ (id)textSearchCriterionForSearchField:(long long)arg1 queryString:(id)arg2 includeDateTextualRepresentations:(BOOL)arg3 exactMatch:(BOOL)arg4;
+ (id)criterionForMailboxSuggestion:(id)arg1 forSavedSearch:(BOOL)arg2;
+ (id)criterionForMailFlagColorSuggestion:(id)arg1;
+ (id)criterionForPrioritySuggestion:(id)arg1;
+ (id)criterionForAttachmentNameContainsSuggestion:(id)arg1 forSavedSearch:(BOOL)arg2;
+ (id)criterionForMessageHasAttachment;
+ (id)criterionForMailStatusSuggestion:(id)arg1;
+ (id)criterionForDateSuggestion:(id)arg1;
+ (id)mailboxSearchCriterionForScope:(int)arg1 inMessageMall:(id)arg2 shouldShowRecipient:(char *)arg3;
+ (id)_mailboxSearchCriterionForMailboxes:(id)arg1;
+ (id)criterionForSuggestion:(id)arg1 forSavedSearch:(BOOL)arg2;
+ (id)criterionForSuggestions:(id)arg1 scope:(int)arg2 inMessageMall:(id)arg3 shouldShowRecipient:(char *)arg4;

@end

