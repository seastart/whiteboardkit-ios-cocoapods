//
//  VCSWhiteBoardEnum.h
//  VCSWhiteBoardKit
//
//  Created by SailorGa on 2024/4/9.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


#pragma mark - 电子画板连接状态
/**
 电子画板连接状态
 
 - VCSDrawingConnectStateNormal: 默认状态
 - VCSDrawingConnectStateSucceed: 连接成功
 - VCSDrawingConnectStateFail: 连接失败
 */
typedef enum : NSInteger {
    
    VCSDrawingConnectStateNormal = 0,
    VCSDrawingConnectStateSucceed = 1,
    VCSDrawingConnectStateFail = 2,
} VCSDrawingConnectState;


NS_ASSUME_NONNULL_END
