//
//  FKEventListController.h
//  CoreDataTest
//
//  Created by Bison
//  Copyright (c) 2016年 Bison. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FKEventListController : UITableViewController
@property (strong, nonatomic) IBOutlet UIBarButtonItem *deleteBn;
- (IBAction)toggleDelete:(id)sender;
@end
