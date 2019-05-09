
#ifndef HauoliTrackerWrapper_h
#define HauoliTrackerWrapper_h

#import <MediaPlayer/MediaPlayer.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@class HauoliTracker;


@interface HauoliTracker : NSObject

@end

@interface HauoliTracker () 
- (int)initTracker:(int)num_mic 
                    init_pos:(double *)init_pos 
                    spk_pos:(double *)spk_pos 
                    mic_pos:(double *)mic_pos;
- (int)start;
- (int)stop;
- (double)getDist;
- (void)getDists:(double *)dists;
- (void)getPos:(double *)pos;
- (int)getState;
- (double)getPower;
- (int)getB;
- (int)getFc;
- (bool)setB:(int)b;
- (bool)setFc:(int)f;
- (bool)setUseFile:(bool)if_file;
- (bool)setRecordAudio:(bool)if_record;
- (bool)setInternalAudio:(bool)internal_audio;
- (bool)setSdkAudio:(bool)sdk_audio;
- (bool)setAllowReset:(bool)allowed;
- (bool)pushAudio:(uint8_t *)y byte_per_elem:(int)byte_per_elem num_elem:(int)num_elem;
- (bool)setSkipTime:(double)time;
// Tap
- (int)getNSeq;
- (int)getNSeqUp;
- (int)getMaxTap;
- (int)getTapStep;
- (void)getCirDiff:(double *)cir_dif_real cir_dif_imag:(double *)cir_dif_imag;
- (void)getPlayBuffer:(short int *)buf;
- (bool)setSeq:(int)num_seq num_seq_up:(int)num_seq_up b:(int)b;
- (bool)setNSeq:(int)num_seq;
- (bool)setNSeqUp:(int)num_seq_up;
- (bool)setMaxTap:(int)max_tap;
- (bool)setTapStep:(int)tap_step;
// Gesture
- (int)getGesture;
- (bool)enableGesture:(bool)enabled;
// UI Related
- (bool)trajCleaned;

@end

#endif /* HauoliTrackerWrapper_h */
