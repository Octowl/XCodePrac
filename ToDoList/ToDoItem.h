//
//  ToDoItem.h
//  ToDoList
//
//  Created by Aziz Alsaffar on 7/9/14.
//  Copyright (c) 2014 Aziz Alsaffar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
