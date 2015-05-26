//
//  ToDoItem.h
//  ToDoList
//
//  Created by Malavika Menon on 21/5/15.
//  Copyright (c) 2015 Malavika Menon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
