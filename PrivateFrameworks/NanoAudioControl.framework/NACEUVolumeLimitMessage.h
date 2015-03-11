/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@class NSString;

@interface NACEUVolumeLimitMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int eUVolumeLimit : 1; 
    NSString *_category;
    float _eUVolumeLimit;
    } _has;
}

@property(retain) NSString * category;
@property float eUVolumeLimit;
@property(readonly) bool hasCategory;
@property bool hasEUVolumeLimit;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)eUVolumeLimit;
- (bool)hasCategory;
- (bool)hasEUVolumeLimit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setEUVolumeLimit:(float)arg1;
- (void)setHasEUVolumeLimit:(bool)arg1;
- (void)writeTo:(id)arg1;

@end