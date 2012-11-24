//
//  ViewController.h
//  AppEngineChannelClientExample
//
//  Created by 菊池 淳 on 12/08/29.
//  Copyright (c) 2012年 Jun Kikuchi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppEngineChannel.h"

@interface ViewController : UIViewController <AppEngineChannelDelegate>
@property (weak, nonatomic) IBOutlet UILabel *countLabel;
@property (weak, nonatomic) IBOutlet UIButton *startButton;
- (IBAction)startButtonTapped:(id)sender;

@end
