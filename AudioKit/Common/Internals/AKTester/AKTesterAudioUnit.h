//
//  AKTesterAudioUnit.h
//  AudioKit
//
//  Autogenerated by scripts by Aurelius Prochazka. Do not edit directly.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

#ifndef AKTesterAudioUnit_h
#define AKTesterAudioUnit_h

#import <AudioToolbox/AudioToolbox.h>

#import "soundpipe.h"
#import "md5.h"
#import "test.h"

@interface AKTesterAudioUnit : AUAudioUnit
- (void)setupTest:(sp_test *)test samples:(int)samples;
@end

#endif /* AKTesterAudioUnit_h */
