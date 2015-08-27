#import "NSObject-Protocol.h"

@class MUICollectionCellView, MUICollectionView, NSScrollView;

@protocol MUICollectionViewDelegate <NSObject>

@optional
- (void)collectionView:(MUICollectionView *)arg1 didEndScrollInScrollView:(NSScrollView *)arg2;
- (void)collectionView:(MUICollectionView *)arg1 didScrollInScrollView:(NSScrollView *)arg2;
- (void)collectionView:(MUICollectionView *)arg1 didBeginScrollInScrollView:(NSScrollView *)arg2;
- (void)collectionView:(MUICollectionView *)arg1 didDeselectIndex:(unsigned long long)arg2;
- (void)collectionView:(MUICollectionView *)arg1 didSelectIndex:(unsigned long long)arg2;
- (void)collectionView:(MUICollectionView *)arg1 didEndDisplayingCellView:(MUICollectionCellView *)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)collectionView:(MUICollectionView *)arg1 didBeginDisplayingCellView:(MUICollectionCellView *)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)collectionView:(MUICollectionView *)arg1 willEvictCellView:(MUICollectionCellView *)arg2;
- (MUICollectionCellView *)collectionView:(MUICollectionView *)arg1 makeCellViewForItemAtIndex:(unsigned long long)arg2;
- (double)collectionView:(MUICollectionView *)arg1 initialHeightOfCellAtIndex:(unsigned long long)arg2;
@end

