//
//  XNButton.m
//  XNActionSheet
//
//  Created by Apple on 2021/7/2.
//

#import "XNButton.h"

@implementation XNButton

- (void)initWithBlock:(ClickActionBlock)clickActionBlock for:(UIControlEvents)event{
    [self addTarget:self action:@selector(goAction:) forControlEvents:event];
    self.caBlock = clickActionBlock;
}

- (void)goAction:(UIButton *)btn{
    self.caBlock(btn);
}

@end
