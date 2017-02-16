//
//  NatWeexBattery.h
//
//  Created by huangyake on 17/1/7.
//  Copyright © 2017 Nat. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>


@protocol NatWeexBatteryPro <WXModuleProtocol>

- (void)status:(WXModuleCallback)callback;
@end

@interface NatWeexBattery : NSObject<NatWeexBatteryPro>

@end
