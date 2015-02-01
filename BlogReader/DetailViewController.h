//
//  DetailViewController.h
//  BlogReader
//
//  Created by Peter Dorsaneo on 1/2/15.
//  Copyright (c) 2015 Peter Dorsaneo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property(strong,nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end

