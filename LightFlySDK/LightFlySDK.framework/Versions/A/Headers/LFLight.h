//
//  LFLight.h
//  LightFlySDK
//
//  Created by Alex on 19/10/2016.
//  Copyright © 2016 Jetcomm Technologies Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Represents a VLC light along with identifier information.
 */
@interface LFLight : NSObject

/**
 Returns the identifier of the VLC light.
 */
@property (nonatomic, readonly) NSString *identifier;

@end

