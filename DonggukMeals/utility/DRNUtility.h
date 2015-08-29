//
//  DRNUtility.h
//  DonggukMeals
//
//  Created by 1001246 on 2015. 3. 21..
//  Copyright (c) 2015년 Darren Line. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DRNUtility : NSObject

+ (CGRect)screenBounds;
+ (CGSize)screenSize;
+ (CGFloat)screenWidth;
+ (CGFloat)screenHeight;

+ (CGFloat)statusBarHeight;

+ (NSString *)versionString;

@end
