//
//  FKAddEventController.h
//  CoreDataTest
//
//  Created by Bison
//  Copyright (c) 2016年 Bison. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FKAddEventController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *eventField;
- (IBAction)finishEdit:(id)sender;
@end
