//
//  MFCollectionViewCell.h
//  BloomBeauty
//
//  Created by Administrator on 15/12/12.
//  Copyright © 2015年 EEKA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MFCollectionViewCell : UICollectionViewCell <XXNibBridge>
{
    UIView* m_subContentView;
}

@property(strong, nonatomic) UIView* m_subContentView;

@end
