@class CNContact, MUISenderPhotoView, NSString;

@protocol MUIActionContactDataProvider
- (NSString *)emailAddressForPhotoView:(MUISenderPhotoView *)arg1;
- (NSString *)fullNameForPhotoView:(MUISenderPhotoView *)arg1;
- (CNContact *)actionContactForPhotoView:(MUISenderPhotoView *)arg1;
@end

