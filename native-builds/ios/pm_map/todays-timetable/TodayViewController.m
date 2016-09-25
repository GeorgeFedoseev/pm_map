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

@interface TodayViewController () <NCWidgetProviding>

@property (weak, nonatomic) IBOutlet UILabel *messageLabel;

@end

@implementation TodayViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [_messageLabel setText:@"Loaded"];
    [self loadFile];
    // Do any additional setup after loading the view from its nib.
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
    margins.bottom = 10.0;
    
    return margins;
}


- (void) loadFile {
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
    
    str = [str stringByAppendingString:[NSString stringWithFormat:@"documents path: %@",documents_path]];
    
    
    str = [str stringByAppendingString:[NSString stringWithFormat:@"directoryContents ====== %@",directoryContents]];
    
    
    
    NSString *db_path = [groupContainerURL.path stringByAppendingPathComponent:@"timetable.db"];
    
    
    
    
    // str = [str stringByAppendingString:[NSString stringWithFormat:@"\ngroup container url: %@", groupContainerURL]];
    
    
    
    FMDatabase *database;
    database = [FMDatabase databaseWithPath:db_path];
    database.traceExecution = YES;
    
    if([fm fileExistsAtPath:db_path]){
        if([database open]){
            str = [str stringByAppendingString:[NSString stringWithFormat:@"Opened db"]];
            
            FMResultSet *results  = [database executeQuery:@"select * from timetable"];
            
            if(database.hadError){
                [str stringByAppendingString:[NSString stringWithFormat:@"\nDB error: %@", database.lastError]];
                
            }
            
            int resultsCount = 0;
            while([results next]){
                NSString *name = [results stringForColumn:@"name"];
              //  str = [str stringByAppendingString: name];
                resultsCount++;
            }
            
            str = [str stringByAppendingString:[NSString stringWithFormat:@"\nDB rows: %i", resultsCount]];
            
        }else{
            str = [str stringByAppendingString:[NSString stringWithFormat:@"\nfailed to open database at path: %@", db_path]];
        }
        
        [database close];

    }else{
        str = [str stringByAppendingString:[NSString stringWithFormat:@"\ndb file doesnt exist %@", db_path]];
    }
    
    
    [_messageLabel setText: str ];
    
    
    
    
}

@end
