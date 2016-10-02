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


@property NSArray *todayPairs;

@end

@implementation TodayViewController

static NSString *CellIdentifier = @"PairCell";


- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    
    // Do any additional setup after loading the view from its nib.
    
    
    
     [self.table registerNib:[UINib nibWithNibName:@"PairCell" bundle:nil] forCellReuseIdentifier:CellIdentifier];
    
    // remove last row separator
    self.table.tableFooterView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.table.frame.size.width, 1)];
    //self.table.allowsSelection = NO;
    
    _todayPairs = [NSArray array];
    Pair *p = [[Pair alloc] init];
    p.name = @"Пара1";
    _todayPairs = [_todayPairs arrayByAddingObject:p];

    self.preferredContentSize = CGSizeMake(0, 200);
    
    
    [self update];
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
    
    if([self isDate:[NSDate date] BetweenDate:startDate andDate:endDate])
    {
        // current pair
        [cell.startTime setTextColor:[UIColor orangeColor]];
        [cell.endTime setTextColor:[UIColor orangeColor]];
    }else{
        [cell.startTime setTextColor:[UIColor whiteColor]];
        [cell.endTime setTextColor:[UIColor whiteColor]];
    }
    
    [dateFormatter setDateFormat:@"HH:mm dd-MM-yyyy"];
    
    //[self.message setTitle: [dateFormatter stringFromDate:startDate]forState:UIControlStateNormal];
    
    
    
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
                int weekDay = [results intForColumn:@"day"]-1;
                
                
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
                    first_part = @"Сегодня ";
                    last_part = @" 😬";
                }
                
                
                if(resultsCount)
                
                if(resultsCount == 1){
                    [self.message setTitle:[NSString stringWithFormat:@"%@ 1 пара%@", first_part, last_part]  forState:UIControlStateNormal];
                }else if (resultsCount <= 4 || (resultsCount%10 <= 4 && resultsCount > 20)){
                    [self.message setTitle:[NSString stringWithFormat:@"%@ %i пары%@", first_part, resultsCount, last_part] forState:UIControlStateNormal];
                }else {
                    [self.message setTitle:[NSString stringWithFormat:@"%@ %i пар%@", first_part, resultsCount, last_part] forState:UIControlStateNormal];
                }
                // expand height
                self.preferredContentSize = CGSizeMake(0, 20 + 46*resultsCount);
            }else{
                
                if(allResultsCount > 0){
                    [self.message setTitle:@"Сегодня нет пар! 🎉" forState:UIControlStateNormal];
                }else{
                    [self.message setTitle:@"Настройте расписание ⚙" forState:UIControlStateNormal];
                }
                
                
                self.preferredContentSize = CGSizeMake(0, 20);
            }
            
            
        
        }else{
            str = [str stringByAppendingString:[NSString stringWithFormat:@"\nfailed to open database at path: %@", db_path]];
        }
        
        [database close];

    }else{
        /*str = [str stringByAppendingString:[NSString stringWithFormat:@"\ndb file doesnt exist %@", db_path]];*/
        [self.message setTitle:@"Настройте расписание >>" forState:UIControlStateNormal];
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
