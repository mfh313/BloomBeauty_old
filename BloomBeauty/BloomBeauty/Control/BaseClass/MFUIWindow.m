//
//  MFUIWindow.m
//  BloomBeauty
//
//  Created by Administrator on 15/12/22.
//  Copyright © 2015年 EEKA. All rights reserved.
//

#import "MFUIWindow.h"

@implementation MFUIWindow

-(void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

@end
