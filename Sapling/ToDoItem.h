//
//  ToDoItem.h
//  Sapling
//
//  Created by Karl Walters on 8/17/15.
//  Copyright (c) 2015 Karl Walters. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly)NSDate *creationDate;



@end
