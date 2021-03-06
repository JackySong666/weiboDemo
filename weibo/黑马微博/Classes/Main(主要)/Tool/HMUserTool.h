//
//  HMUserTool.h
//  黑马微博
//
//  Created by apple on 14-7-11.
//  Copyright (c) 2014年 heima. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HMUserInfoParam.h"
#import "HMUserInfoResult.h"
#import "HMUnreadCountParam.h"
#import "HMUnreadCountResult.h"
#import "HMBaseTool.h"

@interface HMUserTool : HMBaseTool
/**
 *  加载用户的个人信息
 *
 *  @param param   请求参数
 *  @param success 请求成功后的回调（请将请求成功后想做的事情写到这个block中）
 *  @param failure 请求失败后的回调（请将请求失败后想做的事情写到这个block中）
 */
+ (void)userInfoWithParam:(HMUserInfoParam *)param success:(void (^)(HMUserInfoResult *result))success failure:(void (^)(NSError *error))failure;

+ (void)unreadCountWithParam:(HMUnreadCountParam *)param success:(void (^)(HMUnreadCountResult *result))success failure:(void (^)(NSError *error))failure;
@end
