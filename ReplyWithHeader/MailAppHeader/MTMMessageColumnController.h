#import <objc/NSObject.h>

@class NSArrayController, NSDictionary, NSMutableDictionary, NSString, NSTableView;

@interface MTMMessageColumnController : NSObject
{
    NSMutableDictionary *_columnConfigurations;	// 8 = 0x8
    NSString *_activeConfiguration;	// 16 = 0x10
    NSDictionary *_activeAttributes;	// 24 = 0x18
    NSTableView *_messageTableView;	// 32 = 0x20
    NSArrayController *_messagesController;	// 40 = 0x28
}

+ (void)initialize;
@property(nonatomic) __weak NSArrayController *messagesController; // @synthesize messagesController=_messagesController;
@property(nonatomic) __weak NSTableView *messageTableView; // @synthesize messageTableView=_messageTableView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *activeAttributes;
- (void)_updateActiveAttributes;
- (id)_tableColumnForSortName:(id)arg1;
@property(retain, nonatomic) NSString *activeConfiguration;
- (void)_updateActiveConfiguration;
- (id)_configDictForConfiguration:(id)arg1;
- (void)_removeAllColumns;
- (id)_tableColumnWithIdentifier:(id)arg1 columnDict:(id)arg2;
- (id)init;

@end

