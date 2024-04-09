//
//  VCSWhiteBoardView.h
//  VCSWhiteBoardKit
//
//  Created by SailorGa on 2024/4/9.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <UIKit/UIKit.h>

#if __has_include(<VCSWhiteBoardKit/VCSWhiteBoardKit.h>)
#import <VCSWhiteBoardKit/VCSWhiteBoardObjects.h>
#import <VCSWhiteBoardKit/VCSWhiteBoardEnum.h>
#else
#import "VCSWhiteBoardObjects.h"
#import "VCSWhiteBoardEnum.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@class VCSWhiteBoardView;

#pragma mark - 电子画板回调代理
@protocol VCSWhiteBoardViewDelegate <NSObject>
#pragma mark 可选实现代理方法
@optional

#pragma mark - ----- Core Delegate Methods -----
#pragma mark 画板连接状态回调
/// 画板连接状态回调
/// - Parameters:
///   - whiteBoardView: 画板实例
///   - state: 连接状态
- (void)whiteBoardView:(VCSWhiteBoardView *)whiteBoardView onConnectStateChange:(VCSDrawingConnectState)state;

#pragma mark 画板内容清空事件
/// 画板内容清空事件
/// - Parameters:
///   - whiteBoardView: 画板实例
- (void)onDrawingClearEvent:(VCSWhiteBoardView *)whiteBoardView;

#pragma mark 工具栏图片按钮选中事件
/// 工具栏图片按钮选中事件
/// - Parameters:
///   - whiteBoardView: 画板实例
- (void)onSelectedPictureEvent:(VCSWhiteBoardView *)whiteBoardView;

#pragma mark 画板背景图片变更事件
/// 画板背景图片变更事件
/// - Parameters:
///   - whiteBoardView: 画板实例
///   - imageUrl: 背景图片路径
- (void)whiteBoardView:(VCSWhiteBoardView *)whiteBoardView onChangeDrawBackImageEvent:(nullable NSString *)imageUrl;

@end

#pragma mark - VCSWhiteBoardView
@interface VCSWhiteBoardView : UIView

#pragma mark - 设置图片操作按钮隐藏状态
/// 设置图片操作按钮隐藏状态
/// - Parameter hidden: 是否隐藏
- (void)setPictureButtonWithHidden:(BOOL)hidden;

#pragma mark - 设置工具按钮配置参数
/// 设置工具按钮配置参数
/// - Parameter param: 配置参数
- (void)setDrawingToolButtonWithParam:(VCSWhiteBoardToolButtonParam *)param;

#pragma mark - 设置背景图片
/// 设置背景图片
/// - Parameters:
///   - image: 背景图片
///   - imageUrl: 图片地址
- (void)setDrawingBackImageWithImage:(nullable UIImage *)image imageUrl:(nullable NSString *)imageUrl;

#pragma mark - 设置本地背景图片
/// 设置本地背景图片
/// - Parameter image: 背景图片
- (void)setDrawingLocalBackImageWithImage:(nullable UIImage *)image;

#pragma mark - 加入电子画板
/// 加入电子画板
/// - Parameters:
///   - boardConfig: 配置参数
///   - delegate: 代理回调
- (void)enterDrawingBoardWithBoardConfig:(VCSWhiteBoardConfig *)boardConfig delegate:(nullable id <VCSWhiteBoardViewDelegate>)delegate;

#pragma mark - 清空画板内容
/// 清空画板内容
- (void)drawingClear;

@end

NS_ASSUME_NONNULL_END
