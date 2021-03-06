/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicleInformation : NSObject {
    AVExternalDevice *_externalDevice;
    unsigned int _mapsFallbackAmbientBrightness;
}

@property (nonatomic, readonly) unsigned int driverPosition;
@property (nonatomic, retain) AVExternalDevice *externalDevice;
@property (nonatomic, readonly) unsigned int interactionRestrictions;
@property (nonatomic) unsigned int mapsFallbackAmbientBrightness;
@property (nonatomic, readonly) unsigned int vehicleAmbientBrightness;

- (void).cxx_destruct;
- (void)_handleLimitedUIChanged:(id)arg1;
- (void)_handleNightModeChanged:(id)arg1;
- (void)_screenDidUpdate:(id)arg1;
- (void)dealloc;
- (unsigned int)driverPosition;
- (id)externalDevice;
- (id)init;
- (unsigned int)interactionRestrictions;
- (unsigned int)mapsFallbackAmbientBrightness;
- (void)setExternalDevice:(id)arg1;
- (void)setMapsFallbackAmbientBrightness:(unsigned int)arg1;
- (unsigned int)vehicleAmbientBrightness;

@end
