#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPrintInfo, NSString;

@interface _ExportJob : NSObject
{
    BOOL _shouldCollapseRedundantText;	// 8 = 0x8
    NSArray *_conversationMembers;	// 16 = 0x10
    NSMutableArray *_printingHTMLs;	// 24 = 0x18
    NSMutableArray *_attachments;	// 32 = 0x20
    NSString *_jobTitle;	// 40 = 0x28
    NSPrintInfo *_printInfo;	// 48 = 0x30
    unsigned long long _sequenceNumber;	// 56 = 0x38
}

@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSPrintInfo *printInfo; // @synthesize printInfo=_printInfo;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSMutableArray *printingHTMLs; // @synthesize printingHTMLs=_printingHTMLs;
@property(nonatomic) BOOL shouldCollapseRedundantText; // @synthesize shouldCollapseRedundantText=_shouldCollapseRedundantText;
@property(retain, nonatomic) NSArray *conversationMembers; // @synthesize conversationMembers=_conversationMembers;
- (void).cxx_destruct;
- (id)init;

@end

