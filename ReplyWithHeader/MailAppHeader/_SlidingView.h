#import <objc/NSObject.h>

@interface _SlidingView : NSObject
{
    double _startTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    struct CGRect _startFrame;	// 24 = 0x18
    struct CGRect _endFrame;	// 56 = 0x38
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
- (struct CGRect)frameForTime:(double)arg1;

@end

