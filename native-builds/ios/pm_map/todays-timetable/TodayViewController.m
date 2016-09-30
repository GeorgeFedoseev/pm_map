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
    
    
    [self loadFile];
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
    
    [self loadFile];

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
    
    
    cell.startTime.text = ((Pair*)_todayPairs[indexPath.row]).startTime;
    cell.endTime.text = ((Pair*)_todayPairs[indexPath.row]).endTime;
    
    return cell;
    
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    //[_messageLabel setText:@"row click"];
 

}

- (void) loadFile {
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
            
            int resultsCount = 0;
            
            NSDateFormatter *dateFormatter =[[NSDateFormatter alloc] init];
            while([results next]){
                
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
            
            // expand height
            self.preferredContentSize = CGSizeMake(0, 46*resultsCount);
            
            
        }else{
            str = [str stringByAppendingString:[NSString stringWithFormat:@"\nfailed to open database at path: %@", db_path]];
        }
        
        [database close];

    }else{
        str = [str stringByAppendingString:[NSString stringWithFormat:@"\ndb file doesnt exist %@", db_path]];
    }
    
    
    //[_messageLabel setText: str ];
    
    
    
    
}

- (bool) isWeekEven {
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSDateComponents *dateComponent = [calendar components:(NSCalendarUnitWeekOfYear) fromDate:[NSDate date]];
    NSLog(@"%lu",(long unsigned)dateComponent.weekOfYear);
    
    return (dateComponent.weekOfYear % 2) == 0;
}

@end
