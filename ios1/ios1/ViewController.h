//
//  ViewController.h
//  ios1
//
//  Created by student on 09/11/2023.
//  Copyright © 2023 me.kozlowski. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"



@interface ViewController:UIViewController <SecondViewControllerDelegate>
@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
@property (nonatomic, weak) IBOutlet UITextField *surnameInputField;

@end

