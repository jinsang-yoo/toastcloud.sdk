//
//  ToastNetworkStatus.h
//  ToastCommon
//
//  Created by JooHyun Lee on 2018. 6. 29..
//  Copyright © 2018년 NHNEnt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>

typedef NS_ENUM(NSUInteger, ToastNetworkType) {
    ToastNetworkTypeNone,
    ToastNetworkTypeWIFI,
    ToastNetworkTypeWWAN,
};

@interface ToastNetworkStatus : NSObject

@property (nonatomic, assign, readonly) BOOL isAvailable;
@property (nonatomic, assign, readonly) ToastNetworkType type;
@property (nonatomic, strong, readonly) NSString *typeString;

- (instancetype)initWithNetworkType:(ToastNetworkType)type;
- (instancetype)initWithReachabilityFlags:(SCNetworkReachabilityFlags)flags;

@end
