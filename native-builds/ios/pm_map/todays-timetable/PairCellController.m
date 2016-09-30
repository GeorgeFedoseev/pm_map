//
//  PairCellController.m
//  Unity-iPhone
//
//  Created by George on 29/09/16.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PairCellController.h"


@implementation PairCellController

- (void) awakeFromNib {
    [super awakeFromNib];
    _room.backgroundColor = [UIColor colorWithRed:255.0/255.0 green:105.0/255.0 blue:69.0/255.0 alpha:1];
}

- (IBAction)buttonClick:(id)sender {
    NSURL *url = [NSURL URLWithString:[[NSString stringWithFormat:@"pmmap://room/%@/%@",
                                        self.room.titleLabel.text,
                                        [self randomStringWithLength:5]
                                    ] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]];
    
    [self.todayViewController.extensionContext openURL:url completionHandler:^(BOOL success) {
        
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

-(NSString *) randomStringWithLength: (int) len {
    NSString *letters = @"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    
    NSMutableString *randomString = [NSMutableString stringWithCapacity: len];
    
    for (int i=0; i<len; i++) {
        [randomString appendFormat: @"%C", [letters characterAtIndex: arc4random_uniform([letters length])]];
    }
    
    return randomString;
}

@end
