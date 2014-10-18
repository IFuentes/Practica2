//
//  ViewCell.h
//  EstateAndFriends
//
//

#import <UIKit/UIKit.h>

@interface ViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *TitleLabel;
@property (strong, nonatomic) IBOutlet UILabel *DescriptionLabel;
@property (strong, nonatomic) IBOutlet UIImageView *ThumbImage;

@end
