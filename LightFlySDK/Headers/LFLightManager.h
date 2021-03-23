

//
//  LFLightManager.h
//  LightFlySDK
//
//  Updated by Babar on 21/10/2019
//  Created by **** on 19/10/2016.
//  Copyright © 2016 Jetcomm Technologies Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LFLight;
@protocol LFLightManagerDelegate;

/**

 The LFLightManager object is your entry point to the VLC light service.
 
 */
@interface LFLightManager : NSObject

/**
 Specifies the delegate to receive tracking callbacks.
 */
@property (nonatomic, weak) id <LFLightManagerDelegate> delegate;

/**
 Returns `YES` if camera is enabled to track VLC lights.
 */
@property (nonatomic, readonly) BOOL isTracking;


@property (nonatomic, readonly) NSString* sdkVersion;
/** Returns the SDK version*/

@property (nonatomic, readonly) NSString* expiryDate;
/**Returns the Expiray date in format MM-YYYY*/

/**
 By default, this is `NO` and `-startTracking` will initiate an `AVCaptureSession` for rear camera.
 
 Setting this property to `YES` will require calling `-startTracking` again in order to take effect.
 */
@property (nonatomic, assign) BOOL isFront;

/**
 Start tracking VLC light. The camera defined in `isFront` will be used.
 */

@property (nonatomic, assign) NSString* activationKey;

/**
This will acivate the SDK upto a subscribed expiry date. It must be set before 'startTracking'.
 */


- (void)startTracking;

/**
 Stop tracking VLC light.
 */
- (void)stopTracking;

@end

/**
 Delegate for LFLightManager.
 */
@protocol LFLightManagerDelegate <NSObject>

/**
 Invoked when a VLC light is in the vision of camera.
 
 This method will be called in each frame whenever VLC light is in range.
 
 At this moment there is no notification on when the light is moved out,
 instead, use a timeout in your code to regard any lights to be out of range.
 */
- (void)lightManager:(LFLightManager *)manager didTrackLight:(LFLight *)light;

- (void)lightManager:(LFLightManager *)manager didUpdateProgress:(float)progress;


@end

