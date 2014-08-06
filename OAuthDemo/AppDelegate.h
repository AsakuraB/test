//
//  AppDelegate.h
//  OAuthDemo
//
//  Created by Lee Larry on 16/6/14.
//  Copyright (c) 2014年 OW.produced. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, WeiboSDKDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSString *wbToken;
@property (strong, nonatomic) NSString *userId;

@end
