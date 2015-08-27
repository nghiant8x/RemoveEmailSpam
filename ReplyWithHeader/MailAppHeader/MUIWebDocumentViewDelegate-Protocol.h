#import "NSObject-Protocol.h"

@class MUIWebAttachment, MUIWebDocumentView, NSArray, NSDictionary;

@protocol MUIWebDocumentViewDelegate <NSObject>

@optional
- (NSArray *)additionalContextMenuItemsForWebDocumentView:(MUIWebDocumentView *)arg1 withWebAttachment:(MUIWebAttachment *)arg2;
- (void)webDocumentView:(MUIWebDocumentView *)arg1 contentDidChange:(NSDictionary *)arg2;
@end

