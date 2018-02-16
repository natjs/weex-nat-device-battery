//
//  WeexNatDeviceBattery.m
//
//  Created by huangyake on 17/1/7.
//  Copyright © 2017 Instapp. All rights reserved.
//

#import "WeexNatDeviceBattery.h"
#import <WeexPluginLoader/WeexPluginLoader.h>
#import <NatBattery/NatBattery.h>

@implementation WeexNatDeviceBattery
@synthesize weexInstance;

WX_PlUGIN_EXPORT_MODULE(nat/device/battery, WeexNatDeviceBattery)
WX_EXPORT_METHOD(@selector(status:))

- (void)status:(WXModuleCallback)callback{
    [[NatBattery singletonManger] status:^(id error, id result) {
        if (callback) {
            if (error) {
                callback(error);
            } else {
                callback(result);
            }
        }
    }];
}

@end
