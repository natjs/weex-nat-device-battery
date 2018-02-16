//
//  WeexNatDeviceBattery.h
//
//  Created by huangyake on 17/1/7.
//  Copyright © 2017 Instapp. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>

@protocol WeexNatDeviceBatteryPro <WXModuleProtocol>

- (void)status:(WXModuleCallback)callback;

@end

@interface WeexNatDeviceBattery : NSObject<WeexNatDeviceBatteryPro>
@end
