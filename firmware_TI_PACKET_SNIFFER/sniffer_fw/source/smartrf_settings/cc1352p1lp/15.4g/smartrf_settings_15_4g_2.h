#ifndef _SMARTRF_SETTINGS_15_4G_2_H_
#define _SMARTRF_SETTINGS_15_4G_2_H_

//*********************************************************************************
// Generated by SmartRF Studio version 2.13.0 (build #156- CZ settings for CC13x2R and CC26x2R)
// The applied template is compatible with CC13x2 SDK 2.40.xx.xx
// Device: CC1352P Rev. 2.1
//
//*********************************************************************************
#include <ti/devices/DeviceFamily.h>
#include DeviceFamily_constructPath(driverlib/rf_mailbox.h)
#include DeviceFamily_constructPath(driverlib/rf_common_cmd.h)
#include DeviceFamily_constructPath(driverlib/rf_prop_cmd.h)
#include <ti/drivers/rf/RF.h>


// TI-RTOS RF Mode Object
extern RF_Mode Ieee154g2_mode;


// RF Core API commands
extern rfc_CMD_PROP_RADIO_DIV_SETUP_PA_t Ieee154g2_cmdPropRadioDivSetup;
extern rfc_CMD_FS_t Ieee154g2_cmdFs;
extern rfc_CMD_PROP_RX_ADV_t Ieee154g2_cmdPropRxAdv;
extern rfc_CMD_PROP_TX_ADV_t Ieee154g2_cmdPropTxAdv;


// RF Core API Overrides
extern uint32_t Ieee154g2_pOverrides[];


#endif // _SMARTRF_SETTINGS_15_4G_2_H_

