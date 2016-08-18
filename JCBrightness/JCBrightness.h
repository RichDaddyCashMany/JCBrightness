//
//  JCBrightness.h
//
//  Created by HJaycee on 16/8/13.
//  Copyright © 2016年 HJaycee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JCBrightness : NSObject

/*!
 @method
 @abstract 逐步设置亮度
 */
+ (void)graduallySetBrightness:(CGFloat)value;

/*!
 @method
 @abstract 逐步恢复亮度
 */
+ (void)graduallyResumeBrightness;


@end
