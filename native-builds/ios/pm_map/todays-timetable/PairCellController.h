//
//  PairCellController.h
//  Unity-iPhone
//
//  Created by George on 29/09/16.
//
//

#import "TodayViewController.h"

@interface PairCellController : UITableViewCell
@property (weak, nonatomic) IBOutlet UIView *view;

@property (weak, nonatomic) IBOutlet UILabel *name;
@property (weak, nonatomic) IBOutlet UILabel *lecturer;
@property (weak, nonatomic) IBOutlet UIButton *room;
@property (weak, nonatomic) IBOutlet UILabel *startTime;
@property (weak, nonatomic) IBOutlet UILabel *endTime;



@property TodayViewController *todayViewController;

@end
