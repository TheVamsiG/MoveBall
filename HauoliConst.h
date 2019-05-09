
#ifndef HAUOLI_CONSTANT_H
#define HAUOLI_CONSTANT_H

// #define SAMPLING_RATE             96000
#define SAMPLING_RATE             48000
// #define SAMPLING_RATE             44100
#define SOUND_SPEED               346600

#define CONTROLLER_STATE_STOP     0
#define CONTROLLER_STATE_READY    1
#define CONTROLLER_STATE_TRACKING 2

#define TRACKER_STATE_STOP        1
#define TRACKER_STATE_SYNC        2
#define TRACKER_STATE_SKEW        3
#define TRACKER_STATE_CANCEL      4
#define TRACKER_STATE_CALI        5
#define TRACKER_STATE_TRACKING    6

#define RESULT_OK                 1
#define RESULT_INIT_FAIL          2
#define RESULT_START_FAIL         3
#define RESULT_EXPIRED            4

// Gesture
#define GESTURE_NONE              0
#define GESTURE_TICKLE            1
#define GESTURE_HIT               2
#define GESTURE_PAT               3


#endif // HAUOLI_CONSTANT_H
