//
//  FKEvent.h
//  CoreDataTest
//
//  Created by Bison
//  Copyright (c) 2016年 Bison. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface FKEvent : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * happenDate;

@end
