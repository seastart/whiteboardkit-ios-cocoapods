//
//  VCSWhiteBoardObjects.h
//  VCSWhiteBoardKit
//
//  Created by SailorGa on 2024/4/9.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


#pragma mark - 画板配置参数
/// 画板配置参数
@interface VCSWhiteBoardConfig : NSObject

/// 画板地址
@property (nonatomic, copy) NSString *drawingHost;
/// 画板端口
@property (nonatomic, assign) int drawingPort;
/// 房间标识
@property (nonatomic, copy) NSString *roomId;
/// 用户标识
@property (nonatomic, copy) NSString *userId;
/// 画板读写权限
@property (nonatomic, assign) BOOL readwrite;
/// 橡皮擦图标
@property (nonatomic, strong, nullable) UIImage *eraserImage;
/// 背景图片
@property (nonatomic, strong, nullable) UIImage *backImage;
/// 背景图片地址
@property (nonatomic, copy, nullable) NSString *backImageUrl;

@end


#pragma mark - 画板工具按钮配置参数
/// 画板工具按钮配置参数
@interface VCSWhiteBoardToolButtonParam : NSObject

/// 钢笔按钮标题
@property (nonatomic, copy) NSString *penTitle;
/// 荧光笔按钮标题
@property (nonatomic, copy) NSString *highlighterTitle;
/// 橡皮擦按钮标题
@property (nonatomic, copy) NSString *eraserTitle;
/// 颜色按钮标题
@property (nonatomic, copy) NSString *colorTitle;
/// 清除按钮标题
@property (nonatomic, copy) NSString *clearTitle;
/// 图片按钮标题
@property (nonatomic, copy) NSString *pictureTitle;

@end


NS_ASSUME_NONNULL_END
