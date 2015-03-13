//
//  LINEActivity.h
//
//  Created by Noda Shimpei on 2012/12/04.
//  Copyright (c) 2012年 @noda_sin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LINEActivity : UIActivity

- (id)init;

- (id)initWithPerformIfLineNotInstalled:(BOOL)performIfLineNotInstalled;

+ (BOOL)isUsableLINE;

@end
