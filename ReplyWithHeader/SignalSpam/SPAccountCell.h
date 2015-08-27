//
//  AccountCell.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/27/15.
//
//

@interface SPAccountCell :NSObject

- (void)SPdrawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)SPdrawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)SPtitle;
- (void)SPsetAccount:(id)arg1;
- (id)SPcopyWithZone:(struct _NSZone *)arg1;
- (void)SP_accountCellCommonInit;
- (id)SPinitWithCoder:(id)arg1;
- (id)SPinitImageCell:(id)arg1;
- (id)SPinitTextCell:(id)arg1;

@end
