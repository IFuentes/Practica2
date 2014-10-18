//
//  CityViewController.h
//  EstateAndFriends
//
// 
//

#import <UIKit/UIKit.h>

@interface CityViewController : UIViewController
{
    __weak IBOutlet UILabel *lblCiudad1;
    __weak IBOutlet UILabel *lblCiudad2;
    __weak IBOutlet UILabel *lblCiudad3;
    __weak IBOutlet UIButton *btnCd1;
    __weak IBOutlet UIButton *btnCd2;
    __weak IBOutlet UIButton *btnCd3;

}

@property (strong, nonatomic) IBOutlet UILabel *TitleLabel;
@property (strong, nonatomic) IBOutlet UILabel *DescriptionLabel;
@property (strong, nonatomic) IBOutlet UIImageView *ImageView;

@property (strong, nonatomic) NSArray *DetailModal;

- (IBAction)btnActionCd1:(id)sender;
- (IBAction)btnActionCd2:(id)sender;
- (IBAction)btnActionCd3:(id)sender;


@end
