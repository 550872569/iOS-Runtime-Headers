/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceFeature : CIFeature {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    boolhasFaceAngle;
    boolhasLeftEyePosition;
    boolhasMouthPosition;
    boolhasRightEyePosition;
    boolhasSmile;
    boolhasTrackingFrameCount;
    boolhasTrackingID;
    boolleftEyeClosed;
    boolrightEyeClosed;
    } bounds;
    float faceAngle;
    } leftEyePosition;
    } mouthPosition;
    } rightEyePosition;
    int trackingFrameCount;
    int trackingID;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property float faceAngle;
@property bool hasFaceAngle;
@property bool hasLeftEyePosition;
@property bool hasMouthPosition;
@property bool hasRightEyePosition;
@property bool hasSmile;
@property bool hasTrackingFrameCount;
@property bool hasTrackingID;
@property bool leftEyeClosed;
@property struct CGPoint { double x1; double x2; } leftEyePosition;
@property struct CGPoint { double x1; double x2; } mouthPosition;
@property bool rightEyeClosed;
@property struct CGPoint { double x1; double x2; } rightEyePosition;
@property int trackingFrameCount;
@property int trackingID;

+ (id)faceFeatureWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)faceFeaturesWithBoundsArray:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 count:(unsigned long long)arg2;

- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (float)faceAngle;
- (bool)hasFaceAngle;
- (bool)hasLeftEyePosition;
- (bool)hasMouthPosition;
- (bool)hasRightEyePosition;
- (bool)hasSmile;
- (bool)hasTrackingFrameCount;
- (bool)hasTrackingID;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 hasLeftEyePosition:(bool)arg2 leftEyePosition:(struct CGPoint { double x1; double x2; })arg3 hasRightEyePosition:(bool)arg4 rightEyePosition:(struct CGPoint { double x1; double x2; })arg5 hasMouthPosition:(bool)arg6 mouthPosition:(struct CGPoint { double x1; double x2; })arg7 hasFaceAngle:(bool)arg8 faceAngle:(float)arg9 hasTrackingID:(bool)arg10 trackingID:(int)arg11 hasTrackingFrameCount:(bool)arg12 trackingFrameCount:(int)arg13 hasSmile:(bool)arg14 leftEyeClosed:(bool)arg15 rightEyeClosed:(bool)arg16;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)leftEyeClosed;
- (struct CGPoint { double x1; double x2; })leftEyePosition;
- (struct CGPoint { double x1; double x2; })mouthPosition;
- (bool)rightEyeClosed;
- (struct CGPoint { double x1; double x2; })rightEyePosition;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceAngle:(float)arg1;
- (void)setHasFaceAngle:(bool)arg1;
- (void)setHasLeftEyePosition:(bool)arg1;
- (void)setHasMouthPosition:(bool)arg1;
- (void)setHasRightEyePosition:(bool)arg1;
- (void)setHasSmile:(bool)arg1;
- (void)setHasTrackingFrameCount:(bool)arg1;
- (void)setHasTrackingID:(bool)arg1;
- (void)setLeftEyeClosed:(bool)arg1;
- (void)setLeftEyePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMouthPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRightEyeClosed:(bool)arg1;
- (void)setRightEyePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTrackingFrameCount:(int)arg1;
- (void)setTrackingID:(int)arg1;
- (int)trackingFrameCount;
- (int)trackingID;
- (id)type;

@end