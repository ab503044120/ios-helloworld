//
//  DetailViewController.h
//  helloworld
//
//  Created by huihui on 16/6/26.
//  Copyright © 2016年 huihui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

