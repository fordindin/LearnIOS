//
//  RWTDetailViewController.h
//  Scary Bugs
//
//  Created by dindin on 22/08/14.
//  Copyright (c) 2014 Denis Barov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RWTDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
