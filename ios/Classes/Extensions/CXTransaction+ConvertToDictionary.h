/*
*  Copyright (c) 2011-2020, Zingaya, Inc. All rights reserved.
*/

#import <CallKit/CallKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXTransaction (ConvertToDictionary)

- (NSDictionary *)toDictionary;

@end

NS_ASSUME_NONNULL_END
