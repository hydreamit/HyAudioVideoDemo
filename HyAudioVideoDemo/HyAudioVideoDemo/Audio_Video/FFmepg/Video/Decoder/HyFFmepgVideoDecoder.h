//
//  HyFFmepgVideoDecoder.h
//  HyVideoDemo
//
//  Created by Hy on 2018/3/5.
//  Copyright © 2018 Hy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HyVideoDecoderProtocol.h"
#import "HyVideoCodec.h"


NS_ASSUME_NONNULL_BEGIN

@interface HyFFmepgVideoDecoder : HyVideoCodec<HyVideoDecoderProtocol>

@end

NS_ASSUME_NONNULL_END
