/* This is an autogenerated file */
/* Tag: noCheckHeader */

/*    CONFIDENTIAL */
/*    Copyright (C) Cambridge Silicon Radio Ltd 2008. All rights reserved. */

#ifndef PALDATA_SYS_OUTPUT_H
#define PALDATA_SYS_OUTPUT_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef SME_API_VALIDATE

#define call_paldata_sys_capabilities_req(context, appHandle) CSR_UNUSED(appHandle)
#define call_paldata_sys_eapol_req(context, appHandle, subscriptionHandle, frameLength, frame, freeFunction) CSR_UNUSED(appHandle), CSR_UNUSED(subscriptionHandle), CSR_UNUSED(frameLength), CSR_UNUSED(frame), CSR_UNUSED(freeFunction)
#define call_paldata_sys_hip_req(context, mlmeCommandLength, mlmeCommand, dataRef1Length, dataRef1, dataRef2Length, dataRef2) CSR_UNUSED(mlmeCommandLength), CSR_UNUSED(mlmeCommand), CSR_UNUSED(dataRef1Length), CSR_UNUSED(dataRef1), CSR_UNUSED(dataRef2Length), CSR_UNUSED(dataRef2)
#define call_paldata_sys_ma_unitdata_req(context, appHandle, subscriptionHandle, frameLength, frame, freeFunction, priority, serviceClass, reqIdentifier) CSR_UNUSED(appHandle), CSR_UNUSED(subscriptionHandle), CSR_UNUSED(frameLength), CSR_UNUSED(frame), CSR_UNUSED(freeFunction), CSR_UNUSED(priority), CSR_UNUSED(serviceClass), CSR_UNUSED(reqIdentifier)
#define call_paldata_sys_ma_unitdata_rsp(context, subscriptionHandle, result) CSR_UNUSED(subscriptionHandle), CSR_UNUSED(result)
#define call_paldata_sys_ma_unitdata_subscribe_req(context, appHandle, encapsulation, protocol, oui) CSR_UNUSED(appHandle), CSR_UNUSED(encapsulation), CSR_UNUSED(protocol), CSR_UNUSED(oui)
#define call_paldata_sys_ma_unitdata_unsubscribe_req(context, appHandle, subscriptionHandle) CSR_UNUSED(appHandle), CSR_UNUSED(subscriptionHandle)

#else

#include "paldata_sys_sap/paldata_sys_sap.h"

#ifdef FSM_TRANSITION_LOCK

#define call_paldata_sys_capabilities_req(context, p_appHandle) \
    (void)CsrMutexUnlock(context->transitionLock); \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_CAPABILITIES_REQ appHandle = %p) To(env)",\
        fsm_current_process_name((context)), \
        p_appHandle    ));\
    paldata_sys_capabilities_req(context->externalContext, p_appHandle); \
    (void)CsrMutexLock(context->transitionLock);

#define call_paldata_sys_eapol_req(context, p_appHandle, p_subscriptionHandle, p_frameLength, p_frame, p_freeFunction) \
    (void)CsrMutexUnlock(context->transitionLock); \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_EAPOL_REQ appHandle = %p) To(env)",\
        fsm_current_process_name((context)), \
        p_appHandle    ));\
    paldata_sys_eapol_req(context->externalContext, p_appHandle, p_subscriptionHandle, p_frameLength, p_frame, p_freeFunction); \
    (void)CsrMutexLock(context->transitionLock);

#define call_paldata_sys_hip_req(context, p_mlmeCommandLength, p_mlmeCommand, p_dataRef1Length, p_dataRef1, p_dataRef2Length, p_dataRef2) \
    (void)CsrMutexUnlock(context->transitionLock); \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_HIP_REQ) To(env)",\
        fsm_current_process_name((context))    ));\
    paldata_sys_hip_req(context->externalContext, p_mlmeCommandLength, p_mlmeCommand, p_dataRef1Length, p_dataRef1, p_dataRef2Length, p_dataRef2); \
    (void)CsrMutexLock(context->transitionLock);

#define call_paldata_sys_ma_unitdata_req(context, p_appHandle, p_subscriptionHandle, p_frameLength, p_frame, p_freeFunction, p_priority, p_serviceClass, p_reqIdentifier) \
    (void)CsrMutexUnlock(context->transitionLock); \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_MA_UNITDATA_REQ appHandle = %p priority = %s serviceClass = %s) To(env)",\
        fsm_current_process_name((context)), \
        p_appHandle, \
        trace_unifi_Priority(p_priority), \
        trace_unifi_ServiceClass(p_serviceClass)    ));\
    paldata_sys_ma_unitdata_req(context->externalContext, p_appHandle, p_subscriptionHandle, p_frameLength, p_frame, p_freeFunction, p_priority, p_serviceClass, p_reqIdentifier); \
    (void)CsrMutexLock(context->transitionLock);

#define call_paldata_sys_ma_unitdata_rsp(context, p_subscriptionHandle, p_result) \
    (void)CsrMutexUnlock(context->transitionLock); \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_MA_UNITDATA_RSP result = %s) To(env)",\
        fsm_current_process_name((context)), \
        trace_unifi_Status(p_result)    ));\
    paldata_sys_ma_unitdata_rsp(context->externalContext, p_subscriptionHandle, p_result); \
    (void)CsrMutexLock(context->transitionLock);

#define call_paldata_sys_ma_unitdata_subscribe_req(context, p_appHandle, p_encapsulation, p_protocol, p_oui) \
    (void)CsrMutexUnlock(context->transitionLock); \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_MA_UNITDATA_SUBSCRIBE_REQ appHandle = %p encapsulation = %s) To(env)",\
        fsm_current_process_name((context)), \
        p_appHandle, \
        trace_unifi_Encapsulation(p_encapsulation)    ));\
    paldata_sys_ma_unitdata_subscribe_req(context->externalContext, p_appHandle, p_encapsulation, p_protocol, p_oui); \
    (void)CsrMutexLock(context->transitionLock);

#define call_paldata_sys_ma_unitdata_unsubscribe_req(context, p_appHandle, p_subscriptionHandle) \
    (void)CsrMutexUnlock(context->transitionLock); \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_MA_UNITDATA_UNSUBSCRIBE_REQ appHandle = %p) To(env)",\
        fsm_current_process_name((context)), \
        p_appHandle    ));\
    paldata_sys_ma_unitdata_unsubscribe_req(context->externalContext, p_appHandle, p_subscriptionHandle); \
    (void)CsrMutexLock(context->transitionLock);


#else

#define call_paldata_sys_capabilities_req(context, p_appHandle) \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_CAPABILITIES_REQ) To(env)", \
                   fsm_current_process_name((context)))); \
    paldata_sys_capabilities_req(context->externalContext, p_appHandle);

#define call_paldata_sys_eapol_req(context, p_appHandle, p_subscriptionHandle, p_frameLength, p_frame, p_freeFunction) \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_EAPOL_REQ) To(env)", \
                   fsm_current_process_name((context)))); \
    paldata_sys_eapol_req(context->externalContext, p_appHandle, p_subscriptionHandle, p_frameLength, p_frame, p_freeFunction);

#define call_paldata_sys_hip_req(context, p_mlmeCommandLength, p_mlmeCommand, p_dataRef1Length, p_dataRef1, p_dataRef2Length, p_dataRef2) \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_HIP_REQ) To(env)", \
                   fsm_current_process_name((context)))); \
    paldata_sys_hip_req(context->externalContext, p_mlmeCommandLength, p_mlmeCommand, p_dataRef1Length, p_dataRef1, p_dataRef2Length, p_dataRef2);

#define call_paldata_sys_ma_unitdata_req(context, p_appHandle, p_subscriptionHandle, p_frameLength, p_frame, p_freeFunction, p_priority, p_serviceClass, p_reqIdentifier) \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_MA_UNITDATA_REQ) To(env)", \
                   fsm_current_process_name((context)))); \
    paldata_sys_ma_unitdata_req(context->externalContext, p_appHandle, p_subscriptionHandle, p_frameLength, p_frame, p_freeFunction, p_priority, p_serviceClass, p_reqIdentifier);

#define call_paldata_sys_ma_unitdata_rsp(context, p_subscriptionHandle, p_result) \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_MA_UNITDATA_RSP) To(env)", \
                   fsm_current_process_name((context)))); \
    paldata_sys_ma_unitdata_rsp(context->externalContext, p_subscriptionHandle, p_result);

#define call_paldata_sys_ma_unitdata_subscribe_req(context, p_appHandle, p_encapsulation, p_protocol, p_oui) \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_MA_UNITDATA_SUBSCRIBE_REQ) To(env)", \
                   fsm_current_process_name((context)))); \
    paldata_sys_ma_unitdata_subscribe_req(context->externalContext, p_appHandle, p_encapsulation, p_protocol, p_oui);

#define call_paldata_sys_ma_unitdata_unsubscribe_req(context, p_appHandle, p_subscriptionHandle) \
    sme_trace_msc((TR_MSC, "MSC MESSAGE :: From(%s) Event(PALDATA_SYS_MA_UNITDATA_UNSUBSCRIBE_REQ) To(env)", \
                   fsm_current_process_name((context)))); \
    paldata_sys_ma_unitdata_unsubscribe_req(context->externalContext, p_appHandle, p_subscriptionHandle);


#endif
#endif

#ifdef __cplusplus
}
#endif

#endif /* PALDATA_SYS_OUTPUT_H */

