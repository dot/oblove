//
//  oblove2AppDelegate.h
//  oblove2
//
//  Created by 近藤 修平 on 10/08/22.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class oblove2ViewController;

@interface oblove2AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    oblove2ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet oblove2ViewController *viewController;

@end

