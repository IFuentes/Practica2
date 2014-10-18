//
//  AmigosViewCell.h
//  EstateAndFriends
//
// 
//

#import <UIKit/UIKit.h>

@interface AmigosViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *NameLabel;
@property (strong, nonatomic) IBOutlet UILabel *EmailLabel;
@property (strong, nonatomic) IBOutlet UILabel *AgeLabel;
@property (strong, nonatomic) IBOutlet UIImageView *ThumbImage;

@end
