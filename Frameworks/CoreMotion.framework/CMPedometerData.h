/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPedometerData : NSObject <HDSensorDatum, NSCopying, NSSecureCoding> {
    NSNumber *fActiveTime;
    NSNumber *fCurrentCadence;
    NSNumber *fCurrentPace;
    NSNumber *fDistance;
    NSDate *fEndDate;
    NSNumber *fFloorsAscended;
    NSNumber *fFloorsDescended;
    NSNumber *fIsOdometerDistance;
    NSNumber *fIsOdometerPace;
    NSNumber *fNumberOfSteps;
    NSNumber *fRecordId;
    NSUUID *fSourceId;
    NSDate *fStartDate;
}

@property (nonatomic, readonly) NSNumber *averageActivePace;
@property (nonatomic, readonly) NSNumber *currentCadence;
@property (nonatomic, readonly) NSNumber *currentPace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *distance;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSNumber *floorsAscended;
@property (nonatomic, readonly) NSNumber *floorsDescended;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSNumber *numberOfSteps;
@property (nonatomic, readonly) NSNumber *pace;
@property (nonatomic, readonly) int recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

+ (id)maxPedometerEntries;
+ (BOOL)supportsSecureCoding;

- (id)activeTime;
- (id)averageActivePace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCadence;
- (id)currentPace;
- (void)dealloc;
- (id)description;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)floorsAscended;
- (id)floorsDescended;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2 steps:(int)arg3 distance:(double)arg4 floorsAscended:(id)arg5 floorsDescended:(id)arg6 recordID:(int)arg7 currentPace:(id)arg8 currentCadence:(id)arg9 activeTime:(id)arg10 sourceId:(id)arg11 isOdometerDistance:(id)arg12 isOdometerPace:(id)arg13;
- (BOOL)isOdometerDistance;
- (BOOL)isOdometerPace;
- (id)numberOfSteps;
- (id)pace;
- (int)recordId;
- (id)sourceId;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)date;
- (int)recordID;

@end
