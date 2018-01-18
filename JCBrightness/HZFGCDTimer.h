//
//  HZFGCDTimer.h
//
//  Created by eric on 2017/04/06.
//  Copyright © 2017年 Formax. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HZFGCDTimer : NSObject

/// block is called on supplied queue
- (instancetype)initScheduledTimerWithTimeInterval:(NSTimeInterval)seconds
                                           repeats:(BOOL)repeats
                                             queue:(dispatch_queue_t)queue
                                             block:(dispatch_block_t)block;

+ (instancetype)scheduledTimerWithTimeInterval:(NSTimeInterval)seconds
                                       repeats:(BOOL)repeats
                                         queue:(dispatch_queue_t)queue
                                         block:(dispatch_block_t)block;

// block is called on main queue
- (instancetype)initScheduledTimerWithTimeInterval:(NSTimeInterval)seconds
                                           repeats:(BOOL)repeats
                                             block:(dispatch_block_t)block;

+ (instancetype)scheduledTimerWithTimeInterval:(NSTimeInterval)seconds
                                       repeats:(BOOL)repeats
                                         block:(dispatch_block_t)block;

- (void)invalidate;

@end
