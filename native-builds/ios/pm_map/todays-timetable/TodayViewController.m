//
//  TodayViewController.m
//  todays-timetable
//
//  Created by George on 25/09/16.
//
//

#import "TodayViewController.h"
#import <NotificationCenter/NotificationCenter.h>
#import <sqlite3.h>
#import "fmdb/FMDatabase.h"
#import "PairCellController.h"


@implementation Pair

@end

@interface TodayViewController () <NCWidgetProviding>

//@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UITableView *table;
@property (weak, nonatomic) IBOutlet UIButton *message;
@property (weak, nonatomic) IBOutlet UIButton *bigMessage;


@property NSArray *todayPairs;

@property float desiredHeight;

@end

@implementation TodayViewController

static NSString *CellIdentifier = @"PairCell";


- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    // Do any additional setup after loading the view from its nib.
   /* if (floor(NSFoundationVersionNumber) >= NSFoundationVersionNumber10_0) {
        self.extensionContext.widgetLargestAvailableDisplayMode = NCWidgetDisplayModeExpanded;
    } else {
        // Fallback on earlier versions
    }*/
    
    
     [self.table registerNib:[UINib nibWithNibName:@"PairCell" bundle:nil] forCellReuseIdentifier:CellIdentifier];
    
    // remove last row separator
    self.table.tableFooterView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.table.frame.size.width, 1)];
    //self.table.allowsSelection = NO;
    
    _todayPairs = [NSArray array];
    Pair *p = [[Pair alloc] init];
    p.name = @"Пара1";
    _todayPairs = [_todayPairs arrayByAddingObject:p];

    self.desiredHeight = 200;
    self.preferredContentSize = CGSizeMake(0, self.desiredHeight);
    
    
    [self update];
    
    
}


- (void) updateColors {
    //NSLog([[UIDevice currentDevice] systemVersion]);
    UIColor *color;
    
    if (floor(NSFoundationVersionNumber) >= NSFoundationVersionNumber10_0) {
        NSLog(@"iOS version >= 10");
        color = [[UIColor blackColor] colorWithAlphaComponent:0.5];
    } else {
        NSLog(@"iOS version < 10");
        color = [UIColor colorWithRed:0.666 green:0.666 blue:0.666 alpha:1];
    }
    
    [self.message setTitleColor:color forState:UIControlStateNormal];
}


- (void) viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    [self updateColors];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)widgetPerformUpdateWithCompletionHandler:(void (^)(NCUpdateResult))completionHandler {
    // Perform any setup necessary in order to update the view.
    
    // If an error is encountered, use NCUpdateResultFailed
    // If there's no update required, use NCUpdateResultNoData
    // If there's an update, use NCUpdateResultNewData
    
    [self update];

    completionHandler(NCUpdateResultNewData);
}

- (void)widgetActiveDisplayModeDidChange:(NCWidgetDisplayMode)activeDisplayMode withMaximumSize:(CGSize)maxSize{
    if (activeDisplayMode == NCWidgetDisplayModeCompact){
        self.preferredContentSize = CGSizeMake(0.0, 20.0);
    }
    else if (activeDisplayMode == NCWidgetDisplayModeExpanded){
        self.preferredContentSize = CGSizeMake(0.0, self.desiredHeight);
    }
}

- (UIEdgeInsets)widgetMarginInsetsForProposedMarginInsets:(UIEdgeInsets)margins
{
    margins.top = 10.0;
    margins.bottom = 10.0;
    margins.left = 0;
    
    return margins;
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return _todayPairs.count;
    
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    
    PairCellController *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[PairCellController alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
        // never reaches here
    }
    
    cell.todayViewController = self;
    
    [cell setSelectionStyle:UITableViewCellSelectionStyleNone];
    
    cell.view.backgroundColor = [UIColor clearColor];
    
    cell.name.text = ((Pair*)_todayPairs[indexPath.row]).name;
    cell.lecturer.text = ((Pair*)_todayPairs[indexPath.row]).lecturer;
    NSString *roomNumber = ((Pair*)_todayPairs[indexPath.row]).room;
    
    if(roomNumber.length != 0){
        [cell.room setHidden:NO];
        [cell.room setTitle:roomNumber forState:UIControlStateNormal];
    }else{
        [cell.room setHidden:YES];
    }
    
    
    NSString *startTimeStr = ((Pair*)_todayPairs[indexPath.row]).startTime;
    cell.startTime.text = startTimeStr;
    
    NSString *endTimeStr = ((Pair*)_todayPairs[indexPath.row]).endTime;
    cell.endTime.text = endTimeStr;
    
    NSDateFormatter *dateFormatter =[[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"HH:mm"];
    
    [dateFormatter setDefaultDate:[NSDate date]];
    
    
    
    NSDate *startDate = [dateFormatter dateFromString:startTimeStr];
    
    NSDate *endDate = [dateFormatter dateFromString:endTimeStr];
    
    
    
    [dateFormatter setDateFormat:@"HH:mm dd-MM-yyyy"];
    
    //[self.message setTitle: [dateFormatter stringFromDate:startDate]forState:UIControlStateNormal];
    
    
    if (floor(NSFoundationVersionNumber) >= NSFoundationVersionNumber10_0) {
        [cell.startTime setTextColor:[[UIColor blackColor] colorWithAlphaComponent:0.8]];
        [cell.endTime setTextColor:[[UIColor blackColor] colorWithAlphaComponent:0.8]];
        [cell.name setTextColor:[[UIColor blackColor] colorWithAlphaComponent:0.8]];
        [cell.lecturer setTextColor:[[UIColor blackColor] colorWithAlphaComponent:0.5]];
    }else{
        [cell.startTime setTextColor:[UIColor whiteColor]];
        [cell.endTime setTextColor:[UIColor whiteColor]];
    }
    
    
    
    if([self isDate:[NSDate date] BetweenDate:startDate andDate:endDate])
    {
        // current pair
        [cell.startTime setTextColor: [UIColor orangeColor]];
        [cell.endTime setTextColor:  [UIColor colorWithRed:237/255.0 green:118/255.0 blue:14/255.0 alpha:1]];
        
    }
    
    
    return cell;
    
}



-(BOOL) isDate: (NSDate *) date BetweenDate:(NSDate*)beginDate andDate:(NSDate*)endDate {
    return (([date compare:beginDate] != NSOrderedAscending) && ([date compare:endDate] != NSOrderedDescending));
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    //[_messageLabel setText:@"row click"];
 

}

- (IBAction)goToAppClick:(id)sender {
    NSURL *url = [NSURL URLWithString:@"pmmap://"];
    
    [self.extensionContext openURL:url completionHandler:^(BOOL success) {
        if (success) {
            
            // Success
            //[self.room setTitle:@"success" forState:UIControlStateNormal];
        }
        
        else {
            
            // Fail
            //[self.room setTitle:@"fail" forState:UIControlStateNormal];
        }
    }];

}

- (void) update {
    _todayPairs = [NSArray array];
    
    NSString *str = @"";
    /*NSString *db_path = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"timetable.db"];*/
    
    NSFileManager *fm = [NSFileManager defaultManager];
    
    NSString *documents_path = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    //NSString *db_path = [documents_path stringByAppendingPathComponent:@"timetable2.db"];
    
    NSString *appGroupName = @"group.pm_map_container";
    
    NSURL *groupContainerURL = [fm containerURLForSecurityApplicationGroupIdentifier:appGroupName];
    
    NSError * error;
    NSArray * directoryContents =  [[NSFileManager defaultManager]
                                    contentsOfDirectoryAtPath:groupContainerURL.path error:&error];
    
   // str = [str stringByAppendingString:[NSString stringWithFormat:@"documents path: %@",documents_path]];
    
    
    //str = [str stringByAppendingString:[NSString stringWithFormat:@"directoryContents ====== %@",directoryContents]];
    
    
    
    NSString *db_path = [groupContainerURL.path stringByAppendingPathComponent:@"timetable.db"];
    
    
    
    
    // str = [str stringByAppendingString:[NSString stringWithFormat:@"\ngroup container url: %@", groupContainerURL]];
    
    
    
    FMDatabase *database;
    database = [FMDatabase databaseWithPath:db_path];
    database.traceExecution = YES;
    
    if([fm fileExistsAtPath:db_path]){
        if([database open]){
          //  str = [str stringByAppendingString:[NSString stringWithFormat:@"Opened db"]];
            
            FMResultSet *results  = [database executeQuery:@"select * from timetable WHERE deleted = 0 ORDER BY startTime"];
            
            if(database.hadError){
                [str stringByAppendingString:[NSString stringWithFormat:@"\nDB error: %@", database.lastError]];
                
            }
            
            bool evenWeek = [self isWeekEven];
            
            int allResultsCount = 0;
            int resultsCount = 0;
            
            NSDateFormatter *dateFormatter =[[NSDateFormatter alloc] init];
            while([results next]){
                allResultsCount++;
                
                [dateFormatter setDateFormat:@"yyyy-MM-DD HH:mm:ss"];

                
                NSString *name = [results stringForColumn:@"name"];
                NSDate *startTime = [dateFormatter dateFromString:[results stringForColumn:@"startTime"]];
                NSDate *endTime = [dateFormatter dateFromString:[results stringForColumn:@"endTime"]];
                
                
                
                bool _evenWeek = [results intForColumn:@"weekType"] == 1;
                int weekDay = [results intForColumn:@"day"];
                
                
                NSCalendar *calendar = [NSCalendar currentCalendar];
                //[calendar setFirstWeekday:1];
                NSDateComponents *weekDayComponent = [calendar components:(NSCalendarUnitWeekday) fromDate:[NSDate date]];
                
                /*str = [str stringByAppendingString:[NSString stringWithFormat:@"current weekday: %i", weekDayComponent.weekday]];*/
                
                if(_evenWeek == evenWeek){
                    if(weekDayComponent.weekday-1 == weekDay){
                        Pair *p = [[Pair alloc] init];
                        p.name = name;
                        p.lecturer = [results stringForColumn:@"lecturer"];
                        p.location = [results stringForColumn:@"location"];
                        p.room = [results stringForColumn:@"room"];
                        _todayPairs = [_todayPairs arrayByAddingObject:p];
                        
                        [dateFormatter setDateFormat:@"HH:mm"];
                        
                        p.startTime = [dateFormatter stringFromDate:startTime];
                        p.endTime = [dateFormatter stringFromDate:endTime];
                        
                        resultsCount++;
                    }
                }
                
              //  str = [str stringByAppendingString: name];
                
            }
            
            str = [str stringByAppendingString:[NSString stringWithFormat:@"results: %i", resultsCount]];
            
            
            
            
            if(resultsCount > 0){
                // table
                
                if (floor(NSFoundationVersionNumber) >= NSFoundationVersionNumber10_0) {
                    self.extensionContext.widgetLargestAvailableDisplayMode = NCWidgetDisplayModeExpanded;
                } else {
                    // Fallback on earlier versions
                }
                
                self.table.alpha = 1;
                self.table.userInteractionEnabled = YES;
                
                self.message.alpha = 1;
                self.bigMessage.alpha = 0;
                self.bigMessage.userInteractionEnabled = NO;
                
                NSString *first_part = @"";
                NSString *last_part = @"";
                
                if(resultsCount < 3){
                    first_part = @"Сегодня всего";
                    last_part = @"! 😃";
                }else if(resultsCount < 4){
                    first_part = @"Сегодня";
                    last_part = @" 🙃";
                }else if(resultsCount < 5){
                    first_part = @"Сегодня";
                    last_part = @" 🙂";
                }else {
                    first_part = @"Сегодня";
                    last_part = @" 😬";
                }
                
                
                
                
                if(resultsCount == 1){
                    [self.message setTitle:[NSString stringWithFormat:@"%@ 1 пара%@", first_part, last_part]  forState:UIControlStateNormal];
                }else if (resultsCount <= 4 || (resultsCount%10 <= 4 && resultsCount > 20)){
                    [self.message setTitle:[NSString stringWithFormat:@"%@ %i пары%@", first_part, resultsCount, last_part] forState:UIControlStateNormal];
                }else {
                    [self.message setTitle:[NSString stringWithFormat:@"%@ %i пар%@", first_part, resultsCount, last_part] forState:UIControlStateNormal];
                }
                // expand height
                
                self.desiredHeight = 20 + 46*resultsCount;
                if (floor(NSFoundationVersionNumber) >= NSFoundationVersionNumber10_0) {
                    self.desiredHeight += 5;
                }
                self.preferredContentSize = CGSizeMake(0, self.desiredHeight);
            }else{
                
                // small message
                
                if (floor(NSFoundationVersionNumber) >= NSFoundationVersionNumber10_0) {
                    self.extensionContext.widgetLargestAvailableDisplayMode = NCWidgetDisplayModeCompact;
                } else {
                    // Fallback on earlier versions
                }
                
                self.table.alpha = 0;
                self.table.userInteractionEnabled = NO;
                
                NSString *message_txt = @"";
                
                if(allResultsCount > 0){
                    message_txt = @"Сегодня нет пар! 🎉";
                }else{
                    message_txt = @"Настройте расписание ⚙";
                }
                
                
                if (floor(NSFoundationVersionNumber) >= NSFoundationVersionNumber10_0) {
                    
                    self.message.alpha = 0;
                    self.bigMessage.alpha = 1;
                    self.bigMessage.userInteractionEnabled = YES;
                    [self.bigMessage setTitle:message_txt forState:UIControlStateNormal];
                    
                }else{
                    self.message.alpha = 1;
                    self.bigMessage.alpha = 0;
                    self.bigMessage.userInteractionEnabled = NO;
                    [self.message setTitle:message_txt forState:UIControlStateNormal];
                }
                
                
                self.desiredHeight = 20;
                if (floor(NSFoundationVersionNumber) >= NSFoundationVersionNumber10_0) {
                    self.desiredHeight += 5;
                }
                self.preferredContentSize = CGSizeMake(0, self.desiredHeight);
                
            }
            
            [self.message layoutIfNeeded];
            [self.bigMessage layoutIfNeeded];
            [self.table layoutIfNeeded];
            
        
        }else{
            str = [str stringByAppendingString:[NSString stringWithFormat:@"\nfailed to open database at path: %@", db_path]];
        }
        
        [database close];

    }else{
        /*str = [str stringByAppendingString:[NSString stringWithFormat:@"\ndb file doesnt exist %@", db_path]];*/
        //[self.message setTitle:@"Настройте расписание >>" forState:UIControlStateNormal];
    }
    
    //[self.messageLabel setText:str];
    [self.table reloadData];
}

- (bool) isWeekEven {
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *dateComponent = [calendar components:(NSCalendarUnitWeekOfYear) fromDate:[NSDate date]];
    NSLog(@"%lu",(long unsigned)dateComponent.weekOfYear);
    
    return (dateComponent.weekOfYear % 2) == 0;
}

@end
