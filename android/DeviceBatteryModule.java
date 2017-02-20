package com.nat.weex;

import com.nat.device_battery.HLBatteryModule;
import com.nat.device_battery.HLModuleResultListener;
import com.taobao.weex.annotation.JSMethod;
import com.taobao.weex.bridge.JSCallback;
import com.taobao.weex.common.WXModule;

/**
 * Created by Daniel on 17/2/17.
 * Copyright (c) 2017 Nat. All rights reserved.
 */

public class DeviceBatteryModule extends WXModule{

    @JSMethod
    public void status(final JSCallback jsCallback){
        HLBatteryModule.getInstance(mWXSDKInstance.getContext()).status(new HLModuleResultListener() {
            @Override
            public void onResult(Object o) {
                jsCallback.invoke(o);
            }
        });
    }
}
