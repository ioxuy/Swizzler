/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSDate, NSMutableArray, NSTimer;

@interface EmailStatusIndicator : _ABAddressBookAddRecord
{
    BOOL bulkReceive;
    int mode;
    double turnOffThreshold;
    double turnOffBulkReceiveModeAfterInactivity;
    double turnOffBulkReceiveModeRegardlessInactivity;
    struct UIAListener *emailDBListener;
    NSDate *lastActivityDate;
    NSDate *lastSoundAlertDate;
    NSDate *monitoringStartupDate;
    NSDate *lastDisplayedVisualIndicatorFromQueueDate;
    NSDate *lastEmailReceivedQueueProcessingDate;
    double monitoringPeriod;
    double soundAlertInterval;
    NSTimer *monitorTimer;
    BOOL acitvityDetected;
    NSMutableArray *emailReceivedQueue;
    int emailReceivedQueueThreshold;
    double emailReceivedQueueProcessingInterval;
    NSMutableArray *visualIndicatorTextQueue;
    double visualIndicatorQueueDisplayInterval;
    int visualIndicatorQueueThreshold;
    NSDate *lastEmailLeavingOutboxDate;
    double lastEmailLeavingOutboxInterval;
    int leavingOutboxNotifCount;
}

- (void)setLastEmailReceivedQueueProcessingDate:(id)fp8;
- (id)lastEmailReceivedQueueProcessingDate;
- (void)setEmailReceivedQueue:(id)fp8;
- (id)emailReceivedQueue;
- (void)setLastEmailLeavingOutboxDate:(id)fp8;
- (id)lastEmailLeavingOutboxDate;
- (void)setLastSoundAlertDate:(id)fp8;
- (id)lastSoundAlertDate;
- (void)setTurnOffBulkReceiveModeRegardlessInactivity:(double)fp8;
- (double)turnOffBulkReceiveModeRegardlessInactivity;
- (void)setTurnOffBulkReceiveModeAfterInactivity:(double)fp8;
- (double)turnOffBulkReceiveModeAfterInactivity;
- (void)setVisualIndicatorTextQueue:(id)fp8;
- (id)visualIndicatorTextQueue;
- (void)setMonitorTimer:(id)fp8;
- (id)monitorTimer;
- (void)setLastDisplayedVisualIndicatorFromQueueDate:(id)fp8;
- (id)lastDisplayedVisualIndicatorFromQueueDate;
- (void)setMonitoringStartupDate:(id)fp8;
- (id)monitoringStartupDate;
- (void)setLastActivityDate:(id)fp8;
- (id)lastActivityDate;
- (void)setTurnOffThreshold:(double)fp8;
- (double)turnOffThreshold;
- (void)setBulkReceive:(BOOL)fp8;
- (BOOL)bulkReceive;
- (void)dealloc;
- (void)updateLastActivityDate;
- (void)playAudibleIndicatorIfRelevant;
- (void)enableBulk:(BOOL)fp8;
- (void)queueVisualIndicatorText:(id)fp8 playSound:(BOOL)fp12;
- (void)showVisualIndicatorWithText:(id)fp8;
- (void)onNoMoreAcitvityDetected;
- (void)onFirstAcitvityDetected;
- (void)onEmailReceivedWithRecordNum:(unsigned short)fp8;
- (void)turnIntoBulkMode;
- (void)handleVisualIndicatorQueue;
- (void)processEmailReceivedQueue;
- (void)onDbNotif:(id)fp8;
- (void)monitor:(id)fp8;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (void)enableMonitoring:(BOOL)fp8;
- (id)init;

@end

