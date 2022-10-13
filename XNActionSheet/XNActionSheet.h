//
//  XNActionSheet.h
//  XNActionSheet
//
//  Created by Apple on 2021/7/2.
//

#import <UIKit/UIKit.h>

typedef void(^xmActionHandler)(NSUInteger index);

@interface XNActionSheet : NSObject

/**
 *  底部ActionSheet
 *
 *  @param actionTitle      按钮标题，数组
 *  @param actionHandler    按钮响应事件
 */
+ (void)showActionWithTitles:(NSArray *)actionTitle
                actionHander:(xmActionHandler)actionHandler;

@end

