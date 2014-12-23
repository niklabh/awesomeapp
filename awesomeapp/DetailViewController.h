//
//  DetailViewController.h
//  awesomeapp
//
//  Created by Nikhil Rajan on 23/12/14.
//  Copyright (c) 2014 __nikhilranjan__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

