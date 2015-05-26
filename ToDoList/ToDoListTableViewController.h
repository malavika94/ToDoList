//
//  ToDoListTableViewController.h
//  ToDoList
//
//  Created by Malavika Menon on 19/5/15.
//  Copyright (c) 2015 Malavika Menon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoItem.h"

@interface ToDoListTableViewController : UITableViewController
- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@property ToDoItem *toDoItem;

@end
