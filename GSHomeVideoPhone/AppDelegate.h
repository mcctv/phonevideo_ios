//
//  AppDelegate.h
//  GSHomeVideoPhone
//
//  Created by mcctv on 14-5-13.
//  Copyright (c) 2014年 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

-(NSString*)GetDocPath;
-(NSString*)CreateFileInDoc:(NSString*)strName;

@end
