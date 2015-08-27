#import <Foundation/NSEnumerator.h>

@class DOMNode, EditableWebMessageDocument;

@interface _ComposeAttachmentEnumerator : NSEnumerator
{
    BOOL _acceptDeleted;	// 8 = 0x8
    BOOL _acceptNonDeleted;	// 9 = 0x9
    DOMNode *_currentNode;	// 16 = 0x10
    DOMNode *_containerNode;	// 24 = 0x18
    DOMNode *_endNode;	// 32 = 0x20
    EditableWebMessageDocument *_document;	// 40 = 0x28
}

@property(nonatomic) BOOL acceptNonDeleted; // @synthesize acceptNonDeleted=_acceptNonDeleted;
@property(nonatomic) BOOL acceptDeleted; // @synthesize acceptDeleted=_acceptDeleted;
@property(readonly, nonatomic) EditableWebMessageDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) DOMNode *endNode; // @synthesize endNode=_endNode;
@property(retain, nonatomic) DOMNode *containerNode; // @synthesize containerNode=_containerNode;
@property(retain, nonatomic) DOMNode *currentNode; // @synthesize currentNode=_currentNode;
- (void).cxx_destruct;
- (id)nextObject;
- (short)acceptNode:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(int)arg2 range:(id)arg3;

@end

