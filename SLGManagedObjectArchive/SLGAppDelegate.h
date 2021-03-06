//
//  SLGAppDelegate.h
//  SLGManagedObjectArchive
//
//  Created by Steven Grace on 7/9/13.
//  Copyright (c) 2013 Steven Grace. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SLGViewController;

@interface SLGAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SLGViewController *viewController;
@property(nonatomic,readonly) NSManagedObjectContext* context;

@end
