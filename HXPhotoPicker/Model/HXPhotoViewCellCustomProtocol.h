//
//  HXPhotoViewCellCustomProtocol.h
//  照片选择器
//
//  Created by 洪欣 on 2020/7/21.
//  Copyright © 2020 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class HXPhotoSubViewCell, HXPhotoModel;
@protocol HXPhotoViewCellCustomProtocol <NSObject>
@optional

/// 需要添加到cell上的自定义view
/// 此代理只会在第一次添加到父视图上调用，防止重用请在 setCustomViewData:model:indexPath: 回调里赋值
- (UIView *)customView:(HXPhotoSubViewCell *)cell
             indexPath:(NSIndexPath *)indexPath;

/// 设置自定义view上的数据
/// @param customView 通过 customView:indexPath: 返回的view是同一个view
/// @param model 当前模型
- (void)setCustomViewData:(UIView *)customView
                    model:(HXPhotoModel *)model
                indexPath:(NSIndexPath *)indexPath;

/// 自定义view的frame
- (CGRect)customViewFrame:(HXPhotoSubViewCell *)cell
                indexPath:(NSIndexPath *)indexPath;

/// 是否隐藏底部资源类型
- (BOOL)shouldHiddenBottomType:(HXPhotoSubViewCell *)cell
                     indexPath:(NSIndexPath *)indexPath;

/// 自定义删除按钮的位置大小
- (CGRect)customDeleteButtonFrame:(HXPhotoSubViewCell *)cell
                        indexPath:(NSIndexPath *)indexPath;
@end

NS_ASSUME_NONNULL_END