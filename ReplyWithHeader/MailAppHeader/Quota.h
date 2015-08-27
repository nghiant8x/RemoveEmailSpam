#import <objc/NSObject.h>

#import "AccountInfoTabOwner-Protocol.h"

@class MFSizeEngine, NSProgressIndicator, NSString, NSTableView, NSTextField, NSTimer, NSView;

@interface Quota : NSObject <AccountInfoTabOwner>
{
    NSView *_view;	// 8 = 0x8
    NSTableView *_quotaTable;	// 16 = 0x10
    NSTextField *_usageField;	// 24 = 0x18
    NSProgressIndicator *_progressIndicator;	// 32 = 0x20
    NSTextField *_progressField;	// 40 = 0x28
    MFSizeEngine *_sizeEngine;	// 48 = 0x30
    CDUnknownBlockType _compareUsingDescriptors;	// 56 = 0x38
    NSTimer *_statusTimer;	// 64 = 0x40
}

+ (id)quotaForMailAccount:(id)arg1;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(readonly, copy, nonatomic) CDUnknownBlockType compareUsingDescriptors; // @synthesize compareUsingDescriptors=_compareUsingDescriptors;
@property(retain, nonatomic) MFSizeEngine *sizeEngine; // @synthesize sizeEngine=_sizeEngine;
@property(nonatomic) __weak NSTextField *progressField; // @synthesize progressField=_progressField;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak NSTextField *usageField; // @synthesize usageField=_usageField;
@property(nonatomic) __weak NSTableView *quotaTable; // @synthesize quotaTable=_quotaTable;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)accountInfoWillShowView:(id)arg1;
- (void)accountInfoWillHideView:(id)arg1;
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSortDescriptors;
- (void)engineUpdated:(id)arg1;
- (void)_stopProgress:(id)arg1;
- (void)_updateProgress:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)engineDidFinish;
- (void)engineDidStart;
- (void)_accountOfflineStatusDidChange:(id)arg1;
- (Class)engineClass;
- (void)dealloc;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

