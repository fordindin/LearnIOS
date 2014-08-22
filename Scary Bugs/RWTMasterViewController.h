//
//  RWTMasterViewController.h
//  Scary Bugs
//
//  Created by dindin on 22/08/14.
//  Copyright (c) 2014 Denis Barov. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RWTDetailViewController;

@interface RWTMasterViewController : UITableViewController

@property (strong, nonatomic) RWTDetailViewController *detailViewController;

@end
