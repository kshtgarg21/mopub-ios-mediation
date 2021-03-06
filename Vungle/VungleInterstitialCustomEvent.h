//
//  VungleInterstitialCustomEvent.h
//  MoPubSDK
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#if __has_include(<MoPub/MoPub.h>)
    #import <MoPub/MoPub.h>
#elif __has_include(<MoPubSDK/MoPub.h>)
    #import <MoPubSDK/MoPub.h>
#else
    #import "MPFullscreenAdAdapter.h"
#endif

/*
 * The Vungle SDK does not provide an "application will leave" callback, thus this custom event
 * will not invoke the interstitialCustomEventWillLeaveApplication: delegate method.
 */
@interface VungleInterstitialCustomEvent : MPFullscreenAdAdapter <MPThirdPartyFullscreenAdAdapter>

/**
 * Use the MoPub website to set your app ID in your network settings for Vungle.
 * See the Custom Native Network Setup guide for more information.
 * https://dev.twitter.com/mopub/ad-networks/network-setup-custom-native
 */

@end
