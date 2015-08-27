//
//  AccountCell.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/27/15.
//
//

#import "SPAccountCell.h"

@implementation SPAccountCell

- (void)SPdrawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2{
    MLogString(@"");
    [self SPdrawInteriorWithFrame:arg1 inView:arg2];
    
}

- (void)SPdrawWithFrame:(struct CGRect)arg1 inView:(id)arg2{
    MLogString(@"");
    [self SPdrawWithFrame:arg1 inView:arg2];
}

- (id)SPtitle{
    MLogString(@"");
   id result = [self SPtitle];
    //TODO: write source here
    return result;
}

- (void)SPsetAccount:(id)arg1{
    MLogString(@"");

    [self SPsetAccount:arg1];
}

- (id)SPcopyWithZone:(struct _NSZone *)arg1{
    MLogString(@"");

    id result = [self SPcopyWithZone:arg1];
    
    return result;
}

- (void)SP_accountCellCommonInit{
    MLogString(@"");

    [self SP_accountCellCommonInit];
}

- (id)SPinitWithCoder:(id)arg1{
    MLogString(@"");

   id result = [self SPinitWithCoder:arg1];
    
    return result;
}

- (id)SPinitImageCell:(id)arg1{
    MLogString(@"");

    id result = [self SPinitImageCell:arg1];
    return result;
}

- (id)SPinitTextCell:(id)arg1{
    MLogString(@"");

    id result = [self SPinitTextCell:arg1];
    
    return result;
}

@end
